// Auto-generated by c_gen.py

#ifndef DATA_H_
#define DATA_H_

#include <stdint.h>

// 1D convolution data
// Input data
// A: input matrix [input_len x input_ch]
// F: filter matrix [kernel_len x input_ch x k_num]
// Output data
// R: output matrix [input_len x k_num]
// Stride: 1
// Padding: 0

// Macros
// ------
#define INPUT_LEN 22
#define INPUT_CH 16
#define KERNEL_LEN 5
#define K_NUM 1
#define STRIDE 1
#define PAD 0

// Input matrix size
#define A_SIZE 352
#define A_ROWS 16
#define A_COLS 22
#define F_SIZE 80
#define F_ROWS 1
#define F_COLS 16

// Output matrix size
#define R_SIZE 72
#define R_ROWS 1
#define R_COLS 18

// Input matrices
// --------------
extern uint8_t A[];
extern uint8_t F[];

// Output matrices
// ---------------
extern uint32_t R[];

#endif // DATA_H_
