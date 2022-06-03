#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 130
#define N_INPUT_2_1 1
#define N_OUTPUTS_2 10
#define N_FILT_2 20
#define N_OUTPUTS_13 10
#define N_FILT_13 5
#define N_OUTPUTS_4 10
#define N_FILT_4 5
#define N_SIZE_1_6 50
#define N_LAYER_7 20
#define N_LAYER_9 10
#define N_LAYER_11 1

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,8> model_default_t;
typedef ap_fixed<16,8> input_t;
typedef ap_fixed<16,8> layer2_t;
typedef ap_fixed<16,8> layer3_t;
typedef ap_fixed<18,8> conv1d_relu_table_t;
typedef ap_fixed<16,8> layer13_t;
typedef ap_fixed<16,8> layer5_t;
typedef ap_fixed<18,8> conv1d_1_relu_table_t;
typedef ap_fixed<16,8> layer7_t;
typedef ap_uint<1> layer7_index;
typedef ap_fixed<16,8> layer8_t;
typedef ap_fixed<18,8> dense_relu_table_t;
typedef ap_fixed<16,8> layer9_t;
typedef ap_uint<1> layer9_index;
typedef ap_fixed<16,8> layer10_t;
typedef ap_fixed<18,8> dense_1_relu_table_t;
typedef ap_fixed<16,8> layer11_t;
typedef ap_uint<1> layer11_index;
typedef ap_fixed<16,8> result_t;
typedef ap_fixed<18,8> dense_2_sigmoid_table_t;

#endif
