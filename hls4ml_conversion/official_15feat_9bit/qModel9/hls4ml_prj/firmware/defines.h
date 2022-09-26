#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 150
#define N_INPUT_2_1 1
#define N_OUTPUTS_2 10
#define N_FILT_2 20
#define N_OUTPUTS_18 10
#define N_FILT_18 5
#define N_OUTPUTS_5 10
#define N_FILT_5 5
#define N_SIZE_1_8 50
#define N_LAYER_9 20
#define N_LAYER_12 10
#define N_LAYER_15 1

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<10,2> conv1d_1_input_default_t;
typedef ap_fixed<10,2> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> layer2_t;
typedef ap_fixed<9,1> weight2_t;
typedef ap_fixed<9,1> bias2_t;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer3_t;
typedef ap_fixed<18,8> Conv1D_1_linear_table_t;
typedef ap_ufixed<9,0,AP_RND,AP_SAT> layer4_t;
typedef ap_fixed<18,8> relu_1_table_t;
typedef ap_fixed<16,6> layer18_t;
typedef ap_fixed<9,1> weight18_t;
typedef ap_fixed<9,1> bias18_t;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer6_t;
typedef ap_fixed<18,8> Conv1D_2_linear_table_t;
typedef ap_ufixed<9,0,AP_RND,AP_SAT> layer7_t;
typedef ap_fixed<18,8> relu_2_table_t;
typedef ap_fixed<16,6> layer9_t;
typedef ap_fixed<9,1> weight9_t;
typedef ap_fixed<9,1> bias9_t;
typedef ap_uint<1> layer9_index;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer10_t;
typedef ap_fixed<18,8> Dense_1_linear_table_t;
typedef ap_ufixed<9,0,AP_RND,AP_SAT> layer11_t;
typedef ap_fixed<18,8> relu_3_table_t;
typedef ap_fixed<16,6> layer12_t;
typedef ap_fixed<9,1> weight12_t;
typedef ap_fixed<9,1> bias12_t;
typedef ap_uint<1> layer12_index;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer13_t;
typedef ap_fixed<18,8> Dense_2_linear_table_t;
typedef ap_ufixed<9,0,AP_RND,AP_SAT> layer14_t;
typedef ap_fixed<18,8> relu_4_table_t;
typedef ap_fixed<16,6> layer15_t;
typedef ap_fixed<9,1> weight15_t;
typedef ap_fixed<9,1> bias15_t;
typedef ap_uint<1> layer15_index;
typedef ap_fixed<16,6,AP_RND,AP_SAT> layer16_t;
typedef ap_fixed<18,8> output_linear_table_t;
typedef ap_fixed<18,8> sigmoidtable_t;
typedef ap_fixed<18,4> sigmoidexp_table_t;
typedef ap_fixed<18,4> sigmoidinv_table_t;
typedef ap_fixed<16,6,AP_RND,AP_SAT> result_t;

#endif
