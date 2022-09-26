// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config15_0_0mb6_H__
#define __dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config15_0_0mb6_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config15_0_0mb6_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 18;
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


   SC_CTOR(dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config15_0_0mb6_ram) {
        ram[0] = "0b100000001110010100";
        ram[1] = "0b011111111100000001";
        ram[2] = "0b100000000011111111";
        ram[3] = "0b100000010100000000";
        ram[4] = "0b100000001101110111";


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


SC_MODULE(dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config15_0_0mb6) {


static const unsigned DataWidth = 18;
static const unsigned AddressRange = 5;
static const unsigned AddressWidth = 3;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config15_0_0mb6_ram* meminst;


SC_CTOR(dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config15_0_0mb6) {
meminst = new dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config15_0_0mb6_ram("dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config15_0_0mb6_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config15_0_0mb6() {
    delete meminst;
}


};//endmodule
#endif
