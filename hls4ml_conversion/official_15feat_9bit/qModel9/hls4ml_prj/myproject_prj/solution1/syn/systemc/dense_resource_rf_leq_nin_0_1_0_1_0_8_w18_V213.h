// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_H__
#define __dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 180;
  static const unsigned AddressRange = 5;
  static const unsigned AddressWidth = 3;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_ram) {
        ram[0] = "0b111000100010000101100000011100000001000111101111100110100010000100010001000011011001101010001001100110110010110111101001110110011111101011111111000011000111001111100001010100000001";
        ram[1] = "0b101011111101110010100000010101100001100011100001100010111000001000111011000101011101001111111001110000000111011111110101101000111000010111011001100000000001000110010001011001000100";
        ram[2] = "0b001100101110010111110110000000011011001011011010011110000101101000100110000011111001001100000111010001010011000000010110111101000100100111011101000000010001111110100010111001100100";
        ram[3] = "0b000100000001010011101010010000001110000010000000101101001001000101100101001100111001000001000011000100111000001100010001010011000000100111101010001000101000110011000010101000001100";
        ram[4] = "0b100000000100000110110100010001101100100101101111110111101110011111110101100100010101011000100000011001000000010101011111010000110110101000000110100010111000110101001011000111011111";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213) {


static const unsigned DataWidth = 180;
static const unsigned AddressRange = 5;
static const unsigned AddressWidth = 3;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_ram* meminst;


SC_CTOR(dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213) {
meminst = new dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_ram("dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213() {
    delete meminst;
}


};//endmodule
#endif
