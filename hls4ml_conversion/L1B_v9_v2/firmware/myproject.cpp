//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t conv1d_input[N_INPUT_1_1*N_INPUT_2_1],
    result_t layer12_out[N_LAYER_11],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=conv1d_input complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer12_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=conv1d_input,layer12_out 
    #pragma HLS DATAFLOW 

    const_size_in_1 = N_INPUT_1_1*N_INPUT_2_1;
    const_size_out_1 = N_LAYER_11;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<model_default_t, 260>(w2, "w2.txt");
        nnet::load_weights_from_txt<model_default_t, 20>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 100>(w13, "w13.txt");
        nnet::load_weights_from_txt<model_default_t, 5>(b13, "b13.txt");
        nnet::load_weights_from_txt<model_default_t, 1000>(w7, "w7.txt");
        nnet::load_weights_from_txt<model_default_t, 20>(b7, "b7.txt");
        nnet::load_weights_from_txt<model_default_t, 200>(w9, "w9.txt");
        nnet::load_weights_from_txt<model_default_t, 10>(b9, "b9.txt");
        nnet::load_weights_from_txt<model_default_t, 10>(w11, "w11.txt");
        nnet::load_weights_from_txt<model_default_t, 1>(b11, "b11.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers

    layer2_t layer2_out[N_OUTPUTS_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    nnet::conv_1d_cl<input_t, layer2_t, config2>(conv1d_input, layer2_out, w2, b2); // conv1d

    layer3_t layer3_out[N_OUTPUTS_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer3_out complete dim=0
    nnet::relu<layer2_t, layer3_t, relu_config3>(layer2_out, layer3_out); // conv1d_relu

    layer13_t layer13_out[N_OUTPUTS_13*N_FILT_13];
    #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0
    nnet::pointwise_conv_1d_cl<layer3_t, layer13_t, config13>(layer3_out, layer13_out, w13, b13); // conv1d_1

    layer5_t layer5_out[N_OUTPUTS_4*N_FILT_4];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0
    nnet::relu<layer13_t, layer5_t, relu_config5>(layer13_out, layer5_out); // conv1d_1_relu

    layer7_t layer7_out[N_LAYER_7];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    nnet::dense<layer5_t, layer7_t, config7>(layer5_out, layer7_out, w7, b7); // dense

    layer8_t layer8_out[N_LAYER_7];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0
    nnet::relu<layer7_t, layer8_t, relu_config8>(layer7_out, layer8_out); // dense_relu

    layer9_t layer9_out[N_LAYER_9];
    #pragma HLS ARRAY_PARTITION variable=layer9_out complete dim=0
    nnet::dense<layer8_t, layer9_t, config9>(layer8_out, layer9_out, w9, b9); // dense_1

    layer10_t layer10_out[N_LAYER_9];
    #pragma HLS ARRAY_PARTITION variable=layer10_out complete dim=0
    nnet::relu<layer9_t, layer10_t, relu_config10>(layer9_out, layer10_out); // dense_1_relu

    layer11_t layer11_out[N_LAYER_11];
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0
    nnet::dense<layer10_t, layer11_t, config11>(layer10_out, layer11_out, w11, b11); // dense_2

    nnet::sigmoid<layer11_t, result_t, sigmoid_config12>(layer11_out, layer12_out); // dense_2_sigmoid

}
