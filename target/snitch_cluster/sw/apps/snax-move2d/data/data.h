// #include <stdint.h>

#define ROWS 5
#define COLS 8

uint32_t SOURCE[ROWS][COLS] = {
    {1,  2,  3,  4,  5,  6,  7,  8 },
    {9,  10, 11, 12, 13, 14, 15, 16},
    {17, 18, 19, 20, 21, 22, 23, 24},
    {25, 26, 27, 28, 29, 30, 31, 32},
    {33, 34, 35, 36, 37, 38, 39, 40}
};

// Select two columns that are not consecutive and not aligned
#define COL_A 2
#define COL_B 5

uint32_t DEST_A[ROWS];
uint32_t DEST_B[ROWS];

