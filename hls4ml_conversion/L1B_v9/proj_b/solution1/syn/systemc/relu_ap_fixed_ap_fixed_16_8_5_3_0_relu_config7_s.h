// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_s_HH_
#define _relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_s : public sc_module {
    // Port declarations 41
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > data_0_V_read;
    sc_in< sc_lv<16> > data_1_V_read;
    sc_in< sc_lv<16> > data_2_V_read;
    sc_in< sc_lv<16> > data_3_V_read;
    sc_in< sc_lv<16> > data_4_V_read;
    sc_in< sc_lv<16> > data_5_V_read;
    sc_in< sc_lv<16> > data_6_V_read;
    sc_in< sc_lv<16> > data_7_V_read;
    sc_in< sc_lv<16> > data_8_V_read;
    sc_in< sc_lv<16> > data_9_V_read;
    sc_in< sc_lv<16> > data_10_V_read;
    sc_in< sc_lv<16> > data_11_V_read;
    sc_in< sc_lv<16> > data_12_V_read;
    sc_in< sc_lv<16> > data_13_V_read;
    sc_in< sc_lv<16> > data_14_V_read;
    sc_in< sc_lv<16> > data_15_V_read;
    sc_in< sc_lv<16> > data_16_V_read;
    sc_in< sc_lv<16> > data_17_V_read;
    sc_in< sc_lv<16> > data_18_V_read;
    sc_in< sc_lv<16> > data_19_V_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;
    sc_out< sc_lv<16> > ap_return_2;
    sc_out< sc_lv<16> > ap_return_3;
    sc_out< sc_lv<16> > ap_return_4;
    sc_out< sc_lv<16> > ap_return_5;
    sc_out< sc_lv<16> > ap_return_6;
    sc_out< sc_lv<16> > ap_return_7;
    sc_out< sc_lv<16> > ap_return_8;
    sc_out< sc_lv<16> > ap_return_9;
    sc_out< sc_lv<16> > ap_return_10;
    sc_out< sc_lv<16> > ap_return_11;
    sc_out< sc_lv<16> > ap_return_12;
    sc_out< sc_lv<16> > ap_return_13;
    sc_out< sc_lv<16> > ap_return_14;
    sc_out< sc_lv<16> > ap_return_15;
    sc_out< sc_lv<16> > ap_return_16;
    sc_out< sc_lv<16> > ap_return_17;
    sc_out< sc_lv<16> > ap_return_18;
    sc_out< sc_lv<16> > ap_return_19;


    // Module declarations
    relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_s(sc_module_name name);
    SC_HAS_PROCESS(relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_s);

    ~relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<1> > icmp_ln1494_fu_184_p2;
    sc_signal< sc_lv<15> > trunc_ln81_fu_190_p1;
    sc_signal< sc_lv<15> > select_ln81_fu_194_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_1_fu_206_p2;
    sc_signal< sc_lv<15> > trunc_ln81_10_fu_212_p1;
    sc_signal< sc_lv<15> > select_ln81_10_fu_216_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_2_fu_228_p2;
    sc_signal< sc_lv<15> > trunc_ln81_11_fu_234_p1;
    sc_signal< sc_lv<15> > select_ln81_11_fu_238_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_3_fu_250_p2;
    sc_signal< sc_lv<15> > trunc_ln81_12_fu_256_p1;
    sc_signal< sc_lv<15> > select_ln81_12_fu_260_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_4_fu_272_p2;
    sc_signal< sc_lv<15> > trunc_ln81_13_fu_278_p1;
    sc_signal< sc_lv<15> > select_ln81_13_fu_282_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_5_fu_294_p2;
    sc_signal< sc_lv<15> > trunc_ln81_14_fu_300_p1;
    sc_signal< sc_lv<15> > select_ln81_14_fu_304_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_6_fu_316_p2;
    sc_signal< sc_lv<15> > trunc_ln81_15_fu_322_p1;
    sc_signal< sc_lv<15> > select_ln81_15_fu_326_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_7_fu_338_p2;
    sc_signal< sc_lv<15> > trunc_ln81_16_fu_344_p1;
    sc_signal< sc_lv<15> > select_ln81_16_fu_348_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_8_fu_360_p2;
    sc_signal< sc_lv<15> > trunc_ln81_17_fu_366_p1;
    sc_signal< sc_lv<15> > select_ln81_17_fu_370_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_9_fu_382_p2;
    sc_signal< sc_lv<15> > trunc_ln81_18_fu_388_p1;
    sc_signal< sc_lv<15> > select_ln81_18_fu_392_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_10_fu_404_p2;
    sc_signal< sc_lv<15> > trunc_ln81_19_fu_410_p1;
    sc_signal< sc_lv<15> > select_ln81_19_fu_414_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_11_fu_426_p2;
    sc_signal< sc_lv<15> > trunc_ln81_20_fu_432_p1;
    sc_signal< sc_lv<15> > select_ln81_20_fu_436_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_12_fu_448_p2;
    sc_signal< sc_lv<15> > trunc_ln81_21_fu_454_p1;
    sc_signal< sc_lv<15> > select_ln81_21_fu_458_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_13_fu_470_p2;
    sc_signal< sc_lv<15> > trunc_ln81_22_fu_476_p1;
    sc_signal< sc_lv<15> > select_ln81_22_fu_480_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_14_fu_492_p2;
    sc_signal< sc_lv<15> > trunc_ln81_23_fu_498_p1;
    sc_signal< sc_lv<15> > select_ln81_23_fu_502_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_15_fu_514_p2;
    sc_signal< sc_lv<15> > trunc_ln81_24_fu_520_p1;
    sc_signal< sc_lv<15> > select_ln81_24_fu_524_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_16_fu_536_p2;
    sc_signal< sc_lv<15> > trunc_ln81_25_fu_542_p1;
    sc_signal< sc_lv<15> > select_ln81_25_fu_546_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_17_fu_558_p2;
    sc_signal< sc_lv<15> > trunc_ln81_26_fu_564_p1;
    sc_signal< sc_lv<15> > select_ln81_26_fu_568_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_18_fu_580_p2;
    sc_signal< sc_lv<15> > trunc_ln81_27_fu_586_p1;
    sc_signal< sc_lv<15> > select_ln81_27_fu_590_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_19_fu_602_p2;
    sc_signal< sc_lv<15> > trunc_ln81_28_fu_608_p1;
    sc_signal< sc_lv<15> > select_ln81_28_fu_612_p3;
    sc_signal< sc_lv<16> > zext_ln81_fu_202_p1;
    sc_signal< sc_lv<16> > zext_ln81_10_fu_224_p1;
    sc_signal< sc_lv<16> > zext_ln81_11_fu_246_p1;
    sc_signal< sc_lv<16> > zext_ln81_12_fu_268_p1;
    sc_signal< sc_lv<16> > zext_ln81_13_fu_290_p1;
    sc_signal< sc_lv<16> > zext_ln81_14_fu_312_p1;
    sc_signal< sc_lv<16> > zext_ln81_15_fu_334_p1;
    sc_signal< sc_lv<16> > zext_ln81_16_fu_356_p1;
    sc_signal< sc_lv<16> > zext_ln81_17_fu_378_p1;
    sc_signal< sc_lv<16> > zext_ln81_18_fu_400_p1;
    sc_signal< sc_lv<16> > zext_ln81_19_fu_422_p1;
    sc_signal< sc_lv<16> > zext_ln81_20_fu_444_p1;
    sc_signal< sc_lv<16> > zext_ln81_21_fu_466_p1;
    sc_signal< sc_lv<16> > zext_ln81_22_fu_488_p1;
    sc_signal< sc_lv<16> > zext_ln81_23_fu_510_p1;
    sc_signal< sc_lv<16> > zext_ln81_24_fu_532_p1;
    sc_signal< sc_lv<16> > zext_ln81_25_fu_554_p1;
    sc_signal< sc_lv<16> > zext_ln81_26_fu_576_p1;
    sc_signal< sc_lv<16> > zext_ln81_27_fu_598_p1;
    sc_signal< sc_lv<16> > zext_ln81_28_fu_620_p1;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_14();
    void thread_ap_return_15();
    void thread_ap_return_16();
    void thread_ap_return_17();
    void thread_ap_return_18();
    void thread_ap_return_19();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_icmp_ln1494_10_fu_404_p2();
    void thread_icmp_ln1494_11_fu_426_p2();
    void thread_icmp_ln1494_12_fu_448_p2();
    void thread_icmp_ln1494_13_fu_470_p2();
    void thread_icmp_ln1494_14_fu_492_p2();
    void thread_icmp_ln1494_15_fu_514_p2();
    void thread_icmp_ln1494_16_fu_536_p2();
    void thread_icmp_ln1494_17_fu_558_p2();
    void thread_icmp_ln1494_18_fu_580_p2();
    void thread_icmp_ln1494_19_fu_602_p2();
    void thread_icmp_ln1494_1_fu_206_p2();
    void thread_icmp_ln1494_2_fu_228_p2();
    void thread_icmp_ln1494_3_fu_250_p2();
    void thread_icmp_ln1494_4_fu_272_p2();
    void thread_icmp_ln1494_5_fu_294_p2();
    void thread_icmp_ln1494_6_fu_316_p2();
    void thread_icmp_ln1494_7_fu_338_p2();
    void thread_icmp_ln1494_8_fu_360_p2();
    void thread_icmp_ln1494_9_fu_382_p2();
    void thread_icmp_ln1494_fu_184_p2();
    void thread_select_ln81_10_fu_216_p3();
    void thread_select_ln81_11_fu_238_p3();
    void thread_select_ln81_12_fu_260_p3();
    void thread_select_ln81_13_fu_282_p3();
    void thread_select_ln81_14_fu_304_p3();
    void thread_select_ln81_15_fu_326_p3();
    void thread_select_ln81_16_fu_348_p3();
    void thread_select_ln81_17_fu_370_p3();
    void thread_select_ln81_18_fu_392_p3();
    void thread_select_ln81_19_fu_414_p3();
    void thread_select_ln81_20_fu_436_p3();
    void thread_select_ln81_21_fu_458_p3();
    void thread_select_ln81_22_fu_480_p3();
    void thread_select_ln81_23_fu_502_p3();
    void thread_select_ln81_24_fu_524_p3();
    void thread_select_ln81_25_fu_546_p3();
    void thread_select_ln81_26_fu_568_p3();
    void thread_select_ln81_27_fu_590_p3();
    void thread_select_ln81_28_fu_612_p3();
    void thread_select_ln81_fu_194_p3();
    void thread_trunc_ln81_10_fu_212_p1();
    void thread_trunc_ln81_11_fu_234_p1();
    void thread_trunc_ln81_12_fu_256_p1();
    void thread_trunc_ln81_13_fu_278_p1();
    void thread_trunc_ln81_14_fu_300_p1();
    void thread_trunc_ln81_15_fu_322_p1();
    void thread_trunc_ln81_16_fu_344_p1();
    void thread_trunc_ln81_17_fu_366_p1();
    void thread_trunc_ln81_18_fu_388_p1();
    void thread_trunc_ln81_19_fu_410_p1();
    void thread_trunc_ln81_20_fu_432_p1();
    void thread_trunc_ln81_21_fu_454_p1();
    void thread_trunc_ln81_22_fu_476_p1();
    void thread_trunc_ln81_23_fu_498_p1();
    void thread_trunc_ln81_24_fu_520_p1();
    void thread_trunc_ln81_25_fu_542_p1();
    void thread_trunc_ln81_26_fu_564_p1();
    void thread_trunc_ln81_27_fu_586_p1();
    void thread_trunc_ln81_28_fu_608_p1();
    void thread_trunc_ln81_fu_190_p1();
    void thread_zext_ln81_10_fu_224_p1();
    void thread_zext_ln81_11_fu_246_p1();
    void thread_zext_ln81_12_fu_268_p1();
    void thread_zext_ln81_13_fu_290_p1();
    void thread_zext_ln81_14_fu_312_p1();
    void thread_zext_ln81_15_fu_334_p1();
    void thread_zext_ln81_16_fu_356_p1();
    void thread_zext_ln81_17_fu_378_p1();
    void thread_zext_ln81_18_fu_400_p1();
    void thread_zext_ln81_19_fu_422_p1();
    void thread_zext_ln81_20_fu_444_p1();
    void thread_zext_ln81_21_fu_466_p1();
    void thread_zext_ln81_22_fu_488_p1();
    void thread_zext_ln81_23_fu_510_p1();
    void thread_zext_ln81_24_fu_532_p1();
    void thread_zext_ln81_25_fu_554_p1();
    void thread_zext_ln81_26_fu_576_p1();
    void thread_zext_ln81_27_fu_598_p1();
    void thread_zext_ln81_28_fu_620_p1();
    void thread_zext_ln81_fu_202_p1();
};

}

using namespace ap_rtl;

#endif
