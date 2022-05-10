#include "conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1934_fu_1536150_p2() {
    add_ln703_1934_fu_1536150_p2 = (!add_ln703_1933_fu_1536144_p2.read().is_01() || !add_ln703_1928_fu_1536117_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1933_fu_1536144_p2.read()) + sc_biguint<16>(add_ln703_1928_fu_1536117_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1936_fu_1536162_p2() {
    add_ln703_1936_fu_1536162_p2 = (!mult_920_V_fu_1534541_p1.read().is_01() || !mult_921_V_fu_1534573_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_920_V_fu_1534541_p1.read()) + sc_bigint<16>(mult_921_V_fu_1534573_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1937_fu_1536168_p2() {
    add_ln703_1937_fu_1536168_p2 = (!mult_923_V_fu_1534627_p1.read().is_01() || !mult_924_V_fu_1534657_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_923_V_fu_1534627_p1.read()) + sc_biguint<16>(mult_924_V_fu_1534657_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1938_fu_1536174_p2() {
    add_ln703_1938_fu_1536174_p2 = (!add_ln703_1937_fu_1536168_p2.read().is_01() || !grp_fu_1512521_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1937_fu_1536168_p2.read()) + sc_biguint<16>(grp_fu_1512521_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1939_fu_1536180_p2() {
    add_ln703_1939_fu_1536180_p2 = (!add_ln703_1938_fu_1536174_p2.read().is_01() || !add_ln703_1936_fu_1536162_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1938_fu_1536174_p2.read()) + sc_biguint<16>(add_ln703_1936_fu_1536162_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1940_fu_1536186_p2() {
    add_ln703_1940_fu_1536186_p2 = (!grp_fu_1512111_p4.read().is_01() || !grp_fu_1512531_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512111_p4.read()) + sc_biguint<16>(grp_fu_1512531_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1942_fu_1536192_p2() {
    add_ln703_1942_fu_1536192_p2 = (!grp_fu_1513047_p2.read().is_01() || !mult_927_V_fu_1534707_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1513047_p2.read()) + sc_biguint<16>(mult_927_V_fu_1534707_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1943_fu_1536198_p2() {
    add_ln703_1943_fu_1536198_p2 = (!add_ln703_1942_fu_1536192_p2.read().is_01() || !add_ln703_1940_fu_1536186_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1942_fu_1536192_p2.read()) + sc_biguint<16>(add_ln703_1940_fu_1536186_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1944_fu_1536204_p2() {
    add_ln703_1944_fu_1536204_p2 = (!add_ln703_1943_fu_1536198_p2.read().is_01() || !add_ln703_1939_fu_1536180_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1943_fu_1536198_p2.read()) + sc_biguint<16>(add_ln703_1939_fu_1536180_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1945_fu_1536210_p2() {
    add_ln703_1945_fu_1536210_p2 = (!grp_fu_1511991_p4.read().is_01() || !grp_fu_1512131_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1511991_p4.read()) + sc_biguint<16>(grp_fu_1512131_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1946_fu_1536216_p2() {
    add_ln703_1946_fu_1536216_p2 = (!grp_fu_1512401_p4.read().is_01() || !mult_934_V_fu_1534717_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512401_p4.read()) + sc_bigint<16>(mult_934_V_fu_1534717_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1947_fu_1536222_p2() {
    add_ln703_1947_fu_1536222_p2 = (!add_ln703_1946_fu_1536216_p2.read().is_01() || !grp_fu_1512851_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1946_fu_1536216_p2.read()) + sc_biguint<16>(grp_fu_1512851_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1948_fu_1536228_p2() {
    add_ln703_1948_fu_1536228_p2 = (!add_ln703_1947_fu_1536222_p2.read().is_01() || !add_ln703_1945_fu_1536210_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1947_fu_1536222_p2.read()) + sc_biguint<16>(add_ln703_1945_fu_1536210_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1949_fu_1533257_p2() {
    add_ln703_1949_fu_1533257_p2 = (!mult_937_V_fu_1528417_p4.read().is_01() || !mult_938_V_fu_1528427_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_937_V_fu_1528417_p4.read()) + sc_biguint<16>(mult_938_V_fu_1528427_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1950_fu_1533263_p2() {
    add_ln703_1950_fu_1533263_p2 = (!add_ln703_1949_fu_1533257_p2.read().is_01() || !mult_935_V_fu_1528369_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1949_fu_1533257_p2.read()) + sc_bigint<16>(mult_935_V_fu_1528369_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1951_fu_1533269_p2() {
    add_ln703_1951_fu_1533269_p2 = (!ap_const_lv12_FEB.is_01() || !sext_ln203_42_fu_1528383_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_FEB) + sc_bigint<12>(sext_ln203_42_fu_1528383_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1952_fu_1533279_p2() {
    add_ln703_1952_fu_1533279_p2 = (!sext_ln703_42_fu_1533275_p1.read().is_01() || !mult_939_V_fu_1528437_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_42_fu_1533275_p1.read()) + sc_biguint<16>(mult_939_V_fu_1528437_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1953_fu_1533285_p2() {
    add_ln703_1953_fu_1533285_p2 = (!add_ln703_1952_fu_1533279_p2.read().is_01() || !add_ln703_1950_fu_1533263_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1952_fu_1533279_p2.read()) + sc_biguint<16>(add_ln703_1950_fu_1533263_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1954_fu_1536234_p2() {
    add_ln703_1954_fu_1536234_p2 = (!add_ln703_1953_reg_1537546.read().is_01() || !add_ln703_1948_fu_1536228_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1953_reg_1537546.read()) + sc_biguint<16>(add_ln703_1948_fu_1536228_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1956_fu_1536245_p2() {
    add_ln703_1956_fu_1536245_p2 = (!grp_fu_1512771_p4.read().is_01() || !grp_fu_1512011_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512771_p4.read()) + sc_biguint<16>(grp_fu_1512011_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1957_fu_1536251_p2() {
    add_ln703_1957_fu_1536251_p2 = (!grp_fu_1512161_p4.read().is_01() || !mult_944_V_fu_1534727_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512161_p4.read()) + sc_biguint<16>(mult_944_V_fu_1534727_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1958_fu_1536257_p2() {
    add_ln703_1958_fu_1536257_p2 = (!add_ln703_1957_fu_1536251_p2.read().is_01() || !grp_fu_1512021_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1957_fu_1536251_p2.read()) + sc_biguint<16>(grp_fu_1512021_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1959_fu_1536263_p2() {
    add_ln703_1959_fu_1536263_p2 = (!add_ln703_1958_fu_1536257_p2.read().is_01() || !add_ln703_1956_fu_1536245_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1958_fu_1536257_p2.read()) + sc_biguint<16>(add_ln703_1956_fu_1536245_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1960_fu_1536269_p2() {
    add_ln703_1960_fu_1536269_p2 = (!mult_945_V_fu_1534737_p1.read().is_01() || !mult_946_V_fu_1534741_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_945_V_fu_1534737_p1.read()) + sc_bigint<16>(mult_946_V_fu_1534741_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1961_fu_1536275_p2() {
    add_ln703_1961_fu_1536275_p2 = (!grp_fu_1512261_p4.read().is_01() || !grp_fu_1512791_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512261_p4.read()) + sc_biguint<16>(grp_fu_1512791_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1962_fu_1536281_p2() {
    add_ln703_1962_fu_1536281_p2 = (!add_ln703_1961_fu_1536275_p2.read().is_01() || !mult_947_V_fu_1534789_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1961_fu_1536275_p2.read()) + sc_bigint<16>(mult_947_V_fu_1534789_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1963_fu_1536287_p2() {
    add_ln703_1963_fu_1536287_p2 = (!add_ln703_1962_fu_1536281_p2.read().is_01() || !add_ln703_1960_fu_1536269_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1962_fu_1536281_p2.read()) + sc_biguint<16>(add_ln703_1960_fu_1536269_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1964_fu_1536293_p2() {
    add_ln703_1964_fu_1536293_p2 = (!add_ln703_1963_fu_1536287_p2.read().is_01() || !add_ln703_1959_fu_1536263_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1963_fu_1536287_p2.read()) + sc_biguint<16>(add_ln703_1959_fu_1536263_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1965_fu_1536299_p2() {
    add_ln703_1965_fu_1536299_p2 = (!sext_ln203_70_fu_1534821_p1.read().is_01() || !sext_ln203_71_fu_1534825_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_70_fu_1534821_p1.read()) + sc_bigint<14>(sext_ln203_71_fu_1534825_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1966_fu_1536309_p2() {
    add_ln703_1966_fu_1536309_p2 = (!mult_953_V_fu_1534873_p1.read().is_01() || !mult_954_V_fu_1534895_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_953_V_fu_1534873_p1.read()) + sc_biguint<16>(mult_954_V_fu_1534895_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1967_fu_1536315_p2() {
    add_ln703_1967_fu_1536315_p2 = (!add_ln703_1966_fu_1536309_p2.read().is_01() || !mult_952_V_fu_1534869_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1966_fu_1536309_p2.read()) + sc_bigint<16>(mult_952_V_fu_1534869_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1968_fu_1536321_p2() {
    add_ln703_1968_fu_1536321_p2 = (!add_ln703_1967_fu_1536315_p2.read().is_01() || !sext_ln703_53_fu_1536305_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1967_fu_1536315_p2.read()) + sc_bigint<16>(sext_ln703_53_fu_1536305_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1969_fu_1533291_p2() {
    add_ln703_1969_fu_1533291_p2 = (!mult_956_V_fu_1528479_p4.read().is_01() || !mult_958_V_fu_1528503_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_956_V_fu_1528479_p4.read()) + sc_biguint<16>(mult_958_V_fu_1528503_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1970_fu_1533297_p2() {
    add_ln703_1970_fu_1533297_p2 = (!add_ln703_1969_fu_1533291_p2.read().is_01() || !mult_955_V_fu_1528475_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1969_fu_1533291_p2.read()) + sc_bigint<16>(mult_955_V_fu_1528475_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1971_fu_1533303_p2() {
    add_ln703_1971_fu_1533303_p2 = (!ap_const_lv9_52.is_01() || !sext_ln203_43_fu_1528499_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_52) + sc_bigint<9>(sext_ln203_43_fu_1528499_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1972_fu_1533313_p2() {
    add_ln703_1972_fu_1533313_p2 = (!sext_ln703_43_fu_1533309_p1.read().is_01() || !mult_959_V_fu_1528513_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_43_fu_1533309_p1.read()) + sc_biguint<16>(mult_959_V_fu_1528513_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1973_fu_1533319_p2() {
    add_ln703_1973_fu_1533319_p2 = (!add_ln703_1972_fu_1533313_p2.read().is_01() || !add_ln703_1970_fu_1533297_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1972_fu_1533313_p2.read()) + sc_biguint<16>(add_ln703_1970_fu_1533297_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1974_fu_1536327_p2() {
    add_ln703_1974_fu_1536327_p2 = (!add_ln703_1973_reg_1537551.read().is_01() || !add_ln703_1968_fu_1536321_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1973_reg_1537551.read()) + sc_biguint<16>(add_ln703_1968_fu_1536321_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1976_fu_1536338_p2() {
    add_ln703_1976_fu_1536338_p2 = (!grp_fu_1512801_p4.read().is_01() || !grp_fu_1512431_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512801_p4.read()) + sc_biguint<16>(grp_fu_1512431_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1977_fu_1536344_p2() {
    add_ln703_1977_fu_1536344_p2 = (!grp_fu_1512271_p4.read().is_01() || !grp_fu_1512031_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512271_p4.read()) + sc_biguint<16>(grp_fu_1512031_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1978_fu_1536350_p2() {
    add_ln703_1978_fu_1536350_p2 = (!add_ln703_1977_fu_1536344_p2.read().is_01() || !grp_fu_1512191_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1977_fu_1536344_p2.read()) + sc_biguint<16>(grp_fu_1512191_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1979_fu_1536356_p2() {
    add_ln703_1979_fu_1536356_p2 = (!add_ln703_1978_fu_1536350_p2.read().is_01() || !add_ln703_1976_fu_1536338_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1978_fu_1536350_p2.read()) + sc_biguint<16>(add_ln703_1976_fu_1536338_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1980_fu_1536362_p2() {
    add_ln703_1980_fu_1536362_p2 = (!mult_965_V_fu_1534945_p1.read().is_01() || !grp_fu_1513001_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_965_V_fu_1534945_p1.read()) + sc_biguint<16>(grp_fu_1513001_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1981_fu_1536368_p2() {
    add_ln703_1981_fu_1536368_p2 = (!grp_fu_1512441_p4.read().is_01() || !grp_fu_1512811_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512441_p4.read()) + sc_biguint<16>(grp_fu_1512811_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1982_fu_1536374_p2() {
    add_ln703_1982_fu_1536374_p2 = (!add_ln703_1981_fu_1536368_p2.read().is_01() || !mult_967_V_fu_1534971_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1981_fu_1536368_p2.read()) + sc_bigint<16>(mult_967_V_fu_1534971_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1983_fu_1536380_p2() {
    add_ln703_1983_fu_1536380_p2 = (!add_ln703_1982_fu_1536374_p2.read().is_01() || !add_ln703_1980_fu_1536362_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1982_fu_1536374_p2.read()) + sc_biguint<16>(add_ln703_1980_fu_1536362_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1984_fu_1536386_p2() {
    add_ln703_1984_fu_1536386_p2 = (!add_ln703_1983_fu_1536380_p2.read().is_01() || !add_ln703_1979_fu_1536356_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1983_fu_1536380_p2.read()) + sc_biguint<16>(add_ln703_1979_fu_1536356_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1985_fu_1536392_p2() {
    add_ln703_1985_fu_1536392_p2 = (!grp_fu_1512821_p4.read().is_01() || !mult_971_V_fu_1535019_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512821_p4.read()) + sc_bigint<16>(mult_971_V_fu_1535019_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1986_fu_1536398_p2() {
    add_ln703_1986_fu_1536398_p2 = (!grp_fu_1512291_p4.read().is_01() || !mult_974_V_fu_1535107_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512291_p4.read()) + sc_bigint<16>(mult_974_V_fu_1535107_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1987_fu_1536404_p2() {
    add_ln703_1987_fu_1536404_p2 = (!add_ln703_1986_fu_1536398_p2.read().is_01() || !mult_972_V_fu_1535063_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1986_fu_1536398_p2.read()) + sc_bigint<16>(mult_972_V_fu_1535063_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1988_fu_1536410_p2() {
    add_ln703_1988_fu_1536410_p2 = (!add_ln703_1987_fu_1536404_p2.read().is_01() || !add_ln703_1985_fu_1536392_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1987_fu_1536404_p2.read()) + sc_biguint<16>(add_ln703_1985_fu_1536392_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1989_fu_1533325_p2() {
    add_ln703_1989_fu_1533325_p2 = (!mult_976_V_fu_1528543_p4.read().is_01() || !mult_977_V_fu_1528553_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_976_V_fu_1528543_p4.read()) + sc_biguint<16>(mult_977_V_fu_1528553_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1990_fu_1533331_p2() {
    add_ln703_1990_fu_1533331_p2 = (!add_ln703_1989_fu_1533325_p2.read().is_01() || !mult_975_V_fu_1528539_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1989_fu_1533325_p2.read()) + sc_bigint<16>(mult_975_V_fu_1528539_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1991_fu_1533337_p2() {
    add_ln703_1991_fu_1533337_p2 = (!ap_const_lv16_FFDD.is_01() || !mult_979_V_fu_1528573_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(ap_const_lv16_FFDD) + sc_biguint<16>(mult_979_V_fu_1528573_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1992_fu_1533343_p2() {
    add_ln703_1992_fu_1533343_p2 = (!add_ln703_1991_fu_1533337_p2.read().is_01() || !mult_978_V_fu_1528563_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1991_fu_1533337_p2.read()) + sc_biguint<16>(mult_978_V_fu_1528563_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1993_fu_1533349_p2() {
    add_ln703_1993_fu_1533349_p2 = (!add_ln703_1992_fu_1533343_p2.read().is_01() || !add_ln703_1990_fu_1533331_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1992_fu_1533343_p2.read()) + sc_biguint<16>(add_ln703_1990_fu_1533331_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1994_fu_1536416_p2() {
    add_ln703_1994_fu_1536416_p2 = (!add_ln703_1993_reg_1537556.read().is_01() || !add_ln703_1988_fu_1536410_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1993_reg_1537556.read()) + sc_biguint<16>(add_ln703_1988_fu_1536410_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1996_fu_1536427_p2() {
    add_ln703_1996_fu_1536427_p2 = (!mult_980_V_fu_1535111_p1.read().is_01() || !grp_fu_1512661_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_980_V_fu_1535111_p1.read()) + sc_biguint<16>(grp_fu_1512661_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1997_fu_1536433_p2() {
    add_ln703_1997_fu_1536433_p2 = (!mult_983_V_fu_1535129_p4.read().is_01() || !grp_fu_1512451_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_983_V_fu_1535129_p4.read()) + sc_biguint<16>(grp_fu_1512451_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1998_fu_1536439_p2() {
    add_ln703_1998_fu_1536439_p2 = (!add_ln703_1997_fu_1536433_p2.read().is_01() || !grp_fu_1513011_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1997_fu_1536433_p2.read()) + sc_biguint<16>(grp_fu_1513011_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1999_fu_1536445_p2() {
    add_ln703_1999_fu_1536445_p2 = (!add_ln703_1998_fu_1536439_p2.read().is_01() || !add_ln703_1996_fu_1536427_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1998_fu_1536439_p2.read()) + sc_biguint<16>(add_ln703_1996_fu_1536427_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2000_fu_1536451_p2() {
    add_ln703_2000_fu_1536451_p2 = (!grp_fu_1512701_p4.read().is_01() || !grp_fu_1512611_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512701_p4.read()) + sc_biguint<16>(grp_fu_1512611_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2001_fu_1536457_p2() {
    add_ln703_2001_fu_1536457_p2 = (!grp_fu_1512081_p4.read().is_01() || !mult_989_V_fu_1535169_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512081_p4.read()) + sc_biguint<16>(mult_989_V_fu_1535169_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2002_fu_1536463_p2() {
    add_ln703_2002_fu_1536463_p2 = (!add_ln703_2001_fu_1536457_p2.read().is_01() || !grp_fu_1512071_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2001_fu_1536457_p2.read()) + sc_biguint<16>(grp_fu_1512071_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2003_fu_1536469_p2() {
    add_ln703_2003_fu_1536469_p2 = (!add_ln703_2002_fu_1536463_p2.read().is_01() || !add_ln703_2000_fu_1536451_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2002_fu_1536463_p2.read()) + sc_biguint<16>(add_ln703_2000_fu_1536451_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2004_fu_1536475_p2() {
    add_ln703_2004_fu_1536475_p2 = (!add_ln703_2003_fu_1536469_p2.read().is_01() || !add_ln703_1999_fu_1536445_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2003_fu_1536469_p2.read()) + sc_biguint<16>(add_ln703_1999_fu_1536445_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2005_fu_1536481_p2() {
    add_ln703_2005_fu_1536481_p2 = (!grp_fu_1512461_p4.read().is_01() || !mult_991_V_fu_1535207_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512461_p4.read()) + sc_bigint<16>(mult_991_V_fu_1535207_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2007_fu_1536487_p2() {
    add_ln703_2007_fu_1536487_p2 = (!grp_fu_1513041_p2.read().is_01() || !grp_fu_1512881_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1513041_p2.read()) + sc_biguint<16>(grp_fu_1512881_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2008_fu_1536493_p2() {
    add_ln703_2008_fu_1536493_p2 = (!add_ln703_2007_fu_1536487_p2.read().is_01() || !add_ln703_2005_fu_1536481_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2007_fu_1536487_p2.read()) + sc_biguint<16>(add_ln703_2005_fu_1536481_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2009_fu_1533355_p2() {
    add_ln703_2009_fu_1533355_p2 = (!mult_996_V_fu_1528629_p1.read().is_01() || !mult_997_V_fu_1528633_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_996_V_fu_1528629_p1.read()) + sc_biguint<16>(mult_997_V_fu_1528633_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2010_fu_1536499_p2() {
    add_ln703_2010_fu_1536499_p2 = (!add_ln703_2009_reg_1537561.read().is_01() || !grp_fu_1512351_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2009_reg_1537561.read()) + sc_biguint<16>(grp_fu_1512351_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2011_fu_1533361_p2() {
    add_ln703_2011_fu_1533361_p2 = (!ap_const_lv16_6.is_01() || !mult_999_V_fu_1528671_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_6) + sc_biguint<16>(mult_999_V_fu_1528671_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2012_fu_1533367_p2() {
    add_ln703_2012_fu_1533367_p2 = (!add_ln703_2011_fu_1533361_p2.read().is_01() || !mult_998_V_fu_1528661_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2011_fu_1533361_p2.read()) + sc_biguint<16>(mult_998_V_fu_1528661_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2013_fu_1536504_p2() {
    add_ln703_2013_fu_1536504_p2 = (!add_ln703_2012_reg_1537566.read().is_01() || !add_ln703_2010_fu_1536499_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2012_reg_1537566.read()) + sc_biguint<16>(add_ln703_2010_fu_1536499_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2014_fu_1536509_p2() {
    add_ln703_2014_fu_1536509_p2 = (!add_ln703_2013_fu_1536504_p2.read().is_01() || !add_ln703_2008_fu_1536493_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2013_fu_1536504_p2.read()) + sc_biguint<16>(add_ln703_2008_fu_1536493_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_fu_1528681_p2() {
    add_ln703_fu_1528681_p2 = (!mult_0_V_fu_1513066_p4.read().is_01() || !mult_1_V_fu_1513129_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_0_V_fu_1513066_p4.read()) + sc_bigint<16>(mult_1_V_fu_1513129_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_0() {
    ap_return_0 = acc_0_0_V_fu_1535215_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_1() {
    ap_return_1 = acc_0_1_V_fu_1535224_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_10() {
    ap_return_10 = acc_2_0_V_fu_1535305_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_11() {
    ap_return_11 = acc_2_1_V_fu_1535314_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_12() {
    ap_return_12 = acc_2_2_V_fu_1535323_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_13() {
    ap_return_13 = acc_2_3_V_fu_1535332_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_14() {
    ap_return_14 = acc_2_4_V_fu_1535341_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_15() {
    ap_return_15 = acc_3_0_V_fu_1535350_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_16() {
    ap_return_16 = acc_3_1_V_fu_1535359_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_17() {
    ap_return_17 = acc_3_2_V_fu_1535368_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_18() {
    ap_return_18 = acc_3_3_V_fu_1535377_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_19() {
    ap_return_19 = acc_3_4_V_fu_1535386_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_2() {
    ap_return_2 = acc_0_2_V_fu_1535233_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_20() {
    ap_return_20 = acc_4_0_V_fu_1535395_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_21() {
    ap_return_21 = acc_4_1_V_fu_1535404_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_22() {
    ap_return_22 = acc_4_2_V_fu_1535413_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_23() {
    ap_return_23 = acc_4_3_V_fu_1535422_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_24() {
    ap_return_24 = acc_4_4_V_fu_1535431_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_25() {
    ap_return_25 = acc_5_0_V_fu_1535440_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_26() {
    ap_return_26 = acc_5_1_V_fu_1535449_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_27() {
    ap_return_27 = acc_5_2_V_fu_1535458_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_28() {
    ap_return_28 = acc_5_3_V_fu_1535467_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_29() {
    ap_return_29 = acc_5_4_V_fu_1535476_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_3() {
    ap_return_3 = acc_0_3_V_fu_1535242_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_30() {
    ap_return_30 = acc_6_0_V_fu_1535485_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_31() {
    ap_return_31 = acc_6_1_V_fu_1535494_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_32() {
    ap_return_32 = acc_6_2_V_fu_1535503_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_33() {
    ap_return_33 = acc_6_3_V_fu_1535512_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_34() {
    ap_return_34 = acc_6_4_V_fu_1535521_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_35() {
    ap_return_35 = acc_7_0_V_fu_1535530_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_36() {
    ap_return_36 = acc_7_1_V_fu_1535539_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_37() {
    ap_return_37 = acc_7_2_V_fu_1535548_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_38() {
    ap_return_38 = acc_7_3_V_fu_1535557_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_39() {
    ap_return_39 = acc_7_4_V_fu_1535566_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_4() {
    ap_return_4 = acc_0_4_V_fu_1535251_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_40() {
    ap_return_40 = acc_8_0_V_fu_1535668_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_41() {
    ap_return_41 = acc_8_1_V_fu_1535757_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_42() {
    ap_return_42 = acc_8_2_V_fu_1535850_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_43() {
    ap_return_43 = acc_8_3_V_fu_1535939_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_44() {
    ap_return_44 = acc_8_4_V_fu_1536039_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_45() {
    ap_return_45 = acc_9_0_V_fu_1536156_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_46() {
    ap_return_46 = acc_9_1_V_fu_1536239_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_47() {
    ap_return_47 = acc_9_2_V_fu_1536332_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_48() {
    ap_return_48 = acc_9_3_V_fu_1536421_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_49() {
    ap_return_49 = acc_9_4_V_fu_1536515_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_5() {
    ap_return_5 = acc_1_0_V_fu_1535260_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_6() {
    ap_return_6 = acc_1_1_V_fu_1535269_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_7() {
    ap_return_7 = acc_1_2_V_fu_1535278_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_8() {
    ap_return_8 = acc_1_3_V_fu_1535287_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_9() {
    ap_return_9 = acc_1_4_V_fu_1535296_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1511941_p4() {
    grp_fu_1511941_p4 = grp_fu_2133_p2.read().range(21, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1511951_p4() {
    grp_fu_1511951_p4 = grp_fu_2135_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1511961_p4() {
    grp_fu_1511961_p4 = grp_fu_2201_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1511971_p4() {
    grp_fu_1511971_p4 = grp_fu_2218_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1511981_p4() {
    grp_fu_1511981_p4 = grp_fu_2220_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1511991_p4() {
    grp_fu_1511991_p4 = grp_fu_2419_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512001_p4() {
    grp_fu_1512001_p4 = grp_fu_2214_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512011_p4() {
    grp_fu_1512011_p4 = grp_fu_2219_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512021_p4() {
    grp_fu_1512021_p4 = grp_fu_2344_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512031_p4() {
    grp_fu_1512031_p4 = grp_fu_1900_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512041_p4() {
    grp_fu_1512041_p4 = grp_fu_2005_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512051_p4() {
    grp_fu_1512051_p4 = grp_fu_1904_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512061_p4() {
    grp_fu_1512061_p4 = grp_fu_1848_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512071_p4() {
    grp_fu_1512071_p4 = grp_fu_1851_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512081_p4() {
    grp_fu_1512081_p4 = grp_fu_2429_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512091_p4() {
    grp_fu_1512091_p4 = grp_fu_1988_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512101_p4() {
    grp_fu_1512101_p4 = grp_fu_1992_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512111_p4() {
    grp_fu_1512111_p4 = grp_fu_2273_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512121_p4() {
    grp_fu_1512121_p4 = grp_fu_2167_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512131_p4() {
    grp_fu_1512131_p4 = grp_fu_2168_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512141_p4() {
    grp_fu_1512141_p4 = grp_fu_2169_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512151_p4() {
    grp_fu_1512151_p4 = grp_fu_2279_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512161_p4() {
    grp_fu_1512161_p4 = grp_fu_2177_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512171_p4() {
    grp_fu_1512171_p4 = grp_fu_2082_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512181_p4() {
    grp_fu_1512181_p4 = grp_fu_1967_p2.read().range(21, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512191_p4() {
    grp_fu_1512191_p4 = grp_fu_2057_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512201_p4() {
    grp_fu_1512201_p4 = grp_fu_1856_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512211_p4() {
    grp_fu_1512211_p4 = grp_fu_1911_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512221_p4() {
    grp_fu_1512221_p4 = grp_fu_2229_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512231_p4() {
    grp_fu_1512231_p4 = grp_fu_2318_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512241_p4() {
    grp_fu_1512241_p4 = grp_fu_2327_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512251_p4() {
    grp_fu_1512251_p4 = grp_fu_2113_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512261_p4() {
    grp_fu_1512261_p4 = grp_fu_2102_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512271_p4() {
    grp_fu_1512271_p4 = grp_fu_2204_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512281_p4() {
    grp_fu_1512281_p4 = grp_fu_2103_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512291_p4() {
    grp_fu_1512291_p4 = grp_fu_2372_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512301_p4() {
    grp_fu_1512301_p4 = grp_fu_2424_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512311_p4() {
    grp_fu_1512311_p4 = grp_fu_2353_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512321_p4() {
    grp_fu_1512321_p4 = grp_fu_1912_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512331_p4() {
    grp_fu_1512331_p4 = grp_fu_1915_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512341_p4() {
    grp_fu_1512341_p4 = grp_fu_1916_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512351_p4() {
    grp_fu_1512351_p4 = grp_fu_1845_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512361_p4() {
    grp_fu_1512361_p4 = grp_fu_2348_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512371_p4() {
    grp_fu_1512371_p4 = grp_fu_2375_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512381_p4() {
    grp_fu_1512381_p4 = grp_fu_2311_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512391_p4() {
    grp_fu_1512391_p4 = grp_fu_2161_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512401_p4() {
    grp_fu_1512401_p4 = grp_fu_2059_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512411_p4() {
    grp_fu_1512411_p4 = grp_fu_2063_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512421_p4() {
    grp_fu_1512421_p4 = grp_fu_1995_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512431_p4() {
    grp_fu_1512431_p4 = grp_fu_2104_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512441_p4() {
    grp_fu_1512441_p4 = grp_fu_2140_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512451_p4() {
    grp_fu_1512451_p4 = grp_fu_1878_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512461_p4() {
    grp_fu_1512461_p4 = grp_fu_2388_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512471_p4() {
    grp_fu_1512471_p4 = grp_fu_1896_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512481_p4() {
    grp_fu_1512481_p4 = grp_fu_1885_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512491_p4() {
    grp_fu_1512491_p4 = grp_fu_2018_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512501_p4() {
    grp_fu_1512501_p4 = grp_fu_2124_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512511_p4() {
    grp_fu_1512511_p4 = grp_fu_2386_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512521_p4() {
    grp_fu_1512521_p4 = grp_fu_2290_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512531_p4() {
    grp_fu_1512531_p4 = grp_fu_2292_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512541_p4() {
    grp_fu_1512541_p4 = grp_fu_1989_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512551_p4() {
    grp_fu_1512551_p4 = grp_fu_1991_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512561_p4() {
    grp_fu_1512561_p4 = grp_fu_1895_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512571_p4() {
    grp_fu_1512571_p4 = grp_fu_1972_p2.read().range(20, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512581_p4() {
    grp_fu_1512581_p4 = grp_fu_2075_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512591_p4() {
    grp_fu_1512591_p4 = grp_fu_2151_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512601_p4() {
    grp_fu_1512601_p4 = grp_fu_1873_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512611_p4() {
    grp_fu_1512611_p4 = grp_fu_2427_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512621_p4() {
    grp_fu_1512621_p4 = grp_fu_2339_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512631_p4() {
    grp_fu_1512631_p4 = grp_fu_2058_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512641_p4() {
    grp_fu_1512641_p4 = grp_fu_2157_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512651_p4() {
    grp_fu_1512651_p4 = grp_fu_2187_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512661_p4() {
    grp_fu_1512661_p4 = grp_fu_2040_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512671_p4() {
    grp_fu_1512671_p4 = grp_fu_2423_p2.read().range(20, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512681_p4() {
    grp_fu_1512681_p4 = grp_fu_2015_p2.read().range(21, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512691_p4() {
    grp_fu_1512691_p4 = grp_fu_2400_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512701_p4() {
    grp_fu_1512701_p4 = grp_fu_2432_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512711_p4() {
    grp_fu_1512711_p4 = grp_fu_1968_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512721_p4() {
    grp_fu_1512721_p4 = grp_fu_2248_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512731_p4() {
    grp_fu_1512731_p4 = grp_fu_2241_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512741_p4() {
    grp_fu_1512741_p4 = grp_fu_2233_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512751_p4() {
    grp_fu_1512751_p4 = grp_fu_2166_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512761_p4() {
    grp_fu_1512761_p4 = grp_fu_2171_p2.read().range(20, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512771_p4() {
    grp_fu_1512771_p4 = grp_fu_1966_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512781_p4() {
    grp_fu_1512781_p4 = grp_fu_2066_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512791_p4() {
    grp_fu_1512791_p4 = grp_fu_2370_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512801_p4() {
    grp_fu_1512801_p4 = grp_fu_2073_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512811_p4() {
    grp_fu_1512811_p4 = grp_fu_2252_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512821_p4() {
    grp_fu_1512821_p4 = grp_fu_2357_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512831_p4() {
    grp_fu_1512831_p4 = grp_fu_2358_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512841_p4() {
    grp_fu_1512841_p4 = grp_fu_1881_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512851_p4() {
    grp_fu_1512851_p4 = grp_fu_1846_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512861_p4() {
    grp_fu_1512861_p4 = grp_fu_1887_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512871_p4() {
    grp_fu_1512871_p4 = grp_fu_2394_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512881_p4() {
    grp_fu_1512881_p4 = grp_fu_2184_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512891_p4() {
    grp_fu_1512891_p4 = grp_fu_2046_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512901_p4() {
    grp_fu_1512901_p4 = grp_fu_2373_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512911_p4() {
    grp_fu_1512911_p4 = grp_fu_2108_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512921_p4() {
    grp_fu_1512921_p4 = grp_fu_2278_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512931_p4() {
    grp_fu_1512931_p4 = grp_fu_2303_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512941_p4() {
    grp_fu_1512941_p4 = grp_fu_2421_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512951_p4() {
    grp_fu_1512951_p4 = grp_fu_2106_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512961_p4() {
    grp_fu_1512961_p4 = grp_fu_2119_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512971_p4() {
    grp_fu_1512971_p4 = grp_fu_2109_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512981_p4() {
    grp_fu_1512981_p4 = grp_fu_1954_p2.read().range(20, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1512991_p4() {
    grp_fu_1512991_p4 = grp_fu_2116_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1513001_p4() {
    grp_fu_1513001_p4 = grp_fu_2310_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1513011_p4() {
    grp_fu_1513011_p4 = grp_fu_1949_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1513021_p4() {
    grp_fu_1513021_p4 = grp_fu_1939_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1513031_p4() {
    grp_fu_1513031_p4 = grp_fu_1946_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1513041_p2() {
    grp_fu_1513041_p2 = (!grp_fu_1512331_p4.read().is_01() || !grp_fu_1512341_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512331_p4.read()) + sc_biguint<16>(grp_fu_1512341_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1513047_p2() {
    grp_fu_1513047_p2 = (!grp_fu_1512741_p4.read().is_01() || !grp_fu_1512751_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1512741_p4.read()) + sc_biguint<16>(grp_fu_1512751_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1845_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1845_p1 =  (sc_lv<16>) (sext_ln1118_1156_fu_1534531_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1845_p1 =  (sc_lv<16>) (sext_ln1118_687_fu_1517070_p1.read());
    } else {
        grp_fu_1845_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1845_p2() {
    grp_fu_1845_p2 = (!ap_const_lv24_FFFECE.is_01() || !grp_fu_1845_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFECE) * sc_bigint<16>(grp_fu_1845_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1846_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1846_p1 =  (sc_lv<16>) (sext_ln1118_1153_fu_1534487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1846_p1 =  (sc_lv<16>) (sext_ln1118_932_fu_1524120_p1.read());
    } else {
        grp_fu_1846_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1846_p2() {
    grp_fu_1846_p2 = (!ap_const_lv24_5C.is_01() || !grp_fu_1846_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5C) * sc_bigint<16>(grp_fu_1846_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1848_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1848_p1 =  (sc_lv<16>) (sext_ln1118_1072_reg_1536869.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1848_p1 =  (sc_lv<16>) (sext_ln1118_536_fu_1513167_p1.read());
    } else {
        grp_fu_1848_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1848_p2() {
    grp_fu_1848_p2 = (!ap_const_lv24_7A.is_01() || !grp_fu_1848_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7A) * sc_bigint<16>(grp_fu_1848_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1851_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1851_p1 =  (sc_lv<16>) (sext_ln1118_1146_fu_1534441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1851_p1 =  (sc_lv<16>) (sext_ln1118_543_fu_1513252_p1.read());
    } else {
        grp_fu_1851_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1851_p2() {
    grp_fu_1851_p2 = (!ap_const_lv24_FFFF93.is_01() || !grp_fu_1851_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF93) * sc_bigint<16>(grp_fu_1851_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1856_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1856_p1 =  (sc_lv<16>) (sext_ln1118_1072_reg_1536869.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1856_p1 =  (sc_lv<16>) (sext_ln1118_603_fu_1514996_p1.read());
    } else {
        grp_fu_1856_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1856_p2() {
    grp_fu_1856_p2 = (!ap_const_lv24_C7.is_01() || !grp_fu_1856_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_C7) * sc_bigint<16>(grp_fu_1856_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1873_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1873_p1 =  (sc_lv<16>) (sext_ln1118_1131_fu_1534272_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1873_p1 =  (sc_lv<16>) (sext_ln1118_796_fu_1520379_p1.read());
    } else {
        grp_fu_1873_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1873_p2() {
    grp_fu_1873_p2 = (!ap_const_lv23_39.is_01() || !grp_fu_1873_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_39) * sc_bigint<16>(grp_fu_1873_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1878_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1878_p1 =  (sc_lv<16>) (sext_ln1118_1139_fu_1534366_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1878_p1 =  (sc_lv<16>) (sext_ln1118_737_fu_1518664_p1.read());
    } else {
        grp_fu_1878_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1878_p2() {
    grp_fu_1878_p2 = (!ap_const_lv24_7A.is_01() || !grp_fu_1878_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7A) * sc_bigint<16>(grp_fu_1878_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1881_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1881_p1 =  (sc_lv<16>) (sext_ln1118_1064_fu_1533373_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1881_p1 =  (sc_lv<16>) (sext_ln1118_930_fu_1524097_p1.read());
    } else {
        grp_fu_1881_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1881_p2() {
    grp_fu_1881_p2 = (!ap_const_lv23_39.is_01() || !grp_fu_1881_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_39) * sc_bigint<16>(grp_fu_1881_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1885_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1885_p1 =  (sc_lv<16>) (sext_ln1118_1088_fu_1533566_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1885_p1 =  (sc_lv<16>) (sext_ln1118_753_fu_1518857_p1.read());
    } else {
        grp_fu_1885_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1885_p2() {
    grp_fu_1885_p2 = (!ap_const_lv24_FFFF85.is_01() || !grp_fu_1885_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF85) * sc_bigint<16>(grp_fu_1885_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1887_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1887_p1 =  (sc_lv<16>) (sext_ln1118_1079_fu_1533508_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1887_p1 =  (sc_lv<16>) (sext_ln1118_945_fu_1524316_p1.read());
    } else {
        grp_fu_1887_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1887_p2() {
    grp_fu_1887_p2 = (!ap_const_lv24_FFFF93.is_01() || !grp_fu_1887_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF93) * sc_bigint<16>(grp_fu_1887_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1895_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1895_p1 =  (sc_lv<16>) (sext_ln1118_1071_fu_1533435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1895_p1 =  (sc_lv<16>) (sext_ln1118_803_fu_1520483_p1.read());
    } else {
        grp_fu_1895_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1895_p2() {
    grp_fu_1895_p2 = (!ap_const_lv24_47.is_01() || !grp_fu_1895_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_47) * sc_bigint<16>(grp_fu_1895_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1896_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1896_p1 =  (sc_lv<16>) (sext_ln1118_1086_fu_1533554_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1896_p1 =  (sc_lv<16>) (sext_ln1118_751_fu_1518835_p1.read());
    } else {
        grp_fu_1896_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1896_p2() {
    grp_fu_1896_p2 = (!ap_const_lv24_7B.is_01() || !grp_fu_1896_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7B) * sc_bigint<16>(grp_fu_1896_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1900_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1900_p1 =  (sc_lv<16>) (sext_ln1118_1139_fu_1534366_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1900_p1 =  (sc_lv<16>) (sext_ln1118_536_fu_1513167_p1.read());
    } else {
        grp_fu_1900_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1900_p2() {
    grp_fu_1900_p2 = (!ap_const_lv24_C7.is_01() || !grp_fu_1900_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_C7) * sc_bigint<16>(grp_fu_1900_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1904_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1904_p1 =  (sc_lv<16>) (sext_ln1118_1083_fu_1533535_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1904_p1 =  (sc_lv<16>) (sext_ln1118_547_fu_1513309_p1.read());
    } else {
        grp_fu_1904_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1904_p2() {
    grp_fu_1904_p2 = (!ap_const_lv24_FFFFAF.is_01() || !grp_fu_1904_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFAF) * sc_bigint<16>(grp_fu_1904_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1911_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1911_p1 =  (sc_lv<16>) (sext_ln1118_1089_fu_1533598_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1911_p1 =  (sc_lv<16>) (sext_ln1118_620_fu_1515231_p1.read());
    } else {
        grp_fu_1911_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1911_p2() {
    grp_fu_1911_p2 = (!ap_const_lv24_FFFECE.is_01() || !grp_fu_1911_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFECE) * sc_bigint<16>(grp_fu_1911_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1912_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1912_p1 =  (sc_lv<16>) (sext_ln1118_1080_fu_1533514_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1912_p1 =  (sc_lv<16>) (sext_ln1118_678_fu_1516936_p1.read());
    } else {
        grp_fu_1912_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1912_p2() {
    grp_fu_1912_p2 = (!ap_const_lv24_75.is_01() || !grp_fu_1912_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_75) * sc_bigint<16>(grp_fu_1912_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1915_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1915_p1 =  (sc_lv<16>) (sext_ln1118_1155_fu_1534499_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1915_p1 =  (sc_lv<16>) (sext_ln1118_686_fu_1517028_p1.read());
    } else {
        grp_fu_1915_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1915_p2() {
    grp_fu_1915_p2 = (!ap_const_lv24_FFFF85.is_01() || !grp_fu_1915_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF85) * sc_bigint<16>(grp_fu_1915_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1916_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1916_p1 =  (sc_lv<16>) (sext_ln708_498_fu_1534507_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1916_p1 =  (sc_lv<16>) (sext_ln708_288_fu_1517046_p1.read());
    } else {
        grp_fu_1916_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1916_p2() {
    grp_fu_1916_p2 = (!ap_const_lv24_65.is_01() || !grp_fu_1916_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_65) * sc_bigint<16>(grp_fu_1916_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1939_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1939_p1 =  (sc_lv<16>) (sext_ln1118_1074_fu_1533445_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1939_p1 =  (sc_lv<16>) (sext_ln1118_1007_fu_1526032_p1.read());
    } else {
        grp_fu_1939_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1939_p2() {
    grp_fu_1939_p2 = (!ap_const_lv24_FFFF7D.is_01() || !grp_fu_1939_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF7D) * sc_bigint<16>(grp_fu_1939_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1946_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1946_p1 =  (sc_lv<16>) (sext_ln708_468_fu_1533574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1946_p1 =  (sc_lv<16>) (sext_ln708_438_fu_1526201_p1.read());
    } else {
        grp_fu_1946_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1946_p2() {
    grp_fu_1946_p2 = (!ap_const_lv24_65.is_01() || !grp_fu_1946_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_65) * sc_bigint<16>(grp_fu_1946_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1949_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1949_p1 =  (sc_lv<16>) (sext_ln1118_1136_fu_1534342_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1949_p1 =  (sc_lv<16>) (sext_ln1118_1002_fu_1525966_p1.read());
    } else {
        grp_fu_1949_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1949_p2() {
    grp_fu_1949_p2 = (!ap_const_lv24_5D.is_01() || !grp_fu_1949_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5D) * sc_bigint<16>(grp_fu_1949_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1954_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1954_p1 =  (sc_lv<16>) (sext_ln1118_1084_fu_1533543_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1954_p1 =  (sc_lv<16>) (sext_ln1118_1017_fu_1526150_p1.read());
    } else {
        grp_fu_1954_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1954_p2() {
    grp_fu_1954_p2 = (!ap_const_lv21_1FFFF3.is_01() || !grp_fu_1954_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(grp_fu_1954_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1966_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1966_p1 =  (sc_lv<16>) (sext_ln1118_1132_fu_1534278_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1966_p1 =  (sc_lv<16>) (sext_ln1118_931_fu_1524103_p1.read());
    } else {
        grp_fu_1966_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1966_p2() {
    grp_fu_1966_p2 = (!ap_const_lv24_FFFF5E.is_01() || !grp_fu_1966_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF5E) * sc_bigint<16>(grp_fu_1966_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1967_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1967_p1 =  (sc_lv<16>) (sext_ln1118_1154_fu_1534494_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1967_p1 =  (sc_lv<16>) (sext_ln1118_618_fu_1515184_p1.read());
    } else {
        grp_fu_1967_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1967_p2() {
    grp_fu_1967_p2 = (!ap_const_lv22_1A.is_01() || !grp_fu_1967_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_1A) * sc_bigint<16>(grp_fu_1967_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1968_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1968_p1 =  (sc_lv<16>) (sext_ln1118_1083_fu_1533535_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1968_p1 =  (sc_lv<16>) (sext_ln1118_949_fu_1524373_p1.read());
    } else {
        grp_fu_1968_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1968_p2() {
    grp_fu_1968_p2 = (!ap_const_lv24_FFFF18.is_01() || !grp_fu_1968_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF18) * sc_bigint<16>(grp_fu_1968_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1972_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1972_p1 =  (sc_lv<16>) (sext_ln708_499_fu_1534512_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1972_p1 =  (sc_lv<16>) (sext_ln1118_816_fu_1520653_p1.read());
    } else {
        grp_fu_1972_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1972_p2() {
    grp_fu_1972_p2 = (!ap_const_lv21_1FFFF3.is_01() || !grp_fu_1972_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(grp_fu_1972_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1988_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1988_p1 =  (sc_lv<16>) (sext_ln1118_1079_fu_1533508_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1988_p1 =  (sc_lv<16>) (sext_ln1118_610_fu_1515091_p1.read());
    } else {
        grp_fu_1988_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1988_p2() {
    grp_fu_1988_p2 = (!ap_const_lv24_8B.is_01() || !grp_fu_1988_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8B) * sc_bigint<16>(grp_fu_1988_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1989_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1989_p1 =  (sc_lv<16>) (sext_ln1118_1153_fu_1534487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1989_p1 =  (sc_lv<16>) (sext_ln1118_815_fu_1520635_p1.read());
    } else {
        grp_fu_1989_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1989_p2() {
    grp_fu_1989_p2 = (!ap_const_lv24_8D.is_01() || !grp_fu_1989_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8D) * sc_bigint<16>(grp_fu_1989_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1991_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1991_p1 =  (sc_lv<16>) (sext_ln1118_1086_fu_1533554_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1991_p1 =  (sc_lv<16>) (sext_ln1118_818_fu_1520674_p1.read());
    } else {
        grp_fu_1991_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1991_p2() {
    grp_fu_1991_p2 = (!ap_const_lv24_5C.is_01() || !grp_fu_1991_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5C) * sc_bigint<16>(grp_fu_1991_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1992_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1992_p1 =  (sc_lv<16>) (sext_ln1118_1085_fu_1533548_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1992_p1 =  (sc_lv<16>) (sext_ln1118_616_fu_1515161_p1.read());
    } else {
        grp_fu_1992_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1992_p2() {
    grp_fu_1992_p2 = (!ap_const_lv24_FFFEE5.is_01() || !grp_fu_1992_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEE5) * sc_bigint<16>(grp_fu_1992_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1995_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1995_p1 =  (sc_lv<16>) (sext_ln1118_1065_reg_1536850.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1995_p1 =  (sc_lv<16>) (sext_ln1118_730_fu_1518546_p1.read());
    } else {
        grp_fu_1995_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1995_p2() {
    grp_fu_1995_p2 = (!ap_const_lv24_FFFE55.is_01() || !grp_fu_1995_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE55) * sc_bigint<16>(grp_fu_1995_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2005_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2005_p1 =  (sc_lv<16>) (sext_ln1118_1076_fu_1533457_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2005_p1 =  (sc_lv<16>) (sext_ln1118_540_fu_1513201_p1.read());
    } else {
        grp_fu_2005_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2005_p2() {
    grp_fu_2005_p2 = (!ap_const_lv24_EB.is_01() || !grp_fu_2005_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_EB) * sc_bigint<16>(grp_fu_2005_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2015_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2015_p1 =  (sc_lv<16>) (sext_ln1118_1087_fu_1533561_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2015_p1 =  (sc_lv<16>) (sext_ln1118_886_fu_1522520_p1.read());
    } else {
        grp_fu_2015_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2015_p2() {
    grp_fu_2015_p2 = (!ap_const_lv22_1A.is_01() || !grp_fu_2015_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_1A) * sc_bigint<16>(grp_fu_2015_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2018_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2018_p1 =  (sc_lv<16>) (sext_ln1118_1146_fu_1534441_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2018_p1 =  (sc_lv<16>) (sext_ln1118_811_fu_1520598_p1.read());
    } else {
        grp_fu_2018_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2018_p2() {
    grp_fu_2018_p2 = (!ap_const_lv24_8B.is_01() || !grp_fu_2018_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8B) * sc_bigint<16>(grp_fu_2018_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2040_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2040_p1 =  (sc_lv<16>) (sext_ln1118_1133_fu_1534285_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2040_p1 =  (sc_lv<16>) (sext_ln1118_885_fu_1522513_p1.read());
    } else {
        grp_fu_2040_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2040_p2() {
    grp_fu_2040_p2 = (!ap_const_lv24_5C.is_01() || !grp_fu_2040_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5C) * sc_bigint<16>(grp_fu_2040_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2046_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2046_p1 =  (sc_lv<16>) (sext_ln1118_1141_fu_1534378_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2046_p1 =  (sc_lv<16>) (sext_ln1118_1007_fu_1526032_p1.read());
    } else {
        grp_fu_2046_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2046_p2() {
    grp_fu_2046_p2 = (!ap_const_lv24_FFFEDC.is_01() || !grp_fu_2046_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEDC) * sc_bigint<16>(grp_fu_2046_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2057_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2057_p1 =  (sc_lv<16>) (sext_ln1118_1136_fu_1534342_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2057_p1 =  (sc_lv<16>) (sext_ln1118_600_fu_1514952_p1.read());
    } else {
        grp_fu_2057_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2057_p2() {
    grp_fu_2057_p2 = (!ap_const_lv24_68.is_01() || !grp_fu_2057_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_68) * sc_bigint<16>(grp_fu_2057_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2058_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2058_p1 =  (sc_lv<16>) (sext_ln1118_1150_fu_1534468_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2058_p1 =  (sc_lv<16>) (sext_ln1118_882_fu_1522484_p1.read());
    } else {
        grp_fu_2058_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2058_p2() {
    grp_fu_2058_p2 = (!ap_const_lv24_FFFF18.is_01() || !grp_fu_2058_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF18) * sc_bigint<16>(grp_fu_2058_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2059_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2059_p1 =  (sc_lv<16>) (sext_ln1118_1155_fu_1534499_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2059_p1 =  (sc_lv<16>) (sext_ln1118_753_fu_1518857_p1.read());
    } else {
        grp_fu_2059_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2059_p2() {
    grp_fu_2059_p2 = (!ap_const_lv24_FFFE6C.is_01() || !grp_fu_2059_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE6C) * sc_bigint<16>(grp_fu_2059_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2063_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2063_p1 =  (sc_lv<16>) (sext_ln1118_1065_reg_1536850.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2063_p1 =  (sc_lv<16>) (sext_ln1118_730_fu_1518546_p1.read());
    } else {
        grp_fu_2063_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2063_p2() {
    grp_fu_2063_p2 = (!ap_const_lv24_FFFF5E.is_01() || !grp_fu_2063_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF5E) * sc_bigint<16>(grp_fu_2063_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2066_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2066_p1 =  (sc_lv<16>) (sext_ln1118_1080_fu_1533514_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2066_p1 =  (sc_lv<16>) (sext_ln1118_946_fu_1524332_p1.read());
    } else {
        grp_fu_2066_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2066_p2() {
    grp_fu_2066_p2 = (!ap_const_lv24_4F.is_01() || !grp_fu_2066_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4F) * sc_bigint<16>(grp_fu_2066_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2073_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2073_p1 =  (sc_lv<16>) (sext_ln1118_1132_fu_1534278_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2073_p1 =  (sc_lv<16>) (sext_ln1118_931_fu_1524103_p1.read());
    } else {
        grp_fu_2073_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2073_p2() {
    grp_fu_2073_p2 = (!ap_const_lv24_FFFE55.is_01() || !grp_fu_2073_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE55) * sc_bigint<16>(grp_fu_2073_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2075_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2075_p1 =  (sc_lv<16>) (sext_ln1118_1069_reg_1536861.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2075_p1 =  (sc_lv<16>) (sext_ln1118_801_fu_1520459_p1.read());
    } else {
        grp_fu_2075_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2075_p2() {
    grp_fu_2075_p2 = (!ap_const_lv24_68.is_01() || !grp_fu_2075_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_68) * sc_bigint<16>(grp_fu_2075_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2082_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2082_p1 =  (sc_lv<16>) (sext_ln1118_1073_fu_1533440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2082_p1 =  (sc_lv<16>) (sext_ln1118_604_fu_1515013_p1.read());
    } else {
        grp_fu_2082_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2082_p2() {
    grp_fu_2082_p2 = (!ap_const_lv23_33.is_01() || !grp_fu_2082_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_33) * sc_bigint<16>(grp_fu_2082_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2102_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2102_p1 =  (sc_lv<16>) (sext_ln1118_1147_fu_1534447_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2102_p1 =  (sc_lv<16>) (sext_ln1118_678_fu_1516936_p1.read());
    } else {
        grp_fu_2102_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2102_p2() {
    grp_fu_2102_p2 = (!ap_const_lv24_4F.is_01() || !grp_fu_2102_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4F) * sc_bigint<16>(grp_fu_2102_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2103_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2103_p1 =  (sc_lv<16>) (sext_ln1118_1080_fu_1533514_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2103_p1 =  (sc_lv<16>) (sext_ln1118_678_fu_1516936_p1.read());
    } else {
        grp_fu_2103_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2103_p2() {
    grp_fu_2103_p2 = (!ap_const_lv24_FFFF3E.is_01() || !grp_fu_2103_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF3E) * sc_bigint<16>(grp_fu_2103_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2104_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2104_p1 =  (sc_lv<16>) (sext_ln1118_1133_fu_1534285_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2104_p1 =  (sc_lv<16>) (sext_ln1118_731_fu_1518563_p1.read());
    } else {
        grp_fu_2104_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2104_p2() {
    grp_fu_2104_p2 = (!ap_const_lv24_85.is_01() || !grp_fu_2104_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_85) * sc_bigint<16>(grp_fu_2104_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2106_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2106_p1 =  (sc_lv<16>) (sext_ln1118_1140_fu_1534373_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2106_p1 =  (sc_lv<16>) (sext_ln1118_1006_fu_1526027_p1.read());
    } else {
        grp_fu_2106_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2106_p2() {
    grp_fu_2106_p2 = (!ap_const_lv23_33.is_01() || !grp_fu_2106_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_33) * sc_bigint<16>(grp_fu_2106_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2108_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2108_p1 =  (sc_lv<16>) (sext_ln1118_1081_fu_1533523_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2108_p1 =  (sc_lv<16>) (sext_ln1118_1014_fu_1526120_p1.read());
    } else {
        grp_fu_2108_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2108_p2() {
    grp_fu_2108_p2 = (!ap_const_lv24_64.is_01() || !grp_fu_2108_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_64) * sc_bigint<16>(grp_fu_2108_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2109_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2109_p1 =  (sc_lv<16>) (sext_ln1118_1081_fu_1533523_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2109_p1 =  (sc_lv<16>) (sext_ln1118_1014_fu_1526120_p1.read());
    } else {
        grp_fu_2109_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2109_p2() {
    grp_fu_2109_p2 = (!ap_const_lv24_FFFF6D.is_01() || !grp_fu_2109_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF6D) * sc_bigint<16>(grp_fu_2109_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2113_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2113_p1 =  (sc_lv<16>) (sext_ln1118_1131_fu_1534272_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2113_p1 =  (sc_lv<16>) (sext_ln1118_673_fu_1516864_p1.read());
    } else {
        grp_fu_2113_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2113_p2() {
    grp_fu_2113_p2 = (!ap_const_lv23_25.is_01() || !grp_fu_2113_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_25) * sc_bigint<16>(grp_fu_2113_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2116_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2116_p1 =  (sc_lv<16>) (sext_ln1118_1066_fu_1533378_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2116_p1 =  (sc_lv<16>) (sext_ln1118_999_fu_1525909_p1.read());
    } else {
        grp_fu_2116_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2116_p2() {
    grp_fu_2116_p2 = (!ap_const_lv24_85.is_01() || !grp_fu_2116_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_85) * sc_bigint<16>(grp_fu_2116_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2119_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2119_p1 =  (sc_lv<16>) (sext_ln1118_1064_fu_1533373_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2119_p1 =  (sc_lv<16>) (sext_ln1118_1008_fu_1526039_p1.read());
    } else {
        grp_fu_2119_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2119_p2() {
    grp_fu_2119_p2 = (!ap_const_lv23_25.is_01() || !grp_fu_2119_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_25) * sc_bigint<16>(grp_fu_2119_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2124_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2124_p1 =  (sc_lv<16>) (sext_ln1118_1148_fu_1534456_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2124_p1 =  (sc_lv<16>) (sext_ln1118_813_fu_1520623_p1.read());
    } else {
        grp_fu_2124_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2124_p2() {
    grp_fu_2124_p2 = (!ap_const_lv24_64.is_01() || !grp_fu_2124_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_64) * sc_bigint<16>(grp_fu_2124_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2133_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2133_p1 =  (sc_lv<16>) (sext_ln1118_1137_fu_1534351_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2133_p1 =  (sc_lv<16>) (sext_ln1118_534_fu_1513152_p1.read());
    } else {
        grp_fu_2133_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2133_p2() {
    grp_fu_2133_p2 = (!ap_const_lv22_3FFFEB.is_01() || !grp_fu_2133_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFEB) * sc_bigint<16>(grp_fu_2133_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2135_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2135_p1 =  (sc_lv<16>) (sext_ln1118_1074_fu_1533445_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2135_p1 =  (sc_lv<16>) (sext_ln1118_538_fu_1513189_p1.read());
    } else {
        grp_fu_2135_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2135_p2() {
    grp_fu_2135_p2 = (!ap_const_lv24_FFFEDC.is_01() || !grp_fu_2135_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEDC) * sc_bigint<16>(grp_fu_2135_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2140_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2140_p1 =  (sc_lv<16>) (sext_ln1118_1147_fu_1534447_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2140_p1 =  (sc_lv<16>) (sext_ln1118_745_fu_1518765_p1.read());
    } else {
        grp_fu_2140_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2140_p2() {
    grp_fu_2140_p2 = (!ap_const_lv24_FFFF3E.is_01() || !grp_fu_2140_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF3E) * sc_bigint<16>(grp_fu_2140_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2151_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2151_p1 =  (sc_lv<16>) (sext_ln1118_1071_fu_1533435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2151_p1 =  (sc_lv<16>) (sext_ln1118_803_fu_1520483_p1.read());
    } else {
        grp_fu_2151_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2151_p2() {
    grp_fu_2151_p2 = (!ap_const_lv24_FFFF5F.is_01() || !grp_fu_2151_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF5F) * sc_bigint<16>(grp_fu_2151_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2157_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2157_p1 =  (sc_lv<16>) (sext_ln1118_1083_fu_1533535_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2157_p1 =  (sc_lv<16>) (sext_ln1118_885_fu_1522513_p1.read());
    } else {
        grp_fu_2157_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2157_p2() {
    grp_fu_2157_p2 = (!ap_const_lv24_8D.is_01() || !grp_fu_2157_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8D) * sc_bigint<16>(grp_fu_2157_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2161_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2161_p1 =  (sc_lv<16>) (sext_ln1118_1085_fu_1533548_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2161_p1 =  (sc_lv<16>) (sext_ln1118_750_fu_1518819_p1.read());
    } else {
        grp_fu_2161_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2161_p2() {
    grp_fu_2161_p2 = (!ap_const_lv24_52.is_01() || !grp_fu_2161_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_52) * sc_bigint<16>(grp_fu_2161_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2166_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2166_p1 =  (sc_lv<16>) (sext_ln1118_1148_fu_1534456_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2166_p1 =  (sc_lv<16>) (sext_ln1118_947_fu_1524351_p1.read());
    } else {
        grp_fu_2166_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2166_p2() {
    grp_fu_2166_p2 = (!ap_const_lv24_FFFF1D.is_01() || !grp_fu_2166_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF1D) * sc_bigint<16>(grp_fu_2166_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2167_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2167_p1 =  (sc_lv<16>) (sext_ln1118_1086_fu_1533554_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2167_p1 =  (sc_lv<16>) (sext_ln1118_614_fu_1515138_p1.read());
    } else {
        grp_fu_2167_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2167_p2() {
    grp_fu_2167_p2 = (!ap_const_lv24_8D.is_01() || !grp_fu_2167_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8D) * sc_bigint<16>(grp_fu_2167_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2168_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2168_p1 =  (sc_lv<16>) (sext_ln1118_1152_fu_1534481_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2168_p1 =  (sc_lv<16>) (sext_ln1118_616_fu_1515161_p1.read());
    } else {
        grp_fu_2168_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2168_p2() {
    grp_fu_2168_p2 = (!ap_const_lv24_52.is_01() || !grp_fu_2168_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_52) * sc_bigint<16>(grp_fu_2168_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2169_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2169_p1 =  (sc_lv<16>) (sext_ln1118_1066_fu_1533378_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2169_p1 =  (sc_lv<16>) (sext_ln1118_617_fu_1515167_p1.read());
    } else {
        grp_fu_2169_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2169_p2() {
    grp_fu_2169_p2 = (!ap_const_lv24_5C.is_01() || !grp_fu_2169_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5C) * sc_bigint<16>(grp_fu_2169_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2171_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2171_p1 =  (sc_lv<16>) (sext_ln1118_1151_fu_1534476_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2171_p1 =  (sc_lv<16>) (sext_ln708_409_fu_1524437_p1.read());
    } else {
        grp_fu_2171_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2171_p2() {
    grp_fu_2171_p2 = (!ap_const_lv21_1FFFF3.is_01() || !grp_fu_2171_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(grp_fu_2171_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2177_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2177_p1 =  (sc_lv<16>) (sext_ln1118_1138_fu_1534356_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2177_p1 =  (sc_lv<16>) (sext_ln1118_602_fu_1514976_p1.read());
    } else {
        grp_fu_2177_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2177_p2() {
    grp_fu_2177_p2 = (!ap_const_lv24_47.is_01() || !grp_fu_2177_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_47) * sc_bigint<16>(grp_fu_2177_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2184_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2184_p1 =  (sc_lv<16>) (sext_ln1118_1153_fu_1534487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2184_p1 =  (sc_lv<16>) (sext_ln1118_952_fu_1524402_p1.read());
    } else {
        grp_fu_2184_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2184_p2() {
    grp_fu_2184_p2 = (!ap_const_lv24_7B.is_01() || !grp_fu_2184_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7B) * sc_bigint<16>(grp_fu_2184_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2187_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2187_p1 =  (sc_lv<16>) (sext_ln1118_1081_fu_1533523_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2187_p1 =  (sc_lv<16>) (sext_ln1118_880_fu_1522462_p1.read());
    } else {
        grp_fu_2187_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2187_p2() {
    grp_fu_2187_p2 = (!ap_const_lv24_FFFF1D.is_01() || !grp_fu_2187_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF1D) * sc_bigint<16>(grp_fu_2187_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2201_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2201_p1 =  (sc_lv<16>) (sext_ln1118_1093_reg_1536881.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2201_p1 =  (sc_lv<16>) (sext_ln1118_557_fu_1513465_p1.read());
    } else {
        grp_fu_2201_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2201_p2() {
    grp_fu_2201_p2 = (!ap_const_lv24_FFFF94.is_01() || !grp_fu_2201_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF94) * sc_bigint<16>(grp_fu_2201_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2204_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2204_p1 =  (sc_lv<16>) (sext_ln1118_1138_fu_1534356_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2204_p1 =  (sc_lv<16>) (sext_ln1118_669_fu_1516805_p1.read());
    } else {
        grp_fu_2204_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2204_p2() {
    grp_fu_2204_p2 = (!ap_const_lv24_FFFF5F.is_01() || !grp_fu_2204_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF5F) * sc_bigint<16>(grp_fu_2204_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2214_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2214_p1 =  (sc_lv<16>) (sext_ln1118_1088_fu_1533566_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2214_p1 =  (sc_lv<16>) (sext_ln1118_552_fu_1513370_p1.read());
    } else {
        grp_fu_2214_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2214_p2() {
    grp_fu_2214_p2 = (!ap_const_lv24_FFFE6C.is_01() || !grp_fu_2214_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE6C) * sc_bigint<16>(grp_fu_2214_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2218_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2218_p1 =  (sc_lv<16>) (sext_ln1118_1069_reg_1536861.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2218_p1 =  (sc_lv<16>) (sext_ln1118_533_fu_1513133_p1.read());
    } else {
        grp_fu_2218_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2218_p2() {
    grp_fu_2218_p2 = (!ap_const_lv24_FFFF12.is_01() || !grp_fu_2218_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF12) * sc_bigint<16>(grp_fu_2218_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2219_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2219_p1 =  (sc_lv<16>) (sext_ln1118_1133_fu_1534285_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2219_p1 =  (sc_lv<16>) (sext_ln1118_530_fu_1513076_p1.read());
    } else {
        grp_fu_2219_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2219_p2() {
    grp_fu_2219_p2 = (!ap_const_lv24_FFFFA5.is_01() || !grp_fu_2219_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA5) * sc_bigint<16>(grp_fu_2219_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2220_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2220_p1 =  (sc_lv<16>) (sext_ln1118_1076_fu_1533457_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2220_p1 =  (sc_lv<16>) (sext_ln1118_540_fu_1513201_p1.read());
    } else {
        grp_fu_2220_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2220_p2() {
    grp_fu_2220_p2 = (!ap_const_lv24_72.is_01() || !grp_fu_2220_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_72) * sc_bigint<16>(grp_fu_2220_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2229_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2229_p1 =  (sc_lv<16>) (sext_ln1118_1136_fu_1534342_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2229_p1 =  (sc_lv<16>) (sext_ln1118_667_fu_1516791_p1.read());
    } else {
        grp_fu_2229_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2229_p2() {
    grp_fu_2229_p2 = (!ap_const_lv24_FFFE31.is_01() || !grp_fu_2229_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE31) * sc_bigint<16>(grp_fu_2229_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2233_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2233_p1 =  (sc_lv<16>) (sext_ln1118_1147_fu_1534447_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2233_p1 =  (sc_lv<16>) (sext_ln1118_946_fu_1524332_p1.read());
    } else {
        grp_fu_2233_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2233_p2() {
    grp_fu_2233_p2 = (!ap_const_lv24_5B.is_01() || !grp_fu_2233_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5B) * sc_bigint<16>(grp_fu_2233_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2241_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2241_p1 =  (sc_lv<16>) (sext_ln1118_1075_fu_1533452_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2241_p1 =  (sc_lv<16>) (sext_ln1118_930_fu_1524097_p1.read());
    } else {
        grp_fu_2241_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2241_p2() {
    grp_fu_2241_p2 = (!ap_const_lv23_25.is_01() || !grp_fu_2241_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_25) * sc_bigint<16>(grp_fu_2241_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2248_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2248_p1 =  (sc_lv<16>) (sext_ln1118_1155_fu_1534499_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2248_p1 =  (sc_lv<16>) (sext_ln1118_954_fu_1524424_p1.read());
    } else {
        grp_fu_2248_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2248_p2() {
    grp_fu_2248_p2 = (!ap_const_lv24_FFFFA9.is_01() || !grp_fu_2248_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA9) * sc_bigint<16>(grp_fu_2248_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2252_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2252_p1 =  (sc_lv<16>) (sext_ln1118_1148_fu_1534456_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2252_p1 =  (sc_lv<16>) (sext_ln1118_947_fu_1524351_p1.read());
    } else {
        grp_fu_2252_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2252_p2() {
    grp_fu_2252_p2 = (!ap_const_lv24_FFFEBA.is_01() || !grp_fu_2252_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEBA) * sc_bigint<16>(grp_fu_2252_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2273_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2273_p1 =  (sc_lv<16>) (sext_ln1118_1141_fu_1534378_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2273_p1 =  (sc_lv<16>) (sext_ln1118_605_fu_1515018_p1.read());
    } else {
        grp_fu_2273_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2273_p2() {
    grp_fu_2273_p2 = (!ap_const_lv24_53.is_01() || !grp_fu_2273_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_53) * sc_bigint<16>(grp_fu_2273_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2278_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2278_p1 =  (sc_lv<16>) (sext_ln1118_1088_fu_1533566_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2278_p1 =  (sc_lv<16>) (sext_ln1118_1021_fu_1526193_p1.read());
    } else {
        grp_fu_2278_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2278_p2() {
    grp_fu_2278_p2 = (!ap_const_lv24_FFFFA9.is_01() || !grp_fu_2278_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA9) * sc_bigint<16>(grp_fu_2278_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2279_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2279_p1 =  (sc_lv<16>) (sext_ln1118_1066_fu_1533378_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2279_p1 =  (sc_lv<16>) (sext_ln1118_597_fu_1514895_p1.read());
    } else {
        grp_fu_2279_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2279_p2() {
    grp_fu_2279_p2 = (!ap_const_lv24_FFFFA5.is_01() || !grp_fu_2279_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA5) * sc_bigint<16>(grp_fu_2279_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2290_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2290_p1 =  (sc_lv<16>) (sext_ln1118_1136_fu_1534342_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2290_p1 =  (sc_lv<16>) (sext_ln1118_801_fu_1520459_p1.read());
    } else {
        grp_fu_2290_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2290_p2() {
    grp_fu_2290_p2 = (!ap_const_lv24_FFFF12.is_01() || !grp_fu_2290_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF12) * sc_bigint<16>(grp_fu_2290_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2292_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2292_p1 =  (sc_lv<16>) (sext_ln1118_1143_fu_1534390_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2292_p1 =  (sc_lv<16>) (sext_ln1118_808_fu_1520547_p1.read());
    } else {
        grp_fu_2292_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2292_p2() {
    grp_fu_2292_p2 = (!ap_const_lv24_72.is_01() || !grp_fu_2292_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_72) * sc_bigint<16>(grp_fu_2292_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2303_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2303_p1 =  (sc_lv<16>) (sext_ln1118_1160_reg_1536896.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2303_p1 =  (sc_lv<16>) (sext_ln1118_1026_fu_1526278_p1.read());
    } else {
        grp_fu_2303_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2303_p2() {
    grp_fu_2303_p2 = (!ap_const_lv24_FFFF94.is_01() || !grp_fu_2303_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF94) * sc_bigint<16>(grp_fu_2303_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2310_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2310_p1 =  (sc_lv<16>) (sext_ln1118_1143_fu_1534390_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2310_p1 =  (sc_lv<16>) (sext_ln1118_1009_fu_1526044_p1.read());
    } else {
        grp_fu_2310_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2310_p2() {
    grp_fu_2310_p2 = (!ap_const_lv24_EB.is_01() || !grp_fu_2310_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_EB) * sc_bigint<16>(grp_fu_2310_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2311_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2311_p1 =  (sc_lv<16>) (sext_ln1118_1080_fu_1533514_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2311_p1 =  (sc_lv<16>) (sext_ln1118_745_fu_1518765_p1.read());
    } else {
        grp_fu_2311_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2311_p2() {
    grp_fu_2311_p2 = (!ap_const_lv24_5B.is_01() || !grp_fu_2311_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5B) * sc_bigint<16>(grp_fu_2311_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2318_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2318_p1 =  (sc_lv<16>) (sext_ln1118_1152_fu_1534481_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2318_p1 =  (sc_lv<16>) (sext_ln1118_683_fu_1517000_p1.read());
    } else {
        grp_fu_2318_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2318_p2() {
    grp_fu_2318_p2 = (!ap_const_lv24_FFFEE5.is_01() || !grp_fu_2318_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEE5) * sc_bigint<16>(grp_fu_2318_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2327_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2327_p1 =  (sc_lv<16>) (sext_ln1118_1074_fu_1533445_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2327_p1 =  (sc_lv<16>) (sext_ln1118_672_fu_1516847_p1.read());
    } else {
        grp_fu_2327_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2327_p2() {
    grp_fu_2327_p2 = (!ap_const_lv24_53.is_01() || !grp_fu_2327_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_53) * sc_bigint<16>(grp_fu_2327_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2339_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2339_p1 =  (sc_lv<16>) (sext_ln1118_1132_fu_1534278_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2339_p1 =  (sc_lv<16>) (sext_ln1118_864_fu_1522224_p1.read());
    } else {
        grp_fu_2339_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2339_p2() {
    grp_fu_2339_p2 = (!ap_const_lv24_73.is_01() || !grp_fu_2339_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_73) * sc_bigint<16>(grp_fu_2339_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2344_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2344_p1 =  (sc_lv<16>) (sext_ln1118_1136_fu_1534342_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2344_p1 =  (sc_lv<16>) (sext_ln1118_533_fu_1513133_p1.read());
    } else {
        grp_fu_2344_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2344_p2() {
    grp_fu_2344_p2 = (!ap_const_lv24_59.is_01() || !grp_fu_2344_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_59) * sc_bigint<16>(grp_fu_2344_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2348_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2348_p1 =  (sc_lv<16>) (sext_ln1118_1139_fu_1534366_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2348_p1 =  (sc_lv<16>) (sext_ln1118_737_fu_1518664_p1.read());
    } else {
        grp_fu_2348_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2348_p2() {
    grp_fu_2348_p2 = (!ap_const_lv24_FFFDB7.is_01() || !grp_fu_2348_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFDB7) * sc_bigint<16>(grp_fu_2348_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2353_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2353_p1 =  (sc_lv<16>) (sext_ln1118_1076_fu_1533457_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2353_p1 =  (sc_lv<16>) (sext_ln1118_674_fu_1516869_p1.read());
    } else {
        grp_fu_2353_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2353_p2() {
    grp_fu_2353_p2 = (!ap_const_lv24_FFFF98.is_01() || !grp_fu_2353_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF98) * sc_bigint<16>(grp_fu_2353_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2357_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2357_p1 =  (sc_lv<16>) (sext_ln1118_1150_fu_1534468_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2357_p1 =  (sc_lv<16>) (sext_ln1118_949_fu_1524373_p1.read());
    } else {
        grp_fu_2357_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2357_p2() {
    grp_fu_2357_p2 = (!ap_const_lv24_FFFFAF.is_01() || !grp_fu_2357_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFAF) * sc_bigint<16>(grp_fu_2357_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2358_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2358_p1 =  (sc_lv<16>) (sext_ln1118_1088_fu_1533566_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2358_p1 =  (sc_lv<16>) (sext_ln1118_954_fu_1524424_p1.read());
    } else {
        grp_fu_2358_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2358_p2() {
    grp_fu_2358_p2 = (!ap_const_lv24_8E.is_01() || !grp_fu_2358_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8E) * sc_bigint<16>(grp_fu_2358_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2370_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2370_p1 =  (sc_lv<16>) (sext_ln1118_1148_fu_1534456_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2370_p1 =  (sc_lv<16>) (sext_ln1118_947_fu_1524351_p1.read());
    } else {
        grp_fu_2370_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2370_p2() {
    grp_fu_2370_p2 = (!ap_const_lv24_FFFF6D.is_01() || !grp_fu_2370_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF6D) * sc_bigint<16>(grp_fu_2370_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2372_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2372_p1 =  (sc_lv<16>) (sext_ln1118_1155_fu_1534499_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2372_p1 =  (sc_lv<16>) (sext_ln1118_686_fu_1517028_p1.read());
    } else {
        grp_fu_2372_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2372_p2() {
    grp_fu_2372_p2 = (!ap_const_lv24_8E.is_01() || !grp_fu_2372_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8E) * sc_bigint<16>(grp_fu_2372_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2373_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2373_p1 =  (sc_lv<16>) (sext_ln1118_1147_fu_1534447_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2373_p1 =  (sc_lv<16>) (sext_ln1118_1013_fu_1526111_p1.read());
    } else {
        grp_fu_2373_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2373_p2() {
    grp_fu_2373_p2 = (!ap_const_lv24_BD.is_01() || !grp_fu_2373_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_BD) * sc_bigint<16>(grp_fu_2373_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2375_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2375_p1 =  (sc_lv<16>) (sext_ln1118_1080_fu_1533514_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2375_p1 =  (sc_lv<16>) (sext_ln1118_745_fu_1518765_p1.read());
    } else {
        grp_fu_2375_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2375_p2() {
    grp_fu_2375_p2 = (!ap_const_lv24_BD.is_01() || !grp_fu_2375_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_BD) * sc_bigint<16>(grp_fu_2375_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2386_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2386_p1 =  (sc_lv<16>) (sext_ln1118_1142_fu_1534385_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2386_p1 =  (sc_lv<16>) (sext_ln1118_796_fu_1520379_p1.read());
    } else {
        grp_fu_2386_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2386_p2() {
    grp_fu_2386_p2 = (!ap_const_lv23_25.is_01() || !grp_fu_2386_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_25) * sc_bigint<16>(grp_fu_2386_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2388_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2388_p1 =  (sc_lv<16>) (sext_ln1118_1150_fu_1534468_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2388_p1 =  (sc_lv<16>) (sext_ln1118_748_fu_1518796_p1.read());
    } else {
        grp_fu_2388_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2388_p2() {
    grp_fu_2388_p2 = (!ap_const_lv24_FFFEF9.is_01() || !grp_fu_2388_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEF9) * sc_bigint<16>(grp_fu_2388_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2394_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2394_p1 =  (sc_lv<16>) (sext_ln1118_1083_fu_1533535_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2394_p1 =  (sc_lv<16>) (sext_ln1118_949_fu_1524373_p1.read());
    } else {
        grp_fu_2394_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2394_p2() {
    grp_fu_2394_p2 = (!ap_const_lv24_FFFEF9.is_01() || !grp_fu_2394_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEF9) * sc_bigint<16>(grp_fu_2394_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2400_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2400_p1 =  (sc_lv<16>) (sext_ln1118_1081_fu_1533523_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2400_p1 =  (sc_lv<16>) (sext_ln1118_880_fu_1522462_p1.read());
    } else {
        grp_fu_2400_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2400_p2() {
    grp_fu_2400_p2 = (!ap_const_lv24_FFFEBA.is_01() || !grp_fu_2400_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEBA) * sc_bigint<16>(grp_fu_2400_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2419_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2419_p1 =  (sc_lv<16>) (sext_ln1118_1150_fu_1534468_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2419_p1 =  (sc_lv<16>) (sext_ln1118_547_fu_1513309_p1.read());
    } else {
        grp_fu_2419_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2419_p2() {
    grp_fu_2419_p2 = (!ap_const_lv24_8D.is_01() || !grp_fu_2419_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8D) * sc_bigint<16>(grp_fu_2419_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2421_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2421_p1 =  (sc_lv<16>) (sext_ln1118_1069_reg_1536861.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2421_p1 =  (sc_lv<16>) (sext_ln1118_1002_fu_1525966_p1.read());
    } else {
        grp_fu_2421_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2421_p2() {
    grp_fu_2421_p2 = (!ap_const_lv24_59.is_01() || !grp_fu_2421_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_59) * sc_bigint<16>(grp_fu_2421_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2423_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2423_p1 =  (sc_lv<16>) (sext_ln708_469_fu_1533579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2423_p1 =  (sc_lv<16>) (sext_ln708_379_fu_1522548_p1.read());
    } else {
        grp_fu_2423_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2423_p2() {
    grp_fu_2423_p2 = (!ap_const_lv21_1FFFF3.is_01() || !grp_fu_2423_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(grp_fu_2423_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2424_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2424_p1 =  (sc_lv<16>) (sext_ln1118_1069_reg_1536861.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2424_p1 =  (sc_lv<16>) (sext_ln1118_667_fu_1516791_p1.read());
    } else {
        grp_fu_2424_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2424_p2() {
    grp_fu_2424_p2 = (!ap_const_lv24_5D.is_01() || !grp_fu_2424_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5D) * sc_bigint<16>(grp_fu_2424_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2427_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2427_p1 =  (sc_lv<16>) (sext_ln1118_1143_fu_1534390_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2427_p1 =  (sc_lv<16>) (sext_ln1118_808_fu_1520547_p1.read());
    } else {
        grp_fu_2427_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2427_p2() {
    grp_fu_2427_p2 = (!ap_const_lv24_FFFF98.is_01() || !grp_fu_2427_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF98) * sc_bigint<16>(grp_fu_2427_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2429_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2429_p1 =  (sc_lv<16>) (sext_ln1118_1147_fu_1534447_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2429_p1 =  (sc_lv<16>) (sext_ln1118_544_fu_1513268_p1.read());
    } else {
        grp_fu_2429_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2429_p2() {
    grp_fu_2429_p2 = (!ap_const_lv24_75.is_01() || !grp_fu_2429_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_75) * sc_bigint<16>(grp_fu_2429_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2432_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2432_p1 =  (sc_lv<16>) (sext_ln1118_1141_fu_1534378_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2432_p1 =  (sc_lv<16>) (sext_ln1118_873_fu_1522354_p1.read());
    } else {
        grp_fu_2432_p1 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2432_p2() {
    grp_fu_2432_p2 = (!ap_const_lv24_FFFF7D.is_01() || !grp_fu_2432_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF7D) * sc_bigint<16>(grp_fu_2432_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1000_fu_2092_p1() {
    mul_ln1118_1000_fu_2092_p1 =  (sc_lv<16>) (sext_ln1118_813_fu_1520623_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1000_fu_2092_p2() {
    mul_ln1118_1000_fu_2092_p2 = (!ap_const_lv24_FFFF1D.is_01() || !mul_ln1118_1000_fu_2092_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF1D) * sc_bigint<16>(mul_ln1118_1000_fu_2092_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1002_fu_2347_p1() {
    mul_ln1118_1002_fu_2347_p1 =  (sc_lv<16>) (sext_ln1118_817_fu_1520658_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1002_fu_2347_p2() {
    mul_ln1118_1002_fu_2347_p2 = (!ap_const_lv24_52.is_01() || !mul_ln1118_1002_fu_2347_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_52) * sc_bigint<16>(mul_ln1118_1002_fu_2347_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1004_fu_1933_p1() {
    mul_ln1118_1004_fu_1933_p1 =  (sc_lv<16>) (sext_ln1118_820_fu_1520696_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1004_fu_1933_p2() {
    mul_ln1118_1004_fu_1933_p2 = (!ap_const_lv24_FFFE6C.is_01() || !mul_ln1118_1004_fu_1933_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE6C) * sc_bigint<16>(mul_ln1118_1004_fu_1933_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1005_fu_2097_p1() {
    mul_ln1118_1005_fu_2097_p1 = sext_ln708_349_fu_1520719_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1005_fu_2097_p2() {
    mul_ln1118_1005_fu_2097_p2 = (!ap_const_lv21_1FFFF3.is_01() || !mul_ln1118_1005_fu_2097_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(mul_ln1118_1005_fu_2097_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1006_fu_2202_p1() {
    mul_ln1118_1006_fu_2202_p1 =  (sc_lv<16>) (sext_ln1118_828_fu_1520833_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1006_fu_2202_p2() {
    mul_ln1118_1006_fu_2202_p2 = (!ap_const_lv24_FFFFB7.is_01() || !mul_ln1118_1006_fu_2202_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB7) * sc_bigint<16>(mul_ln1118_1006_fu_2202_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1007_fu_2293_p1() {
    mul_ln1118_1007_fu_2293_p1 =  (sc_lv<16>) (sext_ln1118_829_fu_1520851_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1007_fu_2293_p2() {
    mul_ln1118_1007_fu_2293_p2 = (!ap_const_lv24_FFFEBA.is_01() || !mul_ln1118_1007_fu_2293_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEBA) * sc_bigint<16>(mul_ln1118_1007_fu_2293_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1008_fu_1996_p1() {
    mul_ln1118_1008_fu_1996_p1 =  (sc_lv<16>) (sext_ln1118_797_fu_1520385_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1008_fu_1996_p2() {
    mul_ln1118_1008_fu_1996_p2 = (!ap_const_lv24_FFFF5E.is_01() || !mul_ln1118_1008_fu_1996_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF5E) * sc_bigint<16>(mul_ln1118_1008_fu_1996_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1009_fu_1997_p1() {
    mul_ln1118_1009_fu_1997_p1 =  (sc_lv<16>) (sext_ln1118_798_fu_1520402_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1009_fu_1997_p2() {
    mul_ln1118_1009_fu_1997_p2 = (!ap_const_lv24_FFFFA5.is_01() || !mul_ln1118_1009_fu_1997_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA5) * sc_bigint<16>(mul_ln1118_1009_fu_1997_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1010_fu_1998_p1() {
    mul_ln1118_1010_fu_1998_p1 =  (sc_lv<16>) (sext_ln1118_801_fu_1520459_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1010_fu_1998_p2() {
    mul_ln1118_1010_fu_1998_p2 = (!ap_const_lv24_59.is_01() || !mul_ln1118_1010_fu_1998_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_59) * sc_bigint<16>(mul_ln1118_1010_fu_1998_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1012_fu_2016_p1() {
    mul_ln1118_1012_fu_2016_p1 = sext_ln1118_805_fu_1520520_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1012_fu_2016_p2() {
    mul_ln1118_1012_fu_2016_p2 = (!ap_const_lv23_33.is_01() || !mul_ln1118_1012_fu_2016_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_33) * sc_bigint<16>(mul_ln1118_1012_fu_2016_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1013_fu_2077_p1() {
    mul_ln1118_1013_fu_2077_p1 = sext_ln1118_807_fu_1520542_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1013_fu_2077_p2() {
    mul_ln1118_1013_fu_2077_p2 = (!ap_const_lv23_25.is_01() || !mul_ln1118_1013_fu_2077_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_25) * sc_bigint<16>(mul_ln1118_1013_fu_2077_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1014_fu_2078_p1() {
    mul_ln1118_1014_fu_2078_p1 =  (sc_lv<16>) (sext_ln1118_812_fu_1520604_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1014_fu_2078_p2() {
    mul_ln1118_1014_fu_2078_p2 = (!ap_const_lv24_4F.is_01() || !mul_ln1118_1014_fu_2078_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4F) * sc_bigint<16>(mul_ln1118_1014_fu_2078_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1015_fu_2091_p1() {
    mul_ln1118_1015_fu_2091_p1 =  (sc_lv<16>) (sext_ln1118_813_fu_1520623_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1015_fu_2091_p2() {
    mul_ln1118_1015_fu_2091_p2 = (!ap_const_lv24_FFFF6D.is_01() || !mul_ln1118_1015_fu_2091_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF6D) * sc_bigint<16>(mul_ln1118_1015_fu_2091_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1017_fu_2069_p1() {
    mul_ln1118_1017_fu_2069_p1 = sext_ln1118_819_fu_1520691_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1017_fu_2069_p2() {
    mul_ln1118_1017_fu_2069_p2 = (!ap_const_lv22_1A.is_01() || !mul_ln1118_1017_fu_2069_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_1A) * sc_bigint<16>(mul_ln1118_1017_fu_2069_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1018_fu_2022_p1() {
    mul_ln1118_1018_fu_2022_p1 =  (sc_lv<16>) (sext_ln1118_825_fu_1520791_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1018_fu_2022_p2() {
    mul_ln1118_1018_fu_2022_p2 = (!ap_const_lv24_FFFF96.is_01() || !mul_ln1118_1018_fu_2022_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF96) * sc_bigint<16>(mul_ln1118_1018_fu_2022_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1019_fu_2185_p1() {
    mul_ln1118_1019_fu_2185_p1 =  (sc_lv<16>) (sext_ln1118_828_fu_1520833_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1019_fu_2185_p2() {
    mul_ln1118_1019_fu_2185_p2 = (!ap_const_lv24_FFFEEC.is_01() || !mul_ln1118_1019_fu_2185_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEEC) * sc_bigint<16>(mul_ln1118_1019_fu_2185_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1020_fu_2084_p1() {
    mul_ln1118_1020_fu_2084_p1 =  (sc_lv<16>) (sext_ln1118_829_fu_1520851_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1020_fu_2084_p2() {
    mul_ln1118_1020_fu_2084_p2 = (!ap_const_lv24_58.is_01() || !mul_ln1118_1020_fu_2084_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_58) * sc_bigint<16>(mul_ln1118_1020_fu_2084_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1021_fu_2001_p1() {
    mul_ln1118_1021_fu_2001_p1 =  (sc_lv<16>) (sext_ln1118_797_fu_1520385_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1021_fu_2001_p2() {
    mul_ln1118_1021_fu_2001_p2 = (!ap_const_lv24_FFFE55.is_01() || !mul_ln1118_1021_fu_2001_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE55) * sc_bigint<16>(mul_ln1118_1021_fu_2001_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1022_fu_1978_p1() {
    mul_ln1118_1022_fu_1978_p1 =  (sc_lv<16>) (sext_ln1118_798_fu_1520402_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1022_fu_1978_p2() {
    mul_ln1118_1022_fu_1978_p2 = (!ap_const_lv24_85.is_01() || !mul_ln1118_1022_fu_1978_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_85) * sc_bigint<16>(mul_ln1118_1022_fu_1978_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1025_fu_2175_p1() {
    mul_ln1118_1025_fu_2175_p1 =  (sc_lv<16>) (sext_ln1118_804_fu_1520503_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1025_fu_2175_p2() {
    mul_ln1118_1025_fu_2175_p2 = (!ap_const_lv24_C7.is_01() || !mul_ln1118_1025_fu_2175_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_C7) * sc_bigint<16>(mul_ln1118_1025_fu_2175_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1026_fu_2072_p1() {
    mul_ln1118_1026_fu_2072_p1 = sext_ln1118_808_fu_1520547_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1026_fu_2072_p2() {
    mul_ln1118_1026_fu_2072_p2 = (!ap_const_lv24_EB.is_01() || !mul_ln1118_1026_fu_2072_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_EB) * sc_bigint<16>(mul_ln1118_1026_fu_2072_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1027_fu_1969_p1() {
    mul_ln1118_1027_fu_1969_p1 =  (sc_lv<16>) (sext_ln1118_812_fu_1520604_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1027_fu_1969_p2() {
    mul_ln1118_1027_fu_1969_p2 = (!ap_const_lv24_FFFF3E.is_01() || !mul_ln1118_1027_fu_1969_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF3E) * sc_bigint<16>(mul_ln1118_1027_fu_1969_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1028_fu_1970_p1() {
    mul_ln1118_1028_fu_1970_p1 =  (sc_lv<16>) (sext_ln1118_813_fu_1520623_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1028_fu_1970_p2() {
    mul_ln1118_1028_fu_1970_p2 = (!ap_const_lv24_FFFEBA.is_01() || !mul_ln1118_1028_fu_1970_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEBA) * sc_bigint<16>(mul_ln1118_1028_fu_1970_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1029_fu_1867_p1() {
    mul_ln1118_1029_fu_1867_p1 =  (sc_lv<16>) (sext_ln1118_815_fu_1520635_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1029_fu_1867_p2() {
    mul_ln1118_1029_fu_1867_p2 = (!ap_const_lv24_FFFFAF.is_01() || !mul_ln1118_1029_fu_1867_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFAF) * sc_bigint<16>(mul_ln1118_1029_fu_1867_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1030_fu_2076_p1() {
    mul_ln1118_1030_fu_2076_p1 =  (sc_lv<16>) (sext_ln1118_820_fu_1520696_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1030_fu_2076_p2() {
    mul_ln1118_1030_fu_2076_p2 = (!ap_const_lv24_8E.is_01() || !mul_ln1118_1030_fu_2076_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8E) * sc_bigint<16>(mul_ln1118_1030_fu_2076_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1031_fu_1973_p1() {
    mul_ln1118_1031_fu_1973_p1 =  (sc_lv<16>) (sext_ln1118_825_fu_1520791_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1031_fu_1973_p2() {
    mul_ln1118_1031_fu_1973_p2 = (!ap_const_lv24_FFFE18.is_01() || !mul_ln1118_1031_fu_1973_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE18) * sc_bigint<16>(mul_ln1118_1031_fu_1973_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1032_fu_1974_p1() {
    mul_ln1118_1032_fu_1974_p1 =  (sc_lv<16>) (sext_ln1118_826_fu_1520808_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1032_fu_1974_p2() {
    mul_ln1118_1032_fu_1974_p2 = (!ap_const_lv24_43.is_01() || !mul_ln1118_1032_fu_1974_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_43) * sc_bigint<16>(mul_ln1118_1032_fu_1974_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1033_fu_2079_p1() {
    mul_ln1118_1033_fu_2079_p1 =  (sc_lv<16>) (sext_ln1118_828_fu_1520833_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1033_fu_2079_p2() {
    mul_ln1118_1033_fu_2079_p2 = (!ap_const_lv24_FFFF11.is_01() || !mul_ln1118_1033_fu_2079_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF11) * sc_bigint<16>(mul_ln1118_1033_fu_2079_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1034_fu_1872_p1() {
    mul_ln1118_1034_fu_1872_p1 =  (sc_lv<16>) (sext_ln1118_829_fu_1520851_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1034_fu_1872_p2() {
    mul_ln1118_1034_fu_1872_p2 = (!ap_const_lv24_FFFF64.is_01() || !mul_ln1118_1034_fu_1872_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF64) * sc_bigint<16>(mul_ln1118_1034_fu_1872_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1036_fu_2182_p1() {
    mul_ln1118_1036_fu_2182_p1 =  (sc_lv<16>) (sext_ln1118_798_fu_1520402_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1036_fu_2182_p2() {
    mul_ln1118_1036_fu_2182_p2 = (!ap_const_lv24_5C.is_01() || !mul_ln1118_1036_fu_2182_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5C) * sc_bigint<16>(mul_ln1118_1036_fu_2182_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1037_fu_1871_p1() {
    mul_ln1118_1037_fu_1871_p1 =  (sc_lv<16>) (sext_ln1118_801_fu_1520459_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1037_fu_1871_p2() {
    mul_ln1118_1037_fu_1871_p2 = (!ap_const_lv24_5D.is_01() || !mul_ln1118_1037_fu_1871_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5D) * sc_bigint<16>(mul_ln1118_1037_fu_1871_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1038_fu_1860_p1() {
    mul_ln1118_1038_fu_1860_p1 =  (sc_lv<16>) (sext_ln1118_804_fu_1520503_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1038_fu_1860_p2() {
    mul_ln1118_1038_fu_1860_p2 = (!ap_const_lv24_7A.is_01() || !mul_ln1118_1038_fu_1860_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7A) * sc_bigint<16>(mul_ln1118_1038_fu_1860_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1039_fu_2426_p1() {
    mul_ln1118_1039_fu_2426_p1 =  (sc_lv<16>) (sext_ln1118_806_fu_1520525_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1039_fu_2426_p2() {
    mul_ln1118_1039_fu_2426_p2 = (!ap_const_lv24_FFFF7D.is_01() || !mul_ln1118_1039_fu_2426_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF7D) * sc_bigint<16>(mul_ln1118_1039_fu_2426_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1041_fu_2440_p1() {
    mul_ln1118_1041_fu_2440_p1 = sext_ln1118_811_fu_1520598_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1041_fu_2440_p2() {
    mul_ln1118_1041_fu_2440_p2 = (!ap_const_lv24_FFFF93.is_01() || !mul_ln1118_1041_fu_2440_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF93) * sc_bigint<16>(mul_ln1118_1041_fu_2440_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1042_fu_1864_p1() {
    mul_ln1118_1042_fu_1864_p1 =  (sc_lv<16>) (sext_ln1118_812_fu_1520604_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1042_fu_1864_p2() {
    mul_ln1118_1042_fu_1864_p2 = (!ap_const_lv24_75.is_01() || !mul_ln1118_1042_fu_1864_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_75) * sc_bigint<16>(mul_ln1118_1042_fu_1864_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1043_fu_2158_p1() {
    mul_ln1118_1043_fu_2158_p1 =  (sc_lv<16>) (sext_ln1118_815_fu_1520635_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1043_fu_2158_p2() {
    mul_ln1118_1043_fu_2158_p2 = (!ap_const_lv24_FFFEF9.is_01() || !mul_ln1118_1043_fu_2158_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEF9) * sc_bigint<16>(mul_ln1118_1043_fu_2158_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1044_fu_2371_p1() {
    mul_ln1118_1044_fu_2371_p1 =  (sc_lv<16>) (sext_ln1118_818_fu_1520674_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1044_fu_2371_p2() {
    mul_ln1118_1044_fu_2371_p2 = (!ap_const_lv24_7B.is_01() || !mul_ln1118_1044_fu_2371_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7B) * sc_bigint<16>(mul_ln1118_1044_fu_2371_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1045_fu_2408_p1() {
    mul_ln1118_1045_fu_2408_p1 =  (sc_lv<16>) (sext_ln1118_820_fu_1520696_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1045_fu_2408_p2() {
    mul_ln1118_1045_fu_2408_p2 = (!ap_const_lv24_FFFF85.is_01() || !mul_ln1118_1045_fu_2408_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF85) * sc_bigint<16>(mul_ln1118_1045_fu_2408_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1046_fu_1880_p1() {
    mul_ln1118_1046_fu_1880_p1 =  (sc_lv<16>) (sext_ln708_348_fu_1520714_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1046_fu_1880_p2() {
    mul_ln1118_1046_fu_1880_p2 = (!ap_const_lv24_65.is_01() || !mul_ln1118_1046_fu_1880_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_65) * sc_bigint<16>(mul_ln1118_1046_fu_1880_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1047_fu_1893_p1() {
    mul_ln1118_1047_fu_1893_p1 = sext_ln1118_821_fu_1520738_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1047_fu_1893_p2() {
    mul_ln1118_1047_fu_1893_p2 = (!ap_const_lv24_FFFECE.is_01() || !mul_ln1118_1047_fu_1893_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFECE) * sc_bigint<16>(mul_ln1118_1047_fu_1893_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1048_fu_2152_p1() {
    mul_ln1118_1048_fu_2152_p1 =  (sc_lv<16>) (sext_ln1118_826_fu_1520808_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1048_fu_2152_p2() {
    mul_ln1118_1048_fu_2152_p2 = (!ap_const_lv24_BE.is_01() || !mul_ln1118_1048_fu_2152_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_BE) * sc_bigint<16>(mul_ln1118_1048_fu_2152_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1049_fu_1945_p1() {
    mul_ln1118_1049_fu_1945_p1 =  (sc_lv<16>) (sext_ln1118_829_fu_1520851_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1049_fu_1945_p2() {
    mul_ln1118_1049_fu_1945_p2 = (!ap_const_lv24_5E.is_01() || !mul_ln1118_1049_fu_1945_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5E) * sc_bigint<16>(mul_ln1118_1049_fu_1945_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1051_fu_1843_p1() {
    mul_ln1118_1051_fu_1843_p1 =  (sc_lv<16>) (sext_ln1118_868_fu_1522288_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1051_fu_1843_p2() {
    mul_ln1118_1051_fu_1843_p2 = (!ap_const_lv24_FFFE31.is_01() || !mul_ln1118_1051_fu_1843_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE31) * sc_bigint<16>(mul_ln1118_1051_fu_1843_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1052_fu_1948_p1() {
    mul_ln1118_1052_fu_1948_p1 = sext_ln1118_869_fu_1522307_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1052_fu_1948_p2() {
    mul_ln1118_1052_fu_1948_p2 = (!ap_const_lv22_3FFFEB.is_01() || !mul_ln1118_1052_fu_1948_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFEB) * sc_bigint<16>(mul_ln1118_1052_fu_1948_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1053_fu_2215_p1() {
    mul_ln1118_1053_fu_2215_p1 =  (sc_lv<16>) (sext_ln1118_871_fu_1522332_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1053_fu_2215_p2() {
    mul_ln1118_1053_fu_2215_p2 = (!ap_const_lv24_FFFDB7.is_01() || !mul_ln1118_1053_fu_2215_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFDB7) * sc_bigint<16>(mul_ln1118_1053_fu_2215_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1054_fu_1950_p1() {
    mul_ln1118_1054_fu_1950_p1 =  (sc_lv<16>) (sext_ln1118_873_fu_1522354_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1054_fu_1950_p2() {
    mul_ln1118_1054_fu_1950_p2 = (!ap_const_lv24_FFFEDC.is_01() || !mul_ln1118_1054_fu_1950_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEDC) * sc_bigint<16>(mul_ln1118_1054_fu_1950_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1055_fu_2055_p1() {
    mul_ln1118_1055_fu_2055_p1 =  (sc_lv<16>) (sext_ln1118_878_fu_1522427_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1055_fu_2055_p2() {
    mul_ln1118_1055_fu_2055_p2 = (!ap_const_lv24_8B.is_01() || !mul_ln1118_1055_fu_2055_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8B) * sc_bigint<16>(mul_ln1118_1055_fu_2055_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1056_fu_2056_p1() {
    mul_ln1118_1056_fu_2056_p1 =  (sc_lv<16>) (sext_ln1118_879_fu_1522443_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1056_fu_2056_p2() {
    mul_ln1118_1056_fu_2056_p2 = (!ap_const_lv24_BD.is_01() || !mul_ln1118_1056_fu_2056_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_BD) * sc_bigint<16>(mul_ln1118_1056_fu_2056_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1057_fu_1953_p1() {
    mul_ln1118_1057_fu_1953_p1 =  (sc_lv<16>) (sext_ln1118_880_fu_1522462_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1057_fu_1953_p2() {
    mul_ln1118_1057_fu_1953_p2 = (!ap_const_lv24_64.is_01() || !mul_ln1118_1057_fu_1953_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_64) * sc_bigint<16>(mul_ln1118_1057_fu_1953_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1059_fu_2264_p1() {
    mul_ln1118_1059_fu_2264_p1 =  (sc_lv<16>) (sext_ln1118_884_fu_1522497_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1059_fu_2264_p2() {
    mul_ln1118_1059_fu_2264_p2 = (!ap_const_lv24_FFFEE5.is_01() || !mul_ln1118_1059_fu_2264_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEE5) * sc_bigint<16>(mul_ln1118_1059_fu_2264_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1061_fu_2266_p1() {
    mul_ln1118_1061_fu_2266_p1 =  (sc_lv<16>) (sext_ln1118_887_fu_1522525_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1061_fu_2266_p2() {
    mul_ln1118_1061_fu_2266_p2 = (!ap_const_lv24_FFFFA9.is_01() || !mul_ln1118_1061_fu_2266_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA9) * sc_bigint<16>(mul_ln1118_1061_fu_2266_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1062_fu_2267_p1() {
    mul_ln1118_1062_fu_2267_p1 =  (sc_lv<16>) (sext_ln1118_892_fu_1522620_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1062_fu_2267_p2() {
    mul_ln1118_1062_fu_2267_p2 = (!ap_const_lv24_FFFF94.is_01() || !mul_ln1118_1062_fu_2267_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF94) * sc_bigint<16>(mul_ln1118_1062_fu_2267_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1063_fu_2268_p1() {
    mul_ln1118_1063_fu_2268_p1 = sext_ln1118_894_fu_1522643_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1063_fu_2268_p2() {
    mul_ln1118_1063_fu_2268_p2 = (!ap_const_lv23_7FFFCC.is_01() || !mul_ln1118_1063_fu_2268_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCC) * sc_bigint<16>(mul_ln1118_1063_fu_2268_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1064_fu_2269_p1() {
    mul_ln1118_1064_fu_2269_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_1522662_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1064_fu_2269_p2() {
    mul_ln1118_1064_fu_2269_p2 = (!ap_const_lv24_FFFF4E.is_01() || !mul_ln1118_1064_fu_2269_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF4E) * sc_bigint<16>(mul_ln1118_1064_fu_2269_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1065_fu_2246_p1() {
    mul_ln1118_1065_fu_2246_p1 = sext_ln1118_897_fu_1522688_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1065_fu_2246_p2() {
    mul_ln1118_1065_fu_2246_p2 = (!ap_const_lv23_7FFFD9.is_01() || !mul_ln1118_1065_fu_2246_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD9) * sc_bigint<16>(mul_ln1118_1065_fu_2246_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1066_fu_2283_p1() {
    mul_ln1118_1066_fu_2283_p1 =  (sc_lv<16>) (sext_ln1118_863_fu_1522218_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1066_fu_2283_p2() {
    mul_ln1118_1066_fu_2283_p2 = (!ap_const_lv23_25.is_01() || !mul_ln1118_1066_fu_2283_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_25) * sc_bigint<16>(mul_ln1118_1066_fu_2283_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1067_fu_2200_p1() {
    mul_ln1118_1067_fu_2200_p1 =  (sc_lv<16>) (sext_ln1118_868_fu_1522288_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1067_fu_2200_p2() {
    mul_ln1118_1067_fu_2200_p2 = (!ap_const_lv24_FFFF12.is_01() || !mul_ln1118_1067_fu_2200_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF12) * sc_bigint<16>(mul_ln1118_1067_fu_2200_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1068_fu_2249_p1() {
    mul_ln1118_1068_fu_2249_p1 =  (sc_lv<16>) (sext_ln1118_873_fu_1522354_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1068_fu_2249_p2() {
    mul_ln1118_1068_fu_2249_p2 = (!ap_const_lv24_53.is_01() || !mul_ln1118_1068_fu_2249_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_53) * sc_bigint<16>(mul_ln1118_1068_fu_2249_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1069_fu_2274_p1() {
    mul_ln1118_1069_fu_2274_p1 =  (sc_lv<16>) (sext_ln1118_875_fu_1522376_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1069_fu_2274_p2() {
    mul_ln1118_1069_fu_2274_p2 = (!ap_const_lv24_72.is_01() || !mul_ln1118_1069_fu_2274_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_72) * sc_bigint<16>(mul_ln1118_1069_fu_2274_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1070_fu_2417_p1() {
    mul_ln1118_1070_fu_2417_p1 =  (sc_lv<16>) (sext_ln1118_879_fu_1522443_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1070_fu_2417_p2() {
    mul_ln1118_1070_fu_2417_p2 = (!ap_const_lv24_5B.is_01() || !mul_ln1118_1070_fu_2417_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5B) * sc_bigint<16>(mul_ln1118_1070_fu_2417_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1072_fu_2130_p1() {
    mul_ln1118_1072_fu_2130_p1 =  (sc_lv<16>) (sext_ln1118_882_fu_1522484_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1072_fu_2130_p2() {
    mul_ln1118_1072_fu_2130_p2 = (!ap_const_lv24_8D.is_01() || !mul_ln1118_1072_fu_2130_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8D) * sc_bigint<16>(mul_ln1118_1072_fu_2130_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1073_fu_2131_p1() {
    mul_ln1118_1073_fu_2131_p1 =  (sc_lv<16>) (sext_ln1118_884_fu_1522497_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1073_fu_2131_p2() {
    mul_ln1118_1073_fu_2131_p2 = (!ap_const_lv24_52.is_01() || !mul_ln1118_1073_fu_2131_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_52) * sc_bigint<16>(mul_ln1118_1073_fu_2131_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1075_fu_2029_p1() {
    mul_ln1118_1075_fu_2029_p1 =  (sc_lv<16>) (sext_ln1118_887_fu_1522525_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1075_fu_2029_p2() {
    mul_ln1118_1075_fu_2029_p2 = (!ap_const_lv24_FFFE6C.is_01() || !mul_ln1118_1075_fu_2029_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE6C) * sc_bigint<16>(mul_ln1118_1075_fu_2029_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1077_fu_1927_p1() {
    mul_ln1118_1077_fu_1927_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_1522662_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1077_fu_1927_p2() {
    mul_ln1118_1077_fu_1927_p2 = (!ap_const_lv24_FFFFB7.is_01() || !mul_ln1118_1077_fu_1927_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB7) * sc_bigint<16>(mul_ln1118_1077_fu_1927_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1078_fu_2194_p1() {
    mul_ln1118_1078_fu_2194_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_1522680_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1078_fu_2194_p2() {
    mul_ln1118_1078_fu_2194_p2 = (!ap_const_lv24_FFFEBA.is_01() || !mul_ln1118_1078_fu_2194_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEBA) * sc_bigint<16>(mul_ln1118_1078_fu_2194_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1079_fu_1929_p1() {
    mul_ln1118_1079_fu_1929_p1 =  (sc_lv<16>) (sext_ln1118_864_fu_1522224_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1079_fu_1929_p2() {
    mul_ln1118_1079_fu_1929_p2 = (!ap_const_lv24_FFFF5E.is_01() || !mul_ln1118_1079_fu_1929_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF5E) * sc_bigint<16>(mul_ln1118_1079_fu_1929_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1080_fu_2034_p1() {
    mul_ln1118_1080_fu_2034_p1 =  (sc_lv<16>) (sext_ln1118_865_fu_1522231_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1080_fu_2034_p2() {
    mul_ln1118_1080_fu_2034_p2 = (!ap_const_lv24_FFFFA5.is_01() || !mul_ln1118_1080_fu_2034_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA5) * sc_bigint<16>(mul_ln1118_1080_fu_2034_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1081_fu_2035_p1() {
    mul_ln1118_1081_fu_2035_p1 =  (sc_lv<16>) (sext_ln1118_868_fu_1522288_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1081_fu_2035_p2() {
    mul_ln1118_1081_fu_2035_p2 = (!ap_const_lv24_59.is_01() || !mul_ln1118_1081_fu_2035_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_59) * sc_bigint<16>(mul_ln1118_1081_fu_2035_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1082_fu_1886_p1() {
    mul_ln1118_1082_fu_1886_p1 =  (sc_lv<16>) (sext_ln1118_870_fu_1522312_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1082_fu_1886_p2() {
    mul_ln1118_1082_fu_1886_p2 = (!ap_const_lv24_47.is_01() || !mul_ln1118_1082_fu_1886_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_47) * sc_bigint<16>(mul_ln1118_1082_fu_1886_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1083_fu_2407_p1() {
    mul_ln1118_1083_fu_2407_p1 = sext_ln1118_872_fu_1522349_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1083_fu_2407_p2() {
    mul_ln1118_1083_fu_2407_p2 = (!ap_const_lv23_33.is_01() || !mul_ln1118_1083_fu_2407_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_33) * sc_bigint<16>(mul_ln1118_1083_fu_2407_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1084_fu_1975_p1() {
    mul_ln1118_1084_fu_1975_p1 = sext_ln1118_874_fu_1522371_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1084_fu_1975_p2() {
    mul_ln1118_1084_fu_1975_p2 = (!ap_const_lv23_25.is_01() || !mul_ln1118_1084_fu_1975_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_25) * sc_bigint<16>(mul_ln1118_1084_fu_1975_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1085_fu_2060_p1() {
    mul_ln1118_1085_fu_2060_p1 =  (sc_lv<16>) (sext_ln1118_879_fu_1522443_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1085_fu_2060_p2() {
    mul_ln1118_1085_fu_2060_p2 = (!ap_const_lv24_4F.is_01() || !mul_ln1118_1085_fu_2060_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4F) * sc_bigint<16>(mul_ln1118_1085_fu_2060_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1086_fu_2049_p1() {
    mul_ln1118_1086_fu_2049_p1 =  (sc_lv<16>) (sext_ln1118_880_fu_1522462_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1086_fu_2049_p2() {
    mul_ln1118_1086_fu_2049_p2 = (!ap_const_lv24_FFFF6D.is_01() || !mul_ln1118_1086_fu_2049_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF6D) * sc_bigint<16>(mul_ln1118_1086_fu_2049_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1087_fu_2062_p1() {
    mul_ln1118_1087_fu_2062_p1 = sext_ln1118_883_fu_1522492_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1087_fu_2062_p2() {
    mul_ln1118_1087_fu_2062_p2 = (!ap_const_lv21_1FFFF3.is_01() || !mul_ln1118_1087_fu_2062_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(mul_ln1118_1087_fu_2062_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1089_fu_2064_p1() {
    mul_ln1118_1089_fu_2064_p1 =  (sc_lv<16>) (sext_ln1118_892_fu_1522620_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1089_fu_2064_p2() {
    mul_ln1118_1089_fu_2064_p2 = (!ap_const_lv24_FFFF96.is_01() || !mul_ln1118_1089_fu_2064_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF96) * sc_bigint<16>(mul_ln1118_1089_fu_2064_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1090_fu_1993_p1() {
    mul_ln1118_1090_fu_1993_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_1522662_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1090_fu_1993_p2() {
    mul_ln1118_1090_fu_1993_p2 = (!ap_const_lv24_FFFEEC.is_01() || !mul_ln1118_1090_fu_1993_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEEC) * sc_bigint<16>(mul_ln1118_1090_fu_1993_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1091_fu_1930_p1() {
    mul_ln1118_1091_fu_1930_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_1522680_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1091_fu_1930_p2() {
    mul_ln1118_1091_fu_1930_p2 = (!ap_const_lv24_58.is_01() || !mul_ln1118_1091_fu_1930_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_58) * sc_bigint<16>(mul_ln1118_1091_fu_1930_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1092_fu_2067_p1() {
    mul_ln1118_1092_fu_2067_p1 =  (sc_lv<16>) (sext_ln1118_864_fu_1522224_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1092_fu_2067_p2() {
    mul_ln1118_1092_fu_2067_p2 = (!ap_const_lv24_FFFE55.is_01() || !mul_ln1118_1092_fu_2067_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE55) * sc_bigint<16>(mul_ln1118_1092_fu_2067_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1093_fu_2032_p1() {
    mul_ln1118_1093_fu_2032_p1 =  (sc_lv<16>) (sext_ln1118_865_fu_1522231_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1093_fu_2032_p2() {
    mul_ln1118_1093_fu_2032_p2 = (!ap_const_lv24_85.is_01() || !mul_ln1118_1093_fu_2032_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_85) * sc_bigint<16>(mul_ln1118_1093_fu_2032_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1094_fu_2395_p1() {
    mul_ln1118_1094_fu_2395_p1 =  (sc_lv<16>) (sext_ln1118_868_fu_1522288_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1094_fu_2395_p2() {
    mul_ln1118_1094_fu_2395_p2 = (!ap_const_lv24_68.is_01() || !mul_ln1118_1094_fu_2395_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_68) * sc_bigint<16>(mul_ln1118_1094_fu_2395_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1095_fu_2003_p1() {
    mul_ln1118_1095_fu_2003_p1 =  (sc_lv<16>) (sext_ln1118_870_fu_1522312_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1095_fu_2003_p2() {
    mul_ln1118_1095_fu_2003_p2 = (!ap_const_lv24_FFFF5F.is_01() || !mul_ln1118_1095_fu_2003_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF5F) * sc_bigint<16>(mul_ln1118_1095_fu_2003_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1096_fu_2397_p1() {
    mul_ln1118_1096_fu_2397_p1 =  (sc_lv<16>) (sext_ln1118_871_fu_1522332_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1096_fu_2397_p2() {
    mul_ln1118_1096_fu_2397_p2 = (!ap_const_lv24_C7.is_01() || !mul_ln1118_1096_fu_2397_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_C7) * sc_bigint<16>(mul_ln1118_1096_fu_2397_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1097_fu_2398_p1() {
    mul_ln1118_1097_fu_2398_p1 =  (sc_lv<16>) (sext_ln1118_875_fu_1522376_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1097_fu_2398_p2() {
    mul_ln1118_1097_fu_2398_p2 = (!ap_const_lv24_EB.is_01() || !mul_ln1118_1097_fu_2398_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_EB) * sc_bigint<16>(mul_ln1118_1097_fu_2398_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1098_fu_1902_p1() {
    mul_ln1118_1098_fu_1902_p1 =  (sc_lv<16>) (sext_ln1118_879_fu_1522443_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1098_fu_1902_p2() {
    mul_ln1118_1098_fu_1902_p2 = (!ap_const_lv24_FFFF3E.is_01() || !mul_ln1118_1098_fu_1902_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF3E) * sc_bigint<16>(mul_ln1118_1098_fu_1902_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1100_fu_2008_p1() {
    mul_ln1118_1100_fu_2008_p1 =  (sc_lv<16>) (sext_ln1118_882_fu_1522484_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1100_fu_2008_p2() {
    mul_ln1118_1100_fu_2008_p2 = (!ap_const_lv24_FFFFAF.is_01() || !mul_ln1118_1100_fu_2008_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFAF) * sc_bigint<16>(mul_ln1118_1100_fu_2008_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1101_fu_2009_p1() {
    mul_ln1118_1101_fu_2009_p1 =  (sc_lv<16>) (sext_ln1118_887_fu_1522525_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1101_fu_2009_p2() {
    mul_ln1118_1101_fu_2009_p2 = (!ap_const_lv24_8E.is_01() || !mul_ln1118_1101_fu_2009_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8E) * sc_bigint<16>(mul_ln1118_1101_fu_2009_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1102_fu_2010_p1() {
    mul_ln1118_1102_fu_2010_p1 =  (sc_lv<16>) (sext_ln1118_892_fu_1522620_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1102_fu_2010_p2() {
    mul_ln1118_1102_fu_2010_p2 = (!ap_const_lv24_FFFE18.is_01() || !mul_ln1118_1102_fu_2010_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE18) * sc_bigint<16>(mul_ln1118_1102_fu_2010_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1103_fu_2011_p1() {
    mul_ln1118_1103_fu_2011_p1 =  (sc_lv<16>) (sext_ln1118_893_fu_1522637_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1103_fu_2011_p2() {
    mul_ln1118_1103_fu_2011_p2 = (!ap_const_lv24_43.is_01() || !mul_ln1118_1103_fu_2011_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_43) * sc_bigint<16>(mul_ln1118_1103_fu_2011_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1104_fu_2405_p1() {
    mul_ln1118_1104_fu_2405_p1 =  (sc_lv<16>) (sext_ln1118_895_fu_1522662_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1104_fu_2405_p2() {
    mul_ln1118_1104_fu_2405_p2 = (!ap_const_lv24_FFFF11.is_01() || !mul_ln1118_1104_fu_2405_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF11) * sc_bigint<16>(mul_ln1118_1104_fu_2405_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1105_fu_2406_p1() {
    mul_ln1118_1105_fu_2406_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_1522680_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1105_fu_2406_p2() {
    mul_ln1118_1105_fu_2406_p2 = (!ap_const_lv24_FFFF64.is_01() || !mul_ln1118_1105_fu_2406_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF64) * sc_bigint<16>(mul_ln1118_1105_fu_2406_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1106_fu_2416_p1() {
    mul_ln1118_1106_fu_2416_p1 =  (sc_lv<16>) (sext_ln1118_863_fu_1522218_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1106_fu_2416_p2() {
    mul_ln1118_1106_fu_2416_p2 = (!ap_const_lv23_39.is_01() || !mul_ln1118_1106_fu_2416_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_39) * sc_bigint<16>(mul_ln1118_1106_fu_2416_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1107_fu_1852_p1() {
    mul_ln1118_1107_fu_1852_p1 =  (sc_lv<16>) (sext_ln1118_865_fu_1522231_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1107_fu_1852_p2() {
    mul_ln1118_1107_fu_1852_p2 = (!ap_const_lv24_5C.is_01() || !mul_ln1118_1107_fu_1852_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5C) * sc_bigint<16>(mul_ln1118_1107_fu_1852_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1108_fu_1853_p1() {
    mul_ln1118_1108_fu_1853_p1 =  (sc_lv<16>) (sext_ln1118_868_fu_1522288_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1108_fu_1853_p2() {
    mul_ln1118_1108_fu_1853_p2 = (!ap_const_lv24_5D.is_01() || !mul_ln1118_1108_fu_1853_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5D) * sc_bigint<16>(mul_ln1118_1108_fu_1853_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1109_fu_1854_p1() {
    mul_ln1118_1109_fu_1854_p1 =  (sc_lv<16>) (sext_ln1118_871_fu_1522332_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1109_fu_1854_p2() {
    mul_ln1118_1109_fu_1854_p2 = (!ap_const_lv24_7A.is_01() || !mul_ln1118_1109_fu_1854_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7A) * sc_bigint<16>(mul_ln1118_1109_fu_1854_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1111_fu_2349_p1() {
    mul_ln1118_1111_fu_2349_p1 =  (sc_lv<16>) (sext_ln1118_875_fu_1522376_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1111_fu_2349_p2() {
    mul_ln1118_1111_fu_2349_p2 = (!ap_const_lv24_FFFF98.is_01() || !mul_ln1118_1111_fu_2349_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF98) * sc_bigint<16>(mul_ln1118_1111_fu_2349_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1112_fu_1857_p1() {
    mul_ln1118_1112_fu_1857_p1 =  (sc_lv<16>) (sext_ln1118_878_fu_1522427_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1112_fu_1857_p2() {
    mul_ln1118_1112_fu_1857_p2 = (!ap_const_lv24_FFFF93.is_01() || !mul_ln1118_1112_fu_1857_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF93) * sc_bigint<16>(mul_ln1118_1112_fu_1857_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1113_fu_1858_p1() {
    mul_ln1118_1113_fu_1858_p1 =  (sc_lv<16>) (sext_ln1118_879_fu_1522443_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1113_fu_1858_p2() {
    mul_ln1118_1113_fu_1858_p2 = (!ap_const_lv24_75.is_01() || !mul_ln1118_1113_fu_1858_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_75) * sc_bigint<16>(mul_ln1118_1113_fu_1858_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1114_fu_1859_p1() {
    mul_ln1118_1114_fu_1859_p1 =  (sc_lv<16>) (sext_ln1118_882_fu_1522484_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1114_fu_1859_p2() {
    mul_ln1118_1114_fu_1859_p2 = (!ap_const_lv24_FFFEF9.is_01() || !mul_ln1118_1114_fu_1859_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEF9) * sc_bigint<16>(mul_ln1118_1114_fu_1859_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1115_fu_2425_p1() {
    mul_ln1118_1115_fu_2425_p1 = sext_ln1118_885_fu_1522513_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1115_fu_2425_p2() {
    mul_ln1118_1115_fu_2425_p2 = (!ap_const_lv24_7B.is_01() || !mul_ln1118_1115_fu_2425_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7B) * sc_bigint<16>(mul_ln1118_1115_fu_2425_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1116_fu_1861_p1() {
    mul_ln1118_1116_fu_1861_p1 =  (sc_lv<16>) (sext_ln1118_887_fu_1522525_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1116_fu_1861_p2() {
    mul_ln1118_1116_fu_1861_p2 = (!ap_const_lv24_FFFF85.is_01() || !mul_ln1118_1116_fu_1861_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF85) * sc_bigint<16>(mul_ln1118_1116_fu_1861_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1117_fu_1862_p1() {
    mul_ln1118_1117_fu_1862_p1 =  (sc_lv<16>) (sext_ln708_378_fu_1522543_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1117_fu_1862_p2() {
    mul_ln1118_1117_fu_1862_p2 = (!ap_const_lv24_65.is_01() || !mul_ln1118_1117_fu_1862_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_65) * sc_bigint<16>(mul_ln1118_1117_fu_1862_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1118_fu_1875_p1() {
    mul_ln1118_1118_fu_1875_p1 = sext_ln1118_888_fu_1522567_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1118_fu_1875_p2() {
    mul_ln1118_1118_fu_1875_p2 = (!ap_const_lv24_FFFECE.is_01() || !mul_ln1118_1118_fu_1875_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFECE) * sc_bigint<16>(mul_ln1118_1118_fu_1875_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1119_fu_1981_p1() {
    mul_ln1118_1119_fu_1981_p1 =  (sc_lv<16>) (sext_ln1118_893_fu_1522637_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1119_fu_1981_p2() {
    mul_ln1118_1119_fu_1981_p2 = (!ap_const_lv24_BE.is_01() || !mul_ln1118_1119_fu_1981_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_BE) * sc_bigint<16>(mul_ln1118_1119_fu_1981_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1120_fu_2387_p1() {
    mul_ln1118_1120_fu_2387_p1 =  (sc_lv<16>) (sext_ln1118_896_fu_1522680_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1120_fu_2387_p2() {
    mul_ln1118_1120_fu_2387_p2 = (!ap_const_lv24_5E.is_01() || !mul_ln1118_1120_fu_2387_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5E) * sc_bigint<16>(mul_ln1118_1120_fu_2387_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1121_fu_1983_p1() {
    mul_ln1118_1121_fu_1983_p1 = sext_ln1118_931_fu_1524103_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1121_fu_1983_p2() {
    mul_ln1118_1121_fu_1983_p2 = (!ap_const_lv24_73.is_01() || !mul_ln1118_1121_fu_1983_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_73) * sc_bigint<16>(mul_ln1118_1121_fu_1983_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1122_fu_2377_p1() {
    mul_ln1118_1122_fu_2377_p1 =  (sc_lv<16>) (sext_ln1118_935_fu_1524177_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1122_fu_2377_p2() {
    mul_ln1118_1122_fu_2377_p2 = (!ap_const_lv24_FFFE31.is_01() || !mul_ln1118_1122_fu_2377_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE31) * sc_bigint<16>(mul_ln1118_1122_fu_2377_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1123_fu_1985_p1() {
    mul_ln1118_1123_fu_1985_p1 = sext_ln1118_936_fu_1524196_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1123_fu_1985_p2() {
    mul_ln1118_1123_fu_1985_p2 = (!ap_const_lv22_3FFFEB.is_01() || !mul_ln1118_1123_fu_1985_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFEB) * sc_bigint<16>(mul_ln1118_1123_fu_1985_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1124_fu_1986_p1() {
    mul_ln1118_1124_fu_1986_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_1524221_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1124_fu_1986_p2() {
    mul_ln1118_1124_fu_1986_p2 = (!ap_const_lv24_FFFDB7.is_01() || !mul_ln1118_1124_fu_1986_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFDB7) * sc_bigint<16>(mul_ln1118_1124_fu_1986_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1125_fu_2380_p1() {
    mul_ln1118_1125_fu_2380_p1 =  (sc_lv<16>) (sext_ln1118_940_fu_1524243_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1125_fu_2380_p2() {
    mul_ln1118_1125_fu_2380_p2 = (!ap_const_lv24_FFFEDC.is_01() || !mul_ln1118_1125_fu_2380_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEDC) * sc_bigint<16>(mul_ln1118_1125_fu_2380_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1126_fu_2381_p1() {
    mul_ln1118_1126_fu_2381_p1 = sext_ln1118_945_fu_1524316_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1126_fu_2381_p2() {
    mul_ln1118_1126_fu_2381_p2 = (!ap_const_lv24_8B.is_01() || !mul_ln1118_1126_fu_2381_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8B) * sc_bigint<16>(mul_ln1118_1126_fu_2381_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1127_fu_2174_p1() {
    mul_ln1118_1127_fu_2174_p1 =  (sc_lv<16>) (sext_ln1118_946_fu_1524332_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1127_fu_2174_p2() {
    mul_ln1118_1127_fu_2174_p2 = (!ap_const_lv24_BD.is_01() || !mul_ln1118_1127_fu_2174_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_BD) * sc_bigint<16>(mul_ln1118_1127_fu_2174_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1128_fu_1990_p1() {
    mul_ln1118_1128_fu_1990_p1 = sext_ln1118_947_fu_1524351_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1128_fu_1990_p2() {
    mul_ln1118_1128_fu_1990_p2 = (!ap_const_lv24_64.is_01() || !mul_ln1118_1128_fu_1990_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_64) * sc_bigint<16>(mul_ln1118_1128_fu_1990_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1130_fu_2222_p1() {
    mul_ln1118_1130_fu_2222_p1 =  (sc_lv<16>) (sext_ln1118_951_fu_1524386_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1130_fu_2222_p2() {
    mul_ln1118_1130_fu_2222_p2 = (!ap_const_lv24_FFFEE5.is_01() || !mul_ln1118_1130_fu_2222_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEE5) * sc_bigint<16>(mul_ln1118_1130_fu_2222_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1131_fu_2247_p1() {
    mul_ln1118_1131_fu_2247_p1 =  (sc_lv<16>) (sext_ln1118_952_fu_1524402_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1131_fu_2247_p2() {
    mul_ln1118_1131_fu_2247_p2 = (!ap_const_lv24_8D.is_01() || !mul_ln1118_1131_fu_2247_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8D) * sc_bigint<16>(mul_ln1118_1131_fu_2247_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1133_fu_2261_p1() {
    mul_ln1118_1133_fu_2261_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_1524509_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1133_fu_2261_p2() {
    mul_ln1118_1133_fu_2261_p2 = (!ap_const_lv24_FFFF94.is_01() || !mul_ln1118_1133_fu_2261_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF94) * sc_bigint<16>(mul_ln1118_1133_fu_2261_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1134_fu_2250_p1() {
    mul_ln1118_1134_fu_2250_p1 = sext_ln1118_961_fu_1524532_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1134_fu_2250_p2() {
    mul_ln1118_1134_fu_2250_p2 = (!ap_const_lv23_7FFFCC.is_01() || !mul_ln1118_1134_fu_2250_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCC) * sc_bigint<16>(mul_ln1118_1134_fu_2250_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1135_fu_2251_p1() {
    mul_ln1118_1135_fu_2251_p1 =  (sc_lv<16>) (sext_ln1118_962_fu_1524551_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1135_fu_2251_p2() {
    mul_ln1118_1135_fu_2251_p2 = (!ap_const_lv24_FFFF4E.is_01() || !mul_ln1118_1135_fu_2251_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF4E) * sc_bigint<16>(mul_ln1118_1135_fu_2251_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1136_fu_2240_p1() {
    mul_ln1118_1136_fu_2240_p1 = sext_ln1118_964_fu_1524577_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1136_fu_2240_p2() {
    mul_ln1118_1136_fu_2240_p2 = (!ap_const_lv23_7FFFD9.is_01() || !mul_ln1118_1136_fu_2240_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD9) * sc_bigint<16>(mul_ln1118_1136_fu_2240_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1138_fu_2230_p1() {
    mul_ln1118_1138_fu_2230_p1 =  (sc_lv<16>) (sext_ln1118_935_fu_1524177_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1138_fu_2230_p2() {
    mul_ln1118_1138_fu_2230_p2 = (!ap_const_lv24_FFFF12.is_01() || !mul_ln1118_1138_fu_2230_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF12) * sc_bigint<16>(mul_ln1118_1138_fu_2230_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1139_fu_2255_p1() {
    mul_ln1118_1139_fu_2255_p1 =  (sc_lv<16>) (sext_ln1118_940_fu_1524243_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1139_fu_2255_p2() {
    mul_ln1118_1139_fu_2255_p2 = (!ap_const_lv24_53.is_01() || !mul_ln1118_1139_fu_2255_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_53) * sc_bigint<16>(mul_ln1118_1139_fu_2255_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1140_fu_2256_p1() {
    mul_ln1118_1140_fu_2256_p1 =  (sc_lv<16>) (sext_ln1118_942_fu_1524265_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1140_fu_2256_p2() {
    mul_ln1118_1140_fu_2256_p2 = (!ap_const_lv24_72.is_01() || !mul_ln1118_1140_fu_2256_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_72) * sc_bigint<16>(mul_ln1118_1140_fu_2256_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1143_fu_2271_p1() {
    mul_ln1118_1143_fu_2271_p1 = sext_ln1118_949_fu_1524373_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1143_fu_2271_p2() {
    mul_ln1118_1143_fu_2271_p2 = (!ap_const_lv24_8D.is_01() || !mul_ln1118_1143_fu_2271_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8D) * sc_bigint<16>(mul_ln1118_1143_fu_2271_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1144_fu_2145_p1() {
    mul_ln1118_1144_fu_2145_p1 =  (sc_lv<16>) (sext_ln1118_951_fu_1524386_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1144_fu_2145_p2() {
    mul_ln1118_1144_fu_2145_p2 = (!ap_const_lv24_52.is_01() || !mul_ln1118_1144_fu_2145_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_52) * sc_bigint<16>(mul_ln1118_1144_fu_2145_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1145_fu_2065_p1() {
    mul_ln1118_1145_fu_2065_p1 =  (sc_lv<16>) (sext_ln1118_952_fu_1524402_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1145_fu_2065_p2() {
    mul_ln1118_1145_fu_2065_p2 = (!ap_const_lv24_5C.is_01() || !mul_ln1118_1145_fu_2065_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5C) * sc_bigint<16>(mul_ln1118_1145_fu_2065_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1146_fu_2170_p1() {
    mul_ln1118_1146_fu_2170_p1 =  (sc_lv<16>) (sext_ln1118_954_fu_1524424_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1146_fu_2170_p2() {
    mul_ln1118_1146_fu_2170_p2 = (!ap_const_lv24_FFFE6C.is_01() || !mul_ln1118_1146_fu_2170_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE6C) * sc_bigint<16>(mul_ln1118_1146_fu_2170_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1148_fu_2172_p1() {
    mul_ln1118_1148_fu_2172_p1 =  (sc_lv<16>) (sext_ln1118_962_fu_1524551_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1148_fu_2172_p2() {
    mul_ln1118_1148_fu_2172_p2 = (!ap_const_lv24_FFFFB7.is_01() || !mul_ln1118_1148_fu_2172_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB7) * sc_bigint<16>(mul_ln1118_1148_fu_2172_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1149_fu_2173_p1() {
    mul_ln1118_1149_fu_2173_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_1524569_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1149_fu_2173_p2() {
    mul_ln1118_1149_fu_2173_p2 = (!ap_const_lv24_FFFEBA.is_01() || !mul_ln1118_1149_fu_2173_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEBA) * sc_bigint<16>(mul_ln1118_1149_fu_2173_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1151_fu_2071_p1() {
    mul_ln1118_1151_fu_2071_p1 =  (sc_lv<16>) (sext_ln1118_932_fu_1524120_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1151_fu_2071_p2() {
    mul_ln1118_1151_fu_2071_p2 = (!ap_const_lv24_FFFFA5.is_01() || !mul_ln1118_1151_fu_2071_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA5) * sc_bigint<16>(mul_ln1118_1151_fu_2071_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1152_fu_2176_p1() {
    mul_ln1118_1152_fu_2176_p1 =  (sc_lv<16>) (sext_ln1118_935_fu_1524177_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1152_fu_2176_p2() {
    mul_ln1118_1152_fu_2176_p2 = (!ap_const_lv24_59.is_01() || !mul_ln1118_1152_fu_2176_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_59) * sc_bigint<16>(mul_ln1118_1152_fu_2176_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1153_fu_1842_p1() {
    mul_ln1118_1153_fu_1842_p1 =  (sc_lv<16>) (sext_ln1118_937_fu_1524201_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1153_fu_1842_p2() {
    mul_ln1118_1153_fu_1842_p2 = (!ap_const_lv24_47.is_01() || !mul_ln1118_1153_fu_1842_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_47) * sc_bigint<16>(mul_ln1118_1153_fu_1842_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1154_fu_2052_p1() {
    mul_ln1118_1154_fu_2052_p1 = sext_ln1118_939_fu_1524238_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1154_fu_2052_p2() {
    mul_ln1118_1154_fu_2052_p2 = (!ap_const_lv23_33.is_01() || !mul_ln1118_1154_fu_2052_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_33) * sc_bigint<16>(mul_ln1118_1154_fu_2052_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1155_fu_2017_p1() {
    mul_ln1118_1155_fu_2017_p1 = sext_ln1118_941_fu_1524260_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1155_fu_2017_p2() {
    mul_ln1118_1155_fu_2017_p2 = (!ap_const_lv23_25.is_01() || !mul_ln1118_1155_fu_2017_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_25) * sc_bigint<16>(mul_ln1118_1155_fu_2017_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1158_fu_2206_p1() {
    mul_ln1118_1158_fu_2206_p1 = sext_ln1118_950_fu_1524381_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1158_fu_2206_p2() {
    mul_ln1118_1158_fu_2206_p2 = (!ap_const_lv21_1FFFF3.is_01() || !mul_ln1118_1158_fu_2206_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(mul_ln1118_1158_fu_2206_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1159_fu_2045_p1() {
    mul_ln1118_1159_fu_2045_p1 = sext_ln1118_953_fu_1524419_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1159_fu_2045_p2() {
    mul_ln1118_1159_fu_2045_p2 = (!ap_const_lv22_1A.is_01() || !mul_ln1118_1159_fu_2045_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_1A) * sc_bigint<16>(mul_ln1118_1159_fu_2045_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1160_fu_2070_p1() {
    mul_ln1118_1160_fu_2070_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_1524509_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1160_fu_2070_p2() {
    mul_ln1118_1160_fu_2070_p2 = (!ap_const_lv24_FFFF96.is_01() || !mul_ln1118_1160_fu_2070_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF96) * sc_bigint<16>(mul_ln1118_1160_fu_2070_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1161_fu_2047_p1() {
    mul_ln1118_1161_fu_2047_p1 =  (sc_lv<16>) (sext_ln1118_962_fu_1524551_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1161_fu_2047_p2() {
    mul_ln1118_1161_fu_2047_p2 = (!ap_const_lv24_FFFEEC.is_01() || !mul_ln1118_1161_fu_2047_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEEC) * sc_bigint<16>(mul_ln1118_1161_fu_2047_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1162_fu_2000_p1() {
    mul_ln1118_1162_fu_2000_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_1524569_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1162_fu_2000_p2() {
    mul_ln1118_1162_fu_2000_p2 = (!ap_const_lv24_58.is_01() || !mul_ln1118_1162_fu_2000_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_58) * sc_bigint<16>(mul_ln1118_1162_fu_2000_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1164_fu_2038_p1() {
    mul_ln1118_1164_fu_2038_p1 =  (sc_lv<16>) (sext_ln1118_932_fu_1524120_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1164_fu_2038_p2() {
    mul_ln1118_1164_fu_2038_p2 = (!ap_const_lv24_85.is_01() || !mul_ln1118_1164_fu_2038_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_85) * sc_bigint<16>(mul_ln1118_1164_fu_2038_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1165_fu_2351_p1() {
    mul_ln1118_1165_fu_2351_p1 =  (sc_lv<16>) (sext_ln1118_935_fu_1524177_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1165_fu_2351_p2() {
    mul_ln1118_1165_fu_2351_p2 = (!ap_const_lv24_68.is_01() || !mul_ln1118_1165_fu_2351_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_68) * sc_bigint<16>(mul_ln1118_1165_fu_2351_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1166_fu_2433_p1() {
    mul_ln1118_1166_fu_2433_p1 =  (sc_lv<16>) (sext_ln1118_937_fu_1524201_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1166_fu_2433_p2() {
    mul_ln1118_1166_fu_2433_p2 = (!ap_const_lv24_FFFF5F.is_01() || !mul_ln1118_1166_fu_2433_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF5F) * sc_bigint<16>(mul_ln1118_1166_fu_2433_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1167_fu_2330_p1() {
    mul_ln1118_1167_fu_2330_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_1524221_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1167_fu_2330_p2() {
    mul_ln1118_1167_fu_2330_p2 = (!ap_const_lv24_C7.is_01() || !mul_ln1118_1167_fu_2330_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_C7) * sc_bigint<16>(mul_ln1118_1167_fu_2330_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1168_fu_2354_p1() {
    mul_ln1118_1168_fu_2354_p1 =  (sc_lv<16>) (sext_ln1118_942_fu_1524265_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1168_fu_2354_p2() {
    mul_ln1118_1168_fu_2354_p2 = (!ap_const_lv24_EB.is_01() || !mul_ln1118_1168_fu_2354_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_EB) * sc_bigint<16>(mul_ln1118_1168_fu_2354_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1169_fu_2147_p1() {
    mul_ln1118_1169_fu_2147_p1 =  (sc_lv<16>) (sext_ln1118_946_fu_1524332_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1169_fu_2147_p2() {
    mul_ln1118_1169_fu_2147_p2 = (!ap_const_lv24_FFFF3E.is_01() || !mul_ln1118_1169_fu_2147_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF3E) * sc_bigint<16>(mul_ln1118_1169_fu_2147_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1173_fu_2345_p1() {
    mul_ln1118_1173_fu_2345_p1 =  (sc_lv<16>) (sext_ln1118_959_fu_1524509_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1173_fu_2345_p2() {
    mul_ln1118_1173_fu_2345_p2 = (!ap_const_lv24_FFFE18.is_01() || !mul_ln1118_1173_fu_2345_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE18) * sc_bigint<16>(mul_ln1118_1173_fu_2345_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1174_fu_1944_p1() {
    mul_ln1118_1174_fu_1944_p1 =  (sc_lv<16>) (sext_ln1118_960_fu_1524526_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1174_fu_1944_p2() {
    mul_ln1118_1174_fu_1944_p2 = (!ap_const_lv24_43.is_01() || !mul_ln1118_1174_fu_1944_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_43) * sc_bigint<16>(mul_ln1118_1174_fu_1944_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1175_fu_2153_p1() {
    mul_ln1118_1175_fu_2153_p1 =  (sc_lv<16>) (sext_ln1118_962_fu_1524551_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1175_fu_2153_p2() {
    mul_ln1118_1175_fu_2153_p2 = (!ap_const_lv24_FFFF11.is_01() || !mul_ln1118_1175_fu_2153_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF11) * sc_bigint<16>(mul_ln1118_1175_fu_2153_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1176_fu_2362_p1() {
    mul_ln1118_1176_fu_2362_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_1524569_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1176_fu_2362_p2() {
    mul_ln1118_1176_fu_2362_p2 = (!ap_const_lv24_FFFF64.is_01() || !mul_ln1118_1176_fu_2362_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF64) * sc_bigint<16>(mul_ln1118_1176_fu_2362_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1179_fu_1883_p1() {
    mul_ln1118_1179_fu_1883_p1 =  (sc_lv<16>) (sext_ln1118_935_fu_1524177_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1179_fu_1883_p2() {
    mul_ln1118_1179_fu_1883_p2 = (!ap_const_lv24_5D.is_01() || !mul_ln1118_1179_fu_1883_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5D) * sc_bigint<16>(mul_ln1118_1179_fu_1883_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1180_fu_1884_p1() {
    mul_ln1118_1180_fu_1884_p1 =  (sc_lv<16>) (sext_ln1118_938_fu_1524221_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1180_fu_1884_p2() {
    mul_ln1118_1180_fu_1884_p2 = (!ap_const_lv24_7A.is_01() || !mul_ln1118_1180_fu_1884_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7A) * sc_bigint<16>(mul_ln1118_1180_fu_1884_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1181_fu_2414_p1() {
    mul_ln1118_1181_fu_2414_p1 =  (sc_lv<16>) (sext_ln1118_940_fu_1524243_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1181_fu_2414_p2() {
    mul_ln1118_1181_fu_2414_p2 = (!ap_const_lv24_FFFF7D.is_01() || !mul_ln1118_1181_fu_2414_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF7D) * sc_bigint<16>(mul_ln1118_1181_fu_2414_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1182_fu_2355_p1() {
    mul_ln1118_1182_fu_2355_p1 =  (sc_lv<16>) (sext_ln1118_942_fu_1524265_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1182_fu_2355_p2() {
    mul_ln1118_1182_fu_2355_p2 = (!ap_const_lv24_FFFF98.is_01() || !mul_ln1118_1182_fu_2355_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF98) * sc_bigint<16>(mul_ln1118_1182_fu_2355_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1184_fu_2369_p1() {
    mul_ln1118_1184_fu_2369_p1 =  (sc_lv<16>) (sext_ln1118_946_fu_1524332_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1184_fu_2369_p2() {
    mul_ln1118_1184_fu_2369_p2 = (!ap_const_lv24_75.is_01() || !mul_ln1118_1184_fu_2369_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_75) * sc_bigint<16>(mul_ln1118_1184_fu_2369_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1187_fu_1879_p1() {
    mul_ln1118_1187_fu_1879_p1 =  (sc_lv<16>) (sext_ln1118_954_fu_1524424_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1187_fu_1879_p2() {
    mul_ln1118_1187_fu_1879_p2 = (!ap_const_lv24_FFFF85.is_01() || !mul_ln1118_1187_fu_1879_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF85) * sc_bigint<16>(mul_ln1118_1187_fu_1879_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1188_fu_1892_p1() {
    mul_ln1118_1188_fu_1892_p1 =  (sc_lv<16>) (sext_ln708_408_fu_1524432_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1188_fu_1892_p2() {
    mul_ln1118_1188_fu_1892_p2 = (!ap_const_lv24_65.is_01() || !mul_ln1118_1188_fu_1892_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_65) * sc_bigint<16>(mul_ln1118_1188_fu_1892_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1189_fu_1936_p1() {
    mul_ln1118_1189_fu_1936_p1 = sext_ln1118_955_fu_1524456_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1189_fu_1936_p2() {
    mul_ln1118_1189_fu_1936_p2 = (!ap_const_lv24_FFFECE.is_01() || !mul_ln1118_1189_fu_1936_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFECE) * sc_bigint<16>(mul_ln1118_1189_fu_1936_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1190_fu_2434_p1() {
    mul_ln1118_1190_fu_2434_p1 =  (sc_lv<16>) (sext_ln1118_960_fu_1524526_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1190_fu_2434_p2() {
    mul_ln1118_1190_fu_2434_p2 = (!ap_const_lv24_BE.is_01() || !mul_ln1118_1190_fu_2434_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_BE) * sc_bigint<16>(mul_ln1118_1190_fu_2434_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1191_fu_2178_p1() {
    mul_ln1118_1191_fu_2178_p1 =  (sc_lv<16>) (sext_ln1118_963_fu_1524569_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1191_fu_2178_p2() {
    mul_ln1118_1191_fu_2178_p2 = (!ap_const_lv24_5E.is_01() || !mul_ln1118_1191_fu_2178_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5E) * sc_bigint<16>(mul_ln1118_1191_fu_2178_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1192_fu_2436_p1() {
    mul_ln1118_1192_fu_2436_p1 =  (sc_lv<16>) (sext_ln1118_998_fu_1525892_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1192_fu_2436_p2() {
    mul_ln1118_1192_fu_2436_p2 = (!ap_const_lv24_73.is_01() || !mul_ln1118_1192_fu_2436_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_73) * sc_bigint<16>(mul_ln1118_1192_fu_2436_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1193_fu_2437_p1() {
    mul_ln1118_1193_fu_2437_p1 =  (sc_lv<16>) (sext_ln1118_1002_fu_1525966_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1193_fu_2437_p2() {
    mul_ln1118_1193_fu_2437_p2 = (!ap_const_lv24_FFFE31.is_01() || !mul_ln1118_1193_fu_2437_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE31) * sc_bigint<16>(mul_ln1118_1193_fu_2437_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1194_fu_2334_p1() {
    mul_ln1118_1194_fu_2334_p1 = sext_ln1118_1003_fu_1525985_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1194_fu_2334_p2() {
    mul_ln1118_1194_fu_2334_p2 = (!ap_const_lv22_3FFFEB.is_01() || !mul_ln1118_1194_fu_2334_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFEB) * sc_bigint<16>(mul_ln1118_1194_fu_2334_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1195_fu_2335_p1() {
    mul_ln1118_1195_fu_2335_p1 =  (sc_lv<16>) (sext_ln1118_1005_fu_1526010_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1195_fu_2335_p2() {
    mul_ln1118_1195_fu_2335_p2 = (!ap_const_lv24_FFFDB7.is_01() || !mul_ln1118_1195_fu_2335_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFDB7) * sc_bigint<16>(mul_ln1118_1195_fu_2335_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1197_fu_2441_p1() {
    mul_ln1118_1197_fu_2441_p1 =  (sc_lv<16>) (sext_ln1118_1012_fu_1526095_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1197_fu_2441_p2() {
    mul_ln1118_1197_fu_2441_p2 = (!ap_const_lv24_8B.is_01() || !mul_ln1118_1197_fu_2441_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8B) * sc_bigint<16>(mul_ln1118_1197_fu_2441_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1200_fu_2051_p1() {
    mul_ln1118_1200_fu_2051_p1 =  (sc_lv<16>) (sext_ln1118_1016_fu_1526132_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1200_fu_2051_p2() {
    mul_ln1118_1200_fu_2051_p2 = (!ap_const_lv24_FFFF18.is_01() || !mul_ln1118_1200_fu_2051_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF18) * sc_bigint<16>(mul_ln1118_1200_fu_2051_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1201_fu_2180_p1() {
    mul_ln1118_1201_fu_2180_p1 =  (sc_lv<16>) (sext_ln1118_1018_fu_1526155_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1201_fu_2180_p2() {
    mul_ln1118_1201_fu_2180_p2 = (!ap_const_lv24_FFFEE5.is_01() || !mul_ln1118_1201_fu_2180_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEE5) * sc_bigint<16>(mul_ln1118_1201_fu_2180_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1202_fu_2301_p1() {
    mul_ln1118_1202_fu_2301_p1 =  (sc_lv<16>) (sext_ln1118_1019_fu_1526171_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1202_fu_2301_p2() {
    mul_ln1118_1202_fu_2301_p2 = (!ap_const_lv24_8D.is_01() || !mul_ln1118_1202_fu_2301_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8D) * sc_bigint<16>(mul_ln1118_1202_fu_2301_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1205_fu_2280_p1() {
    mul_ln1118_1205_fu_2280_p1 = sext_ln1118_1028_fu_1526291_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1205_fu_2280_p2() {
    mul_ln1118_1205_fu_2280_p2 = (!ap_const_lv23_7FFFCC.is_01() || !mul_ln1118_1205_fu_2280_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCC) * sc_bigint<16>(mul_ln1118_1205_fu_2280_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1206_fu_2305_p1() {
    mul_ln1118_1206_fu_2305_p1 =  (sc_lv<16>) (sext_ln1118_1029_fu_1526310_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1206_fu_2305_p2() {
    mul_ln1118_1206_fu_2305_p2 = (!ap_const_lv24_FFFF4E.is_01() || !mul_ln1118_1206_fu_2305_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF4E) * sc_bigint<16>(mul_ln1118_1206_fu_2305_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1207_fu_2306_p1() {
    mul_ln1118_1207_fu_2306_p1 = sext_ln1118_1031_fu_1526336_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1207_fu_2306_p2() {
    mul_ln1118_1207_fu_2306_p2 = (!ap_const_lv23_7FFFD9.is_01() || !mul_ln1118_1207_fu_2306_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD9) * sc_bigint<16>(mul_ln1118_1207_fu_2306_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1208_fu_2150_p1() {
    mul_ln1118_1208_fu_2150_p1 =  (sc_lv<16>) (sext_ln1118_997_fu_1525886_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1208_fu_2150_p2() {
    mul_ln1118_1208_fu_2150_p2 = (!ap_const_lv23_25.is_01() || !mul_ln1118_1208_fu_2150_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_25) * sc_bigint<16>(mul_ln1118_1208_fu_2150_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1209_fu_2260_p1() {
    mul_ln1118_1209_fu_2260_p1 =  (sc_lv<16>) (sext_ln1118_1002_fu_1525966_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1209_fu_2260_p2() {
    mul_ln1118_1209_fu_2260_p2 = (!ap_const_lv24_FFFF12.is_01() || !mul_ln1118_1209_fu_2260_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF12) * sc_bigint<16>(mul_ln1118_1209_fu_2260_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1210_fu_2225_p1() {
    mul_ln1118_1210_fu_2225_p1 = sext_ln1118_1007_fu_1526032_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1210_fu_2225_p2() {
    mul_ln1118_1210_fu_2225_p2 = (!ap_const_lv24_53.is_01() || !mul_ln1118_1210_fu_2225_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_53) * sc_bigint<16>(mul_ln1118_1210_fu_2225_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1211_fu_2298_p1() {
    mul_ln1118_1211_fu_2298_p1 =  (sc_lv<16>) (sext_ln1118_1009_fu_1526044_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1211_fu_2298_p2() {
    mul_ln1118_1211_fu_2298_p2 = (!ap_const_lv24_72.is_01() || !mul_ln1118_1211_fu_2298_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_72) * sc_bigint<16>(mul_ln1118_1211_fu_2298_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1212_fu_2410_p1() {
    mul_ln1118_1212_fu_2410_p1 =  (sc_lv<16>) (sext_ln1118_1013_fu_1526111_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1212_fu_2410_p2() {
    mul_ln1118_1212_fu_2410_p2 = (!ap_const_lv24_5B.is_01() || !mul_ln1118_1212_fu_2410_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5B) * sc_bigint<16>(mul_ln1118_1212_fu_2410_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1213_fu_1914_p1() {
    mul_ln1118_1213_fu_1914_p1 =  (sc_lv<16>) (sext_ln1118_1014_fu_1526120_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1213_fu_1914_p2() {
    mul_ln1118_1213_fu_1914_p2 = (!ap_const_lv24_FFFF1D.is_01() || !mul_ln1118_1213_fu_1914_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF1D) * sc_bigint<16>(mul_ln1118_1213_fu_1914_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1214_fu_2019_p1() {
    mul_ln1118_1214_fu_2019_p1 =  (sc_lv<16>) (sext_ln1118_1016_fu_1526132_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1214_fu_2019_p2() {
    mul_ln1118_1214_fu_2019_p2 = (!ap_const_lv24_8D.is_01() || !mul_ln1118_1214_fu_2019_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8D) * sc_bigint<16>(mul_ln1118_1214_fu_2019_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1215_fu_2020_p1() {
    mul_ln1118_1215_fu_2020_p1 =  (sc_lv<16>) (sext_ln1118_1018_fu_1526155_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1215_fu_2020_p2() {
    mul_ln1118_1215_fu_2020_p2 = (!ap_const_lv24_52.is_01() || !mul_ln1118_1215_fu_2020_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_52) * sc_bigint<16>(mul_ln1118_1215_fu_2020_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1216_fu_1917_p1() {
    mul_ln1118_1216_fu_1917_p1 =  (sc_lv<16>) (sext_ln1118_1019_fu_1526171_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1216_fu_1917_p2() {
    mul_ln1118_1216_fu_1917_p2 = (!ap_const_lv24_5C.is_01() || !mul_ln1118_1216_fu_1917_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5C) * sc_bigint<16>(mul_ln1118_1216_fu_1917_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1217_fu_2126_p1() {
    mul_ln1118_1217_fu_2126_p1 =  (sc_lv<16>) (sext_ln1118_1021_fu_1526193_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1217_fu_2126_p2() {
    mul_ln1118_1217_fu_2126_p2 = (!ap_const_lv24_FFFE6C.is_01() || !mul_ln1118_1217_fu_2126_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE6C) * sc_bigint<16>(mul_ln1118_1217_fu_2126_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1218_fu_1919_p1() {
    mul_ln1118_1218_fu_1919_p1 = sext_ln708_439_fu_1526206_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1218_fu_1919_p2() {
    mul_ln1118_1218_fu_1919_p2 = (!ap_const_lv21_1FFFF3.is_01() || !mul_ln1118_1218_fu_1919_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(mul_ln1118_1218_fu_1919_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1219_fu_2128_p1() {
    mul_ln1118_1219_fu_2128_p1 =  (sc_lv<16>) (sext_ln1118_1029_fu_1526310_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1219_fu_2128_p2() {
    mul_ln1118_1219_fu_2128_p2 = (!ap_const_lv24_FFFFB7.is_01() || !mul_ln1118_1219_fu_2128_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB7) * sc_bigint<16>(mul_ln1118_1219_fu_2128_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1220_fu_2025_p1() {
    mul_ln1118_1220_fu_2025_p1 =  (sc_lv<16>) (sext_ln1118_1030_fu_1526328_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1220_fu_2025_p2() {
    mul_ln1118_1220_fu_2025_p2 = (!ap_const_lv24_FFFEBA.is_01() || !mul_ln1118_1220_fu_2025_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEBA) * sc_bigint<16>(mul_ln1118_1220_fu_2025_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1221_fu_1922_p1() {
    mul_ln1118_1221_fu_1922_p1 =  (sc_lv<16>) (sext_ln1118_998_fu_1525892_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1221_fu_1922_p2() {
    mul_ln1118_1221_fu_1922_p2 = (!ap_const_lv24_FFFF5E.is_01() || !mul_ln1118_1221_fu_1922_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF5E) * sc_bigint<16>(mul_ln1118_1221_fu_1922_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1222_fu_1923_p1() {
    mul_ln1118_1222_fu_1923_p1 =  (sc_lv<16>) (sext_ln1118_999_fu_1525909_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1222_fu_1923_p2() {
    mul_ln1118_1222_fu_1923_p2 = (!ap_const_lv24_FFFFA5.is_01() || !mul_ln1118_1222_fu_1923_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA5) * sc_bigint<16>(mul_ln1118_1222_fu_1923_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1224_fu_1925_p1() {
    mul_ln1118_1224_fu_1925_p1 =  (sc_lv<16>) (sext_ln1118_1004_fu_1525990_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1224_fu_1925_p2() {
    mul_ln1118_1224_fu_1925_p2 = (!ap_const_lv24_47.is_01() || !mul_ln1118_1224_fu_1925_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_47) * sc_bigint<16>(mul_ln1118_1224_fu_1925_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1227_fu_2120_p1() {
    mul_ln1118_1227_fu_2120_p1 =  (sc_lv<16>) (sext_ln1118_1013_fu_1526111_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1227_fu_2120_p2() {
    mul_ln1118_1227_fu_2120_p2 = (!ap_const_lv24_4F.is_01() || !mul_ln1118_1227_fu_2120_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_4F) * sc_bigint<16>(mul_ln1118_1227_fu_2120_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1230_fu_2099_p1() {
    mul_ln1118_1230_fu_2099_p1 = sext_ln1118_1020_fu_1526188_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1230_fu_2099_p2() {
    mul_ln1118_1230_fu_2099_p2 = (!ap_const_lv22_1A.is_01() || !mul_ln1118_1230_fu_2099_p1.read().is_01())? sc_lv<22>(): sc_biguint<22>(ap_const_lv22_1A) * sc_bigint<16>(mul_ln1118_1230_fu_2099_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1231_fu_2136_p1() {
    mul_ln1118_1231_fu_2136_p1 =  (sc_lv<16>) (sext_ln1118_1026_fu_1526278_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1231_fu_2136_p2() {
    mul_ln1118_1231_fu_2136_p2 = (!ap_const_lv24_FFFF96.is_01() || !mul_ln1118_1231_fu_2136_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF96) * sc_bigint<16>(mul_ln1118_1231_fu_2136_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1232_fu_2089_p1() {
    mul_ln1118_1232_fu_2089_p1 =  (sc_lv<16>) (sext_ln1118_1029_fu_1526310_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1232_fu_2089_p2() {
    mul_ln1118_1232_fu_2089_p2 = (!ap_const_lv24_FFFEEC.is_01() || !mul_ln1118_1232_fu_2089_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEEC) * sc_bigint<16>(mul_ln1118_1232_fu_2089_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1233_fu_2054_p1() {
    mul_ln1118_1233_fu_2054_p1 =  (sc_lv<16>) (sext_ln1118_1030_fu_1526328_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1233_fu_2054_p2() {
    mul_ln1118_1233_fu_2054_p2 = (!ap_const_lv24_58.is_01() || !mul_ln1118_1233_fu_2054_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_58) * sc_bigint<16>(mul_ln1118_1233_fu_2054_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1234_fu_2127_p1() {
    mul_ln1118_1234_fu_2127_p1 =  (sc_lv<16>) (sext_ln1118_998_fu_1525892_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1234_fu_2127_p2() {
    mul_ln1118_1234_fu_2127_p2 = (!ap_const_lv24_FFFE55.is_01() || !mul_ln1118_1234_fu_2127_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE55) * sc_bigint<16>(mul_ln1118_1234_fu_2127_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1236_fu_2307_p1() {
    mul_ln1118_1236_fu_2307_p1 =  (sc_lv<16>) (sext_ln1118_1002_fu_1525966_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1236_fu_2307_p2() {
    mul_ln1118_1236_fu_2307_p2 = (!ap_const_lv24_68.is_01() || !mul_ln1118_1236_fu_2307_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_68) * sc_bigint<16>(mul_ln1118_1236_fu_2307_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1237_fu_2412_p1() {
    mul_ln1118_1237_fu_2412_p1 =  (sc_lv<16>) (sext_ln1118_1004_fu_1525990_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1237_fu_2412_p2() {
    mul_ln1118_1237_fu_2412_p2 = (!ap_const_lv24_FFFF5F.is_01() || !mul_ln1118_1237_fu_2412_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF5F) * sc_bigint<16>(mul_ln1118_1237_fu_2412_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1238_fu_2309_p1() {
    mul_ln1118_1238_fu_2309_p1 =  (sc_lv<16>) (sext_ln1118_1005_fu_1526010_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1238_fu_2309_p2() {
    mul_ln1118_1238_fu_2309_p2 = (!ap_const_lv24_C7.is_01() || !mul_ln1118_1238_fu_2309_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_C7) * sc_bigint<16>(mul_ln1118_1238_fu_2309_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1240_fu_1999_p1() {
    mul_ln1118_1240_fu_1999_p1 =  (sc_lv<16>) (sext_ln1118_1013_fu_1526111_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1240_fu_1999_p2() {
    mul_ln1118_1240_fu_1999_p2 = (!ap_const_lv24_FFFF3E.is_01() || !mul_ln1118_1240_fu_1999_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF3E) * sc_bigint<16>(mul_ln1118_1240_fu_1999_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1241_fu_2312_p1() {
    mul_ln1118_1241_fu_2312_p1 =  (sc_lv<16>) (sext_ln1118_1014_fu_1526120_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1241_fu_2312_p2() {
    mul_ln1118_1241_fu_2312_p2 = (!ap_const_lv24_FFFEBA.is_01() || !mul_ln1118_1241_fu_2312_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEBA) * sc_bigint<16>(mul_ln1118_1241_fu_2312_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1242_fu_2313_p1() {
    mul_ln1118_1242_fu_2313_p1 =  (sc_lv<16>) (sext_ln1118_1016_fu_1526132_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1242_fu_2313_p2() {
    mul_ln1118_1242_fu_2313_p2 = (!ap_const_lv24_FFFFAF.is_01() || !mul_ln1118_1242_fu_2313_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFAF) * sc_bigint<16>(mul_ln1118_1242_fu_2313_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1243_fu_2314_p1() {
    mul_ln1118_1243_fu_2314_p1 =  (sc_lv<16>) (sext_ln1118_1021_fu_1526193_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1243_fu_2314_p2() {
    mul_ln1118_1243_fu_2314_p2 = (!ap_const_lv24_8E.is_01() || !mul_ln1118_1243_fu_2314_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8E) * sc_bigint<16>(mul_ln1118_1243_fu_2314_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1244_fu_2315_p1() {
    mul_ln1118_1244_fu_2315_p1 =  (sc_lv<16>) (sext_ln1118_1026_fu_1526278_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1244_fu_2315_p2() {
    mul_ln1118_1244_fu_2315_p2 = (!ap_const_lv24_FFFE18.is_01() || !mul_ln1118_1244_fu_2315_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE18) * sc_bigint<16>(mul_ln1118_1244_fu_2315_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1245_fu_2420_p1() {
    mul_ln1118_1245_fu_2420_p1 =  (sc_lv<16>) (sext_ln1118_1027_fu_1526285_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1245_fu_2420_p2() {
    mul_ln1118_1245_fu_2420_p2 = (!ap_const_lv24_43.is_01() || !mul_ln1118_1245_fu_2420_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_43) * sc_bigint<16>(mul_ln1118_1245_fu_2420_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1246_fu_2294_p1() {
    mul_ln1118_1246_fu_2294_p1 =  (sc_lv<16>) (sext_ln1118_1029_fu_1526310_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1246_fu_2294_p2() {
    mul_ln1118_1246_fu_2294_p2 = (!ap_const_lv24_FFFF11.is_01() || !mul_ln1118_1246_fu_2294_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF11) * sc_bigint<16>(mul_ln1118_1246_fu_2294_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1247_fu_2006_p1() {
    mul_ln1118_1247_fu_2006_p1 =  (sc_lv<16>) (sext_ln1118_1030_fu_1526328_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1247_fu_2006_p2() {
    mul_ln1118_1247_fu_2006_p2 = (!ap_const_lv24_FFFF64.is_01() || !mul_ln1118_1247_fu_2006_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF64) * sc_bigint<16>(mul_ln1118_1247_fu_2006_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1248_fu_1935_p1() {
    mul_ln1118_1248_fu_1935_p1 =  (sc_lv<16>) (sext_ln1118_997_fu_1525886_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1248_fu_1935_p2() {
    mul_ln1118_1248_fu_1935_p2 = (!ap_const_lv23_39.is_01() || !mul_ln1118_1248_fu_1935_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_39) * sc_bigint<16>(mul_ln1118_1248_fu_1935_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1249_fu_1924_p1() {
    mul_ln1118_1249_fu_1924_p1 =  (sc_lv<16>) (sext_ln1118_999_fu_1525909_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1249_fu_1924_p2() {
    mul_ln1118_1249_fu_1924_p2 = (!ap_const_lv24_5C.is_01() || !mul_ln1118_1249_fu_1924_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5C) * sc_bigint<16>(mul_ln1118_1249_fu_1924_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1251_fu_1938_p1() {
    mul_ln1118_1251_fu_1938_p1 =  (sc_lv<16>) (sext_ln1118_1005_fu_1526010_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1251_fu_1938_p2() {
    mul_ln1118_1251_fu_1938_p2 = (!ap_const_lv24_7A.is_01() || !mul_ln1118_1251_fu_1938_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7A) * sc_bigint<16>(mul_ln1118_1251_fu_1938_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1253_fu_1952_p1() {
    mul_ln1118_1253_fu_1952_p1 =  (sc_lv<16>) (sext_ln1118_1009_fu_1526044_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1253_fu_1952_p2() {
    mul_ln1118_1253_fu_1952_p2 = (!ap_const_lv24_FFFF98.is_01() || !mul_ln1118_1253_fu_1952_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF98) * sc_bigint<16>(mul_ln1118_1253_fu_1952_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1254_fu_1941_p1() {
    mul_ln1118_1254_fu_1941_p1 =  (sc_lv<16>) (sext_ln1118_1012_fu_1526095_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1254_fu_1941_p2() {
    mul_ln1118_1254_fu_1941_p2 = (!ap_const_lv24_FFFF93.is_01() || !mul_ln1118_1254_fu_1941_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF93) * sc_bigint<16>(mul_ln1118_1254_fu_1941_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1255_fu_1942_p1() {
    mul_ln1118_1255_fu_1942_p1 =  (sc_lv<16>) (sext_ln1118_1013_fu_1526111_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1255_fu_1942_p2() {
    mul_ln1118_1255_fu_1942_p2 = (!ap_const_lv24_75.is_01() || !mul_ln1118_1255_fu_1942_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_75) * sc_bigint<16>(mul_ln1118_1255_fu_1942_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1256_fu_1943_p1() {
    mul_ln1118_1256_fu_1943_p1 =  (sc_lv<16>) (sext_ln1118_1016_fu_1526132_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1256_fu_1943_p2() {
    mul_ln1118_1256_fu_1943_p2 = (!ap_const_lv24_FFFEF9.is_01() || !mul_ln1118_1256_fu_1943_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEF9) * sc_bigint<16>(mul_ln1118_1256_fu_1943_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1257_fu_1932_p1() {
    mul_ln1118_1257_fu_1932_p1 =  (sc_lv<16>) (sext_ln1118_1019_fu_1526171_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1257_fu_1932_p2() {
    mul_ln1118_1257_fu_1932_p2 = (!ap_const_lv24_7B.is_01() || !mul_ln1118_1257_fu_1932_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_7B) * sc_bigint<16>(mul_ln1118_1257_fu_1932_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1258_fu_1957_p1() {
    mul_ln1118_1258_fu_1957_p1 =  (sc_lv<16>) (sext_ln1118_1021_fu_1526193_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1258_fu_1957_p2() {
    mul_ln1118_1258_fu_1957_p2 = (!ap_const_lv24_FFFF85.is_01() || !mul_ln1118_1258_fu_1957_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF85) * sc_bigint<16>(mul_ln1118_1258_fu_1957_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1260_fu_2181_p1() {
    mul_ln1118_1260_fu_2181_p1 = sext_ln1118_1022_fu_1526225_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1260_fu_2181_p2() {
    mul_ln1118_1260_fu_2181_p2 = (!ap_const_lv24_FFFECE.is_01() || !mul_ln1118_1260_fu_2181_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFECE) * sc_bigint<16>(mul_ln1118_1260_fu_2181_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1261_fu_2390_p1() {
    mul_ln1118_1261_fu_2390_p1 =  (sc_lv<16>) (sext_ln1118_1027_fu_1526285_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1261_fu_2390_p2() {
    mul_ln1118_1261_fu_2390_p2 = (!ap_const_lv24_BE.is_01() || !mul_ln1118_1261_fu_2390_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_BE) * sc_bigint<16>(mul_ln1118_1261_fu_2390_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1262_fu_2368_p1() {
    mul_ln1118_1262_fu_2368_p1 =  (sc_lv<16>) (sext_ln1118_1030_fu_1526328_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1262_fu_2368_p2() {
    mul_ln1118_1262_fu_2368_p2 = (!ap_const_lv24_5E.is_01() || !mul_ln1118_1262_fu_2368_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5E) * sc_bigint<16>(mul_ln1118_1262_fu_2368_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1263_fu_2392_p1() {
    mul_ln1118_1263_fu_2392_p1 = sext_ln1118_1065_fu_1527705_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1263_fu_2392_p2() {
    mul_ln1118_1263_fu_2392_p2 = (!ap_const_lv24_73.is_01() || !mul_ln1118_1263_fu_2392_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_73) * sc_bigint<16>(mul_ln1118_1263_fu_2392_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1264_fu_2393_p1() {
    mul_ln1118_1264_fu_2393_p1 = data_162_V_read.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1264_fu_2393_p2() {
    mul_ln1118_1264_fu_2393_p2 = (!ap_const_lv24_FFFE31.is_01() || !mul_ln1118_1264_fu_2393_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE31) * sc_bigint<16>(mul_ln1118_1264_fu_2393_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1265_fu_1897_p1() {
    mul_ln1118_1265_fu_1897_p1 = sext_ln1118_1070_fu_1527735_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1265_fu_1897_p2() {
    mul_ln1118_1265_fu_1897_p2 = (!ap_const_lv22_3FFFEB.is_01() || !mul_ln1118_1265_fu_1897_p1.read().is_01())? sc_lv<22>(): sc_bigint<22>(ap_const_lv22_3FFFEB) * sc_bigint<16>(mul_ln1118_1265_fu_1897_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1266_fu_2002_p1() {
    mul_ln1118_1266_fu_2002_p1 = sext_ln1118_1072_fu_1527754_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1266_fu_2002_p2() {
    mul_ln1118_1266_fu_2002_p2 = (!ap_const_lv24_FFFDB7.is_01() || !mul_ln1118_1266_fu_2002_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFDB7) * sc_bigint<16>(mul_ln1118_1266_fu_2002_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1276_fu_2396_p1() {
    mul_ln1118_1276_fu_2396_p1 = sext_ln1118_1095_fu_1527825_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1276_fu_2396_p2() {
    mul_ln1118_1276_fu_2396_p2 = (!ap_const_lv23_7FFFCC.is_01() || !mul_ln1118_1276_fu_2396_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCC) * sc_bigint<16>(mul_ln1118_1276_fu_2396_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1277_fu_2004_p1() {
    mul_ln1118_1277_fu_2004_p1 =  (sc_lv<16>) (sext_ln1118_1096_fu_1527844_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1277_fu_2004_p2() {
    mul_ln1118_1277_fu_2004_p2 = (!ap_const_lv24_FFFF4E.is_01() || !mul_ln1118_1277_fu_2004_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF4E) * sc_bigint<16>(mul_ln1118_1277_fu_2004_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1278_fu_1901_p1() {
    mul_ln1118_1278_fu_1901_p1 = sext_ln1118_1098_fu_1527870_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1278_fu_1901_p2() {
    mul_ln1118_1278_fu_1901_p2 = (!ap_const_lv23_7FFFD9.is_01() || !mul_ln1118_1278_fu_1901_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD9) * sc_bigint<16>(mul_ln1118_1278_fu_1901_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1290_fu_2399_p1() {
    mul_ln1118_1290_fu_2399_p1 =  (sc_lv<16>) (sext_ln1118_1096_fu_1527844_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1290_fu_2399_p2() {
    mul_ln1118_1290_fu_2399_p2 = (!ap_const_lv24_FFFFB7.is_01() || !mul_ln1118_1290_fu_2399_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB7) * sc_bigint<16>(mul_ln1118_1290_fu_2399_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1291_fu_2341_p1() {
    mul_ln1118_1291_fu_2341_p1 =  (sc_lv<16>) (sext_ln1118_1097_fu_1527862_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1291_fu_2341_p2() {
    mul_ln1118_1291_fu_2341_p2 = (!ap_const_lv24_FFFEBA.is_01() || !mul_ln1118_1291_fu_2341_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEBA) * sc_bigint<16>(mul_ln1118_1291_fu_2341_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1302_fu_2342_p1() {
    mul_ln1118_1302_fu_2342_p1 =  (sc_lv<16>) (sext_ln1118_1093_fu_1527813_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1302_fu_2342_p2() {
    mul_ln1118_1302_fu_2342_p2 = (!ap_const_lv24_FFFF96.is_01() || !mul_ln1118_1302_fu_2342_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF96) * sc_bigint<16>(mul_ln1118_1302_fu_2342_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1303_fu_2343_p1() {
    mul_ln1118_1303_fu_2343_p1 =  (sc_lv<16>) (sext_ln1118_1096_fu_1527844_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1303_fu_2343_p2() {
    mul_ln1118_1303_fu_2343_p2 = (!ap_const_lv24_FFFEEC.is_01() || !mul_ln1118_1303_fu_2343_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEEC) * sc_bigint<16>(mul_ln1118_1303_fu_2343_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1304_fu_2356_p1() {
    mul_ln1118_1304_fu_2356_p1 =  (sc_lv<16>) (sext_ln1118_1097_fu_1527862_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1304_fu_2356_p2() {
    mul_ln1118_1304_fu_2356_p2 = (!ap_const_lv24_58.is_01() || !mul_ln1118_1304_fu_2356_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_58) * sc_bigint<16>(mul_ln1118_1304_fu_2356_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1315_fu_2333_p1() {
    mul_ln1118_1315_fu_2333_p1 =  (sc_lv<16>) (sext_ln1118_1093_fu_1527813_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1315_fu_2333_p2() {
    mul_ln1118_1315_fu_2333_p2 = (!ap_const_lv24_FFFE18.is_01() || !mul_ln1118_1315_fu_2333_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE18) * sc_bigint<16>(mul_ln1118_1315_fu_2333_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1316_fu_2346_p1() {
    mul_ln1118_1316_fu_2346_p1 =  (sc_lv<16>) (sext_ln1118_1094_fu_1527819_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1316_fu_2346_p2() {
    mul_ln1118_1316_fu_2346_p2 = (!ap_const_lv24_43.is_01() || !mul_ln1118_1316_fu_2346_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_43) * sc_bigint<16>(mul_ln1118_1316_fu_2346_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1317_fu_2359_p1() {
    mul_ln1118_1317_fu_2359_p1 =  (sc_lv<16>) (sext_ln1118_1096_fu_1527844_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1317_fu_2359_p2() {
    mul_ln1118_1317_fu_2359_p2 = (!ap_const_lv24_FFFF11.is_01() || !mul_ln1118_1317_fu_2359_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF11) * sc_bigint<16>(mul_ln1118_1317_fu_2359_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1318_fu_2360_p1() {
    mul_ln1118_1318_fu_2360_p1 =  (sc_lv<16>) (sext_ln1118_1097_fu_1527862_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1318_fu_2360_p2() {
    mul_ln1118_1318_fu_2360_p2 = (!ap_const_lv24_FFFF64.is_01() || !mul_ln1118_1318_fu_2360_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF64) * sc_bigint<16>(mul_ln1118_1318_fu_2360_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1332_fu_2361_p1() {
    mul_ln1118_1332_fu_2361_p1 =  (sc_lv<16>) (sext_ln1118_1094_fu_1527819_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1332_fu_2361_p2() {
    mul_ln1118_1332_fu_2361_p2 = (!ap_const_lv24_BE.is_01() || !mul_ln1118_1332_fu_2361_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_BE) * sc_bigint<16>(mul_ln1118_1332_fu_2361_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1333_fu_2350_p1() {
    mul_ln1118_1333_fu_2350_p1 =  (sc_lv<16>) (sext_ln1118_1097_fu_1527862_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1333_fu_2350_p2() {
    mul_ln1118_1333_fu_2350_p2 = (!ap_const_lv24_5E.is_01() || !mul_ln1118_1333_fu_2350_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5E) * sc_bigint<16>(mul_ln1118_1333_fu_2350_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1347_fu_2363_p1() {
    mul_ln1118_1347_fu_2363_p1 = sext_ln1118_1162_fu_1528281_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1347_fu_2363_p2() {
    mul_ln1118_1347_fu_2363_p2 = (!ap_const_lv23_7FFFCC.is_01() || !mul_ln1118_1347_fu_2363_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCC) * sc_bigint<16>(mul_ln1118_1347_fu_2363_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1348_fu_2364_p1() {
    mul_ln1118_1348_fu_2364_p1 =  (sc_lv<16>) (sext_ln1118_1163_fu_1528300_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1348_fu_2364_p2() {
    mul_ln1118_1348_fu_2364_p2 = (!ap_const_lv24_FFFF4E.is_01() || !mul_ln1118_1348_fu_2364_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF4E) * sc_bigint<16>(mul_ln1118_1348_fu_2364_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1349_fu_2366_p1() {
    mul_ln1118_1349_fu_2366_p1 = sext_ln1118_1165_fu_1528326_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1349_fu_2366_p2() {
    mul_ln1118_1349_fu_2366_p2 = (!ap_const_lv23_7FFFD9.is_01() || !mul_ln1118_1349_fu_2366_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD9) * sc_bigint<16>(mul_ln1118_1349_fu_2366_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1361_fu_2367_p1() {
    mul_ln1118_1361_fu_2367_p1 =  (sc_lv<16>) (sext_ln1118_1163_fu_1528300_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1361_fu_2367_p2() {
    mul_ln1118_1361_fu_2367_p2 = (!ap_const_lv24_FFFFB7.is_01() || !mul_ln1118_1361_fu_2367_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB7) * sc_bigint<16>(mul_ln1118_1361_fu_2367_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1362_fu_2179_p1() {
    mul_ln1118_1362_fu_2179_p1 =  (sc_lv<16>) (sext_ln1118_1164_fu_1528318_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1362_fu_2179_p2() {
    mul_ln1118_1362_fu_2179_p2 = (!ap_const_lv24_FFFEBA.is_01() || !mul_ln1118_1362_fu_2179_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEBA) * sc_bigint<16>(mul_ln1118_1362_fu_2179_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1373_fu_2239_p1() {
    mul_ln1118_1373_fu_2239_p1 =  (sc_lv<16>) (sext_ln1118_1160_fu_1528269_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1373_fu_2239_p2() {
    mul_ln1118_1373_fu_2239_p2 = (!ap_const_lv24_FFFF96.is_01() || !mul_ln1118_1373_fu_2239_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF96) * sc_bigint<16>(mul_ln1118_1373_fu_2239_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1374_fu_1977_p1() {
    mul_ln1118_1374_fu_1977_p1 =  (sc_lv<16>) (sext_ln1118_1163_fu_1528300_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1374_fu_1977_p2() {
    mul_ln1118_1374_fu_1977_p2 = (!ap_const_lv24_FFFEEC.is_01() || !mul_ln1118_1374_fu_1977_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEEC) * sc_bigint<16>(mul_ln1118_1374_fu_1977_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1375_fu_1874_p1() {
    mul_ln1118_1375_fu_1874_p1 =  (sc_lv<16>) (sext_ln1118_1164_fu_1528318_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1375_fu_1874_p2() {
    mul_ln1118_1375_fu_1874_p2 = (!ap_const_lv24_58.is_01() || !mul_ln1118_1375_fu_1874_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_58) * sc_bigint<16>(mul_ln1118_1375_fu_1874_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1386_fu_2083_p1() {
    mul_ln1118_1386_fu_2083_p1 =  (sc_lv<16>) (sext_ln1118_1160_fu_1528269_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1386_fu_2083_p2() {
    mul_ln1118_1386_fu_2083_p2 = (!ap_const_lv24_FFFE18.is_01() || !mul_ln1118_1386_fu_2083_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE18) * sc_bigint<16>(mul_ln1118_1386_fu_2083_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1387_fu_1980_p1() {
    mul_ln1118_1387_fu_1980_p1 =  (sc_lv<16>) (sext_ln1118_1161_fu_1528275_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1387_fu_1980_p2() {
    mul_ln1118_1387_fu_1980_p2 = (!ap_const_lv24_43.is_01() || !mul_ln1118_1387_fu_1980_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_43) * sc_bigint<16>(mul_ln1118_1387_fu_1980_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1388_fu_1877_p1() {
    mul_ln1118_1388_fu_1877_p1 =  (sc_lv<16>) (sext_ln1118_1163_fu_1528300_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1388_fu_1877_p2() {
    mul_ln1118_1388_fu_1877_p2 = (!ap_const_lv24_FFFF11.is_01() || !mul_ln1118_1388_fu_1877_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF11) * sc_bigint<16>(mul_ln1118_1388_fu_1877_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1389_fu_1982_p1() {
    mul_ln1118_1389_fu_1982_p1 =  (sc_lv<16>) (sext_ln1118_1164_fu_1528318_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1389_fu_1982_p2() {
    mul_ln1118_1389_fu_1982_p2 = (!ap_const_lv24_FFFF64.is_01() || !mul_ln1118_1389_fu_1982_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF64) * sc_bigint<16>(mul_ln1118_1389_fu_1982_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1403_fu_2087_p1() {
    mul_ln1118_1403_fu_2087_p1 =  (sc_lv<16>) (sext_ln1118_1161_fu_1528275_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1403_fu_2087_p2() {
    mul_ln1118_1403_fu_2087_p2 = (!ap_const_lv24_BE.is_01() || !mul_ln1118_1403_fu_2087_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_BE) * sc_bigint<16>(mul_ln1118_1403_fu_2087_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1404_fu_2192_p1() {
    mul_ln1118_1404_fu_2192_p1 =  (sc_lv<16>) (sext_ln1118_1164_fu_1528318_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1404_fu_2192_p2() {
    mul_ln1118_1404_fu_2192_p2 = (!ap_const_lv24_5E.is_01() || !mul_ln1118_1404_fu_2192_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5E) * sc_bigint<16>(mul_ln1118_1404_fu_2192_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_696_fu_1959_p1() {
    mul_ln1118_696_fu_1959_p1 =  (sc_lv<16>) (sext_ln1118_533_fu_1513133_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_696_fu_1959_p2() {
    mul_ln1118_696_fu_1959_p2 = (!ap_const_lv24_FFFE31.is_01() || !mul_ln1118_696_fu_1959_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFE31) * sc_bigint<16>(mul_ln1118_696_fu_1959_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_698_fu_2134_p1() {
    mul_ln1118_698_fu_2134_p1 =  (sc_lv<16>) (sext_ln1118_536_fu_1513167_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_698_fu_2134_p2() {
    mul_ln1118_698_fu_2134_p2 = (!ap_const_lv24_FFFDB7.is_01() || !mul_ln1118_698_fu_2134_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFDB7) * sc_bigint<16>(mul_ln1118_698_fu_2134_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_700_fu_1928_p1() {
    mul_ln1118_700_fu_1928_p1 = sext_ln1118_543_fu_1513252_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_700_fu_1928_p2() {
    mul_ln1118_700_fu_1928_p2 = (!ap_const_lv24_8B.is_01() || !mul_ln1118_700_fu_1928_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8B) * sc_bigint<16>(mul_ln1118_700_fu_1928_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_701_fu_2195_p1() {
    mul_ln1118_701_fu_2195_p1 =  (sc_lv<16>) (sext_ln1118_544_fu_1513268_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_701_fu_2195_p2() {
    mul_ln1118_701_fu_2195_p2 = (!ap_const_lv24_BD.is_01() || !mul_ln1118_701_fu_2195_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_BD) * sc_bigint<16>(mul_ln1118_701_fu_2195_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_702_fu_2242_p1() {
    mul_ln1118_702_fu_2242_p1 =  (sc_lv<16>) (sext_ln1118_545_fu_1513287_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_702_fu_2242_p2() {
    mul_ln1118_702_fu_2242_p2 = (!ap_const_lv24_64.is_01() || !mul_ln1118_702_fu_2242_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_64) * sc_bigint<16>(mul_ln1118_702_fu_2242_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_703_fu_1931_p1() {
    mul_ln1118_703_fu_1931_p1 =  (sc_lv<16>) (sext_ln1118_547_fu_1513309_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_703_fu_1931_p2() {
    mul_ln1118_703_fu_1931_p2 = (!ap_const_lv24_FFFF18.is_01() || !mul_ln1118_703_fu_1931_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF18) * sc_bigint<16>(mul_ln1118_703_fu_1931_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_704_fu_2198_p1() {
    mul_ln1118_704_fu_2198_p1 =  (sc_lv<16>) (sext_ln1118_549_fu_1513332_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_704_fu_2198_p2() {
    mul_ln1118_704_fu_2198_p2 = (!ap_const_lv24_FFFEE5.is_01() || !mul_ln1118_704_fu_2198_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEE5) * sc_bigint<16>(mul_ln1118_704_fu_2198_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_705_fu_2199_p1() {
    mul_ln1118_705_fu_2199_p1 =  (sc_lv<16>) (sext_ln1118_550_fu_1513348_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_705_fu_2199_p2() {
    mul_ln1118_705_fu_2199_p2 = (!ap_const_lv24_8D.is_01() || !mul_ln1118_705_fu_2199_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_8D) * sc_bigint<16>(mul_ln1118_705_fu_2199_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_706_fu_2224_p1() {
    mul_ln1118_706_fu_2224_p1 =  (sc_lv<16>) (sext_ln1118_552_fu_1513370_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_706_fu_2224_p2() {
    mul_ln1118_706_fu_2224_p2 = (!ap_const_lv24_FFFFA9.is_01() || !mul_ln1118_706_fu_2224_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFA9) * sc_bigint<16>(mul_ln1118_706_fu_2224_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_708_fu_2190_p1() {
    mul_ln1118_708_fu_2190_p1 = sext_ln1118_559_fu_1513478_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_708_fu_2190_p2() {
    mul_ln1118_708_fu_2190_p2 = (!ap_const_lv23_7FFFCC.is_01() || !mul_ln1118_708_fu_2190_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFCC) * sc_bigint<16>(mul_ln1118_708_fu_2190_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_709_fu_2203_p1() {
    mul_ln1118_709_fu_2203_p1 =  (sc_lv<16>) (sext_ln1118_560_fu_1513497_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_709_fu_2203_p2() {
    mul_ln1118_709_fu_2203_p2 = (!ap_const_lv24_FFFF4E.is_01() || !mul_ln1118_709_fu_2203_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF4E) * sc_bigint<16>(mul_ln1118_709_fu_2203_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_710_fu_2156_p1() {
    mul_ln1118_710_fu_2156_p1 = sext_ln1118_562_fu_1513523_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_710_fu_2156_p2() {
    mul_ln1118_710_fu_2156_p2 = (!ap_const_lv23_7FFFD9.is_01() || !mul_ln1118_710_fu_2156_p1.read().is_01())? sc_lv<23>(): sc_bigint<23>(ap_const_lv23_7FFFD9) * sc_bigint<16>(mul_ln1118_710_fu_2156_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_711_fu_2217_p1() {
    mul_ln1118_711_fu_2217_p1 =  (sc_lv<16>) (sext_ln1118_fu_1513053_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_711_fu_2217_p2() {
    mul_ln1118_711_fu_2217_p2 = (!ap_const_lv23_25.is_01() || !mul_ln1118_711_fu_2217_p1.read().is_01())? sc_lv<23>(): sc_biguint<23>(ap_const_lv23_25) * sc_bigint<16>(mul_ln1118_711_fu_2217_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_713_fu_2207_p1() {
    mul_ln1118_713_fu_2207_p1 =  (sc_lv<16>) (sext_ln1118_538_fu_1513189_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_713_fu_2207_p2() {
    mul_ln1118_713_fu_2207_p2 = (!ap_const_lv24_53.is_01() || !mul_ln1118_713_fu_2207_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_53) * sc_bigint<16>(mul_ln1118_713_fu_2207_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_715_fu_2221_p1() {
    mul_ln1118_715_fu_2221_p1 =  (sc_lv<16>) (sext_ln1118_544_fu_1513268_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_715_fu_2221_p2() {
    mul_ln1118_715_fu_2221_p2 = (!ap_const_lv24_5B.is_01() || !mul_ln1118_715_fu_2221_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5B) * sc_bigint<16>(mul_ln1118_715_fu_2221_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_716_fu_2210_p1() {
    mul_ln1118_716_fu_2210_p1 =  (sc_lv<16>) (sext_ln1118_545_fu_1513287_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_716_fu_2210_p2() {
    mul_ln1118_716_fu_2210_p2 = (!ap_const_lv24_FFFF1D.is_01() || !mul_ln1118_716_fu_2210_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF1D) * sc_bigint<16>(mul_ln1118_716_fu_2210_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_718_fu_2316_p1() {
    mul_ln1118_718_fu_2316_p1 =  (sc_lv<16>) (sext_ln1118_549_fu_1513332_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_718_fu_2316_p2() {
    mul_ln1118_718_fu_2316_p2 = (!ap_const_lv24_52.is_01() || !mul_ln1118_718_fu_2316_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_52) * sc_bigint<16>(mul_ln1118_718_fu_2316_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_719_fu_2317_p1() {
    mul_ln1118_719_fu_2317_p1 =  (sc_lv<16>) (sext_ln1118_550_fu_1513348_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_719_fu_2317_p2() {
    mul_ln1118_719_fu_2317_p2 = (!ap_const_lv24_5C.is_01() || !mul_ln1118_719_fu_2317_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_5C) * sc_bigint<16>(mul_ln1118_719_fu_2317_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_721_fu_2319_p1() {
    mul_ln1118_721_fu_2319_p1 = sext_ln708_229_fu_1513393_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_721_fu_2319_p2() {
    mul_ln1118_721_fu_2319_p2 = (!ap_const_lv21_1FFFF3.is_01() || !mul_ln1118_721_fu_2319_p1.read().is_01())? sc_lv<21>(): sc_bigint<21>(ap_const_lv21_1FFFF3) * sc_bigint<16>(mul_ln1118_721_fu_2319_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_722_fu_2216_p1() {
    mul_ln1118_722_fu_2216_p1 =  (sc_lv<16>) (sext_ln1118_560_fu_1513497_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_722_fu_2216_p2() {
    mul_ln1118_722_fu_2216_p2 = (!ap_const_lv24_FFFFB7.is_01() || !mul_ln1118_722_fu_2216_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFFB7) * sc_bigint<16>(mul_ln1118_722_fu_2216_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_723_fu_2402_p1() {
    mul_ln1118_723_fu_2402_p1 =  (sc_lv<16>) (sext_ln1118_561_fu_1513515_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_723_fu_2402_p2() {
    mul_ln1118_723_fu_2402_p2 = (!ap_const_lv24_FFFEBA.is_01() || !mul_ln1118_723_fu_2402_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFEBA) * sc_bigint<16>(mul_ln1118_723_fu_2402_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_724_fu_2403_p1() {
    mul_ln1118_724_fu_2403_p1 =  (sc_lv<16>) (sext_ln1118_529_fu_1513059_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_724_fu_2403_p2() {
    mul_ln1118_724_fu_2403_p2 = (!ap_const_lv24_FFFF5E.is_01() || !mul_ln1118_724_fu_2403_p1.read().is_01())? sc_lv<24>(): sc_bigint<24>(ap_const_lv24_FFFF5E) * sc_bigint<16>(mul_ln1118_724_fu_2403_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_727_fu_2117_p1() {
    mul_ln1118_727_fu_2117_p1 =  (sc_lv<16>) (sext_ln1118_535_fu_1513157_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_727_fu_2117_p2() {
    mul_ln1118_727_fu_2117_p2 = (!ap_const_lv24_47.is_01() || !mul_ln1118_727_fu_2117_p1.read().is_01())? sc_lv<24>(): sc_biguint<24>(ap_const_lv24_47) * sc_bigint<16>(mul_ln1118_727_fu_2117_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_728_fu_2028_p1() {
    mul_ln1118_728_fu_2028_p1 = sext_ln1118_537_fu_1513184_p0.read();
}

}

