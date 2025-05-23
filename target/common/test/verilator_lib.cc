// Copyright 2020 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

#include <printf.h>
#include <filesystem>
#include <string>

#include "Vtestharness.h"
#include "Vtestharness__Dpi.h"
#include "sim.hh"
#include "tb_lib.hh"
#include "verilated.h"
#include "verilated_vcd_c.h"

// Declare these as globally declared (and parsed) in tb_bin.cc
extern bool WRAPPER_disable_tracing;
extern char *WRAPPER_trace_prefix;

namespace sim {

// Number of cycles between HTIF checks.
const int HTIFTimeInterval = 200;

// We want to return timestamp in picosecond accuracy, assuming that one cycle
// takes 1ns Since 1 cycle takes 2 sim::TIME increments, scale by 500 to get
// time = cycle * 1000 + <some constant>
const int TIME_CYCLES_TO_TIMESTAMP = 500;
void sim_thread_main(void *arg) { ((Sim *)arg)->main(); }

// Sim time.
vluint64_t TIME = 0;

Sim::Sim(int argc, char **argv) : htif_t(argc, argv), ipc(argc, argv) {
    // Search arguments for `--vcd` flag and enable waves if requested
    for (auto i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "--vcd") == 0) {
            printf("VCD wave generation enabled\n");
            vlt_vcd = true;
        }
    }
    Verilated::commandArgs(argc, argv);
}

void Sim::idle() { target.switch_to(); }

/// Execute the simulation.
int Sim::run() {
    host = context_t::current();
    target.init(sim_thread_main, this);
    return htif_t::run();
}

void Sim::main() {
    // Initialize verilator environment.
    Verilated::traceEverOn(true);
    // Allocate the simulation state and VCD trace.
    auto top = std::make_unique<Vtestharness>();
    auto vcd = std::make_unique<VerilatedVcdC>();

    bool clk_i = 0, rst_ni = 0;

    // Trace 8 levels of hierarchy.
    if (vlt_vcd) {
        top->trace(vcd.get(), 8);
        vcd->open("sim.vcd");
        vcd->dump(TIME);
    }
    TIME += 2;

    while (!Verilated::gotFinish()) {
        clk_i = !clk_i;
        rst_ni = TIME >= 8;
        top->clk_i = clk_i;
        top->rst_ni = rst_ni;
        // Evaluate the DUT.
        top->eval();
        if (vlt_vcd) vcd->dump(TIME);
        // Increase global time.
        TIME++;
        // Switch to the HTIF interface in regular intervals.
        if (TIME % HTIFTimeInterval == 0) {
            host->switch_to();
        }
    }

    // Clean up.
    if (vlt_vcd) vcd->close();
}
}  // namespace sim

// Verilator callback to get the current time.
double sc_time_stamp() { return sim::TIME * sim::TIME_CYCLES_TO_TIMESTAMP; }

// DPI calls.
void tb_memory_read(long long addr, int len, const svOpenArrayHandle data) {
    // std::cout << "[TB] Read " << std::hex << addr << std::dec << " (" << len
    //           << " bytes)\n";
    void *data_ptr = svGetArrayPtr(data);
    assert(data_ptr);
    sim::MEM.read(addr, len, (uint8_t *)data_ptr);
}

void tb_memory_write(long long addr, int len, const svOpenArrayHandle data,
                     const svOpenArrayHandle strb) {
    // std::cout << "[TB] Write " << std::hex << addr << std::dec << " (" << len
    //           << " bytes)\n";
    const void *data_ptr = svGetArrayPtr(data);
    const void *strb_ptr = svGetArrayPtr(strb);
    assert(data_ptr);
    assert(strb_ptr);
    sim::MEM.write(addr, len, (const uint8_t *)data_ptr,
                   (const uint8_t *)strb_ptr);
}

svBit disable_tracing() {
    // function to enable/disable tracers
    return WRAPPER_disable_tracing;
}

const char *get_trace_file_prefix() {
    if (WRAPPER_trace_prefix == nullptr) {
        // Use the standard prefix, and create a logs directory if necessary
        std::string foldername = "logs/";
        std::filesystem::create_directories(foldername);
        static std::string log_file_name = "logs/";
        return log_file_name.c_str();
    }
    // Return the one parsed from the command line otherwise
    else {
        return WRAPPER_trace_prefix;
    }
}

const long long clint_addr = sim::BOOTDATA.clint_base;
const long num_cores = sim::BOOTDATA.core_count;

void clint_tick(const svOpenArrayHandle msip) {
    uint8_t *msip_ptr = (uint8_t *)svGetArrayPtr(msip);
    assert(msip_ptr);
    uint32_t read_val;
    for (int i = 0; i < num_cores; i++) {
        if (i % 32 == 0)
            sim::MEM.read(clint_addr + i / 32, sizeof(uint32_t),
                          (uint8_t *)&read_val);
        msip_ptr[i] = (read_val & (1 << (i % 32))) != 0 ? 1 : 0;
    }
}
