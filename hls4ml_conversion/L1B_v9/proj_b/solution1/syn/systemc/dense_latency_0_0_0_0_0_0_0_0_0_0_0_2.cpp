#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0::thread_ap_clk_no_reset_() {
    ap_ce_reg = ap_ce.read();
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_const_logic_1))) {
        add_ln703_107_reg_94717 = add_ln703_107_fu_91756_p2.read();
        add_ln703_115_reg_94722 = add_ln703_115_fu_91772_p2.read();
        add_ln703_127_reg_94727 = add_ln703_127_fu_91826_p2.read();
        add_ln703_147_reg_94732 = add_ln703_147_fu_91880_p2.read();
        add_ln703_167_reg_94737 = add_ln703_167_fu_91934_p2.read();
        add_ln703_187_reg_94742 = add_ln703_187_fu_91988_p2.read();
        add_ln703_27_reg_94692 = add_ln703_27_fu_91524_p2.read();
        add_ln703_47_reg_94697 = add_ln703_47_fu_91578_p2.read();
        add_ln703_55_reg_94702 = add_ln703_55_fu_91594_p2.read();
        add_ln703_67_reg_94707 = add_ln703_67_fu_91648_p2.read();
        add_ln703_87_reg_94712 = add_ln703_87_fu_91702_p2.read();
        add_ln703_8_reg_94687 = add_ln703_8_fu_91470_p2.read();
        data_10_V_read21_reg_94657 = data_10_V_read.read();
        data_11_V_read22_reg_94645 = data_11_V_read.read();
        data_12_V_read23_reg_94633 = data_12_V_read.read();
        data_13_V_read_4_reg_94623 = data_13_V_read.read();
        data_14_V_read_4_reg_94611 = data_14_V_read.read();
        data_15_V_read_5_reg_94602 = data_15_V_read.read();
        data_16_V_read_5_reg_94591 = data_16_V_read.read();
        data_17_V_read_5_reg_94579 = data_17_V_read.read();
        data_18_V_read_5_reg_94570 = data_18_V_read.read();
        data_19_V_read_5_reg_94560 = data_19_V_read.read();
        sext_ln1118_65_reg_94673 = sext_ln1118_65_fu_91312_p1.read();
        trunc_ln708_13_reg_94663 = trunc_ln708_13_fu_89463_p1.read().range(15, 2);
        trunc_ln708_148_reg_94682 = trunc_ln708_148_fu_91370_p1.read().range(15, 3);
        trunc_ln708_81_reg_94668 = trunc_ln708_81_fu_90229_p1.read().range(15, 5);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_0_int_reg = add_ln703_1007_fu_93888_p2.read();
        ap_return_1_int_reg = acc_1_V_fu_93953_p2.read();
        ap_return_2_int_reg = acc_2_V_fu_94009_p2.read();
        ap_return_3_int_reg = acc_3_V_fu_94078_p2.read();
        ap_return_4_int_reg = acc_4_V_fu_94147_p2.read();
        ap_return_5_int_reg = acc_5_V_fu_94203_p2.read();
        ap_return_6_int_reg = acc_6_V_fu_94280_p2.read();
        ap_return_7_int_reg = acc_7_V_fu_94349_p2.read();
        ap_return_8_int_reg = acc_8_V_fu_94426_p2.read();
        ap_return_9_int_reg = acc_9_V_fu_94495_p2.read();
    }
}

}

