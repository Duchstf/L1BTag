#include "algo_b.h"
#include "defines.h"
#include "myproject.h"

template<unsigned int N>
void make_inputs(input_t b_tag_ingput[N*13], InputBits puppi_candidate[N]) {
  //Based on latest PUPPI specifications
  
  //#pragma HLS inline
  #pragma HLS PIPELINE

  for (int i = 0; i < N; i++) {
    #pragma HLS PIPELINE II=1

    InputBits tmpobj = puppi_candidate[i];

    // One-hot encode the particle id
    ap_uint<3>  id = tmpobj(39, 37);

    b_tag_ingput[i*13+0] = input_t(id == 4 ? 1 : 0); //e-
    b_tag_ingput[i*13+1] = input_t(id == 5 ? 1 : 0); //e+
    b_tag_ingput[i*13+2] = input_t(id == 6 ? 1 : 0); //u-
    b_tag_ingput[i*13+3] = input_t(id == 7 ? 1 : 0); //u+
    b_tag_ingput[i*13+4] = input_t(id == 1 ? 1 : 0); //photon
    b_tag_ingput[i*13+5] = input_t(id == 0 ? 1 : 0); //kL
    b_tag_ingput[i*13+6] = input_t(id == 3 ? 1 : 0); //pi+
    b_tag_ingput[i*13+7] = input_t(id == 2 ? 1 : 0); //pi-

    //Other properties
    b_tag_ingput[i*13+8] = input_t(tmpobj(57,50));//dXY
    b_tag_ingput[i*13+9] = input_t(tmpobj(49,40));//z0
    b_tag_ingput[i*13+10] = input_t(tmpobj(13,0)); //pT 
    b_tag_ingput[i*13+11] = input_t(tmpobj(25,14)); //Eta
    b_tag_ingput[i*13+12] = input_t(tmpobj(36,26)); //Phi
  }
} 

void algo_b(InputBits input[BOARD_NCHANN], InputBits output[BOARD_NCHANN]) { 
  #pragma HLS ARRAY_PARTITION variable=input complete
  #pragma HLS ARRAY_PARTITION variable=output complete
  #pragma HLS INTERFACE ap_none port=output
  #pragma HLS PIPELINE 
  
  // Take the inputs and aggregate it for the model
  input_t  b_tag_input[N_JET_PARTICLES*13];
  make_inputs<N_JET_PARTICLES>(b_tag_input, input);

  // Run it through the network
  result_t b_tag_output[N_LAYER_10];
  myproject(b_tag_input, b_tag_output);

  //What are these for?
  output[0] = b_tag_output[0]*100; // Might need to deal with this
}