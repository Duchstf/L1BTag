#include "conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_0_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_0_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_0_V_i_channel = ap_sync_channel_write_dense_data_10_0_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_10_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_10_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_10_V_i_channel = ap_sync_channel_write_dense_data_10_10_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_11_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_11_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_11_V_i_channel = ap_sync_channel_write_dense_data_10_11_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_12_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_12_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_12_V_i_channel = ap_sync_channel_write_dense_data_10_12_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_13_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_13_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_13_V_i_channel = ap_sync_channel_write_dense_data_10_13_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_14_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_14_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_14_V_i_channel = ap_sync_channel_write_dense_data_10_14_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_1_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_1_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_1_V_i_channel = ap_sync_channel_write_dense_data_10_1_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_2_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_2_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_2_V_i_channel = ap_sync_channel_write_dense_data_10_2_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_3_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_3_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_3_V_i_channel = ap_sync_channel_write_dense_data_10_3_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_4_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_4_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_4_V_i_channel = ap_sync_channel_write_dense_data_10_4_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_5_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_5_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_5_V_i_channel = ap_sync_channel_write_dense_data_10_5_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_6_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_6_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_6_V_i_channel = ap_sync_channel_write_dense_data_10_6_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_7_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_7_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_7_V_i_channel = ap_sync_channel_write_dense_data_10_7_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_8_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_8_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_8_V_i_channel = ap_sync_channel_write_dense_data_10_8_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_10_9_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_10_9_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_10_9_V_i_channel = ap_sync_channel_write_dense_data_10_9_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_0_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_0_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_0_V_i_channel = ap_sync_channel_write_dense_data_1_0_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_10_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_10_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_10_V_i_channel = ap_sync_channel_write_dense_data_1_10_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_11_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_11_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_11_V_i_channel = ap_sync_channel_write_dense_data_1_11_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_12_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_12_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_12_V_i_channel = ap_sync_channel_write_dense_data_1_12_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_13_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_13_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_13_V_i_channel = ap_sync_channel_write_dense_data_1_13_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_14_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_14_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_14_V_i_channel = ap_sync_channel_write_dense_data_1_14_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_1_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_1_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_1_V_i_channel = ap_sync_channel_write_dense_data_1_1_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_2_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_2_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_2_V_i_channel = ap_sync_channel_write_dense_data_1_2_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_3_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_3_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_3_V_i_channel = ap_sync_channel_write_dense_data_1_3_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_4_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_4_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_4_V_i_channel = ap_sync_channel_write_dense_data_1_4_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_5_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_5_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_5_V_i_channel = ap_sync_channel_write_dense_data_1_5_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_6_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_6_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_6_V_i_channel = ap_sync_channel_write_dense_data_1_6_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_7_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_7_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_7_V_i_channel = ap_sync_channel_write_dense_data_1_7_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_8_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_8_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_8_V_i_channel = ap_sync_channel_write_dense_data_1_8_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_1_9_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_1_9_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_1_9_V_i_channel = ap_sync_channel_write_dense_data_1_9_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_0_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_0_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_0_V_i_channel = ap_sync_channel_write_dense_data_2_0_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_10_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_10_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_10_V_i_channel = ap_sync_channel_write_dense_data_2_10_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_11_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_11_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_11_V_i_channel = ap_sync_channel_write_dense_data_2_11_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_12_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_12_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_12_V_i_channel = ap_sync_channel_write_dense_data_2_12_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_13_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_13_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_13_V_i_channel = ap_sync_channel_write_dense_data_2_13_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_14_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_14_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_14_V_i_channel = ap_sync_channel_write_dense_data_2_14_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_1_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_1_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_1_V_i_channel = ap_sync_channel_write_dense_data_2_1_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_2_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_2_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_2_V_i_channel = ap_sync_channel_write_dense_data_2_2_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_3_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_3_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_3_V_i_channel = ap_sync_channel_write_dense_data_2_3_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_4_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_4_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_4_V_i_channel = ap_sync_channel_write_dense_data_2_4_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_5_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_5_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_5_V_i_channel = ap_sync_channel_write_dense_data_2_5_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_6_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_6_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_6_V_i_channel = ap_sync_channel_write_dense_data_2_6_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_7_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_7_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_7_V_i_channel = ap_sync_channel_write_dense_data_2_7_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_8_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_8_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_8_V_i_channel = ap_sync_channel_write_dense_data_2_8_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_2_9_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_2_9_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_2_9_V_i_channel = ap_sync_channel_write_dense_data_2_9_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_0_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_0_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_0_V_i_channel = ap_sync_channel_write_dense_data_3_0_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_10_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_10_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_10_V_i_channel = ap_sync_channel_write_dense_data_3_10_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_11_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_11_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_11_V_i_channel = ap_sync_channel_write_dense_data_3_11_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_12_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_12_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_12_V_i_channel = ap_sync_channel_write_dense_data_3_12_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_13_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_13_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_13_V_i_channel = ap_sync_channel_write_dense_data_3_13_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_14_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_14_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_14_V_i_channel = ap_sync_channel_write_dense_data_3_14_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_1_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_1_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_1_V_i_channel = ap_sync_channel_write_dense_data_3_1_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_2_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_2_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_2_V_i_channel = ap_sync_channel_write_dense_data_3_2_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_3_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_3_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_3_V_i_channel = ap_sync_channel_write_dense_data_3_3_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_4_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_4_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_4_V_i_channel = ap_sync_channel_write_dense_data_3_4_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_5_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_5_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_5_V_i_channel = ap_sync_channel_write_dense_data_3_5_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_6_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_6_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_6_V_i_channel = ap_sync_channel_write_dense_data_3_6_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_7_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_7_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_7_V_i_channel = ap_sync_channel_write_dense_data_3_7_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_8_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_8_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_8_V_i_channel = ap_sync_channel_write_dense_data_3_8_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_3_9_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_3_9_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_3_9_V_i_channel = ap_sync_channel_write_dense_data_3_9_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_0_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_0_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_0_V_i_channel = ap_sync_channel_write_dense_data_4_0_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_10_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_10_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_10_V_i_channel = ap_sync_channel_write_dense_data_4_10_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_11_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_11_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_11_V_i_channel = ap_sync_channel_write_dense_data_4_11_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_12_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_12_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_12_V_i_channel = ap_sync_channel_write_dense_data_4_12_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_13_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_13_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_13_V_i_channel = ap_sync_channel_write_dense_data_4_13_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_14_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_14_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_14_V_i_channel = ap_sync_channel_write_dense_data_4_14_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_1_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_1_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_1_V_i_channel = ap_sync_channel_write_dense_data_4_1_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_2_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_2_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_2_V_i_channel = ap_sync_channel_write_dense_data_4_2_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_3_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_3_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_3_V_i_channel = ap_sync_channel_write_dense_data_4_3_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_4_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_4_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_4_V_i_channel = ap_sync_channel_write_dense_data_4_4_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_5_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_5_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_5_V_i_channel = ap_sync_channel_write_dense_data_4_5_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_6_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_6_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_6_V_i_channel = ap_sync_channel_write_dense_data_4_6_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_7_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_7_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_7_V_i_channel = ap_sync_channel_write_dense_data_4_7_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_8_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_8_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_8_V_i_channel = ap_sync_channel_write_dense_data_4_8_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_4_9_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_4_9_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_4_9_V_i_channel = ap_sync_channel_write_dense_data_4_9_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_0_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_0_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_0_V_i_channel = ap_sync_channel_write_dense_data_5_0_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_10_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_10_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_10_V_i_channel = ap_sync_channel_write_dense_data_5_10_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_11_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_11_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_11_V_i_channel = ap_sync_channel_write_dense_data_5_11_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_12_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_12_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_12_V_i_channel = ap_sync_channel_write_dense_data_5_12_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_13_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_13_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_13_V_i_channel = ap_sync_channel_write_dense_data_5_13_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_14_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_14_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_14_V_i_channel = ap_sync_channel_write_dense_data_5_14_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_1_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_1_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_1_V_i_channel = ap_sync_channel_write_dense_data_5_1_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_2_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_2_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_2_V_i_channel = ap_sync_channel_write_dense_data_5_2_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_3_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_3_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_3_V_i_channel = ap_sync_channel_write_dense_data_5_3_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_4_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_4_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_4_V_i_channel = ap_sync_channel_write_dense_data_5_4_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_5_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_5_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_5_V_i_channel = ap_sync_channel_write_dense_data_5_5_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_6_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_6_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_6_V_i_channel = ap_sync_channel_write_dense_data_5_6_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_7_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_7_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_7_V_i_channel = ap_sync_channel_write_dense_data_5_7_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_8_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_8_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_8_V_i_channel = ap_sync_channel_write_dense_data_5_8_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_5_9_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_5_9_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_5_9_V_i_channel = ap_sync_channel_write_dense_data_5_9_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_0_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_0_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_0_V_i_channel = ap_sync_channel_write_dense_data_6_0_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_10_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_10_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_10_V_i_channel = ap_sync_channel_write_dense_data_6_10_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_11_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_11_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_11_V_i_channel = ap_sync_channel_write_dense_data_6_11_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_12_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_12_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_12_V_i_channel = ap_sync_channel_write_dense_data_6_12_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_13_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_13_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_13_V_i_channel = ap_sync_channel_write_dense_data_6_13_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_14_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_14_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_14_V_i_channel = ap_sync_channel_write_dense_data_6_14_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_1_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_1_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_1_V_i_channel = ap_sync_channel_write_dense_data_6_1_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_2_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_2_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_2_V_i_channel = ap_sync_channel_write_dense_data_6_2_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_3_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_3_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_3_V_i_channel = ap_sync_channel_write_dense_data_6_3_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_4_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_4_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_4_V_i_channel = ap_sync_channel_write_dense_data_6_4_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_5_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_5_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_5_V_i_channel = ap_sync_channel_write_dense_data_6_5_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_6_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_6_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_6_V_i_channel = ap_sync_channel_write_dense_data_6_6_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_7_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_7_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_7_V_i_channel = ap_sync_channel_write_dense_data_6_7_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_8_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_8_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_8_V_i_channel = ap_sync_channel_write_dense_data_6_8_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_6_9_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_6_9_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_6_9_V_i_channel = ap_sync_channel_write_dense_data_6_9_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_0_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_0_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_0_V_i_channel = ap_sync_channel_write_dense_data_7_0_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_10_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_10_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_10_V_i_channel = ap_sync_channel_write_dense_data_7_10_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_11_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_11_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_11_V_i_channel = ap_sync_channel_write_dense_data_7_11_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_12_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_12_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_12_V_i_channel = ap_sync_channel_write_dense_data_7_12_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_13_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_13_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_13_V_i_channel = ap_sync_channel_write_dense_data_7_13_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_14_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_14_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_14_V_i_channel = ap_sync_channel_write_dense_data_7_14_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_1_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_1_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_1_V_i_channel = ap_sync_channel_write_dense_data_7_1_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_2_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_2_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_2_V_i_channel = ap_sync_channel_write_dense_data_7_2_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_3_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_3_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_3_V_i_channel = ap_sync_channel_write_dense_data_7_3_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_4_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_4_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_4_V_i_channel = ap_sync_channel_write_dense_data_7_4_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_5_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_5_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_5_V_i_channel = ap_sync_channel_write_dense_data_7_5_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_6_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_6_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_6_V_i_channel = ap_sync_channel_write_dense_data_7_6_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_7_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_7_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_7_V_i_channel = ap_sync_channel_write_dense_data_7_7_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_8_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_8_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_8_V_i_channel = ap_sync_channel_write_dense_data_7_8_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_7_9_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_7_9_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_7_9_V_i_channel = ap_sync_channel_write_dense_data_7_9_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_0_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_0_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_0_V_i_channel = ap_sync_channel_write_dense_data_8_0_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_10_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_10_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_10_V_i_channel = ap_sync_channel_write_dense_data_8_10_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_11_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_11_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_11_V_i_channel = ap_sync_channel_write_dense_data_8_11_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_12_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_12_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_12_V_i_channel = ap_sync_channel_write_dense_data_8_12_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_13_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_13_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_13_V_i_channel = ap_sync_channel_write_dense_data_8_13_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_14_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_14_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_14_V_i_channel = ap_sync_channel_write_dense_data_8_14_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_1_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_1_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_1_V_i_channel = ap_sync_channel_write_dense_data_8_1_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_2_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_2_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_2_V_i_channel = ap_sync_channel_write_dense_data_8_2_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_3_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_3_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_3_V_i_channel = ap_sync_channel_write_dense_data_8_3_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_4_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_4_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_4_V_i_channel = ap_sync_channel_write_dense_data_8_4_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_5_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_5_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_5_V_i_channel = ap_sync_channel_write_dense_data_8_5_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_6_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_6_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_6_V_i_channel = ap_sync_channel_write_dense_data_8_6_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_7_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_7_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_7_V_i_channel = ap_sync_channel_write_dense_data_8_7_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_8_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_8_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_8_V_i_channel = ap_sync_channel_write_dense_data_8_8_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_8_9_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_8_9_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_8_9_V_i_channel = ap_sync_channel_write_dense_data_8_9_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_0_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_0_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_0_V_i_channel = ap_sync_channel_write_dense_data_9_0_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_10_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_10_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_10_V_i_channel = ap_sync_channel_write_dense_data_9_10_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_11_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_11_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_11_V_i_channel = ap_sync_channel_write_dense_data_9_11_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_12_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_12_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_12_V_i_channel = ap_sync_channel_write_dense_data_9_12_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_13_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_13_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_13_V_i_channel = ap_sync_channel_write_dense_data_9_13_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_14_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_14_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_14_V_i_channel = ap_sync_channel_write_dense_data_9_14_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_1_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_1_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_1_V_i_channel = ap_sync_channel_write_dense_data_9_1_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_2_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_2_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_2_V_i_channel = ap_sync_channel_write_dense_data_9_2_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_3_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_3_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_3_V_i_channel = ap_sync_channel_write_dense_data_9_3_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_4_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_4_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_4_V_i_channel = ap_sync_channel_write_dense_data_9_4_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_5_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_5_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_5_V_i_channel = ap_sync_channel_write_dense_data_9_5_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_6_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_6_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_6_V_i_channel = ap_sync_channel_write_dense_data_9_6_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_7_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_7_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_7_V_i_channel = ap_sync_channel_write_dense_data_9_7_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_8_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_8_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_8_V_i_channel = ap_sync_channel_write_dense_data_9_8_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_data_9_9_V_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & 
             conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_data_9_9_V_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_data_9_9_V_i_channel = ap_sync_channel_write_dense_data_9_9_V_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_0_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_0_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_0_i_channel = ap_sync_channel_write_dense_res_10_0_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_10_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_10_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_10_i_channel = ap_sync_channel_write_dense_res_10_10_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_11_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_11_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_11_i_channel = ap_sync_channel_write_dense_res_10_11_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_12_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_12_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_12_i_channel = ap_sync_channel_write_dense_res_10_12_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_13_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_13_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_13_i_channel = ap_sync_channel_write_dense_res_10_13_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_14_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_14_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_14_i_channel = ap_sync_channel_write_dense_res_10_14_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_15_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_15_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_15_i_channel = ap_sync_channel_write_dense_res_10_15_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_16_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_16_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_16_i_channel = ap_sync_channel_write_dense_res_10_16_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_17_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_17_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_17_i_channel = ap_sync_channel_write_dense_res_10_17_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_18_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_18_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_18_i_channel = ap_sync_channel_write_dense_res_10_18_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_19_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_19_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_19_i_channel = ap_sync_channel_write_dense_res_10_19_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_1_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_1_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_1_i_channel = ap_sync_channel_write_dense_res_10_1_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_2_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_2_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_2_i_channel = ap_sync_channel_write_dense_res_10_2_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_3_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_3_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_3_i_channel = ap_sync_channel_write_dense_res_10_3_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_4_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_4_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_4_i_channel = ap_sync_channel_write_dense_res_10_4_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_5_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_5_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_5_i_channel = ap_sync_channel_write_dense_res_10_5_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_6_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_6_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_6_i_channel = ap_sync_channel_write_dense_res_10_6_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_7_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_7_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_7_i_channel = ap_sync_channel_write_dense_res_10_7_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_8_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_8_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_8_i_channel = ap_sync_channel_write_dense_res_10_8_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_10_9_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_9_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_10_9_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_10_9_i_channel = ap_sync_channel_write_dense_res_10_9_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_0_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_0_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_0_i_channel = ap_sync_channel_write_dense_res_1_0_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_10_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_10_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_10_i_channel = ap_sync_channel_write_dense_res_1_10_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_11_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_11_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_11_i_channel = ap_sync_channel_write_dense_res_1_11_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_12_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_12_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_12_i_channel = ap_sync_channel_write_dense_res_1_12_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_13_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_13_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_13_i_channel = ap_sync_channel_write_dense_res_1_13_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_14_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_14_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_14_i_channel = ap_sync_channel_write_dense_res_1_14_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_15_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_15_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_15_i_channel = ap_sync_channel_write_dense_res_1_15_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_16_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_16_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_16_i_channel = ap_sync_channel_write_dense_res_1_16_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_17_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_17_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_17_i_channel = ap_sync_channel_write_dense_res_1_17_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_18_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_18_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_18_i_channel = ap_sync_channel_write_dense_res_1_18_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_19_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_19_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_19_i_channel = ap_sync_channel_write_dense_res_1_19_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_1_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_1_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_1_i_channel = ap_sync_channel_write_dense_res_1_1_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_2_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_2_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_2_i_channel = ap_sync_channel_write_dense_res_1_2_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_3_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_3_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_3_i_channel = ap_sync_channel_write_dense_res_1_3_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_4_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_4_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_4_i_channel = ap_sync_channel_write_dense_res_1_4_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_5_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_5_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_5_i_channel = ap_sync_channel_write_dense_res_1_5_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_6_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_6_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_6_i_channel = ap_sync_channel_write_dense_res_1_6_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_7_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_7_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_7_i_channel = ap_sync_channel_write_dense_res_1_7_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_8_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_8_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_8_i_channel = ap_sync_channel_write_dense_res_1_8_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_1_9_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_8_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_1_9_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_1_9_i_channel = ap_sync_channel_write_dense_res_1_9_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_0_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_0_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_0_i_channel = ap_sync_channel_write_dense_res_2_0_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_10_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_10_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_10_i_channel = ap_sync_channel_write_dense_res_2_10_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_11_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_11_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_11_i_channel = ap_sync_channel_write_dense_res_2_11_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_12_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_12_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_12_i_channel = ap_sync_channel_write_dense_res_2_12_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_13_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_13_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_13_i_channel = ap_sync_channel_write_dense_res_2_13_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_14_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_14_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_14_i_channel = ap_sync_channel_write_dense_res_2_14_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_15_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_15_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_15_i_channel = ap_sync_channel_write_dense_res_2_15_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_16_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_16_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_16_i_channel = ap_sync_channel_write_dense_res_2_16_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_17_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_17_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_17_i_channel = ap_sync_channel_write_dense_res_2_17_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_18_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_18_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_18_i_channel = ap_sync_channel_write_dense_res_2_18_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_19_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_19_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_19_i_channel = ap_sync_channel_write_dense_res_2_19_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_1_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_1_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_1_i_channel = ap_sync_channel_write_dense_res_2_1_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_2_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_2_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_2_i_channel = ap_sync_channel_write_dense_res_2_2_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_3_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_3_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_3_i_channel = ap_sync_channel_write_dense_res_2_3_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_4_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_4_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_4_i_channel = ap_sync_channel_write_dense_res_2_4_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_5_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_5_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_5_i_channel = ap_sync_channel_write_dense_res_2_5_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_6_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_6_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_6_i_channel = ap_sync_channel_write_dense_res_2_6_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_7_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_7_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_7_i_channel = ap_sync_channel_write_dense_res_2_7_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_8_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_8_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_8_i_channel = ap_sync_channel_write_dense_res_2_8_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_2_9_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_7_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_2_9_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_2_9_i_channel = ap_sync_channel_write_dense_res_2_9_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_0_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_0_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_0_i_channel = ap_sync_channel_write_dense_res_3_0_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_10_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_10_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_10_i_channel = ap_sync_channel_write_dense_res_3_10_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_11_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_11_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_11_i_channel = ap_sync_channel_write_dense_res_3_11_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_12_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_12_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_12_i_channel = ap_sync_channel_write_dense_res_3_12_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_13_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_13_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_13_i_channel = ap_sync_channel_write_dense_res_3_13_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_14_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_14_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_14_i_channel = ap_sync_channel_write_dense_res_3_14_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_15_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_15_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_15_i_channel = ap_sync_channel_write_dense_res_3_15_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_16_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_16_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_16_i_channel = ap_sync_channel_write_dense_res_3_16_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_17_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_17_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_17_i_channel = ap_sync_channel_write_dense_res_3_17_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_18_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_18_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_18_i_channel = ap_sync_channel_write_dense_res_3_18_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_19_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_19_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_19_i_channel = ap_sync_channel_write_dense_res_3_19_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_1_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_1_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_1_i_channel = ap_sync_channel_write_dense_res_3_1_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_2_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_2_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_2_i_channel = ap_sync_channel_write_dense_res_3_2_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_3_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_3_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_3_i_channel = ap_sync_channel_write_dense_res_3_3_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_4_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_4_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_4_i_channel = ap_sync_channel_write_dense_res_3_4_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_5_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_5_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_5_i_channel = ap_sync_channel_write_dense_res_3_5_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_6_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_6_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_6_i_channel = ap_sync_channel_write_dense_res_3_6_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_7_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_7_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_7_i_channel = ap_sync_channel_write_dense_res_3_7_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_8_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_8_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_8_i_channel = ap_sync_channel_write_dense_res_3_8_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_3_9_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_6_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_3_9_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_3_9_i_channel = ap_sync_channel_write_dense_res_3_9_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_0_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_0_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_0_i_channel = ap_sync_channel_write_dense_res_4_0_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_10_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_10_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_10_i_channel = ap_sync_channel_write_dense_res_4_10_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_11_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_11_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_11_i_channel = ap_sync_channel_write_dense_res_4_11_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_12_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_12_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_12_i_channel = ap_sync_channel_write_dense_res_4_12_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_13_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_13_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_13_i_channel = ap_sync_channel_write_dense_res_4_13_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_14_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_14_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_14_i_channel = ap_sync_channel_write_dense_res_4_14_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_15_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_15_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_15_i_channel = ap_sync_channel_write_dense_res_4_15_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_16_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_16_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_16_i_channel = ap_sync_channel_write_dense_res_4_16_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_17_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_17_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_17_i_channel = ap_sync_channel_write_dense_res_4_17_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_18_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_18_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_18_i_channel = ap_sync_channel_write_dense_res_4_18_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_19_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_19_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_19_i_channel = ap_sync_channel_write_dense_res_4_19_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_1_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_1_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_1_i_channel = ap_sync_channel_write_dense_res_4_1_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_2_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_2_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_2_i_channel = ap_sync_channel_write_dense_res_4_2_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_3_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_3_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_3_i_channel = ap_sync_channel_write_dense_res_4_3_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_4_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_4_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_4_i_channel = ap_sync_channel_write_dense_res_4_4_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_5_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_5_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_5_i_channel = ap_sync_channel_write_dense_res_4_5_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_6_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_6_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_6_i_channel = ap_sync_channel_write_dense_res_4_6_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_7_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_7_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_7_i_channel = ap_sync_channel_write_dense_res_4_7_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_8_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_8_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_8_i_channel = ap_sync_channel_write_dense_res_4_8_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_4_9_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_5_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_4_9_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_4_9_i_channel = ap_sync_channel_write_dense_res_4_9_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_0_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_0_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_0_i_channel = ap_sync_channel_write_dense_res_5_0_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_10_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_10_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_10_i_channel = ap_sync_channel_write_dense_res_5_10_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_11_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_11_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_11_i_channel = ap_sync_channel_write_dense_res_5_11_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_12_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_12_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_12_i_channel = ap_sync_channel_write_dense_res_5_12_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_13_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_13_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_13_i_channel = ap_sync_channel_write_dense_res_5_13_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_14_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_14_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_14_i_channel = ap_sync_channel_write_dense_res_5_14_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_15_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_15_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_15_i_channel = ap_sync_channel_write_dense_res_5_15_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_16_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_16_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_16_i_channel = ap_sync_channel_write_dense_res_5_16_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_17_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_17_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_17_i_channel = ap_sync_channel_write_dense_res_5_17_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_18_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_18_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_18_i_channel = ap_sync_channel_write_dense_res_5_18_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_19_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_19_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_19_i_channel = ap_sync_channel_write_dense_res_5_19_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_1_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_1_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_1_i_channel = ap_sync_channel_write_dense_res_5_1_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_2_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_2_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_2_i_channel = ap_sync_channel_write_dense_res_5_2_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_3_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_3_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_3_i_channel = ap_sync_channel_write_dense_res_5_3_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_4_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_4_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_4_i_channel = ap_sync_channel_write_dense_res_5_4_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_5_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_5_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_5_i_channel = ap_sync_channel_write_dense_res_5_5_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_6_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_6_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_6_i_channel = ap_sync_channel_write_dense_res_5_6_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_7_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_7_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_7_i_channel = ap_sync_channel_write_dense_res_5_7_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_8_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_8_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_8_i_channel = ap_sync_channel_write_dense_res_5_8_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_5_9_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_4_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_5_9_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_5_9_i_channel = ap_sync_channel_write_dense_res_5_9_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_0_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_0_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_0_i_channel = ap_sync_channel_write_dense_res_6_0_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_10_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_10_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_10_i_channel = ap_sync_channel_write_dense_res_6_10_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_11_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_11_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_11_i_channel = ap_sync_channel_write_dense_res_6_11_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_12_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_12_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_12_i_channel = ap_sync_channel_write_dense_res_6_12_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_13_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_13_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_13_i_channel = ap_sync_channel_write_dense_res_6_13_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_14_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_14_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_14_i_channel = ap_sync_channel_write_dense_res_6_14_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_15_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_15_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_15_i_channel = ap_sync_channel_write_dense_res_6_15_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_16_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_16_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_16_i_channel = ap_sync_channel_write_dense_res_6_16_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_17_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_17_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_17_i_channel = ap_sync_channel_write_dense_res_6_17_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_18_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_18_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_18_i_channel = ap_sync_channel_write_dense_res_6_18_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_19_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_19_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_19_i_channel = ap_sync_channel_write_dense_res_6_19_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_1_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_1_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_1_i_channel = ap_sync_channel_write_dense_res_6_1_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_2_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_2_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_2_i_channel = ap_sync_channel_write_dense_res_6_2_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_3_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_3_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_3_i_channel = ap_sync_channel_write_dense_res_6_3_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_4_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_4_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_4_i_channel = ap_sync_channel_write_dense_res_6_4_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_5_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_5_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_5_i_channel = ap_sync_channel_write_dense_res_6_5_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_6_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_6_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_6_i_channel = ap_sync_channel_write_dense_res_6_6_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_7_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_7_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_7_i_channel = ap_sync_channel_write_dense_res_6_7_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_8_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_8_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_8_i_channel = ap_sync_channel_write_dense_res_6_8_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_6_9_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_3_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_6_9_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_6_9_i_channel = ap_sync_channel_write_dense_res_6_9_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_0_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_0_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_0_i_channel = ap_sync_channel_write_dense_res_7_0_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_10_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_10_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_10_i_channel = ap_sync_channel_write_dense_res_7_10_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_11_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_11_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_11_i_channel = ap_sync_channel_write_dense_res_7_11_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_12_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_12_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_12_i_channel = ap_sync_channel_write_dense_res_7_12_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_13_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_13_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_13_i_channel = ap_sync_channel_write_dense_res_7_13_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_14_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_14_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_14_i_channel = ap_sync_channel_write_dense_res_7_14_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_15_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_15_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_15_i_channel = ap_sync_channel_write_dense_res_7_15_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_16_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_16_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_16_i_channel = ap_sync_channel_write_dense_res_7_16_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_17_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_17_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_17_i_channel = ap_sync_channel_write_dense_res_7_17_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_18_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_18_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_18_i_channel = ap_sync_channel_write_dense_res_7_18_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_19_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_19_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_19_i_channel = ap_sync_channel_write_dense_res_7_19_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_1_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_1_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_1_i_channel = ap_sync_channel_write_dense_res_7_1_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_2_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_2_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_2_i_channel = ap_sync_channel_write_dense_res_7_2_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_3_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_3_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_3_i_channel = ap_sync_channel_write_dense_res_7_3_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_4_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_4_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_4_i_channel = ap_sync_channel_write_dense_res_7_4_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_5_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_5_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_5_i_channel = ap_sync_channel_write_dense_res_7_5_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_6_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_6_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_6_i_channel = ap_sync_channel_write_dense_res_7_6_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_7_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_7_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_7_i_channel = ap_sync_channel_write_dense_res_7_7_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_8_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_8_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_8_i_channel = ap_sync_channel_write_dense_res_7_8_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_7_9_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_2_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_7_9_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_7_9_i_channel = ap_sync_channel_write_dense_res_7_9_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_0_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_0_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_0_i_channel = ap_sync_channel_write_dense_res_8_0_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_10_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_10_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_10_i_channel = ap_sync_channel_write_dense_res_8_10_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_11_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_11_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_11_i_channel = ap_sync_channel_write_dense_res_8_11_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_12_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_12_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_12_i_channel = ap_sync_channel_write_dense_res_8_12_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_13_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_13_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_13_i_channel = ap_sync_channel_write_dense_res_8_13_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_14_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_14_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_14_i_channel = ap_sync_channel_write_dense_res_8_14_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_15_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_15_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_15_i_channel = ap_sync_channel_write_dense_res_8_15_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_16_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_16_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_16_i_channel = ap_sync_channel_write_dense_res_8_16_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_17_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_17_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_17_i_channel = ap_sync_channel_write_dense_res_8_17_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_18_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_18_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_18_i_channel = ap_sync_channel_write_dense_res_8_18_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_19_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_19_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_19_i_channel = ap_sync_channel_write_dense_res_8_19_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_1_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_1_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_1_i_channel = ap_sync_channel_write_dense_res_8_1_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_2_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_2_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_2_i_channel = ap_sync_channel_write_dense_res_8_2_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_3_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_3_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_3_i_channel = ap_sync_channel_write_dense_res_8_3_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_4_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_4_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_4_i_channel = ap_sync_channel_write_dense_res_8_4_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_5_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_5_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_5_i_channel = ap_sync_channel_write_dense_res_8_5_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_6_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_6_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_6_i_channel = ap_sync_channel_write_dense_res_8_6_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_7_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_7_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_7_i_channel = ap_sync_channel_write_dense_res_8_7_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_8_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_8_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_8_i_channel = ap_sync_channel_write_dense_res_8_8_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_8_9_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_8_9_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_8_9_i_channel = ap_sync_channel_write_dense_res_8_9_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_0_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_0_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_0_i_channel = ap_sync_channel_write_dense_res_9_0_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_10_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_10_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_10_i_channel = ap_sync_channel_write_dense_res_9_10_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_11_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_11_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_11_i_channel = ap_sync_channel_write_dense_res_9_11_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_12_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_12_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_12_i_channel = ap_sync_channel_write_dense_res_9_12_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_13_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_13_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_13_i_channel = ap_sync_channel_write_dense_res_9_13_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_14_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_14_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_14_i_channel = ap_sync_channel_write_dense_res_9_14_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_15_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_15_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_15_i_channel = ap_sync_channel_write_dense_res_9_15_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_16_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_16_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_16_i_channel = ap_sync_channel_write_dense_res_9_16_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_17_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_17_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_17_i_channel = ap_sync_channel_write_dense_res_9_17_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_18_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_18_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_18_i_channel = ap_sync_channel_write_dense_res_9_18_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_19_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_19_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_19_i_channel = ap_sync_channel_write_dense_res_9_19_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_1_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_1_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_1_i_channel = ap_sync_channel_write_dense_res_9_1_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_2_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_2_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_2_i_channel = ap_sync_channel_write_dense_res_9_2_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_3_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_3_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_3_i_channel = ap_sync_channel_write_dense_res_9_3_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_4_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_4_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_4_i_channel = ap_sync_channel_write_dense_res_9_4_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_5_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_5_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_5_i_channel = ap_sync_channel_write_dense_res_9_5_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_6_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_6_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_6_i_channel = ap_sync_channel_write_dense_res_9_6_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_7_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_7_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_7_i_channel = ap_sync_channel_write_dense_res_9_7_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_8_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_8_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_8_i_channel = ap_sync_channel_write_dense_res_9_8_i_channel.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_dense_res_9_9_i_channel = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_done.read() & 
             dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_dense_res_9_9_i_channel = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_dense_res_9_9_i_channel = ap_sync_channel_write_dense_res_9_9_i_channel.read();
        }
    }
}

}

