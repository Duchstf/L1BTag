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
#include "weights/w18.h"
#include "weights/b18.h"
#include "weights/w9.h"
#include "weights/b9.h"
#include "weights/w12.h"
#include "weights/b12.h"
#include "weights/w15.h"
#include "weights/b15.h"

//hls-fpga-machine-learning insert layer-config
// Conv1D_1
struct config2_mult : nnet::dense_config {
    static const unsigned n_in = 15;
    static const unsigned n_out = 20;
    static const unsigned reuse_factor = 5;
    static const unsigned strategy = nnet::latency;
    typedef model_default_t accum_t;
    typedef bias2_t bias_t;
    typedef weight2_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config2 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 150;
    static const unsigned n_chan = 1;
    static const unsigned filt_width = 15;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 20;
    static const unsigned stride_width = 15;
    static const unsigned dilation = 1;
    static const unsigned out_width = 10;
    static const unsigned reuse_factor = 5;
    static const unsigned n_zeros = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::latency;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 150;
    static const ap_uint<filt_width> pixels[min_width];
    typedef model_default_t accum_t;
    typedef bias2_t bias_t;
    typedef weight2_t weight_t;
    typedef config2_mult mult_config;
    static const unsigned n_in = 15;
    static const unsigned n_out = 20;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
    static const unsigned io_type = nnet::io_parallel;
};
const ap_uint<config2::filt_width> config2::pixels[] = {0};

// Conv1D_1_linear
struct linear_config3 : nnet::activ_config {
    static const unsigned n_in = 200;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef Conv1D_1_linear_table_t table_t;
};

// relu_1
struct relu_config4 : nnet::activ_config {
    static const unsigned n_in = 200;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 5;
    typedef relu_1_table_t table_t;
};

// Conv1D_2
struct config18_mult : nnet::dense_config {
    static const unsigned n_in = 20;
    static const unsigned n_out = 5;
    static const unsigned reuse_factor = 5;
    static const unsigned strategy = nnet::latency;
    typedef model_default_t accum_t;
    typedef bias18_t bias_t;
    typedef weight18_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config18 : nnet::conv1d_config {
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
    static const unsigned strategy = nnet::latency;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 10;
    static const ap_uint<filt_width> pixels[min_width];
    typedef model_default_t accum_t;
    typedef bias18_t bias_t;
    typedef weight18_t weight_t;
    typedef config18_mult mult_config;
    static const unsigned n_in = 20;
    static const unsigned n_out = 5;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
    static const unsigned io_type = nnet::io_parallel;
};
const ap_uint<config18::filt_width> config18::pixels[] = {0};

// Conv1D_2_linear
struct linear_config6 : nnet::activ_config {
    static const unsigned n_in = 50;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef Conv1D_2_linear_table_t table_t;
};

// relu_2
struct relu_config7 : nnet::activ_config {
    static const unsigned n_in = 50;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 5;
    typedef relu_2_table_t table_t;
};

// Dense_1
struct config9 : nnet::dense_config {
    static const unsigned n_in = 50;
    static const unsigned n_out = 20;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 5;
    static const unsigned n_zeros = 1;
    static const unsigned n_nonzeros = 999;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias9_t bias_t;
    typedef weight9_t weight_t;
    typedef layer9_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// Dense_1_linear
struct linear_config10 : nnet::activ_config {
    static const unsigned n_in = 20;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef Dense_1_linear_table_t table_t;
};

// relu_3
struct relu_config11 : nnet::activ_config {
    static const unsigned n_in = 20;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 5;
    typedef relu_3_table_t table_t;
};

// Dense_2
struct config12 : nnet::dense_config {
    static const unsigned n_in = 20;
    static const unsigned n_out = 10;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 5;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 200;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias12_t bias_t;
    typedef weight12_t weight_t;
    typedef layer12_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// Dense_2_linear
struct linear_config13 : nnet::activ_config {
    static const unsigned n_in = 10;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef Dense_2_linear_table_t table_t;
};

// relu_4
struct relu_config14 : nnet::activ_config {
    static const unsigned n_in = 10;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 5;
    typedef relu_4_table_t table_t;
};

// output
struct config15 : nnet::dense_config {
    static const unsigned n_in = 10;
    static const unsigned n_out = 1;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 5;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 10;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias15_t bias_t;
    typedef weight15_t weight_t;
    typedef layer15_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// output_linear
struct linear_config16 : nnet::activ_config {
    static const unsigned n_in = 1;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef output_linear_table_t table_t;
};

// sigmoid
struct sigmoid_config17 : nnet::activ_config {
    static const unsigned n_in = 1;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 5;
    typedef sigmoidtable_t table_t;
};


#endif
