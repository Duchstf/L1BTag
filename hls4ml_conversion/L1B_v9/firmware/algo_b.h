#ifndef ALGO_B_H
#define ALGO_B_H

#include <ap_int.h>
#include <hls_stream.h>

typedef ap_uint<64> InputBits;

// For input/output specifications
#define N_JET_PARTICLES  10
#define BOARD_NCHANN 54

void algo_b(InputBits input[BOARD_NCHANN], InputBits output[BOARD_NCHANN]);

#endif