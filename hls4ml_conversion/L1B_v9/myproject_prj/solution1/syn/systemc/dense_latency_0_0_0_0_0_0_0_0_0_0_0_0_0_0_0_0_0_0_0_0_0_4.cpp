#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_94_fu_2793749_p2() {
    add_ln703_94_fu_2793749_p2 = (!add_ln703_87_fu_2793707_p2.read().is_01() || !add_ln703_93_fu_2793743_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_87_fu_2793707_p2.read()) + sc_biguint<16>(add_ln703_93_fu_2793743_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_950_fu_2798565_p2() {
    add_ln703_950_fu_2798565_p2 = (!mult_998_V_fu_2793247_p4.read().is_01() || !mult_978_V_fu_2792861_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_998_V_fu_2793247_p4.read()) + sc_bigint<16>(mult_978_V_fu_2792861_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_951_fu_2798571_p2() {
    add_ln703_951_fu_2798571_p2 = (!sext_ln203_13_fu_2792116_p1.read().is_01() || !ap_const_lv13_69.is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_13_fu_2792116_p1.read()) + sc_biguint<13>(ap_const_lv13_69));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_952_fu_2798581_p2() {
    add_ln703_952_fu_2798581_p2 = (!add_ln703_950_fu_2798565_p2.read().is_01() || !sext_ln703_11_fu_2798577_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_950_fu_2798565_p2.read()) + sc_bigint<16>(sext_ln703_11_fu_2798577_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_953_fu_2798587_p2() {
    add_ln703_953_fu_2798587_p2 = (!add_ln703_949_fu_2798559_p2.read().is_01() || !add_ln703_952_fu_2798581_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_949_fu_2798559_p2.read()) + sc_biguint<16>(add_ln703_952_fu_2798581_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_954_fu_2798593_p2() {
    add_ln703_954_fu_2798593_p2 = (!add_ln703_947_fu_2798547_p2.read().is_01() || !add_ln703_953_fu_2798587_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_947_fu_2798547_p2.read()) + sc_biguint<16>(add_ln703_953_fu_2798587_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_955_fu_2799244_p2() {
    add_ln703_955_fu_2799244_p2 = (!add_ln703_942_reg_2799878.read().is_01() || !add_ln703_954_reg_2799883.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_942_reg_2799878.read()) + sc_biguint<16>(add_ln703_954_reg_2799883.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_957_fu_2798599_p2() {
    add_ln703_957_fu_2798599_p2 = (!mult_59_V_fu_2776020_p4.read().is_01() || !mult_39_V_fu_2775716_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_59_V_fu_2776020_p4.read()) + sc_biguint<16>(mult_39_V_fu_2775716_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_958_fu_2798605_p2() {
    add_ln703_958_fu_2798605_p2 = (!mult_19_V_fu_2775319_p4.read().is_01() || !add_ln703_957_fu_2798599_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_19_V_fu_2775319_p4.read()) + sc_biguint<16>(add_ln703_957_fu_2798599_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_959_fu_2798611_p2() {
    add_ln703_959_fu_2798611_p2 = (!mult_119_V_fu_2777151_p4.read().is_01() || !mult_99_V_fu_2776789_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_119_V_fu_2777151_p4.read()) + sc_biguint<16>(mult_99_V_fu_2776789_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_95_fu_2793755_p2() {
    add_ln703_95_fu_2793755_p2 = (!mult_801_V_fu_2789662_p4.read().is_01() || !mult_781_V_fu_2789303_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_801_V_fu_2789662_p4.read()) + sc_biguint<16>(mult_781_V_fu_2789303_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_960_fu_2798617_p2() {
    add_ln703_960_fu_2798617_p2 = (!mult_79_V_fu_2776424_p4.read().is_01() || !add_ln703_959_fu_2798611_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_79_V_fu_2776424_p4.read()) + sc_biguint<16>(add_ln703_959_fu_2798611_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_961_fu_2798623_p2() {
    add_ln703_961_fu_2798623_p2 = (!add_ln703_958_fu_2798605_p2.read().is_01() || !add_ln703_960_fu_2798617_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_958_fu_2798605_p2.read()) + sc_biguint<16>(add_ln703_960_fu_2798617_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_962_fu_2798629_p2() {
    add_ln703_962_fu_2798629_p2 = (!mult_199_V_fu_2778618_p1.read().is_01() || !mult_159_V_fu_2777790_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_199_V_fu_2778618_p1.read()) + sc_biguint<16>(mult_159_V_fu_2777790_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_963_fu_2798635_p2() {
    add_ln703_963_fu_2798635_p2 = (!mult_139_V_fu_2777483_p1.read().is_01() || !add_ln703_962_fu_2798629_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_139_V_fu_2777483_p1.read()) + sc_biguint<16>(add_ln703_962_fu_2798629_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_964_fu_2798641_p2() {
    add_ln703_964_fu_2798641_p2 = (!mult_259_V_fu_2779558_p1.read().is_01() || !mult_239_V_fu_2779206_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_259_V_fu_2779558_p1.read()) + sc_biguint<16>(mult_239_V_fu_2779206_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_965_fu_2798647_p2() {
    add_ln703_965_fu_2798647_p2 = (!mult_204_V_fu_2778726_p4.read().is_01() || !add_ln703_964_fu_2798641_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_204_V_fu_2778726_p4.read()) + sc_biguint<16>(add_ln703_964_fu_2798641_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_966_fu_2798653_p2() {
    add_ln703_966_fu_2798653_p2 = (!add_ln703_963_fu_2798635_p2.read().is_01() || !add_ln703_965_fu_2798647_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_963_fu_2798635_p2.read()) + sc_biguint<16>(add_ln703_965_fu_2798647_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_967_fu_2798659_p2() {
    add_ln703_967_fu_2798659_p2 = (!add_ln703_961_fu_2798623_p2.read().is_01() || !add_ln703_966_fu_2798653_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_961_fu_2798623_p2.read()) + sc_biguint<16>(add_ln703_966_fu_2798653_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_968_fu_2798665_p2() {
    add_ln703_968_fu_2798665_p2 = (!mult_319_V_fu_2780654_p4.read().is_01() || !mult_299_V_fu_2780249_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_319_V_fu_2780654_p4.read()) + sc_bigint<16>(mult_299_V_fu_2780249_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_969_fu_2798671_p2() {
    add_ln703_969_fu_2798671_p2 = (!mult_279_V_fu_2779874_p4.read().is_01() || !add_ln703_968_fu_2798665_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_279_V_fu_2779874_p4.read()) + sc_biguint<16>(add_ln703_968_fu_2798665_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_96_fu_2793761_p2() {
    add_ln703_96_fu_2793761_p2 = (!mult_761_V_fu_2788956_p4.read().is_01() || !add_ln703_95_fu_2793755_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_761_V_fu_2788956_p4.read()) + sc_biguint<16>(add_ln703_95_fu_2793755_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_970_fu_2798677_p2() {
    add_ln703_970_fu_2798677_p2 = (!mult_379_V_fu_2781729_p4.read().is_01() || !mult_359_V_fu_2781368_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_379_V_fu_2781729_p4.read()) + sc_biguint<16>(mult_359_V_fu_2781368_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_971_fu_2798683_p2() {
    add_ln703_971_fu_2798683_p2 = (!mult_339_V_fu_2781031_p4.read().is_01() || !add_ln703_970_fu_2798677_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_339_V_fu_2781031_p4.read()) + sc_biguint<16>(add_ln703_970_fu_2798677_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_972_fu_2798689_p2() {
    add_ln703_972_fu_2798689_p2 = (!add_ln703_969_fu_2798671_p2.read().is_01() || !add_ln703_971_fu_2798683_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_969_fu_2798671_p2.read()) + sc_biguint<16>(add_ln703_971_fu_2798683_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_973_fu_2798695_p2() {
    add_ln703_973_fu_2798695_p2 = (!sext_ln203_19_fu_2782880_p1.read().is_01() || !sext_ln203_18_fu_2782500_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_19_fu_2782880_p1.read()) + sc_bigint<15>(sext_ln203_18_fu_2782500_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_974_fu_2798705_p2() {
    add_ln703_974_fu_2798705_p2 = (!mult_399_V_fu_2782095_p4.read().is_01() || !sext_ln703_31_fu_2798701_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_399_V_fu_2782095_p4.read()) + sc_bigint<16>(sext_ln703_31_fu_2798701_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_975_fu_2798711_p2() {
    add_ln703_975_fu_2798711_p2 = (!mult_479_V_fu_2783652_p4.read().is_01() || !mult_459_V_fu_2783273_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_479_V_fu_2783652_p4.read()) + sc_bigint<16>(mult_459_V_fu_2783273_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_976_fu_2798717_p2() {
    add_ln703_976_fu_2798717_p2 = (!mult_519_V_fu_2784360_p1.read().is_01() || !mult_499_V_fu_2784001_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_519_V_fu_2784360_p1.read()) + sc_bigint<16>(mult_499_V_fu_2784001_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_977_fu_2798723_p2() {
    add_ln703_977_fu_2798723_p2 = (!add_ln703_975_fu_2798711_p2.read().is_01() || !add_ln703_976_fu_2798717_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_975_fu_2798711_p2.read()) + sc_biguint<16>(add_ln703_976_fu_2798717_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_978_fu_2798729_p2() {
    add_ln703_978_fu_2798729_p2 = (!add_ln703_974_fu_2798705_p2.read().is_01() || !add_ln703_977_fu_2798723_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_974_fu_2798705_p2.read()) + sc_biguint<16>(add_ln703_977_fu_2798723_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_979_fu_2799254_p2() {
    add_ln703_979_fu_2799254_p2 = (!add_ln703_972_reg_2799893.read().is_01() || !add_ln703_978_reg_2799898.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_972_reg_2799893.read()) + sc_biguint<16>(add_ln703_978_reg_2799898.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_97_fu_2793767_p2() {
    add_ln703_97_fu_2793767_p2 = (!sext_ln203_40_fu_2790777_p1.read().is_01() || !sext_ln203_39_fu_2790404_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_40_fu_2790777_p1.read()) + sc_bigint<15>(sext_ln203_39_fu_2790404_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_980_fu_2799258_p2() {
    add_ln703_980_fu_2799258_p2 = (!add_ln703_967_reg_2799888.read().is_01() || !add_ln703_979_fu_2799254_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_967_reg_2799888.read()) + sc_biguint<16>(add_ln703_979_fu_2799254_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_981_fu_2798735_p2() {
    add_ln703_981_fu_2798735_p2 = (!sext_ln203_27_fu_2785375_p1.read().is_01() || !sext_ln203_26_fu_2785156_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_27_fu_2785375_p1.read()) + sc_bigint<15>(sext_ln203_26_fu_2785156_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_982_fu_2798745_p2() {
    add_ln703_982_fu_2798745_p2 = (!mult_539_V_fu_2784769_p4.read().is_01() || !sext_ln703_32_fu_2798741_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_539_V_fu_2784769_p4.read()) + sc_bigint<16>(sext_ln703_32_fu_2798741_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_983_fu_2798751_p2() {
    add_ln703_983_fu_2798751_p2 = (!mult_639_V_fu_2786697_p4.read().is_01() || !mult_619_V_fu_2786302_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_639_V_fu_2786697_p4.read()) + sc_bigint<16>(mult_619_V_fu_2786302_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_984_fu_2798757_p2() {
    add_ln703_984_fu_2798757_p2 = (!mult_599_V_fu_2785947_p1.read().is_01() || !add_ln703_983_fu_2798751_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_599_V_fu_2785947_p1.read()) + sc_biguint<16>(add_ln703_983_fu_2798751_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_985_fu_2798763_p2() {
    add_ln703_985_fu_2798763_p2 = (!add_ln703_982_fu_2798745_p2.read().is_01() || !add_ln703_984_fu_2798757_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_982_fu_2798745_p2.read()) + sc_biguint<16>(add_ln703_984_fu_2798757_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_986_fu_2798769_p2() {
    add_ln703_986_fu_2798769_p2 = (!mult_719_V_fu_2788179_p1.read().is_01() || !mult_679_V_fu_2787504_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_719_V_fu_2788179_p1.read()) + sc_bigint<16>(mult_679_V_fu_2787504_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_987_fu_2798775_p2() {
    add_ln703_987_fu_2798775_p2 = (!mult_659_V_fu_2787121_p1.read().is_01() || !add_ln703_986_fu_2798769_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_659_V_fu_2787121_p1.read()) + sc_biguint<16>(add_ln703_986_fu_2798769_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_988_fu_2798781_p2() {
    add_ln703_988_fu_2798781_p2 = (!mult_759_V_fu_2788914_p1.read().is_01() || !mult_739_V_fu_2788496_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_759_V_fu_2788914_p1.read()) + sc_biguint<16>(mult_739_V_fu_2788496_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_989_fu_2798787_p2() {
    add_ln703_989_fu_2798787_p2 = (!mult_799_V_fu_2789615_p1.read().is_01() || !mult_779_V_fu_2789258_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_799_V_fu_2789615_p1.read()) + sc_bigint<16>(mult_779_V_fu_2789258_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_98_fu_2793777_p2() {
    add_ln703_98_fu_2793777_p2 = (!mult_821_V_fu_2789971_p4.read().is_01() || !sext_ln703_15_fu_2793773_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_821_V_fu_2789971_p4.read()) + sc_bigint<16>(sext_ln703_15_fu_2793773_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_990_fu_2798793_p2() {
    add_ln703_990_fu_2798793_p2 = (!add_ln703_988_fu_2798781_p2.read().is_01() || !add_ln703_989_fu_2798787_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_988_fu_2798781_p2.read()) + sc_biguint<16>(add_ln703_989_fu_2798787_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_991_fu_2799263_p2() {
    add_ln703_991_fu_2799263_p2 = (!add_ln703_987_reg_2799908.read().is_01() || !add_ln703_990_reg_2799913.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_987_reg_2799908.read()) + sc_biguint<16>(add_ln703_990_reg_2799913.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_992_fu_2799267_p2() {
    add_ln703_992_fu_2799267_p2 = (!add_ln703_985_reg_2799903.read().is_01() || !add_ln703_991_fu_2799263_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_985_reg_2799903.read()) + sc_biguint<16>(add_ln703_991_fu_2799263_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_993_fu_2798799_p2() {
    add_ln703_993_fu_2798799_p2 = (!mult_879_V_fu_2791029_p1.read().is_01() || !mult_839_V_fu_2790271_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_879_V_fu_2791029_p1.read()) + sc_biguint<16>(mult_839_V_fu_2790271_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_994_fu_2798805_p2() {
    add_ln703_994_fu_2798805_p2 = (!mult_819_V_fu_2789928_p4.read().is_01() || !add_ln703_993_fu_2798799_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_819_V_fu_2789928_p4.read()) + sc_biguint<16>(add_ln703_993_fu_2798799_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_995_fu_2798811_p2() {
    add_ln703_995_fu_2798811_p2 = (!mult_939_V_fu_2792136_p1.read().is_01() || !mult_919_V_fu_2791768_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_939_V_fu_2792136_p1.read()) + sc_bigint<16>(mult_919_V_fu_2791768_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_996_fu_2798817_p2() {
    add_ln703_996_fu_2798817_p2 = (!mult_899_V_fu_2791376_p4.read().is_01() || !add_ln703_995_fu_2798811_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_899_V_fu_2791376_p4.read()) + sc_biguint<16>(add_ln703_995_fu_2798811_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_997_fu_2798823_p2() {
    add_ln703_997_fu_2798823_p2 = (!add_ln703_994_fu_2798805_p2.read().is_01() || !add_ln703_996_fu_2798817_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_994_fu_2798805_p2.read()) + sc_biguint<16>(add_ln703_996_fu_2798817_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_998_fu_2798829_p2() {
    add_ln703_998_fu_2798829_p2 = (!mult_999_V_fu_2793257_p4.read().is_01() || !mult_979_V_fu_2792865_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_999_V_fu_2793257_p4.read()) + sc_biguint<16>(mult_979_V_fu_2792865_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_999_fu_2798835_p2() {
    add_ln703_999_fu_2798835_p2 = (!mult_959_V_fu_2792534_p4.read().is_01() || !add_ln703_998_fu_2798829_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_959_V_fu_2792534_p4.read()) + sc_biguint<16>(add_ln703_998_fu_2798829_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_99_fu_2793783_p2() {
    add_ln703_99_fu_2793783_p2 = (!add_ln703_96_fu_2793761_p2.read().is_01() || !add_ln703_98_fu_2793777_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_96_fu_2793761_p2.read()) + sc_biguint<16>(add_ln703_98_fu_2793777_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_fu_2793267_p2() {
    add_ln703_fu_2793267_p2 = (!mult_40_V_fu_2775754_p4.read().is_01() || !mult_20_V_fu_2775358_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_40_V_fu_2775754_p4.read()) + sc_biguint<16>(mult_20_V_fu_2775358_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_0 = ap_return_0_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_0 = add_ln703_58_fu_2798896_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_1 = ap_return_1_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_1 = acc_1_V_fu_2798915_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_10() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_10 = ap_return_10_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_10 = acc_10_V_fu_2799096_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_11() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_11 = ap_return_11_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_11 = acc_11_V_fu_2799115_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_12() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_12 = ap_return_12_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_12 = acc_12_V_fu_2799134_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_13() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_13 = ap_return_13_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_13 = acc_13_V_fu_2799153_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_14() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_14 = ap_return_14_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_14 = acc_14_V_fu_2799172_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_15() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_15 = ap_return_15_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_15 = acc_15_V_fu_2799191_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_16() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_16 = ap_return_16_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_16 = acc_16_V_fu_2799210_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_17() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_17 = ap_return_17_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_17 = acc_17_V_fu_2799229_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_18() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_18 = ap_return_18_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_18 = acc_18_V_fu_2799248_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_19() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_19 = ap_return_19_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_19 = acc_19_V_fu_2799277_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_2() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_2 = ap_return_2_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_2 = acc_2_V_fu_2798934_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_3() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_3 = ap_return_3_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_3 = acc_3_V_fu_2798963_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_4() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_4 = ap_return_4_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_4 = acc_4_V_fu_2798982_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_5() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_5 = ap_return_5_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_5 = acc_5_V_fu_2799001_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_6() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_6 = ap_return_6_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_6 = acc_6_V_fu_2799020_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_7() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_7 = ap_return_7_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_7 = acc_7_V_fu_2799039_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_8() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_8 = ap_return_8_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_8 = acc_8_V_fu_2799058_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_9() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_9 = ap_return_9_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_9 = acc_9_V_fu_2799077_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_100_fu_2031_p0() {
    mul_ln1118_100_fu_2031_p0 =  (sc_lv<16>) (sext_ln1118_74_fu_2777167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_100_fu_2031_p2() {
    mul_ln1118_100_fu_2031_p2 = (!mul_ln1118_100_fu_2031_p0.read().is_01() || !ap_const_lv24_CD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_100_fu_2031_p0.read()) * sc_biguint<24>(ap_const_lv24_CD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_101_fu_1576_p0() {
    mul_ln1118_101_fu_1576_p0 =  (sc_lv<16>) (sext_ln1118_75_fu_2777180_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_101_fu_1576_p2() {
    mul_ln1118_101_fu_1576_p2 = (!mul_ln1118_101_fu_1576_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_101_fu_1576_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_102_fu_1962_p0() {
    mul_ln1118_102_fu_1962_p0 =  (sc_lv<16>) (sext_ln1118_74_fu_2777167_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_102_fu_1962_p2() {
    mul_ln1118_102_fu_1962_p2 = (!mul_ln1118_102_fu_1962_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_102_fu_1962_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_103_fu_1323_p0() {
    mul_ln1118_103_fu_1323_p0 =  (sc_lv<16>) (sext_ln1118_73_fu_2777161_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_103_fu_1323_p2() {
    mul_ln1118_103_fu_1323_p2 = (!mul_ln1118_103_fu_1323_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_103_fu_1323_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_104_fu_2041_p0() {
    mul_ln1118_104_fu_2041_p0 =  (sc_lv<16>) (sext_ln1118_83_fu_2777510_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_104_fu_2041_p2() {
    mul_ln1118_104_fu_2041_p2 = (!mul_ln1118_104_fu_2041_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_104_fu_2041_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_105_fu_1965_p0() {
    mul_ln1118_105_fu_1965_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_105_fu_1965_p2() {
    mul_ln1118_105_fu_1965_p2 = (!mul_ln1118_105_fu_1965_p0.read().is_01() || !ap_const_lv24_FFFFA7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_105_fu_1965_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_106_fu_1788_p0() {
    mul_ln1118_106_fu_1788_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_106_fu_1788_p2() {
    mul_ln1118_106_fu_1788_p2 = (!mul_ln1118_106_fu_1788_p0.read().is_01() || !ap_const_lv24_FFFF7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_106_fu_1788_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_107_fu_1813_p0() {
    mul_ln1118_107_fu_1813_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_107_fu_1813_p2() {
    mul_ln1118_107_fu_1813_p2 = (!mul_ln1118_107_fu_1813_p0.read().is_01() || !ap_const_lv24_86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_107_fu_1813_p0.read()) * sc_biguint<24>(ap_const_lv24_86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_108_fu_1506_p0() {
    mul_ln1118_108_fu_1506_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_108_fu_1506_p2() {
    mul_ln1118_108_fu_1506_p2 = (!mul_ln1118_108_fu_1506_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_108_fu_1506_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_109_fu_1892_p0() {
    mul_ln1118_109_fu_1892_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_109_fu_1892_p2() {
    mul_ln1118_109_fu_1892_p2 = (!mul_ln1118_109_fu_1892_p0.read().is_01() || !ap_const_lv24_FFFF42.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_109_fu_1892_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF42);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_10_fu_1626_p0() {
    mul_ln1118_10_fu_1626_p0 =  (sc_lv<16>) (sext_ln1118_15_fu_2775068_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_10_fu_1626_p2() {
    mul_ln1118_10_fu_1626_p2 = (!mul_ln1118_10_fu_1626_p0.read().is_01() || !ap_const_lv24_FFFEEC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_10_fu_1626_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_110_fu_2047_p0() {
    mul_ln1118_110_fu_2047_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_110_fu_2047_p2() {
    mul_ln1118_110_fu_2047_p2 = (!mul_ln1118_110_fu_2047_p0.read().is_01() || !ap_const_lv24_FFFEBE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_110_fu_2047_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEBE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_111_fu_1278_p0() {
    mul_ln1118_111_fu_1278_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_111_fu_1278_p2() {
    mul_ln1118_111_fu_1278_p2 = (!mul_ln1118_111_fu_1278_p0.read().is_01() || !ap_const_lv24_6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_111_fu_1278_p0.read()) * sc_biguint<24>(ap_const_lv24_6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_112_fu_1433_p0() {
    mul_ln1118_112_fu_1433_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_112_fu_1433_p2() {
    mul_ln1118_112_fu_1433_p2 = (!mul_ln1118_112_fu_1433_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_112_fu_1433_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_113_fu_1357_p0() {
    mul_ln1118_113_fu_1357_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_113_fu_1357_p2() {
    mul_ln1118_113_fu_1357_p2 = (!mul_ln1118_113_fu_1357_p0.read().is_01() || !ap_const_lv24_FFFF36.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_113_fu_1357_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_114_fu_1743_p0() {
    mul_ln1118_114_fu_1743_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_114_fu_1743_p2() {
    mul_ln1118_114_fu_1743_p2 = (!mul_ln1118_114_fu_1743_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_114_fu_1743_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_115_fu_1667_p0() {
    mul_ln1118_115_fu_1667_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_115_fu_1667_p2() {
    mul_ln1118_115_fu_1667_p2 = (!mul_ln1118_115_fu_1667_p0.read().is_01() || !ap_const_lv24_FFFE4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_115_fu_1667_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_116_fu_1438_p0() {
    mul_ln1118_116_fu_1438_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_116_fu_1438_p2() {
    mul_ln1118_116_fu_1438_p2 = (!mul_ln1118_116_fu_1438_p0.read().is_01() || !ap_const_lv24_FFFF19.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_116_fu_1438_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_117_fu_1379_p0() {
    mul_ln1118_117_fu_1379_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2777487_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_117_fu_1379_p2() {
    mul_ln1118_117_fu_1379_p2 = (!mul_ln1118_117_fu_1379_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_117_fu_1379_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_118_fu_1420_p0() {
    mul_ln1118_118_fu_1420_p0 =  (sc_lv<16>) (sext_ln1118_83_fu_2777510_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_118_fu_1420_p2() {
    mul_ln1118_118_fu_1420_p2 = (!mul_ln1118_118_fu_1420_p0.read().is_01() || !ap_const_lv23_29.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_118_fu_1420_p0.read()) * sc_biguint<23>(ap_const_lv23_29);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_119_fu_1461_p0() {
    mul_ln1118_119_fu_1461_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_119_fu_1461_p2() {
    mul_ln1118_119_fu_1461_p2 = (!mul_ln1118_119_fu_1461_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_119_fu_1461_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_11_fu_1547_p0() {
    mul_ln1118_11_fu_1547_p0 =  (sc_lv<16>) (sext_ln1118_15_fu_2775068_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_11_fu_1547_p2() {
    mul_ln1118_11_fu_1547_p2 = (!mul_ln1118_11_fu_1547_p0.read().is_01() || !ap_const_lv24_FFFF58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_11_fu_1547_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_120_fu_1479_p0() {
    mul_ln1118_120_fu_1479_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2777492_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_120_fu_1479_p2() {
    mul_ln1118_120_fu_1479_p2 = (!mul_ln1118_120_fu_1479_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_120_fu_1479_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_121_fu_1463_p0() {
    mul_ln1118_121_fu_1463_p0 =  (sc_lv<16>) (sext_ln1118_87_fu_2777800_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_121_fu_1463_p2() {
    mul_ln1118_121_fu_1463_p2 = (!mul_ln1118_121_fu_1463_p0.read().is_01() || !ap_const_lv24_9E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_121_fu_1463_p0.read()) * sc_biguint<24>(ap_const_lv24_9E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_122_fu_1464_p0() {
    mul_ln1118_122_fu_1464_p0 =  (sc_lv<16>) (sext_ln1118_87_fu_2777800_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_122_fu_1464_p2() {
    mul_ln1118_122_fu_1464_p2 = (!mul_ln1118_122_fu_1464_p0.read().is_01() || !ap_const_lv24_C9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_122_fu_1464_p0.read()) * sc_biguint<24>(ap_const_lv24_C9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_123_fu_1465_p0() {
    mul_ln1118_123_fu_1465_p0 =  (sc_lv<16>) (sext_ln1118_90_fu_2777820_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_123_fu_1465_p2() {
    mul_ln1118_123_fu_1465_p2 = (!mul_ln1118_123_fu_1465_p0.read().is_01() || !ap_const_lv23_37.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_123_fu_1465_p0.read()) * sc_biguint<23>(ap_const_lv23_37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_124_fu_1466_p0() {
    mul_ln1118_124_fu_1466_p0 =  (sc_lv<16>) (sext_ln1118_87_fu_2777800_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_124_fu_1466_p2() {
    mul_ln1118_124_fu_1466_p2 = (!mul_ln1118_124_fu_1466_p0.read().is_01() || !ap_const_lv24_BF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_124_fu_1466_p0.read()) * sc_biguint<24>(ap_const_lv24_BF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_125_fu_1487_p0() {
    mul_ln1118_125_fu_1487_p0 =  (sc_lv<16>) (sext_ln1118_87_fu_2777800_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_125_fu_1487_p2() {
    mul_ln1118_125_fu_1487_p2 = (!mul_ln1118_125_fu_1487_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_125_fu_1487_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_126_fu_1448_p0() {
    mul_ln1118_126_fu_1448_p0 =  (sc_lv<16>) (sext_ln1118_90_fu_2777820_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_126_fu_1448_p2() {
    mul_ln1118_126_fu_1448_p2 = (!mul_ln1118_126_fu_1448_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_126_fu_1448_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_127_fu_1469_p0() {
    mul_ln1118_127_fu_1469_p0 =  (sc_lv<16>) (sext_ln1118_90_fu_2777820_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_127_fu_1469_p2() {
    mul_ln1118_127_fu_1469_p2 = (!mul_ln1118_127_fu_1469_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_127_fu_1469_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_128_fu_1490_p0() {
    mul_ln1118_128_fu_1490_p0 =  (sc_lv<16>) (sext_ln1118_87_fu_2777800_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_128_fu_1490_p2() {
    mul_ln1118_128_fu_1490_p2 = (!mul_ln1118_128_fu_1490_p0.read().is_01() || !ap_const_lv24_FFFF1A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_128_fu_1490_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_129_fu_1391_p0() {
    mul_ln1118_129_fu_1391_p0 =  (sc_lv<16>) (sext_ln1118_87_fu_2777800_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_129_fu_1391_p2() {
    mul_ln1118_129_fu_1391_p2 = (!mul_ln1118_129_fu_1391_p0.read().is_01() || !ap_const_lv24_8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_129_fu_1391_p0.read()) * sc_biguint<24>(ap_const_lv24_8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_12_fu_1528_p0() {
    mul_ln1118_12_fu_1528_p0 =  (sc_lv<16>) (sext_ln1118_15_fu_2775068_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_12_fu_1528_p2() {
    mul_ln1118_12_fu_1528_p2 = (!mul_ln1118_12_fu_1528_p0.read().is_01() || !ap_const_lv24_A3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_12_fu_1528_p0.read()) * sc_biguint<24>(ap_const_lv24_A3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_130_fu_1811_p0() {
    mul_ln1118_130_fu_1811_p0 =  (sc_lv<16>) (sext_ln1118_87_fu_2777800_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_130_fu_1811_p2() {
    mul_ln1118_130_fu_1811_p2 = (!mul_ln1118_130_fu_1811_p0.read().is_01() || !ap_const_lv24_8B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_130_fu_1811_p0.read()) * sc_biguint<24>(ap_const_lv24_8B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_131_fu_1735_p0() {
    mul_ln1118_131_fu_1735_p0 =  (sc_lv<16>) (sext_ln1118_87_fu_2777800_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_131_fu_1735_p2() {
    mul_ln1118_131_fu_1735_p2 = (!mul_ln1118_131_fu_1735_p0.read().is_01() || !ap_const_lv24_F2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_131_fu_1735_p0.read()) * sc_biguint<24>(ap_const_lv24_F2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_132_fu_1428_p0() {
    mul_ln1118_132_fu_1428_p0 =  (sc_lv<16>) (sext_ln1118_102_fu_2778206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_132_fu_1428_p2() {
    mul_ln1118_132_fu_1428_p2 = (!mul_ln1118_132_fu_1428_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_132_fu_1428_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_133_fu_1352_p0() {
    mul_ln1118_133_fu_1352_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_2778181_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_133_fu_1352_p2() {
    mul_ln1118_133_fu_1352_p2 = (!mul_ln1118_133_fu_1352_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_133_fu_1352_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_134_fu_1738_p0() {
    mul_ln1118_134_fu_1738_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_2778181_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_134_fu_1738_p2() {
    mul_ln1118_134_fu_1738_p2 = (!mul_ln1118_134_fu_1738_p0.read().is_01() || !ap_const_lv24_85.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_134_fu_1738_p0.read()) * sc_biguint<24>(ap_const_lv24_85);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_135_fu_2124_p0() {
    mul_ln1118_135_fu_2124_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_2778181_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_135_fu_2124_p2() {
    mul_ln1118_135_fu_2124_p2 = (!mul_ln1118_135_fu_2124_p0.read().is_01() || !ap_const_lv24_130.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_135_fu_2124_p0.read()) * sc_biguint<24>(ap_const_lv24_130);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_136_fu_1817_p0() {
    mul_ln1118_136_fu_1817_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_2778181_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_136_fu_1817_p2() {
    mul_ln1118_136_fu_1817_p2 = (!mul_ln1118_136_fu_1817_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_136_fu_1817_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_137_fu_1972_p0() {
    mul_ln1118_137_fu_1972_p0 =  (sc_lv<16>) (sext_ln1118_102_fu_2778206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_137_fu_1972_p2() {
    mul_ln1118_137_fu_1972_p2 = (!mul_ln1118_137_fu_1972_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_137_fu_1972_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_138_fu_1896_p0() {
    mul_ln1118_138_fu_1896_p0 =  (sc_lv<16>) (sext_ln1118_100_fu_2778196_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_138_fu_1896_p2() {
    mul_ln1118_138_fu_1896_p2 = (!mul_ln1118_138_fu_1896_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_138_fu_1896_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_139_fu_2181_p0() {
    mul_ln1118_139_fu_2181_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_2778181_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_139_fu_2181_p2() {
    mul_ln1118_139_fu_2181_p2 = (!mul_ln1118_139_fu_2181_p0.read().is_01() || !ap_const_lv24_AD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_139_fu_2181_p0.read()) * sc_biguint<24>(ap_const_lv24_AD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_13_fu_1629_p0() {
    mul_ln1118_13_fu_1629_p0 =  (sc_lv<16>) (sext_ln1118_15_fu_2775068_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_13_fu_1629_p2() {
    mul_ln1118_13_fu_1629_p2 = (!mul_ln1118_13_fu_1629_p0.read().is_01() || !ap_const_lv24_71.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_13_fu_1629_p0.read()) * sc_biguint<24>(ap_const_lv24_71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_140_fu_1282_p0() {
    mul_ln1118_140_fu_1282_p0 =  (sc_lv<16>) (sext_ln1118_100_fu_2778196_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_140_fu_1282_p2() {
    mul_ln1118_140_fu_1282_p2 = (!mul_ln1118_140_fu_1282_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_140_fu_1282_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_141_fu_2029_p0() {
    mul_ln1118_141_fu_2029_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_2778181_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_141_fu_2029_p2() {
    mul_ln1118_141_fu_2029_p2 = (!mul_ln1118_141_fu_2029_p0.read().is_01() || !ap_const_lv24_B2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_141_fu_2029_p0.read()) * sc_biguint<24>(ap_const_lv24_B2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_142_fu_2054_p0() {
    mul_ln1118_142_fu_2054_p0 =  (sc_lv<16>) (sext_ln1118_98_fu_2778181_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_142_fu_2054_p2() {
    mul_ln1118_142_fu_2054_p2 = (!mul_ln1118_142_fu_2054_p0.read().is_01() || !ap_const_lv24_FFFFA3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_142_fu_2054_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_143_fu_1747_p0() {
    mul_ln1118_143_fu_1747_p0 =  (sc_lv<16>) (sext_ln1118_115_fu_2778637_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_143_fu_1747_p2() {
    mul_ln1118_143_fu_1747_p2 = (!mul_ln1118_143_fu_1747_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_143_fu_1747_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_144_fu_1878_p0() {
    mul_ln1118_144_fu_1878_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2778622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_144_fu_1878_p2() {
    mul_ln1118_144_fu_1878_p2 = (!mul_ln1118_144_fu_1878_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_144_fu_1878_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_145_fu_1919_p0() {
    mul_ln1118_145_fu_1919_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2778622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_145_fu_1919_p2() {
    mul_ln1118_145_fu_1919_p2 = (!mul_ln1118_145_fu_1919_p0.read().is_01() || !ap_const_lv24_CA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_145_fu_1919_p0.read()) * sc_biguint<24>(ap_const_lv24_CA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_146_fu_1900_p0() {
    mul_ln1118_146_fu_1900_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2778622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_146_fu_1900_p2() {
    mul_ln1118_146_fu_1900_p2 = (!mul_ln1118_146_fu_1900_p0.read().is_01() || !ap_const_lv24_B8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_146_fu_1900_p0.read()) * sc_biguint<24>(ap_const_lv24_B8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_147_fu_1841_p0() {
    mul_ln1118_147_fu_1841_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2778622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_147_fu_1841_p2() {
    mul_ln1118_147_fu_1841_p2 = (!mul_ln1118_147_fu_1841_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_147_fu_1841_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_148_fu_1559_p0() {
    mul_ln1118_148_fu_1559_p0 =  (sc_lv<16>) (sext_ln1118_116_fu_2778643_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_148_fu_1559_p2() {
    mul_ln1118_148_fu_1559_p2 = (!mul_ln1118_148_fu_1559_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_148_fu_1559_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_149_fu_1903_p0() {
    mul_ln1118_149_fu_1903_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2778622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_149_fu_1903_p2() {
    mul_ln1118_149_fu_1903_p2 = (!mul_ln1118_149_fu_1903_p0.read().is_01() || !ap_const_lv24_FFFF17.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_149_fu_1903_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_14_fu_1630_p0() {
    mul_ln1118_14_fu_1630_p0 =  (sc_lv<16>) (sext_ln1118_15_fu_2775068_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_14_fu_1630_p2() {
    mul_ln1118_14_fu_1630_p2 = (!mul_ln1118_14_fu_1630_p0.read().is_01() || !ap_const_lv24_7B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_14_fu_1630_p0.read()) * sc_biguint<24>(ap_const_lv24_7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_150_fu_1904_p0() {
    mul_ln1118_150_fu_1904_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2778622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_150_fu_1904_p2() {
    mul_ln1118_150_fu_1904_p2 = (!mul_ln1118_150_fu_1904_p0.read().is_01() || !ap_const_lv24_9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_150_fu_1904_p0.read()) * sc_biguint<24>(ap_const_lv24_9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_151_fu_1925_p0() {
    mul_ln1118_151_fu_1925_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2778622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_151_fu_1925_p2() {
    mul_ln1118_151_fu_1925_p2 = (!mul_ln1118_151_fu_1925_p0.read().is_01() || !ap_const_lv24_F2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_151_fu_1925_p0.read()) * sc_biguint<24>(ap_const_lv24_F2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_152_fu_1906_p0() {
    mul_ln1118_152_fu_1906_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2778622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_152_fu_1906_p2() {
    mul_ln1118_152_fu_1906_p2 = (!mul_ln1118_152_fu_1906_p0.read().is_01() || !ap_const_lv24_FFFF86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_152_fu_1906_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_153_fu_1907_p0() {
    mul_ln1118_153_fu_1907_p0 =  (sc_lv<16>) (sext_ln1118_115_fu_2778637_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_153_fu_1907_p2() {
    mul_ln1118_153_fu_1907_p2 = (!mul_ln1118_153_fu_1907_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_153_fu_1907_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_154_fu_1908_p0() {
    mul_ln1118_154_fu_1908_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2778622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_154_fu_1908_p2() {
    mul_ln1118_154_fu_1908_p2 = (!mul_ln1118_154_fu_1908_p0.read().is_01() || !ap_const_lv24_FFFEEC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_154_fu_1908_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_155_fu_1909_p0() {
    mul_ln1118_155_fu_1909_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2778622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_155_fu_1909_p2() {
    mul_ln1118_155_fu_1909_p2 = (!mul_ln1118_155_fu_1909_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_155_fu_1909_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_156_fu_1930_p0() {
    mul_ln1118_156_fu_1930_p0 =  (sc_lv<16>) (sext_ln1118_114_fu_2778622_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_156_fu_1930_p2() {
    mul_ln1118_156_fu_1930_p2 = (!mul_ln1118_156_fu_1930_p0.read().is_01() || !ap_const_lv24_96.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_156_fu_1930_p0.read()) * sc_biguint<24>(ap_const_lv24_96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_157_fu_2105_p0() {
    mul_ln1118_157_fu_2105_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_157_fu_2105_p2() {
    mul_ln1118_157_fu_2105_p2 = (!mul_ln1118_157_fu_2105_p0.read().is_01() || !ap_const_lv24_FFFF58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_157_fu_2105_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_158_fu_1429_p0() {
    mul_ln1118_158_fu_1429_p0 =  (sc_lv<16>) (sext_ln1118_123_fu_2778949_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_158_fu_1429_p2() {
    mul_ln1118_158_fu_1429_p2 = (!mul_ln1118_158_fu_1429_p0.read().is_01() || !ap_const_lv23_7FFFC6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_158_fu_1429_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_159_fu_1815_p0() {
    mul_ln1118_159_fu_1815_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_159_fu_1815_p2() {
    mul_ln1118_159_fu_1815_p2 = (!mul_ln1118_159_fu_1815_p0.read().is_01() || !ap_const_lv24_FFFF4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_159_fu_1815_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_15_fu_1651_p0() {
    mul_ln1118_15_fu_1651_p0 =  (sc_lv<16>) (sext_ln1118_15_fu_2775068_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_15_fu_1651_p2() {
    mul_ln1118_15_fu_1651_p2 = (!mul_ln1118_15_fu_1651_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_15_fu_1651_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_160_fu_2100_p0() {
    mul_ln1118_160_fu_2100_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_160_fu_2100_p2() {
    mul_ln1118_160_fu_2100_p2 = (!mul_ln1118_160_fu_2100_p0.read().is_01() || !ap_const_lv24_93.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_160_fu_2100_p0.read()) * sc_biguint<24>(ap_const_lv24_93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_161_fu_1331_p0() {
    mul_ln1118_161_fu_1331_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_161_fu_1331_p2() {
    mul_ln1118_161_fu_1331_p2 = (!mul_ln1118_161_fu_1331_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_161_fu_1331_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_162_fu_1587_p0() {
    mul_ln1118_162_fu_1587_p0 =  (sc_lv<16>) (sext_ln1118_123_fu_2778949_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_162_fu_1587_p2() {
    mul_ln1118_162_fu_1587_p2 = (!mul_ln1118_162_fu_1587_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_162_fu_1587_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_163_fu_2204_p0() {
    mul_ln1118_163_fu_2204_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_163_fu_2204_p2() {
    mul_ln1118_163_fu_2204_p2 = (!mul_ln1118_163_fu_2204_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_163_fu_2204_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_164_fu_1435_p0() {
    mul_ln1118_164_fu_1435_p0 =  (sc_lv<16>) (sext_ln1118_122_fu_2778942_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_164_fu_1435_p2() {
    mul_ln1118_164_fu_1435_p2 = (!mul_ln1118_164_fu_1435_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_164_fu_1435_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_165_fu_1821_p0() {
    mul_ln1118_165_fu_1821_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_165_fu_1821_p2() {
    mul_ln1118_165_fu_1821_p2 = (!mul_ln1118_165_fu_1821_p0.read().is_01() || !ap_const_lv24_FFFF23.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_165_fu_1821_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_166_fu_2207_p0() {
    mul_ln1118_166_fu_2207_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_166_fu_2207_p2() {
    mul_ln1118_166_fu_2207_p2 = (!mul_ln1118_166_fu_2207_p0.read().is_01() || !ap_const_lv24_55.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_166_fu_2207_p0.read()) * sc_biguint<24>(ap_const_lv24_55);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_167_fu_2131_p0() {
    mul_ln1118_167_fu_2131_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_167_fu_2131_p2() {
    mul_ln1118_167_fu_2131_p2 = (!mul_ln1118_167_fu_2131_p0.read().is_01() || !ap_const_lv24_A9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_167_fu_2131_p0.read()) * sc_biguint<24>(ap_const_lv24_A9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_168_fu_2185_p0() {
    mul_ln1118_168_fu_2185_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_168_fu_2185_p2() {
    mul_ln1118_168_fu_2185_p2 = (!mul_ln1118_168_fu_2185_p0.read().is_01() || !ap_const_lv24_9A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_168_fu_2185_p0.read()) * sc_biguint<24>(ap_const_lv24_9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_169_fu_1748_p0() {
    mul_ln1118_169_fu_1748_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_169_fu_1748_p2() {
    mul_ln1118_169_fu_1748_p2 = (!mul_ln1118_169_fu_1748_p0.read().is_01() || !ap_const_lv24_D4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_169_fu_1748_p0.read()) * sc_biguint<24>(ap_const_lv24_D4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_16_fu_1343_p0() {
    mul_ln1118_16_fu_1343_p0 =  (sc_lv<16>) (sext_ln1118_15_fu_2775068_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_16_fu_1343_p2() {
    mul_ln1118_16_fu_1343_p2 = (!mul_ln1118_16_fu_1343_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_16_fu_1343_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_170_fu_1369_p0() {
    mul_ln1118_170_fu_1369_p0 =  (sc_lv<16>) (sext_ln1118_122_fu_2778942_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_170_fu_1369_p2() {
    mul_ln1118_170_fu_1369_p2 = (!mul_ln1118_170_fu_1369_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_170_fu_1369_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_171_fu_1827_p0() {
    mul_ln1118_171_fu_1827_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_171_fu_1827_p2() {
    mul_ln1118_171_fu_1827_p2 = (!mul_ln1118_171_fu_1827_p0.read().is_01() || !ap_const_lv24_FFFFA3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_171_fu_1827_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_172_fu_1318_p0() {
    mul_ln1118_172_fu_1318_p0 =  (sc_lv<16>) (sext_ln1118_122_fu_2778942_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_172_fu_1318_p2() {
    mul_ln1118_172_fu_1318_p2 = (!mul_ln1118_172_fu_1318_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_172_fu_1318_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_173_fu_1338_p0() {
    mul_ln1118_173_fu_1338_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_173_fu_1338_p2() {
    mul_ln1118_173_fu_1338_p2 = (!mul_ln1118_173_fu_1338_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_173_fu_1338_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_174_fu_1359_p0() {
    mul_ln1118_174_fu_1359_p0 =  (sc_lv<16>) (sext_ln1118_124_fu_2778955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_174_fu_1359_p2() {
    mul_ln1118_174_fu_1359_p2 = (!mul_ln1118_174_fu_1359_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_174_fu_1359_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_175_fu_1360_p0() {
    mul_ln1118_175_fu_1360_p0 = sext_ln1118_130_fu_2779241_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_175_fu_1360_p2() {
    mul_ln1118_175_fu_1360_p2 = (!mul_ln1118_175_fu_1360_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_175_fu_1360_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_176_fu_1381_p0() {
    mul_ln1118_176_fu_1381_p0 =  (sc_lv<16>) (sext_ln1118_129_fu_2779228_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_176_fu_1381_p2() {
    mul_ln1118_176_fu_1381_p2 = (!mul_ln1118_176_fu_1381_p0.read().is_01() || !ap_const_lv24_FFFF6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_176_fu_1381_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_177_fu_1362_p0() {
    mul_ln1118_177_fu_1362_p0 =  (sc_lv<16>) (sext_ln1118_129_fu_2779228_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_177_fu_1362_p2() {
    mul_ln1118_177_fu_1362_p2 = (!mul_ln1118_177_fu_1362_p0.read().is_01() || !ap_const_lv24_FFFF50.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_177_fu_1362_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF50);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_178_fu_1383_p0() {
    mul_ln1118_178_fu_1383_p0 =  (sc_lv<16>) (sext_ln1118_129_fu_2779228_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_178_fu_1383_p2() {
    mul_ln1118_178_fu_1383_p2 = (!mul_ln1118_178_fu_1383_p0.read().is_01() || !ap_const_lv24_FFFEF9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_178_fu_1383_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEF9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_179_fu_1364_p0() {
    mul_ln1118_179_fu_1364_p0 =  (sc_lv<16>) (sext_ln1118_129_fu_2779228_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_179_fu_1364_p2() {
    mul_ln1118_179_fu_1364_p2 = (!mul_ln1118_179_fu_1364_p0.read().is_01() || !ap_const_lv24_FFFF5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_179_fu_1364_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_17_fu_1336_p0() {
    mul_ln1118_17_fu_1336_p0 =  (sc_lv<16>) (sext_ln1118_15_fu_2775068_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_17_fu_1336_p2() {
    mul_ln1118_17_fu_1336_p2 = (!mul_ln1118_17_fu_1336_p0.read().is_01() || !ap_const_lv24_FFFF5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_17_fu_1336_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_180_fu_1405_p0() {
    mul_ln1118_180_fu_1405_p0 =  (sc_lv<16>) (sext_ln1118_129_fu_2779228_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_180_fu_1405_p2() {
    mul_ln1118_180_fu_1405_p2 = (!mul_ln1118_180_fu_1405_p0.read().is_01() || !ap_const_lv24_FFFE9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_180_fu_1405_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_181_fu_1386_p0() {
    mul_ln1118_181_fu_1386_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2779216_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_181_fu_1386_p2() {
    mul_ln1118_181_fu_1386_p2 = (!mul_ln1118_181_fu_1386_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_181_fu_1386_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_182_fu_1367_p0() {
    mul_ln1118_182_fu_1367_p0 =  (sc_lv<16>) (sext_ln1118_129_fu_2779228_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_182_fu_1367_p2() {
    mul_ln1118_182_fu_1367_p2 = (!mul_ln1118_182_fu_1367_p0.read().is_01() || !ap_const_lv24_FFFED4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_182_fu_1367_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFED4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_183_fu_1328_p0() {
    mul_ln1118_183_fu_1328_p0 =  (sc_lv<16>) (sext_ln1118_129_fu_2779228_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_183_fu_1328_p2() {
    mul_ln1118_183_fu_1328_p2 = (!mul_ln1118_183_fu_1328_p0.read().is_01() || !ap_const_lv24_FFFF9A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_183_fu_1328_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_184_fu_1389_p0() {
    mul_ln1118_184_fu_1389_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2779216_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_184_fu_1389_p2() {
    mul_ln1118_184_fu_1389_p2 = (!mul_ln1118_184_fu_1389_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_184_fu_1389_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_185_fu_1390_p0() {
    mul_ln1118_185_fu_1390_p0 =  (sc_lv<16>) (sext_ln1118_129_fu_2779228_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_185_fu_1390_p2() {
    mul_ln1118_185_fu_1390_p2 = (!mul_ln1118_185_fu_1390_p0.read().is_01() || !ap_const_lv24_FFFEB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_185_fu_1390_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_186_fu_1870_p0() {
    mul_ln1118_186_fu_1870_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2779216_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_186_fu_1870_p2() {
    mul_ln1118_186_fu_1870_p2 = (!mul_ln1118_186_fu_1870_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_186_fu_1870_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_187_fu_1794_p0() {
    mul_ln1118_187_fu_1794_p0 =  (sc_lv<16>) (sext_ln1118_129_fu_2779228_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_187_fu_1794_p2() {
    mul_ln1118_187_fu_1794_p2 = (!mul_ln1118_187_fu_1794_p0.read().is_01() || !ap_const_lv24_FFFF61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_187_fu_1794_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_188_fu_1256_p0() {
    mul_ln1118_188_fu_1256_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2779216_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_188_fu_1256_p2() {
    mul_ln1118_188_fu_1256_p2 = (!mul_ln1118_188_fu_1256_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_188_fu_1256_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_189_fu_1411_p0() {
    mul_ln1118_189_fu_1411_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2779569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_189_fu_1411_p2() {
    mul_ln1118_189_fu_1411_p2 = (!mul_ln1118_189_fu_1411_p0.read().is_01() || !ap_const_lv24_FFFF4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_189_fu_1411_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_18_fu_1260_p0() {
    mul_ln1118_18_fu_1260_p0 =  (sc_lv<16>) (sext_ln1118_15_fu_2775068_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_18_fu_1260_p2() {
    mul_ln1118_18_fu_1260_p2 = (!mul_ln1118_18_fu_1260_p0.read().is_01() || !ap_const_lv24_CA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_18_fu_1260_p0.read()) * sc_biguint<24>(ap_const_lv24_CA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_190_fu_1335_p0() {
    mul_ln1118_190_fu_1335_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2779569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_190_fu_1335_p2() {
    mul_ln1118_190_fu_1335_p2 = (!mul_ln1118_190_fu_1335_p0.read().is_01() || !ap_const_lv24_E3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_190_fu_1335_p0.read()) * sc_biguint<24>(ap_const_lv24_E3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_191_fu_1721_p0() {
    mul_ln1118_191_fu_1721_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2779569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_191_fu_1721_p2() {
    mul_ln1118_191_fu_1721_p2 = (!mul_ln1118_191_fu_1721_p0.read().is_01() || !ap_const_lv24_F5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_191_fu_1721_p0.read()) * sc_biguint<24>(ap_const_lv24_F5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_192_fu_2107_p0() {
    mul_ln1118_192_fu_2107_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2779569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_192_fu_2107_p2() {
    mul_ln1118_192_fu_2107_p2 = (!mul_ln1118_192_fu_2107_p0.read().is_01() || !ap_const_lv24_FFFF42.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_192_fu_2107_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF42);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_193_fu_1468_p0() {
    mul_ln1118_193_fu_1468_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2779569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_193_fu_1468_p2() {
    mul_ln1118_193_fu_1468_p2 = (!mul_ln1118_193_fu_1468_p0.read().is_01() || !ap_const_lv24_FFFF79.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_193_fu_1468_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_194_fu_1955_p0() {
    mul_ln1118_194_fu_1955_p0 =  (sc_lv<16>) (sext_ln1118_135_fu_2779562_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_194_fu_1955_p2() {
    mul_ln1118_194_fu_1955_p2 = (!mul_ln1118_194_fu_1955_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_194_fu_1955_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_195_fu_2110_p0() {
    mul_ln1118_195_fu_2110_p0 =  (sc_lv<16>) (sext_ln1118_135_fu_2779562_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_195_fu_2110_p2() {
    mul_ln1118_195_fu_2110_p2 = (!mul_ln1118_195_fu_2110_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_195_fu_2110_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_196_fu_2164_p0() {
    mul_ln1118_196_fu_2164_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2779569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_196_fu_2164_p2() {
    mul_ln1118_196_fu_2164_p2 = (!mul_ln1118_196_fu_2164_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_196_fu_2164_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_197_fu_1727_p0() {
    mul_ln1118_197_fu_1727_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2779569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_197_fu_1727_p2() {
    mul_ln1118_197_fu_1727_p2 = (!mul_ln1118_197_fu_1727_p0.read().is_01() || !ap_const_lv24_54.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_197_fu_1727_p0.read()) * sc_biguint<24>(ap_const_lv24_54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_198_fu_1319_p0() {
    mul_ln1118_198_fu_1319_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2779569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_198_fu_1319_p2() {
    mul_ln1118_198_fu_1319_p2 = (!mul_ln1118_198_fu_1319_p0.read().is_01() || !ap_const_lv24_FFFEF9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_198_fu_1319_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEF9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_199_fu_1344_p0() {
    mul_ln1118_199_fu_1344_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2779569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_199_fu_1344_p2() {
    mul_ln1118_199_fu_1344_p2 = (!mul_ln1118_199_fu_1344_p0.read().is_01() || !ap_const_lv24_A1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_199_fu_1344_p0.read()) * sc_biguint<24>(ap_const_lv24_A1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_19_fu_1877_p0() {
    mul_ln1118_19_fu_1877_p0 =  (sc_lv<16>) (sext_ln1118_15_fu_2775068_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_19_fu_1877_p2() {
    mul_ln1118_19_fu_1877_p2 = (!mul_ln1118_19_fu_1877_p0.read().is_01() || !ap_const_lv24_5F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_19_fu_1877_p0.read()) * sc_biguint<24>(ap_const_lv24_5F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_200_fu_1730_p0() {
    mul_ln1118_200_fu_1730_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2779569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_200_fu_1730_p2() {
    mul_ln1118_200_fu_1730_p2 = (!mul_ln1118_200_fu_1730_p0.read().is_01() || !ap_const_lv24_FA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_200_fu_1730_p0.read()) * sc_biguint<24>(ap_const_lv24_FA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_201_fu_1678_p0() {
    mul_ln1118_201_fu_1678_p0 =  (sc_lv<16>) (sext_ln1118_135_fu_2779562_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_201_fu_1678_p2() {
    mul_ln1118_201_fu_1678_p2 = (!mul_ln1118_201_fu_1678_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_201_fu_1678_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_202_fu_1819_p0() {
    mul_ln1118_202_fu_1819_p0 =  (sc_lv<16>) (sext_ln1118_136_fu_2779569_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_202_fu_1819_p2() {
    mul_ln1118_202_fu_1819_p2 = (!mul_ln1118_202_fu_1819_p0.read().is_01() || !ap_const_lv24_FFFF77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_202_fu_1819_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_203_fu_1780_p0() {
    mul_ln1118_203_fu_1780_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2779884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_203_fu_1780_p2() {
    mul_ln1118_203_fu_1780_p2 = (!mul_ln1118_203_fu_1780_p0.read().is_01() || !ap_const_lv24_FFFF6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_203_fu_1780_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_204_fu_1781_p0() {
    mul_ln1118_204_fu_1781_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2779884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_204_fu_1781_p2() {
    mul_ln1118_204_fu_1781_p2 = (!mul_ln1118_204_fu_1781_p0.read().is_01() || !ap_const_lv24_55.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_204_fu_1781_p0.read()) * sc_biguint<24>(ap_const_lv24_55);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_205_fu_1802_p0() {
    mul_ln1118_205_fu_1802_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2779884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_205_fu_1802_p2() {
    mul_ln1118_205_fu_1802_p2 = (!mul_ln1118_205_fu_1802_p0.read().is_01() || !ap_const_lv24_FFFF8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_205_fu_1802_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_206_fu_1803_p0() {
    mul_ln1118_206_fu_1803_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2779884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_206_fu_1803_p2() {
    mul_ln1118_206_fu_1803_p2 = (!mul_ln1118_206_fu_1803_p0.read().is_01() || !ap_const_lv24_DA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_206_fu_1803_p0.read()) * sc_biguint<24>(ap_const_lv24_DA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_207_fu_1784_p0() {
    mul_ln1118_207_fu_1784_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2779884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_207_fu_1784_p2() {
    mul_ln1118_207_fu_1784_p2 = (!mul_ln1118_207_fu_1784_p0.read().is_01() || !ap_const_lv24_98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_207_fu_1784_p0.read()) * sc_biguint<24>(ap_const_lv24_98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_208_fu_1825_p0() {
    mul_ln1118_208_fu_1825_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_2779899_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_208_fu_1825_p2() {
    mul_ln1118_208_fu_1825_p2 = (!mul_ln1118_208_fu_1825_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_208_fu_1825_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_209_fu_1826_p0() {
    mul_ln1118_209_fu_1826_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2779884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_209_fu_1826_p2() {
    mul_ln1118_209_fu_1826_p2 = (!mul_ln1118_209_fu_1826_p0.read().is_01() || !ap_const_lv24_F3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_209_fu_1826_p0.read()) * sc_biguint<24>(ap_const_lv24_F3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_20_fu_2032_p0() {
    mul_ln1118_20_fu_2032_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2775333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_20_fu_2032_p2() {
    mul_ln1118_20_fu_2032_p2 = (!mul_ln1118_20_fu_2032_p0.read().is_01() || !ap_const_lv24_FFFF12.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_20_fu_2032_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF12);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_210_fu_1767_p0() {
    mul_ln1118_210_fu_1767_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_2779899_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_210_fu_1767_p2() {
    mul_ln1118_210_fu_1767_p2 = (!mul_ln1118_210_fu_1767_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_210_fu_1767_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_211_fu_1808_p0() {
    mul_ln1118_211_fu_1808_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2779884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_211_fu_1808_p2() {
    mul_ln1118_211_fu_1808_p2 = (!mul_ln1118_211_fu_1808_p0.read().is_01() || !ap_const_lv24_FFFF4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_211_fu_1808_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_212_fu_1809_p0() {
    mul_ln1118_212_fu_1809_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_2779899_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_212_fu_1809_p2() {
    mul_ln1118_212_fu_1809_p2 = (!mul_ln1118_212_fu_1809_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_212_fu_1809_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_213_fu_1790_p0() {
    mul_ln1118_213_fu_1790_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2779884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_213_fu_1790_p2() {
    mul_ln1118_213_fu_1790_p2 = (!mul_ln1118_213_fu_1790_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_213_fu_1790_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_214_fu_1950_p0() {
    mul_ln1118_214_fu_1950_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2779884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_214_fu_1950_p2() {
    mul_ln1118_214_fu_1950_p2 = (!mul_ln1118_214_fu_1950_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_214_fu_1950_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_215_fu_1874_p0() {
    mul_ln1118_215_fu_1874_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2779884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_215_fu_1874_p2() {
    mul_ln1118_215_fu_1874_p2 = (!mul_ln1118_215_fu_1874_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_215_fu_1874_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_216_fu_1697_p0() {
    mul_ln1118_216_fu_1697_p0 =  (sc_lv<16>) (sext_ln1118_143_fu_2779884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_216_fu_1697_p2() {
    mul_ln1118_216_fu_1697_p2 = (!mul_ln1118_216_fu_1697_p0.read().is_01() || !ap_const_lv24_86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_216_fu_1697_p0.read()) * sc_biguint<24>(ap_const_lv24_86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_217_fu_1722_p0() {
    mul_ln1118_217_fu_1722_p0 =  (sc_lv<16>) (sext_ln1118_144_fu_2779899_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_217_fu_1722_p2() {
    mul_ln1118_217_fu_1722_p2 = (!mul_ln1118_217_fu_1722_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_217_fu_1722_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_218_fu_1415_p0() {
    mul_ln1118_218_fu_1415_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2780253_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_218_fu_1415_p2() {
    mul_ln1118_218_fu_1415_p2 = (!mul_ln1118_218_fu_1415_p0.read().is_01() || !ap_const_lv24_FFFF2F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_218_fu_1415_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_219_fu_1339_p0() {
    mul_ln1118_219_fu_1339_p0 =  (sc_lv<16>) (sext_ln1118_155_fu_2780267_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_219_fu_1339_p2() {
    mul_ln1118_219_fu_1339_p2 = (!mul_ln1118_219_fu_1339_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_219_fu_1339_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_21_fu_1494_p0() {
    mul_ln1118_21_fu_1494_p0 =  (sc_lv<16>) (sext_ln1118_21_fu_2775348_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_21_fu_1494_p2() {
    mul_ln1118_21_fu_1494_p2 = (!mul_ln1118_21_fu_1494_p0.read().is_01() || !ap_const_lv22_3FFFEB.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_21_fu_1494_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_220_fu_1725_p0() {
    mul_ln1118_220_fu_1725_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2780253_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_220_fu_1725_p2() {
    mul_ln1118_220_fu_1725_p2 = (!mul_ln1118_220_fu_1725_p0.read().is_01() || !ap_const_lv24_9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_220_fu_1725_p0.read()) * sc_biguint<24>(ap_const_lv24_9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_221_fu_2111_p0() {
    mul_ln1118_221_fu_2111_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2780253_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_221_fu_2111_p2() {
    mul_ln1118_221_fu_2111_p2 = (!mul_ln1118_221_fu_2111_p0.read().is_01() || !ap_const_lv24_FFFE71.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_221_fu_2111_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_222_fu_1573_p0() {
    mul_ln1118_222_fu_1573_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2780253_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_222_fu_1573_p2() {
    mul_ln1118_222_fu_1573_p2 = (!mul_ln1118_222_fu_1573_p0.read().is_01() || !ap_const_lv24_FFFF47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_222_fu_1573_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_223_fu_1728_p0() {
    mul_ln1118_223_fu_1728_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2780253_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_223_fu_1728_p2() {
    mul_ln1118_223_fu_1728_p2 = (!mul_ln1118_223_fu_1728_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_223_fu_1728_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_224_fu_1883_p0() {
    mul_ln1118_224_fu_1883_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2780253_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_224_fu_1883_p2() {
    mul_ln1118_224_fu_1883_p2 = (!mul_ln1118_224_fu_1883_p0.read().is_01() || !ap_const_lv24_B6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_224_fu_1883_p0.read()) * sc_biguint<24>(ap_const_lv24_B6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_225_fu_1345_p0() {
    mul_ln1118_225_fu_1345_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2780253_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_225_fu_1345_p2() {
    mul_ln1118_225_fu_1345_p2 = (!mul_ln1118_225_fu_1345_p0.read().is_01() || !ap_const_lv24_FFFF48.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_225_fu_1345_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF48);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_226_fu_1500_p0() {
    mul_ln1118_226_fu_1500_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2780253_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_226_fu_1500_p2() {
    mul_ln1118_226_fu_1500_p2 = (!mul_ln1118_226_fu_1500_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_226_fu_1500_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_227_fu_1554_p0() {
    mul_ln1118_227_fu_1554_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2780253_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_227_fu_1554_p2() {
    mul_ln1118_227_fu_1554_p2 = (!mul_ln1118_227_fu_1554_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_227_fu_1554_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_228_fu_1709_p0() {
    mul_ln1118_228_fu_1709_p0 =  (sc_lv<16>) (sext_ln1118_154_fu_2780253_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_228_fu_1709_p2() {
    mul_ln1118_228_fu_1709_p2 = (!mul_ln1118_228_fu_1709_p0.read().is_01() || !ap_const_lv24_8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_228_fu_1709_p0.read()) * sc_biguint<24>(ap_const_lv24_8D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_229_fu_2178_p0() {
    mul_ln1118_229_fu_2178_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2780664_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_229_fu_2178_p2() {
    mul_ln1118_229_fu_2178_p2 = (!mul_ln1118_229_fu_2178_p0.read().is_01() || !ap_const_lv24_FFFDE6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_229_fu_2178_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_22_fu_1649_p0() {
    mul_ln1118_22_fu_1649_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2775333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_22_fu_1649_p2() {
    mul_ln1118_22_fu_1649_p2 = (!mul_ln1118_22_fu_1649_p0.read().is_01() || !ap_const_lv24_FFFF75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_22_fu_1649_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_230_fu_2199_p0() {
    mul_ln1118_230_fu_2199_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2780664_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_230_fu_2199_p2() {
    mul_ln1118_230_fu_2199_p2 = (!mul_ln1118_230_fu_2199_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_230_fu_2199_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_231_fu_1239_p0() {
    mul_ln1118_231_fu_1239_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2780664_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_231_fu_1239_p2() {
    mul_ln1118_231_fu_1239_p2 = (!mul_ln1118_231_fu_1239_p0.read().is_01() || !ap_const_lv24_CE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_231_fu_1239_p0.read()) * sc_biguint<24>(ap_const_lv24_CE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_232_fu_1220_p0() {
    mul_ln1118_232_fu_1220_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2780664_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_232_fu_1220_p2() {
    mul_ln1118_232_fu_1220_p2 = (!mul_ln1118_232_fu_1220_p0.read().is_01() || !ap_const_lv24_51.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_232_fu_1220_p0.read()) * sc_biguint<24>(ap_const_lv24_51);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_233_fu_1221_p0() {
    mul_ln1118_233_fu_1221_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_2780678_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_233_fu_1221_p2() {
    mul_ln1118_233_fu_1221_p2 = (!mul_ln1118_233_fu_1221_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_233_fu_1221_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_234_fu_1222_p0() {
    mul_ln1118_234_fu_1222_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_2780678_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_234_fu_1222_p2() {
    mul_ln1118_234_fu_1222_p2 = (!mul_ln1118_234_fu_1222_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_234_fu_1222_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_235_fu_2184_p0() {
    mul_ln1118_235_fu_2184_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2780664_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_235_fu_2184_p2() {
    mul_ln1118_235_fu_2184_p2 = (!mul_ln1118_235_fu_2184_p0.read().is_01() || !ap_const_lv24_FFFEED.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_235_fu_2184_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_236_fu_1224_p0() {
    mul_ln1118_236_fu_1224_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_2780678_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_236_fu_1224_p2() {
    mul_ln1118_236_fu_1224_p2 = (!mul_ln1118_236_fu_1224_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_236_fu_1224_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_237_fu_1225_p0() {
    mul_ln1118_237_fu_1225_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2780664_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_237_fu_1225_p2() {
    mul_ln1118_237_fu_1225_p2 = (!mul_ln1118_237_fu_1225_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_237_fu_1225_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_238_fu_2187_p0() {
    mul_ln1118_238_fu_2187_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2780664_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_238_fu_2187_p2() {
    mul_ln1118_238_fu_2187_p2 = (!mul_ln1118_238_fu_2187_p0.read().is_01() || !ap_const_lv24_61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_238_fu_2187_p0.read()) * sc_biguint<24>(ap_const_lv24_61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_239_fu_1227_p0() {
    mul_ln1118_239_fu_1227_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2780664_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_239_fu_1227_p2() {
    mul_ln1118_239_fu_1227_p2 = (!mul_ln1118_239_fu_1227_p0.read().is_01() || !ap_const_lv24_B6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_239_fu_1227_p0.read()) * sc_biguint<24>(ap_const_lv24_B6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_23_fu_1804_p0() {
    mul_ln1118_23_fu_1804_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2775333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_23_fu_1804_p2() {
    mul_ln1118_23_fu_1804_p2 = (!mul_ln1118_23_fu_1804_p0.read().is_01() || !ap_const_lv24_105.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_23_fu_1804_p0.read()) * sc_biguint<24>(ap_const_lv24_105);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_240_fu_1228_p0() {
    mul_ln1118_240_fu_1228_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2780664_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_240_fu_1228_p2() {
    mul_ln1118_240_fu_1228_p2 = (!mul_ln1118_240_fu_1228_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_240_fu_1228_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_241_fu_2190_p0() {
    mul_ln1118_241_fu_2190_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2780664_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_241_fu_2190_p2() {
    mul_ln1118_241_fu_2190_p2 = (!mul_ln1118_241_fu_2190_p0.read().is_01() || !ap_const_lv24_FFFF51.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_241_fu_2190_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF51);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_242_fu_1230_p0() {
    mul_ln1118_242_fu_1230_p0 =  (sc_lv<16>) (sext_ln1118_181_fu_2781059_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_242_fu_1230_p2() {
    mul_ln1118_242_fu_1230_p2 = (!mul_ln1118_242_fu_1230_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_242_fu_1230_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_243_fu_2084_p0() {
    mul_ln1118_243_fu_2084_p0 =  (sc_lv<16>) (sext_ln1118_181_fu_2781059_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_243_fu_2084_p2() {
    mul_ln1118_243_fu_2084_p2 = (!mul_ln1118_243_fu_2084_p0.read().is_01() || !ap_const_lv23_2B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_243_fu_2084_p0.read()) * sc_biguint<23>(ap_const_lv23_2B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_244_fu_2008_p0() {
    mul_ln1118_244_fu_2008_p0 =  (sc_lv<16>) (sext_ln1118_180_fu_2781046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_244_fu_2008_p2() {
    mul_ln1118_244_fu_2008_p2 = (!mul_ln1118_244_fu_2008_p0.read().is_01() || !ap_const_lv24_FFFF9F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_244_fu_2008_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_245_fu_1701_p0() {
    mul_ln1118_245_fu_1701_p0 =  (sc_lv<16>) (sext_ln1118_180_fu_2781046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_245_fu_1701_p2() {
    mul_ln1118_245_fu_1701_p2 = (!mul_ln1118_245_fu_1701_p0.read().is_01() || !ap_const_lv24_FFFF1D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_245_fu_1701_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_246_fu_1394_p0() {
    mul_ln1118_246_fu_1394_p0 =  (sc_lv<16>) (sext_ln1118_180_fu_2781046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_246_fu_1394_p2() {
    mul_ln1118_246_fu_1394_p2 = (!mul_ln1118_246_fu_1394_p0.read().is_01() || !ap_const_lv24_FFFF53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_246_fu_1394_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_247_fu_2011_p0() {
    mul_ln1118_247_fu_2011_p0 =  (sc_lv<16>) (sext_ln1118_181_fu_2781059_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_247_fu_2011_p2() {
    mul_ln1118_247_fu_2011_p2 = (!mul_ln1118_247_fu_2011_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_247_fu_2011_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_248_fu_1473_p0() {
    mul_ln1118_248_fu_1473_p0 =  (sc_lv<16>) (sext_ln1118_181_fu_2781059_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_248_fu_1473_p2() {
    mul_ln1118_248_fu_1473_p2 = (!mul_ln1118_248_fu_1473_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_248_fu_1473_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_249_fu_1859_p0() {
    mul_ln1118_249_fu_1859_p0 =  (sc_lv<16>) (sext_ln1118_180_fu_2781046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_249_fu_1859_p2() {
    mul_ln1118_249_fu_1859_p2 = (!mul_ln1118_249_fu_1859_p0.read().is_01() || !ap_const_lv24_FFFF47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_249_fu_1859_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_24_fu_1959_p0() {
    mul_ln1118_24_fu_1959_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2775333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_24_fu_1959_p2() {
    mul_ln1118_24_fu_1959_p2 = (!mul_ln1118_24_fu_1959_p0.read().is_01() || !ap_const_lv24_FFFF76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_24_fu_1959_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_250_fu_2014_p0() {
    mul_ln1118_250_fu_2014_p0 =  (sc_lv<16>) (sext_ln1118_180_fu_2781046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_250_fu_2014_p2() {
    mul_ln1118_250_fu_2014_p2 = (!mul_ln1118_250_fu_2014_p0.read().is_01() || !ap_const_lv24_83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_250_fu_2014_p0.read()) * sc_biguint<24>(ap_const_lv24_83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_251_fu_2169_p0() {
    mul_ln1118_251_fu_2169_p0 = sext_ln1118_179_fu_2781041_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_251_fu_2169_p2() {
    mul_ln1118_251_fu_2169_p2 = (!mul_ln1118_251_fu_2169_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_251_fu_2169_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_252_fu_1400_p0() {
    mul_ln1118_252_fu_1400_p0 =  (sc_lv<16>) (sext_ln1118_180_fu_2781046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_252_fu_1400_p2() {
    mul_ln1118_252_fu_1400_p2 = (!mul_ln1118_252_fu_1400_p0.read().is_01() || !ap_const_lv24_FFFF32.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_252_fu_1400_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_253_fu_2017_p0() {
    mul_ln1118_253_fu_2017_p0 =  (sc_lv<16>) (sext_ln1118_181_fu_2781059_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_253_fu_2017_p2() {
    mul_ln1118_253_fu_2017_p2 = (!mul_ln1118_253_fu_2017_p0.read().is_01() || !ap_const_lv23_33.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_253_fu_2017_p0.read()) * sc_biguint<23>(ap_const_lv23_33);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_254_fu_1710_p0() {
    mul_ln1118_254_fu_1710_p0 =  (sc_lv<16>) (sext_ln1118_180_fu_2781046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_254_fu_1710_p2() {
    mul_ln1118_254_fu_1710_p2 = (!mul_ln1118_254_fu_1710_p0.read().is_01() || !ap_const_lv24_FFFF9A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_254_fu_1710_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_255_fu_1865_p0() {
    mul_ln1118_255_fu_1865_p0 =  (sc_lv<16>) (sext_ln1118_180_fu_2781046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_255_fu_1865_p2() {
    mul_ln1118_255_fu_1865_p2 = (!mul_ln1118_255_fu_1865_p0.read().is_01() || !ap_const_lv24_FFFFA8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_255_fu_1865_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_256_fu_1789_p0() {
    mul_ln1118_256_fu_1789_p0 =  (sc_lv<16>) (sext_ln1118_180_fu_2781046_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_256_fu_1789_p2() {
    mul_ln1118_256_fu_1789_p2 = (!mul_ln1118_256_fu_1789_p0.read().is_01() || !ap_const_lv24_FFFFAB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_256_fu_1789_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_257_fu_1657_p0() {
    mul_ln1118_257_fu_1657_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_2781382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_257_fu_1657_p2() {
    mul_ln1118_257_fu_1657_p2 = (!mul_ln1118_257_fu_1657_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_257_fu_1657_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_258_fu_1638_p0() {
    mul_ln1118_258_fu_1638_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_2781382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_258_fu_1638_p2() {
    mul_ln1118_258_fu_1638_p2 = (!mul_ln1118_258_fu_1638_p0.read().is_01() || !ap_const_lv24_FFFF57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_258_fu_1638_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_259_fu_1619_p0() {
    mul_ln1118_259_fu_1619_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_2781382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_259_fu_1619_p2() {
    mul_ln1118_259_fu_1619_p2 = (!mul_ln1118_259_fu_1619_p0.read().is_01() || !ap_const_lv24_AF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_259_fu_1619_p0.read()) * sc_biguint<24>(ap_const_lv24_AF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_25_fu_1652_p0() {
    mul_ln1118_25_fu_1652_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2775333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_25_fu_1652_p2() {
    mul_ln1118_25_fu_1652_p2 = (!mul_ln1118_25_fu_1652_p0.read().is_01() || !ap_const_lv24_5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_25_fu_1652_p0.read()) * sc_biguint<24>(ap_const_lv24_5E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_260_fu_1640_p0() {
    mul_ln1118_260_fu_1640_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_2781382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_260_fu_1640_p2() {
    mul_ln1118_260_fu_1640_p2 = (!mul_ln1118_260_fu_1640_p0.read().is_01() || !ap_const_lv24_FFFF77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_260_fu_1640_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_261_fu_1641_p0() {
    mul_ln1118_261_fu_1641_p0 =  (sc_lv<16>) (sext_ln1118_191_fu_2781402_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_261_fu_1641_p2() {
    mul_ln1118_261_fu_1641_p2 = (!mul_ln1118_261_fu_1641_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_261_fu_1641_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_262_fu_1622_p0() {
    mul_ln1118_262_fu_1622_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_2781382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_262_fu_1622_p2() {
    mul_ln1118_262_fu_1622_p2 = (!mul_ln1118_262_fu_1622_p0.read().is_01() || !ap_const_lv24_65.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_262_fu_1622_p0.read()) * sc_biguint<24>(ap_const_lv24_65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_263_fu_1623_p0() {
    mul_ln1118_263_fu_1623_p0 =  (sc_lv<16>) (sext_ln1118_190_fu_2781397_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_263_fu_1623_p2() {
    mul_ln1118_263_fu_1623_p2 = (!mul_ln1118_263_fu_1623_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_263_fu_1623_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_264_fu_1624_p0() {
    mul_ln1118_264_fu_1624_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_2781382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_264_fu_1624_p2() {
    mul_ln1118_264_fu_1624_p2 = (!mul_ln1118_264_fu_1624_p0.read().is_01() || !ap_const_lv24_FFFFAA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_264_fu_1624_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_265_fu_1645_p0() {
    mul_ln1118_265_fu_1645_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_2781382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_265_fu_1645_p2() {
    mul_ln1118_265_fu_1645_p2 = (!mul_ln1118_265_fu_1645_p0.read().is_01() || !ap_const_lv24_FFFDFD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_265_fu_1645_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDFD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_266_fu_1646_p0() {
    mul_ln1118_266_fu_1646_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_2781382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_266_fu_1646_p2() {
    mul_ln1118_266_fu_1646_p2 = (!mul_ln1118_266_fu_1646_p0.read().is_01() || !ap_const_lv24_BA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_266_fu_1646_p0.read()) * sc_biguint<24>(ap_const_lv24_BA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_267_fu_1647_p0() {
    mul_ln1118_267_fu_1647_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_2781382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_267_fu_1647_p2() {
    mul_ln1118_267_fu_1647_p2 = (!mul_ln1118_267_fu_1647_p0.read().is_01() || !ap_const_lv24_FB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_267_fu_1647_p0.read()) * sc_biguint<24>(ap_const_lv24_FB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_268_fu_1668_p0() {
    mul_ln1118_268_fu_1668_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_2781382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_268_fu_1668_p2() {
    mul_ln1118_268_fu_1668_p2 = (!mul_ln1118_268_fu_1668_p0.read().is_01() || !ap_const_lv24_FFFEA0.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_268_fu_1668_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEA0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_269_fu_1569_p0() {
    mul_ln1118_269_fu_1569_p0 =  (sc_lv<16>) (sext_ln1118_189_fu_2781382_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_269_fu_1569_p2() {
    mul_ln1118_269_fu_1569_p2 = (!mul_ln1118_269_fu_1569_p0.read().is_01() || !ap_const_lv24_FFFF53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_269_fu_1569_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_26_fu_2038_p0() {
    mul_ln1118_26_fu_2038_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2775333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_26_fu_2038_p2() {
    mul_ln1118_26_fu_2038_p2 = (!mul_ln1118_26_fu_2038_p0.read().is_01() || !ap_const_lv24_79.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_26_fu_2038_p0.read()) * sc_biguint<24>(ap_const_lv24_79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_270_fu_1670_p0() {
    mul_ln1118_270_fu_1670_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_270_fu_1670_p2() {
    mul_ln1118_270_fu_1670_p2 = (!mul_ln1118_270_fu_1670_p0.read().is_01() || !ap_const_lv24_FFFF19.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_270_fu_1670_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_271_fu_1277_p0() {
    mul_ln1118_271_fu_1277_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_2781761_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_271_fu_1277_p2() {
    mul_ln1118_271_fu_1277_p2 = (!mul_ln1118_271_fu_1277_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_271_fu_1277_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_272_fu_1756_p0() {
    mul_ln1118_272_fu_1756_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_272_fu_1756_p2() {
    mul_ln1118_272_fu_1756_p2 = (!mul_ln1118_272_fu_1756_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_272_fu_1756_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_273_fu_2142_p0() {
    mul_ln1118_273_fu_2142_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_273_fu_2142_p2() {
    mul_ln1118_273_fu_2142_p2 = (!mul_ln1118_273_fu_2142_p0.read().is_01() || !ap_const_lv24_FFFF89.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_273_fu_2142_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF89);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_274_fu_2066_p0() {
    mul_ln1118_274_fu_2066_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_274_fu_2066_p2() {
    mul_ln1118_274_fu_2066_p2 = (!mul_ln1118_274_fu_2066_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_274_fu_2066_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_275_fu_1557_p0() {
    mul_ln1118_275_fu_1557_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_275_fu_1557_p2() {
    mul_ln1118_275_fu_1557_p2 = (!mul_ln1118_275_fu_1557_p0.read().is_01() || !ap_const_lv24_D3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_275_fu_1557_p0.read()) * sc_biguint<24>(ap_const_lv24_D3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_276_fu_1683_p0() {
    mul_ln1118_276_fu_1683_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_276_fu_1683_p2() {
    mul_ln1118_276_fu_1683_p2 = (!mul_ln1118_276_fu_1683_p0.read().is_01() || !ap_const_lv24_FFFFA6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_276_fu_1683_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_277_fu_1607_p0() {
    mul_ln1118_277_fu_1607_p0 =  (sc_lv<16>) (sext_ln1118_199_fu_2781755_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_277_fu_1607_p2() {
    mul_ln1118_277_fu_1607_p2 = (!mul_ln1118_277_fu_1607_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_277_fu_1607_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_278_fu_1300_p0() {
    mul_ln1118_278_fu_1300_p0 =  (sc_lv<16>) (sext_ln1118_199_fu_2781755_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_278_fu_1300_p2() {
    mul_ln1118_278_fu_1300_p2 = (!mul_ln1118_278_fu_1300_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_278_fu_1300_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_279_fu_2148_p0() {
    mul_ln1118_279_fu_2148_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_279_fu_2148_p2() {
    mul_ln1118_279_fu_2148_p2 = (!mul_ln1118_279_fu_2148_p0.read().is_01() || !ap_const_lv24_12F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_279_fu_2148_p0.read()) * sc_biguint<24>(ap_const_lv24_12F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_27_fu_1731_p0() {
    mul_ln1118_27_fu_1731_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2775333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_27_fu_1731_p2() {
    mul_ln1118_27_fu_1731_p2 = (!mul_ln1118_27_fu_1731_p0.read().is_01() || !ap_const_lv24_FA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_27_fu_1731_p0.read()) * sc_biguint<24>(ap_const_lv24_FA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_280_fu_2072_p0() {
    mul_ln1118_280_fu_2072_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_280_fu_2072_p2() {
    mul_ln1118_280_fu_2072_p2 = (!mul_ln1118_280_fu_2072_p0.read().is_01() || !ap_const_lv24_FFFFAA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_280_fu_2072_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_281_fu_1303_p0() {
    mul_ln1118_281_fu_1303_p0 =  (sc_lv<16>) (sext_ln1118_200_fu_2781761_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_281_fu_1303_p2() {
    mul_ln1118_281_fu_1303_p2 = (!mul_ln1118_281_fu_1303_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_281_fu_1303_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_282_fu_2180_p0() {
    mul_ln1118_282_fu_2180_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_282_fu_2180_p2() {
    mul_ln1118_282_fu_2180_p2 = (!mul_ln1118_282_fu_2180_p0.read().is_01() || !ap_const_lv24_66.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_282_fu_2180_p0.read()) * sc_biguint<24>(ap_const_lv24_66);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_283_fu_1613_p0() {
    mul_ln1118_283_fu_1613_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_283_fu_1613_p2() {
    mul_ln1118_283_fu_1613_p2 = (!mul_ln1118_283_fu_1613_p0.read().is_01() || !ap_const_lv24_FFFF25.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_283_fu_1613_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_284_fu_2129_p0() {
    mul_ln1118_284_fu_2129_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_284_fu_2129_p2() {
    mul_ln1118_284_fu_2129_p2 = (!mul_ln1118_284_fu_2129_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_284_fu_2129_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_285_fu_2097_p0() {
    mul_ln1118_285_fu_2097_p0 =  (sc_lv<16>) (sext_ln1118_198_fu_2781739_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_285_fu_2097_p2() {
    mul_ln1118_285_fu_2097_p2 = (!mul_ln1118_285_fu_2097_p0.read().is_01() || !ap_const_lv24_FFFFA5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_285_fu_2097_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_286_fu_2058_p0() {
    mul_ln1118_286_fu_2058_p0 =  (sc_lv<16>) (sext_ln1118_209_fu_2782105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_286_fu_2058_p2() {
    mul_ln1118_286_fu_2058_p2 = (!mul_ln1118_286_fu_2058_p0.read().is_01() || !ap_const_lv24_FFFF5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_286_fu_2058_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_287_fu_1779_p0() {
    mul_ln1118_287_fu_1779_p0 =  (sc_lv<16>) (sext_ln1118_212_fu_2782128_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_287_fu_1779_p2() {
    mul_ln1118_287_fu_1779_p2 = (!mul_ln1118_287_fu_1779_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_287_fu_1779_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_288_fu_2040_p0() {
    mul_ln1118_288_fu_2040_p0 =  (sc_lv<16>) (sext_ln1118_209_fu_2782105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_288_fu_2040_p2() {
    mul_ln1118_288_fu_2040_p2 = (!mul_ln1118_288_fu_2040_p0.read().is_01() || !ap_const_lv24_FFFF2D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_288_fu_2040_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_289_fu_2061_p0() {
    mul_ln1118_289_fu_2061_p0 =  (sc_lv<16>) (sext_ln1118_209_fu_2782105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_289_fu_2061_p2() {
    mul_ln1118_289_fu_2061_p2 = (!mul_ln1118_289_fu_2061_p0.read().is_01() || !ap_const_lv24_83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_289_fu_2061_p0.read()) * sc_biguint<24>(ap_const_lv24_83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_28_fu_1886_p0() {
    mul_ln1118_28_fu_1886_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2775333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_28_fu_1886_p2() {
    mul_ln1118_28_fu_1886_p2 = (!mul_ln1118_28_fu_1886_p0.read().is_01() || !ap_const_lv24_B0.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_28_fu_1886_p0.read()) * sc_biguint<24>(ap_const_lv24_B0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_290_fu_2102_p0() {
    mul_ln1118_290_fu_2102_p0 =  (sc_lv<16>) (sext_ln1118_209_fu_2782105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_290_fu_2102_p2() {
    mul_ln1118_290_fu_2102_p2 = (!mul_ln1118_290_fu_2102_p0.read().is_01() || !ap_const_lv24_FFFF73.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_290_fu_2102_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF73);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_291_fu_2103_p0() {
    mul_ln1118_291_fu_2103_p0 =  (sc_lv<16>) (sext_ln1118_209_fu_2782105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_291_fu_2103_p2() {
    mul_ln1118_291_fu_2103_p2 = (!mul_ln1118_291_fu_2103_p0.read().is_01() || !ap_const_lv24_FFFF23.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_291_fu_2103_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_292_fu_1944_p0() {
    mul_ln1118_292_fu_1944_p0 =  (sc_lv<16>) (sext_ln1118_209_fu_2782105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_292_fu_1944_p2() {
    mul_ln1118_292_fu_1944_p2 = (!mul_ln1118_292_fu_1944_p0.read().is_01() || !ap_const_lv24_133.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_292_fu_1944_p0.read()) * sc_biguint<24>(ap_const_lv24_133);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_293_fu_2085_p0() {
    mul_ln1118_293_fu_2085_p0 =  (sc_lv<16>) (sext_ln1118_209_fu_2782105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_293_fu_2085_p2() {
    mul_ln1118_293_fu_2085_p2 = (!mul_ln1118_293_fu_2085_p0.read().is_01() || !ap_const_lv24_7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_293_fu_2085_p0.read()) * sc_biguint<24>(ap_const_lv24_7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_294_fu_2086_p0() {
    mul_ln1118_294_fu_2086_p0 =  (sc_lv<16>) (sext_ln1118_209_fu_2782105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_294_fu_2086_p2() {
    mul_ln1118_294_fu_2086_p2 = (!mul_ln1118_294_fu_2086_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_294_fu_2086_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_295_fu_2067_p0() {
    mul_ln1118_295_fu_2067_p0 =  (sc_lv<16>) (sext_ln1118_209_fu_2782105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_295_fu_2067_p2() {
    mul_ln1118_295_fu_2067_p2 = (!mul_ln1118_295_fu_2067_p0.read().is_01() || !ap_const_lv24_FFFF35.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_295_fu_2067_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_296_fu_2108_p0() {
    mul_ln1118_296_fu_2108_p0 =  (sc_lv<16>) (sext_ln1118_212_fu_2782128_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_296_fu_2108_p2() {
    mul_ln1118_296_fu_2108_p2 = (!mul_ln1118_296_fu_2108_p0.read().is_01() || !ap_const_lv23_29.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_296_fu_2108_p0.read()) * sc_biguint<23>(ap_const_lv23_29);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_297_fu_1989_p0() {
    mul_ln1118_297_fu_1989_p0 =  (sc_lv<16>) (sext_ln1118_209_fu_2782105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_297_fu_1989_p2() {
    mul_ln1118_297_fu_1989_p2 = (!mul_ln1118_297_fu_1989_p0.read().is_01() || !ap_const_lv24_A7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_297_fu_1989_p0.read()) * sc_biguint<24>(ap_const_lv24_A7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_298_fu_2130_p0() {
    mul_ln1118_298_fu_2130_p0 = sext_ln1118_210_fu_2782119_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_298_fu_2130_p2() {
    mul_ln1118_298_fu_2130_p2 = (!mul_ln1118_298_fu_2130_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_298_fu_2130_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_299_fu_1596_p0() {
    mul_ln1118_299_fu_1596_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_2782504_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_299_fu_1596_p2() {
    mul_ln1118_299_fu_1596_p2 = (!mul_ln1118_299_fu_1596_p0.read().is_01() || !ap_const_lv24_FFFDE6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_299_fu_1596_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_29_fu_1810_p0() {
    mul_ln1118_29_fu_1810_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2775333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_29_fu_1810_p2() {
    mul_ln1118_29_fu_1810_p2 = (!mul_ln1118_29_fu_1810_p0.read().is_01() || !ap_const_lv24_87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_29_fu_1810_p0.read()) * sc_biguint<24>(ap_const_lv24_87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_300_fu_1836_p0() {
    mul_ln1118_300_fu_1836_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_2782504_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_300_fu_1836_p2() {
    mul_ln1118_300_fu_1836_p2 = (!mul_ln1118_300_fu_1836_p0.read().is_01() || !ap_const_lv24_FFFF1D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_300_fu_1836_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_301_fu_1760_p0() {
    mul_ln1118_301_fu_1760_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_2782504_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_301_fu_1760_p2() {
    mul_ln1118_301_fu_1760_p2 = (!mul_ln1118_301_fu_1760_p0.read().is_01() || !ap_const_lv24_A9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_301_fu_1760_p0.read()) * sc_biguint<24>(ap_const_lv24_A9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_302_fu_1684_p0() {
    mul_ln1118_302_fu_1684_p0 =  (sc_lv<16>) (sext_ln1118_222_fu_2782518_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_302_fu_1684_p2() {
    mul_ln1118_302_fu_1684_p2 = (!mul_ln1118_302_fu_1684_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_302_fu_1684_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_303_fu_1839_p0() {
    mul_ln1118_303_fu_1839_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_2782504_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_303_fu_1839_p2() {
    mul_ln1118_303_fu_1839_p2 = (!mul_ln1118_303_fu_1839_p0.read().is_01() || !ap_const_lv24_FFFF91.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_303_fu_1839_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF91);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_304_fu_1994_p0() {
    mul_ln1118_304_fu_1994_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_2782504_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_304_fu_1994_p2() {
    mul_ln1118_304_fu_1994_p2 = (!mul_ln1118_304_fu_1994_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_304_fu_1994_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_305_fu_1918_p0() {
    mul_ln1118_305_fu_1918_p0 =  (sc_lv<16>) (sext_ln1118_222_fu_2782518_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_305_fu_1918_p2() {
    mul_ln1118_305_fu_1918_p2 = (!mul_ln1118_305_fu_1918_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_305_fu_1918_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_306_fu_1380_p0() {
    mul_ln1118_306_fu_1380_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_2782504_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_306_fu_1380_p2() {
    mul_ln1118_306_fu_1380_p2 = (!mul_ln1118_306_fu_1380_p0.read().is_01() || !ap_const_lv24_FFFF0B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_306_fu_1380_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF0B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_307_fu_1766_p0() {
    mul_ln1118_307_fu_1766_p0 =  (sc_lv<16>) (sext_ln1118_222_fu_2782518_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_307_fu_1766_p2() {
    mul_ln1118_307_fu_1766_p2 = (!mul_ln1118_307_fu_1766_p0.read().is_01() || !ap_const_lv23_3B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_307_fu_1766_p0.read()) * sc_biguint<23>(ap_const_lv23_3B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_308_fu_1690_p0() {
    mul_ln1118_308_fu_1690_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_2782504_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_308_fu_1690_p2() {
    mul_ln1118_308_fu_1690_p2 = (!mul_ln1118_308_fu_1690_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_308_fu_1690_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_309_fu_2076_p0() {
    mul_ln1118_309_fu_2076_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_2782504_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_309_fu_2076_p2() {
    mul_ln1118_309_fu_2076_p2 = (!mul_ln1118_309_fu_2076_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_309_fu_2076_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_30_fu_1272_p0() {
    mul_ln1118_30_fu_1272_p0 =  (sc_lv<16>) (sext_ln1118_21_fu_2775348_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_30_fu_1272_p2() {
    mul_ln1118_30_fu_1272_p2 = (!mul_ln1118_30_fu_1272_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_30_fu_1272_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_310_fu_1307_p0() {
    mul_ln1118_310_fu_1307_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_2782504_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_310_fu_1307_p2() {
    mul_ln1118_310_fu_1307_p2 = (!mul_ln1118_310_fu_1307_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_310_fu_1307_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_311_fu_1462_p0() {
    mul_ln1118_311_fu_1462_p0 = sext_ln1118_223_fu_2782525_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_311_fu_1462_p2() {
    mul_ln1118_311_fu_1462_p2 = (!mul_ln1118_311_fu_1462_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_311_fu_1462_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_312_fu_1617_p0() {
    mul_ln1118_312_fu_1617_p0 =  (sc_lv<16>) (sext_ln1118_221_fu_2782504_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_312_fu_1617_p2() {
    mul_ln1118_312_fu_1617_p2 = (!mul_ln1118_312_fu_1617_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_312_fu_1617_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_313_fu_1541_p0() {
    mul_ln1118_313_fu_1541_p0 = sext_ln1118_235_fu_2782908_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_313_fu_1541_p2() {
    mul_ln1118_313_fu_1541_p2 = (!mul_ln1118_313_fu_1541_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_313_fu_1541_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_314_fu_1537_p0() {
    mul_ln1118_314_fu_1537_p0 =  (sc_lv<16>) (sext_ln1118_233_fu_2782897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_314_fu_1537_p2() {
    mul_ln1118_314_fu_1537_p2 = (!mul_ln1118_314_fu_1537_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_314_fu_1537_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_315_fu_1478_p0() {
    mul_ln1118_315_fu_1478_p0 =  (sc_lv<16>) (sext_ln1118_232_fu_2782884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_315_fu_1478_p2() {
    mul_ln1118_315_fu_1478_p2 = (!mul_ln1118_315_fu_1478_p0.read().is_01() || !ap_const_lv24_FFFF56.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_315_fu_1478_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF56);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_316_fu_1539_p0() {
    mul_ln1118_316_fu_1539_p0 =  (sc_lv<16>) (sext_ln1118_232_fu_2782884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_316_fu_1539_p2() {
    mul_ln1118_316_fu_1539_p2 = (!mul_ln1118_316_fu_1539_p0.read().is_01() || !ap_const_lv24_FFFF94.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_316_fu_1539_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_317_fu_1560_p0() {
    mul_ln1118_317_fu_1560_p0 =  (sc_lv<16>) (sext_ln1118_232_fu_2782884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_317_fu_1560_p2() {
    mul_ln1118_317_fu_1560_p2 = (!mul_ln1118_317_fu_1560_p0.read().is_01() || !ap_const_lv24_FFFF8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_317_fu_1560_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_318_fu_1679_p0() {
    mul_ln1118_318_fu_1679_p0 =  (sc_lv<16>) (sext_ln1118_232_fu_2782884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_318_fu_1679_p2() {
    mul_ln1118_318_fu_1679_p2 = (!mul_ln1118_318_fu_1679_p0.read().is_01() || !ap_const_lv24_65.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_318_fu_1679_p0.read()) * sc_biguint<24>(ap_const_lv24_65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_319_fu_1542_p0() {
    mul_ln1118_319_fu_1542_p0 =  (sc_lv<16>) (sext_ln1118_232_fu_2782884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_319_fu_1542_p2() {
    mul_ln1118_319_fu_1542_p2 = (!mul_ln1118_319_fu_1542_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_319_fu_1542_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_31_fu_1719_p0() {
    mul_ln1118_31_fu_1719_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2775333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_31_fu_1719_p2() {
    mul_ln1118_31_fu_1719_p2 = (!mul_ln1118_31_fu_1719_p0.read().is_01() || !ap_const_lv24_FFFFBD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_31_fu_1719_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_320_fu_1543_p0() {
    mul_ln1118_320_fu_1543_p0 =  (sc_lv<16>) (sext_ln1118_232_fu_2782884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_320_fu_1543_p2() {
    mul_ln1118_320_fu_1543_p2 = (!mul_ln1118_320_fu_1543_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_320_fu_1543_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_321_fu_1444_p0() {
    mul_ln1118_321_fu_1444_p0 =  (sc_lv<16>) (sext_ln1118_233_fu_2782897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_321_fu_1444_p2() {
    mul_ln1118_321_fu_1444_p2 = (!mul_ln1118_321_fu_1444_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_321_fu_1444_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_322_fu_1545_p0() {
    mul_ln1118_322_fu_1545_p0 =  (sc_lv<16>) (sext_ln1118_232_fu_2782884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_322_fu_1545_p2() {
    mul_ln1118_322_fu_1545_p2 = (!mul_ln1118_322_fu_1545_p0.read().is_01() || !ap_const_lv24_FFFF68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_322_fu_1545_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_323_fu_1566_p0() {
    mul_ln1118_323_fu_1566_p0 =  (sc_lv<16>) (sext_ln1118_233_fu_2782897_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_323_fu_1566_p2() {
    mul_ln1118_323_fu_1566_p2 = (!mul_ln1118_323_fu_1566_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_323_fu_1566_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_324_fu_1567_p0() {
    mul_ln1118_324_fu_1567_p0 =  (sc_lv<16>) (sext_ln1118_232_fu_2782884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_324_fu_1567_p2() {
    mul_ln1118_324_fu_1567_p2 = (!mul_ln1118_324_fu_1567_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_324_fu_1567_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_325_fu_1568_p0() {
    mul_ln1118_325_fu_1568_p0 =  (sc_lv<16>) (sext_ln1118_232_fu_2782884_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_325_fu_1568_p2() {
    mul_ln1118_325_fu_1568_p2 = (!mul_ln1118_325_fu_1568_p0.read().is_01() || !ap_const_lv24_FFFF67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_325_fu_1568_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_326_fu_1589_p0() {
    mul_ln1118_326_fu_1589_p0 =  (sc_lv<16>) (sext_ln1118_244_fu_2783277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_326_fu_1589_p2() {
    mul_ln1118_326_fu_1589_p2 = (!mul_ln1118_326_fu_1589_p0.read().is_01() || !ap_const_lv24_FFFE11.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_326_fu_1589_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE11);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_327_fu_1915_p0() {
    mul_ln1118_327_fu_1915_p0 =  (sc_lv<16>) (sext_ln1118_244_fu_2783277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_327_fu_1915_p2() {
    mul_ln1118_327_fu_1915_p2 = (!mul_ln1118_327_fu_1915_p0.read().is_01() || !ap_const_lv24_A7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_327_fu_1915_p0.read()) * sc_biguint<24>(ap_const_lv24_A7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_328_fu_2147_p0() {
    mul_ln1118_328_fu_2147_p0 =  (sc_lv<16>) (sext_ln1118_244_fu_2783277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_328_fu_2147_p2() {
    mul_ln1118_328_fu_2147_p2 = (!mul_ln1118_328_fu_2147_p0.read().is_01() || !ap_const_lv24_115.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_328_fu_2147_p0.read()) * sc_biguint<24>(ap_const_lv24_115);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_329_fu_1739_p0() {
    mul_ln1118_329_fu_1739_p0 =  (sc_lv<16>) (sext_ln1118_244_fu_2783277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_329_fu_1739_p2() {
    mul_ln1118_329_fu_1739_p2 = (!mul_ln1118_329_fu_1739_p0.read().is_01() || !ap_const_lv24_CC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_329_fu_1739_p0.read()) * sc_biguint<24>(ap_const_lv24_CC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_32_fu_2080_p0() {
    mul_ln1118_32_fu_2080_p0 =  (sc_lv<16>) (sext_ln1118_20_fu_2775333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_32_fu_2080_p2() {
    mul_ln1118_32_fu_2080_p2 = (!mul_ln1118_32_fu_2080_p0.read().is_01() || !ap_const_lv24_CC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_32_fu_2080_p0.read()) * sc_biguint<24>(ap_const_lv24_CC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_330_fu_1764_p0() {
    mul_ln1118_330_fu_1764_p0 =  (sc_lv<16>) (sext_ln1118_245_fu_2783292_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_330_fu_1764_p2() {
    mul_ln1118_330_fu_1764_p2 = (!mul_ln1118_330_fu_1764_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_330_fu_1764_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_331_fu_1457_p0() {
    mul_ln1118_331_fu_1457_p0 =  (sc_lv<16>) (sext_ln1118_245_fu_2783292_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_331_fu_1457_p2() {
    mul_ln1118_331_fu_1457_p2 = (!mul_ln1118_331_fu_1457_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_331_fu_1457_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_332_fu_2074_p0() {
    mul_ln1118_332_fu_2074_p0 =  (sc_lv<16>) (sext_ln1118_244_fu_2783277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_332_fu_2074_p2() {
    mul_ln1118_332_fu_2074_p2 = (!mul_ln1118_332_fu_2074_p0.read().is_01() || !ap_const_lv24_FFFF2E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_332_fu_2074_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_333_fu_1536_p0() {
    mul_ln1118_333_fu_1536_p0 =  (sc_lv<16>) (sext_ln1118_244_fu_2783277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_333_fu_1536_p2() {
    mul_ln1118_333_fu_1536_p2 = (!mul_ln1118_333_fu_1536_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_333_fu_1536_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_334_fu_1922_p0() {
    mul_ln1118_334_fu_1922_p0 =  (sc_lv<16>) (sext_ln1118_244_fu_2783277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_334_fu_1922_p2() {
    mul_ln1118_334_fu_1922_p2 = (!mul_ln1118_334_fu_1922_p0.read().is_01() || !ap_const_lv24_DD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_334_fu_1922_p0.read()) * sc_biguint<24>(ap_const_lv24_DD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_335_fu_1384_p0() {
    mul_ln1118_335_fu_1384_p0 =  (sc_lv<16>) (sext_ln1118_244_fu_2783277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_335_fu_1384_p2() {
    mul_ln1118_335_fu_1384_p2 = (!mul_ln1118_335_fu_1384_p0.read().is_01() || !ap_const_lv24_FFFF9A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_335_fu_1384_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_336_fu_1770_p0() {
    mul_ln1118_336_fu_1770_p0 =  (sc_lv<16>) (sext_ln1118_244_fu_2783277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_336_fu_1770_p2() {
    mul_ln1118_336_fu_1770_p2 = (!mul_ln1118_336_fu_1770_p0.read().is_01() || !ap_const_lv24_74.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_336_fu_1770_p0.read()) * sc_biguint<24>(ap_const_lv24_74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_337_fu_2156_p0() {
    mul_ln1118_337_fu_2156_p0 =  (sc_lv<16>) (sext_ln1118_244_fu_2783277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_337_fu_2156_p2() {
    mul_ln1118_337_fu_2156_p2 = (!mul_ln1118_337_fu_2156_p0.read().is_01() || !ap_const_lv24_FFFF5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_337_fu_2156_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_338_fu_1618_p0() {
    mul_ln1118_338_fu_1618_p0 =  (sc_lv<16>) (sext_ln1118_244_fu_2783277_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_338_fu_1618_p2() {
    mul_ln1118_338_fu_1618_p2 = (!mul_ln1118_338_fu_1618_p0.read().is_01() || !ap_const_lv24_FFFFA5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_338_fu_1618_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_339_fu_1773_p0() {
    mul_ln1118_339_fu_1773_p0 =  (sc_lv<16>) (sext_ln1118_254_fu_2783662_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_339_fu_1773_p2() {
    mul_ln1118_339_fu_1773_p2 = (!mul_ln1118_339_fu_1773_p0.read().is_01() || !ap_const_lv24_FFFF2F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_339_fu_1773_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_33_fu_2101_p0() {
    mul_ln1118_33_fu_2101_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_33_fu_2101_p2() {
    mul_ln1118_33_fu_2101_p2 = (!mul_ln1118_33_fu_2101_p0.read().is_01() || !ap_const_lv24_B3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_33_fu_2101_p0.read()) * sc_biguint<24>(ap_const_lv24_B3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_340_fu_1928_p0() {
    mul_ln1118_340_fu_1928_p0 =  (sc_lv<16>) (sext_ln1118_254_fu_2783662_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_340_fu_1928_p2() {
    mul_ln1118_340_fu_1928_p2 = (!mul_ln1118_340_fu_1928_p0.read().is_01() || !ap_const_lv24_86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_340_fu_1928_p0.read()) * sc_biguint<24>(ap_const_lv24_86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_341_fu_2083_p0() {
    mul_ln1118_341_fu_2083_p0 =  (sc_lv<16>) (sext_ln1118_254_fu_2783662_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_341_fu_2083_p2() {
    mul_ln1118_341_fu_2083_p2 = (!mul_ln1118_341_fu_2083_p0.read().is_01() || !ap_const_lv24_CF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_341_fu_2083_p0.read()) * sc_biguint<24>(ap_const_lv24_CF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_342_fu_2037_p0() {
    mul_ln1118_342_fu_2037_p0 =  (sc_lv<16>) (sext_ln1118_254_fu_2783662_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_342_fu_2037_p2() {
    mul_ln1118_342_fu_2037_p2 = (!mul_ln1118_342_fu_2037_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_342_fu_2037_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_343_fu_1998_p0() {
    mul_ln1118_343_fu_1998_p0 =  (sc_lv<16>) (sext_ln1118_254_fu_2783662_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_343_fu_1998_p2() {
    mul_ln1118_343_fu_1998_p2 = (!mul_ln1118_343_fu_1998_p0.read().is_01() || !ap_const_lv24_75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_343_fu_1998_p0.read()) * sc_biguint<24>(ap_const_lv24_75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_344_fu_2019_p0() {
    mul_ln1118_344_fu_2019_p0 =  (sc_lv<16>) (sext_ln1118_254_fu_2783662_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_344_fu_2019_p2() {
    mul_ln1118_344_fu_2019_p2 = (!mul_ln1118_344_fu_2019_p0.read().is_01() || !ap_const_lv24_FFFF86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_344_fu_2019_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_345_fu_2020_p0() {
    mul_ln1118_345_fu_2020_p0 =  (sc_lv<16>) (sext_ln1118_255_fu_2783676_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_345_fu_2020_p2() {
    mul_ln1118_345_fu_2020_p2 = (!mul_ln1118_345_fu_2020_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_345_fu_2020_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_346_fu_1961_p0() {
    mul_ln1118_346_fu_1961_p0 =  (sc_lv<16>) (sext_ln1118_254_fu_2783662_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_346_fu_1961_p2() {
    mul_ln1118_346_fu_1961_p2 = (!mul_ln1118_346_fu_1961_p0.read().is_01() || !ap_const_lv24_FFFF4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_346_fu_1961_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_347_fu_1902_p0() {
    mul_ln1118_347_fu_1902_p0 =  (sc_lv<16>) (sext_ln1118_254_fu_2783662_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_347_fu_1902_p2() {
    mul_ln1118_347_fu_1902_p2 = (!mul_ln1118_347_fu_1902_p0.read().is_01() || !ap_const_lv24_FFFF67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_347_fu_1902_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_348_fu_2043_p0() {
    mul_ln1118_348_fu_2043_p0 =  (sc_lv<16>) (sext_ln1118_254_fu_2783662_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_348_fu_2043_p2() {
    mul_ln1118_348_fu_2043_p2 = (!mul_ln1118_348_fu_2043_p0.read().is_01() || !ap_const_lv24_FFFFA9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_348_fu_2043_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_349_fu_1984_p0() {
    mul_ln1118_349_fu_1984_p0 =  (sc_lv<16>) (sext_ln1118_254_fu_2783662_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_349_fu_1984_p2() {
    mul_ln1118_349_fu_1984_p2 = (!mul_ln1118_349_fu_1984_p0.read().is_01() || !ap_const_lv24_61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_349_fu_1984_p0.read()) * sc_biguint<24>(ap_const_lv24_61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_34_fu_1862_p0() {
    mul_ln1118_34_fu_1862_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_34_fu_1862_p2() {
    mul_ln1118_34_fu_1862_p2 = (!mul_ln1118_34_fu_1862_p0.read().is_01() || !ap_const_lv24_DD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_34_fu_1862_p0.read()) * sc_biguint<24>(ap_const_lv24_DD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_350_fu_2025_p0() {
    mul_ln1118_350_fu_2025_p0 =  (sc_lv<16>) (sext_ln1118_255_fu_2783676_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_350_fu_2025_p2() {
    mul_ln1118_350_fu_2025_p2 = (!mul_ln1118_350_fu_2025_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_350_fu_2025_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_351_fu_1866_p0() {
    mul_ln1118_351_fu_1866_p0 =  (sc_lv<16>) (sext_ln1118_255_fu_2783676_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_351_fu_1866_p2() {
    mul_ln1118_351_fu_1866_p2 = (!mul_ln1118_351_fu_1866_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_351_fu_1866_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_352_fu_1927_p0() {
    mul_ln1118_352_fu_1927_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_2784005_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_352_fu_1927_p2() {
    mul_ln1118_352_fu_1927_p2 = (!mul_ln1118_352_fu_1927_p0.read().is_01() || !ap_const_lv24_FFFFAA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_352_fu_1927_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_353_fu_2028_p0() {
    mul_ln1118_353_fu_2028_p0 =  (sc_lv<16>) (sext_ln1118_264_fu_2784024_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_353_fu_2028_p2() {
    mul_ln1118_353_fu_2028_p2 = (!mul_ln1118_353_fu_2028_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_353_fu_2028_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_354_fu_2009_p0() {
    mul_ln1118_354_fu_2009_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_2784005_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_354_fu_2009_p2() {
    mul_ln1118_354_fu_2009_p2 = (!mul_ln1118_354_fu_2009_p0.read().is_01() || !ap_const_lv24_B3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_354_fu_2009_p0.read()) * sc_biguint<24>(ap_const_lv24_B3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_355_fu_1990_p0() {
    mul_ln1118_355_fu_1990_p0 =  (sc_lv<16>) (sext_ln1118_263_fu_2784018_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_355_fu_1990_p2() {
    mul_ln1118_355_fu_1990_p2 = (!mul_ln1118_355_fu_1990_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_355_fu_1990_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_356_fu_1534_p0() {
    mul_ln1118_356_fu_1534_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_2784005_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_356_fu_1534_p2() {
    mul_ln1118_356_fu_1534_p2 = (!mul_ln1118_356_fu_1534_p0.read().is_01() || !ap_const_lv24_FFFF3E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_356_fu_1534_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF3E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_357_fu_1458_p0() {
    mul_ln1118_357_fu_1458_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_2784005_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_357_fu_1458_p2() {
    mul_ln1118_357_fu_1458_p2 = (!mul_ln1118_357_fu_1458_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_357_fu_1458_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_358_fu_1844_p0() {
    mul_ln1118_358_fu_1844_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_2784005_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_358_fu_1844_p2() {
    mul_ln1118_358_fu_1844_p2 = (!mul_ln1118_358_fu_1844_p0.read().is_01() || !ap_const_lv24_FFFF56.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_358_fu_1844_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF56);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_359_fu_1306_p0() {
    mul_ln1118_359_fu_1306_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_2784005_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_359_fu_1306_p2() {
    mul_ln1118_359_fu_1306_p2 = (!mul_ln1118_359_fu_1306_p0.read().is_01() || !ap_const_lv24_FFFF1D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_359_fu_1306_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_35_fu_1943_p0() {
    mul_ln1118_35_fu_1943_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_35_fu_1943_p2() {
    mul_ln1118_35_fu_1943_p2 = (!mul_ln1118_35_fu_1943_p0.read().is_01() || !ap_const_lv24_AB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_35_fu_1943_p0.read()) * sc_biguint<24>(ap_const_lv24_AB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_360_fu_2154_p0() {
    mul_ln1118_360_fu_2154_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_2784005_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_360_fu_2154_p2() {
    mul_ln1118_360_fu_2154_p2 = (!mul_ln1118_360_fu_2154_p0.read().is_01() || !ap_const_lv24_94.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_360_fu_2154_p0.read()) * sc_biguint<24>(ap_const_lv24_94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_361_fu_2078_p0() {
    mul_ln1118_361_fu_2078_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_2784005_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_361_fu_2078_p2() {
    mul_ln1118_361_fu_2078_p2 = (!mul_ln1118_361_fu_2078_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_361_fu_2078_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_362_fu_1309_p0() {
    mul_ln1118_362_fu_1309_p0 =  (sc_lv<16>) (sext_ln1118_263_fu_2784018_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_362_fu_1309_p2() {
    mul_ln1118_362_fu_1309_p2 = (!mul_ln1118_362_fu_1309_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_362_fu_1309_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_363_fu_2157_p0() {
    mul_ln1118_363_fu_2157_p0 =  (sc_lv<16>) (sext_ln1118_262_fu_2784005_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_363_fu_2157_p2() {
    mul_ln1118_363_fu_2157_p2 = (!mul_ln1118_363_fu_2157_p0.read().is_01() || !ap_const_lv24_FFFF76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_363_fu_2157_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_364_fu_1388_p0() {
    mul_ln1118_364_fu_1388_p0 =  (sc_lv<16>) (sext_ln1118_264_fu_2784024_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_364_fu_1388_p2() {
    mul_ln1118_364_fu_1388_p2 = (!mul_ln1118_364_fu_1388_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_364_fu_1388_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_365_fu_1774_p0() {
    mul_ln1118_365_fu_1774_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2784364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_365_fu_1774_p2() {
    mul_ln1118_365_fu_1774_p2 = (!mul_ln1118_365_fu_1774_p0.read().is_01() || !ap_const_lv24_45.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_365_fu_1774_p0.read()) * sc_biguint<24>(ap_const_lv24_45);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_366_fu_2160_p0() {
    mul_ln1118_366_fu_2160_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2784364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_366_fu_2160_p2() {
    mul_ln1118_366_fu_2160_p2 = (!mul_ln1118_366_fu_2160_p0.read().is_01() || !ap_const_lv24_EF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_366_fu_2160_p0.read()) * sc_biguint<24>(ap_const_lv24_EF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_367_fu_1853_p0() {
    mul_ln1118_367_fu_1853_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2784364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_367_fu_1853_p2() {
    mul_ln1118_367_fu_1853_p2 = (!mul_ln1118_367_fu_1853_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_367_fu_1853_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_368_fu_1445_p0() {
    mul_ln1118_368_fu_1445_p0 = sext_ln1118_272_fu_2784379_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_368_fu_1445_p2() {
    mul_ln1118_368_fu_1445_p2 = (!mul_ln1118_368_fu_1445_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_368_fu_1445_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_369_fu_1932_p0() {
    mul_ln1118_369_fu_1932_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2784364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_369_fu_1932_p2() {
    mul_ln1118_369_fu_1932_p2 = (!mul_ln1118_369_fu_1932_p0.read().is_01() || !ap_const_lv24_68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_369_fu_1932_p0.read()) * sc_biguint<24>(ap_const_lv24_68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_36_fu_2064_p0() {
    mul_ln1118_36_fu_2064_p0 = sext_ln1118_34_fu_2775749_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_36_fu_2064_p2() {
    mul_ln1118_36_fu_2064_p2 = (!mul_ln1118_36_fu_2064_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_36_fu_2064_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_370_fu_1625_p0() {
    mul_ln1118_370_fu_1625_p0 = sext_ln1118_274_fu_2784388_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_370_fu_1625_p2() {
    mul_ln1118_370_fu_1625_p2 = (!mul_ln1118_370_fu_1625_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_370_fu_1625_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_371_fu_1477_p0() {
    mul_ln1118_371_fu_1477_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2784364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_371_fu_1477_p2() {
    mul_ln1118_371_fu_1477_p2 = (!mul_ln1118_371_fu_1477_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_371_fu_1477_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_372_fu_1498_p0() {
    mul_ln1118_372_fu_1498_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2784364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_372_fu_1498_p2() {
    mul_ln1118_372_fu_1498_p2 = (!mul_ln1118_372_fu_1498_p0.read().is_01() || !ap_const_lv24_FFFF1E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_372_fu_1498_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF1E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_373_fu_1459_p0() {
    mul_ln1118_373_fu_1459_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2784364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_373_fu_1459_p2() {
    mul_ln1118_373_fu_1459_p2 = (!mul_ln1118_373_fu_1459_p0.read().is_01() || !ap_const_lv24_FFFF9E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_373_fu_1459_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_374_fu_1440_p0() {
    mul_ln1118_374_fu_1440_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2784364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_374_fu_1440_p2() {
    mul_ln1118_374_fu_1440_p2 = (!mul_ln1118_374_fu_1440_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_374_fu_1440_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_375_fu_1441_p0() {
    mul_ln1118_375_fu_1441_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2784364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_375_fu_1441_p2() {
    mul_ln1118_375_fu_1441_p2 = (!mul_ln1118_375_fu_1441_p0.read().is_01() || !ap_const_lv24_FFFF8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_375_fu_1441_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_376_fu_1402_p0() {
    mul_ln1118_376_fu_1402_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2784364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_376_fu_1402_p2() {
    mul_ln1118_376_fu_1402_p2 = (!mul_ln1118_376_fu_1402_p0.read().is_01() || !ap_const_lv24_F1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_376_fu_1402_p0.read()) * sc_biguint<24>(ap_const_lv24_F1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_377_fu_1503_p0() {
    mul_ln1118_377_fu_1503_p0 =  (sc_lv<16>) (sext_ln1118_271_fu_2784364_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_377_fu_1503_p2() {
    mul_ln1118_377_fu_1503_p2 = (!mul_ln1118_377_fu_1503_p0.read().is_01() || !ap_const_lv24_B6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_377_fu_1503_p0.read()) * sc_biguint<24>(ap_const_lv24_B6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_378_fu_1404_p0() {
    mul_ln1118_378_fu_1404_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2784792_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_378_fu_1404_p2() {
    mul_ln1118_378_fu_1404_p2 = (!mul_ln1118_378_fu_1404_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_378_fu_1404_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_379_fu_1385_p0() {
    mul_ln1118_379_fu_1385_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2784779_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_379_fu_1385_p2() {
    mul_ln1118_379_fu_1385_p2 = (!mul_ln1118_379_fu_1385_p0.read().is_01() || !ap_const_lv24_FFFF1B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_379_fu_1385_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_37_fu_2065_p0() {
    mul_ln1118_37_fu_2065_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_37_fu_2065_p2() {
    mul_ln1118_37_fu_2065_p2 = (!mul_ln1118_37_fu_2065_p0.read().is_01() || !ap_const_lv24_FFFF5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_37_fu_2065_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_380_fu_1486_p0() {
    mul_ln1118_380_fu_1486_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2784779_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_380_fu_1486_p2() {
    mul_ln1118_380_fu_1486_p2 = (!mul_ln1118_380_fu_1486_p0.read().is_01() || !ap_const_lv24_FFFF49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_380_fu_1486_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_381_fu_1507_p0() {
    mul_ln1118_381_fu_1507_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2784779_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_381_fu_1507_p2() {
    mul_ln1118_381_fu_1507_p2 = (!mul_ln1118_381_fu_1507_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_381_fu_1507_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_382_fu_1488_p0() {
    mul_ln1118_382_fu_1488_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2784779_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_382_fu_1488_p2() {
    mul_ln1118_382_fu_1488_p2 = (!mul_ln1118_382_fu_1488_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_382_fu_1488_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_383_fu_1489_p0() {
    mul_ln1118_383_fu_1489_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2784792_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_383_fu_1489_p2() {
    mul_ln1118_383_fu_1489_p2 = (!mul_ln1118_383_fu_1489_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_383_fu_1489_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_384_fu_1470_p0() {
    mul_ln1118_384_fu_1470_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2784779_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_384_fu_1470_p2() {
    mul_ln1118_384_fu_1470_p2 = (!mul_ln1118_384_fu_1470_p0.read().is_01() || !ap_const_lv24_68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_384_fu_1470_p0.read()) * sc_biguint<24>(ap_const_lv24_68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_385_fu_1769_p0() {
    mul_ln1118_385_fu_1769_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2784779_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_385_fu_1769_p2() {
    mul_ln1118_385_fu_1769_p2 = (!mul_ln1118_385_fu_1769_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_385_fu_1769_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_386_fu_1924_p0() {
    mul_ln1118_386_fu_1924_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2784779_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_386_fu_1924_p2() {
    mul_ln1118_386_fu_1924_p2 = (!mul_ln1118_386_fu_1924_p0.read().is_01() || !ap_const_lv24_FFFF5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_386_fu_1924_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_387_fu_2079_p0() {
    mul_ln1118_387_fu_2079_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2784779_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_387_fu_2079_p2() {
    mul_ln1118_387_fu_2079_p2 = (!mul_ln1118_387_fu_2079_p0.read().is_01() || !ap_const_lv24_FFFFA8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_387_fu_2079_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_388_fu_2003_p0() {
    mul_ln1118_388_fu_2003_p0 =  (sc_lv<16>) (sext_ln1118_286_fu_2784779_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_388_fu_2003_p2() {
    mul_ln1118_388_fu_2003_p2 = (!mul_ln1118_388_fu_2003_p0.read().is_01() || !ap_const_lv24_FFFF9E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_388_fu_2003_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_389_fu_2158_p0() {
    mul_ln1118_389_fu_2158_p0 =  (sc_lv<16>) (sext_ln1118_299_fu_2785166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_389_fu_2158_p2() {
    mul_ln1118_389_fu_2158_p2 = (!mul_ln1118_389_fu_2158_p0.read().is_01() || !ap_const_lv24_FFFF5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_389_fu_2158_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_38_fu_2026_p0() {
    mul_ln1118_38_fu_2026_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_38_fu_2026_p2() {
    mul_ln1118_38_fu_2026_p2 = (!mul_ln1118_38_fu_2026_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_38_fu_2026_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_390_fu_2082_p0() {
    mul_ln1118_390_fu_2082_p0 =  (sc_lv<16>) (sext_ln1118_299_fu_2785166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_390_fu_2082_p2() {
    mul_ln1118_390_fu_2082_p2 = (!mul_ln1118_390_fu_2082_p0.read().is_01() || !ap_const_lv24_FFFECE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_390_fu_2082_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFECE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_391_fu_1544_p0() {
    mul_ln1118_391_fu_1544_p0 =  (sc_lv<16>) (sext_ln1118_299_fu_2785166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_391_fu_1544_p2() {
    mul_ln1118_391_fu_1544_p2 = (!mul_ln1118_391_fu_1544_p0.read().is_01() || !ap_const_lv24_13E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_391_fu_1544_p0.read()) * sc_biguint<24>(ap_const_lv24_13E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_392_fu_1699_p0() {
    mul_ln1118_392_fu_1699_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_2785160_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_392_fu_1699_p2() {
    mul_ln1118_392_fu_1699_p2 = (!mul_ln1118_392_fu_1699_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_392_fu_1699_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_393_fu_1854_p0() {
    mul_ln1118_393_fu_1854_p0 =  (sc_lv<16>) (sext_ln1118_299_fu_2785166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_393_fu_1854_p2() {
    mul_ln1118_393_fu_1854_p2 = (!mul_ln1118_393_fu_1854_p0.read().is_01() || !ap_const_lv24_FFFDA7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_393_fu_1854_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDA7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_394_fu_1778_p0() {
    mul_ln1118_394_fu_1778_p0 = sext_ln1118_301_fu_2785183_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_394_fu_1778_p2() {
    mul_ln1118_394_fu_1778_p2 = (!mul_ln1118_394_fu_1778_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_394_fu_1778_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_395_fu_1933_p0() {
    mul_ln1118_395_fu_1933_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_2785160_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_395_fu_1933_p2() {
    mul_ln1118_395_fu_1933_p2 = (!mul_ln1118_395_fu_1933_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_395_fu_1933_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_396_fu_1395_p0() {
    mul_ln1118_396_fu_1395_p0 =  (sc_lv<16>) (sext_ln1118_302_fu_2785188_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_396_fu_1395_p2() {
    mul_ln1118_396_fu_1395_p2 = (!mul_ln1118_396_fu_1395_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_396_fu_1395_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_397_fu_2012_p0() {
    mul_ln1118_397_fu_2012_p0 =  (sc_lv<16>) (sext_ln1118_299_fu_2785166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_397_fu_2012_p2() {
    mul_ln1118_397_fu_2012_p2 = (!mul_ln1118_397_fu_2012_p0.read().is_01() || !ap_const_lv24_FFFEA0.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_397_fu_2012_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEA0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_398_fu_2167_p0() {
    mul_ln1118_398_fu_2167_p0 =  (sc_lv<16>) (sext_ln1118_299_fu_2785166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_398_fu_2167_p2() {
    mul_ln1118_398_fu_2167_p2 = (!mul_ln1118_398_fu_2167_p0.read().is_01() || !ap_const_lv24_FFFF07.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_398_fu_2167_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF07);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_399_fu_1917_p0() {
    mul_ln1118_399_fu_1917_p0 =  (sc_lv<16>) (sext_ln1118_299_fu_2785166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_399_fu_1917_p2() {
    mul_ln1118_399_fu_1917_p2 = (!mul_ln1118_399_fu_1917_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_399_fu_1917_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_39_fu_2087_p0() {
    mul_ln1118_39_fu_2087_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_39_fu_2087_p2() {
    mul_ln1118_39_fu_2087_p2 = (!mul_ln1118_39_fu_2087_p0.read().is_01() || !ap_const_lv24_FFFF85.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_39_fu_2087_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF85);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_400_fu_1938_p0() {
    mul_ln1118_400_fu_1938_p0 =  (sc_lv<16>) (sext_ln1118_299_fu_2785166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_400_fu_1938_p2() {
    mul_ln1118_400_fu_1938_p2 = (!mul_ln1118_400_fu_1938_p0.read().is_01() || !ap_const_lv24_68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_400_fu_1938_p0.read()) * sc_biguint<24>(ap_const_lv24_68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_401_fu_1939_p0() {
    mul_ln1118_401_fu_1939_p0 =  (sc_lv<16>) (sext_ln1118_299_fu_2785166_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_401_fu_1939_p2() {
    mul_ln1118_401_fu_1939_p2 = (!mul_ln1118_401_fu_1939_p0.read().is_01() || !ap_const_lv24_FFFF6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_401_fu_1939_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_402_fu_1940_p0() {
    mul_ln1118_402_fu_1940_p0 =  (sc_lv<16>) (sext_ln708_fu_2785555_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_402_fu_1940_p2() {
    mul_ln1118_402_fu_1940_p2 = (!mul_ln1118_402_fu_1940_p0.read().is_01() || !ap_const_lv24_F1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_402_fu_1940_p0.read()) * sc_biguint<24>(ap_const_lv24_F1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_403_fu_1901_p0() {
    mul_ln1118_403_fu_1901_p0 =  (sc_lv<16>) (sext_ln708_fu_2785555_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_403_fu_1901_p2() {
    mul_ln1118_403_fu_1901_p2 = (!mul_ln1118_403_fu_1901_p0.read().is_01() || !ap_const_lv24_FFFF5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_403_fu_1901_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_404_fu_1942_p0() {
    mul_ln1118_404_fu_1942_p0 =  (sc_lv<16>) (sext_ln708_fu_2785555_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_404_fu_1942_p2() {
    mul_ln1118_404_fu_1942_p2 = (!mul_ln1118_404_fu_1942_p0.read().is_01() || !ap_const_lv24_FFFF5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_404_fu_1942_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_405_fu_1923_p0() {
    mul_ln1118_405_fu_1923_p0 =  (sc_lv<16>) (sext_ln708_fu_2785555_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_405_fu_1923_p2() {
    mul_ln1118_405_fu_1923_p2 = (!mul_ln1118_405_fu_1923_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_405_fu_1923_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_406_fu_1864_p0() {
    mul_ln1118_406_fu_1864_p0 =  (sc_lv<16>) (sext_ln708_fu_2785555_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_406_fu_1864_p2() {
    mul_ln1118_406_fu_1864_p2 = (!mul_ln1118_406_fu_1864_p0.read().is_01() || !ap_const_lv24_79.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_406_fu_1864_p0.read()) * sc_biguint<24>(ap_const_lv24_79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_407_fu_1945_p0() {
    mul_ln1118_407_fu_1945_p0 =  (sc_lv<16>) (sext_ln708_fu_2785555_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_407_fu_1945_p2() {
    mul_ln1118_407_fu_1945_p2 = (!mul_ln1118_407_fu_1945_p0.read().is_01() || !ap_const_lv24_FFFF9E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_407_fu_1945_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_408_fu_1946_p0() {
    mul_ln1118_408_fu_1946_p0 =  (sc_lv<16>) (sext_ln708_30_fu_2785567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_408_fu_1946_p2() {
    mul_ln1118_408_fu_1946_p2 = (!mul_ln1118_408_fu_1946_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_408_fu_1946_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_409_fu_1967_p0() {
    mul_ln1118_409_fu_1967_p0 =  (sc_lv<16>) (sext_ln708_30_fu_2785567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_409_fu_1967_p2() {
    mul_ln1118_409_fu_1967_p2 = (!mul_ln1118_409_fu_1967_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_409_fu_1967_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_40_fu_2088_p0() {
    mul_ln1118_40_fu_2088_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_40_fu_2088_p2() {
    mul_ln1118_40_fu_2088_p2 = (!mul_ln1118_40_fu_2088_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_40_fu_2088_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_410_fu_1868_p0() {
    mul_ln1118_410_fu_1868_p0 =  (sc_lv<16>) (sext_ln708_32_fu_2785578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_410_fu_1868_p2() {
    mul_ln1118_410_fu_1868_p2 = (!mul_ln1118_410_fu_1868_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_410_fu_1868_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_411_fu_1949_p0() {
    mul_ln1118_411_fu_1949_p0 =  (sc_lv<16>) (sext_ln708_fu_2785555_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_411_fu_1949_p2() {
    mul_ln1118_411_fu_1949_p2 = (!mul_ln1118_411_fu_1949_p0.read().is_01() || !ap_const_lv24_FFFF9F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_411_fu_1949_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_412_fu_2039_p0() {
    mul_ln1118_412_fu_2039_p0 =  (sc_lv<16>) (sext_ln708_fu_2785555_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_412_fu_2039_p2() {
    mul_ln1118_412_fu_2039_p2 = (!mul_ln1118_412_fu_2039_p0.read().is_01() || !ap_const_lv24_DD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_412_fu_2039_p0.read()) * sc_biguint<24>(ap_const_lv24_DD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_413_fu_1286_p0() {
    mul_ln1118_413_fu_1286_p0 =  (sc_lv<16>) (sext_ln708_30_fu_2785567_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_413_fu_1286_p2() {
    mul_ln1118_413_fu_1286_p2 = (!mul_ln1118_413_fu_1286_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_413_fu_1286_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_414_fu_2004_p0() {
    mul_ln1118_414_fu_2004_p0 =  (sc_lv<16>) (sext_ln1118_319_fu_2785955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_414_fu_2004_p2() {
    mul_ln1118_414_fu_2004_p2 = (!mul_ln1118_414_fu_2004_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_414_fu_2004_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_415_fu_2159_p0() {
    mul_ln1118_415_fu_2159_p0 =  (sc_lv<16>) (sext_ln1118_319_fu_2785955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_415_fu_2159_p2() {
    mul_ln1118_415_fu_2159_p2 = (!mul_ln1118_415_fu_2159_p0.read().is_01() || !ap_const_lv24_FFFF97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_415_fu_2159_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_416_fu_1621_p0() {
    mul_ln1118_416_fu_1621_p0 = sext_ln1118_320_fu_2785967_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_416_fu_1621_p2() {
    mul_ln1118_416_fu_1621_p2 = (!mul_ln1118_416_fu_1621_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_416_fu_1621_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_417_fu_1314_p0() {
    mul_ln1118_417_fu_1314_p0 =  (sc_lv<16>) (sext_ln1118_319_fu_2785955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_417_fu_1314_p2() {
    mul_ln1118_417_fu_1314_p2 = (!mul_ln1118_417_fu_1314_p0.read().is_01() || !ap_const_lv24_51.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_417_fu_1314_p0.read()) * sc_biguint<24>(ap_const_lv24_51);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_418_fu_1238_p0() {
    mul_ln1118_418_fu_1238_p0 =  (sc_lv<16>) (sext_ln1118_319_fu_2785955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_418_fu_1238_p2() {
    mul_ln1118_418_fu_1238_p2 = (!mul_ln1118_418_fu_1238_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_418_fu_1238_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_419_fu_1393_p0() {
    mul_ln1118_419_fu_1393_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_2785972_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_419_fu_1393_p2() {
    mul_ln1118_419_fu_1393_p2 = (!mul_ln1118_419_fu_1393_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_419_fu_1393_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_41_fu_2069_p0() {
    mul_ln1118_41_fu_2069_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_41_fu_2069_p2() {
    mul_ln1118_41_fu_2069_p2 = (!mul_ln1118_41_fu_2069_p0.read().is_01() || !ap_const_lv24_FFFF5F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_41_fu_2069_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_420_fu_2010_p0() {
    mul_ln1118_420_fu_2010_p0 =  (sc_lv<16>) (sext_ln1118_319_fu_2785955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_420_fu_2010_p2() {
    mul_ln1118_420_fu_2010_p2 = (!mul_ln1118_420_fu_2010_p0.read().is_01() || !ap_const_lv24_FFFF4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_420_fu_2010_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_421_fu_1703_p0() {
    mul_ln1118_421_fu_1703_p0 =  (sc_lv<16>) (sext_ln1118_319_fu_2785955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_421_fu_1703_p2() {
    mul_ln1118_421_fu_1703_p2 = (!mul_ln1118_421_fu_1703_p0.read().is_01() || !ap_const_lv24_B2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_421_fu_1703_p0.read()) * sc_biguint<24>(ap_const_lv24_B2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_422_fu_1627_p0() {
    mul_ln1118_422_fu_1627_p0 =  (sc_lv<16>) (sext_ln1118_319_fu_2785955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_422_fu_1627_p2() {
    mul_ln1118_422_fu_1627_p2 = (!mul_ln1118_422_fu_1627_p0.read().is_01() || !ap_const_lv24_54.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_422_fu_1627_p0.read()) * sc_biguint<24>(ap_const_lv24_54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_423_fu_1320_p0() {
    mul_ln1118_423_fu_1320_p0 =  (sc_lv<16>) (sext_ln1118_319_fu_2785955_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_423_fu_1320_p2() {
    mul_ln1118_423_fu_1320_p2 = (!mul_ln1118_423_fu_1320_p0.read().is_01() || !ap_const_lv24_FFFEF2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_423_fu_1320_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEF2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_424_fu_1937_p0() {
    mul_ln1118_424_fu_1937_p0 =  (sc_lv<16>) (sext_ln1118_321_fu_2785972_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_424_fu_1937_p2() {
    mul_ln1118_424_fu_1937_p2 = (!mul_ln1118_424_fu_1937_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_424_fu_1937_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_425_fu_1399_p0() {
    mul_ln1118_425_fu_1399_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2786319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_425_fu_1399_p2() {
    mul_ln1118_425_fu_1399_p2 = (!mul_ln1118_425_fu_1399_p0.read().is_01() || !ap_const_lv24_FFFFBD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_425_fu_1399_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_426_fu_1785_p0() {
    mul_ln1118_426_fu_1785_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2786319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_426_fu_1785_p2() {
    mul_ln1118_426_fu_1785_p2 = (!mul_ln1118_426_fu_1785_p0.read().is_01() || !ap_const_lv24_FFFF76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_426_fu_1785_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_427_fu_1247_p0() {
    mul_ln1118_427_fu_1247_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2786319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_427_fu_1247_p2() {
    mul_ln1118_427_fu_1247_p2 = (!mul_ln1118_427_fu_1247_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_427_fu_1247_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_428_fu_1397_p0() {
    mul_ln1118_428_fu_1397_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2786319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_428_fu_1397_p2() {
    mul_ln1118_428_fu_1397_p2 = (!mul_ln1118_428_fu_1397_p0.read().is_01() || !ap_const_lv24_FFFFA6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_428_fu_1397_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_429_fu_1418_p0() {
    mul_ln1118_429_fu_1418_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2786319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_429_fu_1418_p2() {
    mul_ln1118_429_fu_1418_p2 = (!mul_ln1118_429_fu_1418_p0.read().is_01() || !ap_const_lv24_FFFFA3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_429_fu_1418_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_42_fu_2070_p0() {
    mul_ln1118_42_fu_2070_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_42_fu_2070_p2() {
    mul_ln1118_42_fu_2070_p2 = (!mul_ln1118_42_fu_2070_p0.read().is_01() || !ap_const_lv24_FFFF36.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_42_fu_2070_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_430_fu_1279_p0() {
    mul_ln1118_430_fu_1279_p0 = sext_ln1118_328_fu_2786306_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_430_fu_1279_p2() {
    mul_ln1118_430_fu_1279_p2 = (!mul_ln1118_430_fu_1279_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_430_fu_1279_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_431_fu_1240_p0() {
    mul_ln1118_431_fu_1240_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2786319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_431_fu_1240_p2() {
    mul_ln1118_431_fu_1240_p2 = (!mul_ln1118_431_fu_1240_p0.read().is_01() || !ap_const_lv24_63.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_431_fu_1240_p0.read()) * sc_biguint<24>(ap_const_lv24_63);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_432_fu_1401_p0() {
    mul_ln1118_432_fu_1401_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_2786333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_432_fu_1401_p2() {
    mul_ln1118_432_fu_1401_p2 = (!mul_ln1118_432_fu_1401_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_432_fu_1401_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_433_fu_1422_p0() {
    mul_ln1118_433_fu_1422_p0 =  (sc_lv<16>) (sext_ln1118_332_fu_2786333_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_433_fu_1422_p2() {
    mul_ln1118_433_fu_1422_p2 = (!mul_ln1118_433_fu_1422_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_433_fu_1422_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_434_fu_1403_p0() {
    mul_ln1118_434_fu_1403_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2786319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_434_fu_1403_p2() {
    mul_ln1118_434_fu_1403_p2 = (!mul_ln1118_434_fu_1403_p0.read().is_01() || !ap_const_lv24_FFFF8E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_434_fu_1403_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_435_fu_1264_p0() {
    mul_ln1118_435_fu_1264_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2786319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_435_fu_1264_p2() {
    mul_ln1118_435_fu_1264_p2 = (!mul_ln1118_435_fu_1264_p0.read().is_01() || !ap_const_lv24_FFFF0A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_435_fu_1264_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF0A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_436_fu_2140_p0() {
    mul_ln1118_436_fu_2140_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2786319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_436_fu_2140_p2() {
    mul_ln1118_436_fu_2140_p2 = (!mul_ln1118_436_fu_2140_p0.read().is_01() || !ap_const_lv24_BD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_436_fu_2140_p0.read()) * sc_biguint<24>(ap_const_lv24_BD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_437_fu_1406_p0() {
    mul_ln1118_437_fu_1406_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2786319_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_437_fu_1406_p2() {
    mul_ln1118_437_fu_1406_p2 = (!mul_ln1118_437_fu_1406_p0.read().is_01() || !ap_const_lv24_FFFEB8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_437_fu_1406_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEB8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_438_fu_1427_p0() {
    mul_ln1118_438_fu_1427_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_2786707_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_438_fu_1427_p2() {
    mul_ln1118_438_fu_1427_p2 = (!mul_ln1118_438_fu_1427_p0.read().is_01() || !ap_const_lv24_FFFF93.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_438_fu_1427_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_439_fu_1408_p0() {
    mul_ln1118_439_fu_1408_p0 =  (sc_lv<16>) (sext_ln1118_341_fu_2786718_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_439_fu_1408_p2() {
    mul_ln1118_439_fu_1408_p2 = (!mul_ln1118_439_fu_1408_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_439_fu_1408_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_43_fu_2091_p0() {
    mul_ln1118_43_fu_2091_p0 = sext_ln1118_32_fu_2775726_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_43_fu_2091_p2() {
    mul_ln1118_43_fu_2091_p2 = (!mul_ln1118_43_fu_2091_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_43_fu_2091_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_440_fu_2212_p0() {
    mul_ln1118_440_fu_2212_p0 =  (sc_lv<16>) (sext_ln1118_341_fu_2786718_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_440_fu_2212_p2() {
    mul_ln1118_440_fu_2212_p2 = (!mul_ln1118_440_fu_2212_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_440_fu_2212_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_441_fu_1929_p0() {
    mul_ln1118_441_fu_1929_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_2786707_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_441_fu_1929_p2() {
    mul_ln1118_441_fu_1929_p2 = (!mul_ln1118_441_fu_1929_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_441_fu_1929_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_442_fu_1521_p0() {
    mul_ln1118_442_fu_1521_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_2786707_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_442_fu_1521_p2() {
    mul_ln1118_442_fu_1521_p2 = (!mul_ln1118_442_fu_1521_p0.read().is_01() || !ap_const_lv24_5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_442_fu_1521_p0.read()) * sc_biguint<24>(ap_const_lv24_5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_443_fu_1315_p0() {
    mul_ln1118_443_fu_1315_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_2786707_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_443_fu_1315_p2() {
    mul_ln1118_443_fu_1315_p2 = (!mul_ln1118_443_fu_1315_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_443_fu_1315_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_444_fu_2163_p0() {
    mul_ln1118_444_fu_2163_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_2786707_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_444_fu_2163_p2() {
    mul_ln1118_444_fu_2163_p2 = (!mul_ln1118_444_fu_2163_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_444_fu_2163_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_445_fu_1856_p0() {
    mul_ln1118_445_fu_1856_p0 =  (sc_lv<16>) (sext_ln1118_341_fu_2786718_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_445_fu_1856_p2() {
    mul_ln1118_445_fu_1856_p2 = (!mul_ln1118_445_fu_1856_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_445_fu_1856_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_446_fu_2141_p0() {
    mul_ln1118_446_fu_2141_p0 =  (sc_lv<16>) (sext_ln1118_341_fu_2786718_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_446_fu_2141_p2() {
    mul_ln1118_446_fu_2141_p2 = (!mul_ln1118_446_fu_2141_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_446_fu_2141_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_447_fu_1935_p0() {
    mul_ln1118_447_fu_1935_p0 =  (sc_lv<16>) (sext_ln1118_341_fu_2786718_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_447_fu_1935_p2() {
    mul_ln1118_447_fu_1935_p2 = (!mul_ln1118_447_fu_1935_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_447_fu_1935_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_448_fu_2090_p0() {
    mul_ln1118_448_fu_2090_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_2786707_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_448_fu_2090_p2() {
    mul_ln1118_448_fu_2090_p2 = (!mul_ln1118_448_fu_2090_p0.read().is_01() || !ap_const_lv24_FFFF96.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_448_fu_2090_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_449_fu_1321_p0() {
    mul_ln1118_449_fu_1321_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_2786707_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_449_fu_1321_p2() {
    mul_ln1118_449_fu_1321_p2 = (!mul_ln1118_449_fu_1321_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_449_fu_1321_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_44_fu_1954_p0() {
    mul_ln1118_44_fu_1954_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_44_fu_1954_p2() {
    mul_ln1118_44_fu_1954_p2 = (!mul_ln1118_44_fu_1954_p0.read().is_01() || !ap_const_lv24_45.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_44_fu_1954_p0.read()) * sc_biguint<24>(ap_const_lv24_45);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_450_fu_1476_p0() {
    mul_ln1118_450_fu_1476_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_2787135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_450_fu_1476_p2() {
    mul_ln1118_450_fu_1476_p2 = (!mul_ln1118_450_fu_1476_p0.read().is_01() || !ap_const_lv24_5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_450_fu_1476_p0.read()) * sc_biguint<24>(ap_const_lv24_5E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_451_fu_2093_p0() {
    mul_ln1118_451_fu_2093_p0 =  (sc_lv<16>) (sext_ln1118_357_fu_2787153_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_451_fu_2093_p2() {
    mul_ln1118_451_fu_2093_p2 = (!mul_ln1118_451_fu_2093_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_451_fu_2093_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_452_fu_1555_p0() {
    mul_ln1118_452_fu_1555_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_2787135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_452_fu_1555_p2() {
    mul_ln1118_452_fu_1555_p2 = (!mul_ln1118_452_fu_1555_p0.read().is_01() || !ap_const_lv24_74.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_452_fu_1555_p0.read()) * sc_biguint<24>(ap_const_lv24_74);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_453_fu_1248_p0() {
    mul_ln1118_453_fu_1248_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_2787135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_453_fu_1248_p2() {
    mul_ln1118_453_fu_1248_p2 = (!mul_ln1118_453_fu_1248_p0.read().is_01() || !ap_const_lv24_FFFFA6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_453_fu_1248_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_454_fu_1634_p0() {
    mul_ln1118_454_fu_1634_p0 =  (sc_lv<16>) (sext_ln1118_357_fu_2787153_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_454_fu_1634_p2() {
    mul_ln1118_454_fu_1634_p2 = (!mul_ln1118_454_fu_1634_p0.read().is_01() || !ap_const_lv23_37.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_454_fu_1634_p0.read()) * sc_biguint<23>(ap_const_lv23_37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_455_fu_1688_p0() {
    mul_ln1118_455_fu_1688_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_2787135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_455_fu_1688_p2() {
    mul_ln1118_455_fu_1688_p2 = (!mul_ln1118_455_fu_1688_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_455_fu_1688_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_456_fu_1837_p0() {
    mul_ln1118_456_fu_1837_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_2787135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_456_fu_1837_p2() {
    mul_ln1118_456_fu_1837_p2 = (!mul_ln1118_456_fu_1837_p0.read().is_01() || !ap_const_lv24_87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_456_fu_1837_p0.read()) * sc_biguint<24>(ap_const_lv24_87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_457_fu_1818_p0() {
    mul_ln1118_457_fu_1818_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_2787135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_457_fu_1818_p2() {
    mul_ln1118_457_fu_1818_p2 = (!mul_ln1118_457_fu_1818_p0.read().is_01() || !ap_const_lv24_B9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_457_fu_1818_p0.read()) * sc_biguint<24>(ap_const_lv24_B9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_458_fu_1799_p0() {
    mul_ln1118_458_fu_1799_p0 = sext_ln1118_353_fu_2787125_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_458_fu_1799_p2() {
    mul_ln1118_458_fu_1799_p2 = (!mul_ln1118_458_fu_1799_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_458_fu_1799_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_459_fu_1800_p0() {
    mul_ln1118_459_fu_1800_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_2787135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_459_fu_1800_p2() {
    mul_ln1118_459_fu_1800_p2 = (!mul_ln1118_459_fu_1800_p0.read().is_01() || !ap_const_lv24_FFFF05.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_459_fu_1800_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF05);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_45_fu_2109_p0() {
    mul_ln1118_45_fu_2109_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_45_fu_2109_p2() {
    mul_ln1118_45_fu_2109_p2 = (!mul_ln1118_45_fu_2109_p0.read().is_01() || !ap_const_lv24_92.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_45_fu_2109_p0.read()) * sc_biguint<24>(ap_const_lv24_92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_460_fu_1761_p0() {
    mul_ln1118_460_fu_1761_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_2787135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_460_fu_1761_p2() {
    mul_ln1118_460_fu_1761_p2 = (!mul_ln1118_460_fu_1761_p0.read().is_01() || !ap_const_lv24_FFFF6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_460_fu_1761_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_461_fu_1782_p0() {
    mul_ln1118_461_fu_1782_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_2787135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_461_fu_1782_p2() {
    mul_ln1118_461_fu_1782_p2 = (!mul_ln1118_461_fu_1782_p0.read().is_01() || !ap_const_lv24_FFFF6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_461_fu_1782_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_462_fu_1783_p0() {
    mul_ln1118_462_fu_1783_p0 =  (sc_lv<16>) (sext_ln1118_357_fu_2787153_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_462_fu_1783_p2() {
    mul_ln1118_462_fu_1783_p2 = (!mul_ln1118_462_fu_1783_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_462_fu_1783_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_463_fu_1824_p0() {
    mul_ln1118_463_fu_1824_p0 =  (sc_lv<16>) (sext_ln1118_355_fu_2787135_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_463_fu_1824_p2() {
    mul_ln1118_463_fu_1824_p2 = (!mul_ln1118_463_fu_1824_p0.read().is_01() || !ap_const_lv24_FFFF50.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_463_fu_1824_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF50);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_464_fu_1805_p0() {
    mul_ln1118_464_fu_1805_p0 =  (sc_lv<16>) (sext_ln1118_354_fu_2787130_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_464_fu_1805_p2() {
    mul_ln1118_464_fu_1805_p2 = (!mul_ln1118_464_fu_1805_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_464_fu_1805_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_465_fu_1786_p0() {
    mul_ln1118_465_fu_1786_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2787514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_465_fu_1786_p2() {
    mul_ln1118_465_fu_1786_p2 = (!mul_ln1118_465_fu_1786_p0.read().is_01() || !ap_const_lv24_FFFE1D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_465_fu_1786_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_466_fu_1847_p0() {
    mul_ln1118_466_fu_1847_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2787514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_466_fu_1847_p2() {
    mul_ln1118_466_fu_1847_p2 = (!mul_ln1118_466_fu_1847_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_466_fu_1847_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_467_fu_1848_p0() {
    mul_ln1118_467_fu_1848_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2787514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_467_fu_1848_p2() {
    mul_ln1118_467_fu_1848_p2 = (!mul_ln1118_467_fu_1848_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_467_fu_1848_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_468_fu_1829_p0() {
    mul_ln1118_468_fu_1829_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2787514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_468_fu_1829_p2() {
    mul_ln1118_468_fu_1829_p2 = (!mul_ln1118_468_fu_1829_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_468_fu_1829_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_469_fu_1823_p0() {
    mul_ln1118_469_fu_1823_p0 =  (sc_lv<16>) (sext_ln1118_364_fu_2787508_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_469_fu_1823_p2() {
    mul_ln1118_469_fu_1823_p2 = (!mul_ln1118_469_fu_1823_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_469_fu_1823_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_46_fu_1571_p0() {
    mul_ln1118_46_fu_1571_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_46_fu_1571_p2() {
    mul_ln1118_46_fu_1571_p2 = (!mul_ln1118_46_fu_1571_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_46_fu_1571_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_470_fu_2063_p0() {
    mul_ln1118_470_fu_2063_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2787514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_470_fu_2063_p2() {
    mul_ln1118_470_fu_2063_p2 = (!mul_ln1118_470_fu_2063_p0.read().is_01() || !ap_const_lv24_FFFF75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_470_fu_2063_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_471_fu_1525_p0() {
    mul_ln1118_471_fu_1525_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2787514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_471_fu_1525_p2() {
    mul_ln1118_471_fu_1525_p2 = (!mul_ln1118_471_fu_1525_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_471_fu_1525_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_472_fu_1449_p0() {
    mul_ln1118_472_fu_1449_p0 =  (sc_lv<16>) (sext_ln1118_364_fu_2787508_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_472_fu_1449_p2() {
    mul_ln1118_472_fu_1449_p2 = (!mul_ln1118_472_fu_1449_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_472_fu_1449_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_473_fu_1373_p0() {
    mul_ln1118_473_fu_1373_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2787514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_473_fu_1373_p2() {
    mul_ln1118_473_fu_1373_p2 = (!mul_ln1118_473_fu_1373_p0.read().is_01() || !ap_const_lv24_FFFF6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_473_fu_1373_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_474_fu_1759_p0() {
    mul_ln1118_474_fu_1759_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2787514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_474_fu_1759_p2() {
    mul_ln1118_474_fu_1759_p2 = (!mul_ln1118_474_fu_1759_p0.read().is_01() || !ap_const_lv24_FFFF5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_474_fu_1759_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_475_fu_1914_p0() {
    mul_ln1118_475_fu_1914_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2787514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_475_fu_1914_p2() {
    mul_ln1118_475_fu_1914_p2 = (!mul_ln1118_475_fu_1914_p0.read().is_01() || !ap_const_lv24_AE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_475_fu_1914_p0.read()) * sc_biguint<24>(ap_const_lv24_AE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_476_fu_1838_p0() {
    mul_ln1118_476_fu_1838_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2787514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_476_fu_1838_p2() {
    mul_ln1118_476_fu_1838_p2 = (!mul_ln1118_476_fu_1838_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_476_fu_1838_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_477_fu_1993_p0() {
    mul_ln1118_477_fu_1993_p0 =  (sc_lv<16>) (sext_ln1118_365_fu_2787514_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_477_fu_1993_p2() {
    mul_ln1118_477_fu_1993_p2 = (!mul_ln1118_477_fu_1993_p0.read().is_01() || !ap_const_lv24_FFFF06.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_477_fu_1993_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF06);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_478_fu_1686_p0() {
    mul_ln1118_478_fu_1686_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2787846_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_478_fu_1686_p2() {
    mul_ln1118_478_fu_1686_p2 = (!mul_ln1118_478_fu_1686_p0.read().is_01() || !ap_const_lv24_FFFF6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_478_fu_1686_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_479_fu_1971_p0() {
    mul_ln1118_479_fu_1971_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2787846_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_479_fu_1971_p2() {
    mul_ln1118_479_fu_1971_p2 = (!mul_ln1118_479_fu_1971_p0.read().is_01() || !ap_const_lv24_FFFEED.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_479_fu_1971_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_47_fu_1726_p0() {
    mul_ln1118_47_fu_1726_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_47_fu_1726_p2() {
    mul_ln1118_47_fu_1726_p2 = (!mul_ln1118_47_fu_1726_p0.read().is_01() || !ap_const_lv24_8C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_47_fu_1726_p0.read()) * sc_biguint<24>(ap_const_lv24_8C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_480_fu_1664_p0() {
    mul_ln1118_480_fu_1664_p0 =  (sc_lv<16>) (sext_ln1118_370_fu_2787829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_480_fu_1664_p2() {
    mul_ln1118_480_fu_1664_p2 = (!mul_ln1118_480_fu_1664_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_480_fu_1664_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_481_fu_2151_p0() {
    mul_ln1118_481_fu_2151_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2787846_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_481_fu_2151_p2() {
    mul_ln1118_481_fu_2151_p2 = (!mul_ln1118_481_fu_2151_p0.read().is_01() || !ap_const_lv24_4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_481_fu_2151_p0.read()) * sc_biguint<24>(ap_const_lv24_4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_482_fu_1974_p0() {
    mul_ln1118_482_fu_1974_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2787846_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_482_fu_1974_p2() {
    mul_ln1118_482_fu_1974_p2 = (!mul_ln1118_482_fu_1974_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_482_fu_1974_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_483_fu_1797_p0() {
    mul_ln1118_483_fu_1797_p0 =  (sc_lv<16>) (sext_ln1118_372_fu_2787840_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_483_fu_1797_p2() {
    mul_ln1118_483_fu_1797_p2 = (!mul_ln1118_483_fu_1797_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_483_fu_1797_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_484_fu_2197_p0() {
    mul_ln1118_484_fu_2197_p0 =  (sc_lv<16>) (sext_ln1118_370_fu_2787829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_484_fu_2197_p2() {
    mul_ln1118_484_fu_2197_p2 = (!mul_ln1118_484_fu_2197_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_484_fu_2197_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_485_fu_2198_p0() {
    mul_ln1118_485_fu_2198_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2787846_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_485_fu_2198_p2() {
    mul_ln1118_485_fu_2198_p2 = (!mul_ln1118_485_fu_2198_p0.read().is_01() || !ap_const_lv24_7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_485_fu_2198_p0.read()) * sc_biguint<24>(ap_const_lv24_7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_486_fu_1258_p0() {
    mul_ln1118_486_fu_1258_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2787846_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_486_fu_1258_p2() {
    mul_ln1118_486_fu_1258_p2 = (!mul_ln1118_486_fu_1258_p0.read().is_01() || !ap_const_lv24_FFFF77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_486_fu_1258_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_487_fu_1259_p0() {
    mul_ln1118_487_fu_1259_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2787846_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_487_fu_1259_p2() {
    mul_ln1118_487_fu_1259_p2 = (!mul_ln1118_487_fu_1259_p0.read().is_01() || !ap_const_lv24_65.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_487_fu_1259_p0.read()) * sc_biguint<24>(ap_const_lv24_65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_488_fu_2161_p0() {
    mul_ln1118_488_fu_2161_p0 =  (sc_lv<16>) (sext_ln1118_372_fu_2787840_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_488_fu_2161_p2() {
    mul_ln1118_488_fu_2161_p2 = (!mul_ln1118_488_fu_2161_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_488_fu_2161_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_489_fu_1261_p0() {
    mul_ln1118_489_fu_1261_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2787846_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_489_fu_1261_p2() {
    mul_ln1118_489_fu_1261_p2 = (!mul_ln1118_489_fu_1261_p0.read().is_01() || !ap_const_lv24_BE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_489_fu_1261_p0.read()) * sc_biguint<24>(ap_const_lv24_BE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_48_fu_2112_p0() {
    mul_ln1118_48_fu_2112_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2775731_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_48_fu_2112_p2() {
    mul_ln1118_48_fu_2112_p2 = (!mul_ln1118_48_fu_2112_p0.read().is_01() || !ap_const_lv24_FFFF6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_48_fu_2112_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_490_fu_2183_p0() {
    mul_ln1118_490_fu_2183_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2787846_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_490_fu_2183_p2() {
    mul_ln1118_490_fu_2183_p2 = (!mul_ln1118_490_fu_2183_p0.read().is_01() || !ap_const_lv24_6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_490_fu_2183_p0.read()) * sc_biguint<24>(ap_const_lv24_6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_491_fu_1243_p0() {
    mul_ln1118_491_fu_1243_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2787846_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_491_fu_1243_p2() {
    mul_ln1118_491_fu_1243_p2 = (!mul_ln1118_491_fu_1243_p0.read().is_01() || !ap_const_lv24_FFFFAB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_491_fu_1243_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_492_fu_2205_p0() {
    mul_ln1118_492_fu_2205_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2787846_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_492_fu_2205_p2() {
    mul_ln1118_492_fu_2205_p2 = (!mul_ln1118_492_fu_2205_p0.read().is_01() || !ap_const_lv24_55.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_492_fu_2205_p0.read()) * sc_biguint<24>(ap_const_lv24_55);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_493_fu_1245_p0() {
    mul_ln1118_493_fu_1245_p0 =  (sc_lv<16>) (sext_ln1118_370_fu_2787829_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_493_fu_1245_p2() {
    mul_ln1118_493_fu_1245_p2 = (!mul_ln1118_493_fu_1245_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_493_fu_1245_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_494_fu_1226_p0() {
    mul_ln1118_494_fu_1226_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_2788197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_494_fu_1226_p2() {
    mul_ln1118_494_fu_1226_p2 = (!mul_ln1118_494_fu_1226_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_494_fu_1226_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_495_fu_2188_p0() {
    mul_ln1118_495_fu_2188_p0 =  (sc_lv<16>) (sext_ln1118_380_fu_2788190_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_495_fu_2188_p2() {
    mul_ln1118_495_fu_2188_p2 = (!mul_ln1118_495_fu_2188_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_495_fu_2188_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_496_fu_2149_p0() {
    mul_ln1118_496_fu_2149_p0 =  (sc_lv<16>) (sext_ln1118_380_fu_2788190_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_496_fu_2149_p2() {
    mul_ln1118_496_fu_2149_p2 = (!mul_ln1118_496_fu_2149_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_496_fu_2149_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_497_fu_1249_p0() {
    mul_ln1118_497_fu_1249_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_2788197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_497_fu_1249_p2() {
    mul_ln1118_497_fu_1249_p2 = (!mul_ln1118_497_fu_1249_p0.read().is_01() || !ap_const_lv24_54.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_497_fu_1249_p0.read()) * sc_biguint<24>(ap_const_lv24_54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_498_fu_1580_p0() {
    mul_ln1118_498_fu_1580_p0 =  (sc_lv<16>) (sext_ln1118_380_fu_2788190_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_498_fu_1580_p2() {
    mul_ln1118_498_fu_1580_p2 = (!mul_ln1118_498_fu_1580_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_498_fu_1580_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_499_fu_1966_p0() {
    mul_ln1118_499_fu_1966_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_2788197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_499_fu_1966_p2() {
    mul_ln1118_499_fu_1966_p2 = (!mul_ln1118_499_fu_1966_p0.read().is_01() || !ap_const_lv24_FFFF73.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_499_fu_1966_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF73);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_49_fu_1242_p0() {
    mul_ln1118_49_fu_1242_p0 =  (sc_lv<16>) (sext_ln1118_40_fu_2776035_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_49_fu_1242_p2() {
    mul_ln1118_49_fu_1242_p2 = (!mul_ln1118_49_fu_1242_p0.read().is_01() || !ap_const_lv24_FFFFA7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_49_fu_1242_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_500_fu_1890_p0() {
    mul_ln1118_500_fu_1890_p0 =  (sc_lv<16>) (sext_ln1118_379_fu_2788183_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_500_fu_1890_p2() {
    mul_ln1118_500_fu_1890_p2 = (!mul_ln1118_500_fu_1890_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_500_fu_1890_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_501_fu_1583_p0() {
    mul_ln1118_501_fu_1583_p0 =  (sc_lv<16>) (sext_ln1118_379_fu_2788183_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_501_fu_1583_p2() {
    mul_ln1118_501_fu_1583_p2 = (!mul_ln1118_501_fu_1583_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_501_fu_1583_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_502_fu_2200_p0() {
    mul_ln1118_502_fu_2200_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_2788197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_502_fu_2200_p2() {
    mul_ln1118_502_fu_2200_p2 = (!mul_ln1118_502_fu_2200_p0.read().is_01() || !ap_const_lv24_FFFF68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_502_fu_2200_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_503_fu_1431_p0() {
    mul_ln1118_503_fu_1431_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_2788197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_503_fu_1431_p2() {
    mul_ln1118_503_fu_1431_p2 = (!mul_ln1118_503_fu_1431_p0.read().is_01() || !ap_const_lv24_FFFFAA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_503_fu_1431_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_504_fu_1586_p0() {
    mul_ln1118_504_fu_1586_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_2788197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_504_fu_1586_p2() {
    mul_ln1118_504_fu_1586_p2 = (!mul_ln1118_504_fu_1586_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_504_fu_1586_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_505_fu_2203_p0() {
    mul_ln1118_505_fu_2203_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_2788197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_505_fu_2203_p2() {
    mul_ln1118_505_fu_2203_p2 = (!mul_ln1118_505_fu_2203_p0.read().is_01() || !ap_const_lv24_61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_505_fu_2203_p0.read()) * sc_biguint<24>(ap_const_lv24_61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_506_fu_1434_p0() {
    mul_ln1118_506_fu_1434_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_2788197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_506_fu_1434_p2() {
    mul_ln1118_506_fu_1434_p2 = (!mul_ln1118_506_fu_1434_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_506_fu_1434_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_507_fu_1257_p0() {
    mul_ln1118_507_fu_1257_p0 =  (sc_lv<16>) (sext_ln1118_379_fu_2788183_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_507_fu_1257_p2() {
    mul_ln1118_507_fu_1257_p2 = (!mul_ln1118_507_fu_1257_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_507_fu_1257_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_508_fu_2206_p0() {
    mul_ln1118_508_fu_2206_p0 =  (sc_lv<16>) (sext_ln1118_381_fu_2788197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_508_fu_2206_p2() {
    mul_ln1118_508_fu_2206_p2 = (!mul_ln1118_508_fu_2206_p0.read().is_01() || !ap_const_lv24_FFFE63.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_508_fu_2206_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE63);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_509_fu_1798_p0() {
    mul_ln1118_509_fu_1798_p0 =  (sc_lv<16>) (sext_ln1118_388_fu_2788506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_509_fu_1798_p2() {
    mul_ln1118_509_fu_1798_p2 = (!mul_ln1118_509_fu_1798_p0.read().is_01() || !ap_const_lv24_FFFF96.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_509_fu_1798_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_50_fu_1960_p0() {
    mul_ln1118_50_fu_1960_p0 =  (sc_lv<16>) (sext_ln1118_40_fu_2776035_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_50_fu_1960_p2() {
    mul_ln1118_50_fu_1960_p2 = (!mul_ln1118_50_fu_1960_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_50_fu_1960_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_510_fu_1361_p0() {
    mul_ln1118_510_fu_1361_p0 =  (sc_lv<16>) (sext_ln1118_388_fu_2788506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_510_fu_1361_p2() {
    mul_ln1118_510_fu_1361_p2 = (!mul_ln1118_510_fu_1361_p0.read().is_01() || !ap_const_lv24_FFFF61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_510_fu_1361_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF61);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_511_fu_1516_p0() {
    mul_ln1118_511_fu_1516_p0 =  (sc_lv<16>) (sext_ln1118_388_fu_2788506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_511_fu_1516_p2() {
    mul_ln1118_511_fu_1516_p2 = (!mul_ln1118_511_fu_1516_p0.read().is_01() || !ap_const_lv24_6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_511_fu_1516_p0.read()) * sc_biguint<24>(ap_const_lv24_6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_512_fu_1676_p0() {
    mul_ln1118_512_fu_1676_p0 =  (sc_lv<16>) (sext_ln1118_390_fu_2788520_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_512_fu_1676_p2() {
    mul_ln1118_512_fu_1676_p2 = (!mul_ln1118_512_fu_1676_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_512_fu_1676_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_513_fu_1677_p0() {
    mul_ln1118_513_fu_1677_p0 =  (sc_lv<16>) (sext_ln1118_390_fu_2788520_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_513_fu_1677_p2() {
    mul_ln1118_513_fu_1677_p2 = (!mul_ln1118_513_fu_1677_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_513_fu_1677_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_514_fu_1658_p0() {
    mul_ln1118_514_fu_1658_p0 =  (sc_lv<16>) (sext_ln1118_388_fu_2788506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_514_fu_1658_p2() {
    mul_ln1118_514_fu_1658_p2 = (!mul_ln1118_514_fu_1658_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_514_fu_1658_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_515_fu_1639_p0() {
    mul_ln1118_515_fu_1639_p0 =  (sc_lv<16>) (sext_ln1118_390_fu_2788520_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_515_fu_1639_p2() {
    mul_ln1118_515_fu_1639_p2 = (!mul_ln1118_515_fu_1639_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_515_fu_1639_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_516_fu_1660_p0() {
    mul_ln1118_516_fu_1660_p0 =  (sc_lv<16>) (sext_ln1118_388_fu_2788506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_516_fu_1660_p2() {
    mul_ln1118_516_fu_1660_p2 = (!mul_ln1118_516_fu_1660_p0.read().is_01() || !ap_const_lv24_FFFF6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_516_fu_1660_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_517_fu_1661_p0() {
    mul_ln1118_517_fu_1661_p0 =  (sc_lv<16>) (sext_ln1118_390_fu_2788520_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_517_fu_1661_p2() {
    mul_ln1118_517_fu_1661_p2 = (!mul_ln1118_517_fu_1661_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_517_fu_1661_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_518_fu_1662_p0() {
    mul_ln1118_518_fu_1662_p0 =  (sc_lv<16>) (sext_ln1118_388_fu_2788506_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_518_fu_1662_p2() {
    mul_ln1118_518_fu_1662_p2 = (!mul_ln1118_518_fu_1662_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_518_fu_1662_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

}

