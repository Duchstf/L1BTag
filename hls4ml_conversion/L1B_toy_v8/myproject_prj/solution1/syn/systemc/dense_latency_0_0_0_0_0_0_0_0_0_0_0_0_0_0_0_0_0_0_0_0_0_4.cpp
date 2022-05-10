#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_950_fu_2543556_p2() {
    add_ln703_950_fu_2543556_p2 = (!add_ln703_937_reg_2544200.read().is_01() || !add_ln703_949_reg_2544205.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_937_reg_2544200.read()) + sc_biguint<16>(add_ln703_949_reg_2544205.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_952_fu_2542895_p2() {
    add_ln703_952_fu_2542895_p2 = (!mult_59_V_fu_2519568_p4.read().is_01() || !mult_39_V_fu_2519249_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_59_V_fu_2519568_p4.read()) + sc_biguint<16>(mult_39_V_fu_2519249_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_953_fu_2542901_p2() {
    add_ln703_953_fu_2542901_p2 = (!mult_19_V_fu_2518983_p1.read().is_01() || !add_ln703_952_fu_2542895_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_19_V_fu_2518983_p1.read()) + sc_biguint<16>(add_ln703_952_fu_2542895_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_954_fu_2542907_p2() {
    add_ln703_954_fu_2542907_p2 = (!mult_119_V_fu_2520752_p1.read().is_01() || !mult_99_V_fu_2520306_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_119_V_fu_2520752_p1.read()) + sc_bigint<16>(mult_99_V_fu_2520306_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_955_fu_2542913_p2() {
    add_ln703_955_fu_2542913_p2 = (!mult_60_V_fu_2519633_p1.read().is_01() || !add_ln703_954_fu_2542907_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_60_V_fu_2519633_p1.read()) + sc_biguint<16>(add_ln703_954_fu_2542907_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_956_fu_2542919_p2() {
    add_ln703_956_fu_2542919_p2 = (!add_ln703_953_fu_2542901_p2.read().is_01() || !add_ln703_955_fu_2542913_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_953_fu_2542901_p2.read()) + sc_biguint<16>(add_ln703_955_fu_2542913_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_957_fu_2542925_p2() {
    add_ln703_957_fu_2542925_p2 = (!mult_199_V_fu_2522163_p4.read().is_01() || !mult_179_V_fu_2521831_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_199_V_fu_2522163_p4.read()) + sc_bigint<16>(mult_179_V_fu_2521831_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_958_fu_2542931_p2() {
    add_ln703_958_fu_2542931_p2 = (!mult_159_V_fu_2521468_p1.read().is_01() || !add_ln703_957_fu_2542925_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_159_V_fu_2521468_p1.read()) + sc_biguint<16>(add_ln703_957_fu_2542925_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_959_fu_2542937_p2() {
    add_ln703_959_fu_2542937_p2 = (!mult_259_V_fu_2523325_p1.read().is_01() || !mult_239_V_fu_2522980_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_259_V_fu_2523325_p1.read()) + sc_bigint<16>(mult_239_V_fu_2522980_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_95_fu_2537981_p2() {
    add_ln703_95_fu_2537981_p2 = (!mult_781_V_fu_2533536_p4.read().is_01() || !add_ln703_94_fu_2537975_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_781_V_fu_2533536_p4.read()) + sc_biguint<16>(add_ln703_94_fu_2537975_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_960_fu_2542943_p2() {
    add_ln703_960_fu_2542943_p2 = (!mult_212_V_fu_2522521_p1.read().is_01() || !add_ln703_959_fu_2542937_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_212_V_fu_2522521_p1.read()) + sc_biguint<16>(add_ln703_959_fu_2542937_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_961_fu_2542949_p2() {
    add_ln703_961_fu_2542949_p2 = (!add_ln703_958_fu_2542931_p2.read().is_01() || !add_ln703_960_fu_2542943_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_958_fu_2542931_p2.read()) + sc_biguint<16>(add_ln703_960_fu_2542943_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_962_fu_2542955_p2() {
    add_ln703_962_fu_2542955_p2 = (!add_ln703_956_fu_2542919_p2.read().is_01() || !add_ln703_961_fu_2542949_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_956_fu_2542919_p2.read()) + sc_biguint<16>(add_ln703_961_fu_2542949_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_963_fu_2542961_p2() {
    add_ln703_963_fu_2542961_p2 = (!mult_313_V_fu_2524461_p1.read().is_01() || !mult_295_V_fu_2524037_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_313_V_fu_2524461_p1.read()) + sc_bigint<16>(mult_295_V_fu_2524037_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_964_fu_2542967_p2() {
    add_ln703_964_fu_2542967_p2 = (!mult_279_V_fu_2523707_p4.read().is_01() || !add_ln703_963_fu_2542961_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_279_V_fu_2523707_p4.read()) + sc_biguint<16>(add_ln703_963_fu_2542961_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_965_fu_2542973_p2() {
    add_ln703_965_fu_2542973_p2 = (!mult_379_V_fu_2525665_p4.read().is_01() || !mult_359_V_fu_2525272_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_379_V_fu_2525665_p4.read()) + sc_bigint<16>(mult_359_V_fu_2525272_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_966_fu_2542979_p2() {
    add_ln703_966_fu_2542979_p2 = (!mult_339_V_fu_2524885_p4.read().is_01() || !add_ln703_965_fu_2542973_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_339_V_fu_2524885_p4.read()) + sc_biguint<16>(add_ln703_965_fu_2542973_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_967_fu_2542985_p2() {
    add_ln703_967_fu_2542985_p2 = (!add_ln703_964_fu_2542967_p2.read().is_01() || !add_ln703_966_fu_2542979_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_964_fu_2542967_p2.read()) + sc_biguint<16>(add_ln703_966_fu_2542979_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_968_fu_2542991_p2() {
    add_ln703_968_fu_2542991_p2 = (!mult_439_V_fu_2526918_p4.read().is_01() || !mult_419_V_fu_2526522_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_439_V_fu_2526918_p4.read()) + sc_bigint<16>(mult_419_V_fu_2526522_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_969_fu_2542997_p2() {
    add_ln703_969_fu_2542997_p2 = (!mult_399_V_fu_2526095_p1.read().is_01() || !add_ln703_968_fu_2542991_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_399_V_fu_2526095_p1.read()) + sc_biguint<16>(add_ln703_968_fu_2542991_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_96_fu_2537987_p2() {
    add_ln703_96_fu_2537987_p2 = (!mult_881_V_fu_2535432_p1.read().is_01() || !mult_861_V_fu_2535050_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_881_V_fu_2535432_p1.read()) + sc_biguint<16>(mult_861_V_fu_2535050_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_970_fu_2543003_p2() {
    add_ln703_970_fu_2543003_p2 = (!mult_479_V_fu_2527740_p4.read().is_01() || !mult_459_V_fu_2527345_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_479_V_fu_2527740_p4.read()) + sc_bigint<16>(mult_459_V_fu_2527345_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_971_fu_2543009_p2() {
    add_ln703_971_fu_2543009_p2 = (!mult_519_V_fu_2528447_p4.read().is_01() || !mult_499_V_fu_2528097_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_519_V_fu_2528447_p4.read()) + sc_bigint<16>(mult_499_V_fu_2528097_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_972_fu_2543015_p2() {
    add_ln703_972_fu_2543015_p2 = (!add_ln703_970_fu_2543003_p2.read().is_01() || !add_ln703_971_fu_2543009_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_970_fu_2543003_p2.read()) + sc_biguint<16>(add_ln703_971_fu_2543009_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_973_fu_2543021_p2() {
    add_ln703_973_fu_2543021_p2 = (!add_ln703_969_fu_2542997_p2.read().is_01() || !add_ln703_972_fu_2543015_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_969_fu_2542997_p2.read()) + sc_biguint<16>(add_ln703_972_fu_2543015_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_974_fu_2543566_p2() {
    add_ln703_974_fu_2543566_p2 = (!add_ln703_967_reg_2544215.read().is_01() || !add_ln703_973_reg_2544220.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_967_reg_2544215.read()) + sc_biguint<16>(add_ln703_973_reg_2544220.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_975_fu_2543570_p2() {
    add_ln703_975_fu_2543570_p2 = (!add_ln703_962_reg_2544210.read().is_01() || !add_ln703_974_fu_2543566_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_962_reg_2544210.read()) + sc_biguint<16>(add_ln703_974_fu_2543566_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_976_fu_2543027_p2() {
    add_ln703_976_fu_2543027_p2 = (!mult_579_V_fu_2529584_p1.read().is_01() || !mult_559_V_fu_2529226_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_579_V_fu_2529584_p1.read()) + sc_biguint<16>(mult_559_V_fu_2529226_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_977_fu_2543033_p2() {
    add_ln703_977_fu_2543033_p2 = (!mult_539_V_fu_2528817_p4.read().is_01() || !add_ln703_976_fu_2543027_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_539_V_fu_2528817_p4.read()) + sc_biguint<16>(add_ln703_976_fu_2543027_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_978_fu_2543039_p2() {
    add_ln703_978_fu_2543039_p2 = (!mult_639_V_fu_2530724_p4.read().is_01() || !mult_619_V_fu_2530365_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_639_V_fu_2530724_p4.read()) + sc_bigint<16>(mult_619_V_fu_2530365_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_979_fu_2543045_p2() {
    add_ln703_979_fu_2543045_p2 = (!mult_599_V_fu_2529938_p1.read().is_01() || !add_ln703_978_fu_2543039_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_599_V_fu_2529938_p1.read()) + sc_biguint<16>(add_ln703_978_fu_2543039_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_97_fu_2537993_p2() {
    add_ln703_97_fu_2537993_p2 = (!mult_841_V_fu_2534702_p4.read().is_01() || !add_ln703_96_fu_2537987_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_841_V_fu_2534702_p4.read()) + sc_biguint<16>(add_ln703_96_fu_2537987_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_980_fu_2543051_p2() {
    add_ln703_980_fu_2543051_p2 = (!add_ln703_977_fu_2543033_p2.read().is_01() || !add_ln703_979_fu_2543045_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_977_fu_2543033_p2.read()) + sc_biguint<16>(add_ln703_979_fu_2543045_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_981_fu_2543057_p2() {
    add_ln703_981_fu_2543057_p2 = (!mult_699_V_fu_2531925_p4.read().is_01() || !mult_679_V_fu_2531568_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_699_V_fu_2531925_p4.read()) + sc_bigint<16>(mult_679_V_fu_2531568_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_982_fu_2543063_p2() {
    add_ln703_982_fu_2543063_p2 = (!mult_659_V_fu_2531179_p4.read().is_01() || !add_ln703_981_fu_2543057_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_659_V_fu_2531179_p4.read()) + sc_biguint<16>(add_ln703_981_fu_2543057_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_983_fu_2543069_p2() {
    add_ln703_983_fu_2543069_p2 = (!mult_739_V_fu_2532792_p4.read().is_01() || !mult_719_V_fu_2532374_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_739_V_fu_2532792_p4.read()) + sc_bigint<16>(mult_719_V_fu_2532374_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_984_fu_2543075_p2() {
    add_ln703_984_fu_2543075_p2 = (!mult_779_V_fu_2533485_p4.read().is_01() || !mult_741_V_fu_2532872_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_779_V_fu_2533485_p4.read()) + sc_bigint<16>(mult_741_V_fu_2532872_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_985_fu_2543081_p2() {
    add_ln703_985_fu_2543081_p2 = (!add_ln703_983_fu_2543069_p2.read().is_01() || !add_ln703_984_fu_2543075_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_983_fu_2543069_p2.read()) + sc_biguint<16>(add_ln703_984_fu_2543075_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_986_fu_2543087_p2() {
    add_ln703_986_fu_2543087_p2 = (!add_ln703_982_fu_2543063_p2.read().is_01() || !add_ln703_985_fu_2543081_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_982_fu_2543063_p2.read()) + sc_biguint<16>(add_ln703_985_fu_2543081_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_987_fu_2543093_p2() {
    add_ln703_987_fu_2543093_p2 = (!add_ln703_980_fu_2543051_p2.read().is_01() || !add_ln703_986_fu_2543087_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_980_fu_2543051_p2.read()) + sc_biguint<16>(add_ln703_986_fu_2543087_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_988_fu_2543099_p2() {
    add_ln703_988_fu_2543099_p2 = (!mult_839_V_fu_2534618_p1.read().is_01() || !mult_819_V_fu_2534257_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_839_V_fu_2534618_p1.read()) + sc_bigint<16>(mult_819_V_fu_2534257_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_989_fu_2543105_p2() {
    add_ln703_989_fu_2543105_p2 = (!mult_799_V_fu_2533832_p4.read().is_01() || !add_ln703_988_fu_2543099_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_799_V_fu_2533832_p4.read()) + sc_biguint<16>(add_ln703_988_fu_2543099_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_98_fu_2537999_p2() {
    add_ln703_98_fu_2537999_p2 = (!add_ln703_95_fu_2537981_p2.read().is_01() || !add_ln703_97_fu_2537993_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_95_fu_2537981_p2.read()) + sc_biguint<16>(add_ln703_97_fu_2537993_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_990_fu_2543111_p2() {
    add_ln703_990_fu_2543111_p2 = (!mult_899_V_fu_2535664_p4.read().is_01() || !mult_879_V_fu_2535376_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_899_V_fu_2535664_p4.read()) + sc_bigint<16>(mult_879_V_fu_2535376_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_991_fu_2543117_p2() {
    add_ln703_991_fu_2543117_p2 = (!mult_859_V_fu_2535000_p4.read().is_01() || !add_ln703_990_fu_2543111_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_859_V_fu_2535000_p4.read()) + sc_biguint<16>(add_ln703_990_fu_2543111_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_992_fu_2543123_p2() {
    add_ln703_992_fu_2543123_p2 = (!add_ln703_989_fu_2543105_p2.read().is_01() || !add_ln703_991_fu_2543117_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_989_fu_2543105_p2.read()) + sc_biguint<16>(add_ln703_991_fu_2543117_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_993_fu_2543129_p2() {
    add_ln703_993_fu_2543129_p2 = (!mult_959_V_fu_2536755_p4.read().is_01() || !mult_939_V_fu_2536369_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_959_V_fu_2536755_p4.read()) + sc_bigint<16>(mult_939_V_fu_2536369_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_994_fu_2543135_p2() {
    add_ln703_994_fu_2543135_p2 = (!mult_919_V_fu_2536077_p1.read().is_01() || !add_ln703_993_fu_2543129_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_919_V_fu_2536077_p1.read()) + sc_biguint<16>(add_ln703_993_fu_2543129_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_995_fu_2543141_p2() {
    add_ln703_995_fu_2543141_p2 = (!mult_999_V_fu_2537475_p4.read().is_01() || !mult_972_V_fu_2537031_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_999_V_fu_2537475_p4.read()) + sc_bigint<16>(mult_972_V_fu_2537031_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_996_fu_2543147_p2() {
    add_ln703_996_fu_2543147_p2 = (!sext_ln203_3_fu_2521071_p1.read().is_01() || !ap_const_lv12_FEC.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_3_fu_2521071_p1.read()) + sc_bigint<12>(ap_const_lv12_FEC));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_997_fu_2543157_p2() {
    add_ln703_997_fu_2543157_p2 = (!add_ln703_995_fu_2543141_p2.read().is_01() || !sext_ln703_15_fu_2543153_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_995_fu_2543141_p2.read()) + sc_bigint<16>(sext_ln703_15_fu_2543153_p1.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_998_fu_2543163_p2() {
    add_ln703_998_fu_2543163_p2 = (!add_ln703_994_fu_2543135_p2.read().is_01() || !add_ln703_997_fu_2543157_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_994_fu_2543135_p2.read()) + sc_biguint<16>(add_ln703_997_fu_2543157_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_999_fu_2543169_p2() {
    add_ln703_999_fu_2543169_p2 = (!add_ln703_992_fu_2543123_p2.read().is_01() || !add_ln703_998_fu_2543163_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_992_fu_2543123_p2.read()) + sc_biguint<16>(add_ln703_998_fu_2543163_p2.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_99_fu_2538005_p2() {
    add_ln703_99_fu_2538005_p2 = (!mult_941_V_fu_2536431_p1.read().is_01() || !mult_921_V_fu_2536117_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_941_V_fu_2536431_p1.read()) + sc_biguint<16>(mult_921_V_fu_2536117_p4.read()));
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_fu_2537485_p2() {
    add_ln703_fu_2537485_p2 = (!mult_40_V_fu_2519338_p1.read().is_01() || !mult_20_V_fu_2519017_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_40_V_fu_2519338_p1.read()) + sc_biguint<16>(mult_20_V_fu_2519017_p4.read()));
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
        ap_return_0 = add_ln703_57_fu_2543188_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_1 = ap_return_1_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_1 = acc_1_V_fu_2543207_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_10() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_10 = ap_return_10_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_10 = acc_10_V_fu_2543388_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_11() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_11 = ap_return_11_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_11 = acc_11_V_fu_2543407_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_12() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_12 = ap_return_12_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_12 = acc_12_V_fu_2543426_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_13() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_13 = ap_return_13_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_13 = acc_13_V_fu_2543465_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_14() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_14 = ap_return_14_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_14 = acc_14_V_fu_2543484_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_15() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_15 = ap_return_15_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_15 = acc_15_V_fu_2543503_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_16() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_16 = ap_return_16_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_16 = acc_16_V_fu_2543522_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_17() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_17 = ap_return_17_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_17 = acc_17_V_fu_2543541_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_18() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_18 = ap_return_18_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_18 = acc_18_V_fu_2543560_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_19() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_19 = ap_return_19_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_19 = acc_19_V_fu_2543579_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_2() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_2 = ap_return_2_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_2 = acc_2_V_fu_2543226_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_3() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_3 = ap_return_3_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_3 = acc_3_V_fu_2543245_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_4() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_4 = ap_return_4_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_4 = acc_4_V_fu_2543264_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_5() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_5 = ap_return_5_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_5 = acc_5_V_fu_2543283_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_6() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_6 = ap_return_6_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_6 = acc_6_V_fu_2543302_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_7() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_7 = ap_return_7_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_7 = acc_7_V_fu_2543331_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_8() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_8 = ap_return_8_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_8 = acc_8_V_fu_2543350_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_9() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return_9 = ap_return_9_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_9 = acc_9_V_fu_2543369_p2.read();
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_100_fu_1408_p0() {
    mul_ln1118_100_fu_1408_p0 =  (sc_lv<16>) (sext_ln1118_75_fu_2520756_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_100_fu_1408_p2() {
    mul_ln1118_100_fu_1408_p2 = (!mul_ln1118_100_fu_1408_p0.read().is_01() || !ap_const_lv24_FFFF0D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_100_fu_1408_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF0D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_101_fu_1773_p0() {
    mul_ln1118_101_fu_1773_p0 =  (sc_lv<16>) (sext_ln1118_75_fu_2520756_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_101_fu_1773_p2() {
    mul_ln1118_101_fu_1773_p2 = (!mul_ln1118_101_fu_1773_p0.read().is_01() || !ap_const_lv24_B7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_101_fu_1773_p0.read()) * sc_biguint<24>(ap_const_lv24_B7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_102_fu_1410_p0() {
    mul_ln1118_102_fu_1410_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2521086_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_102_fu_1410_p2() {
    mul_ln1118_102_fu_1410_p2 = (!mul_ln1118_102_fu_1410_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_102_fu_1410_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_103_fu_1593_p0() {
    mul_ln1118_103_fu_1593_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2521086_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_103_fu_1593_p2() {
    mul_ln1118_103_fu_1593_p2 = (!mul_ln1118_103_fu_1593_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_103_fu_1593_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_104_fu_1139_p0() {
    mul_ln1118_104_fu_1139_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2521075_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_104_fu_1139_p2() {
    mul_ln1118_104_fu_1139_p2 = (!mul_ln1118_104_fu_1139_p0.read().is_01() || !ap_const_lv24_F5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_104_fu_1139_p0.read()) * sc_biguint<24>(ap_const_lv24_F5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_105_fu_2101_p0() {
    mul_ln1118_105_fu_2101_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2521075_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_105_fu_2101_p2() {
    mul_ln1118_105_fu_2101_p2 = (!mul_ln1118_105_fu_2101_p0.read().is_01() || !ap_const_lv24_FFFF1F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_105_fu_2101_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF1F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_106_fu_1973_p0() {
    mul_ln1118_106_fu_1973_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2521086_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_106_fu_1973_p2() {
    mul_ln1118_106_fu_1973_p2 = (!mul_ln1118_106_fu_1973_p0.read().is_01() || !ap_const_lv23_34.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_106_fu_1973_p0.read()) * sc_biguint<23>(ap_const_lv23_34);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_107_fu_1359_p0() {
    mul_ln1118_107_fu_1359_p0 =  (sc_lv<16>) (sext_ln1118_82_fu_2521086_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_107_fu_1359_p2() {
    mul_ln1118_107_fu_1359_p2 = (!mul_ln1118_107_fu_1359_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_107_fu_1359_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_108_fu_2003_p0() {
    mul_ln1118_108_fu_2003_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2521075_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_108_fu_2003_p2() {
    mul_ln1118_108_fu_2003_p2 = (!mul_ln1118_108_fu_2003_p0.read().is_01() || !ap_const_lv24_A3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_108_fu_2003_p0.read()) * sc_biguint<24>(ap_const_lv24_A3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_109_fu_1489_p0() {
    mul_ln1118_109_fu_1489_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2521075_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_109_fu_1489_p2() {
    mul_ln1118_109_fu_1489_p2 = (!mul_ln1118_109_fu_1489_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_109_fu_1489_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_10_fu_1871_p0() {
    mul_ln1118_10_fu_1871_p0 =  (sc_lv<16>) (sext_ln1118_12_fu_2518552_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_10_fu_1871_p2() {
    mul_ln1118_10_fu_1871_p2 = (!mul_ln1118_10_fu_1871_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_10_fu_1871_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_110_fu_1747_p0() {
    mul_ln1118_110_fu_1747_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2521075_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_110_fu_1747_p2() {
    mul_ln1118_110_fu_1747_p2 = (!mul_ln1118_110_fu_1747_p0.read().is_01() || !ap_const_lv24_63.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_110_fu_1747_p0.read()) * sc_biguint<24>(ap_const_lv24_63);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_111_fu_1519_p0() {
    mul_ln1118_111_fu_1519_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2521075_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_111_fu_1519_p2() {
    mul_ln1118_111_fu_1519_p2 = (!mul_ln1118_111_fu_1519_p0.read().is_01() || !ap_const_lv24_5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_111_fu_1519_p0.read()) * sc_biguint<24>(ap_const_lv24_5E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_112_fu_2020_p0() {
    mul_ln1118_112_fu_2020_p0 =  (sc_lv<16>) (sext_ln1118_81_fu_2521075_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_112_fu_2020_p2() {
    mul_ln1118_112_fu_2020_p2 = (!mul_ln1118_112_fu_2020_p0.read().is_01() || !ap_const_lv24_FFFEB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_112_fu_2020_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEB3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_113_fu_2035_p0() {
    mul_ln1118_113_fu_2035_p0 =  (sc_lv<16>) (sext_ln1118_94_fu_2521484_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_113_fu_2035_p2() {
    mul_ln1118_113_fu_2035_p2 = (!mul_ln1118_113_fu_2035_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_113_fu_2035_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_114_fu_1664_p0() {
    mul_ln1118_114_fu_1664_p0 =  (sc_lv<16>) (sext_ln1118_93_fu_2521472_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_114_fu_1664_p2() {
    mul_ln1118_114_fu_1664_p2 = (!mul_ln1118_114_fu_1664_p0.read().is_01() || !ap_const_lv24_C7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_114_fu_1664_p0.read()) * sc_biguint<24>(ap_const_lv24_C7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_115_fu_1293_p0() {
    mul_ln1118_115_fu_1293_p0 =  (sc_lv<16>) (sext_ln1118_94_fu_2521484_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_115_fu_1293_p2() {
    mul_ln1118_115_fu_1293_p2 = (!mul_ln1118_115_fu_1293_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_115_fu_1293_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_116_fu_1947_p0() {
    mul_ln1118_116_fu_1947_p0 =  (sc_lv<16>) (sext_ln1118_93_fu_2521472_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_116_fu_1947_p2() {
    mul_ln1118_116_fu_1947_p2 = (!mul_ln1118_116_fu_1947_p0.read().is_01() || !ap_const_lv24_FFFFAB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_116_fu_1947_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_117_fu_1666_p0() {
    mul_ln1118_117_fu_1666_p0 =  (sc_lv<16>) (sext_ln1118_93_fu_2521472_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_117_fu_1666_p2() {
    mul_ln1118_117_fu_1666_p2 = (!mul_ln1118_117_fu_1666_p0.read().is_01() || !ap_const_lv24_FFFEA5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_117_fu_1666_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEA5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_118_fu_1581_p0() {
    mul_ln1118_118_fu_1581_p0 =  (sc_lv<16>) (sext_ln1118_93_fu_2521472_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_118_fu_1581_p2() {
    mul_ln1118_118_fu_1581_p2 = (!mul_ln1118_118_fu_1581_p0.read().is_01() || !ap_const_lv24_65.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_118_fu_1581_p0.read()) * sc_biguint<24>(ap_const_lv24_65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_119_fu_1839_p0() {
    mul_ln1118_119_fu_1839_p0 =  (sc_lv<16>) (sext_ln1118_93_fu_2521472_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_119_fu_1839_p2() {
    mul_ln1118_119_fu_1839_p2 = (!mul_ln1118_119_fu_1839_p0.read().is_01() || !ap_const_lv24_B3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_119_fu_1839_p0.read()) * sc_biguint<24>(ap_const_lv24_B3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_11_fu_1505_p0() {
    mul_ln1118_11_fu_1505_p0 =  (sc_lv<16>) (sext_ln1118_fu_2518535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_11_fu_1505_p2() {
    mul_ln1118_11_fu_1505_p2 = (!mul_ln1118_11_fu_1505_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_11_fu_1505_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_120_fu_1447_p0() {
    mul_ln1118_120_fu_1447_p0 =  (sc_lv<16>) (sext_ln1118_94_fu_2521484_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_120_fu_1447_p2() {
    mul_ln1118_120_fu_1447_p2 = (!mul_ln1118_120_fu_1447_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_120_fu_1447_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_121_fu_1274_p0() {
    mul_ln1118_121_fu_1274_p0 = sext_ln1118_95_fu_2521492_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_121_fu_1274_p2() {
    mul_ln1118_121_fu_1274_p2 = (!mul_ln1118_121_fu_1274_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_121_fu_1274_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_122_fu_1188_p0() {
    mul_ln1118_122_fu_1188_p0 =  (sc_lv<16>) (sext_ln1118_93_fu_2521472_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_122_fu_1188_p2() {
    mul_ln1118_122_fu_1188_p2 = (!mul_ln1118_122_fu_1188_p0.read().is_01() || !ap_const_lv24_FFFF51.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_122_fu_1188_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF51);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_123_fu_1450_p0() {
    mul_ln1118_123_fu_1450_p0 =  (sc_lv<16>) (sext_ln1118_93_fu_2521472_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_123_fu_1450_p2() {
    mul_ln1118_123_fu_1450_p2 = (!mul_ln1118_123_fu_1450_p0.read().is_01() || !ap_const_lv24_FFFD58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_123_fu_1450_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFD58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_124_fu_1451_p0() {
    mul_ln1118_124_fu_1451_p0 =  (sc_lv<16>) (sext_ln1118_93_fu_2521472_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_124_fu_1451_p2() {
    mul_ln1118_124_fu_1451_p2 = (!mul_ln1118_124_fu_1451_p0.read().is_01() || !ap_const_lv24_73.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_124_fu_1451_p0.read()) * sc_biguint<24>(ap_const_lv24_73);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_125_fu_1561_p0() {
    mul_ln1118_125_fu_1561_p0 =  (sc_lv<16>) (sext_ln1118_94_fu_2521484_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_125_fu_1561_p2() {
    mul_ln1118_125_fu_1561_p2 = (!mul_ln1118_125_fu_1561_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_125_fu_1561_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_126_fu_1814_p0() {
    mul_ln1118_126_fu_1814_p0 =  (sc_lv<16>) (sext_ln1118_103_fu_2521835_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_126_fu_1814_p2() {
    mul_ln1118_126_fu_1814_p2 = (!mul_ln1118_126_fu_1814_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_126_fu_1814_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_127_fu_1269_p0() {
    mul_ln1118_127_fu_1269_p0 =  (sc_lv<16>) (sext_ln1118_103_fu_2521835_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_127_fu_1269_p2() {
    mul_ln1118_127_fu_1269_p2 = (!mul_ln1118_127_fu_1269_p0.read().is_01() || !ap_const_lv24_5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_127_fu_1269_p0.read()) * sc_biguint<24>(ap_const_lv24_5B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_128_fu_1179_p0() {
    mul_ln1118_128_fu_1179_p0 =  (sc_lv<16>) (sext_ln1118_103_fu_2521835_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_128_fu_1179_p2() {
    mul_ln1118_128_fu_1179_p2 = (!mul_ln1118_128_fu_1179_p0.read().is_01() || !ap_const_lv24_FFFE46.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_128_fu_1179_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_129_fu_1726_p0() {
    mul_ln1118_129_fu_1726_p0 =  (sc_lv<16>) (sext_ln1118_103_fu_2521835_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_129_fu_1726_p2() {
    mul_ln1118_129_fu_1726_p2 = (!mul_ln1118_129_fu_1726_p0.read().is_01() || !ap_const_lv24_71.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_129_fu_1726_p0.read()) * sc_biguint<24>(ap_const_lv24_71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_12_fu_1681_p0() {
    mul_ln1118_12_fu_1681_p0 =  (sc_lv<16>) (sext_ln1118_11_fu_2518544_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_12_fu_1681_p2() {
    mul_ln1118_12_fu_1681_p2 = (!mul_ln1118_12_fu_1681_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_12_fu_1681_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_130_fu_1181_p0() {
    mul_ln1118_130_fu_1181_p0 =  (sc_lv<16>) (sext_ln1118_103_fu_2521835_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_130_fu_1181_p2() {
    mul_ln1118_130_fu_1181_p2 = (!mul_ln1118_130_fu_1181_p0.read().is_01() || !ap_const_lv24_FFFF6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_130_fu_1181_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_131_fu_1546_p0() {
    mul_ln1118_131_fu_1546_p0 =  (sc_lv<16>) (sext_ln1118_103_fu_2521835_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_131_fu_1546_p2() {
    mul_ln1118_131_fu_1546_p2 = (!mul_ln1118_131_fu_1546_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_131_fu_1546_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_132_fu_1911_p0() {
    mul_ln1118_132_fu_1911_p0 =  (sc_lv<16>) (sext_ln1118_103_fu_2521835_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_132_fu_1911_p2() {
    mul_ln1118_132_fu_1911_p2 = (!mul_ln1118_132_fu_1911_p0.read().is_01() || !ap_const_lv24_FFFF13.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_132_fu_1911_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF13);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_133_fu_1639_p0() {
    mul_ln1118_133_fu_1639_p0 =  (sc_lv<16>) (sext_ln1118_103_fu_2521835_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_133_fu_1639_p2() {
    mul_ln1118_133_fu_1639_p2 = (!mul_ln1118_133_fu_1639_p0.read().is_01() || !ap_const_lv24_FFFEFB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_133_fu_1639_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEFB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_134_fu_1398_p0() {
    mul_ln1118_134_fu_1398_p0 =  (sc_lv<16>) (sext_ln1118_106_fu_2521858_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_134_fu_1398_p2() {
    mul_ln1118_134_fu_1398_p2 = (!mul_ln1118_134_fu_1398_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_134_fu_1398_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_135_fu_1799_p0() {
    mul_ln1118_135_fu_1799_p0 =  (sc_lv<16>) (sext_ln1118_106_fu_2521858_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_135_fu_1799_p2() {
    mul_ln1118_135_fu_1799_p2 = (!mul_ln1118_135_fu_1799_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_135_fu_1799_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_136_fu_1671_p0() {
    mul_ln1118_136_fu_1671_p0 =  (sc_lv<16>) (sext_ln1118_106_fu_2521858_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_136_fu_1671_p2() {
    mul_ln1118_136_fu_1671_p2 = (!mul_ln1118_136_fu_1671_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_136_fu_1671_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_137_fu_1543_p0() {
    mul_ln1118_137_fu_1543_p0 =  (sc_lv<16>) (sext_ln1118_103_fu_2521835_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_137_fu_1543_p2() {
    mul_ln1118_137_fu_1543_p2 = (!mul_ln1118_137_fu_1543_p0.read().is_01() || !ap_const_lv24_FFFFA2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_137_fu_1543_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_138_fu_1558_p0() {
    mul_ln1118_138_fu_1558_p0 =  (sc_lv<16>) (sext_ln1118_103_fu_2521835_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_138_fu_1558_p2() {
    mul_ln1118_138_fu_1558_p2 = (!mul_ln1118_138_fu_1558_p0.read().is_01() || !ap_const_lv24_FFFF6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_138_fu_1558_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_139_fu_2059_p0() {
    mul_ln1118_139_fu_2059_p0 =  (sc_lv<16>) (sext_ln1118_103_fu_2521835_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_139_fu_2059_p2() {
    mul_ln1118_139_fu_2059_p2 = (!mul_ln1118_139_fu_2059_p0.read().is_01() || !ap_const_lv24_BB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_139_fu_2059_p0.read()) * sc_biguint<24>(ap_const_lv24_BB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_13_fu_1591_p0() {
    mul_ln1118_13_fu_1591_p0 =  (sc_lv<16>) (sext_ln1118_fu_2518535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_13_fu_1591_p2() {
    mul_ln1118_13_fu_1591_p2 = (!mul_ln1118_13_fu_1591_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_13_fu_1591_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_140_fu_2074_p0() {
    mul_ln1118_140_fu_2074_p0 = sext_ln1118_113_fu_2522182_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_140_fu_2074_p2() {
    mul_ln1118_140_fu_2074_p2 = (!mul_ln1118_140_fu_2074_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_140_fu_2074_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_141_fu_1317_p0() {
    mul_ln1118_141_fu_1317_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_2522173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_141_fu_1317_p2() {
    mul_ln1118_141_fu_1317_p2 = (!mul_ln1118_141_fu_1317_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_141_fu_1317_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_142_fu_1475_p0() {
    mul_ln1118_142_fu_1475_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_2522173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_142_fu_1475_p2() {
    mul_ln1118_142_fu_1475_p2 = (!mul_ln1118_142_fu_1475_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_142_fu_1475_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_143_fu_1833_p0() {
    mul_ln1118_143_fu_1833_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_2522173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_143_fu_1833_p2() {
    mul_ln1118_143_fu_1833_p2 = (!mul_ln1118_143_fu_1833_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_143_fu_1833_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_144_fu_1462_p0() {
    mul_ln1118_144_fu_1462_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_2522173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_144_fu_1462_p2() {
    mul_ln1118_144_fu_1462_p2 = (!mul_ln1118_144_fu_1462_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_144_fu_1462_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_145_fu_2106_p0() {
    mul_ln1118_145_fu_2106_p0 =  (sc_lv<16>) (sext_ln1118_112_fu_2522173_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_145_fu_2106_p2() {
    mul_ln1118_145_fu_2106_p2 = (!mul_ln1118_145_fu_2106_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_145_fu_2106_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_146_fu_1535_p0() {
    mul_ln1118_146_fu_1535_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_2522635_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_146_fu_1535_p2() {
    mul_ln1118_146_fu_1535_p2 = (!mul_ln1118_146_fu_1535_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_146_fu_1535_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_147_fu_1364_p0() {
    mul_ln1118_147_fu_1364_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2522621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_147_fu_1364_p2() {
    mul_ln1118_147_fu_1364_p2 = (!mul_ln1118_147_fu_1364_p0.read().is_01() || !ap_const_lv24_FFFF48.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_147_fu_1364_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF48);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_148_fu_1417_p0() {
    mul_ln1118_148_fu_1417_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2522621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_148_fu_1417_p2() {
    mul_ln1118_148_fu_1417_p2 = (!mul_ln1118_148_fu_1417_p0.read().is_01() || !ap_const_lv24_B1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_148_fu_1417_p0.read()) * sc_biguint<24>(ap_const_lv24_B1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_149_fu_1614_p0() {
    mul_ln1118_149_fu_1614_p0 = sext_ln1118_129_fu_2522643_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_149_fu_1614_p2() {
    mul_ln1118_149_fu_1614_p2 = (!mul_ln1118_149_fu_1614_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_149_fu_1614_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_14_fu_1865_p0() {
    mul_ln1118_14_fu_1865_p0 =  (sc_lv<16>) (sext_ln1118_fu_2518535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_14_fu_1865_p2() {
    mul_ln1118_14_fu_1865_p2 = (!mul_ln1118_14_fu_1865_p0.read().is_01() || !ap_const_lv23_2B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_14_fu_1865_p0.read()) * sc_biguint<23>(ap_const_lv23_2B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_150_fu_1158_p0() {
    mul_ln1118_150_fu_1158_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2522621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_150_fu_1158_p2() {
    mul_ln1118_150_fu_1158_p2 = (!mul_ln1118_150_fu_1158_p0.read().is_01() || !ap_const_lv24_E9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_150_fu_1158_p0.read()) * sc_biguint<24>(ap_const_lv24_E9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_151_fu_1507_p0() {
    mul_ln1118_151_fu_1507_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_2522635_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_151_fu_1507_p2() {
    mul_ln1118_151_fu_1507_p2 = (!mul_ln1118_151_fu_1507_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_151_fu_1507_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_152_fu_1508_p0() {
    mul_ln1118_152_fu_1508_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2522621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_152_fu_1508_p2() {
    mul_ln1118_152_fu_1508_p2 = (!mul_ln1118_152_fu_1508_p0.read().is_01() || !ap_const_lv24_FFFF77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_152_fu_1508_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_153_fu_1879_p0() {
    mul_ln1118_153_fu_1879_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2522621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_153_fu_1879_p2() {
    mul_ln1118_153_fu_1879_p2 = (!mul_ln1118_153_fu_1879_p0.read().is_01() || !ap_const_lv24_7B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_153_fu_1879_p0.read()) * sc_biguint<24>(ap_const_lv24_7B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_154_fu_1972_p0() {
    mul_ln1118_154_fu_1972_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2522621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_154_fu_1972_p2() {
    mul_ln1118_154_fu_1972_p2 = (!mul_ln1118_154_fu_1972_p0.read().is_01() || !ap_const_lv24_FFFEDA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_154_fu_1972_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_155_fu_1154_p0() {
    mul_ln1118_155_fu_1154_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2522621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_155_fu_1154_p2() {
    mul_ln1118_155_fu_1154_p2 = (!mul_ln1118_155_fu_1154_p0.read().is_01() || !ap_const_lv24_FFFE49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_155_fu_1154_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_156_fu_1974_p0() {
    mul_ln1118_156_fu_1974_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2522621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_156_fu_1974_p2() {
    mul_ln1118_156_fu_1974_p2 = (!mul_ln1118_156_fu_1974_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_156_fu_1974_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_157_fu_1429_p0() {
    mul_ln1118_157_fu_1429_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2522621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_157_fu_1429_p2() {
    mul_ln1118_157_fu_1429_p2 = (!mul_ln1118_157_fu_1429_p0.read().is_01() || !ap_const_lv24_FFFF96.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_157_fu_1429_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_158_fu_1521_p0() {
    mul_ln1118_158_fu_1521_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_2522635_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_158_fu_1521_p2() {
    mul_ln1118_158_fu_1521_p2 = (!mul_ln1118_158_fu_1521_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_158_fu_1521_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_159_fu_2068_p0() {
    mul_ln1118_159_fu_2068_p0 =  (sc_lv<16>) (sext_ln1118_127_fu_2522621_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_159_fu_2068_p2() {
    mul_ln1118_159_fu_2068_p2 = (!mul_ln1118_159_fu_2068_p0.read().is_01() || !ap_const_lv24_97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_159_fu_2068_p0.read()) * sc_biguint<24>(ap_const_lv24_97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_15_fu_1684_p0() {
    mul_ln1118_15_fu_1684_p0 =  (sc_lv<16>) (sext_ln1118_fu_2518535_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_15_fu_1684_p2() {
    mul_ln1118_15_fu_1684_p2 = (!mul_ln1118_15_fu_1684_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_15_fu_1684_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_160_fu_1432_p0() {
    mul_ln1118_160_fu_1432_p0 =  (sc_lv<16>) (sext_ln1118_128_fu_2522635_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_160_fu_1432_p2() {
    mul_ln1118_160_fu_1432_p2 = (!mul_ln1118_160_fu_1432_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_160_fu_1432_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_161_fu_1888_p0() {
    mul_ln1118_161_fu_1888_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_2522992_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_161_fu_1888_p2() {
    mul_ln1118_161_fu_1888_p2 = (!mul_ln1118_161_fu_1888_p0.read().is_01() || !ap_const_lv24_B0.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_161_fu_1888_p0.read()) * sc_biguint<24>(ap_const_lv24_B0);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_162_fu_2081_p0() {
    mul_ln1118_162_fu_2081_p0 =  (sc_lv<16>) (sext_ln1118_137_fu_2522984_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_162_fu_2081_p2() {
    mul_ln1118_162_fu_2081_p2 = (!mul_ln1118_162_fu_2081_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_162_fu_2081_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_163_fu_1610_p0() {
    mul_ln1118_163_fu_1610_p0 =  (sc_lv<16>) (sext_ln1118_137_fu_2522984_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_163_fu_1610_p2() {
    mul_ln1118_163_fu_1610_p2 = (!mul_ln1118_163_fu_1610_p0.read().is_01() || !ap_const_lv23_31.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_163_fu_1610_p0.read()) * sc_biguint<23>(ap_const_lv23_31);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_164_fu_2111_p0() {
    mul_ln1118_164_fu_2111_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_2522992_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_164_fu_2111_p2() {
    mul_ln1118_164_fu_2111_p2 = (!mul_ln1118_164_fu_2111_p0.read().is_01() || !ap_const_lv24_63.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_164_fu_2111_p0.read()) * sc_biguint<24>(ap_const_lv24_63);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_165_fu_1883_p0() {
    mul_ln1118_165_fu_1883_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_2522992_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_165_fu_1883_p2() {
    mul_ln1118_165_fu_1883_p2 = (!mul_ln1118_165_fu_1883_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_165_fu_1883_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_166_fu_1226_p0() {
    mul_ln1118_166_fu_1226_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_2522992_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_166_fu_1226_p2() {
    mul_ln1118_166_fu_1226_p2 = (!mul_ln1118_166_fu_1226_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_166_fu_1226_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_167_fu_1870_p0() {
    mul_ln1118_167_fu_1870_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_2522992_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_167_fu_1870_p2() {
    mul_ln1118_167_fu_1870_p2 = (!mul_ln1118_167_fu_1870_p0.read().is_01() || !ap_const_lv24_76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_167_fu_1870_p0.read()) * sc_biguint<24>(ap_const_lv24_76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_168_fu_1499_p0() {
    mul_ln1118_168_fu_1499_p0 =  (sc_lv<16>) (sext_ln1118_137_fu_2522984_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_168_fu_1499_p2() {
    mul_ln1118_168_fu_1499_p2 = (!mul_ln1118_168_fu_1499_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_168_fu_1499_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_169_fu_2000_p0() {
    mul_ln1118_169_fu_2000_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_2522992_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_169_fu_2000_p2() {
    mul_ln1118_169_fu_2000_p2 = (!mul_ln1118_169_fu_2000_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_169_fu_2000_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_16_fu_1958_p0() {
    mul_ln1118_16_fu_1958_p0 =  (sc_lv<16>) (sext_ln1118_11_fu_2518544_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_16_fu_1958_p2() {
    mul_ln1118_16_fu_1958_p2 = (!mul_ln1118_16_fu_1958_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_16_fu_1958_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_170_fu_1772_p0() {
    mul_ln1118_170_fu_1772_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_2522992_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_170_fu_1772_p2() {
    mul_ln1118_170_fu_1772_p2 = (!mul_ln1118_170_fu_1772_p0.read().is_01() || !ap_const_lv24_FFFE86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_170_fu_1772_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_171_fu_1887_p0() {
    mul_ln1118_171_fu_1887_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_2522992_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_171_fu_1887_p2() {
    mul_ln1118_171_fu_1887_p2 = (!mul_ln1118_171_fu_1887_p0.read().is_01() || !ap_const_lv24_FFFF65.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_171_fu_1887_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF65);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_172_fu_1273_p0() {
    mul_ln1118_172_fu_1273_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_2522992_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_172_fu_1273_p2() {
    mul_ln1118_172_fu_1273_p2 = (!mul_ln1118_172_fu_1273_p0.read().is_01() || !ap_const_lv24_46.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_172_fu_1273_p0.read()) * sc_biguint<24>(ap_const_lv24_46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_173_fu_1774_p0() {
    mul_ln1118_173_fu_1774_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_2522992_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_173_fu_1774_p2() {
    mul_ln1118_173_fu_1774_p2 = (!mul_ln1118_173_fu_1774_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_173_fu_1774_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_174_fu_2075_p0() {
    mul_ln1118_174_fu_2075_p0 =  (sc_lv<16>) (sext_ln1118_138_fu_2522992_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_174_fu_2075_p2() {
    mul_ln1118_174_fu_2075_p2 = (!mul_ln1118_174_fu_2075_p0.read().is_01() || !ap_const_lv24_6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_174_fu_2075_p0.read()) * sc_biguint<24>(ap_const_lv24_6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_175_fu_1175_p0() {
    mul_ln1118_175_fu_1175_p0 =  (sc_lv<16>) (sext_ln1118_137_fu_2522984_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_175_fu_1175_p2() {
    mul_ln1118_175_fu_1175_p2 = (!mul_ln1118_175_fu_1175_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_175_fu_1175_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_176_fu_1844_p0() {
    mul_ln1118_176_fu_1844_p0 =  (sc_lv<16>) (sext_ln1118_146_fu_2523342_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_176_fu_1844_p2() {
    mul_ln1118_176_fu_1844_p2 = (!mul_ln1118_176_fu_1844_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_176_fu_1844_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_177_fu_1758_p0() {
    mul_ln1118_177_fu_1758_p0 =  (sc_lv<16>) (sext_ln1118_145_fu_2523329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_177_fu_1758_p2() {
    mul_ln1118_177_fu_1758_p2 = (!mul_ln1118_177_fu_1758_p0.read().is_01() || !ap_const_lv24_97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_177_fu_1758_p0.read()) * sc_biguint<24>(ap_const_lv24_97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_178_fu_1933_p0() {
    mul_ln1118_178_fu_1933_p0 =  (sc_lv<16>) (sext_ln1118_145_fu_2523329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_178_fu_1933_p2() {
    mul_ln1118_178_fu_1933_p2 = (!mul_ln1118_178_fu_1933_p0.read().is_01() || !ap_const_lv24_FFFF8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_178_fu_1933_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_179_fu_1477_p0() {
    mul_ln1118_179_fu_1477_p0 =  (sc_lv<16>) (sext_ln1118_146_fu_2523342_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_179_fu_1477_p2() {
    mul_ln1118_179_fu_1477_p2 = (!mul_ln1118_179_fu_1477_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_179_fu_1477_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_17_fu_1777_p0() {
    mul_ln1118_17_fu_1777_p0 =  (sc_lv<16>) (sext_ln1118_11_fu_2518544_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_17_fu_1777_p2() {
    mul_ln1118_17_fu_1777_p2 = (!mul_ln1118_17_fu_1777_p0.read().is_01() || !ap_const_lv24_FFFFBD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_17_fu_1777_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_180_fu_1935_p0() {
    mul_ln1118_180_fu_1935_p0 =  (sc_lv<16>) (sext_ln1118_148_fu_2523353_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_180_fu_1935_p2() {
    mul_ln1118_180_fu_1935_p2 = (!mul_ln1118_180_fu_1935_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_180_fu_1935_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_181_fu_1849_p0() {
    mul_ln1118_181_fu_1849_p0 = sext_ln1118_147_fu_2523348_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_181_fu_1849_p2() {
    mul_ln1118_181_fu_1849_p2 = (!mul_ln1118_181_fu_1849_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_181_fu_1849_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_182_fu_1675_p0() {
    mul_ln1118_182_fu_1675_p0 =  (sc_lv<16>) (sext_ln1118_145_fu_2523329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_182_fu_1675_p2() {
    mul_ln1118_182_fu_1675_p2 = (!mul_ln1118_182_fu_1675_p0.read().is_01() || !ap_const_lv24_FFFF4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_182_fu_1675_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_183_fu_2131_p0() {
    mul_ln1118_183_fu_2131_p0 =  (sc_lv<16>) (sext_ln1118_145_fu_2523329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_183_fu_2131_p2() {
    mul_ln1118_183_fu_2131_p2 = (!mul_ln1118_183_fu_2131_p0.read().is_01() || !ap_const_lv24_4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_183_fu_2131_p0.read()) * sc_biguint<24>(ap_const_lv24_4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_184_fu_1859_p0() {
    mul_ln1118_184_fu_1859_p0 =  (sc_lv<16>) (sext_ln1118_145_fu_2523329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_184_fu_1859_p2() {
    mul_ln1118_184_fu_1859_p2 = (!mul_ln1118_184_fu_1859_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_184_fu_1859_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_185_fu_1496_p0() {
    mul_ln1118_185_fu_1496_p0 =  (sc_lv<16>) (sext_ln1118_145_fu_2523329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_185_fu_1496_p2() {
    mul_ln1118_185_fu_1496_p2 = (!mul_ln1118_185_fu_1496_p0.read().is_01() || !ap_const_lv24_CA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_185_fu_1496_p0.read()) * sc_biguint<24>(ap_const_lv24_CA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_186_fu_1861_p0() {
    mul_ln1118_186_fu_1861_p0 =  (sc_lv<16>) (sext_ln1118_145_fu_2523329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_186_fu_1861_p2() {
    mul_ln1118_186_fu_1861_p2 = (!mul_ln1118_186_fu_1861_p0.read().is_01() || !ap_const_lv24_FFFB68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_186_fu_1861_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFB68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_187_fu_1953_p0() {
    mul_ln1118_187_fu_1953_p0 =  (sc_lv<16>) (sext_ln1118_145_fu_2523329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_187_fu_1953_p2() {
    mul_ln1118_187_fu_1953_p2 = (!mul_ln1118_187_fu_1953_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_187_fu_1953_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_188_fu_1954_p0() {
    mul_ln1118_188_fu_1954_p0 =  (sc_lv<16>) (sext_ln1118_148_fu_2523353_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_188_fu_1954_p2() {
    mul_ln1118_188_fu_1954_p2 = (!mul_ln1118_188_fu_1954_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_188_fu_1954_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_189_fu_2046_p0() {
    mul_ln1118_189_fu_2046_p0 =  (sc_lv<16>) (sext_ln1118_145_fu_2523329_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_189_fu_2046_p2() {
    mul_ln1118_189_fu_2046_p2 = (!mul_ln1118_189_fu_2046_p0.read().is_01() || !ap_const_lv24_FFFFA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_189_fu_2046_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_18_fu_1323_p0() {
    mul_ln1118_18_fu_1323_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_18_fu_1323_p2() {
    mul_ln1118_18_fu_1323_p2 = (!mul_ln1118_18_fu_1323_p0.read().is_01() || !ap_const_lv24_128.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_18_fu_1323_p0.read()) * sc_biguint<24>(ap_const_lv24_128);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_190_fu_1892_p0() {
    mul_ln1118_190_fu_1892_p0 =  (sc_lv<16>) (sext_ln1118_156_fu_2523717_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_190_fu_1892_p2() {
    mul_ln1118_190_fu_1892_p2 = (!mul_ln1118_190_fu_1892_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_190_fu_1892_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_191_fu_2050_p0() {
    mul_ln1118_191_fu_2050_p0 =  (sc_lv<16>) (sext_ln1118_157_fu_2523725_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_191_fu_2050_p2() {
    mul_ln1118_191_fu_2050_p2 = (!mul_ln1118_191_fu_2050_p0.read().is_01() || !ap_const_lv24_FFFF33.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_191_fu_2050_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF33);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_192_fu_1393_p0() {
    mul_ln1118_192_fu_1393_p0 =  (sc_lv<16>) (sext_ln1118_157_fu_2523725_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_192_fu_1393_p2() {
    mul_ln1118_192_fu_1393_p2 = (!mul_ln1118_192_fu_1393_p0.read().is_01() || !ap_const_lv24_FFFF28.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_192_fu_1393_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF28);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_193_fu_1308_p0() {
    mul_ln1118_193_fu_1308_p0 =  (sc_lv<16>) (sext_ln1118_157_fu_2523725_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_193_fu_1308_p2() {
    mul_ln1118_193_fu_1308_p2 = (!mul_ln1118_193_fu_1308_p0.read().is_01() || !ap_const_lv24_FFFF26.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_193_fu_1308_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_194_fu_1909_p0() {
    mul_ln1118_194_fu_1909_p0 =  (sc_lv<16>) (sext_ln1118_157_fu_2523725_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_194_fu_1909_p2() {
    mul_ln1118_194_fu_1909_p2 = (!mul_ln1118_194_fu_1909_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_194_fu_1909_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_195_fu_1924_p0() {
    mul_ln1118_195_fu_1924_p0 =  (sc_lv<16>) (sext_ln1118_157_fu_2523725_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_195_fu_1924_p2() {
    mul_ln1118_195_fu_1924_p2 = (!mul_ln1118_195_fu_1924_p0.read().is_01() || !ap_const_lv24_FFFF8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_195_fu_1924_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_196_fu_1796_p0() {
    mul_ln1118_196_fu_1796_p0 =  (sc_lv<16>) (sext_ln1118_156_fu_2523717_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_196_fu_1796_p2() {
    mul_ln1118_196_fu_1796_p2 = (!mul_ln1118_196_fu_1796_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_196_fu_1796_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_197_fu_1811_p0() {
    mul_ln1118_197_fu_1811_p0 =  (sc_lv<16>) (sext_ln1118_157_fu_2523725_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_197_fu_1811_p2() {
    mul_ln1118_197_fu_1811_p2 = (!mul_ln1118_197_fu_1811_p0.read().is_01() || !ap_const_lv24_FFFF44.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_197_fu_1811_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF44);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_198_fu_1683_p0() {
    mul_ln1118_198_fu_1683_p0 =  (sc_lv<16>) (sext_ln1118_157_fu_2523725_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_198_fu_1683_p2() {
    mul_ln1118_198_fu_1683_p2 = (!mul_ln1118_198_fu_1683_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_198_fu_1683_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_199_fu_1212_p0() {
    mul_ln1118_199_fu_1212_p0 =  (sc_lv<16>) (sext_ln1118_156_fu_2523717_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_199_fu_1212_p2() {
    mul_ln1118_199_fu_1212_p2 = (!mul_ln1118_199_fu_1212_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_199_fu_1212_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_19_fu_1688_p0() {
    mul_ln1118_19_fu_1688_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_19_fu_1688_p2() {
    mul_ln1118_19_fu_1688_p2 = (!mul_ln1118_19_fu_1688_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_19_fu_1688_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_200_fu_1327_p0() {
    mul_ln1118_200_fu_1327_p0 =  (sc_lv<16>) (sext_ln1118_158_fu_2523736_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_200_fu_1327_p2() {
    mul_ln1118_200_fu_1327_p2 = (!mul_ln1118_200_fu_1327_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_200_fu_1327_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_201_fu_1971_p0() {
    mul_ln1118_201_fu_1971_p0 =  (sc_lv<16>) (sext_ln1118_156_fu_2523717_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_201_fu_1971_p2() {
    mul_ln1118_201_fu_1971_p2 = (!mul_ln1118_201_fu_1971_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_201_fu_1971_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_202_fu_1214_p0() {
    mul_ln1118_202_fu_1214_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2524115_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_202_fu_1214_p2() {
    mul_ln1118_202_fu_1214_p2 = (!mul_ln1118_202_fu_1214_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_202_fu_1214_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_203_fu_1715_p0() {
    mul_ln1118_203_fu_1715_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_2524107_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_203_fu_1715_p2() {
    mul_ln1118_203_fu_1715_p2 = (!mul_ln1118_203_fu_1715_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_203_fu_1715_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_204_fu_1730_p0() {
    mul_ln1118_204_fu_1730_p0 =  (sc_lv<16>) (sext_ln1118_167_fu_2524115_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_204_fu_1730_p2() {
    mul_ln1118_204_fu_1730_p2 = (!mul_ln1118_204_fu_1730_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_204_fu_1730_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_205_fu_1989_p0() {
    mul_ln1118_205_fu_1989_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_2524107_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_205_fu_1989_p2() {
    mul_ln1118_205_fu_1989_p2 = (!mul_ln1118_205_fu_1989_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_205_fu_1989_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_206_fu_1446_p0() {
    mul_ln1118_206_fu_1446_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_2524121_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_206_fu_1446_p2() {
    mul_ln1118_206_fu_1446_p2 = (!mul_ln1118_206_fu_1446_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_206_fu_1446_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_207_fu_1991_p0() {
    mul_ln1118_207_fu_1991_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_2524107_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_207_fu_1991_p2() {
    mul_ln1118_207_fu_1991_p2 = (!mul_ln1118_207_fu_1991_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_207_fu_1991_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_208_fu_1992_p0() {
    mul_ln1118_208_fu_1992_p0 =  (sc_lv<16>) (sext_ln1118_168_fu_2524121_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_208_fu_1992_p2() {
    mul_ln1118_208_fu_1992_p2 = (!mul_ln1118_208_fu_1992_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_208_fu_1992_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_209_fu_1993_p0() {
    mul_ln1118_209_fu_1993_p0 =  (sc_lv<16>) (sext_ln1118_166_fu_2524107_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_209_fu_1993_p2() {
    mul_ln1118_209_fu_1993_p2 = (!mul_ln1118_209_fu_1993_p0.read().is_01() || !ap_const_lv23_2B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_209_fu_1993_p0.read()) * sc_biguint<23>(ap_const_lv23_2B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_20_fu_1143_p0() {
    mul_ln1118_20_fu_1143_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_20_fu_1143_p2() {
    mul_ln1118_20_fu_1143_p2 = (!mul_ln1118_20_fu_1143_p0.read().is_01() || !ap_const_lv24_FFFF8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_20_fu_1143_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_210_fu_1646_p0() {
    mul_ln1118_210_fu_1646_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_210_fu_1646_p2() {
    mul_ln1118_210_fu_1646_p2 = (!mul_ln1118_210_fu_1646_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_210_fu_1646_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_211_fu_1538_p0() {
    mul_ln1118_211_fu_1538_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_211_fu_1538_p2() {
    mul_ln1118_211_fu_1538_p2 = (!mul_ln1118_211_fu_1538_p0.read().is_01() || !ap_const_lv24_FFFF24.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_211_fu_1538_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF24);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_212_fu_2085_p0() {
    mul_ln1118_212_fu_2085_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_212_fu_2085_p2() {
    mul_ln1118_212_fu_2085_p2 = (!mul_ln1118_212_fu_2085_p0.read().is_01() || !ap_const_lv24_FFFEE3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_212_fu_2085_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_213_fu_1267_p0() {
    mul_ln1118_213_fu_1267_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_213_fu_1267_p2() {
    mul_ln1118_213_fu_1267_p2 = (!mul_ln1118_213_fu_1267_p0.read().is_01() || !ap_const_lv24_99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_213_fu_1267_p0.read()) * sc_biguint<24>(ap_const_lv24_99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_214_fu_1402_p0() {
    mul_ln1118_214_fu_1402_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_214_fu_1402_p2() {
    mul_ln1118_214_fu_1402_p2 = (!mul_ln1118_214_fu_1402_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_214_fu_1402_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_215_fu_1360_p0() {
    mul_ln1118_215_fu_1360_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_215_fu_1360_p2() {
    mul_ln1118_215_fu_1360_p2 = (!mul_ln1118_215_fu_1360_p0.read().is_01() || !ap_const_lv24_FFFF59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_215_fu_1360_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_216_fu_1725_p0() {
    mul_ln1118_216_fu_1725_p0 = sext_ln1118_181_fu_2524533_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_216_fu_1725_p2() {
    mul_ln1118_216_fu_1725_p2 = (!mul_ln1118_216_fu_1725_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_216_fu_1725_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_217_fu_1544_p0() {
    mul_ln1118_217_fu_1544_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_217_fu_1544_p2() {
    mul_ln1118_217_fu_1544_p2 = (!mul_ln1118_217_fu_1544_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_217_fu_1544_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_218_fu_1727_p0() {
    mul_ln1118_218_fu_1727_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_218_fu_1727_p2() {
    mul_ln1118_218_fu_1727_p2 = (!mul_ln1118_218_fu_1727_p0.read().is_01() || !ap_const_lv24_B2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_218_fu_1727_p0.read()) * sc_biguint<24>(ap_const_lv24_B2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_219_fu_1575_p0() {
    mul_ln1118_219_fu_1575_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_219_fu_1575_p2() {
    mul_ln1118_219_fu_1575_p2 = (!mul_ln1118_219_fu_1575_p0.read().is_01() || !ap_const_lv24_EA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_219_fu_1575_p0.read()) * sc_biguint<24>(ap_const_lv24_EA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_21_fu_1739_p0() {
    mul_ln1118_21_fu_1739_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_21_fu_1739_p2() {
    mul_ln1118_21_fu_1739_p2 = (!mul_ln1118_21_fu_1739_p0.read().is_01() || !ap_const_lv24_B4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_21_fu_1739_p0.read()) * sc_biguint<24>(ap_const_lv24_B4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_220_fu_1633_p0() {
    mul_ln1118_220_fu_1633_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_220_fu_1633_p2() {
    mul_ln1118_220_fu_1633_p2 = (!mul_ln1118_220_fu_1633_p0.read().is_01() || !ap_const_lv24_FFFF5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_220_fu_1633_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_221_fu_2091_p0() {
    mul_ln1118_221_fu_2091_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_221_fu_2091_p2() {
    mul_ln1118_221_fu_2091_p2 = (!mul_ln1118_221_fu_2091_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_221_fu_2091_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_222_fu_1720_p0() {
    mul_ln1118_222_fu_1720_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_222_fu_1720_p2() {
    mul_ln1118_222_fu_1720_p2 = (!mul_ln1118_222_fu_1720_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_222_fu_1720_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_223_fu_1349_p0() {
    mul_ln1118_223_fu_1349_p0 =  (sc_lv<16>) (sext_ln1118_182_fu_2524538_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_223_fu_1349_p2() {
    mul_ln1118_223_fu_1349_p2 = (!mul_ln1118_223_fu_1349_p0.read().is_01() || !ap_const_lv24_FFFF47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_223_fu_1349_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_224_fu_1221_p0() {
    mul_ln1118_224_fu_1221_p0 = sext_ln1118_193_fu_2524908_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_224_fu_1221_p2() {
    mul_ln1118_224_fu_1221_p2 = (!mul_ln1118_224_fu_1221_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_224_fu_1221_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_225_fu_1479_p0() {
    mul_ln1118_225_fu_1479_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_2524895_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_225_fu_1479_p2() {
    mul_ln1118_225_fu_1479_p2 = (!mul_ln1118_225_fu_1479_p0.read().is_01() || !ap_const_lv24_4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_225_fu_1479_p0.read()) * sc_biguint<24>(ap_const_lv24_4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_226_fu_1494_p0() {
    mul_ln1118_226_fu_1494_p0 =  (sc_lv<16>) (sext_ln1118_194_fu_2524913_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_226_fu_1494_p2() {
    mul_ln1118_226_fu_1494_p2 = (!mul_ln1118_226_fu_1494_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_226_fu_1494_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_227_fu_1752_p0() {
    mul_ln1118_227_fu_1752_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_2524895_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_227_fu_1752_p2() {
    mul_ln1118_227_fu_1752_p2 = (!mul_ln1118_227_fu_1752_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_227_fu_1752_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_228_fu_2010_p0() {
    mul_ln1118_228_fu_2010_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_2524895_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_228_fu_2010_p2() {
    mul_ln1118_228_fu_2010_p2 = (!mul_ln1118_228_fu_2010_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_228_fu_2010_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_229_fu_1253_p0() {
    mul_ln1118_229_fu_1253_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_2524895_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_229_fu_1253_p2() {
    mul_ln1118_229_fu_1253_p2 = (!mul_ln1118_229_fu_1253_p0.read().is_01() || !ap_const_lv24_76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_229_fu_1253_p0.read()) * sc_biguint<24>(ap_const_lv24_76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_22_fu_1754_p0() {
    mul_ln1118_22_fu_1754_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_22_fu_1754_p2() {
    mul_ln1118_22_fu_1754_p2 = (!mul_ln1118_22_fu_1754_p0.read().is_01() || !ap_const_lv24_68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_22_fu_1754_p0.read()) * sc_biguint<24>(ap_const_lv24_68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_230_fu_1268_p0() {
    mul_ln1118_230_fu_1268_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_2524895_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_230_fu_1268_p2() {
    mul_ln1118_230_fu_1268_p2 = (!mul_ln1118_230_fu_1268_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_230_fu_1268_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_231_fu_1769_p0() {
    mul_ln1118_231_fu_1769_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_2524895_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_231_fu_1769_p2() {
    mul_ln1118_231_fu_1769_p2 = (!mul_ln1118_231_fu_1769_p0.read().is_01() || !ap_const_lv24_FFFEEB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_231_fu_1769_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_232_fu_1784_p0() {
    mul_ln1118_232_fu_1784_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_2524895_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_232_fu_1784_p2() {
    mul_ln1118_232_fu_1784_p2 = (!mul_ln1118_232_fu_1784_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_232_fu_1784_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_233_fu_1415_p0() {
    mul_ln1118_233_fu_1415_p0 =  (sc_lv<16>) (sext_ln1118_194_fu_2524913_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_233_fu_1415_p2() {
    mul_ln1118_233_fu_1415_p2 = (!mul_ln1118_233_fu_1415_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_233_fu_1415_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_234_fu_1416_p0() {
    mul_ln1118_234_fu_1416_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_2524895_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_234_fu_1416_p2() {
    mul_ln1118_234_fu_1416_p2 = (!mul_ln1118_234_fu_1416_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_234_fu_1416_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_235_fu_1874_p0() {
    mul_ln1118_235_fu_1874_p0 =  (sc_lv<16>) (sext_ln1118_192_fu_2524895_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_235_fu_1874_p2() {
    mul_ln1118_235_fu_1874_p2 = (!mul_ln1118_235_fu_1874_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_235_fu_1874_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_236_fu_1875_p0() {
    mul_ln1118_236_fu_1875_p0 =  (sc_lv<16>) (sext_ln1118_194_fu_2524913_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_236_fu_1875_p2() {
    mul_ln1118_236_fu_1875_p2 = (!mul_ln1118_236_fu_1875_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_236_fu_1875_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_237_fu_1702_p0() {
    mul_ln1118_237_fu_1702_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_2525276_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_237_fu_1702_p2() {
    mul_ln1118_237_fu_1702_p2 = (!mul_ln1118_237_fu_1702_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_237_fu_1702_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_238_fu_1877_p0() {
    mul_ln1118_238_fu_1877_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_2525276_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_238_fu_1877_p2() {
    mul_ln1118_238_fu_1877_p2 = (!mul_ln1118_238_fu_1877_p0.read().is_01() || !ap_const_lv24_B8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_238_fu_1877_p0.read()) * sc_biguint<24>(ap_const_lv24_B8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_239_fu_1334_p0() {
    mul_ln1118_239_fu_1334_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_2525276_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_239_fu_1334_p2() {
    mul_ln1118_239_fu_1334_p2 = (!mul_ln1118_239_fu_1334_p0.read().is_01() || !ap_const_lv24_FFFF97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_239_fu_1334_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_23_fu_1240_p0() {
    mul_ln1118_23_fu_1240_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_23_fu_1240_p2() {
    mul_ln1118_23_fu_1240_p2 = (!mul_ln1118_23_fu_1240_p0.read().is_01() || !ap_const_lv24_A9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_23_fu_1240_p0.read()) * sc_biguint<24>(ap_const_lv24_A9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_240_fu_1151_p0() {
    mul_ln1118_240_fu_1151_p0 =  (sc_lv<16>) (sext_ln1118_205_fu_2525293_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_240_fu_1151_p2() {
    mul_ln1118_240_fu_1151_p2 = (!mul_ln1118_240_fu_1151_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_240_fu_1151_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_241_fu_1607_p0() {
    mul_ln1118_241_fu_1607_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_2525276_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_241_fu_1607_p2() {
    mul_ln1118_241_fu_1607_p2 = (!mul_ln1118_241_fu_1607_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_241_fu_1607_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_242_fu_1153_p0() {
    mul_ln1118_242_fu_1153_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_2525276_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_242_fu_1153_p2() {
    mul_ln1118_242_fu_1153_p2 = (!mul_ln1118_242_fu_1153_p0.read().is_01() || !ap_const_lv24_FFFFA3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_242_fu_1153_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_243_fu_1427_p0() {
    mul_ln1118_243_fu_1427_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_2525276_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_243_fu_1427_p2() {
    mul_ln1118_243_fu_1427_p2 = (!mul_ln1118_243_fu_1427_p0.read().is_01() || !ap_const_lv24_8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_243_fu_1427_p0.read()) * sc_biguint<24>(ap_const_lv24_8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_244_fu_1428_p0() {
    mul_ln1118_244_fu_1428_p0 =  (sc_lv<16>) (sext_ln1118_207_fu_2525305_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_244_fu_1428_p2() {
    mul_ln1118_244_fu_1428_p2 = (!mul_ln1118_244_fu_1428_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_244_fu_1428_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_245_fu_1338_p0() {
    mul_ln1118_245_fu_1338_p0 =  (sc_lv<16>) (sext_ln1118_207_fu_2525305_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_245_fu_1338_p2() {
    mul_ln1118_245_fu_1338_p2 = (!mul_ln1118_245_fu_1338_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_245_fu_1338_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_246_fu_1885_p0() {
    mul_ln1118_246_fu_1885_p0 =  (sc_lv<16>) (sext_ln1118_205_fu_2525293_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_246_fu_1885_p2() {
    mul_ln1118_246_fu_1885_p2 = (!mul_ln1118_246_fu_1885_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_246_fu_1885_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_247_fu_1629_p0() {
    mul_ln1118_247_fu_1629_p0 =  (sc_lv<16>) (sext_ln1118_205_fu_2525293_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_247_fu_1629_p2() {
    mul_ln1118_247_fu_1629_p2 = (!mul_ln1118_247_fu_1629_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_247_fu_1629_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_248_fu_2130_p0() {
    mul_ln1118_248_fu_2130_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_2525276_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_248_fu_2130_p2() {
    mul_ln1118_248_fu_2130_p2 = (!mul_ln1118_248_fu_2130_p0.read().is_01() || !ap_const_lv24_FFFF33.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_248_fu_2130_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF33);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_249_fu_1759_p0() {
    mul_ln1118_249_fu_1759_p0 =  (sc_lv<16>) (sext_ln1118_205_fu_2525293_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_249_fu_1759_p2() {
    mul_ln1118_249_fu_1759_p2 = (!mul_ln1118_249_fu_1759_p0.read().is_01() || !ap_const_lv23_33.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_249_fu_1759_p0.read()) * sc_biguint<23>(ap_const_lv23_33);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_24_fu_1884_p0() {
    mul_ln1118_24_fu_1884_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_24_fu_1884_p2() {
    mul_ln1118_24_fu_1884_p2 = (!mul_ln1118_24_fu_1884_p0.read().is_01() || !ap_const_lv24_9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_24_fu_1884_p0.read()) * sc_biguint<24>(ap_const_lv24_9C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_250_fu_1531_p0() {
    mul_ln1118_250_fu_1531_p0 = sext_ln1118_204_fu_2525288_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_250_fu_1531_p2() {
    mul_ln1118_250_fu_1531_p2 = (!mul_ln1118_250_fu_1531_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_250_fu_1531_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_251_fu_1689_p0() {
    mul_ln1118_251_fu_1689_p0 =  (sc_lv<16>) (sext_ln1118_203_fu_2525276_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_251_fu_1689_p2() {
    mul_ln1118_251_fu_1689_p2 = (!mul_ln1118_251_fu_1689_p0.read().is_01() || !ap_const_lv24_7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_251_fu_1689_p0.read()) * sc_biguint<24>(ap_const_lv24_7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_252_fu_1275_p0() {
    mul_ln1118_252_fu_1275_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2525695_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_252_fu_1275_p2() {
    mul_ln1118_252_fu_1275_p2 = (!mul_ln1118_252_fu_1275_p0.read().is_01() || !ap_const_lv23_7FFFC6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_252_fu_1275_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_253_fu_1919_p0() {
    mul_ln1118_253_fu_1919_p0 =  (sc_lv<16>) (sext_ln1118_216_fu_2525675_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_253_fu_1919_p2() {
    mul_ln1118_253_fu_1919_p2 = (!mul_ln1118_253_fu_1919_p0.read().is_01() || !ap_const_lv24_FFFF22.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_253_fu_1919_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF22);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_254_fu_1548_p0() {
    mul_ln1118_254_fu_1548_p0 =  (sc_lv<16>) (sext_ln1118_216_fu_2525675_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_254_fu_1548_p2() {
    mul_ln1118_254_fu_1548_p2 = (!mul_ln1118_254_fu_1548_p0.read().is_01() || !ap_const_lv24_FFFEB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_254_fu_1548_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEB1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_255_fu_1806_p0() {
    mul_ln1118_255_fu_1806_p0 =  (sc_lv<16>) (sext_ln1118_216_fu_2525675_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_255_fu_1806_p2() {
    mul_ln1118_255_fu_1806_p2 = (!mul_ln1118_255_fu_1806_p0.read().is_01() || !ap_const_lv24_FFFF96.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_255_fu_1806_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF96);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_256_fu_1435_p0() {
    mul_ln1118_256_fu_1435_p0 =  (sc_lv<16>) (sext_ln1118_216_fu_2525675_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_256_fu_1435_p2() {
    mul_ln1118_256_fu_1435_p2 = (!mul_ln1118_256_fu_1435_p0.read().is_01() || !ap_const_lv24_FFFF1C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_256_fu_1435_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF1C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_257_fu_1836_p0() {
    mul_ln1118_257_fu_1836_p0 =  (sc_lv<16>) (sext_ln1118_216_fu_2525675_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_257_fu_1836_p2() {
    mul_ln1118_257_fu_1836_p2 = (!mul_ln1118_257_fu_1836_p0.read().is_01() || !ap_const_lv24_FFFFA9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_257_fu_1836_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_258_fu_1322_p0() {
    mul_ln1118_258_fu_1322_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2525695_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_258_fu_1322_p2() {
    mul_ln1118_258_fu_1322_p2 = (!mul_ln1118_258_fu_1322_p0.read().is_01() || !ap_const_lv23_39.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_258_fu_1322_p0.read()) * sc_biguint<23>(ap_const_lv23_39);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_259_fu_1337_p0() {
    mul_ln1118_259_fu_1337_p0 =  (sc_lv<16>) (sext_ln1118_216_fu_2525675_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_259_fu_1337_p2() {
    mul_ln1118_259_fu_1337_p2 = (!mul_ln1118_259_fu_1337_p0.read().is_01() || !ap_const_lv24_E4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_259_fu_1337_p0.read()) * sc_biguint<24>(ap_const_lv24_E4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_25_fu_1413_p0() {
    mul_ln1118_25_fu_1413_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_25_fu_1413_p2() {
    mul_ln1118_25_fu_1413_p2 = (!mul_ln1118_25_fu_1413_p0.read().is_01() || !ap_const_lv24_FFFF57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_25_fu_1413_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF57);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_260_fu_1838_p0() {
    mul_ln1118_260_fu_1838_p0 =  (sc_lv<16>) (sext_ln1118_216_fu_2525675_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_260_fu_1838_p2() {
    mul_ln1118_260_fu_1838_p2 = (!mul_ln1118_260_fu_1838_p0.read().is_01() || !ap_const_lv24_66.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_260_fu_1838_p0.read()) * sc_biguint<24>(ap_const_lv24_66);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_261_fu_1224_p0() {
    mul_ln1118_261_fu_1224_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2525695_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_261_fu_1224_p2() {
    mul_ln1118_261_fu_1224_p2 = (!mul_ln1118_261_fu_1224_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_261_fu_1224_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_262_fu_2017_p0() {
    mul_ln1118_262_fu_2017_p0 =  (sc_lv<16>) (sext_ln1118_219_fu_2525695_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_262_fu_2017_p2() {
    mul_ln1118_262_fu_2017_p2 = (!mul_ln1118_262_fu_2017_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_262_fu_2017_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_263_fu_2018_p0() {
    mul_ln1118_263_fu_2018_p0 =  (sc_lv<16>) (sext_ln1118_218_fu_2525690_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_263_fu_2018_p2() {
    mul_ln1118_263_fu_2018_p2 = (!mul_ln1118_263_fu_2018_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_263_fu_2018_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_264_fu_1301_p0() {
    mul_ln1118_264_fu_1301_p0 =  (sc_lv<16>) (sext_ln1118_229_fu_2526099_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_264_fu_1301_p2() {
    mul_ln1118_264_fu_1301_p2 = (!mul_ln1118_264_fu_1301_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_264_fu_1301_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_265_fu_1846_p0() {
    mul_ln1118_265_fu_1846_p0 =  (sc_lv<16>) (sext_ln1118_229_fu_2526099_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_265_fu_1846_p2() {
    mul_ln1118_265_fu_1846_p2 = (!mul_ln1118_265_fu_1846_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_265_fu_1846_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_266_fu_2021_p0() {
    mul_ln1118_266_fu_2021_p0 =  (sc_lv<16>) (sext_ln1118_229_fu_2526099_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_266_fu_2021_p2() {
    mul_ln1118_266_fu_2021_p2 = (!mul_ln1118_266_fu_2021_p0.read().is_01() || !ap_const_lv23_39.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_266_fu_2021_p0.read()) * sc_biguint<23>(ap_const_lv23_39);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_267_fu_1565_p0() {
    mul_ln1118_267_fu_1565_p0 =  (sc_lv<16>) (sext_ln1118_229_fu_2526099_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_267_fu_1565_p2() {
    mul_ln1118_267_fu_1565_p2 = (!mul_ln1118_267_fu_1565_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_267_fu_1565_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_268_fu_1286_p0() {
    mul_ln1118_268_fu_1286_p0 =  (sc_lv<16>) (sext_ln1118_230_fu_2526108_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_268_fu_1286_p2() {
    mul_ln1118_268_fu_1286_p2 = (!mul_ln1118_268_fu_1286_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_268_fu_1286_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_269_fu_1516_p0() {
    mul_ln1118_269_fu_1516_p0 =  (sc_lv<16>) (sext_ln1118_229_fu_2526099_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_269_fu_1516_p2() {
    mul_ln1118_269_fu_1516_p2 = (!mul_ln1118_269_fu_1516_p0.read().is_01() || !ap_const_lv23_31.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_269_fu_1516_p0.read()) * sc_biguint<23>(ap_const_lv23_31);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_26_fu_1385_p0() {
    mul_ln1118_26_fu_1385_p0 = sext_ln1118_27_fu_2518992_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_26_fu_1385_p2() {
    mul_ln1118_26_fu_1385_p2 = (!mul_ln1118_26_fu_1385_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_26_fu_1385_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_270_fu_2039_p0() {
    mul_ln1118_270_fu_2039_p0 =  (sc_lv<16>) (sext_ln1118_230_fu_2526108_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_270_fu_2039_p2() {
    mul_ln1118_270_fu_2039_p2 = (!mul_ln1118_270_fu_2039_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_270_fu_2039_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_271_fu_1562_p0() {
    mul_ln1118_271_fu_1562_p0 =  (sc_lv<16>) (sext_ln1118_230_fu_2526108_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_271_fu_1562_p2() {
    mul_ln1118_271_fu_1562_p2 = (!mul_ln1118_271_fu_1562_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_271_fu_1562_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_272_fu_1290_p0() {
    mul_ln1118_272_fu_1290_p0 =  (sc_lv<16>) (sext_ln1118_230_fu_2526108_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_272_fu_1290_p2() {
    mul_ln1118_272_fu_1290_p2 = (!mul_ln1118_272_fu_1290_p0.read().is_01() || !ap_const_lv22_3FFFEB.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_272_fu_1290_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_273_fu_2019_p0() {
    mul_ln1118_273_fu_2019_p0 =  (sc_lv<16>) (sext_ln1118_243_fu_2526532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_273_fu_2019_p2() {
    mul_ln1118_273_fu_2019_p2 = (!mul_ln1118_273_fu_2019_p0.read().is_01() || !ap_const_lv24_FFFF07.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_273_fu_2019_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF07);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_274_fu_1929_p0() {
    mul_ln1118_274_fu_1929_p0 = sext_ln1118_244_fu_2526545_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_274_fu_1929_p2() {
    mul_ln1118_274_fu_1929_p2 = (!mul_ln1118_274_fu_1929_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_274_fu_1929_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_275_fu_1926_p0() {
    mul_ln1118_275_fu_1926_p0 =  (sc_lv<16>) (sext_ln1118_243_fu_2526532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_275_fu_1926_p2() {
    mul_ln1118_275_fu_1926_p2 = (!mul_ln1118_275_fu_1926_p0.read().is_01() || !ap_const_lv24_A7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_275_fu_1926_p0.read()) * sc_biguint<24>(ap_const_lv24_A7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_276_fu_1312_p0() {
    mul_ln1118_276_fu_1312_p0 =  (sc_lv<16>) (sext_ln1118_243_fu_2526532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_276_fu_1312_p2() {
    mul_ln1118_276_fu_1312_p2 = (!mul_ln1118_276_fu_1312_p0.read().is_01() || !ap_const_lv24_4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_276_fu_1312_p0.read()) * sc_biguint<24>(ap_const_lv24_4B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_277_fu_1570_p0() {
    mul_ln1118_277_fu_1570_p0 =  (sc_lv<16>) (sext_ln1118_243_fu_2526532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_277_fu_1570_p2() {
    mul_ln1118_277_fu_1570_p2 = (!mul_ln1118_277_fu_1570_p0.read().is_01() || !ap_const_lv24_8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_277_fu_1570_p0.read()) * sc_biguint<24>(ap_const_lv24_8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_278_fu_1199_p0() {
    mul_ln1118_278_fu_1199_p0 =  (sc_lv<16>) (sext_ln1118_242_fu_2526526_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_278_fu_1199_p2() {
    mul_ln1118_278_fu_1199_p2 = (!mul_ln1118_278_fu_1199_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_278_fu_1199_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_279_fu_2086_p0() {
    mul_ln1118_279_fu_2086_p0 =  (sc_lv<16>) (sext_ln1118_242_fu_2526526_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_279_fu_2086_p2() {
    mul_ln1118_279_fu_2086_p2 = (!mul_ln1118_279_fu_2086_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_279_fu_2086_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_27_fu_1643_p0() {
    mul_ln1118_27_fu_1643_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_27_fu_1643_p2() {
    mul_ln1118_27_fu_1643_p2 = (!mul_ln1118_27_fu_1643_p0.read().is_01() || !ap_const_lv24_FFFEF5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_27_fu_1643_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_280_fu_1329_p0() {
    mul_ln1118_280_fu_1329_p0 =  (sc_lv<16>) (sext_ln1118_243_fu_2526532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_280_fu_1329_p2() {
    mul_ln1118_280_fu_1329_p2 = (!mul_ln1118_280_fu_1329_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_280_fu_1329_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_281_fu_1587_p0() {
    mul_ln1118_281_fu_1587_p0 =  (sc_lv<16>) (sext_ln1118_243_fu_2526532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_281_fu_1587_p2() {
    mul_ln1118_281_fu_1587_p2 = (!mul_ln1118_281_fu_1587_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_281_fu_1587_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_282_fu_1216_p0() {
    mul_ln1118_282_fu_1216_p0 =  (sc_lv<16>) (sext_ln1118_243_fu_2526532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_282_fu_1216_p2() {
    mul_ln1118_282_fu_1216_p2 = (!mul_ln1118_282_fu_1216_p0.read().is_01() || !ap_const_lv24_4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_282_fu_1216_p0.read()) * sc_biguint<24>(ap_const_lv24_4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_283_fu_1474_p0() {
    mul_ln1118_283_fu_1474_p0 =  (sc_lv<16>) (sext_ln1118_243_fu_2526532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_283_fu_1474_p2() {
    mul_ln1118_283_fu_1474_p2 = (!mul_ln1118_283_fu_1474_p0.read().is_01() || !ap_const_lv24_FFFEE4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_283_fu_1474_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEE4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_284_fu_1246_p0() {
    mul_ln1118_284_fu_1246_p0 =  (sc_lv<16>) (sext_ln1118_243_fu_2526532_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_284_fu_1246_p2() {
    mul_ln1118_284_fu_1246_p2 = (!mul_ln1118_284_fu_1246_p0.read().is_01() || !ap_const_lv24_79.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_284_fu_1246_p0.read()) * sc_biguint<24>(ap_const_lv24_79);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_285_fu_1361_p0() {
    mul_ln1118_285_fu_1361_p0 =  (sc_lv<16>) (sext_ln1118_258_fu_2526936_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_285_fu_1361_p2() {
    mul_ln1118_285_fu_1361_p2 = (!mul_ln1118_285_fu_1361_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_285_fu_1361_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_286_fu_1619_p0() {
    mul_ln1118_286_fu_1619_p0 =  (sc_lv<16>) (sext_ln1118_257_fu_2526928_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_286_fu_1619_p2() {
    mul_ln1118_286_fu_1619_p2 = (!mul_ln1118_286_fu_1619_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_286_fu_1619_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_287_fu_1391_p0() {
    mul_ln1118_287_fu_1391_p0 =  (sc_lv<16>) (sext_ln1118_257_fu_2526928_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_287_fu_1391_p2() {
    mul_ln1118_287_fu_1391_p2 = (!mul_ln1118_287_fu_1391_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_287_fu_1391_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_288_fu_1506_p0() {
    mul_ln1118_288_fu_1506_p0 = sext_ln1118_259_fu_2526942_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_288_fu_1506_p2() {
    mul_ln1118_288_fu_1506_p2 = (!mul_ln1118_288_fu_1506_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_288_fu_1506_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_289_fu_1764_p0() {
    mul_ln1118_289_fu_1764_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_2526947_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_289_fu_1764_p2() {
    mul_ln1118_289_fu_1764_p2 = (!mul_ln1118_289_fu_1764_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_289_fu_1764_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_28_fu_1658_p0() {
    mul_ln1118_28_fu_1658_p0 = sext_ln1118_26_fu_2518987_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_28_fu_1658_p2() {
    mul_ln1118_28_fu_1658_p2 = (!mul_ln1118_28_fu_1658_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_28_fu_1658_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_290_fu_1160_p0() {
    mul_ln1118_290_fu_1160_p0 =  (sc_lv<16>) (sext_ln1118_257_fu_2526928_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_290_fu_1160_p2() {
    mul_ln1118_290_fu_1160_p2 = (!mul_ln1118_290_fu_1160_p0.read().is_01() || !ap_const_lv24_73.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_290_fu_1160_p0.read()) * sc_biguint<24>(ap_const_lv24_73);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_291_fu_1618_p0() {
    mul_ln1118_291_fu_1618_p0 =  (sc_lv<16>) (sext_ln1118_257_fu_2526928_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_291_fu_1618_p2() {
    mul_ln1118_291_fu_1618_p2 = (!mul_ln1118_291_fu_1618_p0.read().is_01() || !ap_const_lv24_98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_291_fu_1618_p0.read()) * sc_biguint<24>(ap_const_lv24_98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_292_fu_1523_p0() {
    mul_ln1118_292_fu_1523_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_2526947_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_292_fu_1523_p2() {
    mul_ln1118_292_fu_1523_p2 = (!mul_ln1118_292_fu_1523_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_292_fu_1523_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_293_fu_1816_p0() {
    mul_ln1118_293_fu_1816_p0 =  (sc_lv<16>) (sext_ln1118_258_fu_2526936_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_293_fu_1816_p2() {
    mul_ln1118_293_fu_1816_p2 = (!mul_ln1118_293_fu_1816_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_293_fu_1816_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_294_fu_1621_p0() {
    mul_ln1118_294_fu_1621_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_2526947_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_294_fu_1621_p2() {
    mul_ln1118_294_fu_1621_p2 = (!mul_ln1118_294_fu_1621_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_294_fu_1621_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_295_fu_1165_p0() {
    mul_ln1118_295_fu_1165_p0 =  (sc_lv<16>) (sext_ln1118_260_fu_2526947_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_295_fu_1165_p2() {
    mul_ln1118_295_fu_1165_p2 = (!mul_ln1118_295_fu_1165_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_295_fu_1165_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_296_fu_1990_p0() {
    mul_ln1118_296_fu_1990_p0 =  (sc_lv<16>) (sext_ln1118_277_fu_2527374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_296_fu_1990_p2() {
    mul_ln1118_296_fu_1990_p2 = (!mul_ln1118_296_fu_1990_p0.read().is_01() || !ap_const_lv24_FFFF7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_296_fu_1990_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_297_fu_1445_p0() {
    mul_ln1118_297_fu_1445_p0 =  (sc_lv<16>) (sext_ln1118_277_fu_2527374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_297_fu_1445_p2() {
    mul_ln1118_297_fu_1445_p2 = (!mul_ln1118_297_fu_1445_p0.read().is_01() || !ap_const_lv24_D7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_297_fu_1445_p0.read()) * sc_biguint<24>(ap_const_lv24_D7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_298_fu_1719_p0() {
    mul_ln1118_298_fu_1719_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2527349_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_298_fu_1719_p2() {
    mul_ln1118_298_fu_1719_p2 = (!mul_ln1118_298_fu_1719_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_298_fu_1719_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_299_fu_1902_p0() {
    mul_ln1118_299_fu_1902_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2527349_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_299_fu_1902_p2() {
    mul_ln1118_299_fu_1902_p2 = (!mul_ln1118_299_fu_1902_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_299_fu_1902_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_29_fu_1530_p0() {
    mul_ln1118_29_fu_1530_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_29_fu_1530_p2() {
    mul_ln1118_29_fu_1530_p2 = (!mul_ln1118_29_fu_1530_p0.read().is_01() || !ap_const_lv24_4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_29_fu_1530_p0.read()) * sc_biguint<24>(ap_const_lv24_4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_300_fu_1539_p0() {
    mul_ln1118_300_fu_1539_p0 = sext_ln1118_274_fu_2527361_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_300_fu_1539_p2() {
    mul_ln1118_300_fu_1539_p2 = (!mul_ln1118_300_fu_1539_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_300_fu_1539_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_301_fu_1995_p0() {
    mul_ln1118_301_fu_1995_p0 =  (sc_lv<16>) (sext_ln1118_277_fu_2527374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_301_fu_1995_p2() {
    mul_ln1118_301_fu_1995_p2 = (!mul_ln1118_301_fu_1995_p0.read().is_01() || !ap_const_lv24_FFFF30.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_301_fu_1995_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF30);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_302_fu_1177_p0() {
    mul_ln1118_302_fu_1177_p0 = sext_ln1118_273_fu_2527356_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_302_fu_1177_p2() {
    mul_ln1118_302_fu_1177_p2 = (!mul_ln1118_302_fu_1177_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_302_fu_1177_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_303_fu_1724_p0() {
    mul_ln1118_303_fu_1724_p0 =  (sc_lv<16>) (sext_ln1118_272_fu_2527349_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_303_fu_1724_p2() {
    mul_ln1118_303_fu_1724_p2 = (!mul_ln1118_303_fu_1724_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_303_fu_1724_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_304_fu_1466_p0() {
    mul_ln1118_304_fu_1466_p0 =  (sc_lv<16>) (sext_ln1118_277_fu_2527374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_304_fu_1466_p2() {
    mul_ln1118_304_fu_1466_p2 = (!mul_ln1118_304_fu_1466_p0.read().is_01() || !ap_const_lv24_FFFF52.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_304_fu_1466_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF52);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_305_fu_1775_p0() {
    mul_ln1118_305_fu_1775_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2527750_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_305_fu_1775_p2() {
    mul_ln1118_305_fu_1775_p2 = (!mul_ln1118_305_fu_1775_p0.read().is_01() || !ap_const_lv24_FFFF34.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_305_fu_1775_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF34);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_306_fu_1353_p0() {
    mul_ln1118_306_fu_1353_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2527750_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_306_fu_1353_p2() {
    mul_ln1118_306_fu_1353_p2 = (!mul_ln1118_306_fu_1353_p0.read().is_01() || !ap_const_lv24_5F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_306_fu_1353_p0.read()) * sc_biguint<24>(ap_const_lv24_5F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_307_fu_1997_p0() {
    mul_ln1118_307_fu_1997_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2527750_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_307_fu_1997_p2() {
    mul_ln1118_307_fu_1997_p2 = (!mul_ln1118_307_fu_1997_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_307_fu_1997_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_308_fu_1383_p0() {
    mul_ln1118_308_fu_1383_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2527750_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_308_fu_1383_p2() {
    mul_ln1118_308_fu_1383_p2 = (!mul_ln1118_308_fu_1383_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_308_fu_1383_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_309_fu_1255_p0() {
    mul_ln1118_309_fu_1255_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2527750_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_309_fu_1255_p2() {
    mul_ln1118_309_fu_1255_p2 = (!mul_ln1118_309_fu_1255_p0.read().is_01() || !ap_const_lv24_45.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_309_fu_1255_p0.read()) * sc_biguint<24>(ap_const_lv24_45);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_30_fu_1545_p0() {
    mul_ln1118_30_fu_1545_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_30_fu_1545_p2() {
    mul_ln1118_30_fu_1545_p2 = (!mul_ln1118_30_fu_1545_p0.read().is_01() || !ap_const_lv24_5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_30_fu_1545_p0.read()) * sc_biguint<24>(ap_const_lv24_5E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_310_fu_1270_p0() {
    mul_ln1118_310_fu_1270_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_2527769_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_310_fu_1270_p2() {
    mul_ln1118_310_fu_1270_p2 = (!mul_ln1118_310_fu_1270_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_310_fu_1270_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_311_fu_1771_p0() {
    mul_ln1118_311_fu_1771_p0 =  (sc_lv<16>) (sext_ln1118_289_fu_2527769_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_311_fu_1771_p2() {
    mul_ln1118_311_fu_1771_p2 = (!mul_ln1118_311_fu_1771_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_311_fu_1771_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_312_fu_2029_p0() {
    mul_ln1118_312_fu_2029_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2527750_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_312_fu_2029_p2() {
    mul_ln1118_312_fu_2029_p2 = (!mul_ln1118_312_fu_2029_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_312_fu_2029_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_313_fu_1272_p0() {
    mul_ln1118_313_fu_1272_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2527750_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_313_fu_1272_p2() {
    mul_ln1118_313_fu_1272_p2 = (!mul_ln1118_313_fu_1272_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_313_fu_1272_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_314_fu_1916_p0() {
    mul_ln1118_314_fu_1916_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2527750_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_314_fu_1916_p2() {
    mul_ln1118_314_fu_1916_p2 = (!mul_ln1118_314_fu_1916_p0.read().is_01() || !ap_const_lv24_FFFF4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_314_fu_1916_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_315_fu_1159_p0() {
    mul_ln1118_315_fu_1159_p0 =  (sc_lv<16>) (sext_ln1118_288_fu_2527763_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_315_fu_1159_p2() {
    mul_ln1118_315_fu_1159_p2 = (!mul_ln1118_315_fu_1159_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_315_fu_1159_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_316_fu_1946_p0() {
    mul_ln1118_316_fu_1946_p0 =  (sc_lv<16>) (sext_ln1118_288_fu_2527763_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_316_fu_1946_p2() {
    mul_ln1118_316_fu_1946_p2 = (!mul_ln1118_316_fu_1946_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_316_fu_1946_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_317_fu_1189_p0() {
    mul_ln1118_317_fu_1189_p0 =  (sc_lv<16>) (sext_ln1118_287_fu_2527750_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_317_fu_1189_p2() {
    mul_ln1118_317_fu_1189_p2 = (!mul_ln1118_317_fu_1189_p0.read().is_01() || !ap_const_lv24_FFFF06.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_317_fu_1189_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF06);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_318_fu_1761_p0() {
    mul_ln1118_318_fu_1761_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_2528120_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_318_fu_1761_p2() {
    mul_ln1118_318_fu_1761_p2 = (!mul_ln1118_318_fu_1761_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_318_fu_1761_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_319_fu_2132_p0() {
    mul_ln1118_319_fu_2132_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_2528120_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_319_fu_2132_p2() {
    mul_ln1118_319_fu_2132_p2 = (!mul_ln1118_319_fu_2132_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_319_fu_2132_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_31_fu_1803_p0() {
    mul_ln1118_31_fu_1803_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_31_fu_1803_p2() {
    mul_ln1118_31_fu_1803_p2 = (!mul_ln1118_31_fu_1803_p0.read().is_01() || !ap_const_lv24_FFFFA8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_31_fu_1803_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_320_fu_2133_p0() {
    mul_ln1118_320_fu_2133_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_2528120_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_320_fu_2133_p2() {
    mul_ln1118_320_fu_2133_p2 = (!mul_ln1118_320_fu_2133_p0.read().is_01() || !ap_const_lv23_31.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_320_fu_2133_p0.read()) * sc_biguint<23>(ap_const_lv23_31);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_321_fu_1220_p0() {
    mul_ln1118_321_fu_1220_p0 = sext_ln1118_302_fu_2528132_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_321_fu_1220_p2() {
    mul_ln1118_321_fu_1220_p2 = (!mul_ln1118_321_fu_1220_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_321_fu_1220_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_322_fu_2135_p0() {
    mul_ln1118_322_fu_2135_p0 =  (sc_lv<16>) (sext_ln1118_299_fu_2528111_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_322_fu_2135_p2() {
    mul_ln1118_322_fu_2135_p2 = (!mul_ln1118_322_fu_2135_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_322_fu_2135_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_323_fu_1766_p0() {
    mul_ln1118_323_fu_1766_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_2528120_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_323_fu_1766_p2() {
    mul_ln1118_323_fu_1766_p2 = (!mul_ln1118_323_fu_1766_p0.read().is_01() || !ap_const_lv23_37.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_323_fu_1766_p0.read()) * sc_biguint<23>(ap_const_lv23_37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_324_fu_1315_p0() {
    mul_ln1118_324_fu_1315_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_2528120_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_324_fu_1315_p2() {
    mul_ln1118_324_fu_1315_p2 = (!mul_ln1118_324_fu_1315_p0.read().is_01() || !ap_const_lv23_39.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_324_fu_1315_p0.read()) * sc_biguint<23>(ap_const_lv23_39);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_325_fu_1762_p0() {
    mul_ln1118_325_fu_1762_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_2528120_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_325_fu_1762_p2() {
    mul_ln1118_325_fu_1762_p2 = (!mul_ln1118_325_fu_1762_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_325_fu_1762_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_326_fu_1490_p0() {
    mul_ln1118_326_fu_1490_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_2528105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_326_fu_1490_p2() {
    mul_ln1118_326_fu_1490_p2 = (!mul_ln1118_326_fu_1490_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_326_fu_1490_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_327_fu_2037_p0() {
    mul_ln1118_327_fu_2037_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_2528120_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_327_fu_2037_p2() {
    mul_ln1118_327_fu_2037_p2 = (!mul_ln1118_327_fu_2037_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_327_fu_2037_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_328_fu_1492_p0() {
    mul_ln1118_328_fu_1492_p0 =  (sc_lv<16>) (sext_ln1118_301_fu_2528120_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_328_fu_1492_p2() {
    mul_ln1118_328_fu_1492_p2 = (!mul_ln1118_328_fu_1492_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_328_fu_1492_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_329_fu_1948_p0() {
    mul_ln1118_329_fu_1948_p0 =  (sc_lv<16>) (sext_ln1118_298_fu_2528105_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_329_fu_1948_p2() {
    mul_ln1118_329_fu_1948_p2 = (!mul_ln1118_329_fu_1948_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_329_fu_1948_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_32_fu_1818_p0() {
    mul_ln1118_32_fu_1818_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_32_fu_1818_p2() {
    mul_ln1118_32_fu_1818_p2 = (!mul_ln1118_32_fu_1818_p0.read().is_01() || !ap_const_lv24_C9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_32_fu_1818_p0.read()) * sc_biguint<24>(ap_const_lv24_C9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_330_fu_1403_p0() {
    mul_ln1118_330_fu_1403_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_2528467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_330_fu_1403_p2() {
    mul_ln1118_330_fu_1403_p2 = (!mul_ln1118_330_fu_1403_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_330_fu_1403_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_331_fu_1677_p0() {
    mul_ln1118_331_fu_1677_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_2528474_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_331_fu_1677_p2() {
    mul_ln1118_331_fu_1677_p2 = (!mul_ln1118_331_fu_1677_p0.read().is_01() || !ap_const_lv24_D6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_331_fu_1677_p0.read()) * sc_biguint<24>(ap_const_lv24_D6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_332_fu_1223_p0() {
    mul_ln1118_332_fu_1223_p0 =  (sc_lv<16>) (sext_ln1118_308_fu_2528457_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_332_fu_1223_p2() {
    mul_ln1118_332_fu_1223_p2 = (!mul_ln1118_332_fu_1223_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_332_fu_1223_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_333_fu_1392_p0() {
    mul_ln1118_333_fu_1392_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_2528474_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_333_fu_1392_p2() {
    mul_ln1118_333_fu_1392_p2 = (!mul_ln1118_333_fu_1392_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_333_fu_1392_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_334_fu_1793_p0() {
    mul_ln1118_334_fu_1793_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_2528474_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_334_fu_1793_p2() {
    mul_ln1118_334_fu_1793_p2 = (!mul_ln1118_334_fu_1793_p0.read().is_01() || !ap_const_lv24_FFFF35.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_334_fu_1793_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_335_fu_1422_p0() {
    mul_ln1118_335_fu_1422_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_2528467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_335_fu_1422_p2() {
    mul_ln1118_335_fu_1422_p2 = (!mul_ln1118_335_fu_1422_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_335_fu_1422_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_336_fu_1780_p0() {
    mul_ln1118_336_fu_1780_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_2528474_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_336_fu_1780_p2() {
    mul_ln1118_336_fu_1780_p2 = (!mul_ln1118_336_fu_1780_p0.read().is_01() || !ap_const_lv24_E7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_336_fu_1780_p0.read()) * sc_biguint<24>(ap_const_lv24_E7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_337_fu_1166_p0() {
    mul_ln1118_337_fu_1166_p0 =  (sc_lv<16>) (sext_ln1118_308_fu_2528457_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_337_fu_1166_p2() {
    mul_ln1118_337_fu_1166_p2 = (!mul_ln1118_337_fu_1166_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_337_fu_1166_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_338_fu_1424_p0() {
    mul_ln1118_338_fu_1424_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_2528474_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_338_fu_1424_p2() {
    mul_ln1118_338_fu_1424_p2 = (!mul_ln1118_338_fu_1424_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_338_fu_1424_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_339_fu_1682_p0() {
    mul_ln1118_339_fu_1682_p0 =  (sc_lv<16>) (sext_ln1118_310_fu_2528467_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_339_fu_1682_p2() {
    mul_ln1118_339_fu_1682_p2 = (!mul_ln1118_339_fu_1682_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_339_fu_1682_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_33_fu_1204_p0() {
    mul_ln1118_33_fu_1204_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_33_fu_1204_p2() {
    mul_ln1118_33_fu_1204_p2 = (!mul_ln1118_33_fu_1204_p0.read().is_01() || !ap_const_lv24_FFFEEF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_33_fu_1204_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_340_fu_1940_p0() {
    mul_ln1118_340_fu_1940_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_2528474_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_340_fu_1940_p2() {
    mul_ln1118_340_fu_1940_p2 = (!mul_ln1118_340_fu_1940_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_340_fu_1940_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_341_fu_1812_p0() {
    mul_ln1118_341_fu_1812_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_2528474_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_341_fu_1812_p2() {
    mul_ln1118_341_fu_1812_p2 = (!mul_ln1118_341_fu_1812_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_341_fu_1812_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_342_fu_1584_p0() {
    mul_ln1118_342_fu_1584_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_2528474_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_342_fu_1584_p2() {
    mul_ln1118_342_fu_1584_p2 = (!mul_ln1118_342_fu_1584_p0.read().is_01() || !ap_const_lv24_A6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_342_fu_1584_p0.read()) * sc_biguint<24>(ap_const_lv24_A6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_343_fu_2128_p0() {
    mul_ln1118_343_fu_2128_p0 =  (sc_lv<16>) (sext_ln1118_311_fu_2528474_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_343_fu_2128_p2() {
    mul_ln1118_343_fu_2128_p2 = (!mul_ln1118_343_fu_2128_p0.read().is_01() || !ap_const_lv24_FFFF97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_343_fu_2128_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF97);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_344_fu_1328_p0() {
    mul_ln1118_344_fu_1328_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2528833_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_344_fu_1328_p2() {
    mul_ln1118_344_fu_1328_p2 = (!mul_ln1118_344_fu_1328_p0.read().is_01() || !ap_const_lv24_A3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_344_fu_1328_p0.read()) * sc_biguint<24>(ap_const_lv24_A3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_345_fu_1586_p0() {
    mul_ln1118_345_fu_1586_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2528833_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_345_fu_1586_p2() {
    mul_ln1118_345_fu_1586_p2 = (!mul_ln1118_345_fu_1586_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_345_fu_1586_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_346_fu_1731_p0() {
    mul_ln1118_346_fu_1731_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_2528847_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_346_fu_1731_p2() {
    mul_ln1118_346_fu_1731_p2 = (!mul_ln1118_346_fu_1731_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_346_fu_1731_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_347_fu_1819_p0() {
    mul_ln1118_347_fu_1819_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2528833_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_347_fu_1819_p2() {
    mul_ln1118_347_fu_1819_p2 = (!mul_ln1118_347_fu_1819_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_347_fu_1819_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_348_fu_1820_p0() {
    mul_ln1118_348_fu_1820_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2528833_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_348_fu_1820_p2() {
    mul_ln1118_348_fu_1820_p2 = (!mul_ln1118_348_fu_1820_p0.read().is_01() || !ap_const_lv24_C2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_348_fu_1820_p0.read()) * sc_biguint<24>(ap_const_lv24_C2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_349_fu_1190_p0() {
    mul_ln1118_349_fu_1190_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2528833_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_349_fu_1190_p2() {
    mul_ln1118_349_fu_1190_p2 = (!mul_ln1118_349_fu_1190_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_349_fu_1190_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_34_fu_2014_p0() {
    mul_ln1118_34_fu_2014_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_34_fu_2014_p2() {
    mul_ln1118_34_fu_2014_p2 = (!mul_ln1118_34_fu_2014_p0.read().is_01() || !ap_const_lv24_116.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_34_fu_2014_p0.read()) * sc_biguint<24>(ap_const_lv24_116);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_350_fu_1365_p0() {
    mul_ln1118_350_fu_1365_p0 =  (sc_lv<16>) (sext_ln1118_317_fu_2528827_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_350_fu_1365_p2() {
    mul_ln1118_350_fu_1365_p2 = (!mul_ln1118_350_fu_1365_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_350_fu_1365_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_351_fu_1823_p0() {
    mul_ln1118_351_fu_1823_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_2528847_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_351_fu_1823_p2() {
    mul_ln1118_351_fu_1823_p2 = (!mul_ln1118_351_fu_1823_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_351_fu_1823_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_352_fu_1280_p0() {
    mul_ln1118_352_fu_1280_p0 =  (sc_lv<16>) (sext_ln1118_317_fu_2528827_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_352_fu_1280_p2() {
    mul_ln1118_352_fu_1280_p2 = (!mul_ln1118_352_fu_1280_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_352_fu_1280_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_353_fu_1647_p0() {
    mul_ln1118_353_fu_1647_p0 =  (sc_lv<16>) (sext_ln1118_320_fu_2528847_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_353_fu_1647_p2() {
    mul_ln1118_353_fu_1647_p2 = (!mul_ln1118_353_fu_1647_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_353_fu_1647_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_354_fu_1830_p0() {
    mul_ln1118_354_fu_1830_p0 =  (sc_lv<16>) (sext_ln1118_318_fu_2528833_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_354_fu_1830_p2() {
    mul_ln1118_354_fu_1830_p2 = (!mul_ln1118_354_fu_1830_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_354_fu_1830_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_355_fu_1285_p0() {
    mul_ln1118_355_fu_1285_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_2529242_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_355_fu_1285_p2() {
    mul_ln1118_355_fu_1285_p2 = (!mul_ln1118_355_fu_1285_p0.read().is_01() || !ap_const_lv24_6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_355_fu_1285_p0.read()) * sc_biguint<24>(ap_const_lv24_6E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_356_fu_1832_p0() {
    mul_ln1118_356_fu_1832_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_2529242_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_356_fu_1832_p2() {
    mul_ln1118_356_fu_1832_p2 = (!mul_ln1118_356_fu_1832_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_356_fu_1832_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_357_fu_1469_p0() {
    mul_ln1118_357_fu_1469_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2529254_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_357_fu_1469_p2() {
    mul_ln1118_357_fu_1469_p2 = (!mul_ln1118_357_fu_1469_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_357_fu_1469_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_358_fu_1743_p0() {
    mul_ln1118_358_fu_1743_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_2529242_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_358_fu_1743_p2() {
    mul_ln1118_358_fu_1743_p2 = (!mul_ln1118_358_fu_1743_p0.read().is_01() || !ap_const_lv24_FFFF9A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_358_fu_1743_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_359_fu_1835_p0() {
    mul_ln1118_359_fu_1835_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_2529242_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_359_fu_1835_p2() {
    mul_ln1118_359_fu_1835_p2 = (!mul_ln1118_359_fu_1835_p0.read().is_01() || !ap_const_lv24_B7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_359_fu_1835_p0.read()) * sc_biguint<24>(ap_const_lv24_B7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_35_fu_2015_p0() {
    mul_ln1118_35_fu_2015_p0 =  (sc_lv<16>) (sext_ln1118_28_fu_2518997_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_35_fu_2015_p2() {
    mul_ln1118_35_fu_2015_p2 = (!mul_ln1118_35_fu_2015_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_35_fu_2015_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_360_fu_1472_p0() {
    mul_ln1118_360_fu_1472_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2529254_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_360_fu_1472_p2() {
    mul_ln1118_360_fu_1472_p2 = (!mul_ln1118_360_fu_1472_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_360_fu_1472_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_361_fu_1932_p0() {
    mul_ln1118_361_fu_1932_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_2529242_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_361_fu_1932_p2() {
    mul_ln1118_361_fu_1932_p2 = (!mul_ln1118_361_fu_1932_p0.read().is_01() || !ap_const_lv24_B5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_361_fu_1932_p0.read()) * sc_biguint<24>(ap_const_lv24_B5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_362_fu_1804_p0() {
    mul_ln1118_362_fu_1804_p0 =  (sc_lv<16>) (sext_ln1118_329_fu_2529236_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_362_fu_1804_p2() {
    mul_ln1118_362_fu_1804_p2 = (!mul_ln1118_362_fu_1804_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_362_fu_1804_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_363_fu_2062_p0() {
    mul_ln1118_363_fu_2062_p0 =  (sc_lv<16>) (sext_ln1118_329_fu_2529236_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_363_fu_2062_p2() {
    mul_ln1118_363_fu_2062_p2 = (!mul_ln1118_363_fu_2062_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_363_fu_2062_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_364_fu_2077_p0() {
    mul_ln1118_364_fu_2077_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2529254_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_364_fu_2077_p2() {
    mul_ln1118_364_fu_2077_p2 = (!mul_ln1118_364_fu_2077_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_364_fu_2077_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_365_fu_1463_p0() {
    mul_ln1118_365_fu_1463_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_2529242_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_365_fu_1463_p2() {
    mul_ln1118_365_fu_1463_p2 = (!mul_ln1118_365_fu_1463_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_365_fu_1463_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_366_fu_1578_p0() {
    mul_ln1118_366_fu_1578_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_2529242_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_366_fu_1578_p2() {
    mul_ln1118_366_fu_1578_p2 = (!mul_ln1118_366_fu_1578_p0.read().is_01() || !ap_const_lv24_FFFFBD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_366_fu_1578_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_367_fu_1979_p0() {
    mul_ln1118_367_fu_1979_p0 =  (sc_lv<16>) (sext_ln1118_331_fu_2529254_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_367_fu_1979_p2() {
    mul_ln1118_367_fu_1979_p2 = (!mul_ln1118_367_fu_1979_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_367_fu_1979_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_368_fu_1222_p0() {
    mul_ln1118_368_fu_1222_p0 =  (sc_lv<16>) (sext_ln1118_330_fu_2529242_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_368_fu_1222_p2() {
    mul_ln1118_368_fu_1222_p2 = (!mul_ln1118_368_fu_1222_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_368_fu_1222_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_369_fu_1237_p0() {
    mul_ln1118_369_fu_1237_p0 =  (sc_lv<16>) (sext_ln1118_339_fu_2529593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_369_fu_1237_p2() {
    mul_ln1118_369_fu_1237_p2 = (!mul_ln1118_369_fu_1237_p0.read().is_01() || !ap_const_lv24_FFFF93.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_369_fu_1237_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF93);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_36_fu_1559_p0() {
    mul_ln1118_36_fu_1559_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2519270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_36_fu_1559_p2() {
    mul_ln1118_36_fu_1559_p2 = (!mul_ln1118_36_fu_1559_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_36_fu_1559_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_370_fu_1981_p0() {
    mul_ln1118_370_fu_1981_p0 =  (sc_lv<16>) (sext_ln1118_339_fu_2529593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_370_fu_1981_p2() {
    mul_ln1118_370_fu_1981_p2 = (!mul_ln1118_370_fu_1981_p0.read().is_01() || !ap_const_lv24_FFFF6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_370_fu_1981_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_371_fu_1896_p0() {
    mul_ln1118_371_fu_1896_p0 =  (sc_lv<16>) (sext_ln1118_339_fu_2529593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_371_fu_1896_p2() {
    mul_ln1118_371_fu_1896_p2 = (!mul_ln1118_371_fu_1896_p0.read().is_01() || !ap_const_lv24_6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_371_fu_1896_p0.read()) * sc_biguint<24>(ap_const_lv24_6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_372_fu_1239_p0() {
    mul_ln1118_372_fu_1239_p0 =  (sc_lv<16>) (sext_ln1118_339_fu_2529593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_372_fu_1239_p2() {
    mul_ln1118_372_fu_1239_p2 = (!mul_ln1118_372_fu_1239_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_372_fu_1239_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_373_fu_1497_p0() {
    mul_ln1118_373_fu_1497_p0 =  (sc_lv<16>) (sext_ln1118_339_fu_2529593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_373_fu_1497_p2() {
    mul_ln1118_373_fu_1497_p2 = (!mul_ln1118_373_fu_1497_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_373_fu_1497_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_374_fu_1755_p0() {
    mul_ln1118_374_fu_1755_p0 =  (sc_lv<16>) (sext_ln1118_339_fu_2529593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_374_fu_1755_p2() {
    mul_ln1118_374_fu_1755_p2 = (!mul_ln1118_374_fu_1755_p0.read().is_01() || !ap_const_lv24_FFFF69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_374_fu_1755_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF69);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_375_fu_1419_p0() {
    mul_ln1118_375_fu_1419_p0 = sext_ln1118_338_fu_2529588_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_375_fu_1419_p2() {
    mul_ln1118_375_fu_1419_p2 = (!mul_ln1118_375_fu_1419_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_375_fu_1419_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_376_fu_1333_p0() {
    mul_ln1118_376_fu_1333_p0 =  (sc_lv<16>) (sext_ln1118_339_fu_2529593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_376_fu_1333_p2() {
    mul_ln1118_376_fu_1333_p2 = (!mul_ln1118_376_fu_1333_p0.read().is_01() || !ap_const_lv24_FFFF19.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_376_fu_1333_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_377_fu_1878_p0() {
    mul_ln1118_377_fu_1878_p0 =  (sc_lv<16>) (sext_ln1118_339_fu_2529593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_377_fu_1878_p2() {
    mul_ln1118_377_fu_1878_p2 = (!mul_ln1118_377_fu_1878_p0.read().is_01() || !ap_const_lv24_A1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_377_fu_1878_p0.read()) * sc_biguint<24>(ap_const_lv24_A1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_378_fu_1335_p0() {
    mul_ln1118_378_fu_1335_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_2529608_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_378_fu_1335_p2() {
    mul_ln1118_378_fu_1335_p2 = (!mul_ln1118_378_fu_1335_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_378_fu_1335_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_379_fu_1880_p0() {
    mul_ln1118_379_fu_1880_p0 =  (sc_lv<16>) (sext_ln1118_339_fu_2529593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_379_fu_1880_p2() {
    mul_ln1118_379_fu_1880_p2 = (!mul_ln1118_379_fu_1880_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_379_fu_1880_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_37_fu_1436_p0() {
    mul_ln1118_37_fu_1436_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2519270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_37_fu_1436_p2() {
    mul_ln1118_37_fu_1436_p2 = (!mul_ln1118_37_fu_1436_p0.read().is_01() || !ap_const_lv24_52.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_37_fu_1436_p0.read()) * sc_biguint<24>(ap_const_lv24_52);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_380_fu_1707_p0() {
    mul_ln1118_380_fu_1707_p0 =  (sc_lv<16>) (sext_ln1118_339_fu_2529593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_380_fu_1707_p2() {
    mul_ln1118_380_fu_1707_p2 = (!mul_ln1118_380_fu_1707_p0.read().is_01() || !ap_const_lv24_FFFF59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_380_fu_1707_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_381_fu_1600_p0() {
    mul_ln1118_381_fu_1600_p0 =  (sc_lv<16>) (sext_ln1118_340_fu_2529608_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_381_fu_1600_p2() {
    mul_ln1118_381_fu_1600_p2 = (!mul_ln1118_381_fu_1600_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_381_fu_1600_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_382_fu_1510_p0() {
    mul_ln1118_382_fu_1510_p0 =  (sc_lv<16>) (sext_ln1118_339_fu_2529593_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_382_fu_1510_p2() {
    mul_ln1118_382_fu_1510_p2 = (!mul_ln1118_382_fu_1510_p0.read().is_01() || !ap_const_lv24_67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_382_fu_1510_p0.read()) * sc_biguint<24>(ap_const_lv24_67);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_383_fu_2057_p0() {
    mul_ln1118_383_fu_2057_p0 =  (sc_lv<16>) (sext_ln1118_347_fu_2529942_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_383_fu_2057_p2() {
    mul_ln1118_383_fu_2057_p2 = (!mul_ln1118_383_fu_2057_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_383_fu_2057_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_384_fu_1694_p0() {
    mul_ln1118_384_fu_1694_p0 =  (sc_lv<16>) (sext_ln1118_347_fu_2529942_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_384_fu_1694_p2() {
    mul_ln1118_384_fu_1694_p2 = (!mul_ln1118_384_fu_1694_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_384_fu_1694_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_385_fu_1695_p0() {
    mul_ln1118_385_fu_1695_p0 =  (sc_lv<16>) (sext_ln1118_347_fu_2529942_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_385_fu_1695_p2() {
    mul_ln1118_385_fu_1695_p2 = (!mul_ln1118_385_fu_1695_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_385_fu_1695_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_386_fu_1696_p0() {
    mul_ln1118_386_fu_1696_p0 =  (sc_lv<16>) (sext_ln1118_347_fu_2529942_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_386_fu_1696_p2() {
    mul_ln1118_386_fu_1696_p2 = (!mul_ln1118_386_fu_1696_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_386_fu_1696_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_387_fu_1515_p0() {
    mul_ln1118_387_fu_1515_p0 =  (sc_lv<16>) (sext_ln1118_347_fu_2529942_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_387_fu_1515_p2() {
    mul_ln1118_387_fu_1515_p2 = (!mul_ln1118_387_fu_1515_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_387_fu_1515_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_388_fu_1698_p0() {
    mul_ln1118_388_fu_1698_p0 =  (sc_lv<16>) (sext_ln1118_347_fu_2529942_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_388_fu_1698_p2() {
    mul_ln1118_388_fu_1698_p2 = (!mul_ln1118_388_fu_1698_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_388_fu_1698_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_389_fu_2129_p0() {
    mul_ln1118_389_fu_2129_p0 =  (sc_lv<16>) (sext_ln1118_350_fu_2529961_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_389_fu_2129_p2() {
    mul_ln1118_389_fu_2129_p2 = (!mul_ln1118_389_fu_2129_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_389_fu_2129_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_38_fu_2105_p0() {
    mul_ln1118_38_fu_2105_p0 =  (sc_lv<16>) (sext_ln1118_31_fu_2519259_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_38_fu_2105_p2() {
    mul_ln1118_38_fu_2105_p2 = (!mul_ln1118_38_fu_2105_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_38_fu_2105_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_390_fu_2001_p0() {
    mul_ln1118_390_fu_2001_p0 =  (sc_lv<16>) (sext_ln1118_350_fu_2529961_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_390_fu_2001_p2() {
    mul_ln1118_390_fu_2001_p2 = (!mul_ln1118_390_fu_2001_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_390_fu_2001_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_391_fu_1630_p0() {
    mul_ln1118_391_fu_1630_p0 =  (sc_lv<16>) (sext_ln1118_347_fu_2529942_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_391_fu_1630_p2() {
    mul_ln1118_391_fu_1630_p2 = (!mul_ln1118_391_fu_1630_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_391_fu_1630_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_392_fu_1502_p0() {
    mul_ln1118_392_fu_1502_p0 =  (sc_lv<16>) (sext_ln1118_361_fu_2530374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_392_fu_1502_p2() {
    mul_ln1118_392_fu_1502_p2 = (!mul_ln1118_392_fu_1502_p0.read().is_01() || !ap_const_lv24_76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_392_fu_1502_p0.read()) * sc_biguint<24>(ap_const_lv24_76);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_393_fu_1374_p0() {
    mul_ln1118_393_fu_1374_p0 =  (sc_lv<16>) (sext_ln1118_361_fu_2530374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_393_fu_1374_p2() {
    mul_ln1118_393_fu_1374_p2 = (!mul_ln1118_393_fu_1374_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_393_fu_1374_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_394_fu_1289_p0() {
    mul_ln1118_394_fu_1289_p0 =  (sc_lv<16>) (sext_ln1118_361_fu_2530374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_394_fu_1289_p2() {
    mul_ln1118_394_fu_1289_p2 = (!mul_ln1118_394_fu_1289_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_394_fu_1289_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_395_fu_1261_p0() {
    mul_ln1118_395_fu_1261_p0 =  (sc_lv<16>) (sext_ln1118_361_fu_2530374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_395_fu_1261_p2() {
    mul_ln1118_395_fu_1261_p2 = (!mul_ln1118_395_fu_1261_p0.read().is_01() || !ap_const_lv24_9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_395_fu_1261_p0.read()) * sc_biguint<24>(ap_const_lv24_9B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_396_fu_1276_p0() {
    mul_ln1118_396_fu_1276_p0 =  (sc_lv<16>) (sext_ln1118_361_fu_2530374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_396_fu_1276_p2() {
    mul_ln1118_396_fu_1276_p2 = (!mul_ln1118_396_fu_1276_p0.read().is_01() || !ap_const_lv24_4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_396_fu_1276_p0.read()) * sc_biguint<24>(ap_const_lv24_4B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_397_fu_1534_p0() {
    mul_ln1118_397_fu_1534_p0 =  (sc_lv<16>) (sext_ln1118_361_fu_2530374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_397_fu_1534_p2() {
    mul_ln1118_397_fu_1534_p2 = (!mul_ln1118_397_fu_1534_p0.read().is_01() || !ap_const_lv24_FFFF2A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_397_fu_1534_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF2A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_398_fu_1163_p0() {
    mul_ln1118_398_fu_1163_p0 =  (sc_lv<16>) (sext_ln1118_361_fu_2530374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_398_fu_1163_p2() {
    mul_ln1118_398_fu_1163_p2 = (!mul_ln1118_398_fu_1163_p0.read().is_01() || !ap_const_lv24_75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_398_fu_1163_p0.read()) * sc_biguint<24>(ap_const_lv24_75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_399_fu_1421_p0() {
    mul_ln1118_399_fu_1421_p0 =  (sc_lv<16>) (sext_ln1118_361_fu_2530374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_399_fu_1421_p2() {
    mul_ln1118_399_fu_1421_p2 = (!mul_ln1118_399_fu_1421_p0.read().is_01() || !ap_const_lv24_FFFF38.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_399_fu_1421_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF38);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_39_fu_1649_p0() {
    mul_ln1118_39_fu_1649_p0 = sext_ln1118_35_fu_2519289_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_39_fu_1649_p2() {
    mul_ln1118_39_fu_1649_p2 = (!mul_ln1118_39_fu_1649_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_39_fu_1649_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_400_fu_1822_p0() {
    mul_ln1118_400_fu_1822_p0 =  (sc_lv<16>) (sext_ln1118_362_fu_2530389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_400_fu_1822_p2() {
    mul_ln1118_400_fu_1822_p2 = (!mul_ln1118_400_fu_1822_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_400_fu_1822_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_401_fu_1594_p0() {
    mul_ln1118_401_fu_1594_p0 =  (sc_lv<16>) (sext_ln1118_362_fu_2530389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_401_fu_1594_p2() {
    mul_ln1118_401_fu_1594_p2 = (!mul_ln1118_401_fu_1594_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_401_fu_1594_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_402_fu_1180_p0() {
    mul_ln1118_402_fu_1180_p0 =  (sc_lv<16>) (sext_ln1118_361_fu_2530374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_402_fu_1180_p2() {
    mul_ln1118_402_fu_1180_p2 = (!mul_ln1118_402_fu_1180_p0.read().is_01() || !ap_const_lv24_FFFF2B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_402_fu_1180_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF2B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_403_fu_1476_p0() {
    mul_ln1118_403_fu_1476_p0 =  (sc_lv<16>) (sext_ln1118_360_fu_2530369_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_403_fu_1476_p2() {
    mul_ln1118_403_fu_1476_p2 = (!mul_ln1118_403_fu_1476_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_403_fu_1476_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_404_fu_1303_p0() {
    mul_ln1118_404_fu_1303_p0 =  (sc_lv<16>) (sext_ln1118_361_fu_2530374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_404_fu_1303_p2() {
    mul_ln1118_404_fu_1303_p2 = (!mul_ln1118_404_fu_1303_p0.read().is_01() || !ap_const_lv24_66.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_404_fu_1303_p0.read()) * sc_biguint<24>(ap_const_lv24_66);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_405_fu_1848_p0() {
    mul_ln1118_405_fu_1848_p0 =  (sc_lv<16>) (sext_ln1118_362_fu_2530389_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_405_fu_1848_p2() {
    mul_ln1118_405_fu_1848_p2 = (!mul_ln1118_405_fu_1848_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_405_fu_1848_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_406_fu_1262_p0() {
    mul_ln1118_406_fu_1262_p0 =  (sc_lv<16>) (sext_ln1118_361_fu_2530374_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_406_fu_1262_p2() {
    mul_ln1118_406_fu_1262_p2 = (!mul_ln1118_406_fu_1262_p0.read().is_01() || !ap_const_lv24_FFFFA8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_406_fu_1262_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_407_fu_1937_p0() {
    mul_ln1118_407_fu_1937_p0 =  (sc_lv<16>) (sext_ln1118_372_fu_2530743_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_407_fu_1937_p2() {
    mul_ln1118_407_fu_1937_p2 = (!mul_ln1118_407_fu_1937_p0.read().is_01() || !ap_const_lv24_5F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_407_fu_1937_p0.read()) * sc_biguint<24>(ap_const_lv24_5F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_408_fu_1481_p0() {
    mul_ln1118_408_fu_1481_p0 =  (sc_lv<16>) (sext_ln1118_375_fu_2530763_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_408_fu_1481_p2() {
    mul_ln1118_408_fu_1481_p2 = (!mul_ln1118_408_fu_1481_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_408_fu_1481_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_409_fu_2031_p0() {
    mul_ln1118_409_fu_2031_p0 =  (sc_lv<16>) (sext_ln1118_372_fu_2530743_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_409_fu_2031_p2() {
    mul_ln1118_409_fu_2031_p2 = (!mul_ln1118_409_fu_2031_p0.read().is_01() || !ap_const_lv24_75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_409_fu_2031_p0.read()) * sc_biguint<24>(ap_const_lv24_75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_40_fu_1193_p0() {
    mul_ln1118_40_fu_1193_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2519270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_40_fu_1193_p2() {
    mul_ln1118_40_fu_1193_p2 = (!mul_ln1118_40_fu_1193_p0.read().is_01() || !ap_const_lv24_54.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_40_fu_1193_p0.read()) * sc_biguint<24>(ap_const_lv24_54);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_410_fu_1213_p0() {
    mul_ln1118_410_fu_1213_p0 =  (sc_lv<16>) (sext_ln1118_372_fu_2530743_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_410_fu_1213_p2() {
    mul_ln1118_410_fu_1213_p2 = (!mul_ln1118_410_fu_1213_p0.read().is_01() || !ap_const_lv24_4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_410_fu_1213_p0.read()) * sc_biguint<24>(ap_const_lv24_4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_411_fu_2033_p0() {
    mul_ln1118_411_fu_2033_p0 =  (sc_lv<16>) (sext_ln1118_372_fu_2530743_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_411_fu_2033_p2() {
    mul_ln1118_411_fu_2033_p2 = (!mul_ln1118_411_fu_2033_p0.read().is_01() || !ap_const_lv24_FFFF6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_411_fu_2033_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_412_fu_1579_p0() {
    mul_ln1118_412_fu_1579_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2530753_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_412_fu_1579_p2() {
    mul_ln1118_412_fu_1579_p2 = (!mul_ln1118_412_fu_1579_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_412_fu_1579_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_413_fu_1580_p0() {
    mul_ln1118_413_fu_1580_p0 =  (sc_lv<16>) (sext_ln1118_370_fu_2530734_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_413_fu_1580_p2() {
    mul_ln1118_413_fu_1580_p2 = (!mul_ln1118_413_fu_1580_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_413_fu_1580_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_414_fu_1945_p0() {
    mul_ln1118_414_fu_1945_p0 =  (sc_lv<16>) (sext_ln1118_375_fu_2530763_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_414_fu_1945_p2() {
    mul_ln1118_414_fu_1945_p2 = (!mul_ln1118_414_fu_1945_p0.read().is_01() || !ap_const_lv22_3FFFEB.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_414_fu_1945_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_415_fu_1673_p0() {
    mul_ln1118_415_fu_1673_p0 =  (sc_lv<16>) (sext_ln1118_373_fu_2530753_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_415_fu_1673_p2() {
    mul_ln1118_415_fu_1673_p2 = (!mul_ln1118_415_fu_1673_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_415_fu_1673_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_416_fu_1310_p0() {
    mul_ln1118_416_fu_1310_p0 =  (sc_lv<16>) (sext_ln1118_372_fu_2530743_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_416_fu_1310_p2() {
    mul_ln1118_416_fu_1310_p2 = (!mul_ln1118_416_fu_1310_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_416_fu_1310_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_417_fu_1411_p0() {
    mul_ln1118_417_fu_1411_p0 =  (sc_lv<16>) (sext_ln1118_372_fu_2530743_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_417_fu_1411_p2() {
    mul_ln1118_417_fu_1411_p2 = (!mul_ln1118_417_fu_1411_p0.read().is_01() || !ap_const_lv24_E6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_417_fu_1411_p0.read()) * sc_biguint<24>(ap_const_lv24_E6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_418_fu_1283_p0() {
    mul_ln1118_418_fu_1283_p0 =  (sc_lv<16>) (sext_ln1118_387_fu_2531194_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_418_fu_1283_p2() {
    mul_ln1118_418_fu_1283_p2 = (!mul_ln1118_418_fu_1283_p0.read().is_01() || !ap_const_lv24_8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_418_fu_1283_p0.read()) * sc_biguint<24>(ap_const_lv24_8F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_419_fu_1298_p0() {
    mul_ln1118_419_fu_1298_p0 =  (sc_lv<16>) (sext_ln1118_388_fu_2531206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_419_fu_1298_p2() {
    mul_ln1118_419_fu_1298_p2 = (!mul_ln1118_419_fu_1298_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_419_fu_1298_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_41_fu_1931_p0() {
    mul_ln1118_41_fu_1931_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2519270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_41_fu_1931_p2() {
    mul_ln1118_41_fu_1931_p2 = (!mul_ln1118_41_fu_1931_p0.read().is_01() || !ap_const_lv24_68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_41_fu_1931_p0.read()) * sc_biguint<24>(ap_const_lv24_68);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_420_fu_1170_p0() {
    mul_ln1118_420_fu_1170_p0 =  (sc_lv<16>) (sext_ln1118_388_fu_2531206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_420_fu_1170_p2() {
    mul_ln1118_420_fu_1170_p2 = (!mul_ln1118_420_fu_1170_p0.read().is_01() || !ap_const_lv23_7FFFC6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_420_fu_1170_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_421_fu_1185_p0() {
    mul_ln1118_421_fu_1185_p0 =  (sc_lv<16>) (sext_ln1118_387_fu_2531194_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_421_fu_1185_p2() {
    mul_ln1118_421_fu_1185_p2 = (!mul_ln1118_421_fu_1185_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_421_fu_1185_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_422_fu_1443_p0() {
    mul_ln1118_422_fu_1443_p0 =  (sc_lv<16>) (sext_ln1118_387_fu_2531194_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_422_fu_1443_p2() {
    mul_ln1118_422_fu_1443_p2 = (!mul_ln1118_422_fu_1443_p0.read().is_01() || !ap_const_lv24_FFFFA8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_422_fu_1443_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_423_fu_1701_p0() {
    mul_ln1118_423_fu_1701_p0 =  (sc_lv<16>) (sext_ln1118_387_fu_2531194_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_423_fu_1701_p2() {
    mul_ln1118_423_fu_1701_p2 = (!mul_ln1118_423_fu_1701_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_423_fu_1701_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_424_fu_1959_p0() {
    mul_ln1118_424_fu_1959_p0 =  (sc_lv<16>) (sext_ln1118_387_fu_2531194_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_424_fu_1959_p2() {
    mul_ln1118_424_fu_1959_p2 = (!mul_ln1118_424_fu_1959_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_424_fu_1959_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_425_fu_1202_p0() {
    mul_ln1118_425_fu_1202_p0 =  (sc_lv<16>) (sext_ln1118_388_fu_2531206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_425_fu_1202_p2() {
    mul_ln1118_425_fu_1202_p2 = (!mul_ln1118_425_fu_1202_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_425_fu_1202_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_426_fu_1603_p0() {
    mul_ln1118_426_fu_1603_p0 =  (sc_lv<16>) (sext_ln1118_387_fu_2531194_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_426_fu_1603_p2() {
    mul_ln1118_426_fu_1603_p2 = (!mul_ln1118_426_fu_1603_p0.read().is_01() || !ap_const_lv24_FFFF30.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_426_fu_1603_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF30);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_427_fu_1718_p0() {
    mul_ln1118_427_fu_1718_p0 = sext_ln1118_386_fu_2531189_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_427_fu_1718_p2() {
    mul_ln1118_427_fu_1718_p2 = (!mul_ln1118_427_fu_1718_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_427_fu_1718_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_428_fu_1976_p0() {
    mul_ln1118_428_fu_1976_p0 =  (sc_lv<16>) (sext_ln1118_388_fu_2531206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_428_fu_1976_p2() {
    mul_ln1118_428_fu_1976_p2 = (!mul_ln1118_428_fu_1976_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_428_fu_1976_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_429_fu_1362_p0() {
    mul_ln1118_429_fu_1362_p0 =  (sc_lv<16>) (sext_ln1118_387_fu_2531194_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_429_fu_1362_p2() {
    mul_ln1118_429_fu_1362_p2 = (!mul_ln1118_429_fu_1362_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_429_fu_1362_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_42_fu_1841_p0() {
    mul_ln1118_42_fu_1841_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2519270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_42_fu_1841_p2() {
    mul_ln1118_42_fu_1841_p2 = (!mul_ln1118_42_fu_1841_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_42_fu_1841_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_430_fu_1863_p0() {
    mul_ln1118_430_fu_1863_p0 =  (sc_lv<16>) (sext_ln1118_387_fu_2531194_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_430_fu_1863_p2() {
    mul_ln1118_430_fu_1863_p2 = (!mul_ln1118_430_fu_1863_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_430_fu_1863_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_431_fu_1249_p0() {
    mul_ln1118_431_fu_1249_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_2531578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_431_fu_1249_p2() {
    mul_ln1118_431_fu_1249_p2 = (!mul_ln1118_431_fu_1249_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_431_fu_1249_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_432_fu_1904_p0() {
    mul_ln1118_432_fu_1904_p0 = sext_ln1118_399_fu_2531592_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_432_fu_1904_p2() {
    mul_ln1118_432_fu_1904_p2 = (!mul_ln1118_432_fu_1904_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_432_fu_1904_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_433_fu_1905_p0() {
    mul_ln1118_433_fu_1905_p0 =  (sc_lv<16>) (sext_ln1118_397_fu_2531572_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_433_fu_1905_p2() {
    mul_ln1118_433_fu_1905_p2 = (!mul_ln1118_433_fu_1905_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_433_fu_1905_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_434_fu_1449_p0() {
    mul_ln1118_434_fu_1449_p0 =  (sc_lv<16>) (sext_ln1118_397_fu_2531572_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_434_fu_1449_p2() {
    mul_ln1118_434_fu_1449_p2 = (!mul_ln1118_434_fu_1449_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_434_fu_1449_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_435_fu_1907_p0() {
    mul_ln1118_435_fu_1907_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_2531578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_435_fu_1907_p2() {
    mul_ln1118_435_fu_1907_p2 = (!mul_ln1118_435_fu_1907_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_435_fu_1907_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_436_fu_1908_p0() {
    mul_ln1118_436_fu_1908_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_2531578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_436_fu_1908_p2() {
    mul_ln1118_436_fu_1908_p2 = (!mul_ln1118_436_fu_1908_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_436_fu_1908_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_437_fu_1452_p0() {
    mul_ln1118_437_fu_1452_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_2531578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_437_fu_1452_p2() {
    mul_ln1118_437_fu_1452_p2 = (!mul_ln1118_437_fu_1452_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_437_fu_1452_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_438_fu_1553_p0() {
    mul_ln1118_438_fu_1553_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_2531578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_438_fu_1553_p2() {
    mul_ln1118_438_fu_1553_p2 = (!mul_ln1118_438_fu_1553_p0.read().is_01() || !ap_const_lv24_FFFF4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_438_fu_1553_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_439_fu_2009_p0() {
    mul_ln1118_439_fu_2009_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_2531578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_439_fu_2009_p2() {
    mul_ln1118_439_fu_2009_p2 = (!mul_ln1118_439_fu_2009_p0.read().is_01() || !ap_const_lv24_FFFF11.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_439_fu_2009_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF11);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_43_fu_1842_p0() {
    mul_ln1118_43_fu_1842_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2519270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_43_fu_1842_p2() {
    mul_ln1118_43_fu_1842_p2 = (!mul_ln1118_43_fu_1842_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_43_fu_1842_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_440_fu_1555_p0() {
    mul_ln1118_440_fu_1555_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_2531578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_440_fu_1555_p2() {
    mul_ln1118_440_fu_1555_p2 = (!mul_ln1118_440_fu_1555_p0.read().is_01() || !ap_const_lv24_FFFF75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_440_fu_1555_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_441_fu_1920_p0() {
    mul_ln1118_441_fu_1920_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_2531578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_441_fu_1920_p2() {
    mul_ln1118_441_fu_1920_p2 = (!mul_ln1118_441_fu_1920_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_441_fu_1920_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_442_fu_2012_p0() {
    mul_ln1118_442_fu_2012_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_2531578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_442_fu_2012_p2() {
    mul_ln1118_442_fu_2012_p2 = (!mul_ln1118_442_fu_2012_p0.read().is_01() || !ap_const_lv24_75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_442_fu_2012_p0.read()) * sc_biguint<24>(ap_const_lv24_75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_443_fu_1740_p0() {
    mul_ln1118_443_fu_1740_p0 =  (sc_lv<16>) (sext_ln1118_398_fu_2531578_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_443_fu_1740_p2() {
    mul_ln1118_443_fu_1740_p2 = (!mul_ln1118_443_fu_1740_p0.read().is_01() || !ap_const_lv24_FFFF46.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_443_fu_1740_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_444_fu_1195_p0() {
    mul_ln1118_444_fu_1195_p0 =  (sc_lv<16>) (sext_ln1118_409_fu_2531954_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_444_fu_1195_p2() {
    mul_ln1118_444_fu_1195_p2 = (!mul_ln1118_444_fu_1195_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_444_fu_1195_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_445_fu_2094_p0() {
    mul_ln1118_445_fu_2094_p0 =  (sc_lv<16>) (sext_ln1118_406_fu_2531935_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_445_fu_2094_p2() {
    mul_ln1118_445_fu_2094_p2 = (!mul_ln1118_445_fu_2094_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_445_fu_2094_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_446_fu_1966_p0() {
    mul_ln1118_446_fu_1966_p0 =  (sc_lv<16>) (sext_ln1118_406_fu_2531935_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_446_fu_1966_p2() {
    mul_ln1118_446_fu_1966_p2 = (!mul_ln1118_446_fu_1966_p0.read().is_01() || !ap_const_lv23_7FFFC3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_446_fu_1966_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_447_fu_1595_p0() {
    mul_ln1118_447_fu_1595_p0 =  (sc_lv<16>) (sext_ln1118_406_fu_2531935_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_447_fu_1595_p2() {
    mul_ln1118_447_fu_1595_p2 = (!mul_ln1118_447_fu_1595_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_447_fu_1595_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_448_fu_1367_p0() {
    mul_ln1118_448_fu_1367_p0 =  (sc_lv<16>) (sext_ln1118_407_fu_2531945_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_448_fu_1367_p2() {
    mul_ln1118_448_fu_1367_p2 = (!mul_ln1118_448_fu_1367_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_448_fu_1367_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_449_fu_1868_p0() {
    mul_ln1118_449_fu_1868_p0 =  (sc_lv<16>) (sext_ln1118_406_fu_2531935_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_449_fu_1868_p2() {
    mul_ln1118_449_fu_1868_p2 = (!mul_ln1118_449_fu_1868_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_449_fu_1868_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_44_fu_2116_p0() {
    mul_ln1118_44_fu_2116_p0 =  (sc_lv<16>) (sext_ln1118_34_fu_2519284_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_44_fu_2116_p2() {
    mul_ln1118_44_fu_2116_p2 = (!mul_ln1118_44_fu_2116_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_44_fu_2116_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_450_fu_2126_p0() {
    mul_ln1118_450_fu_2126_p0 =  (sc_lv<16>) (sext_ln1118_406_fu_2531935_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_450_fu_2126_p2() {
    mul_ln1118_450_fu_2126_p2 = (!mul_ln1118_450_fu_2126_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_450_fu_2126_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_451_fu_1998_p0() {
    mul_ln1118_451_fu_1998_p0 =  (sc_lv<16>) (sext_ln1118_409_fu_2531954_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_451_fu_1998_p2() {
    mul_ln1118_451_fu_1998_p2 = (!mul_ln1118_451_fu_1998_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_451_fu_1998_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_452_fu_2013_p0() {
    mul_ln1118_452_fu_2013_p0 =  (sc_lv<16>) (sext_ln1118_406_fu_2531935_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_452_fu_2013_p2() {
    mul_ln1118_452_fu_2013_p2 = (!mul_ln1118_452_fu_2013_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_452_fu_2013_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_453_fu_1785_p0() {
    mul_ln1118_453_fu_1785_p0 =  (sc_lv<16>) (sext_ln1118_419_fu_2532378_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_453_fu_1785_p2() {
    mul_ln1118_453_fu_1785_p2 = (!mul_ln1118_453_fu_1785_p0.read().is_01() || !ap_const_lv24_FFFFAB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_453_fu_1785_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_454_fu_1900_p0() {
    mul_ln1118_454_fu_1900_p0 =  (sc_lv<16>) (sext_ln1118_419_fu_2532378_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_454_fu_1900_p2() {
    mul_ln1118_454_fu_1900_p2 = (!mul_ln1118_454_fu_1900_p0.read().is_01() || !ap_const_lv24_FFFF71.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_454_fu_1900_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF71);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_455_fu_1529_p0() {
    mul_ln1118_455_fu_1529_p0 =  (sc_lv<16>) (sext_ln1118_419_fu_2532378_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_455_fu_1529_p2() {
    mul_ln1118_455_fu_1529_p2 = (!mul_ln1118_455_fu_1529_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_455_fu_1529_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_456_fu_1787_p0() {
    mul_ln1118_456_fu_1787_p0 =  (sc_lv<16>) (sext_ln1118_419_fu_2532378_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_456_fu_1787_p2() {
    mul_ln1118_456_fu_1787_p2 = (!mul_ln1118_456_fu_1787_p0.read().is_01() || !ap_const_lv24_BC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_456_fu_1787_p0.read()) * sc_biguint<24>(ap_const_lv24_BC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_457_fu_2045_p0() {
    mul_ln1118_457_fu_2045_p0 =  (sc_lv<16>) (sext_ln1118_420_fu_2532391_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_457_fu_2045_p2() {
    mul_ln1118_457_fu_2045_p2 = (!mul_ln1118_457_fu_2045_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_457_fu_2045_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_458_fu_1674_p0() {
    mul_ln1118_458_fu_1674_p0 =  (sc_lv<16>) (sext_ln1118_419_fu_2532378_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_458_fu_1674_p2() {
    mul_ln1118_458_fu_1674_p2 = (!mul_ln1118_458_fu_1674_p0.read().is_01() || !ap_const_lv24_86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_458_fu_1674_p0.read()) * sc_biguint<24>(ap_const_lv24_86);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_459_fu_1960_p0() {
    mul_ln1118_459_fu_1960_p0 =  (sc_lv<16>) (sext_ln1118_419_fu_2532378_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_459_fu_1960_p2() {
    mul_ln1118_459_fu_1960_p2 = (!mul_ln1118_459_fu_1960_p0.read().is_01() || !ap_const_lv24_FFFFA3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_459_fu_1960_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_45_fu_1662_p0() {
    mul_ln1118_45_fu_1662_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2519270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_45_fu_1662_p2() {
    mul_ln1118_45_fu_1662_p2 = (!mul_ln1118_45_fu_1662_p0.read().is_01() || !ap_const_lv24_ED.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_45_fu_1662_p0.read()) * sc_biguint<24>(ap_const_lv24_ED);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_460_fu_1961_p0() {
    mul_ln1118_460_fu_1961_p0 =  (sc_lv<16>) (sext_ln1118_419_fu_2532378_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_460_fu_1961_p2() {
    mul_ln1118_460_fu_1961_p2 = (!mul_ln1118_460_fu_1961_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_460_fu_1961_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_461_fu_1962_p0() {
    mul_ln1118_461_fu_1962_p0 =  (sc_lv<16>) (sext_ln1118_419_fu_2532378_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_461_fu_1962_p2() {
    mul_ln1118_461_fu_1962_p2 = (!mul_ln1118_461_fu_1962_p0.read().is_01() || !ap_const_lv24_FFFF4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_461_fu_1962_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_462_fu_1963_p0() {
    mul_ln1118_462_fu_1963_p0 =  (sc_lv<16>) (sext_ln1118_419_fu_2532378_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_462_fu_1963_p2() {
    mul_ln1118_462_fu_1963_p2 = (!mul_ln1118_462_fu_1963_p0.read().is_01() || !ap_const_lv24_F3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_462_fu_1963_p0.read()) * sc_biguint<24>(ap_const_lv24_F3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_463_fu_1420_p0() {
    mul_ln1118_463_fu_1420_p0 =  (sc_lv<16>) (sext_ln1118_435_fu_2532810_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_463_fu_1420_p2() {
    mul_ln1118_463_fu_1420_p2 = (!mul_ln1118_463_fu_1420_p0.read().is_01() || !ap_const_lv23_3B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_463_fu_1420_p0.read()) * sc_biguint<23>(ap_const_lv23_3B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_464_fu_1247_p0() {
    mul_ln1118_464_fu_1247_p0 = sext_ln1118_437_fu_2532821_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_464_fu_1247_p2() {
    mul_ln1118_464_fu_1247_p2 = (!mul_ln1118_464_fu_1247_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_464_fu_1247_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_465_fu_1414_p0() {
    mul_ln1118_465_fu_1414_p0 =  (sc_lv<16>) (sext_ln1118_434_fu_2532802_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_465_fu_1414_p2() {
    mul_ln1118_465_fu_1414_p2 = (!mul_ln1118_465_fu_1414_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_465_fu_1414_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_466_fu_2052_p0() {
    mul_ln1118_466_fu_2052_p0 =  (sc_lv<16>) (sext_ln1118_434_fu_2532802_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_466_fu_2052_p2() {
    mul_ln1118_466_fu_2052_p2 = (!mul_ln1118_466_fu_2052_p0.read().is_01() || !ap_const_lv24_4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_466_fu_2052_p0.read()) * sc_biguint<24>(ap_const_lv24_4E);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_467_fu_1325_p0() {
    mul_ln1118_467_fu_1325_p0 =  (sc_lv<16>) (sext_ln1118_435_fu_2532810_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_467_fu_1325_p2() {
    mul_ln1118_467_fu_1325_p2 = (!mul_ln1118_467_fu_1325_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_467_fu_1325_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_468_fu_1144_p0() {
    mul_ln1118_468_fu_1144_p0 =  (sc_lv<16>) (sext_ln1118_434_fu_2532802_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_468_fu_1144_p2() {
    mul_ln1118_468_fu_1144_p2 = (!mul_ln1118_468_fu_1144_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_468_fu_1144_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_469_fu_1782_p0() {
    mul_ln1118_469_fu_1782_p0 =  (sc_lv<16>) (sext_ln1118_435_fu_2532810_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_469_fu_1782_p2() {
    mul_ln1118_469_fu_1782_p2 = (!mul_ln1118_469_fu_1782_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_469_fu_1782_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_46_fu_2027_p0() {
    mul_ln1118_46_fu_2027_p0 =  (sc_lv<16>) (sext_ln1118_31_fu_2519259_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_46_fu_2027_p2() {
    mul_ln1118_46_fu_2027_p2 = (!mul_ln1118_46_fu_2027_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_46_fu_2027_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_470_fu_1146_p0() {
    mul_ln1118_470_fu_1146_p0 =  (sc_lv<16>) (sext_ln1118_434_fu_2532802_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_470_fu_1146_p2() {
    mul_ln1118_470_fu_1146_p2 = (!mul_ln1118_470_fu_1146_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_470_fu_1146_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_471_fu_1693_p0() {
    mul_ln1118_471_fu_1693_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_2533206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_471_fu_1693_p2() {
    mul_ln1118_471_fu_1693_p2 = (!mul_ln1118_471_fu_1693_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_471_fu_1693_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_472_fu_1512_p0() {
    mul_ln1118_472_fu_1512_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_2533206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_472_fu_1512_p2() {
    mul_ln1118_472_fu_1512_p2 = (!mul_ln1118_472_fu_1512_p0.read().is_01() || !ap_const_lv24_6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_472_fu_1512_p0.read()) * sc_biguint<24>(ap_const_lv24_6B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_473_fu_1968_p0() {
    mul_ln1118_473_fu_1968_p0 =  (sc_lv<16>) (sext_ln1118_449_fu_2533197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_473_fu_1968_p2() {
    mul_ln1118_473_fu_1968_p2 = (!mul_ln1118_473_fu_1968_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_473_fu_1968_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_474_fu_1148_p0() {
    mul_ln1118_474_fu_1148_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_2533206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_474_fu_1148_p2() {
    mul_ln1118_474_fu_1148_p2 = (!mul_ln1118_474_fu_1148_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_474_fu_1148_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_475_fu_1406_p0() {
    mul_ln1118_475_fu_1406_p0 =  (sc_lv<16>) (sext_ln1118_449_fu_2533197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_475_fu_1406_p2() {
    mul_ln1118_475_fu_1406_p2 = (!mul_ln1118_475_fu_1406_p0.read().is_01() || !ap_const_lv23_3B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_475_fu_1406_p0.read()) * sc_biguint<23>(ap_const_lv23_3B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_476_fu_1278_p0() {
    mul_ln1118_476_fu_1278_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_2533206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_476_fu_1278_p2() {
    mul_ln1118_476_fu_1278_p2 = (!mul_ln1118_476_fu_1278_p0.read().is_01() || !ap_const_lv24_FFFFA7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_476_fu_1278_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA7);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_477_fu_1536_p0() {
    mul_ln1118_477_fu_1536_p0 =  (sc_lv<16>) (sext_ln1118_449_fu_2533197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_477_fu_1536_p2() {
    mul_ln1118_477_fu_1536_p2 = (!mul_ln1118_477_fu_1536_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_477_fu_1536_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_478_fu_1551_p0() {
    mul_ln1118_478_fu_1551_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_2533206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_478_fu_1551_p2() {
    mul_ln1118_478_fu_1551_p2 = (!mul_ln1118_478_fu_1551_p0.read().is_01() || !ap_const_lv24_A4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_478_fu_1551_p0.read()) * sc_biguint<24>(ap_const_lv24_A4);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_479_fu_1423_p0() {
    mul_ln1118_479_fu_1423_p0 =  (sc_lv<16>) (sext_ln1118_449_fu_2533197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_479_fu_1423_p2() {
    mul_ln1118_479_fu_1423_p2 = (!mul_ln1118_479_fu_1423_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_479_fu_1423_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_47_fu_1573_p0() {
    mul_ln1118_47_fu_1573_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2519270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_47_fu_1573_p2() {
    mul_ln1118_47_fu_1573_p2 = (!mul_ln1118_47_fu_1573_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_47_fu_1573_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_480_fu_1438_p0() {
    mul_ln1118_480_fu_1438_p0 =  (sc_lv<16>) (sext_ln1118_449_fu_2533197_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_480_fu_1438_p2() {
    mul_ln1118_480_fu_1438_p2 = (!mul_ln1118_480_fu_1438_p0.read().is_01() || !ap_const_lv23_7FFFC3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_480_fu_1438_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_481_fu_1939_p0() {
    mul_ln1118_481_fu_1939_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_2533206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_481_fu_1939_p2() {
    mul_ln1118_481_fu_1939_p2 = (!mul_ln1118_481_fu_1939_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_481_fu_1939_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_482_fu_1711_p0() {
    mul_ln1118_482_fu_1711_p0 = sext_ln1118_448_fu_2533192_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_482_fu_1711_p2() {
    mul_ln1118_482_fu_1711_p2 = (!mul_ln1118_482_fu_1711_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_482_fu_1711_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_483_fu_1969_p0() {
    mul_ln1118_483_fu_1969_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_2533206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_483_fu_1969_p2() {
    mul_ln1118_483_fu_1969_p2 = (!mul_ln1118_483_fu_1969_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_483_fu_1969_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_484_fu_2084_p0() {
    mul_ln1118_484_fu_2084_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_2533206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_484_fu_2084_p2() {
    mul_ln1118_484_fu_2084_p2 = (!mul_ln1118_484_fu_2084_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_484_fu_2084_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_485_fu_1856_p0() {
    mul_ln1118_485_fu_1856_p0 =  (sc_lv<16>) (sext_ln1118_450_fu_2533206_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_485_fu_1856_p2() {
    mul_ln1118_485_fu_1856_p2 = (!mul_ln1118_485_fu_1856_p0.read().is_01() || !ap_const_lv24_FFFFAB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_485_fu_1856_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_486_fu_1628_p0() {
    mul_ln1118_486_fu_1628_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_2533495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_486_fu_1628_p2() {
    mul_ln1118_486_fu_1628_p2 = (!mul_ln1118_486_fu_1628_p0.read().is_01() || !ap_const_lv24_9A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_486_fu_1628_p0.read()) * sc_biguint<24>(ap_const_lv24_9A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_487_fu_1357_p0() {
    mul_ln1118_487_fu_1357_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_2533495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_487_fu_1357_p2() {
    mul_ln1118_487_fu_1357_p2 = (!mul_ln1118_487_fu_1357_p0.read().is_01() || !ap_const_lv24_FFFFA5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_487_fu_1357_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_488_fu_1229_p0() {
    mul_ln1118_488_fu_1229_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_2533495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_488_fu_1229_p2() {
    mul_ln1118_488_fu_1229_p2 = (!mul_ln1118_488_fu_1229_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_488_fu_1229_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_489_fu_1388_p0() {
    mul_ln1118_489_fu_1388_p0 = sext_ln1118_456_fu_2533510_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_489_fu_1388_p2() {
    mul_ln1118_489_fu_1388_p2 = (!mul_ln1118_489_fu_1388_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_489_fu_1388_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_48_fu_1665_p0() {
    mul_ln1118_48_fu_1665_p0 =  (sc_lv<16>) (sext_ln1118_31_fu_2519259_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_48_fu_1665_p2() {
    mul_ln1118_48_fu_1665_p2 = (!mul_ln1118_48_fu_1665_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_48_fu_1665_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_490_fu_1980_p0() {
    mul_ln1118_490_fu_1980_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_2533495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_490_fu_1980_p2() {
    mul_ln1118_490_fu_1980_p2 = (!mul_ln1118_490_fu_1980_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_490_fu_1980_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_491_fu_1390_p0() {
    mul_ln1118_491_fu_1390_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_2533495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_491_fu_1390_p2() {
    mul_ln1118_491_fu_1390_p2 = (!mul_ln1118_491_fu_1390_p0.read().is_01() || !ap_const_lv24_FFFF4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_491_fu_1390_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_492_fu_1478_p0() {
    mul_ln1118_492_fu_1478_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_2533495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_492_fu_1478_p2() {
    mul_ln1118_492_fu_1478_p2 = (!mul_ln1118_492_fu_1478_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_492_fu_1478_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_493_fu_1936_p0() {
    mul_ln1118_493_fu_1936_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_2533495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_493_fu_1936_p2() {
    mul_ln1118_493_fu_1936_p2 = (!mul_ln1118_493_fu_1936_p0.read().is_01() || !ap_const_lv24_FFFF8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_493_fu_1936_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8A);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_494_fu_1306_p0() {
    mul_ln1118_494_fu_1306_p0 =  (sc_lv<16>) (sext_ln1118_457_fu_2533515_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_494_fu_1306_p2() {
    mul_ln1118_494_fu_1306_p2 = (!mul_ln1118_494_fu_1306_p0.read().is_01() || !ap_const_lv23_32.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_494_fu_1306_p0.read()) * sc_biguint<23>(ap_const_lv23_32);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_495_fu_2120_p0() {
    mul_ln1118_495_fu_2120_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_2533495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_495_fu_2120_p2() {
    mul_ln1118_495_fu_2120_p2 = (!mul_ln1118_495_fu_2120_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_495_fu_2120_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_496_fu_1484_p0() {
    mul_ln1118_496_fu_1484_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_2533495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_496_fu_1484_p2() {
    mul_ln1118_496_fu_1484_p2 = (!mul_ln1118_496_fu_1484_p0.read().is_01() || !ap_const_lv24_FFFE9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_496_fu_1484_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE9D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_497_fu_2122_p0() {
    mul_ln1118_497_fu_2122_p0 =  (sc_lv<16>) (sext_ln1118_457_fu_2533515_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_497_fu_2122_p2() {
    mul_ln1118_497_fu_2122_p2 = (!mul_ln1118_497_fu_2122_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_497_fu_2122_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_498_fu_1486_p0() {
    mul_ln1118_498_fu_1486_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_2533495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_498_fu_1486_p2() {
    mul_ln1118_498_fu_1486_p2 = (!mul_ln1118_498_fu_1486_p0.read().is_01() || !ap_const_lv24_FFFFA3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_498_fu_1486_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_499_fu_1487_p0() {
    mul_ln1118_499_fu_1487_p0 =  (sc_lv<16>) (sext_ln1118_457_fu_2533515_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_499_fu_1487_p2() {
    mul_ln1118_499_fu_1487_p2 = (!mul_ln1118_499_fu_1487_p0.read().is_01() || !ap_const_lv23_37.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_499_fu_1487_p0.read()) * sc_biguint<23>(ap_const_lv23_37);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_49_fu_1650_p0() {
    mul_ln1118_49_fu_1650_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2519270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_49_fu_1650_p2() {
    mul_ln1118_49_fu_1650_p2 = (!mul_ln1118_49_fu_1650_p0.read().is_01() || !ap_const_lv24_75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_49_fu_1650_p0.read()) * sc_biguint<24>(ap_const_lv24_75);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_500_fu_1943_p0() {
    mul_ln1118_500_fu_1943_p0 =  (sc_lv<16>) (sext_ln1118_455_fu_2533495_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_500_fu_1943_p2() {
    mul_ln1118_500_fu_1943_p2 = (!mul_ln1118_500_fu_1943_p0.read().is_01() || !ap_const_lv24_C8.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_500_fu_1943_p0.read()) * sc_biguint<24>(ap_const_lv24_C8);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_501_fu_1944_p0() {
    mul_ln1118_501_fu_1944_p0 =  (sc_lv<16>) (sext_ln1118_467_fu_2533851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_501_fu_1944_p2() {
    mul_ln1118_501_fu_1944_p2 = (!mul_ln1118_501_fu_1944_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_501_fu_1944_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_502_fu_2061_p0() {
    mul_ln1118_502_fu_2061_p0 = sext_ln1118_468_fu_2533860_p0.read();
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_502_fu_2061_p2() {
    mul_ln1118_502_fu_2061_p2 = (!mul_ln1118_502_fu_2061_p0.read().is_01() || !ap_const_lv22_3FFFE5.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_502_fu_2061_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE5);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_503_fu_1217_p0() {
    mul_ln1118_503_fu_1217_p0 =  (sc_lv<16>) (sext_ln1118_467_fu_2533851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_503_fu_1217_p2() {
    mul_ln1118_503_fu_1217_p2 = (!mul_ln1118_503_fu_1217_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_503_fu_1217_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_504_fu_1332_p0() {
    mul_ln1118_504_fu_1332_p0 =  (sc_lv<16>) (sext_ln1118_466_fu_2533842_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_504_fu_1332_p2() {
    mul_ln1118_504_fu_1332_p2 = (!mul_ln1118_504_fu_1332_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_504_fu_1332_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_505_fu_1347_p0() {
    mul_ln1118_505_fu_1347_p0 =  (sc_lv<16>) (sext_ln1118_466_fu_2533842_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_505_fu_1347_p2() {
    mul_ln1118_505_fu_1347_p2 = (!mul_ln1118_505_fu_1347_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_505_fu_1347_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_506_fu_1219_p0() {
    mul_ln1118_506_fu_1219_p0 =  (sc_lv<16>) (sext_ln1118_467_fu_2533851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_506_fu_1219_p2() {
    mul_ln1118_506_fu_1219_p2 = (!mul_ln1118_506_fu_1219_p0.read().is_01() || !ap_const_lv23_33.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_506_fu_1219_p0.read()) * sc_biguint<23>(ap_const_lv23_33);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_507_fu_1377_p0() {
    mul_ln1118_507_fu_1377_p0 =  (sc_lv<16>) (sext_ln1118_466_fu_2533842_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_507_fu_1377_p2() {
    mul_ln1118_507_fu_1377_p2 = (!mul_ln1118_507_fu_1377_p0.read().is_01() || !ap_const_lv24_4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_507_fu_1377_p0.read()) * sc_biguint<24>(ap_const_lv24_4B);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_508_fu_1735_p0() {
    mul_ln1118_508_fu_1735_p0 =  (sc_lv<16>) (sext_ln1118_466_fu_2533842_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_508_fu_1735_p2() {
    mul_ln1118_508_fu_1735_p2 = (!mul_ln1118_508_fu_1735_p0.read().is_01() || !ap_const_lv24_46.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_508_fu_1735_p0.read()) * sc_biguint<24>(ap_const_lv24_46);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_509_fu_2136_p0() {
    mul_ln1118_509_fu_2136_p0 =  (sc_lv<16>) (sext_ln1118_467_fu_2533851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_509_fu_2136_p2() {
    mul_ln1118_509_fu_2136_p2 = (!mul_ln1118_509_fu_2136_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_509_fu_2136_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_50_fu_1279_p0() {
    mul_ln1118_50_fu_1279_p0 =  (sc_lv<16>) (sext_ln1118_33_fu_2519270_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_50_fu_1279_p2() {
    mul_ln1118_50_fu_1279_p2 = (!mul_ln1118_50_fu_1279_p0.read().is_01() || !ap_const_lv24_FFFF95.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_50_fu_1279_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF95);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_510_fu_2008_p0() {
    mul_ln1118_510_fu_2008_p0 =  (sc_lv<16>) (sext_ln1118_467_fu_2533851_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_510_fu_2008_p2() {
    mul_ln1118_510_fu_2008_p2 = (!mul_ln1118_510_fu_2008_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_510_fu_2008_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_511_fu_1251_p0() {
    mul_ln1118_511_fu_1251_p0 =  (sc_lv<16>) (sext_ln1118_466_fu_2533842_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_511_fu_1251_p2() {
    mul_ln1118_511_fu_1251_p2 = (!mul_ln1118_511_fu_1251_p0.read().is_01() || !ap_const_lv24_FFFFBD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_511_fu_1251_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBD);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_512_fu_1509_p0() {
    mul_ln1118_512_fu_1509_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_2534261_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_512_fu_1509_p2() {
    mul_ln1118_512_fu_1509_p2 = (!mul_ln1118_512_fu_1509_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_512_fu_1509_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_513_fu_1138_p0() {
    mul_ln1118_513_fu_1138_p0 =  (sc_lv<16>) (sext_ln1118_482_fu_2534282_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_513_fu_1138_p2() {
    mul_ln1118_513_fu_1138_p2 = (!mul_ln1118_513_fu_1138_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_513_fu_1138_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_514_fu_2025_p0() {
    mul_ln1118_514_fu_2025_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_2534261_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_514_fu_2025_p2() {
    mul_ln1118_514_fu_2025_p2 = (!mul_ln1118_514_fu_2025_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_514_fu_2025_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_515_fu_1654_p0() {
    mul_ln1118_515_fu_1654_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_2534261_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_515_fu_1654_p2() {
    mul_ln1118_515_fu_1654_p2 = (!mul_ln1118_515_fu_1654_p0.read().is_01() || !ap_const_lv24_D1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_515_fu_1654_p0.read()) * sc_biguint<24>(ap_const_lv24_D1);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_516_fu_1183_p0() {
    mul_ln1118_516_fu_1183_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_2534261_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_516_fu_1183_p2() {
    mul_ln1118_516_fu_1183_p2 = (!mul_ln1118_516_fu_1183_p0.read().is_01() || !ap_const_lv24_FFFF09.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_516_fu_1183_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF09);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_517_fu_1815_p0() {
    mul_ln1118_517_fu_1815_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_2534261_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_517_fu_1815_p2() {
    mul_ln1118_517_fu_1815_p2 = (!mul_ln1118_517_fu_1815_p0.read().is_01() || !ap_const_lv24_FFFE94.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_517_fu_1815_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE94);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_518_fu_1533_p0() {
    mul_ln1118_518_fu_1533_p0 =  (sc_lv<16>) (sext_ln1118_481_fu_2534276_p1.read());
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_518_fu_1533_p2() {
    mul_ln1118_518_fu_1533_p2 = (!mul_ln1118_518_fu_1533_p0.read().is_01() || !ap_const_lv23_23.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_518_fu_1533_p0.read()) * sc_biguint<23>(ap_const_lv23_23);
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_519_fu_1817_p0() {
    mul_ln1118_519_fu_1817_p0 =  (sc_lv<16>) (sext_ln1118_480_fu_2534261_p1.read());
}

}

