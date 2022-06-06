#ifndef NNET_CONV1D_RESOURCE_H_
#define NNET_CONV1D_RESOURCE_H_

#include "nnet_common.h"
#include "nnet_dense.h"

namespace nnet {

template<class data_T, typename CONFIG_T>
void im2col_1d(data_T data[CONFIG_T::in_width * CONFIG_T::n_chan], data_T data_col[CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::out_width]) {
    //int index = 0;
    for (int channel = CONFIG_T::n_chan; channel--; data += CONFIG_T::in_width) {
        #pragma HLS PIPELINE II=1 rewind
		for (int kernel_col = 0; kernel_col < CONFIG_T::filt_width; kernel_col++) {
            #pragma HLS UNROLL
            int input_col = -CONFIG_T::pad_left + kernel_col * CONFIG_T::dilation;
            for (int output_col = CONFIG_T::out_width; output_col; output_col--) {
                #pragma HLS UNROLL
                if (input_col >= 0 && input_col < CONFIG_T::in_width) {
                    *(data_col++) = data[input_col];
                    //data_col[index] = data[input_col];
                } else {
                    *(data_col++) = 0;
                    //data_col[index] = 0;
                }
                //index++;
                input_col += CONFIG_T::stride_width;
            }
        }
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void conv_1d_full(
    data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
    res_T  res[CONFIG_T::out_width * CONFIG_T::n_filt],
    typename CONFIG_T::weight_t weights[CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::n_filt],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt]
)
{
    data_T data_conv[CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::out_width];
    data_T data_col[CONFIG_T::filt_width * CONFIG_T::n_chan];
    res_T res_col[CONFIG_T::n_filt];

    //#pragma HLS ARRAY_PARTITION variable=data_conv complete
    #pragma HLS ARRAY_PARTITION variable=data_col complete
    #pragma HLS ARRAY_PARTITION variable=res_col complete

    im2col_1d<data_T, CONFIG_T>(data, data_conv);

    for (int i = 0; i < CONFIG_T::out_width; i++) {
        #pragma HLS UNROLL
        for (int j = 0; j < CONFIG_T::filt_width * CONFIG_T::n_chan; j++) {
            data_col[j] = data_conv[j * CONFIG_T::out_width + i];
        }
        dense_resource<data_T, res_T, typename CONFIG_T::mult_config>(data_col, res_col, weights, biases);
        for (int j = 0; j < CONFIG_T::n_filt; j++) {
            //res[i * CONFIG_T::n_filt + j] = res_col[j];
            res[j * CONFIG_T::out_width + i] = res_col[j]; // Transposed order
        }
    }
}

template<class data_T, typename CONFIG_T>
void im2col_1d_cf_idx(data_T data[CONFIG_T::in_width * CONFIG_T::n_chan], data_T data_col[CONFIG_T::filt_width * CONFIG_T::n_chan], const int col) {
    ChannelLoop:
    for (int channel = 0; channel < CONFIG_T::n_chan; channel++) {
		//#pragma HLS UNROLL
        #pragma HLS PIPELINE II=1 rewind
        KernelLoop:
        for (int kernel_col = 0; kernel_col < CONFIG_T::filt_width; kernel_col++) {
            #pragma HLS UNROLL
            int input_col = -CONFIG_T::pad_left + kernel_col * CONFIG_T::dilation + col * CONFIG_T::stride_width;
            if (input_col >= 0 && input_col < CONFIG_T::in_width) {
                //*(data_col++) = data[input_col];
                data_col[channel * CONFIG_T::filt_width + kernel_col] = data[channel * CONFIG_T::in_width + input_col];
            } else {
                //*(data_col++) = 0;
                data_col[channel * CONFIG_T::filt_width + kernel_col] = 0;
            }
        }
    }
}

template<class data_T, typename CONFIG_T>
void im2col_1d_cf(data_T data[CONFIG_T::in_width * CONFIG_T::n_chan], data_T data_col[CONFIG_T::n_chan * CONFIG_T::filt_width], const int col) {
    int index = 0;
    ChannelLoop:
    for (int channel = CONFIG_T::n_chan; channel--; data += CONFIG_T::in_width) {
		#pragma HLS UNROLL
        KernelLoop:
        for (int kernel_col = 0; kernel_col < CONFIG_T::filt_width; kernel_col++) {
            int input_col = -CONFIG_T::pad_left + kernel_col * CONFIG_T::dilation + col * CONFIG_T::stride_width;
            if (input_col >= 0 && input_col < CONFIG_T::in_width) {
                //*(data_col++) = data[input_col];
                data_col[index] = data[input_col];
            } else {
                //*(data_col++) = 0;
                data_col[index] = 0;
            }
            index++;
        }
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void conv_1d_resource_cf(
    data_T data[CONFIG_T::n_chan * CONFIG_T::in_width],
    res_T  res[CONFIG_T::out_width * CONFIG_T::n_filt],
    typename CONFIG_T::weight_t weights[CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::n_filt],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt]
)
{
    const int nin = CONFIG_T::n_chan * CONFIG_T::filt_width;
    const int nout = CONFIG_T::n_filt;
    const int rufactor = CONFIG_T::reuse_factor;
    const int block_factor = DIV_ROUNDUP(nin*nout, rufactor);

    //#pragma HLS function_instantiate variable=weights,biases
    //#pragma HLS RESOURCE         variable=weights core=RAM_2P_BRAM Commenting out the deisgnation HLS seems to choose correctly
    //#pragma HLS ARRAY_RESHAPE   variable=weights block factor=block_factor
    //#pragma HLS ARRAY_PARTITION variable=biases complete

    data_T data_col[CONFIG_T::filt_width * CONFIG_T::n_chan];
    res_T res_col[CONFIG_T::n_filt];

    #pragma HLS ARRAY_PARTITION variable=data_col complete
    #pragma HLS ARRAY_PARTITION variable=res_col complete

    ColLoop:
    for (int i = 0; i < CONFIG_T::out_width; i++) {
        #pragma HLS PIPELINE
        im2col_1d_cf<data_T, CONFIG_T>(data, data_col, i);
        dense_resource<data_T, res_T, typename CONFIG_T::mult_config>(data_col, res_col, weights, biases);
        for (int j = 0; j < CONFIG_T::n_filt; j++) {
            //res[i * CONFIG_T::n_filt + j] = res_col[j];
            res[j * CONFIG_T::out_width + i] = res_col[j]; // Transposed order
        }
    }
}

template<class data_T, typename CONFIG_T>
void im2col_1d_cl(data_T data[CONFIG_T::in_width * CONFIG_T::n_chan], data_T data_col[CONFIG_T::filt_width * CONFIG_T::n_chan], const int col) {
    int index = 0;
    KernelLoop:
    for (int kernel_col = 0; kernel_col < CONFIG_T::filt_width; kernel_col++) {
        #pragma HLS UNROLL

        ChannelLoop:
        for (int channel = 0; channel < CONFIG_T::n_chan; channel++) {
            int index_data = (col*CONFIG_T::stride_width+kernel_col-CONFIG_T::pad_left) * CONFIG_T::n_chan + channel;

            if (index_data >= 0 && index_data < CONFIG_T::in_width*CONFIG_T::n_chan) {
                data_col[index] = data[index_data];
            } else {
                data_col[index] = 0;
            }
            index++;
        }
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void conv_1d_resource_cl(
    data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
    res_T  res[CONFIG_T::out_width * CONFIG_T::n_filt],
    typename CONFIG_T::weight_t weights[CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::n_filt],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt]
)
{
    const int nin = CONFIG_T::n_chan * CONFIG_T::filt_width;
    const int nout = CONFIG_T::n_filt;
    const int rufactor = CONFIG_T::reuse_factor;
    const int block_factor = DIV_ROUNDUP(nin*nout, rufactor);

    //#pragma HLS function_instantiate variable=weights,biases
    //#pragma HLS RESOURCE         variable=weights core=RAM_2P_BRAM Commenting out the deisgnation HLS seems to choose correctly
    //#pragma HLS ARRAY_RESHAPE   variable=weights block factor=block_factor
    //#pragma HLS ARRAY_PARTITION variable=biases complete

    data_T data_col[CONFIG_T::filt_width * CONFIG_T::n_chan];
    res_T res_col[CONFIG_T::n_filt];

    #pragma HLS ARRAY_PARTITION variable=data_col complete
    #pragma HLS ARRAY_PARTITION variable=res_col complete

    ColLoop:
    for (int i = 0; i < CONFIG_T::out_width; i++) {
        #pragma HLS PIPELINE
        im2col_1d_cl<data_T, CONFIG_T>(data, data_col, i);
        dense_resource<data_T, res_T, typename CONFIG_T::mult_config>(data_col, res_col, weights, biases);
        for (int j = 0; j < CONFIG_T::n_filt; j++) {
            res[i * CONFIG_T::n_filt + j] = res_col[j];
        }
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void conv_1d_resource_cl_2(
    data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
    res_T  res[CONFIG_T::out_width * CONFIG_T::n_filt],
    typename CONFIG_T::weight_t weights[CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::n_filt],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt]
)
{

    typename CONFIG_T::accum_t mult[CONFIG_T::out_width * CONFIG_T::n_filt * CONFIG_T::n_chan * CONFIG_T::filt_width];
    typename CONFIG_T::accum_t acc[CONFIG_T::out_width][CONFIG_T::n_filt];

    #pragma HLS ARRAY_PARTITION variable=mult complete dim=0
    #pragma HLS ARRAY_PARTITION variable=acc complete dim=0

    // Use a function_instantiate in case it helps to explicitly optimize unchanging weights/biases
    #pragma HLS function_instantiate variable=weights,biases

    // Parallel mode
    #pragma HLS PIPELINE
    #pragma HLS ARRAY_PARTITION variable=biases complete dim=0

    // Limit multipliers to control parallelization
    const int multiplier_limit = 300;
    #pragma HLS ALLOCATION instances=mul limit=multiplier_limit operation

    // Convolve, saving all multiplication results to accumulate later
    ConvOut: for(int ii = 0; ii < CONFIG_T::out_width; ii++) {
        ConvFilt: for(int ff = 0; ff < CONFIG_T::n_filt; ff++){
            ConvChan: for(int cc = 0; cc < CONFIG_T::n_chan; cc++){
                ConvMult: for(int jj = 0; jj < CONFIG_T::filt_width; jj++){

                    int index_mult   = ii*CONFIG_T::n_filt*CONFIG_T::n_chan*CONFIG_T::filt_width + ff*CONFIG_T::n_chan*CONFIG_T::filt_width + cc*CONFIG_T::filt_width + jj;
                    int index_weight = jj*CONFIG_T::n_chan*CONFIG_T::n_filt + cc*CONFIG_T::n_filt + ff;
                    int index_data   = (ii*CONFIG_T::stride_width+jj-CONFIG_T::pad_left) * CONFIG_T::n_chan + cc;

                    if((ii*CONFIG_T::stride_width+jj) < CONFIG_T::pad_left || (ii*CONFIG_T::stride_width+jj) >= (CONFIG_T::pad_left + CONFIG_T::in_width)){
                        mult[index_mult] = 0;
                    }
                    else {
                        mult[index_mult] = data[index_data] * weights[index_weight];
                    }
                }
            }//end channel loop
        }//end filter loop
    }//end output loop


    // Initialize accumulator with input biases
    for(int ii = 0; ii < CONFIG_T::out_width; ii++) {
        for(int ff = 0; ff < CONFIG_T::n_filt; ff++) {
            acc[ii][ff]=biases[ff];
        }
    }


    // Accumulate multiplication result
    /*
    AccumOut: for(int ii = 0; ii < CONFIG_T::out_width; ii++) {
        AccumFilt: for(int ff = 0; ff < CONFIG_T::n_filt; ff++) {
            //Do "dot product" sum within filter and sum over channels
            AccumChan: for(int cc = 0; cc < CONFIG_T::n_chan; cc++){
                AccumDot: for(int jj = 0; jj < CONFIG_T::filt_width; jj++){
                    int index_mult = ii*CONFIG_T::n_filt*CONFIG_T::n_chan*CONFIG_T::filt_width + ff*CONFIG_T::n_chan*CONFIG_T::filt_width + cc*CONFIG_T::filt_width + jj;
                    acc[ii][ff] += mult[index_mult];
                }//end dot product loop
            }//end channel loop
        }//end filter loop
    }//end output loop
    */

    typename CONFIG_T::accum_t acc_lat[CONFIG_T::out_width][CONFIG_T::n_filt][CONFIG_T::add_lat];
    #pragma HLS ARRAY_PARTITION variable=acc_lat complete dim=0
    
    AddLatencyInit: 
    for (int i = 0; i < CONFIG_T::out_width; i++){
      #pragma UNROLL
      for (int j= 0; j < CONFIG_T::n_filt; j++){
          for(int k =0; k < CONFIG_T::add_lat; k++){
            acc_lat[i][j][k] = 0;
          }
      }
    }

    AccumTree:
    for(int ii = 0; ii < CONFIG_T::out_width/CONFIG_T::add_lat; ii++) {
        #pragma HLS PIPELINE II=1

        for (int ff = 0; ff <  CONFIG_T::n_filt; ff++){
            for(int cc= 0; cc < CONFIG_T::n_chan; cc++){
                for(int jj = 0; jj < CONFIG_T::filt_width; jj++){
                    for (int ia = 0; ia < CONFIG_T::add_lat; ia++){
                        #pragma HLS UNROLL
                        int index_mult = (ii*CONFIG_T::add_lat+ia)*CONFIG_T::n_filt*CONFIG_T::n_chan*CONFIG_T::filt_width + ff*CONFIG_T::n_chan*CONFIG_T::filt_width + cc*CONFIG_T::filt_width + jj;
                        acc_lat[ii][ff][ia] += mult[index_mult];
	                }
                }
            }
        }
    }

   FullAccum: 
    for (int ij= 0; ij <CONFIG_T::add_lat; ij++){
        #pragma HLS PIPELINE II=1
        for (int ii = 0; ii <CONFIG_T::out_width; ii++){
            for (int ff = 0; ff <  CONFIG_T::n_filt; ff++){
                #pragma HLS UNROLL
	            acc[ii][ff] += acc_lat[ii][ff][ij];
            }
      }
    }


    // Cast to "res_t" type
    for(int ii = 0; ii < CONFIG_T::out_width; ii++) {
        for(int ff = 0; ff < CONFIG_T::n_filt; ff++) {
            res[ii * CONFIG_T::n_filt + ff] = (res_T)(acc[ii][ff]);
        }
    }
}

}
#endif
