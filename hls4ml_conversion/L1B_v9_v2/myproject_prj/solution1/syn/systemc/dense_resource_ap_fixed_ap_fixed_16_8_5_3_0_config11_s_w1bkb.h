// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config11_s_w1bkb_H__
#define __dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config11_s_w1bkb_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config11_s_w1bkb_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 25;
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


   SC_CTOR(dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config11_s_w1bkb_ram) {
        ram[0] = "0b1011111111111111101100000";
        ram[1] = "0b0101001110000000001000111";
        ram[2] = "0b0111010111111111111001100";
        ram[3] = "0b1110010001111111110111110";
        ram[4] = "0b1111001001111111100111110";


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


SC_MODULE(dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config11_s_w1bkb) {


static const unsigned DataWidth = 25;
static const unsigned AddressRange = 5;
static const unsigned AddressWidth = 3;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config11_s_w1bkb_ram* meminst;


SC_CTOR(dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config11_s_w1bkb) {
meminst = new dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config11_s_w1bkb_ram("dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config11_s_w1bkb_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config11_s_w1bkb() {
    delete meminst;
}


};//endmodule
#endif
