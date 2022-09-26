#ifndef NNET_CONV1D_LATENCY_H_
#define NNET_CONV1D_LATENCY_H_

#include "nnet_common.h"
#include <cstdlib>
#include "nnet_dense_latency.h"
#include "nnet_dense_resource.h"

namespace nnet {

template<class data_T, class res_T, typename CONFIG_T>
void conv_1d_latency_cl(
    data_T data[CONFIG_T::in_width * CONFIG_T::n_chan], // 150*1
    res_T  res[CONFIG_T::out_width * CONFIG_T::n_filt], // 10*20
    typename CONFIG_T::weight_t weights[CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::n_filt],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt]
)
{
    
    // Use a function_instantiate in case it helps to explicitly optimize unchanging weights/biases
    #pragma HLS function_instantiate variable=weights,biases

    // Parallel mode
    #pragma HLS DATAFLOW
    #pragma HLS ARRAY_PARTITION variable=biases complete dim=0

    // data for 10 instances
    data_T dense_data_1[CONFIG_T::filt_width];
    data_T dense_data_2[CONFIG_T::filt_width];
    data_T dense_data_3[CONFIG_T::filt_width];
    data_T dense_data_4[CONFIG_T::filt_width];
    data_T dense_data_5[CONFIG_T::filt_width];
    data_T dense_data_6[CONFIG_T::filt_width];
    data_T dense_data_7[CONFIG_T::filt_width];
    data_T dense_data_8[CONFIG_T::filt_width];
    data_T dense_data_9[CONFIG_T::filt_width];
    data_T dense_data_10[CONFIG_T::filt_width];

    #pragma HLS ARRAY_PARTITION variable=dense_data_1 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_2 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_3 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_4 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_5 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_6 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_7 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_8 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_9 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_10 complete dim=0

    //res for 10 instances
    res_T  dense_res_1[CONFIG_T::n_filt];
    res_T  dense_res_2[CONFIG_T::n_filt];
    res_T  dense_res_3[CONFIG_T::n_filt];
    res_T  dense_res_4[CONFIG_T::n_filt];
    res_T  dense_res_5[CONFIG_T::n_filt];
    res_T  dense_res_6[CONFIG_T::n_filt];
    res_T  dense_res_7[CONFIG_T::n_filt];
    res_T  dense_res_8[CONFIG_T::n_filt];
    res_T  dense_res_9[CONFIG_T::n_filt];
    res_T  dense_res_10[CONFIG_T::n_filt];

    #pragma HLS ARRAY_PARTITION variable=dense_res_1 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_2 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_3 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_4 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_5 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_6 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_7 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_8 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_9 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_10 complete dim=0

    //Fill the data
    FillData: for(int i=0; i < CONFIG_T::filt_width; i++){
        #pragma HLS UNROLL
        #pragma HLS dependence variable=dense_data_1 false
        #pragma HLS dependence variable=dense_data_2 false
        #pragma HLS dependence variable=dense_data_3 false
        #pragma HLS dependence variable=dense_data_4 false
        #pragma HLS dependence variable=dense_data_5 false
        #pragma HLS dependence variable=dense_data_6 false
        #pragma HLS dependence variable=dense_data_7 false
        #pragma HLS dependence variable=dense_data_8 false
        #pragma HLS dependence variable=dense_data_9 false
        #pragma HLS dependence variable=dense_data_10 false

        dense_data_1[i] = data[0*CONFIG_T::filt_width + i];
        dense_data_2[i] = data[1*CONFIG_T::filt_width + i];
        dense_data_3[i] = data[2*CONFIG_T::filt_width + i];
        dense_data_4[i] = data[3*CONFIG_T::filt_width + i];
        dense_data_5[i] = data[4*CONFIG_T::filt_width + i];
        dense_data_6[i] = data[5*CONFIG_T::filt_width + i];
        dense_data_7[i] = data[6*CONFIG_T::filt_width + i];
        dense_data_8[i] = data[7*CONFIG_T::filt_width + i];
        dense_data_9[i] = data[8*CONFIG_T::filt_width + i];
        dense_data_10[i] = data[9*CONFIG_T::filt_width + i];
    }

    //Get res
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_1, dense_res_1, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_2, dense_res_2, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_3, dense_res_3, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_4, dense_res_4, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_5, dense_res_5, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_6, dense_res_6, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_7, dense_res_7, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_8, dense_res_8, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_9, dense_res_9, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_10, dense_res_10, weights, biases);


    WriteResult: for(int jj=0; jj < CONFIG_T::n_filt; jj++){
        #pragma HLS UNROLL factor=5
        #pragma HLS dependence variable=res false
        res[0 * CONFIG_T::n_filt + jj] = dense_res_1[jj];
        res[1 * CONFIG_T::n_filt + jj] = dense_res_2[jj];
        res[2 * CONFIG_T::n_filt + jj] = dense_res_3[jj];
        res[3 * CONFIG_T::n_filt + jj] = dense_res_4[jj];
        res[4 * CONFIG_T::n_filt + jj] = dense_res_5[jj];
        res[5 * CONFIG_T::n_filt + jj] = dense_res_6[jj];
        res[6 * CONFIG_T::n_filt + jj] = dense_res_7[jj];
        res[7 * CONFIG_T::n_filt + jj] = dense_res_8[jj];
        res[8 * CONFIG_T::n_filt + jj] = dense_res_9[jj];
        res[9 * CONFIG_T::n_filt + jj] = dense_res_10[jj];
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void pointwise_conv_1d_cl(
    data_T data[CONFIG_T::in_width * CONFIG_T::n_chan], //10*20
    res_T  res[CONFIG_T::out_width * CONFIG_T::n_filt], //10*5
    typename CONFIG_T::weight_t weights[CONFIG_T::n_chan * CONFIG_T::n_filt],//20*5
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt])
{
    assert(CONFIG_T::filt_width == 1);

    #pragma HLS DATAFLOW
    
    // Use a function_instantiate in case it helps to explicitly optimize unchanging weights/biases
    #pragma HLS function_instantiate variable=weights,biases

    // data for 10 instances
    data_T dense_data_1[CONFIG_T::n_chan];
    data_T dense_data_2[CONFIG_T::n_chan];
    data_T dense_data_3[CONFIG_T::n_chan];
    data_T dense_data_4[CONFIG_T::n_chan];
    data_T dense_data_5[CONFIG_T::n_chan];
    data_T dense_data_6[CONFIG_T::n_chan];
    data_T dense_data_7[CONFIG_T::n_chan];
    data_T dense_data_8[CONFIG_T::n_chan];
    data_T dense_data_9[CONFIG_T::n_chan];
    data_T dense_data_10[CONFIG_T::n_chan];

    #pragma HLS ARRAY_PARTITION variable=dense_data_1 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_2 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_3 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_4 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_5 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_6 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_7 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_8 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_9 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_data_10 complete dim=0

    //res for 10 instances
    res_T  dense_res_1[CONFIG_T::n_filt];
    res_T  dense_res_2[CONFIG_T::n_filt];
    res_T  dense_res_3[CONFIG_T::n_filt];
    res_T  dense_res_4[CONFIG_T::n_filt];
    res_T  dense_res_5[CONFIG_T::n_filt];
    res_T  dense_res_6[CONFIG_T::n_filt];
    res_T  dense_res_7[CONFIG_T::n_filt];
    res_T  dense_res_8[CONFIG_T::n_filt];
    res_T  dense_res_9[CONFIG_T::n_filt];
    res_T  dense_res_10[CONFIG_T::n_filt];

    #pragma HLS ARRAY_PARTITION variable=dense_res_1 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_2 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_3 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_4 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_5 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_6 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_7 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_8 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_9 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=dense_res_10 complete dim=0

    //Fill the data
    FillData: for(int i=0; i < CONFIG_T::n_chan; i++){
        #pragma HLS UNROLL factor=5
        #pragma HLS dependence variable=dense_data_1 false
        #pragma HLS dependence variable=dense_data_2 false
        #pragma HLS dependence variable=dense_data_3 false
        #pragma HLS dependence variable=dense_data_4 false
        #pragma HLS dependence variable=dense_data_5 false
        #pragma HLS dependence variable=dense_data_6 false
        #pragma HLS dependence variable=dense_data_7 false
        #pragma HLS dependence variable=dense_data_8 false
        #pragma HLS dependence variable=dense_data_9 false
        #pragma HLS dependence variable=dense_data_10 false

        dense_data_1[i] = data[0*CONFIG_T::n_chan + i];
        dense_data_2[i] = data[1*CONFIG_T::n_chan + i];
        dense_data_3[i] = data[2*CONFIG_T::n_chan + i];
        dense_data_4[i] = data[3*CONFIG_T::n_chan + i];
        dense_data_5[i] = data[4*CONFIG_T::n_chan + i];
        dense_data_6[i] = data[5*CONFIG_T::n_chan + i];
        dense_data_7[i] = data[6*CONFIG_T::n_chan + i];
        dense_data_8[i] = data[7*CONFIG_T::n_chan + i];
        dense_data_9[i] = data[8*CONFIG_T::n_chan + i];
        dense_data_10[i] = data[9*CONFIG_T::n_chan + i];
    }

    //Get res
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_1, dense_res_1, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_2, dense_res_2, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_3, dense_res_3, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_4, dense_res_4, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_5, dense_res_5, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_6, dense_res_6, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_7, dense_res_7, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_8, dense_res_8, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_9, dense_res_9, weights, biases);
    dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(dense_data_10, dense_res_10, weights, biases);


    WriteResult: for(int jj=0; jj < CONFIG_T::n_filt; jj++){
        #pragma HLS UNROLL factor=5
        #pragma HLS dependence variable=res false

        res[0 * CONFIG_T::n_filt + jj] = dense_res_1[jj];
        res[1 * CONFIG_T::n_filt + jj] = dense_res_2[jj];
        res[2 * CONFIG_T::n_filt + jj] = dense_res_3[jj];
        res[3 * CONFIG_T::n_filt + jj] = dense_res_4[jj];
        res[4 * CONFIG_T::n_filt + jj] = dense_res_5[jj];
        res[5 * CONFIG_T::n_filt + jj] = dense_res_6[jj];
        res[6 * CONFIG_T::n_filt + jj] = dense_res_7[jj];
        res[7 * CONFIG_T::n_filt + jj] = dense_res_8[jj];
        res[8 * CONFIG_T::n_filt + jj] = dense_res_9[jj];
        res[9 * CONFIG_T::n_filt + jj] = dense_res_10[jj];
    }
}

}
#endif
