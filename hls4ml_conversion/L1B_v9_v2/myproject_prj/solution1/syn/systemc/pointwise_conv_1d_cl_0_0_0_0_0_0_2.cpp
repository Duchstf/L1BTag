#include "pointwise_conv_1d_cl_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_cl_0_0_0_0_0_0::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_0_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_0_preg = acc_0_0_V_reg_202936.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_10_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_10_preg = acc_2_0_V_reg_202986.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_11_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_11_preg = acc_2_1_V_reg_202991.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_12_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_12_preg = acc_2_2_V_reg_203164.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_13_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_13_preg = acc_2_3_V_reg_203169.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_14_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_14_preg = acc_2_4_V_reg_203174.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_15_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_15_preg = acc_3_0_V_reg_203179.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_16_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_16_preg = acc_3_1_V_reg_203184.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_17_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_17_preg = acc_3_2_V_reg_203189.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_18_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_18_preg = acc_3_3_V_reg_203194.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_19_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_19_preg = acc_3_4_V_reg_203199.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_1_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_1_preg = acc_0_1_V_reg_202941.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_20_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_20_preg = acc_4_0_V_reg_203204.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_21_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_21_preg = acc_4_1_V_reg_203209.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_22_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_22_preg = acc_4_2_V_reg_203214.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_23_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_23_preg = acc_4_3_V_reg_203219.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_24_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_24_preg = acc_4_4_V_reg_203224.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_25_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_25_preg = acc_5_0_V_reg_203249.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_26_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_26_preg = acc_5_1_V_reg_203254.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_27_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_27_preg = acc_5_2_V_reg_203259.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_28_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_28_preg = acc_5_3_V_reg_203264.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_29_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_29_preg = acc_5_4_V_reg_203269.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_2_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_2_preg = acc_0_2_V_reg_202946.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_30_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_30_preg = acc_6_0_V_reg_203274.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_31_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_31_preg = acc_6_1_V_reg_203279.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_32_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_32_preg = acc_6_2_V_reg_203284.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_33_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_33_preg = acc_6_3_V_reg_203289.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_34_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_34_preg = acc_6_4_V_reg_203294.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_35_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_35_preg = acc_7_0_V_reg_203299.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_36_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_36_preg = acc_7_1_V_reg_203304.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_37_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_37_preg = acc_7_2_V_reg_203309.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_38_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_38_preg = acc_7_3_V_reg_203314.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_39_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_39_preg = acc_7_4_V_reg_203319.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_3_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_3_preg = acc_0_3_V_reg_202951.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_40_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_40_preg = acc_8_0_V_fu_200633_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_41_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_41_preg = acc_8_1_V_fu_200759_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_42_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_42_preg = acc_8_2_V_fu_200885_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_43_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_43_preg = acc_8_3_V_fu_200999_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_44_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_44_preg = acc_8_4_V_fu_201102_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_45_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_45_preg = acc_9_0_V_fu_201224_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_46_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_46_preg = acc_9_1_V_fu_201350_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_47_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_47_preg = acc_9_2_V_fu_201476_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_48_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_48_preg = acc_9_3_V_fu_201584_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_49_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_49_preg = acc_9_4_V_fu_201687_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_4_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_4_preg = acc_0_4_V_reg_202956.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_5_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_5_preg = acc_1_0_V_reg_202961.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_6_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_6_preg = acc_1_1_V_reg_202966.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_7_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_7_preg = acc_1_2_V_reg_202971.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_8_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_8_preg = acc_1_3_V_reg_202976.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_9_preg = ap_const_lv16_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_return_9_preg = acc_1_4_V_reg_202981.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        acc_0_0_V_reg_202936 = acc_0_0_V_fu_186642_p2.read();
        acc_0_1_V_reg_202941 = acc_0_1_V_fu_186768_p2.read();
        acc_0_2_V_reg_202946 = acc_0_2_V_fu_186894_p2.read();
        acc_0_3_V_reg_202951 = acc_0_3_V_fu_187002_p2.read();
        acc_0_4_V_reg_202956 = acc_0_4_V_fu_187105_p2.read();
        acc_1_0_V_reg_202961 = acc_1_0_V_fu_187233_p2.read();
        acc_1_1_V_reg_202966 = acc_1_1_V_fu_187359_p2.read();
        acc_1_2_V_reg_202971 = acc_1_2_V_fu_187485_p2.read();
        acc_1_3_V_reg_202976 = acc_1_3_V_fu_187599_p2.read();
        acc_1_4_V_reg_202981 = acc_1_4_V_fu_187702_p2.read();
        acc_2_0_V_reg_202986 = acc_2_0_V_fu_187824_p2.read();
        acc_2_1_V_reg_202991 = acc_2_1_V_fu_187950_p2.read();
        add_ln703_248_reg_202996 = add_ln703_248_fu_188002_p2.read();
        add_ln703_252_reg_203001 = add_ln703_252_fu_188026_p2.read();
        add_ln703_920_reg_203006 = add_ln703_920_fu_188032_p2.read();
        add_ln703_940_reg_203011 = add_ln703_940_fu_188037_p2.read();
        add_ln703_941_reg_203016 = add_ln703_941_fu_188043_p2.read();
        add_ln703_960_reg_203021 = add_ln703_960_fu_188049_p2.read();
        add_ln703_961_reg_203026 = add_ln703_961_fu_188055_p2.read();
        add_ln703_983_reg_203031 = add_ln703_983_fu_188079_p2.read();
        mult_288_V_reg_202921 = sub_ln1118_60_fu_186309_p2.read().range(23, 8);
        p_read_141_reg_202794 = p_read59.read();
        p_read_142_reg_202801 = p_read58.read();
        p_read_143_reg_202806 = p_read57.read();
        p_read_144_reg_202813 = p_read56.read();
        p_read_147_reg_202819 = p_read53.read();
        p_read_149_reg_202824 = p_read51.read();
        p_read_150_reg_202830 = p_read50.read();
        p_read_151_reg_202836 = p_read49.read();
        p_read_153_reg_202844 = p_read47.read();
        p_read_157_reg_202850 = p_read43.read();
        sext_ln1116_43_cast179_cast_reg_202855 = sext_ln1116_43_cast179_cast_fu_185428_p1.read();
        sext_ln1116_52_cast_reg_202865 = sext_ln1116_52_cast_fu_185636_p1.read();
        sext_ln1116_55_cast166_reg_202875 = sext_ln1116_55_cast166_fu_185699_p1.read();
        tmp_102_reg_202911 = grp_fu_1949_p2.read().range(21, 8);
        tmp_421_reg_202901 = sub_ln1118_55_fu_186233_p2.read().range(19, 8);
        tmp_423_reg_202916 = sub_ln1118_57_fu_186281_p2.read().range(21, 8);
        tmp_425_reg_202926 = sub_ln1118_61_fu_186337_p2.read().range(19, 8);
        trunc_ln708_38_reg_202891 = grp_fu_1920_p2.read().range(21, 8);
        zext_ln1118_142_reg_202860 = zext_ln1118_142_fu_185550_p1.read();
        zext_ln1118_162_reg_202881 = zext_ln1118_162_fu_185888_p1.read();
        zext_ln1118_166_reg_202886 = zext_ln1118_166_fu_185954_p1.read();
        zext_ln1118_175_reg_202896 = zext_ln1118_175_fu_186124_p1.read();
        zext_ln1118_181_reg_202906 = zext_ln1118_181_fu_186261_p1.read();
        zext_ln1118_587_reg_202931 = zext_ln1118_587_fu_186362_p1.read();
        zext_ln708_20_reg_202870 = zext_ln708_20_fu_185690_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        acc_2_2_V_reg_203164 = acc_2_2_V_fu_191243_p2.read();
        acc_2_3_V_reg_203169 = acc_2_3_V_fu_191350_p2.read();
        acc_2_4_V_reg_203174 = acc_2_4_V_fu_191452_p2.read();
        acc_3_0_V_reg_203179 = acc_3_0_V_fu_191580_p2.read();
        acc_3_1_V_reg_203184 = acc_3_1_V_fu_191706_p2.read();
        acc_3_2_V_reg_203189 = acc_3_2_V_fu_191832_p2.read();
        acc_3_3_V_reg_203194 = acc_3_3_V_fu_191940_p2.read();
        acc_3_4_V_reg_203199 = acc_3_4_V_fu_192043_p2.read();
        acc_4_0_V_reg_203204 = acc_4_0_V_fu_192171_p2.read();
        acc_4_1_V_reg_203209 = acc_4_1_V_fu_192297_p2.read();
        acc_4_2_V_reg_203214 = acc_4_2_V_fu_192423_p2.read();
        acc_4_3_V_reg_203219 = acc_4_3_V_fu_192531_p2.read();
        acc_4_4_V_reg_203224 = acc_4_4_V_fu_192634_p2.read();
        add_ln703_508_reg_203229 = add_ln703_508_fu_192688_p2.read();
        add_ln703_517_reg_203234 = add_ln703_517_fu_192716_p2.read();
        add_ln703_523_reg_203239 = add_ln703_523_fu_192731_p2.read();
        add_ln703_524_reg_203244 = add_ln703_524_fu_192736_p2.read();
        mult_512_V_reg_203134 = grp_fu_1891_p2.read().range(23, 8);
        mult_588_V_reg_203159 = sub_ln1118_123_fu_191184_p2.read().range(23, 8);
        p_read_81_reg_203036 = p_read119.read();
        p_read_82_reg_203045 = p_read118.read();
        p_read_83_reg_203053 = p_read117.read();
        p_read_84_reg_203061 = p_read116.read();
        p_read_85_reg_203068 = p_read115.read();
        p_read_86_reg_203074 = p_read114.read();
        p_read_88_reg_203081 = p_read112.read();
        p_read_90_reg_203087 = p_read110.read();
        p_read_91_reg_203097 = p_read109.read();
        p_read_92_reg_203105 = p_read108.read();
        p_read_93_reg_203110 = p_read107.read();
        p_read_97_reg_203118 = p_read103.read();
        sext_ln1116_112_cast_reg_203129 = sext_ln1116_112_cast_fu_191084_p1.read();
        tmp_209_reg_203149 = grp_fu_177602_p1.read().range(20, 8);
        tmp_453_reg_203154 = grp_fu_178792_p1.read().range(19, 8);
        trunc_ln708_80_reg_203144 = grp_fu_178342_p1.read().range(22, 8);
        zext_ln1118_337_reg_203124 = zext_ln1118_337_fu_191079_p1.read();
        zext_ln708_44_reg_203139 = zext_ln708_44_fu_191089_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        acc_5_0_V_reg_203249 = acc_5_0_V_fu_196358_p2.read();
        acc_5_1_V_reg_203254 = acc_5_1_V_fu_196461_p2.read();
        acc_5_2_V_reg_203259 = acc_5_2_V_fu_196587_p2.read();
        acc_5_3_V_reg_203264 = acc_5_3_V_fu_196695_p2.read();
        acc_5_4_V_reg_203269 = acc_5_4_V_fu_196797_p2.read();
        acc_6_0_V_reg_203274 = acc_6_0_V_fu_196925_p2.read();
        acc_6_1_V_reg_203279 = acc_6_1_V_fu_197051_p2.read();
        acc_6_2_V_reg_203284 = acc_6_2_V_fu_197177_p2.read();
        acc_6_3_V_reg_203289 = acc_6_3_V_fu_197285_p2.read();
        acc_6_4_V_reg_203294 = acc_6_4_V_fu_197388_p2.read();
        acc_7_0_V_reg_203299 = acc_7_0_V_fu_197516_p2.read();
        acc_7_1_V_reg_203304 = acc_7_1_V_fu_197642_p2.read();
        acc_7_2_V_reg_203309 = acc_7_2_V_fu_197768_p2.read();
        acc_7_3_V_reg_203314 = acc_7_3_V_fu_197876_p2.read();
        acc_7_4_V_reg_203319 = acc_7_4_V_fu_197979_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        add_ln703_100_reg_202464 = add_ln703_100_fu_182336_p2.read();
        add_ln703_120_reg_202469 = add_ln703_120_fu_182342_p2.read();
        add_ln703_121_reg_202474 = add_ln703_121_fu_182348_p2.read();
        add_ln703_140_reg_202479 = add_ln703_140_fu_182354_p2.read();
        add_ln703_141_reg_202484 = add_ln703_141_fu_182360_p2.read();
        add_ln703_160_reg_202489 = add_ln703_160_fu_182366_p2.read();
        add_ln703_161_reg_202494 = add_ln703_161_fu_182372_p2.read();
        add_ln703_183_reg_202499 = add_ln703_183_fu_182396_p2.read();
        add_ln703_200_reg_202504 = add_ln703_200_fu_182402_p2.read();
        add_ln703_20_reg_202429 = add_ln703_20_fu_182276_p2.read();
        add_ln703_21_reg_202434 = add_ln703_21_fu_182282_p2.read();
        add_ln703_220_reg_202509 = add_ln703_220_fu_182408_p2.read();
        add_ln703_221_reg_202514 = add_ln703_221_fu_182414_p2.read();
        add_ln703_240_reg_202519 = add_ln703_240_fu_182420_p2.read();
        add_ln703_241_reg_202524 = add_ln703_241_fu_182426_p2.read();
        add_ln703_260_reg_202529 = add_ln703_260_fu_182432_p2.read();
        add_ln703_261_reg_202534 = add_ln703_261_fu_182438_p2.read();
        add_ln703_283_reg_202539 = add_ln703_283_fu_182462_p2.read();
        add_ln703_300_reg_202544 = add_ln703_300_fu_182468_p2.read();
        add_ln703_320_reg_202549 = add_ln703_320_fu_182474_p2.read();
        add_ln703_321_reg_202554 = add_ln703_321_fu_182480_p2.read();
        add_ln703_340_reg_202559 = add_ln703_340_fu_182486_p2.read();
        add_ln703_341_reg_202564 = add_ln703_341_fu_182492_p2.read();
        add_ln703_360_reg_202569 = add_ln703_360_fu_182498_p2.read();
        add_ln703_361_reg_202574 = add_ln703_361_fu_182504_p2.read();
        add_ln703_383_reg_202579 = add_ln703_383_fu_182528_p2.read();
        add_ln703_400_reg_202584 = add_ln703_400_fu_182534_p2.read();
        add_ln703_40_reg_202439 = add_ln703_40_fu_182288_p2.read();
        add_ln703_41_reg_202444 = add_ln703_41_fu_182294_p2.read();
        add_ln703_420_reg_202589 = add_ln703_420_fu_182540_p2.read();
        add_ln703_421_reg_202594 = add_ln703_421_fu_182546_p2.read();
        add_ln703_440_reg_202599 = add_ln703_440_fu_182552_p2.read();
        add_ln703_441_reg_202604 = add_ln703_441_fu_182558_p2.read();
        add_ln703_460_reg_202609 = add_ln703_460_fu_182564_p2.read();
        add_ln703_461_reg_202614 = add_ln703_461_fu_182570_p2.read();
        add_ln703_483_reg_202619 = add_ln703_483_fu_182594_p2.read();
        add_ln703_500_reg_202624 = add_ln703_500_fu_182600_p2.read();
        add_ln703_520_reg_202629 = add_ln703_520_fu_182606_p2.read();
        add_ln703_521_reg_202634 = add_ln703_521_fu_182612_p2.read();
        add_ln703_540_reg_202639 = add_ln703_540_fu_182618_p2.read();
        add_ln703_541_reg_202644 = add_ln703_541_fu_182624_p2.read();
        add_ln703_560_reg_202649 = add_ln703_560_fu_182630_p2.read();
        add_ln703_561_reg_202654 = add_ln703_561_fu_182636_p2.read();
        add_ln703_583_reg_202659 = add_ln703_583_fu_182660_p2.read();
        add_ln703_600_reg_202664 = add_ln703_600_fu_182666_p2.read();
        add_ln703_60_reg_202449 = add_ln703_60_fu_182300_p2.read();
        add_ln703_61_reg_202454 = add_ln703_61_fu_182306_p2.read();
        add_ln703_620_reg_202669 = add_ln703_620_fu_182672_p2.read();
        add_ln703_621_reg_202674 = add_ln703_621_fu_182678_p2.read();
        add_ln703_640_reg_202679 = add_ln703_640_fu_182684_p2.read();
        add_ln703_641_reg_202684 = add_ln703_641_fu_182690_p2.read();
        add_ln703_660_reg_202689 = add_ln703_660_fu_182696_p2.read();
        add_ln703_661_reg_202694 = add_ln703_661_fu_182702_p2.read();
        add_ln703_683_reg_202699 = add_ln703_683_fu_182726_p2.read();
        add_ln703_700_reg_202704 = add_ln703_700_fu_182732_p2.read();
        add_ln703_720_reg_202709 = add_ln703_720_fu_182738_p2.read();
        add_ln703_721_reg_202714 = add_ln703_721_fu_182744_p2.read();
        add_ln703_740_reg_202719 = add_ln703_740_fu_182750_p2.read();
        add_ln703_741_reg_202724 = add_ln703_741_fu_182756_p2.read();
        add_ln703_760_reg_202729 = add_ln703_760_fu_182762_p2.read();
        add_ln703_761_reg_202734 = add_ln703_761_fu_182768_p2.read();
        add_ln703_783_reg_202739 = add_ln703_783_fu_182792_p2.read();
        add_ln703_800_reg_202744 = add_ln703_800_fu_182798_p2.read();
        add_ln703_820_reg_202749 = add_ln703_820_fu_182804_p2.read();
        add_ln703_821_reg_202754 = add_ln703_821_fu_182810_p2.read();
        add_ln703_83_reg_202459 = add_ln703_83_fu_182330_p2.read();
        add_ln703_840_reg_202759 = add_ln703_840_fu_182816_p2.read();
        add_ln703_841_reg_202764 = add_ln703_841_fu_182822_p2.read();
        add_ln703_860_reg_202769 = add_ln703_860_fu_182828_p2.read();
        add_ln703_861_reg_202774 = add_ln703_861_fu_182834_p2.read();
        add_ln703_883_reg_202779 = add_ln703_883_fu_182858_p2.read();
        add_ln703_900_reg_202784 = add_ln703_900_fu_182864_p2.read();
        add_ln703_921_reg_202789 = add_ln703_921_fu_182870_p2.read();
        add_ln703_reg_202424 = add_ln703_fu_182270_p2.read();
        mult_922_V_reg_202409 = grp_fu_1893_p2.read().range(23, 8);
        mult_982_V_reg_202419 = p_read182.read().range(14, 2);
        p_read_100_reg_202066 = p_read100.read();
        p_read_114_reg_202073 = p_read86.read();
        p_read_116_reg_202079 = p_read84.read();
        p_read_120_reg_202085 = p_read80.read();
        p_read_134_reg_202092 = p_read66.read();
        p_read_136_reg_202098 = p_read64.read();
        p_read_140_reg_202104 = p_read60.read();
        p_read_14_reg_201953 = p_read186.read();
        p_read_154_reg_202111 = p_read46.read();
        p_read_156_reg_202117 = p_read44.read();
        p_read_15_reg_201960 = p_read185.read();
        p_read_160_reg_202123 = p_read40.read();
        p_read_16_reg_201967 = p_read184.read();
        p_read_174_reg_202130 = p_read26.read();
        p_read_176_reg_202136 = p_read24.read();
        p_read_180_reg_202142 = p_read20.read();
        p_read_18_reg_201976 = p_read182.read();
        p_read_194_reg_202149 = p_read6.read();
        p_read_196_reg_202155 = p_read4.read();
        p_read_19_reg_201981 = p_read181.read();
        p_read_200_reg_202161 = p_read.read();
        p_read_20_reg_201989 = p_read180.read();
        p_read_34_reg_201997 = p_read166.read();
        p_read_36_reg_202003 = p_read164.read();
        p_read_40_reg_202009 = p_read160.read();
        p_read_54_reg_202016 = p_read146.read();
        p_read_56_reg_202022 = p_read144.read();
        p_read_60_reg_202028 = p_read140.read();
        p_read_74_reg_202035 = p_read126.read();
        p_read_76_reg_202041 = p_read124.read();
        p_read_80_reg_202047 = p_read120.read();
        p_read_94_reg_202054 = p_read106.read();
        p_read_96_reg_202060 = p_read104.read();
        sext_ln1116_102_cast_reg_202293 = sext_ln1116_102_cast_fu_180883_p1.read();
        sext_ln1116_122_cast_reg_202318 = sext_ln1116_122_cast_fu_181253_p1.read();
        sext_ln1116_142_cast_reg_202343 = sext_ln1116_142_cast_fu_181563_p1.read();
        sext_ln1116_162_cast_reg_202368 = sext_ln1116_162_cast_fu_181893_p1.read();
        sext_ln1116_182_cast_reg_202393 = sext_ln1116_182_cast_fu_182202_p1.read();
        sext_ln1116_22_cast_reg_202193 = sext_ln1116_22_cast_fu_179443_p1.read();
        sext_ln1116_2_cast_reg_202168 = sext_ln1116_2_cast_fu_179073_p1.read();
        sext_ln1116_42_cast_reg_202218 = sext_ln1116_42_cast_fu_179833_p1.read();
        sext_ln1116_62_cast_reg_202243 = sext_ln1116_62_cast_fu_180203_p1.read();
        sext_ln1116_82_cast_reg_202268 = sext_ln1116_82_cast_fu_180543_p1.read();
        trunc_ln203_10_reg_202228 = trunc_ln203_10_fu_179853_p1.read().range(20, 8);
        trunc_ln203_15_reg_202253 = trunc_ln203_15_fu_180223_p1.read().range(20, 8);
        trunc_ln203_1_reg_202178 = grp_fu_177382_p1.read().range(20, 8);
        trunc_ln203_20_reg_202278 = trunc_ln203_20_fu_180563_p1.read().range(20, 8);
        trunc_ln203_25_reg_202303 = grp_fu_1907_p2.read().range(20, 8);
        trunc_ln203_2_reg_202203 = trunc_ln203_2_fu_179463_p1.read().range(20, 8);
        trunc_ln203_30_reg_202328 = grp_fu_177602_p1.read().range(20, 8);
        trunc_ln203_35_reg_202353 = grp_fu_1869_p2.read().range(20, 8);
        trunc_ln203_40_reg_202378 = grp_fu_177762_p1.read().range(20, 8);
        trunc_ln203_45_reg_202398 = trunc_ln203_45_fu_182212_p1.read().range(20, 8);
        zext_ln1118_132_reg_202223 = zext_ln1118_132_fu_179838_p1.read();
        zext_ln1118_136_reg_202233 = zext_ln1118_136_fu_179868_p1.read();
        zext_ln1118_161_reg_202238 = zext_ln1118_161_fu_179947_p1.read();
        zext_ln1118_197_reg_202248 = zext_ln1118_197_fu_180208_p1.read();
        zext_ln1118_201_reg_202258 = zext_ln1118_201_fu_180238_p1.read();
        zext_ln1118_226_reg_202263 = zext_ln1118_226_fu_180297_p1.read();
        zext_ln1118_262_reg_202273 = zext_ln1118_262_fu_180548_p1.read();
        zext_ln1118_266_reg_202283 = zext_ln1118_266_fu_180578_p1.read();
        zext_ln1118_291_reg_202288 = zext_ln1118_291_fu_180647_p1.read();
        zext_ln1118_2_reg_202173 = zext_ln1118_2_fu_179078_p1.read();
        zext_ln1118_31_reg_202188 = zext_ln1118_31_fu_179167_p1.read();
        zext_ln1118_327_reg_202298 = zext_ln1118_327_fu_180888_p1.read();
        zext_ln1118_331_reg_202308 = zext_ln1118_331_fu_180908_p1.read();
        zext_ln1118_356_reg_202313 = zext_ln1118_356_fu_180977_p1.read();
        zext_ln1118_392_reg_202323 = zext_ln1118_392_fu_181258_p1.read();
        zext_ln1118_396_reg_202333 = zext_ln1118_396_fu_181278_p1.read();
        zext_ln1118_421_reg_202338 = zext_ln1118_421_fu_181357_p1.read();
        zext_ln1118_457_reg_202348 = zext_ln1118_457_fu_181568_p1.read();
        zext_ln1118_461_reg_202358 = zext_ln1118_461_fu_181588_p1.read();
        zext_ln1118_486_reg_202363 = zext_ln1118_486_fu_181657_p1.read();
        zext_ln1118_522_reg_202373 = zext_ln1118_522_fu_181898_p1.read();
        zext_ln1118_526_reg_202383 = zext_ln1118_526_fu_181918_p1.read();
        zext_ln1118_551_reg_202388 = zext_ln1118_551_fu_181997_p1.read();
        zext_ln1118_591_reg_202403 = zext_ln1118_591_fu_182222_p1.read();
        zext_ln1118_616_reg_202414 = zext_ln1118_616_fu_182241_p1.read();
        zext_ln1118_67_reg_202198 = zext_ln1118_67_fu_179448_p1.read();
        zext_ln1118_6_reg_202183 = zext_ln1118_6_fu_179098_p1.read();
        zext_ln1118_71_reg_202208 = zext_ln1118_71_fu_179478_p1.read();
        zext_ln1118_96_reg_202213 = zext_ln1118_96_fu_179557_p1.read();
    }
}

void pointwise_conv_1d_cl_0_0_0_0_0_0::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}

