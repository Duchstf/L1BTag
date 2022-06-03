#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void myproject::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(Block_proc_U0_ap_ready.read(), ap_const_logic_0))) {
        Block_proc_U0_ap_ready_count = (!Block_proc_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Block_proc_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Block_proc_U0_ap_ready.read()))) {
        Block_proc_U0_ap_ready_count = (!Block_proc_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Block_proc_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Block_proc_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Block_proc_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Block_proc_U0_ap_ready = ap_sync_Block_proc_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_0_V = ap_sync_channel_write_layer10_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_1_V = ap_sync_channel_write_layer10_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_2_V = ap_sync_channel_write_layer10_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_3_V = ap_sync_channel_write_layer10_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_4_V = ap_sync_channel_write_layer10_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_5_V = ap_sync_channel_write_layer10_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_6_V = ap_sync_channel_write_layer10_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_7_V = ap_sync_channel_write_layer10_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_8_V = ap_sync_channel_write_layer10_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer10_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config10_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer10_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer10_out_9_V = ap_sync_channel_write_layer10_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_0_V = ap_sync_channel_write_layer13_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_10_V = ap_sync_channel_write_layer13_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_11_V = ap_sync_channel_write_layer13_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_12_V = ap_sync_channel_write_layer13_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_13_V = ap_sync_channel_write_layer13_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_14_V = ap_sync_channel_write_layer13_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_15_V = ap_sync_channel_write_layer13_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_16_V = ap_sync_channel_write_layer13_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_17_V = ap_sync_channel_write_layer13_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_18_V = ap_sync_channel_write_layer13_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_19_V = ap_sync_channel_write_layer13_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_1_V = ap_sync_channel_write_layer13_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_20_V = ap_sync_channel_write_layer13_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_21_V = ap_sync_channel_write_layer13_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_22_V = ap_sync_channel_write_layer13_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_23_V = ap_sync_channel_write_layer13_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_24_V = ap_sync_channel_write_layer13_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_25_V = ap_sync_channel_write_layer13_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_26_V = ap_sync_channel_write_layer13_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_27_V = ap_sync_channel_write_layer13_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_28_V = ap_sync_channel_write_layer13_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_29_V = ap_sync_channel_write_layer13_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_2_V = ap_sync_channel_write_layer13_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_30_V = ap_sync_channel_write_layer13_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_31_V = ap_sync_channel_write_layer13_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_32_V = ap_sync_channel_write_layer13_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_33_V = ap_sync_channel_write_layer13_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_34_V = ap_sync_channel_write_layer13_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_35_V = ap_sync_channel_write_layer13_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_36_V = ap_sync_channel_write_layer13_out_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_37_V = ap_sync_channel_write_layer13_out_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_38_V = ap_sync_channel_write_layer13_out_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_39_V = ap_sync_channel_write_layer13_out_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_3_V = ap_sync_channel_write_layer13_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_40_V = ap_sync_channel_write_layer13_out_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_41_V = ap_sync_channel_write_layer13_out_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_42_V = ap_sync_channel_write_layer13_out_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_43_V = ap_sync_channel_write_layer13_out_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_44_V = ap_sync_channel_write_layer13_out_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_45_V = ap_sync_channel_write_layer13_out_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_46_V = ap_sync_channel_write_layer13_out_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_47_V = ap_sync_channel_write_layer13_out_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_48_V = ap_sync_channel_write_layer13_out_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_49_V = ap_sync_channel_write_layer13_out_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_4_V = ap_sync_channel_write_layer13_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_5_V = ap_sync_channel_write_layer13_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_6_V = ap_sync_channel_write_layer13_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_7_V = ap_sync_channel_write_layer13_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_8_V = ap_sync_channel_write_layer13_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer13_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_done.read() & 
             pointwise_conv_1d_cl_0_0_0_0_0_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer13_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer13_out_9_V = ap_sync_channel_write_layer13_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_0_V = ap_sync_channel_write_layer3_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_100_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_100_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_100_V = ap_sync_channel_write_layer3_out_100_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_101_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_101_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_101_V = ap_sync_channel_write_layer3_out_101_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_102_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_102_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_102_V = ap_sync_channel_write_layer3_out_102_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_103_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_103_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_103_V = ap_sync_channel_write_layer3_out_103_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_104_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_104_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_104_V = ap_sync_channel_write_layer3_out_104_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_105_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_105_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_105_V = ap_sync_channel_write_layer3_out_105_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_106_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_106_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_106_V = ap_sync_channel_write_layer3_out_106_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_107_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_107_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_107_V = ap_sync_channel_write_layer3_out_107_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_108_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_108_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_108_V = ap_sync_channel_write_layer3_out_108_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_109_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_109_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_109_V = ap_sync_channel_write_layer3_out_109_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_10_V = ap_sync_channel_write_layer3_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_110_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_110_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_110_V = ap_sync_channel_write_layer3_out_110_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_111_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_111_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_111_V = ap_sync_channel_write_layer3_out_111_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_112_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_112_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_112_V = ap_sync_channel_write_layer3_out_112_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_113_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_113_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_113_V = ap_sync_channel_write_layer3_out_113_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_114_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_114_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_114_V = ap_sync_channel_write_layer3_out_114_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_115_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_115_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_115_V = ap_sync_channel_write_layer3_out_115_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_116_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_116_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_116_V = ap_sync_channel_write_layer3_out_116_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_117_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_117_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_117_V = ap_sync_channel_write_layer3_out_117_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_118_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_118_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_118_V = ap_sync_channel_write_layer3_out_118_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_119_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_119_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_119_V = ap_sync_channel_write_layer3_out_119_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_11_V = ap_sync_channel_write_layer3_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_120_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_120_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_120_V = ap_sync_channel_write_layer3_out_120_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_121_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_121_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_121_V = ap_sync_channel_write_layer3_out_121_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_122_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_122_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_122_V = ap_sync_channel_write_layer3_out_122_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_123_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_123_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_123_V = ap_sync_channel_write_layer3_out_123_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_124_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_124_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_124_V = ap_sync_channel_write_layer3_out_124_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_125_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_125_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_125_V = ap_sync_channel_write_layer3_out_125_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_126_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_126_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_126_V = ap_sync_channel_write_layer3_out_126_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_127_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_127_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_127_V = ap_sync_channel_write_layer3_out_127_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_128_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_128_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_128_V = ap_sync_channel_write_layer3_out_128_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_129_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_129_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_129_V = ap_sync_channel_write_layer3_out_129_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_12_V = ap_sync_channel_write_layer3_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_130_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_130_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_130_V = ap_sync_channel_write_layer3_out_130_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_131_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_131_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_131_V = ap_sync_channel_write_layer3_out_131_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_132_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_132_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_132_V = ap_sync_channel_write_layer3_out_132_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_133_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_133_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_133_V = ap_sync_channel_write_layer3_out_133_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_134_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_134_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_134_V = ap_sync_channel_write_layer3_out_134_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_135_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_135_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_135_V = ap_sync_channel_write_layer3_out_135_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_136_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_136_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_136_V = ap_sync_channel_write_layer3_out_136_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_137_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_137_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_137_V = ap_sync_channel_write_layer3_out_137_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_138_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_138_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_138_V = ap_sync_channel_write_layer3_out_138_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_139_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_139_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_139_V = ap_sync_channel_write_layer3_out_139_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_13_V = ap_sync_channel_write_layer3_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_140_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_140_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_140_V = ap_sync_channel_write_layer3_out_140_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_141_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_141_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_141_V = ap_sync_channel_write_layer3_out_141_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_142_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_142_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_142_V = ap_sync_channel_write_layer3_out_142_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_143_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_143_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_143_V = ap_sync_channel_write_layer3_out_143_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_144_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_144_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_144_V = ap_sync_channel_write_layer3_out_144_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_145_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_145_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_145_V = ap_sync_channel_write_layer3_out_145_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_146_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_146_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_146_V = ap_sync_channel_write_layer3_out_146_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_147_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_147_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_147_V = ap_sync_channel_write_layer3_out_147_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_148_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_148_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_148_V = ap_sync_channel_write_layer3_out_148_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_149_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_149_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_149_V = ap_sync_channel_write_layer3_out_149_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_14_V = ap_sync_channel_write_layer3_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_150_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_150_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_150_V = ap_sync_channel_write_layer3_out_150_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_151_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_151_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_151_V = ap_sync_channel_write_layer3_out_151_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_152_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_152_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_152_V = ap_sync_channel_write_layer3_out_152_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_153_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_153_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_153_V = ap_sync_channel_write_layer3_out_153_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_154_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_154_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_154_V = ap_sync_channel_write_layer3_out_154_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_155_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_155_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_155_V = ap_sync_channel_write_layer3_out_155_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_156_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_156_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_156_V = ap_sync_channel_write_layer3_out_156_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_157_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_157_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_157_V = ap_sync_channel_write_layer3_out_157_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_158_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_158_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_158_V = ap_sync_channel_write_layer3_out_158_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_159_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_159_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_159_V = ap_sync_channel_write_layer3_out_159_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_15_V = ap_sync_channel_write_layer3_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_160_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_160_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_160_V = ap_sync_channel_write_layer3_out_160_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_161_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_161_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_161_V = ap_sync_channel_write_layer3_out_161_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_162_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_162_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_162_V = ap_sync_channel_write_layer3_out_162_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_163_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_163_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_163_V = ap_sync_channel_write_layer3_out_163_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_164_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_164_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_164_V = ap_sync_channel_write_layer3_out_164_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_165_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_165_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_165_V = ap_sync_channel_write_layer3_out_165_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_166_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_166_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_166_V = ap_sync_channel_write_layer3_out_166_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_167_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_167_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_167_V = ap_sync_channel_write_layer3_out_167_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_168_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_168_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_168_V = ap_sync_channel_write_layer3_out_168_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_169_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_169_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_169_V = ap_sync_channel_write_layer3_out_169_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_16_V = ap_sync_channel_write_layer3_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_170_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_170_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_170_V = ap_sync_channel_write_layer3_out_170_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_171_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_171_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_171_V = ap_sync_channel_write_layer3_out_171_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_172_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_172_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_172_V = ap_sync_channel_write_layer3_out_172_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_173_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_173_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_173_V = ap_sync_channel_write_layer3_out_173_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_174_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_174_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_174_V = ap_sync_channel_write_layer3_out_174_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_175_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_175_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_175_V = ap_sync_channel_write_layer3_out_175_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_176_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_176_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_176_V = ap_sync_channel_write_layer3_out_176_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_177_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_177_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_177_V = ap_sync_channel_write_layer3_out_177_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_178_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_178_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_178_V = ap_sync_channel_write_layer3_out_178_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_179_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_179_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_179_V = ap_sync_channel_write_layer3_out_179_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_17_V = ap_sync_channel_write_layer3_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_180_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_180_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_180_V = ap_sync_channel_write_layer3_out_180_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_181_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_181_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_181_V = ap_sync_channel_write_layer3_out_181_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_182_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_182_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_182_V = ap_sync_channel_write_layer3_out_182_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_183_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_183_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_183_V = ap_sync_channel_write_layer3_out_183_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_184_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_184_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_184_V = ap_sync_channel_write_layer3_out_184_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_185_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_185_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_185_V = ap_sync_channel_write_layer3_out_185_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_186_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_186_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_186_V = ap_sync_channel_write_layer3_out_186_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_187_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_187_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_187_V = ap_sync_channel_write_layer3_out_187_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_188_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_188_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_188_V = ap_sync_channel_write_layer3_out_188_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_189_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_189_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_189_V = ap_sync_channel_write_layer3_out_189_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_18_V = ap_sync_channel_write_layer3_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_190_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_190_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_190_V = ap_sync_channel_write_layer3_out_190_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_191_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_191_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_191_V = ap_sync_channel_write_layer3_out_191_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_192_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_192_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_192_V = ap_sync_channel_write_layer3_out_192_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_193_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_193_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_193_V = ap_sync_channel_write_layer3_out_193_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_194_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_194_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_194_V = ap_sync_channel_write_layer3_out_194_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_195_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_195_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_195_V = ap_sync_channel_write_layer3_out_195_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_196_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_196_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_196_V = ap_sync_channel_write_layer3_out_196_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_197_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_197_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_197_V = ap_sync_channel_write_layer3_out_197_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_198_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_198_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_198_V = ap_sync_channel_write_layer3_out_198_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_199_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_199_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_199_V = ap_sync_channel_write_layer3_out_199_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_19_V = ap_sync_channel_write_layer3_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_1_V = ap_sync_channel_write_layer3_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_20_V = ap_sync_channel_write_layer3_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_21_V = ap_sync_channel_write_layer3_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_22_V = ap_sync_channel_write_layer3_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_23_V = ap_sync_channel_write_layer3_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_24_V = ap_sync_channel_write_layer3_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_25_V = ap_sync_channel_write_layer3_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_26_V = ap_sync_channel_write_layer3_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_27_V = ap_sync_channel_write_layer3_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_28_V = ap_sync_channel_write_layer3_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_29_V = ap_sync_channel_write_layer3_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_2_V = ap_sync_channel_write_layer3_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_30_V = ap_sync_channel_write_layer3_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_31_V = ap_sync_channel_write_layer3_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_32_V = ap_sync_channel_write_layer3_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_33_V = ap_sync_channel_write_layer3_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_34_V = ap_sync_channel_write_layer3_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_35_V = ap_sync_channel_write_layer3_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_36_V = ap_sync_channel_write_layer3_out_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_37_V = ap_sync_channel_write_layer3_out_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_38_V = ap_sync_channel_write_layer3_out_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_39_V = ap_sync_channel_write_layer3_out_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_3_V = ap_sync_channel_write_layer3_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_40_V = ap_sync_channel_write_layer3_out_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_41_V = ap_sync_channel_write_layer3_out_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_42_V = ap_sync_channel_write_layer3_out_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_43_V = ap_sync_channel_write_layer3_out_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_44_V = ap_sync_channel_write_layer3_out_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_45_V = ap_sync_channel_write_layer3_out_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_46_V = ap_sync_channel_write_layer3_out_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_47_V = ap_sync_channel_write_layer3_out_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_48_V = ap_sync_channel_write_layer3_out_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_49_V = ap_sync_channel_write_layer3_out_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_4_V = ap_sync_channel_write_layer3_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_50_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_50_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_50_V = ap_sync_channel_write_layer3_out_50_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_51_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_51_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_51_V = ap_sync_channel_write_layer3_out_51_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_52_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_52_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_52_V = ap_sync_channel_write_layer3_out_52_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_53_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_53_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_53_V = ap_sync_channel_write_layer3_out_53_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_54_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_54_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_54_V = ap_sync_channel_write_layer3_out_54_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_55_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_55_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_55_V = ap_sync_channel_write_layer3_out_55_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_56_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_56_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_56_V = ap_sync_channel_write_layer3_out_56_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_57_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_57_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_57_V = ap_sync_channel_write_layer3_out_57_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_58_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_58_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_58_V = ap_sync_channel_write_layer3_out_58_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_59_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_59_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_59_V = ap_sync_channel_write_layer3_out_59_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_5_V = ap_sync_channel_write_layer3_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_60_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_60_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_60_V = ap_sync_channel_write_layer3_out_60_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_61_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_61_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_61_V = ap_sync_channel_write_layer3_out_61_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_62_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_62_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_62_V = ap_sync_channel_write_layer3_out_62_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_63_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_63_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_63_V = ap_sync_channel_write_layer3_out_63_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_64_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_64_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_64_V = ap_sync_channel_write_layer3_out_64_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_65_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_65_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_65_V = ap_sync_channel_write_layer3_out_65_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_66_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_66_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_66_V = ap_sync_channel_write_layer3_out_66_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_67_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_67_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_67_V = ap_sync_channel_write_layer3_out_67_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_68_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_68_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_68_V = ap_sync_channel_write_layer3_out_68_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_69_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_69_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_69_V = ap_sync_channel_write_layer3_out_69_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_6_V = ap_sync_channel_write_layer3_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_70_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_70_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_70_V = ap_sync_channel_write_layer3_out_70_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_71_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_71_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_71_V = ap_sync_channel_write_layer3_out_71_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_72_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_72_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_72_V = ap_sync_channel_write_layer3_out_72_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_73_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_73_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_73_V = ap_sync_channel_write_layer3_out_73_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_74_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_74_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_74_V = ap_sync_channel_write_layer3_out_74_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_75_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_75_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_75_V = ap_sync_channel_write_layer3_out_75_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_76_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_76_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_76_V = ap_sync_channel_write_layer3_out_76_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_77_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_77_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_77_V = ap_sync_channel_write_layer3_out_77_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_78_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_78_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_78_V = ap_sync_channel_write_layer3_out_78_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_79_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_79_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_79_V = ap_sync_channel_write_layer3_out_79_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_7_V = ap_sync_channel_write_layer3_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_80_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_80_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_80_V = ap_sync_channel_write_layer3_out_80_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_81_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_81_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_81_V = ap_sync_channel_write_layer3_out_81_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_82_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_82_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_82_V = ap_sync_channel_write_layer3_out_82_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_83_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_83_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_83_V = ap_sync_channel_write_layer3_out_83_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_84_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_84_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_84_V = ap_sync_channel_write_layer3_out_84_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_85_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_85_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_85_V = ap_sync_channel_write_layer3_out_85_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_86_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_86_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_86_V = ap_sync_channel_write_layer3_out_86_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_87_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_87_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_87_V = ap_sync_channel_write_layer3_out_87_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_88_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_88_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_88_V = ap_sync_channel_write_layer3_out_88_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_89_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_89_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_89_V = ap_sync_channel_write_layer3_out_89_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_8_V = ap_sync_channel_write_layer3_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_90_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_90_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_90_V = ap_sync_channel_write_layer3_out_90_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_91_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_91_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_91_V = ap_sync_channel_write_layer3_out_91_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_92_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_92_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_92_V = ap_sync_channel_write_layer3_out_92_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_93_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_93_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_93_V = ap_sync_channel_write_layer3_out_93_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_94_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_94_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_94_V = ap_sync_channel_write_layer3_out_94_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_95_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_95_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_95_V = ap_sync_channel_write_layer3_out_95_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_96_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_96_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_96_V = ap_sync_channel_write_layer3_out_96_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_97_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_97_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_97_V = ap_sync_channel_write_layer3_out_97_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_98_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_98_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_98_V = ap_sync_channel_write_layer3_out_98_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_99_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_99_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_99_V = ap_sync_channel_write_layer3_out_99_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer3_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer3_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer3_out_9_V = ap_sync_channel_write_layer3_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_0_V = ap_sync_channel_write_layer5_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_10_V = ap_sync_channel_write_layer5_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_11_V = ap_sync_channel_write_layer5_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_12_V = ap_sync_channel_write_layer5_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_13_V = ap_sync_channel_write_layer5_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_14_V = ap_sync_channel_write_layer5_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_15_V = ap_sync_channel_write_layer5_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_16_V = ap_sync_channel_write_layer5_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_17_V = ap_sync_channel_write_layer5_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_18_V = ap_sync_channel_write_layer5_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_19_V = ap_sync_channel_write_layer5_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_1_V = ap_sync_channel_write_layer5_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_20_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_20_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_20_V = ap_sync_channel_write_layer5_out_20_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_21_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_21_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_21_V = ap_sync_channel_write_layer5_out_21_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_22_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_22_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_22_V = ap_sync_channel_write_layer5_out_22_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_23_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_23_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_23_V = ap_sync_channel_write_layer5_out_23_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_24_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_24_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_24_V = ap_sync_channel_write_layer5_out_24_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_25_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_25_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_25_V = ap_sync_channel_write_layer5_out_25_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_26_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_26_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_26_V = ap_sync_channel_write_layer5_out_26_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_27_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_27_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_27_V = ap_sync_channel_write_layer5_out_27_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_28_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_28_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_28_V = ap_sync_channel_write_layer5_out_28_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_29_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_29_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_29_V = ap_sync_channel_write_layer5_out_29_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_2_V = ap_sync_channel_write_layer5_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_30_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_30_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_30_V = ap_sync_channel_write_layer5_out_30_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_31_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_31_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_31_V = ap_sync_channel_write_layer5_out_31_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_32_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_32_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_32_V = ap_sync_channel_write_layer5_out_32_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_33_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_33_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_33_V = ap_sync_channel_write_layer5_out_33_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_34_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_34_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_34_V = ap_sync_channel_write_layer5_out_34_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_35_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_35_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_35_V = ap_sync_channel_write_layer5_out_35_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_36_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_36_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_36_V = ap_sync_channel_write_layer5_out_36_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_37_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_37_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_37_V = ap_sync_channel_write_layer5_out_37_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_38_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_38_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_38_V = ap_sync_channel_write_layer5_out_38_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_39_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_39_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_39_V = ap_sync_channel_write_layer5_out_39_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_3_V = ap_sync_channel_write_layer5_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_40_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_40_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_40_V = ap_sync_channel_write_layer5_out_40_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_41_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_41_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_41_V = ap_sync_channel_write_layer5_out_41_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_42_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_42_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_42_V = ap_sync_channel_write_layer5_out_42_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_43_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_43_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_43_V = ap_sync_channel_write_layer5_out_43_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_44_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_44_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_44_V = ap_sync_channel_write_layer5_out_44_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_45_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_45_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_45_V = ap_sync_channel_write_layer5_out_45_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_46_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_46_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_46_V = ap_sync_channel_write_layer5_out_46_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_47_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_47_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_47_V = ap_sync_channel_write_layer5_out_47_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_48_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_48_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_48_V = ap_sync_channel_write_layer5_out_48_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_49_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_49_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_49_V = ap_sync_channel_write_layer5_out_49_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_4_V = ap_sync_channel_write_layer5_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_5_V = ap_sync_channel_write_layer5_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_6_V = ap_sync_channel_write_layer5_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_7_V = ap_sync_channel_write_layer5_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_8_V = ap_sync_channel_write_layer5_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer5_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer5_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer5_out_9_V = ap_sync_channel_write_layer5_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_0_V = ap_sync_channel_write_layer7_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_10_V = ap_sync_channel_write_layer7_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_11_V = ap_sync_channel_write_layer7_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_12_V = ap_sync_channel_write_layer7_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_13_V = ap_sync_channel_write_layer7_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_14_V = ap_sync_channel_write_layer7_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_15_V = ap_sync_channel_write_layer7_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_16_V = ap_sync_channel_write_layer7_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_17_V = ap_sync_channel_write_layer7_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_18_V = ap_sync_channel_write_layer7_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_19_V = ap_sync_channel_write_layer7_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_1_V = ap_sync_channel_write_layer7_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_2_V = ap_sync_channel_write_layer7_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_3_V = ap_sync_channel_write_layer7_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_4_V = ap_sync_channel_write_layer7_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_5_V = ap_sync_channel_write_layer7_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_6_V = ap_sync_channel_write_layer7_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_7_V = ap_sync_channel_write_layer7_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_8_V = ap_sync_channel_write_layer7_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer7_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer7_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer7_out_9_V = ap_sync_channel_write_layer7_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_0_V = ap_sync_channel_write_layer8_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_10_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_10_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_10_V = ap_sync_channel_write_layer8_out_10_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_11_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_11_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_11_V = ap_sync_channel_write_layer8_out_11_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_12_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_12_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_12_V = ap_sync_channel_write_layer8_out_12_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_13_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_13_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_13_V = ap_sync_channel_write_layer8_out_13_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_14_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_14_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_14_V = ap_sync_channel_write_layer8_out_14_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_15_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_15_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_15_V = ap_sync_channel_write_layer8_out_15_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_16_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_16_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_16_V = ap_sync_channel_write_layer8_out_16_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_17_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_17_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_17_V = ap_sync_channel_write_layer8_out_17_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_18_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_18_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_18_V = ap_sync_channel_write_layer8_out_18_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_19_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_19_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_19_V = ap_sync_channel_write_layer8_out_19_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_1_V = ap_sync_channel_write_layer8_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_2_V = ap_sync_channel_write_layer8_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_3_V = ap_sync_channel_write_layer8_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_4_V = ap_sync_channel_write_layer8_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_5_V = ap_sync_channel_write_layer8_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_6_V = ap_sync_channel_write_layer8_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_7_V = ap_sync_channel_write_layer8_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_8_V = ap_sync_channel_write_layer8_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer8_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_done.read() & 
             relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer8_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer8_out_9_V = ap_sync_channel_write_layer8_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_0_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_0_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_0_V = ap_sync_channel_write_layer9_out_0_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_1_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_1_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_1_V = ap_sync_channel_write_layer9_out_1_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_2_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_2_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_2_V = ap_sync_channel_write_layer9_out_2_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_3_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_3_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_3_V = ap_sync_channel_write_layer9_out_3_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_4_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_4_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_4_V = ap_sync_channel_write_layer9_out_4_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_5_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_5_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_5_V = ap_sync_channel_write_layer9_out_5_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_6_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_6_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_6_V = ap_sync_channel_write_layer9_out_6_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_7_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_7_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_7_V = ap_sync_channel_write_layer9_out_7_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_8_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_8_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_8_V = ap_sync_channel_write_layer9_out_8_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_layer9_out_9_V = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_done.read() & 
             dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_layer9_out_9_V = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_layer9_out_9_V = ap_sync_channel_write_layer9_out_9_V.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_myproject_entry3_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_myproject_entry3_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_myproject_entry3_U0_ap_ready = ap_sync_myproject_entry3_U0_ap_ready.read();
        }
    }
    if ((esl_seteq<1,1,1>(myproject_entry3_U0_ap_ready.read(), ap_const_logic_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()))) {
        myproject_entry3_U0_ap_ready_count = (!myproject_entry3_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(myproject_entry3_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(myproject_entry3_U0_ap_ready.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()))) {
        myproject_entry3_U0_ap_ready_count = (!myproject_entry3_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(myproject_entry3_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
}

}

