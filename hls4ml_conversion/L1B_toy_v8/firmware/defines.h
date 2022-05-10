#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 140
#define N_INPUT_2_1 1
#define N_OUTPUTS_2 10
#define N_FILT_2 20
#define N_OUTPUTS_4 10
#define N_FILT_4 5
#define N_LAYER_6 20
#define N_LAYER_8 10
#define N_LAYER_10 1

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,8> model_default_t;
typedef ap_fixed<16,8> input_t;
typedef ap_fixed<16,8> layer2_t;
typedef ap_fixed<16,8> layer3_t;
typedef ap_fixed<16,8> layer4_t;
typedef ap_fixed<16,8> layer5_t;
typedef ap_fixed<16,8> layer6_t;
typedef ap_fixed<16,8> layer7_t;
typedef ap_fixed<16,8> layer8_t;
typedef ap_fixed<16,8> layer9_t;
typedef ap_fixed<16,8> layer10_t;
typedef ap_fixed<16,8> result_t;

#endif
