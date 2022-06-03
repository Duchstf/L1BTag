#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_conv1d.h"
#include "nnet_utils/nnet_conv1d_stream.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
#include "nnet_utils/nnet_sepconv1d_stream.h"
 
//hls-fpga-machine-learning insert weights
#include "weights/w2.h"
#include "weights/b2.h"
#include "weights/w13.h"
#include "weights/b13.h"
#include "weights/w7.h"
#include "weights/b7.h"
#include "weights/w9.h"
#include "weights/b9.h"
#include "weights/w11.h"
#include "weights/b11.h"

//hls-fpga-machine-learning insert layer-config
// conv1d
struct config2_mult : nnet::dense_config {
    static const unsigned n_in = 13;
    static const unsigned n_out = 20;
    static const unsigned reuse_factor = 1;
    static const unsigned strategy = nnet::resource;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config2 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 130;
    static const unsigned n_chan = 1;
    static const unsigned filt_width = 13;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 20;
    static const unsigned stride_width = 13;
    static const unsigned dilation = 1;
    static const unsigned out_width = 10;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 130;
    static const ap_uint<filt_width> pixels[min_width];
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config2_mult mult_config;
};
const ap_uint<config2::filt_width> config2::pixels[] = {0};

// conv1d_relu
struct relu_config3 : nnet::activ_config {
    static const unsigned n_in = 200;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 5;
    typedef conv1d_relu_table_t table_t;
};

// conv1d_1
struct config13_mult : nnet::dense_config {
    static const unsigned n_in = 20;
    static const unsigned n_out = 5;
    static const unsigned reuse_factor = 5;
    static const unsigned strategy = nnet::resource;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config13 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 10;
    static const unsigned n_chan = 20;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 5;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 10;
    static const unsigned reuse_factor = 5;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 10;
    static const ap_uint<filt_width> pixels[min_width];
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config13_mult mult_config;
};
const ap_uint<config13::filt_width> config13::pixels[] = {0};

// conv1d_1_relu
struct relu_config5 : nnet::activ_config {
    static const unsigned n_in = 50;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 5;
    typedef conv1d_1_relu_table_t table_t;
};

// dense
struct config7 : nnet::dense_config {
    static const unsigned n_in = 50;
    static const unsigned n_out = 20;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 5;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 1000;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef layer7_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// dense_relu
struct relu_config8 : nnet::activ_config {
    static const unsigned n_in = 20;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 5;
    typedef dense_relu_table_t table_t;
};

// dense_1
struct config9 : nnet::dense_config {
    static const unsigned n_in = 20;
    static const unsigned n_out = 10;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 5;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 200;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef layer9_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// dense_1_relu
struct relu_config10 : nnet::activ_config {
    static const unsigned n_in = 10;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 5;
    typedef dense_1_relu_table_t table_t;
};

// dense_2
struct config11 : nnet::dense_config {
    static const unsigned n_in = 10;
    static const unsigned n_out = 1;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 5;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 10;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef layer11_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// dense_2_sigmoid
struct sigmoid_config12 : nnet::activ_config {
    static const unsigned n_in = 1;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 5;
    typedef dense_2_sigmoid_table_t table_t;
};


#endif
