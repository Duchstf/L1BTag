#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0::thread_ap_clk_no_reset_() {
    ap_ce_reg = ap_ce.read();
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_const_logic_1))) {
        add_ln703_108_reg_99930 = add_ln703_108_fu_97056_p2.read();
        add_ln703_128_reg_99935 = add_ln703_128_fu_97110_p2.read();
        add_ln703_148_reg_99940 = add_ln703_148_fu_97164_p2.read();
        add_ln703_168_reg_99945 = add_ln703_168_fu_97218_p2.read();
        add_ln703_188_reg_99950 = add_ln703_188_fu_97272_p2.read();
        add_ln703_28_reg_99910 = add_ln703_28_fu_96836_p2.read();
        add_ln703_48_reg_99915 = add_ln703_48_fu_96894_p2.read();
        add_ln703_68_reg_99920 = add_ln703_68_fu_96948_p2.read();
        add_ln703_88_reg_99925 = add_ln703_88_fu_97002_p2.read();
        add_ln703_8_reg_99905 = add_ln703_8_fu_96782_p2.read();
        data_10_V_read_3_reg_99869 = data_10_V_read.read();
        data_11_V_read_4_reg_99859 = data_11_V_read.read();
        data_12_V_read_5_reg_99846 = data_12_V_read.read();
        data_13_V_read_5_reg_99838 = data_13_V_read.read();
        data_14_V_read21_reg_99830 = data_14_V_read.read();
        data_15_V_read22_reg_99821 = data_15_V_read.read();
        data_16_V_read23_reg_99810 = data_16_V_read.read();
        data_17_V_read24_reg_99800 = data_17_V_read.read();
        data_18_V_read_5_reg_99793 = data_18_V_read.read();
        data_19_V_read_4_reg_99784 = data_19_V_read.read();
        sext_ln1118_73_reg_99893 = sext_ln1118_73_fu_96687_p1.read();
        trunc_ln708_101_reg_99888 = trunc_ln708_101_fu_95729_p1.read().range(15, 2);
        trunc_ln708_163_reg_99900 = trunc_ln708_163_fu_96724_p1.read().range(15, 5);
        trunc_ln708_70_reg_99878 = trunc_ln708_70_fu_95134_p1.read().range(15, 3);
        trunc_ln708_73_reg_99883 = trunc_ln708_73_fu_95168_p1.read().range(15, 5);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_0_int_reg = add_ln703_1002_fu_99110_p2.read();
        ap_return_1_int_reg = acc_1_V_fu_99175_p2.read();
        ap_return_2_int_reg = acc_2_V_fu_99240_p2.read();
        ap_return_3_int_reg = acc_3_V_fu_99309_p2.read();
        ap_return_4_int_reg = acc_4_V_fu_99378_p2.read();
        ap_return_5_int_reg = acc_5_V_fu_99443_p2.read();
        ap_return_6_int_reg = acc_6_V_fu_99512_p2.read();
        ap_return_7_int_reg = acc_7_V_fu_99581_p2.read();
        ap_return_8_int_reg = acc_8_V_fu_99650_p2.read();
        ap_return_9_int_reg = acc_9_V_fu_99719_p2.read();
    }
}

}

