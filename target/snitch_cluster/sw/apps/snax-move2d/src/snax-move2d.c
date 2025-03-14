// #include "snrt.h"
// #include "data.h"


// int main() {
//     // Error variable for validation
//     int err = 0;

//     // Define local pointers for DMA
//     uint32_t *local_src, *local_dst;

//     // Allocate space in TCDM
//     local_src = (uint32_t *)snrt_l1_next();
//     local_dst = local_src + (ROWS * COLS);

//     // Start time for DMA benchmarking
//     uint32_t dma_start = snrt_mcycle();

//     // Use DMA core to transfer 2D data from SRC to DST
//     if (snrt_is_dm_core()) {
//         size_t element_size = sizeof(uint32_t);
//         size_t src_stride = COLS * element_size;
//         size_t dst_stride = COLS * element_size;
//         size_t num_elements_per_row = COLS * element_size;
//         size_t num_rows = ROWS;

//         // Perform 2D DMA transfer
//         snrt_dma_start_2d(local_dst, SRC, num_elements_per_row, dst_stride, src_stride, num_rows);
//     }

//     // Wait for DMA completion
//     snrt_cluster_hw_barrier();

//     // Benchmark DMA end time
//     uint32_t dma_end = snrt_mcycle();

//     // Check correctness
//     if (snrt_is_compute_core()) {
//         for (int i = 0; i < ROWS; ++i) {
//             for (int j = 0; j < COLS; ++j) {
//                 if (local_dst[i * COLS + j] != SRC[i][j]) {
//                     err = 1; // Mark error if data mismatch
//                 }
//             }
//         }
//     }

//     return err;
// }


#include "snrt.h"
#include "data.h"

int main() {
    int err = 0;

    // Local TCDM buffers
    uint32_t *local_src_a, *local_src_b;
    uint32_t *local_dest_a, *local_dest_b;

    // Allocate space in TCDM
    local_src_a = (uint32_t *)snrt_l1_next();
    local_src_b = local_src_a + ROWS;
    local_dest_a = local_src_b + ROWS;
    local_dest_b = local_dest_a + ROWS;

    uint32_t dma_pre_load = snrt_mcycle();

    // Use data mover core to transfer data
    if (snrt_is_dm_core()) {
        size_t elem_size = sizeof(uint32_t);
        size_t dst_stride = elem_size;          // Contiguous in TCDM
        size_t src_stride = COLS * elem_size;   // Skip columns in source

        // Transfer first column
        snrt_dma_start_2d(local_dest_a, &SOURCE[0][COL_A],
                          elem_size, dst_stride, src_stride, ROWS);

        // Transfer second column
        snrt_dma_start_2d(local_dest_b, &SOURCE[0][COL_B],
                          elem_size, dst_stride, src_stride, ROWS);
    }

    // Wait for DMA transfer to complete
    snrt_cluster_hw_barrier();

    // Verify data transfer
    if (snrt_is_compute_core()) {
        for (int i = 0; i < ROWS; i++) {
            if (local_dest_a[i] != SOURCE[i][COL_A] ||
                local_dest_b[i] != SOURCE[i][COL_B]) {
                err = 1;
                // break;
            }
            printf("ROW IDX: %d \n", i);
            printf("LOCAL_DEST: %d \n", local_dest_a[i]);
            printf("SOURCE: %d \n", SOURCE[i][COL_A] );
        }
    }

    return err;
}
