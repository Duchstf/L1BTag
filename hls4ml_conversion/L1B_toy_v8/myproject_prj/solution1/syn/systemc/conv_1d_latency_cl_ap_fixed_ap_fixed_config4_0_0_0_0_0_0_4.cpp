#include "conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1947_fu_1532255_p2() {
    add_ln703_1947_fu_1532255_p2 = (!grp_fu_1506229_p4.read().is_01() || !sext_ln703_103_fu_1532251_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506229_p4.read()) + sc_bigint<16>(sext_ln703_103_fu_1532251_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1948_fu_1532261_p2() {
    add_ln703_1948_fu_1532261_p2 = (!add_ln703_1945_fu_1532239_p2.read().is_01() || !add_ln703_1947_fu_1532255_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1945_fu_1532239_p2.read()) + sc_biguint<16>(add_ln703_1947_fu_1532255_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1949_fu_1532267_p2() {
    add_ln703_1949_fu_1532267_p2 = (!add_ln703_1943_fu_1532227_p2.read().is_01() || !add_ln703_1948_fu_1532261_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1943_fu_1532227_p2.read()) + sc_biguint<16>(add_ln703_1948_fu_1532261_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1951_fu_1529237_p2() {
    add_ln703_1951_fu_1529237_p2 = (!mult_941_V_fu_1524381_p4.read().is_01() || !mult_940_V_fu_1524371_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_941_V_fu_1524381_p4.read()) + sc_biguint<16>(mult_940_V_fu_1524371_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1952_fu_1529243_p2() {
    add_ln703_1952_fu_1529243_p2 = (!mult_945_V_fu_1524425_p1.read().is_01() || !mult_943_V_fu_1524401_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_945_V_fu_1524425_p1.read()) + sc_bigint<16>(mult_943_V_fu_1524401_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1953_fu_1532279_p2() {
    add_ln703_1953_fu_1532279_p2 = (!grp_fu_1506239_p4.read().is_01() || !add_ln703_1952_reg_1533719.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506239_p4.read()) + sc_biguint<16>(add_ln703_1952_reg_1533719.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1954_fu_1532284_p2() {
    add_ln703_1954_fu_1532284_p2 = (!add_ln703_1951_reg_1533714.read().is_01() || !add_ln703_1953_fu_1532279_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1951_reg_1533714.read()) + sc_biguint<16>(add_ln703_1953_fu_1532279_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1955_fu_1532289_p2() {
    add_ln703_1955_fu_1532289_p2 = (!mult_947_V_fu_1530844_p1.read().is_01() || !grp_fu_1506789_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_947_V_fu_1530844_p1.read()) + sc_biguint<16>(grp_fu_1506789_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1956_fu_1532295_p2() {
    add_ln703_1956_fu_1532295_p2 = (!mult_950_V_fu_1530896_p1.read().is_01() || !mult_949_V_fu_1530892_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_950_V_fu_1530896_p1.read()) + sc_bigint<16>(mult_949_V_fu_1530892_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1957_fu_1532301_p2() {
    add_ln703_1957_fu_1532301_p2 = (!mult_948_V_fu_1530888_p1.read().is_01() || !add_ln703_1956_fu_1532295_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_948_V_fu_1530888_p1.read()) + sc_biguint<16>(add_ln703_1956_fu_1532295_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1958_fu_1532307_p2() {
    add_ln703_1958_fu_1532307_p2 = (!add_ln703_1955_fu_1532289_p2.read().is_01() || !add_ln703_1957_fu_1532301_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1955_fu_1532289_p2.read()) + sc_biguint<16>(add_ln703_1957_fu_1532301_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1959_fu_1532313_p2() {
    add_ln703_1959_fu_1532313_p2 = (!add_ln703_1954_fu_1532284_p2.read().is_01() || !add_ln703_1958_fu_1532307_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1954_fu_1532284_p2.read()) + sc_biguint<16>(add_ln703_1958_fu_1532307_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1960_fu_1532319_p2() {
    add_ln703_1960_fu_1532319_p2 = (!grp_fu_1506649_p4.read().is_01() || !mult_951_V_fu_1530940_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506649_p4.read()) + sc_bigint<16>(mult_951_V_fu_1530940_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1961_fu_1532325_p2() {
    add_ln703_1961_fu_1532325_p2 = (!grp_fu_1506549_p4.read().is_01() || !mult_954_V_fu_1530972_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506549_p4.read()) + sc_bigint<16>(mult_954_V_fu_1530972_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1962_fu_1532331_p2() {
    add_ln703_1962_fu_1532331_p2 = (!grp_fu_1506539_p4.read().is_01() || !add_ln703_1961_fu_1532325_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506539_p4.read()) + sc_biguint<16>(add_ln703_1961_fu_1532325_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1963_fu_1532337_p2() {
    add_ln703_1963_fu_1532337_p2 = (!add_ln703_1960_fu_1532319_p2.read().is_01() || !add_ln703_1962_fu_1532331_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1960_fu_1532319_p2.read()) + sc_biguint<16>(add_ln703_1962_fu_1532331_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1964_fu_1532343_p2() {
    add_ln703_1964_fu_1532343_p2 = (!mult_958_V_fu_1530976_p1.read().is_01() || !grp_fu_1506399_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_958_V_fu_1530976_p1.read()) + sc_biguint<16>(grp_fu_1506399_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1965_fu_1532349_p2() {
    add_ln703_1965_fu_1532349_p2 = (!grp_fu_1506389_p4.read().is_01() || !add_ln703_1964_fu_1532343_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506389_p4.read()) + sc_biguint<16>(add_ln703_1964_fu_1532343_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1966_fu_1532355_p2() {
    add_ln703_1966_fu_1532355_p2 = (!sext_ln203_27_fu_1530841_p1.read().is_01() || !ap_const_lv9_3.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_27_fu_1530841_p1.read()) + sc_biguint<9>(ap_const_lv9_3));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1967_fu_1532365_p2() {
    add_ln703_1967_fu_1532365_p2 = (!mult_959_V_fu_1531006_p4.read().is_01() || !sext_ln703_24_fu_1532361_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_959_V_fu_1531006_p4.read()) + sc_bigint<16>(sext_ln703_24_fu_1532361_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1968_fu_1532371_p2() {
    add_ln703_1968_fu_1532371_p2 = (!add_ln703_1965_fu_1532349_p2.read().is_01() || !add_ln703_1967_fu_1532365_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1965_fu_1532349_p2.read()) + sc_biguint<16>(add_ln703_1967_fu_1532365_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1969_fu_1532377_p2() {
    add_ln703_1969_fu_1532377_p2 = (!add_ln703_1963_fu_1532337_p2.read().is_01() || !add_ln703_1968_fu_1532371_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1963_fu_1532337_p2.read()) + sc_biguint<16>(add_ln703_1968_fu_1532371_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1971_fu_1529249_p2() {
    add_ln703_1971_fu_1529249_p2 = (!mult_961_V_fu_1524439_p4.read().is_01() || !mult_960_V_fu_1524429_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_961_V_fu_1524439_p4.read()) + sc_biguint<16>(mult_960_V_fu_1524429_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1972_fu_1529255_p2() {
    add_ln703_1972_fu_1529255_p2 = (!mult_964_V_fu_1524513_p4.read().is_01() || !mult_963_V_fu_1524509_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_964_V_fu_1524513_p4.read()) + sc_bigint<16>(mult_963_V_fu_1524509_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1973_fu_1529261_p2() {
    add_ln703_1973_fu_1529261_p2 = (!mult_962_V_fu_1524477_p1.read().is_01() || !add_ln703_1972_fu_1529255_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_962_V_fu_1524477_p1.read()) + sc_biguint<16>(add_ln703_1972_fu_1529255_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1974_fu_1529267_p2() {
    add_ln703_1974_fu_1529267_p2 = (!add_ln703_1971_fu_1529249_p2.read().is_01() || !add_ln703_1973_fu_1529261_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1971_fu_1529249_p2.read()) + sc_biguint<16>(add_ln703_1973_fu_1529261_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1975_fu_1532389_p2() {
    add_ln703_1975_fu_1532389_p2 = (!grp_fu_1506409_p4.read().is_01() || !mult_965_V_fu_1531054_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506409_p4.read()) + sc_bigint<16>(mult_965_V_fu_1531054_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1976_fu_1532395_p2() {
    add_ln703_1976_fu_1532395_p2 = (!sext_ln203_169_fu_1531106_p1.read().is_01() || !sext_ln203_168_fu_1531102_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_169_fu_1531106_p1.read()) + sc_bigint<15>(sext_ln203_168_fu_1531102_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1977_fu_1532405_p2() {
    add_ln703_1977_fu_1532405_p2 = (!grp_fu_1506829_p4.read().is_01() || !sext_ln703_104_fu_1532401_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506829_p4.read()) + sc_bigint<16>(sext_ln703_104_fu_1532401_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1978_fu_1532411_p2() {
    add_ln703_1978_fu_1532411_p2 = (!add_ln703_1975_fu_1532389_p2.read().is_01() || !add_ln703_1977_fu_1532405_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1975_fu_1532389_p2.read()) + sc_biguint<16>(add_ln703_1977_fu_1532405_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1979_fu_1532417_p2() {
    add_ln703_1979_fu_1532417_p2 = (!add_ln703_1974_reg_1533724.read().is_01() || !add_ln703_1978_fu_1532411_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1974_reg_1533724.read()) + sc_biguint<16>(add_ln703_1978_fu_1532411_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1980_fu_1532422_p2() {
    add_ln703_1980_fu_1532422_p2 = (!grp_fu_1506579_p4.read().is_01() || !grp_fu_1506419_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506579_p4.read()) + sc_biguint<16>(grp_fu_1506419_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1981_fu_1532428_p2() {
    add_ln703_1981_fu_1532428_p2 = (!mult_974_V_fu_1531141_p1.read().is_01() || !grp_fu_1506429_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_974_V_fu_1531141_p1.read()) + sc_biguint<16>(grp_fu_1506429_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1982_fu_1532434_p2() {
    add_ln703_1982_fu_1532434_p2 = (!mult_972_V_fu_1531137_p1.read().is_01() || !add_ln703_1981_fu_1532428_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_972_V_fu_1531137_p1.read()) + sc_biguint<16>(add_ln703_1981_fu_1532428_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1983_fu_1532440_p2() {
    add_ln703_1983_fu_1532440_p2 = (!add_ln703_1980_fu_1532422_p2.read().is_01() || !add_ln703_1982_fu_1532434_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1980_fu_1532422_p2.read()) + sc_biguint<16>(add_ln703_1982_fu_1532434_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1984_fu_1532446_p2() {
    add_ln703_1984_fu_1532446_p2 = (!grp_fu_1506449_p4.read().is_01() || !grp_fu_1506949_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506449_p4.read()) + sc_biguint<16>(grp_fu_1506949_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1985_fu_1532452_p2() {
    add_ln703_1985_fu_1532452_p2 = (!mult_975_V_fu_1531145_p1.read().is_01() || !add_ln703_1984_fu_1532446_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_975_V_fu_1531145_p1.read()) + sc_biguint<16>(add_ln703_1984_fu_1532446_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1986_fu_1532458_p2() {
    add_ln703_1986_fu_1532458_p2 = (!sext_ln203_170_fu_1531149_p1.read().is_01() || !ap_const_lv15_1E.is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_170_fu_1531149_p1.read()) + sc_biguint<15>(ap_const_lv15_1E));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1987_fu_1532468_p2() {
    add_ln703_1987_fu_1532468_p2 = (!grp_fu_1506709_p4.read().is_01() || !sext_ln703_105_fu_1532464_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506709_p4.read()) + sc_bigint<16>(sext_ln703_105_fu_1532464_p1.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1988_fu_1532474_p2() {
    add_ln703_1988_fu_1532474_p2 = (!add_ln703_1985_fu_1532452_p2.read().is_01() || !add_ln703_1987_fu_1532468_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1985_fu_1532452_p2.read()) + sc_biguint<16>(add_ln703_1987_fu_1532468_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1989_fu_1532480_p2() {
    add_ln703_1989_fu_1532480_p2 = (!add_ln703_1983_fu_1532440_p2.read().is_01() || !add_ln703_1988_fu_1532474_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1983_fu_1532440_p2.read()) + sc_biguint<16>(add_ln703_1988_fu_1532474_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1991_fu_1529273_p2() {
    add_ln703_1991_fu_1529273_p2 = (!mult_981_V_fu_1524553_p1.read().is_01() || !mult_980_V_fu_1524533_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_981_V_fu_1524553_p1.read()) + sc_biguint<16>(mult_980_V_fu_1524533_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1992_fu_1529279_p2() {
    add_ln703_1992_fu_1529279_p2 = (!mult_984_V_fu_1524607_p1.read().is_01() || !mult_983_V_fu_1524557_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_984_V_fu_1524607_p1.read()) + sc_biguint<16>(mult_983_V_fu_1524557_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1993_fu_1532492_p2() {
    add_ln703_1993_fu_1532492_p2 = (!grp_fu_1506719_p4.read().is_01() || !add_ln703_1992_reg_1533734.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506719_p4.read()) + sc_biguint<16>(add_ln703_1992_reg_1533734.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1994_fu_1532497_p2() {
    add_ln703_1994_fu_1532497_p2 = (!add_ln703_1991_reg_1533729.read().is_01() || !add_ln703_1993_fu_1532492_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1991_reg_1533729.read()) + sc_biguint<16>(add_ln703_1993_fu_1532492_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1995_fu_1532502_p2() {
    add_ln703_1995_fu_1532502_p2 = (!mult_986_V_fu_1531153_p1.read().is_01() || !grp_fu_1506599_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_986_V_fu_1531153_p1.read()) + sc_biguint<16>(grp_fu_1506599_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1996_fu_1532508_p2() {
    add_ln703_1996_fu_1532508_p2 = (!mult_989_V_fu_1531211_p1.read().is_01() || !mult_988_V_fu_1531201_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_989_V_fu_1531211_p1.read()) + sc_biguint<16>(mult_988_V_fu_1531201_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1997_fu_1532514_p2() {
    add_ln703_1997_fu_1532514_p2 = (!mult_987_V_fu_1531179_p1.read().is_01() || !add_ln703_1996_fu_1532508_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_987_V_fu_1531179_p1.read()) + sc_biguint<16>(add_ln703_1996_fu_1532508_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1998_fu_1532520_p2() {
    add_ln703_1998_fu_1532520_p2 = (!add_ln703_1995_fu_1532502_p2.read().is_01() || !add_ln703_1997_fu_1532514_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1995_fu_1532502_p2.read()) + sc_biguint<16>(add_ln703_1997_fu_1532514_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_1999_fu_1532526_p2() {
    add_ln703_1999_fu_1532526_p2 = (!add_ln703_1994_fu_1532497_p2.read().is_01() || !add_ln703_1998_fu_1532520_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_1994_fu_1532497_p2.read()) + sc_biguint<16>(add_ln703_1998_fu_1532520_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2000_fu_1532532_p2() {
    add_ln703_2000_fu_1532532_p2 = (!mult_991_V_fu_1531215_p1.read().is_01() || !grp_fu_1506679_p4.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_991_V_fu_1531215_p1.read()) + sc_biguint<16>(grp_fu_1506679_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2001_fu_1532538_p2() {
    add_ln703_2001_fu_1532538_p2 = (!grp_fu_1506469_p4.read().is_01() || !grp_fu_1506149_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506469_p4.read()) + sc_biguint<16>(grp_fu_1506149_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2002_fu_1532544_p2() {
    add_ln703_2002_fu_1532544_p2 = (!grp_fu_1506069_p4.read().is_01() || !add_ln703_2001_fu_1532538_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506069_p4.read()) + sc_biguint<16>(add_ln703_2001_fu_1532538_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2003_fu_1532550_p2() {
    add_ln703_2003_fu_1532550_p2 = (!add_ln703_2000_fu_1532532_p2.read().is_01() || !add_ln703_2002_fu_1532544_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2000_fu_1532532_p2.read()) + sc_biguint<16>(add_ln703_2002_fu_1532544_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2004_fu_1532556_p2() {
    add_ln703_2004_fu_1532556_p2 = (!grp_fu_1506349_p4.read().is_01() || !grp_fu_1506609_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506349_p4.read()) + sc_biguint<16>(grp_fu_1506609_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2005_fu_1532562_p2() {
    add_ln703_2005_fu_1532562_p2 = (!grp_fu_1506869_p4.read().is_01() || !add_ln703_2004_fu_1532556_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506869_p4.read()) + sc_biguint<16>(add_ln703_2004_fu_1532556_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2007_fu_1532568_p2() {
    add_ln703_2007_fu_1532568_p2 = (!mult_998_V_fu_1531259_p1.read().is_01() || !grp_fu_1507001_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_998_V_fu_1531259_p1.read()) + sc_biguint<16>(grp_fu_1507001_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2008_fu_1532574_p2() {
    add_ln703_2008_fu_1532574_p2 = (!add_ln703_2005_fu_1532562_p2.read().is_01() || !add_ln703_2007_fu_1532568_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2005_fu_1532562_p2.read()) + sc_biguint<16>(add_ln703_2007_fu_1532568_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_2009_fu_1532580_p2() {
    add_ln703_2009_fu_1532580_p2 = (!add_ln703_2003_fu_1532550_p2.read().is_01() || !add_ln703_2008_fu_1532574_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2003_fu_1532550_p2.read()) + sc_biguint<16>(add_ln703_2008_fu_1532574_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_add_ln703_fu_1524611_p2() {
    add_ln703_fu_1524611_p2 = (!mult_1_V_fu_1507076_p4.read().is_01() || !mult_0_V_fu_1507059_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(mult_1_V_fu_1507076_p4.read()) + sc_bigint<16>(mult_0_V_fu_1507059_p1.read()));
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
    ap_return_0 = acc_0_0_V_fu_1531267_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_1() {
    ap_return_1 = acc_0_1_V_fu_1531276_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_10() {
    ap_return_10 = acc_2_0_V_fu_1531357_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_11() {
    ap_return_11 = acc_2_1_V_fu_1531366_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_12() {
    ap_return_12 = acc_2_2_V_fu_1531375_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_13() {
    ap_return_13 = acc_2_3_V_fu_1531384_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_14() {
    ap_return_14 = acc_2_4_V_fu_1531393_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_15() {
    ap_return_15 = acc_3_0_V_fu_1531402_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_16() {
    ap_return_16 = acc_3_1_V_fu_1531411_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_17() {
    ap_return_17 = acc_3_2_V_fu_1531420_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_18() {
    ap_return_18 = acc_3_3_V_fu_1531429_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_19() {
    ap_return_19 = acc_3_4_V_fu_1531438_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_2() {
    ap_return_2 = acc_0_2_V_fu_1531285_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_20() {
    ap_return_20 = acc_4_0_V_fu_1531447_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_21() {
    ap_return_21 = acc_4_1_V_fu_1531456_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_22() {
    ap_return_22 = acc_4_2_V_fu_1531465_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_23() {
    ap_return_23 = acc_4_3_V_fu_1531474_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_24() {
    ap_return_24 = acc_4_4_V_fu_1531483_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_25() {
    ap_return_25 = acc_5_0_V_fu_1531492_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_26() {
    ap_return_26 = acc_5_1_V_fu_1531501_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_27() {
    ap_return_27 = acc_5_2_V_fu_1531510_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_28() {
    ap_return_28 = acc_5_3_V_fu_1531519_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_29() {
    ap_return_29 = acc_5_4_V_fu_1531528_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_3() {
    ap_return_3 = acc_0_3_V_fu_1531294_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_30() {
    ap_return_30 = acc_6_0_V_fu_1531537_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_31() {
    ap_return_31 = acc_6_1_V_fu_1531546_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_32() {
    ap_return_32 = acc_6_2_V_fu_1531555_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_33() {
    ap_return_33 = acc_6_3_V_fu_1531564_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_34() {
    ap_return_34 = acc_6_4_V_fu_1531573_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_35() {
    ap_return_35 = acc_7_0_V_fu_1531582_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_36() {
    ap_return_36 = acc_7_1_V_fu_1531591_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_37() {
    ap_return_37 = acc_7_2_V_fu_1531600_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_38() {
    ap_return_38 = acc_7_3_V_fu_1531609_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_39() {
    ap_return_39 = acc_7_4_V_fu_1531618_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_4() {
    ap_return_4 = acc_0_4_V_fu_1531303_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_40() {
    ap_return_40 = acc_8_0_V_fu_1531682_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_41() {
    ap_return_41 = acc_8_1_V_fu_1531773_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_42() {
    ap_return_42 = acc_8_2_V_fu_1531883_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_43() {
    ap_return_43 = acc_8_3_V_fu_1531986_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_44() {
    ap_return_44 = acc_8_4_V_fu_1532086_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_45() {
    ap_return_45 = acc_9_0_V_fu_1532175_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_46() {
    ap_return_46 = acc_9_1_V_fu_1532273_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_47() {
    ap_return_47 = acc_9_2_V_fu_1532383_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_48() {
    ap_return_48 = acc_9_3_V_fu_1532486_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_49() {
    ap_return_49 = acc_9_4_V_fu_1532586_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_5() {
    ap_return_5 = acc_1_0_V_fu_1531312_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_6() {
    ap_return_6 = acc_1_1_V_fu_1531321_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_7() {
    ap_return_7 = acc_1_2_V_fu_1531330_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_8() {
    ap_return_8 = acc_1_3_V_fu_1531339_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_return_9() {
    ap_return_9 = acc_1_4_V_fu_1531348_p2.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1505989_p4() {
    grp_fu_1505989_p4 = grp_fu_1914_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1505999_p4() {
    grp_fu_1505999_p4 = grp_fu_2176_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506009_p4() {
    grp_fu_1506009_p4 = grp_fu_2206_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506019_p4() {
    grp_fu_1506019_p4 = grp_fu_2207_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506029_p4() {
    grp_fu_1506029_p4 = grp_fu_2305_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506039_p4() {
    grp_fu_1506039_p4 = grp_fu_2014_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506049_p4() {
    grp_fu_1506049_p4 = grp_fu_2369_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506059_p4() {
    grp_fu_1506059_p4 = grp_fu_1835_p2.read().range(21, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506069_p4() {
    grp_fu_1506069_p4 = grp_fu_2415_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506079_p4() {
    grp_fu_1506079_p4 = grp_fu_1830_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506089_p4() {
    grp_fu_1506089_p4 = grp_fu_2362_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506099_p4() {
    grp_fu_1506099_p4 = grp_fu_2244_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506109_p4() {
    grp_fu_1506109_p4 = grp_fu_2245_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506119_p4() {
    grp_fu_1506119_p4 = grp_fu_2338_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506129_p4() {
    grp_fu_1506129_p4 = grp_fu_1862_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506139_p4() {
    grp_fu_1506139_p4 = grp_fu_1891_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506149_p4() {
    grp_fu_1506149_p4 = grp_fu_1880_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506159_p4() {
    grp_fu_1506159_p4 = grp_fu_2365_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506169_p4() {
    grp_fu_1506169_p4 = grp_fu_2034_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506179_p4() {
    grp_fu_1506179_p4 = grp_fu_2307_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506189_p4() {
    grp_fu_1506189_p4 = grp_fu_2310_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506199_p4() {
    grp_fu_1506199_p4 = grp_fu_2311_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506209_p4() {
    grp_fu_1506209_p4 = grp_fu_2324_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506219_p4() {
    grp_fu_1506219_p4 = grp_fu_2326_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506229_p4() {
    grp_fu_1506229_p4 = grp_fu_2315_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506239_p4() {
    grp_fu_1506239_p4 = grp_fu_2111_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506249_p4() {
    grp_fu_1506249_p4 = grp_fu_2221_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506259_p4() {
    grp_fu_1506259_p4 = grp_fu_2108_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506269_p4() {
    grp_fu_1506269_p4 = grp_fu_2191_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506279_p4() {
    grp_fu_1506279_p4 = grp_fu_2377_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506289_p4() {
    grp_fu_1506289_p4 = grp_fu_2194_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506299_p4() {
    grp_fu_1506299_p4 = grp_fu_2358_p2.read().range(21, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506309_p4() {
    grp_fu_1506309_p4 = grp_fu_2199_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506319_p4() {
    grp_fu_1506319_p4 = grp_fu_1904_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506329_p4() {
    grp_fu_1506329_p4 = grp_fu_1906_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506339_p4() {
    grp_fu_1506339_p4 = grp_fu_1885_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506349_p4() {
    grp_fu_1506349_p4 = grp_fu_1901_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506359_p4() {
    grp_fu_1506359_p4 = grp_fu_2334_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506369_p4() {
    grp_fu_1506369_p4 = grp_fu_2288_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506379_p4() {
    grp_fu_1506379_p4 = grp_fu_2151_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506389_p4() {
    grp_fu_1506389_p4 = grp_fu_2080_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506399_p4() {
    grp_fu_1506399_p4 = grp_fu_2093_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506409_p4() {
    grp_fu_1506409_p4 = grp_fu_2086_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506419_p4() {
    grp_fu_1506419_p4 = grp_fu_1981_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506429_p4() {
    grp_fu_1506429_p4 = grp_fu_2091_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506439_p4() {
    grp_fu_1506439_p4 = grp_fu_2125_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506449_p4() {
    grp_fu_1506449_p4 = grp_fu_2126_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506459_p4() {
    grp_fu_1506459_p4 = grp_fu_2128_p2.read().range(21, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506469_p4() {
    grp_fu_1506469_p4 = grp_fu_2408_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506479_p4() {
    grp_fu_1506479_p4 = grp_fu_1871_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506489_p4() {
    grp_fu_1506489_p4 = grp_fu_2270_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506499_p4() {
    grp_fu_1506499_p4 = grp_fu_2273_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506509_p4() {
    grp_fu_1506509_p4 = grp_fu_2229_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506519_p4() {
    grp_fu_1506519_p4 = grp_fu_1919_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506529_p4() {
    grp_fu_1506529_p4 = grp_fu_2083_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506539_p4() {
    grp_fu_1506539_p4 = grp_fu_1983_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506549_p4() {
    grp_fu_1506549_p4 = grp_fu_1984_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506559_p4() {
    grp_fu_1506559_p4 = grp_fu_1881_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506569_p4() {
    grp_fu_1506569_p4 = grp_fu_2055_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506579_p4() {
    grp_fu_1506579_p4 = grp_fu_1987_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506589_p4() {
    grp_fu_1506589_p4 = grp_fu_2062_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506599_p4() {
    grp_fu_1506599_p4 = grp_fu_2065_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506609_p4() {
    grp_fu_1506609_p4 = grp_fu_1850_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506619_p4() {
    grp_fu_1506619_p4 = grp_fu_1931_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506629_p4() {
    grp_fu_1506629_p4 = grp_fu_2143_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506639_p4() {
    grp_fu_1506639_p4 = grp_fu_2409_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506649_p4() {
    grp_fu_1506649_p4 = grp_fu_2180_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506659_p4() {
    grp_fu_1506659_p4 = grp_fu_2393_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506669_p4() {
    grp_fu_1506669_p4 = grp_fu_2001_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506679_p4() {
    grp_fu_1506679_p4 = grp_fu_2053_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506689_p4() {
    grp_fu_1506689_p4 = grp_fu_2018_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506699_p4() {
    grp_fu_1506699_p4 = grp_fu_2381_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506709_p4() {
    grp_fu_1506709_p4 = grp_fu_2384_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506719_p4() {
    grp_fu_1506719_p4 = grp_fu_1995_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506729_p4() {
    grp_fu_1506729_p4 = grp_fu_2392_p2.read().range(21, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506739_p4() {
    grp_fu_1506739_p4 = grp_fu_1845_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506749_p4() {
    grp_fu_1506749_p4 = grp_fu_1848_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506759_p4() {
    grp_fu_1506759_p4 = grp_fu_2233_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506769_p4() {
    grp_fu_1506769_p4 = grp_fu_2226_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506779_p4() {
    grp_fu_1506779_p4 = grp_fu_2216_p2.read().range(21, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506789_p4() {
    grp_fu_1506789_p4 = grp_fu_2131_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506799_p4() {
    grp_fu_1506799_p4 = grp_fu_2159_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506809_p4() {
    grp_fu_1506809_p4 = grp_fu_2162_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506819_p4() {
    grp_fu_1506819_p4 = grp_fu_1828_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506829_p4() {
    grp_fu_1506829_p4 = grp_fu_2192_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506839_p4() {
    grp_fu_1506839_p4 = grp_fu_1986_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506849_p4() {
    grp_fu_1506849_p4 = grp_fu_2316_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506859_p4() {
    grp_fu_1506859_p4 = grp_fu_1870_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506869_p4() {
    grp_fu_1506869_p4 = grp_fu_2400_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506879_p4() {
    grp_fu_1506879_p4 = grp_fu_1878_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506889_p4() {
    grp_fu_1506889_p4 = grp_fu_2423_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506899_p4() {
    grp_fu_1506899_p4 = grp_fu_2032_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506909_p4() {
    grp_fu_1506909_p4 = grp_fu_2136_p2.read().range(21, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506919_p4() {
    grp_fu_1506919_p4 = grp_fu_2246_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506929_p4() {
    grp_fu_1506929_p4 = grp_fu_2112_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506939_p4() {
    grp_fu_1506939_p4 = grp_fu_2011_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506949_p4() {
    grp_fu_1506949_p4 = grp_fu_2102_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506959_p4() {
    grp_fu_1506959_p4 = grp_fu_2301_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506969_p4() {
    grp_fu_1506969_p4 = grp_fu_1924_p2.read().range(23, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506979_p4() {
    grp_fu_1506979_p4 = grp_fu_1943_p2.read().range(22, 8);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506989_p2() {
    grp_fu_1506989_p2 = (!grp_fu_1506209_p4.read().is_01() || !grp_fu_1506199_p4.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506209_p4.read()) + sc_biguint<16>(grp_fu_1506199_p4.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1506995_p2() {
    grp_fu_1506995_p2 = (!grp_fu_1506189_p4.read().is_01() || !grp_fu_1506989_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506189_p4.read()) + sc_biguint<16>(grp_fu_1506989_p2.read()));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1507001_p2() {
    grp_fu_1507001_p2 = (!grp_fu_1506479_p4.read().is_01() || !ap_const_lv16_F.is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506479_p4.read()) + sc_biguint<16>(ap_const_lv16_F));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1507007_p2() {
    grp_fu_1507007_p2 = (!grp_fu_1506739_p4.read().is_01() || !ap_const_lv16_F.is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506739_p4.read()) + sc_biguint<16>(ap_const_lv16_F));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1507013_p2() {
    grp_fu_1507013_p2 = (!grp_fu_1506889_p4.read().is_01() || !ap_const_lv16_FFEB.is_01())? sc_lv<16>(): (sc_biguint<16>(grp_fu_1506889_p4.read()) + sc_bigint<16>(ap_const_lv16_FFEB));
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1828_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1828_p0 =  (sc_lv<16>) (sext_ln1118_1335_fu_1530219_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1828_p0 =  (sc_lv<16>) (sext_ln1118_1115_fu_1519922_p1.read());
    } else {
        grp_fu_1828_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1828_p2() {
    grp_fu_1828_p2 = (!grp_fu_1828_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_1828_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1830_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1830_p0 =  (sc_lv<16>) (sext_ln1118_1277_fu_1529529_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1830_p0 =  (sc_lv<16>) (sext_ln1118_605_fu_1507611_p1.read());
    } else {
        grp_fu_1830_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1830_p2() {
    grp_fu_1830_p2 = (!grp_fu_1830_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1830_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1835_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1835_p0 =  (sc_lv<16>) (sext_ln1118_1257_reg_1532987.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1835_p0 =  (sc_lv<16>) (sext_ln1118_585_fu_1507332_p1.read());
    } else {
        grp_fu_1835_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1835_p2() {
    grp_fu_1835_p2 = (!grp_fu_1835_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(grp_fu_1835_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1845_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1845_p0 =  (sc_lv<16>) (sext_ln1118_1288_reg_1533012.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1845_p0 =  (sc_lv<16>) (sext_ln1118_1036_fu_1517957_p1.read());
    } else {
        grp_fu_1845_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1845_p2() {
    grp_fu_1845_p2 = (!grp_fu_1845_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1845_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1848_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1848_p0 =  (sc_lv<16>) (sext_ln1118_1336_fu_1530224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1848_p0 =  (sc_lv<16>) (sext_ln1118_1084_fu_1519479_p1.read());
    } else {
        grp_fu_1848_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1848_p2() {
    grp_fu_1848_p2 = (!grp_fu_1848_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1848_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1850_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1850_p0 =  (sc_lv<16>) (sext_ln1118_1361_fu_1530511_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1850_p0 =  (sc_lv<16>) (sext_ln1118_941_fu_1515769_p1.read());
    } else {
        grp_fu_1850_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1850_p2() {
    grp_fu_1850_p2 = (!grp_fu_1850_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1850_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1862_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1862_p0 =  (sc_lv<16>) (sext_ln1118_1249_fu_1529285_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1862_p0 =  (sc_lv<16>) (sext_ln1118_661_fu_1509299_p1.read());
    } else {
        grp_fu_1862_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1862_p2() {
    grp_fu_1862_p2 = (!grp_fu_1862_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1862_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1870_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1870_p0 =  (sc_lv<16>) (sext_ln1118_1272_fu_1529477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1870_p0 =  (sc_lv<16>) (sext_ln1118_1104_fu_1519753_p1.read());
    } else {
        grp_fu_1870_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1870_p2() {
    grp_fu_1870_p2 = (!grp_fu_1870_p0.read().is_01() || !ap_const_lv24_8C.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1870_p0.read()) * sc_biguint<24>(ap_const_lv24_8C);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1871_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1871_p0 =  (sc_lv<16>) (sext_ln1118_1372_fu_1530677_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1871_p0 =  (sc_lv<16>) (sext_ln1118_868_fu_1513893_p1.read());
    } else {
        grp_fu_1871_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1871_p2() {
    grp_fu_1871_p2 = (!grp_fu_1871_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1871_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1878_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1878_p0 =  (sc_lv<16>) (sext_ln1118_1338_fu_1530237_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1878_p0 =  (sc_lv<16>) (sext_ln1118_1170_fu_1521534_p1.read());
    } else {
        grp_fu_1878_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1878_p2() {
    grp_fu_1878_p2 = (!grp_fu_1878_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_1878_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1880_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1880_p0 =  (sc_lv<16>) (sext_ln1118_1352_fu_1530395_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1880_p0 =  (sc_lv<16>) (sext_ln1118_680_fu_1509547_p1.read());
    } else {
        grp_fu_1880_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1880_p2() {
    grp_fu_1880_p2 = (!grp_fu_1880_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1880_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1881_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1881_p0 =  (sc_lv<16>) (sext_ln1118_1277_fu_1529529_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1881_p0 =  (sc_lv<16>) (sext_ln1118_941_fu_1515769_p1.read());
    } else {
        grp_fu_1881_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1881_p2() {
    grp_fu_1881_p2 = (!grp_fu_1881_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1881_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1885_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1885_p0 =  (sc_lv<16>) (sext_ln1118_1268_fu_1529422_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1885_p0 =  (sc_lv<16>) (sext_ln1118_764_fu_1511639_p1.read());
    } else {
        grp_fu_1885_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1885_p2() {
    grp_fu_1885_p2 = (!grp_fu_1885_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1885_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1891_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1891_p0 =  (sc_lv<16>) (sext_ln1118_1265_fu_1529371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1891_p0 =  (sc_lv<16>) (sext_ln1118_677_fu_1509496_p1.read());
    } else {
        grp_fu_1891_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1891_p2() {
    grp_fu_1891_p2 = (!grp_fu_1891_p0.read().is_01() || !ap_const_lv24_FFFDA4.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1891_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDA4);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1901_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1901_p0 =  (sc_lv<16>) (sext_ln1118_1364_fu_1530563_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1901_p0 =  (sc_lv<16>) (sext_ln1118_776_fu_1511807_p1.read());
    } else {
        grp_fu_1901_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1901_p2() {
    grp_fu_1901_p2 = (!grp_fu_1901_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1901_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1904_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1904_p0 =  (sc_lv<16>) (sext_ln1118_1367_fu_1530610_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1904_p0 =  (sc_lv<16>) (sext_ln1118_747_fu_1511406_p1.read());
    } else {
        grp_fu_1904_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1904_p2() {
    grp_fu_1904_p2 = (!grp_fu_1904_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_1904_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1906_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1906_p0 =  (sc_lv<16>) (sext_ln1118_1259_fu_1529302_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1906_p0 =  (sc_lv<16>) (sext_ln1118_755_fu_1511501_p1.read());
    } else {
        grp_fu_1906_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1906_p2() {
    grp_fu_1906_p2 = (!grp_fu_1906_p0.read().is_01() || !ap_const_lv24_BB.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1906_p0.read()) * sc_biguint<24>(ap_const_lv24_BB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1914_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1914_p0 =  (sc_lv<16>) (sext_ln1118_1340_fu_1530253_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1914_p0 =  (sc_lv<16>) (sext_ln1118_584_fu_1507326_p1.read());
    } else {
        grp_fu_1914_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1914_p2() {
    grp_fu_1914_p2 = (!grp_fu_1914_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_1914_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1919_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1919_p0 =  (sc_lv<16>) (sext_ln1118_1252_reg_1532966.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1919_p0 =  (sc_lv<16>) (sext_ln1118_916_fu_1515415_p1.read());
    } else {
        grp_fu_1919_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1919_p2() {
    grp_fu_1919_p2 = (!grp_fu_1919_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1919_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1924_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1924_p0 =  (sc_lv<16>) (sext_ln1118_1275_fu_1529490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1924_p0 =  (sc_lv<16>) (sext_ln1118_1191_fu_1521816_p1.read());
    } else {
        grp_fu_1924_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1924_p2() {
    grp_fu_1924_p2 = (!grp_fu_1924_p0.read().is_01() || !ap_const_lv24_FFFEA4.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1924_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEA4);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1931_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1931_p0 =  (sc_lv<16>) (sext_ln1118_1339_fu_1530247_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1931_p0 =  (sc_lv<16>) (sext_ln1118_1003_fu_1517490_p1.read());
    } else {
        grp_fu_1931_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1931_p2() {
    grp_fu_1931_p2 = (!grp_fu_1931_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1931_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1943_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1943_p0 =  (sc_lv<16>) (sext_ln1118_1256_reg_1532982.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1943_p0 =  (sc_lv<16>) (sext_ln1118_1254_fu_1523577_p1.read());
    } else {
        grp_fu_1943_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1943_p2() {
    grp_fu_1943_p2 = (!grp_fu_1943_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_1943_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1981_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1981_p0 =  (sc_lv<16>) (sext_ln1118_1343_fu_1530267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1981_p0 =  (sc_lv<16>) (sext_ln1118_839_fu_1513473_p1.read());
    } else {
        grp_fu_1981_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1981_p2() {
    grp_fu_1981_p2 = (!grp_fu_1981_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1981_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1983_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1983_p0 =  (sc_lv<16>) (sext_ln1118_1352_fu_1530395_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1983_p0 =  (sc_lv<16>) (sext_ln1118_932_fu_1515643_p1.read());
    } else {
        grp_fu_1983_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1983_p2() {
    grp_fu_1983_p2 = (!grp_fu_1983_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1983_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1984_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1984_p0 =  (sc_lv<16>) (sext_ln1118_1359_fu_1530472_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1984_p0 =  (sc_lv<16>) (sext_ln1118_939_fu_1515730_p1.read());
    } else {
        grp_fu_1984_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1984_p2() {
    grp_fu_1984_p2 = (!grp_fu_1984_p0.read().is_01() || !ap_const_lv24_FFFEF5.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1984_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEF5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1986_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1986_p0 =  (sc_lv<16>) (sext_ln1118_1268_fu_1529422_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1986_p0 =  (sc_lv<16>) (sext_ln1118_1100_fu_1519697_p1.read());
    } else {
        grp_fu_1986_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1986_p2() {
    grp_fu_1986_p2 = (!grp_fu_1986_p0.read().is_01() || !ap_const_lv24_BB.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1986_p0.read()) * sc_biguint<24>(ap_const_lv24_BB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1987_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1987_p0 =  (sc_lv<16>) (sext_ln1118_1346_fu_1530324_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1987_p0 =  (sc_lv<16>) (sext_ln1118_926_fu_1515562_p1.read());
    } else {
        grp_fu_1987_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1987_p2() {
    grp_fu_1987_p2 = (!grp_fu_1987_p0.read().is_01() || !ap_const_lv24_FFFEE9.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1987_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEE9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1995_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1995_p0 =  (sc_lv<16>) (sext_ln1118_1321_fu_1530205_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_1995_p0 =  (sc_lv<16>) (sext_ln1118_985_fu_1517266_p1.read());
    } else {
        grp_fu_1995_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_1995_p2() {
    grp_fu_1995_p2 = (!grp_fu_1995_p0.read().is_01() || !ap_const_lv24_FFFE24.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_1995_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE24);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2001_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2001_p0 =  (sc_lv<16>) (sext_ln1118_1253_fu_1529293_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2001_p0 =  (sc_lv<16>) (sext_ln1118_1001_fu_1517465_p1.read());
    } else {
        grp_fu_2001_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2001_p2() {
    grp_fu_2001_p2 = (!grp_fu_2001_p0.read().is_01() || !ap_const_lv24_FFFEBD.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2001_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEBD);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2011_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2011_p0 =  (sc_lv<16>) (sext_ln1118_1275_fu_1529490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2011_p0 =  (sc_lv<16>) (sext_ln1118_1191_fu_1521816_p1.read());
    } else {
        grp_fu_2011_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2011_p2() {
    grp_fu_2011_p2 = (!grp_fu_2011_p0.read().is_01() || !ap_const_lv24_FFFEF5.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2011_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEF5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2014_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2014_p0 =  (sc_lv<16>) (sext_ln1118_1265_fu_1529371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2014_p0 =  (sc_lv<16>) (sext_ln1118_593_fu_1507434_p1.read());
    } else {
        grp_fu_2014_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2014_p2() {
    grp_fu_2014_p2 = (!grp_fu_2014_p0.read().is_01() || !ap_const_lv24_FFFEEC.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2014_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEC);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2018_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2018_p0 =  (sc_lv<16>) (sext_ln1118_1273_reg_1533002.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2018_p0 =  (sc_lv<16>) (sext_ln1118_1021_fu_1517727_p1.read());
    } else {
        grp_fu_2018_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2018_p2() {
    grp_fu_2018_p2 = (!grp_fu_2018_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2018_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2032_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2032_p0 =  (sc_lv<16>) (sext_ln1118_1321_fu_1530205_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2032_p0 =  (sc_lv<16>) (sext_ln1118_1153_fu_1521330_p1.read());
    } else {
        grp_fu_2032_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2032_p2() {
    grp_fu_2032_p2 = (!grp_fu_2032_p0.read().is_01() || !ap_const_lv24_E7.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2032_p0.read()) * sc_biguint<24>(ap_const_lv24_E7);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2034_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2034_p0 =  (sc_lv<16>) (sext_ln1118_1357_fu_1530457_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2034_p0 =  (sc_lv<16>) (sext_ln1118_769_fu_1511701_p1.read());
    } else {
        grp_fu_2034_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2034_p2() {
    grp_fu_2034_p2 = (!grp_fu_2034_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2034_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2053_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2053_p0 =  (sc_lv<16>) (sext_ln1118_1343_fu_1530267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2053_p0 =  (sc_lv<16>) (sext_ln1118_1016_fu_1517665_p1.read());
    } else {
        grp_fu_2053_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2053_p2() {
    grp_fu_2053_p2 = (!grp_fu_2053_p0.read().is_01() || !ap_const_lv24_BB.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2053_p0.read()) * sc_biguint<24>(ap_const_lv24_BB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2055_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2055_p0 =  (sc_lv<16>) (sext_ln1118_1252_reg_1532966.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2055_p0 =  (sc_lv<16>) (sext_ln1118_916_fu_1515415_p1.read());
    } else {
        grp_fu_2055_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2055_p2() {
    grp_fu_2055_p2 = (!grp_fu_2055_p0.read().is_01() || !ap_const_lv24_FFFEC3.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2055_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEC3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2062_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2062_p0 =  (sc_lv<16>) (sext_ln1118_1347_fu_1530330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2062_p0 =  (sc_lv<16>) (sext_ln1118_899_fu_1515211_p1.read());
    } else {
        grp_fu_2062_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2062_p2() {
    grp_fu_2062_p2 = (!grp_fu_2062_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2062_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2065_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2065_p0 =  (sc_lv<16>) (sext_ln1118_1333_fu_1530211_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2065_p0 =  (sc_lv<16>) (sext_ln1118_913_fu_1515385_p1.read());
    } else {
        grp_fu_2065_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2065_p2() {
    grp_fu_2065_p2 = (!grp_fu_2065_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2065_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2080_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2080_p0 =  (sc_lv<16>) (sext_ln1118_1361_fu_1530511_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2080_p0 =  (sc_lv<16>) (sext_ln1118_857_fu_1513727_p1.read());
    } else {
        grp_fu_2080_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2080_p2() {
    grp_fu_2080_p2 = (!grp_fu_2080_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2080_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2083_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2083_p0 =  (sc_lv<16>) (sext_ln1118_1254_reg_1532972.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2083_p0 =  (sc_lv<16>) (sext_ln1118_918_fu_1515438_p1.read());
    } else {
        grp_fu_2083_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2083_p2() {
    grp_fu_2083_p2 = (!grp_fu_2083_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2083_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2086_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2086_p0 =  (sc_lv<16>) (sext_ln1118_1336_fu_1530224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2086_p0 =  (sc_lv<16>) (sext_ln1118_832_fu_1513383_p1.read());
    } else {
        grp_fu_2086_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2086_p2() {
    grp_fu_2086_p2 = (!grp_fu_2086_p0.read().is_01() || !ap_const_lv24_FFFEC3.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2086_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEC3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2091_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2091_p0 =  (sc_lv<16>) (sext_ln1118_1352_fu_1530395_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2091_p0 =  (sc_lv<16>) (sext_ln1118_848_fu_1513601_p1.read());
    } else {
        grp_fu_2091_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2091_p2() {
    grp_fu_2091_p2 = (!grp_fu_2091_p0.read().is_01() || !ap_const_lv24_BB.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2091_p0.read()) * sc_biguint<24>(ap_const_lv24_BB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2093_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2093_p0 =  (sc_lv<16>) (sext_ln1118_1364_fu_1530563_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2093_p0 =  (sc_lv<16>) (sext_ln1118_860_fu_1513779_p1.read());
    } else {
        grp_fu_2093_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2093_p2() {
    grp_fu_2093_p2 = (!grp_fu_2093_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2093_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2102_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2102_p0 =  (sc_lv<16>) (sext_ln1118_1361_fu_1530511_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2102_p0 =  (sc_lv<16>) (sext_ln1118_1193_fu_1521855_p1.read());
    } else {
        grp_fu_2102_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2102_p2() {
    grp_fu_2102_p2 = (!grp_fu_2102_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2102_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2108_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2108_p0 =  (sc_lv<16>) (sext_ln1118_1259_fu_1529302_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2108_p0 =  (sc_lv<16>) (sext_ln1118_755_fu_1511501_p1.read());
    } else {
        grp_fu_2108_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2108_p2() {
    grp_fu_2108_p2 = (!grp_fu_2108_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2108_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2111_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2111_p0 =  (sc_lv<16>) (sext_ln1118_1321_fu_1530205_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2111_p0 =  (sc_lv<16>) (sext_ln1118_733_fu_1511230_p1.read());
    } else {
        grp_fu_2111_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2111_p2() {
    grp_fu_2111_p2 = (!grp_fu_2111_p0.read().is_01() || !ap_const_lv24_FFFF4B.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2111_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4B);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2112_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2112_p0 =  (sc_lv<16>) (sext_ln1118_1258_fu_1529297_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2112_p0 =  (sc_lv<16>) (sext_ln1118_1174_fu_1521586_p1.read());
    } else {
        grp_fu_2112_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2112_p2() {
    grp_fu_2112_p2 = (!grp_fu_2112_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2112_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2125_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2125_p0 =  (sc_lv<16>) (sext_ln1118_1277_fu_1529529_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2125_p0 =  (sc_lv<16>) (sext_ln1118_857_fu_1513727_p1.read());
    } else {
        grp_fu_2125_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2125_p2() {
    grp_fu_2125_p2 = (!grp_fu_2125_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2125_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2126_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2126_p0 =  (sc_lv<16>) (sext_ln1118_1364_fu_1530563_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2126_p0 =  (sc_lv<16>) (sext_ln1118_860_fu_1513779_p1.read());
    } else {
        grp_fu_2126_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2126_p2() {
    grp_fu_2126_p2 = (!grp_fu_2126_p0.read().is_01() || !ap_const_lv24_FFFF30.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2126_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF30);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2128_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2128_p0 =  (sc_lv<16>) (sext_ln1118_1371_fu_1530671_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2128_p0 =  (sc_lv<16>) (sext_ln1118_867_fu_1513887_p1.read());
    } else {
        grp_fu_2128_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2128_p2() {
    grp_fu_2128_p2 = (!grp_fu_2128_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(grp_fu_2128_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2131_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2131_p0 =  (sc_lv<16>) (sext_ln1118_1336_fu_1530224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2131_p0 =  (sc_lv<16>) (sext_ln1118_1084_fu_1519479_p1.read());
    } else {
        grp_fu_2131_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2131_p2() {
    grp_fu_2131_p2 = (!grp_fu_2131_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2131_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2136_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2136_p0 =  (sc_lv<16>) (sext_ln1118_1287_fu_1529689_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2136_p0 =  (sc_lv<16>) (sext_ln1118_1203_fu_1522015_p1.read());
    } else {
        grp_fu_2136_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2136_p2() {
    grp_fu_2136_p2 = (!grp_fu_2136_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(grp_fu_2136_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2143_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2143_p0 =  (sc_lv<16>) (sext_ln1118_1343_fu_1530267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2143_p0 =  (sc_lv<16>) (sext_ln1118_1007_fu_1517527_p1.read());
    } else {
        grp_fu_2143_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2143_p2() {
    grp_fu_2143_p2 = (!grp_fu_2143_p0.read().is_01() || !ap_const_lv24_FFFDB3.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2143_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDB3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2151_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2151_p0 =  (sc_lv<16>) (sext_ln1118_1338_fu_1530237_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2151_p0 =  (sc_lv<16>) (sext_ln1118_834_fu_1513406_p1.read());
    } else {
        grp_fu_2151_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2151_p2() {
    grp_fu_2151_p2 = (!grp_fu_2151_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2151_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2159_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2159_p0 =  (sc_lv<16>) (sext_ln1118_1268_fu_1529422_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2159_p0 =  (sc_lv<16>) (sext_ln1118_1100_fu_1519697_p1.read());
    } else {
        grp_fu_2159_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2159_p2() {
    grp_fu_2159_p2 = (!grp_fu_2159_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2159_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2162_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2162_p0 =  (sc_lv<16>) (sext_ln1118_1280_fu_1529581_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2162_p0 =  (sc_lv<16>) (sext_ln1118_1112_fu_1519875_p1.read());
    } else {
        grp_fu_2162_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2162_p2() {
    grp_fu_2162_p2 = (!grp_fu_2162_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2162_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2176_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2176_p0 =  (sc_lv<16>) (sext_ln1118_1336_fu_1530224_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2176_p0 =  (sc_lv<16>) (sext_ln1118_580_fu_1507267_p1.read());
    } else {
        grp_fu_2176_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2176_p2() {
    grp_fu_2176_p2 = (!grp_fu_2176_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2176_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2180_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2180_p0 =  (sc_lv<16>) (sext_ln1118_1349_fu_1530344_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2180_p0 =  (sc_lv<16>) (sext_ln1118_1013_fu_1517614_p1.read());
    } else {
        grp_fu_2180_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2180_p2() {
    grp_fu_2180_p2 = (!grp_fu_2180_p0.read().is_01() || !ap_const_lv24_FFFEEC.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2180_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEC);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2191_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2191_p0 =  (sc_lv<16>) (sext_ln1118_1357_fu_1530457_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2191_p0 =  (sc_lv<16>) (sext_ln1118_769_fu_1511701_p1.read());
    } else {
        grp_fu_2191_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2191_p2() {
    grp_fu_2191_p2 = (!grp_fu_2191_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2191_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2192_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2192_p0 =  (sc_lv<16>) (sext_ln1118_1337_fu_1530232_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2192_p0 =  (sc_lv<16>) (sext_ln1118_1085_fu_1519487_p1.read());
    } else {
        grp_fu_2192_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2192_p2() {
    grp_fu_2192_p2 = (!grp_fu_2192_p0.read().is_01() || !ap_const_lv24_FFFEBD.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2192_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEBD);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2194_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2194_p0 =  (sc_lv<16>) (sext_ln1118_1280_fu_1529581_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2194_p0 =  (sc_lv<16>) (sext_ln1118_776_fu_1511807_p1.read());
    } else {
        grp_fu_2194_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2194_p2() {
    grp_fu_2194_p2 = (!grp_fu_2194_p0.read().is_01() || !ap_const_lv24_FFFF30.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2194_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF30);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2199_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2199_p0 =  (sc_lv<16>) (sext_ln1118_1237_reg_1532960.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2199_p0 =  (sc_lv<16>) (sext_ln1118_733_fu_1511230_p1.read());
    } else {
        grp_fu_2199_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2199_p2() {
    grp_fu_2199_p2 = (!grp_fu_2199_p0.read().is_01() || !ap_const_lv24_FFFE24.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2199_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE24);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2206_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2206_p0 =  (sc_lv<16>) (sext_ln1118_1272_fu_1529477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2206_p0 =  (sc_lv<16>) (sext_ln1118_600_fu_1507541_p1.read());
    } else {
        grp_fu_2206_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2206_p2() {
    grp_fu_2206_p2 = (!grp_fu_2206_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2206_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2207_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2207_p0 =  (sc_lv<16>) (sext_ln1118_1359_fu_1530472_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2207_p0 =  (sc_lv<16>) (sext_ln1118_603_fu_1507572_p1.read());
    } else {
        grp_fu_2207_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2207_p2() {
    grp_fu_2207_p2 = (!grp_fu_2207_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2207_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2216_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2216_p0 =  (sc_lv<16>) (sext_ln1118_1371_fu_1530671_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2216_p0 =  (sc_lv<16>) (sext_ln1118_1119_fu_1519983_p1.read());
    } else {
        grp_fu_2216_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2216_p2() {
    grp_fu_2216_p2 = (!grp_fu_2216_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(grp_fu_2216_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2221_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2221_p0 =  (sc_lv<16>) (sext_ln1118_1342_fu_1530262_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2221_p0 =  (sc_lv<16>) (sext_ln1118_754_fu_1511496_p1.read());
    } else {
        grp_fu_2221_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2221_p2() {
    grp_fu_2221_p2 = (!grp_fu_2221_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2221_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2226_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2226_p0 =  (sc_lv<16>) (sext_ln1118_1277_fu_1529529_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2226_p0 =  (sc_lv<16>) (sext_ln1118_1109_fu_1519823_p1.read());
    } else {
        grp_fu_2226_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2226_p2() {
    grp_fu_2226_p2 = (!grp_fu_2226_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2226_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2229_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2229_p0 =  (sc_lv<16>) (sext_ln1118_1284_fu_1529633_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2229_p0 =  (sc_lv<16>) (sext_ln1118_948_fu_1515873_p1.read());
    } else {
        grp_fu_2229_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2229_p2() {
    grp_fu_2229_p2 = (!grp_fu_2229_p0.read().is_01() || !ap_const_lv24_83.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2229_p0.read()) * sc_biguint<24>(ap_const_lv24_83);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2233_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2233_p0 =  (sc_lv<16>) (sext_ln1118_1262_fu_1529359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2233_p0 =  (sc_lv<16>) (sext_ln1118_1094_fu_1519616_p1.read());
    } else {
        grp_fu_2233_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2233_p2() {
    grp_fu_2233_p2 = (!grp_fu_2233_p0.read().is_01() || !ap_const_lv24_FFFDF1.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2233_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDF1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2244_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2244_p0 =  (sc_lv<16>) (sext_ln1118_1346_fu_1530324_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2244_p0 =  (sc_lv<16>) (sext_ln1118_674_fu_1509466_p1.read());
    } else {
        grp_fu_2244_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2244_p2() {
    grp_fu_2244_p2 = (!grp_fu_2244_p0.read().is_01() || !ap_const_lv24_FFFDF1.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2244_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDF1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2245_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2245_p0 =  (sc_lv<16>) (sext_ln1118_1265_fu_1529371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2245_p0 =  (sc_lv<16>) (sext_ln1118_677_fu_1509496_p1.read());
    } else {
        grp_fu_2245_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2245_p2() {
    grp_fu_2245_p2 = (!grp_fu_2245_p0.read().is_01() || !ap_const_lv24_89.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2245_p0.read()) * sc_biguint<24>(ap_const_lv24_89);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2246_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2246_p0 =  (sc_lv<16>) (sext_ln1118_1275_fu_1529490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2246_p0 =  (sc_lv<16>) (sext_ln1118_1148_fu_1521263_p1.read());
    } else {
        grp_fu_2246_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2246_p2() {
    grp_fu_2246_p2 = (!grp_fu_2246_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2246_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2270_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2270_p0 =  (sc_lv<16>) (sext_ln1118_1259_fu_1529302_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2270_p0 =  (sc_lv<16>) (sext_ln1118_923_fu_1515505_p1.read());
    } else {
        grp_fu_2270_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2270_p2() {
    grp_fu_2270_p2 = (!grp_fu_2270_p0.read().is_01() || !ap_const_lv24_FFFDB3.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2270_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDB3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2273_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2273_p0 =  (sc_lv<16>) (sext_ln1118_1268_fu_1529422_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2273_p0 =  (sc_lv<16>) (sext_ln1118_932_fu_1515643_p1.read());
    } else {
        grp_fu_2273_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2273_p2() {
    grp_fu_2273_p2 = (!grp_fu_2273_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2273_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2288_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2288_p0 =  (sc_lv<16>) (sext_ln1118_1255_reg_1532977.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2288_p0 =  (sc_lv<16>) (sext_ln1118_835_fu_1513426_p1.read());
    } else {
        grp_fu_2288_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2288_p2() {
    grp_fu_2288_p2 = (!grp_fu_2288_p0.read().is_01() || !ap_const_lv24_FFFDD9.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2288_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2301_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2301_p0 =  (sc_lv<16>) (sext_ln1118_1251_fu_1529289_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2301_p0 =  (sc_lv<16>) (sext_ln1118_1167_fu_1521506_p1.read());
    } else {
        grp_fu_2301_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2301_p2() {
    grp_fu_2301_p2 = (!grp_fu_2301_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2301_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2305_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2305_p0 =  (sc_lv<16>) (sext_ln1118_1237_reg_1532960.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2305_p0 =  (sc_lv<16>) (sext_ln1118_565_fu_1507086_p1.read());
    } else {
        grp_fu_2305_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2305_p2() {
    grp_fu_2305_p2 = (!grp_fu_2305_p0.read().is_01() || !ap_const_lv24_FFFF4B.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2305_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4B);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2307_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2307_p0 =  (sc_lv<16>) (sext_ln1118_1339_fu_1530247_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2307_p0 =  (sc_lv<16>) (sext_ln1118_751_fu_1511454_p1.read());
    } else {
        grp_fu_2307_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2307_p2() {
    grp_fu_2307_p2 = (!grp_fu_2307_p0.read().is_01() || !ap_const_lv24_FFFDD9.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2307_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2310_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2310_p0 =  (sc_lv<16>) (sext_ln1118_1349_fu_1530344_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2310_p0 =  (sc_lv<16>) (sext_ln1118_761_fu_1511588_p1.read());
    } else {
        grp_fu_2310_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2310_p2() {
    grp_fu_2310_p2 = (!grp_fu_2310_p0.read().is_01() || !ap_const_lv24_89.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2310_p0.read()) * sc_biguint<24>(ap_const_lv24_89);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2311_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2311_p0 =  (sc_lv<16>) (sext_ln1118_1352_fu_1530395_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2311_p0 =  (sc_lv<16>) (sext_ln1118_764_fu_1511639_p1.read());
    } else {
        grp_fu_2311_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2311_p2() {
    grp_fu_2311_p2 = (!grp_fu_2311_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2311_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2315_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2315_p0 =  (sc_lv<16>) (sext_ln1118_1368_fu_1530615_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2315_p0 =  (sc_lv<16>) (sext_ln1118_780_fu_1511859_p1.read());
    } else {
        grp_fu_2315_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2315_p2() {
    grp_fu_2315_p2 = (!grp_fu_2315_p0.read().is_01() || !ap_const_lv24_83.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2315_p0.read()) * sc_biguint<24>(ap_const_lv24_83);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2316_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2316_p0 =  (sc_lv<16>) (sext_ln1118_1284_fu_1529633_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2316_p0 =  (sc_lv<16>) (sext_ln1118_1116_fu_1519927_p1.read());
    } else {
        grp_fu_2316_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2316_p2() {
    grp_fu_2316_p2 = (!grp_fu_2316_p0.read().is_01() || !ap_const_lv24_97.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2316_p0.read()) * sc_biguint<24>(ap_const_lv24_97);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2324_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2324_p0 =  (sc_lv<16>) (sext_ln1118_1356_fu_1530451_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2324_p0 =  (sc_lv<16>) (sext_ln1118_768_fu_1511695_p1.read());
    } else {
        grp_fu_2324_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2324_p2() {
    grp_fu_2324_p2 = (!grp_fu_2324_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2324_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2326_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2326_p0 =  (sc_lv<16>) (sext_ln1118_1361_fu_1530511_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2326_p0 =  (sc_lv<16>) (sext_ln1118_773_fu_1511755_p1.read());
    } else {
        grp_fu_2326_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2326_p2() {
    grp_fu_2326_p2 = (!grp_fu_2326_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2326_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2334_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2334_p0 =  (sc_lv<16>) (sext_ln1118_1347_fu_1530330_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2334_p0 =  (sc_lv<16>) (sext_ln1118_843_fu_1513536_p1.read());
    } else {
        grp_fu_2334_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2334_p2() {
    grp_fu_2334_p2 = (!grp_fu_2334_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2334_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2338_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2338_p0 =  (sc_lv<16>) (sext_ln1118_1262_fu_1529359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2338_p0 =  (sc_lv<16>) (sext_ln1118_674_fu_1509466_p1.read());
    } else {
        grp_fu_2338_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2338_p2() {
    grp_fu_2338_p2 = (!grp_fu_2338_p0.read().is_01() || !ap_const_lv24_FFFEE9.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2338_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEE9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2358_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2358_p0 =  (sc_lv<16>) (sext_ln1118_1287_fu_1529689_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2358_p0 =  (sc_lv<16>) (sext_ln1118_783_fu_1511915_p1.read());
    } else {
        grp_fu_2358_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2358_p2() {
    grp_fu_2358_p2 = (!grp_fu_2358_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(grp_fu_2358_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2362_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2362_p0 =  (sc_lv<16>) (sext_ln1118_1334_reg_1533037.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2362_p0 =  (sc_lv<16>) (sext_ln1118_662_fu_1509304_p1.read());
    } else {
        grp_fu_2362_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2362_p2() {
    grp_fu_2362_p2 = (!grp_fu_2362_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2362_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2365_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2365_p0 =  (sc_lv<16>) (sext_ln1118_1280_fu_1529581_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2365_p0 =  (sc_lv<16>) (sext_ln1118_692_fu_1509725_p1.read());
    } else {
        grp_fu_2365_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2365_p2() {
    grp_fu_2365_p2 = (!grp_fu_2365_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2365_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2369_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2369_p0 =  (sc_lv<16>) (sext_ln1118_1263_reg_1532992.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2369_p0 =  (sc_lv<16>) (sext_ln1118_563_fu_1507063_p1.read());
    } else {
        grp_fu_2369_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2369_p2() {
    grp_fu_2369_p2 = (!grp_fu_2369_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2369_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2377_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2377_p0 =  (sc_lv<16>) (sext_ln1118_1274_fu_1529485_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2377_p0 =  (sc_lv<16>) (sext_ln1118_770_fu_1511711_p1.read());
    } else {
        grp_fu_2377_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2377_p2() {
    grp_fu_2377_p2 = (!grp_fu_2377_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2377_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2381_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2381_p0 =  (sc_lv<16>) (sext_ln1118_1358_fu_1530467_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2381_p0 =  (sc_lv<16>) (sext_ln1118_1022_fu_1517747_p1.read());
    } else {
        grp_fu_2381_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2381_p2() {
    grp_fu_2381_p2 = (!grp_fu_2381_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2381_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2384_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2384_p0 =  (sc_lv<16>) (sext_ln1118_1368_fu_1530615_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2384_p0 =  (sc_lv<16>) (sext_ln1118_1032_fu_1517895_p1.read());
    } else {
        grp_fu_2384_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2384_p2() {
    grp_fu_2384_p2 = (!grp_fu_2384_p0.read().is_01() || !ap_const_lv24_97.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2384_p0.read()) * sc_biguint<24>(ap_const_lv24_97);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2392_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2392_p0 =  (sc_lv<16>) (sext_ln1118_1341_reg_1533043.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2392_p0 =  (sc_lv<16>) (sext_ln1118_1005_fu_1517502_p1.read());
    } else {
        grp_fu_2392_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2392_p2() {
    grp_fu_2392_p2 = (!grp_fu_2392_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(grp_fu_2392_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2393_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2393_p0 =  (sc_lv<16>) (sext_ln1118_1283_fu_1529628_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2393_p0 =  (sc_lv<16>) (sext_ln1118_1031_fu_1517890_p1.read());
    } else {
        grp_fu_2393_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2393_p2() {
    grp_fu_2393_p2 = (!grp_fu_2393_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2393_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2400_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2400_p0 =  (sc_lv<16>) (sext_ln1118_1359_fu_1530472_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2400_p0 =  (sc_lv<16>) (sext_ln1118_1107_fu_1519784_p1.read());
    } else {
        grp_fu_2400_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2400_p2() {
    grp_fu_2400_p2 = (!grp_fu_2400_p0.read().is_01() || !ap_const_lv24_FFFEA4.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2400_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEA4);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2408_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2408_p0 =  (sc_lv<16>) (sext_ln1118_1356_fu_1530451_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2408_p0 =  (sc_lv<16>) (sext_ln1118_852_fu_1513657_p1.read());
    } else {
        grp_fu_2408_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2408_p2() {
    grp_fu_2408_p2 = (!grp_fu_2408_p0.read().is_01() || !ap_const_lv24_8C.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2408_p0.read()) * sc_biguint<24>(ap_const_lv24_8C);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2409_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2409_p0 =  (sc_lv<16>) (sext_ln1118_1340_fu_1530253_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2409_p0 =  (sc_lv<16>) (sext_ln1118_1004_fu_1517496_p1.read());
    } else {
        grp_fu_2409_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2409_p2() {
    grp_fu_2409_p2 = (!grp_fu_2409_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(grp_fu_2409_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2415_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2415_p0 =  (sc_lv<16>) (sext_ln1118_1349_fu_1530344_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2415_p0 =  (sc_lv<16>) (sext_ln1118_593_fu_1507434_p1.read());
    } else {
        grp_fu_2415_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2415_p2() {
    grp_fu_2415_p2 = (!grp_fu_2415_p0.read().is_01() || !ap_const_lv24_FFFDA4.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2415_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDA4);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2423_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_2423_p0 =  (sc_lv<16>) (sext_ln1118_1372_fu_1530677_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        grp_fu_2423_p0 =  (sc_lv<16>) (sext_ln1118_1204_fu_1522021_p1.read());
    } else {
        grp_fu_2423_p0 = "XXXXXXXXXXXXXXXX";
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_grp_fu_2423_p2() {
    grp_fu_2423_p2 = (!grp_fu_2423_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(grp_fu_2423_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1001_fu_2252_p0() {
    mul_ln1118_1001_fu_2252_p0 =  (sc_lv<16>) (sext_ln1118_1010_fu_1517584_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1001_fu_2252_p2() {
    mul_ln1118_1001_fu_2252_p2 = (!mul_ln1118_1001_fu_2252_p0.read().is_01() || !ap_const_lv24_FFFDF1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1001_fu_2252_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDF1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1002_fu_2253_p0() {
    mul_ln1118_1002_fu_2253_p0 =  (sc_lv<16>) (sext_ln1118_1013_fu_1517614_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1002_fu_2253_p2() {
    mul_ln1118_1002_fu_2253_p2 = (!mul_ln1118_1002_fu_2253_p0.read().is_01() || !ap_const_lv24_89.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1002_fu_2253_p0.read()) * sc_biguint<24>(ap_const_lv24_89);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1003_fu_2254_p0() {
    mul_ln1118_1003_fu_2254_p0 =  (sc_lv<16>) (sext_ln1118_1016_fu_1517665_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1003_fu_2254_p2() {
    mul_ln1118_1003_fu_2254_p2 = (!mul_ln1118_1003_fu_2254_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1003_fu_2254_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1004_fu_2255_p0() {
    mul_ln1118_1004_fu_2255_p0 =  (sc_lv<16>) (sext_ln1118_1020_fu_1517721_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1004_fu_2255_p2() {
    mul_ln1118_1004_fu_2255_p2 = (!mul_ln1118_1004_fu_2255_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1004_fu_2255_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1005_fu_2232_p0() {
    mul_ln1118_1005_fu_2232_p0 =  (sc_lv<16>) (sext_ln1118_1023_fu_1517752_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1005_fu_2232_p2() {
    mul_ln1118_1005_fu_2232_p2 = (!mul_ln1118_1005_fu_2232_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1005_fu_2232_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1006_fu_2269_p0() {
    mul_ln1118_1006_fu_2269_p0 =  (sc_lv<16>) (sext_ln1118_1025_fu_1517791_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1006_fu_2269_p2() {
    mul_ln1118_1006_fu_2269_p2 = (!mul_ln1118_1006_fu_2269_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1006_fu_2269_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1007_fu_2186_p0() {
    mul_ln1118_1007_fu_2186_p0 = sext_ln1118_1032_fu_1517895_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1007_fu_2186_p2() {
    mul_ln1118_1007_fu_2186_p2 = (!mul_ln1118_1007_fu_2186_p0.read().is_01() || !ap_const_lv24_83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1007_fu_2186_p0.read()) * sc_biguint<24>(ap_const_lv24_83);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1008_fu_2235_p0() {
    mul_ln1118_1008_fu_2235_p0 =  (sc_lv<16>) (sext_ln1118_1035_fu_1517951_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1008_fu_2235_p2() {
    mul_ln1118_1008_fu_2235_p2 = (!mul_ln1118_1008_fu_2235_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1008_fu_2235_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1009_fu_2260_p0() {
    mul_ln1118_1009_fu_2260_p0 =  (sc_lv<16>) (sext_ln1118_980_fu_1517199_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1009_fu_2260_p2() {
    mul_ln1118_1009_fu_2260_p2 = (!mul_ln1118_1009_fu_2260_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1009_fu_2260_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1010_fu_2403_p0() {
    mul_ln1118_1010_fu_2403_p0 =  (sc_lv<16>) (sext_ln1118_984_fu_1517248_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1010_fu_2403_p2() {
    mul_ln1118_1010_fu_2403_p2 = (!mul_ln1118_1010_fu_2403_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1010_fu_2403_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1011_fu_2173_p0() {
    mul_ln1118_1011_fu_2173_p0 =  (sc_lv<16>) (sext_ln1118_985_fu_1517266_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1011_fu_2173_p2() {
    mul_ln1118_1011_fu_2173_p2 = (!mul_ln1118_1011_fu_2173_p0.read().is_01() || !ap_const_lv24_FFFF4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1011_fu_2173_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4B);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1012_fu_2116_p0() {
    mul_ln1118_1012_fu_2116_p0 = sext_ln1118_989_fu_1517317_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1012_fu_2116_p2() {
    mul_ln1118_1012_fu_2116_p2 = (!mul_ln1118_1012_fu_2116_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1012_fu_2116_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1013_fu_2117_p0() {
    mul_ln1118_1013_fu_2117_p0 =  (sc_lv<16>) (sext_ln1118_998_fu_1517422_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1013_fu_2117_p2() {
    mul_ln1118_1013_fu_2117_p2 = (!mul_ln1118_1013_fu_2117_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1013_fu_2117_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1014_fu_2026_p0() {
    mul_ln1118_1014_fu_2026_p0 =  (sc_lv<16>) (sext_ln1118_1000_fu_1517447_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1014_fu_2026_p2() {
    mul_ln1118_1014_fu_2026_p2 = (!mul_ln1118_1014_fu_2026_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1014_fu_2026_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1015_fu_2015_p0() {
    mul_ln1118_1015_fu_2015_p0 =  (sc_lv<16>) (sext_ln1118_1002_fu_1517470_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1015_fu_2015_p2() {
    mul_ln1118_1015_fu_2015_p2 = (!mul_ln1118_1015_fu_2015_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1015_fu_2015_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1017_fu_1913_p0() {
    mul_ln1118_1017_fu_1913_p0 = sext_ln1118_1006_fu_1517522_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1017_fu_1913_p2() {
    mul_ln1118_1017_fu_1913_p2 = (!mul_ln1118_1017_fu_1913_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1017_fu_1913_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1019_fu_1915_p0() {
    mul_ln1118_1019_fu_1915_p0 =  (sc_lv<16>) (sext_ln1118_1016_fu_1517665_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1019_fu_1915_p2() {
    mul_ln1118_1019_fu_1915_p2 = (!mul_ln1118_1019_fu_1915_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1019_fu_1915_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1020_fu_2020_p0() {
    mul_ln1118_1020_fu_2020_p0 =  (sc_lv<16>) (sext_ln1118_1023_fu_1517752_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1020_fu_2020_p2() {
    mul_ln1118_1020_fu_2020_p2 = (!mul_ln1118_1020_fu_2020_p0.read().is_01() || !ap_const_lv24_FFFEF5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1020_fu_2020_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEF5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1021_fu_2021_p0() {
    mul_ln1118_1021_fu_2021_p0 =  (sc_lv<16>) (sext_ln1118_1025_fu_1517791_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1021_fu_2021_p2() {
    mul_ln1118_1021_fu_2021_p2 = (!mul_ln1118_1021_fu_2021_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1021_fu_2021_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1022_fu_1872_p0() {
    mul_ln1118_1022_fu_1872_p0 =  (sc_lv<16>) (sext_ln1118_1028_fu_1517843_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1022_fu_1872_p2() {
    mul_ln1118_1022_fu_1872_p2 = (!mul_ln1118_1022_fu_1872_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1022_fu_1872_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1024_fu_1961_p0() {
    mul_ln1118_1024_fu_1961_p0 =  (sc_lv<16>) (sext_ln1118_980_fu_1517199_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1024_fu_1961_p2() {
    mul_ln1118_1024_fu_1961_p2 = (!mul_ln1118_1024_fu_1961_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1024_fu_1961_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1025_fu_2046_p0() {
    mul_ln1118_1025_fu_2046_p0 =  (sc_lv<16>) (sext_ln1118_984_fu_1517248_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1025_fu_2046_p2() {
    mul_ln1118_1025_fu_2046_p2 = (!mul_ln1118_1025_fu_2046_p0.read().is_01() || !ap_const_lv24_9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1025_fu_2046_p0.read()) * sc_biguint<24>(ap_const_lv24_9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1026_fu_2035_p0() {
    mul_ln1118_1026_fu_2035_p0 = sext_ln1118_994_fu_1517376_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1026_fu_2035_p2() {
    mul_ln1118_1026_fu_2035_p2 = (!mul_ln1118_1026_fu_2035_p0.read().is_01() || !ap_const_lv24_FFFEB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1026_fu_2035_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1027_fu_2048_p0() {
    mul_ln1118_1027_fu_2048_p0 =  (sc_lv<16>) (sext_ln1118_1000_fu_1517447_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1027_fu_2048_p2() {
    mul_ln1118_1027_fu_2048_p2 = (!mul_ln1118_1027_fu_2048_p0.read().is_01() || !ap_const_lv24_FFFEC3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1027_fu_2048_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEC3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1029_fu_2050_p0() {
    mul_ln1118_1029_fu_2050_p0 =  (sc_lv<16>) (sext_ln1118_1005_fu_1517502_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1029_fu_2050_p2() {
    mul_ln1118_1029_fu_2050_p2 = (!mul_ln1118_1029_fu_2050_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1029_fu_2050_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1030_fu_1979_p0() {
    mul_ln1118_1030_fu_1979_p0 =  (sc_lv<16>) (sext_ln1118_1007_fu_1517527_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1030_fu_1979_p2() {
    mul_ln1118_1030_fu_1979_p2 = (!mul_ln1118_1030_fu_1979_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1030_fu_1979_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1031_fu_1916_p0() {
    mul_ln1118_1031_fu_1916_p0 =  (sc_lv<16>) (sext_ln1118_1010_fu_1517584_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1031_fu_1916_p2() {
    mul_ln1118_1031_fu_1916_p2 = (!mul_ln1118_1031_fu_1916_p0.read().is_01() || !ap_const_lv24_FFFEE9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1031_fu_1916_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEE9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1035_fu_1989_p0() {
    mul_ln1118_1035_fu_1989_p0 =  (sc_lv<16>) (sext_ln1118_1025_fu_1517791_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1035_fu_1989_p2() {
    mul_ln1118_1035_fu_1989_p2 = (!mul_ln1118_1035_fu_1989_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1035_fu_1989_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1036_fu_2383_p0() {
    mul_ln1118_1036_fu_2383_p0 =  (sc_lv<16>) (sext_ln1118_1028_fu_1517843_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1036_fu_2383_p2() {
    mul_ln1118_1036_fu_2383_p2 = (!mul_ln1118_1036_fu_2383_p0.read().is_01() || !ap_const_lv24_FFFF30.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1036_fu_2383_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF30);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1038_fu_1888_p0() {
    mul_ln1118_1038_fu_1888_p0 =  (sc_lv<16>) (sext_ln1118_1035_fu_1517951_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1038_fu_1888_p2() {
    mul_ln1118_1038_fu_1888_p2 = (!mul_ln1118_1038_fu_1888_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1038_fu_1888_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1039_fu_2386_p0() {
    mul_ln1118_1039_fu_2386_p0 =  (sc_lv<16>) (sext_ln1118_980_fu_1517199_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1039_fu_2386_p2() {
    mul_ln1118_1039_fu_2386_p2 = (!mul_ln1118_1039_fu_2386_p0.read().is_01() || !ap_const_lv24_A5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1039_fu_2386_p0.read()) * sc_biguint<24>(ap_const_lv24_A5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1040_fu_1994_p0() {
    mul_ln1118_1040_fu_1994_p0 = sext_ln1118_983_fu_1517243_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1040_fu_1994_p2() {
    mul_ln1118_1040_fu_1994_p2 = (!mul_ln1118_1040_fu_1994_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1040_fu_1994_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1042_fu_1996_p0() {
    mul_ln1118_1042_fu_1996_p0 =  (sc_lv<16>) (sext_ln1118_990_fu_1517322_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1042_fu_1996_p2() {
    mul_ln1118_1042_fu_1996_p2 = (!mul_ln1118_1042_fu_1996_p0.read().is_01() || !ap_const_lv24_FFFEEB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1042_fu_1996_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1043_fu_1997_p0() {
    mul_ln1118_1043_fu_1997_p0 = sext_ln1118_997_fu_1517417_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1043_fu_1997_p2() {
    mul_ln1118_1043_fu_1997_p2 = (!mul_ln1118_1043_fu_1997_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1043_fu_1997_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1044_fu_2391_p0() {
    mul_ln1118_1044_fu_2391_p0 = sext_ln1118_999_fu_1517442_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1044_fu_2391_p2() {
    mul_ln1118_1044_fu_2391_p2 = (!mul_ln1118_1044_fu_2391_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1044_fu_2391_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1046_fu_2402_p0() {
    mul_ln1118_1046_fu_2402_p0 =  (sc_lv<16>) (sext_ln1118_1007_fu_1517527_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1046_fu_2402_p2() {
    mul_ln1118_1046_fu_2402_p2 = (!mul_ln1118_1046_fu_2402_p0.read().is_01() || !ap_const_lv24_BB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1046_fu_2402_p0.read()) * sc_biguint<24>(ap_const_lv24_BB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1047_fu_1838_p0() {
    mul_ln1118_1047_fu_1838_p0 =  (sc_lv<16>) (sext_ln1118_1011_fu_1517590_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1047_fu_1838_p2() {
    mul_ln1118_1047_fu_1838_p2 = (!mul_ln1118_1047_fu_1838_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1047_fu_1838_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1048_fu_1839_p0() {
    mul_ln1118_1048_fu_1839_p0 =  (sc_lv<16>) (sext_ln1118_1013_fu_1517614_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1048_fu_1839_p2() {
    mul_ln1118_1048_fu_1839_p2 = (!mul_ln1118_1048_fu_1839_p0.read().is_01() || !ap_const_lv24_FFFDA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1048_fu_1839_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDA4);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1049_fu_1840_p0() {
    mul_ln1118_1049_fu_1840_p0 =  (sc_lv<16>) (sext_ln1118_1016_fu_1517665_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1049_fu_1840_p2() {
    mul_ln1118_1049_fu_1840_p2 = (!mul_ln1118_1049_fu_1840_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1049_fu_1840_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1050_fu_2418_p0() {
    mul_ln1118_1050_fu_2418_p0 =  (sc_lv<16>) (sext_ln1118_1020_fu_1517721_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1050_fu_2418_p2() {
    mul_ln1118_1050_fu_2418_p2 = (!mul_ln1118_1050_fu_2418_p0.read().is_01() || !ap_const_lv24_8C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1050_fu_2418_p0.read()) * sc_biguint<24>(ap_const_lv24_8C);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1051_fu_2335_p0() {
    mul_ln1118_1051_fu_2335_p0 =  (sc_lv<16>) (sext_ln1118_1023_fu_1517752_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1051_fu_2335_p2() {
    mul_ln1118_1051_fu_2335_p2 = (!mul_ln1118_1051_fu_2335_p0.read().is_01() || !ap_const_lv24_FFFEA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1051_fu_2335_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEA4);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1052_fu_1843_p0() {
    mul_ln1118_1052_fu_1843_p0 =  (sc_lv<16>) (sext_ln1118_1025_fu_1517791_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1052_fu_1843_p2() {
    mul_ln1118_1052_fu_1843_p2 = (!mul_ln1118_1052_fu_1843_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1052_fu_1843_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1053_fu_1844_p0() {
    mul_ln1118_1053_fu_1844_p0 =  (sc_lv<16>) (sext_ln1118_1028_fu_1517843_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1053_fu_1844_p2() {
    mul_ln1118_1053_fu_1844_p2 = (!mul_ln1118_1053_fu_1844_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1053_fu_1844_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1055_fu_2411_p0() {
    mul_ln1118_1055_fu_2411_p0 =  (sc_lv<16>) (sext_ln1118_1068_fu_1519280_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1055_fu_2411_p2() {
    mul_ln1118_1055_fu_2411_p2 = (!mul_ln1118_1055_fu_2411_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1055_fu_2411_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1056_fu_1847_p0() {
    mul_ln1118_1056_fu_1847_p0 =  (sc_lv<16>) (sext_ln1118_1082_fu_1519454_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1056_fu_1847_p2() {
    mul_ln1118_1056_fu_1847_p2 = (!mul_ln1118_1056_fu_1847_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1056_fu_1847_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1058_fu_1861_p0() {
    mul_ln1118_1058_fu_1861_p0 =  (sc_lv<16>) (sext_ln1118_1086_fu_1519492_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1058_fu_1861_p2() {
    mul_ln1118_1058_fu_1861_p2 = (!mul_ln1118_1058_fu_1861_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1058_fu_1861_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1059_fu_1967_p0() {
    mul_ln1118_1059_fu_1967_p0 =  (sc_lv<16>) (sext_ln1118_1087_fu_1519512_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1059_fu_1967_p2() {
    mul_ln1118_1059_fu_1967_p2 = (!mul_ln1118_1059_fu_1967_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1059_fu_1967_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1060_fu_2373_p0() {
    mul_ln1118_1060_fu_2373_p0 =  (sc_lv<16>) (sext_ln1118_1088_fu_1519528_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1060_fu_2373_p2() {
    mul_ln1118_1060_fu_2373_p2 = (!mul_ln1118_1060_fu_2373_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1060_fu_2373_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1061_fu_1969_p0() {
    mul_ln1118_1061_fu_1969_p0 =  (sc_lv<16>) (sext_ln1118_1095_fu_1519622_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1061_fu_1969_p2() {
    mul_ln1118_1061_fu_1969_p2 = (!mul_ln1118_1061_fu_1969_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1061_fu_1969_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1062_fu_2363_p0() {
    mul_ln1118_1062_fu_2363_p0 =  (sc_lv<16>) (sext_ln1118_1105_fu_1519759_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1062_fu_2363_p2() {
    mul_ln1118_1062_fu_2363_p2 = (!mul_ln1118_1062_fu_2363_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1062_fu_2363_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1063_fu_1971_p0() {
    mul_ln1118_1063_fu_1971_p0 =  (sc_lv<16>) (sext_ln1118_1120_fu_1519989_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1063_fu_1971_p2() {
    mul_ln1118_1063_fu_1971_p2 = (!mul_ln1118_1063_fu_1971_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1063_fu_1971_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1064_fu_1972_p0() {
    mul_ln1118_1064_fu_1972_p0 =  (sc_lv<16>) (sext_ln1118_1064_fu_1519231_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1064_fu_1972_p2() {
    mul_ln1118_1064_fu_1972_p2 = (!mul_ln1118_1064_fu_1972_p0.read().is_01() || !ap_const_lv24_FFFDD3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1064_fu_1972_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1065_fu_2366_p0() {
    mul_ln1118_1065_fu_2366_p0 =  (sc_lv<16>) (sext_ln1118_1068_fu_1519280_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1065_fu_2366_p2() {
    mul_ln1118_1065_fu_2366_p2 = (!mul_ln1118_1065_fu_2366_p0.read().is_01() || !ap_const_lv24_86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1065_fu_2366_p0.read()) * sc_biguint<24>(ap_const_lv24_86);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1066_fu_2367_p0() {
    mul_ln1118_1066_fu_2367_p0 =  (sc_lv<16>) (sext_ln1118_1069_fu_1519298_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1066_fu_2367_p2() {
    mul_ln1118_1066_fu_2367_p2 = (!mul_ln1118_1066_fu_2367_p0.read().is_01() || !ap_const_lv24_E7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1066_fu_2367_p0.read()) * sc_biguint<24>(ap_const_lv24_E7);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1067_fu_2160_p0() {
    mul_ln1118_1067_fu_2160_p0 =  (sc_lv<16>) (sext_ln1118_1074_fu_1519354_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1067_fu_2160_p2() {
    mul_ln1118_1067_fu_2160_p2 = (!mul_ln1118_1067_fu_2160_p0.read().is_01() || !ap_const_lv24_FFFF33.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1067_fu_2160_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF33);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1068_fu_1976_p0() {
    mul_ln1118_1068_fu_1976_p0 =  (sc_lv<16>) (sext_ln1118_1084_fu_1519479_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1068_fu_1976_p2() {
    mul_ln1118_1068_fu_1976_p2 = (!mul_ln1118_1068_fu_1976_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1068_fu_1976_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1069_fu_1954_p0() {
    mul_ln1118_1069_fu_1954_p0 =  (sc_lv<16>) (sext_ln1118_1087_fu_1519512_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1069_fu_1954_p2() {
    mul_ln1118_1069_fu_1954_p2 = (!mul_ln1118_1069_fu_1954_p0.read().is_01() || !ap_const_lv24_FFFDD9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1069_fu_1954_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1070_fu_2208_p0() {
    mul_ln1118_1070_fu_2208_p0 =  (sc_lv<16>) (sext_ln1118_1091_fu_1519559_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1070_fu_2208_p2() {
    mul_ln1118_1070_fu_2208_p2 = (!mul_ln1118_1070_fu_2208_p0.read().is_01() || !ap_const_lv24_FFFDB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1070_fu_2208_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDB3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1072_fu_2234_p0() {
    mul_ln1118_1072_fu_2234_p0 =  (sc_lv<16>) (sext_ln1118_1097_fu_1519646_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1072_fu_2234_p2() {
    mul_ln1118_1072_fu_2234_p2 = (!mul_ln1118_1072_fu_2234_p0.read().is_01() || !ap_const_lv24_89.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1072_fu_2234_p0.read()) * sc_biguint<24>(ap_const_lv24_89);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1073_fu_2247_p0() {
    mul_ln1118_1073_fu_2247_p0 =  (sc_lv<16>) (sext_ln1118_1100_fu_1519697_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1073_fu_2247_p2() {
    mul_ln1118_1073_fu_2247_p2 = (!mul_ln1118_1073_fu_2247_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1073_fu_2247_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1074_fu_2236_p0() {
    mul_ln1118_1074_fu_2236_p0 = sext_ln1118_1104_fu_1519753_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1074_fu_2236_p2() {
    mul_ln1118_1074_fu_2236_p2 = (!mul_ln1118_1074_fu_2236_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1074_fu_2236_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1075_fu_2237_p0() {
    mul_ln1118_1075_fu_2237_p0 =  (sc_lv<16>) (sext_ln1118_1107_fu_1519784_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1075_fu_2237_p2() {
    mul_ln1118_1075_fu_2237_p2 = (!mul_ln1118_1075_fu_2237_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1075_fu_2237_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1077_fu_2227_p0() {
    mul_ln1118_1077_fu_2227_p0 = sext_ln1118_1116_fu_1519927_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1077_fu_2227_p2() {
    mul_ln1118_1077_fu_2227_p2 = (!mul_ln1118_1077_fu_2227_p0.read().is_01() || !ap_const_lv24_83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1077_fu_2227_p0.read()) * sc_biguint<24>(ap_const_lv24_83);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1079_fu_2241_p0() {
    mul_ln1118_1079_fu_2241_p0 =  (sc_lv<16>) (sext_ln1118_1064_fu_1519231_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1079_fu_2241_p2() {
    mul_ln1118_1079_fu_2241_p2 = (!mul_ln1118_1079_fu_2241_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1079_fu_2241_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1080_fu_2242_p0() {
    mul_ln1118_1080_fu_2242_p0 =  (sc_lv<16>) (sext_ln1118_1068_fu_1519280_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1080_fu_2242_p2() {
    mul_ln1118_1080_fu_2242_p2 = (!mul_ln1118_1080_fu_2242_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1080_fu_2242_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1081_fu_2219_p0() {
    mul_ln1118_1081_fu_2219_p0 =  (sc_lv<16>) (sext_ln1118_1069_fu_1519298_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1081_fu_2219_p2() {
    mul_ln1118_1081_fu_2219_p2 = (!mul_ln1118_1081_fu_2219_p0.read().is_01() || !ap_const_lv24_FFFF4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1081_fu_2219_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4B);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1082_fu_2152_p0() {
    mul_ln1118_1082_fu_2152_p0 = sext_ln1118_1073_fu_1519349_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1082_fu_2152_p2() {
    mul_ln1118_1082_fu_2152_p2 = (!mul_ln1118_1082_fu_2152_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1082_fu_2152_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1083_fu_2257_p0() {
    mul_ln1118_1083_fu_2257_p0 =  (sc_lv<16>) (sext_ln1118_1082_fu_1519454_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1083_fu_2257_p2() {
    mul_ln1118_1083_fu_2257_p2 = (!mul_ln1118_1083_fu_2257_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1083_fu_2257_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1085_fu_2051_p0() {
    mul_ln1118_1085_fu_2051_p0 =  (sc_lv<16>) (sext_ln1118_1086_fu_1519492_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1085_fu_2051_p2() {
    mul_ln1118_1085_fu_2051_p2 = (!mul_ln1118_1085_fu_2051_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1085_fu_2051_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1086_fu_2156_p0() {
    mul_ln1118_1086_fu_2156_p0 =  (sc_lv<16>) (sext_ln1118_1088_fu_1519528_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1086_fu_2156_p2() {
    mul_ln1118_1086_fu_2156_p2 = (!mul_ln1118_1086_fu_2156_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1086_fu_2156_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1087_fu_2157_p0() {
    mul_ln1118_1087_fu_2157_p0 = sext_ln1118_1090_fu_1519554_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1087_fu_2157_p2() {
    mul_ln1118_1087_fu_2157_p2 = (!mul_ln1118_1087_fu_2157_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1087_fu_2157_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1088_fu_2158_p0() {
    mul_ln1118_1088_fu_2158_p0 =  (sc_lv<16>) (sext_ln1118_1097_fu_1519646_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1088_fu_2158_p2() {
    mul_ln1118_1088_fu_2158_p2 = (!mul_ln1118_1088_fu_2158_p0.read().is_01() || !ap_const_lv24_FFFEEC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1088_fu_2158_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEC);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1090_fu_1952_p0() {
    mul_ln1118_1090_fu_1952_p0 =  (sc_lv<16>) (sext_ln1118_1107_fu_1519784_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1090_fu_1952_p2() {
    mul_ln1118_1090_fu_1952_p2 = (!mul_ln1118_1090_fu_1952_p0.read().is_01() || !ap_const_lv24_FFFEF5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1090_fu_1952_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEF5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1091_fu_2057_p0() {
    mul_ln1118_1091_fu_2057_p0 =  (sc_lv<16>) (sext_ln1118_1109_fu_1519823_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1091_fu_2057_p2() {
    mul_ln1118_1091_fu_2057_p2 = (!mul_ln1118_1091_fu_2057_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1091_fu_2057_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1094_fu_2038_p0() {
    mul_ln1118_1094_fu_2038_p0 =  (sc_lv<16>) (sext_ln1118_1064_fu_1519231_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1094_fu_2038_p2() {
    mul_ln1118_1094_fu_2038_p2 = (!mul_ln1118_1094_fu_2038_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1094_fu_2038_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1095_fu_2003_p0() {
    mul_ln1118_1095_fu_2003_p0 =  (sc_lv<16>) (sext_ln1118_1068_fu_1519280_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1095_fu_2003_p2() {
    mul_ln1118_1095_fu_2003_p2 = (!mul_ln1118_1095_fu_2003_p0.read().is_01() || !ap_const_lv24_9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1095_fu_2003_p0.read()) * sc_biguint<24>(ap_const_lv24_9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1096_fu_2052_p0() {
    mul_ln1118_1096_fu_2052_p0 = sext_ln1118_1078_fu_1519408_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1096_fu_2052_p2() {
    mul_ln1118_1096_fu_2052_p2 = (!mul_ln1118_1096_fu_2052_p0.read().is_01() || !ap_const_lv24_FFFEB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1096_fu_2052_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1097_fu_2356_p0() {
    mul_ln1118_1097_fu_2356_p0 =  (sc_lv<16>) (sext_ln1118_1084_fu_1519479_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1097_fu_2356_p2() {
    mul_ln1118_1097_fu_2356_p2 = (!mul_ln1118_1097_fu_2356_p0.read().is_01() || !ap_const_lv24_FFFEC3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1097_fu_2356_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEC3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1099_fu_2031_p0() {
    mul_ln1118_1099_fu_2031_p0 =  (sc_lv<16>) (sext_ln1118_1089_fu_1519534_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1099_fu_2031_p2() {
    mul_ln1118_1099_fu_2031_p2 = (!mul_ln1118_1099_fu_2031_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1099_fu_2031_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1100_fu_2056_p0() {
    mul_ln1118_1100_fu_2056_p0 =  (sc_lv<16>) (sext_ln1118_1091_fu_1519559_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1100_fu_2056_p2() {
    mul_ln1118_1100_fu_2056_p2 = (!mul_ln1118_1100_fu_2056_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1100_fu_2056_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1101_fu_2033_p0() {
    mul_ln1118_1101_fu_2033_p0 = sext_ln1118_1094_fu_1519616_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1101_fu_2033_p2() {
    mul_ln1118_1101_fu_2033_p2 = (!mul_ln1118_1101_fu_2033_p0.read().is_01() || !ap_const_lv24_FFFEE9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1101_fu_2033_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEE9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1103_fu_2059_p0() {
    mul_ln1118_1103_fu_2059_p0 =  (sc_lv<16>) (sext_ln1118_1105_fu_1519759_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1103_fu_2059_p2() {
    mul_ln1118_1103_fu_2059_p2 = (!mul_ln1118_1103_fu_2059_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1103_fu_2059_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1104_fu_2024_p0() {
    mul_ln1118_1104_fu_2024_p0 = sext_ln1118_1106_fu_1519779_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1104_fu_2024_p2() {
    mul_ln1118_1104_fu_2024_p2 = (!mul_ln1118_1104_fu_2024_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1104_fu_2024_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1105_fu_2337_p0() {
    mul_ln1118_1105_fu_2337_p0 =  (sc_lv<16>) (sext_ln1118_1109_fu_1519823_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1105_fu_2337_p2() {
    mul_ln1118_1105_fu_2337_p2 = (!mul_ln1118_1105_fu_2337_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1105_fu_2337_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1106_fu_2419_p0() {
    mul_ln1118_1106_fu_2419_p0 =  (sc_lv<16>) (sext_ln1118_1112_fu_1519875_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1106_fu_2419_p2() {
    mul_ln1118_1106_fu_2419_p2 = (!mul_ln1118_1106_fu_2419_p0.read().is_01() || !ap_const_lv24_FFFF30.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1106_fu_2419_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF30);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1108_fu_2340_p0() {
    mul_ln1118_1108_fu_2340_p0 = sext_ln1118_1119_fu_1519983_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1108_fu_2340_p2() {
    mul_ln1118_1108_fu_2340_p2 = (!mul_ln1118_1108_fu_2340_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1108_fu_2340_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1109_fu_2133_p0() {
    mul_ln1118_1109_fu_2133_p0 =  (sc_lv<16>) (sext_ln1118_1064_fu_1519231_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1109_fu_2133_p2() {
    mul_ln1118_1109_fu_2133_p2 = (!mul_ln1118_1109_fu_2133_p0.read().is_01() || !ap_const_lv24_A5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1109_fu_2133_p0.read()) * sc_biguint<24>(ap_const_lv24_A5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1110_fu_2238_p0() {
    mul_ln1118_1110_fu_2238_p0 = sext_ln1118_1067_fu_1519275_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1110_fu_2238_p2() {
    mul_ln1118_1110_fu_2238_p2 = (!mul_ln1118_1110_fu_2238_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1110_fu_2238_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1111_fu_2343_p0() {
    mul_ln1118_1111_fu_2343_p0 =  (sc_lv<16>) (sext_ln1118_1069_fu_1519298_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1111_fu_2343_p2() {
    mul_ln1118_1111_fu_2343_p2 = (!mul_ln1118_1111_fu_2343_p0.read().is_01() || !ap_const_lv24_FFFE24.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1111_fu_2343_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE24);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1112_fu_2344_p0() {
    mul_ln1118_1112_fu_2344_p0 =  (sc_lv<16>) (sext_ln1118_1074_fu_1519354_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1112_fu_2344_p2() {
    mul_ln1118_1112_fu_2344_p2 = (!mul_ln1118_1112_fu_2344_p0.read().is_01() || !ap_const_lv24_FFFEEB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1112_fu_2344_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1113_fu_2331_p0() {
    mul_ln1118_1113_fu_2331_p0 = sext_ln1118_1081_fu_1519449_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1113_fu_2331_p2() {
    mul_ln1118_1113_fu_2331_p2 = (!mul_ln1118_1113_fu_2331_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1113_fu_2331_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1114_fu_1930_p0() {
    mul_ln1118_1114_fu_1930_p0 = sext_ln1118_1083_fu_1519474_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1114_fu_1930_p2() {
    mul_ln1118_1114_fu_1930_p2 = (!mul_ln1118_1114_fu_1930_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1114_fu_1930_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1115_fu_2139_p0() {
    mul_ln1118_1115_fu_2139_p0 =  (sc_lv<16>) (sext_ln1118_1089_fu_1519534_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1115_fu_2139_p2() {
    mul_ln1118_1115_fu_2139_p2 = (!mul_ln1118_1115_fu_2139_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1115_fu_2139_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1116_fu_2348_p0() {
    mul_ln1118_1116_fu_2348_p0 =  (sc_lv<16>) (sext_ln1118_1091_fu_1519559_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1116_fu_2348_p2() {
    mul_ln1118_1116_fu_2348_p2 = (!mul_ln1118_1116_fu_2348_p0.read().is_01() || !ap_const_lv24_BB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1116_fu_2348_p0.read()) * sc_biguint<24>(ap_const_lv24_BB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1117_fu_1867_p0() {
    mul_ln1118_1117_fu_1867_p0 =  (sc_lv<16>) (sext_ln1118_1095_fu_1519622_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1117_fu_1867_p2() {
    mul_ln1118_1117_fu_1867_p2 = (!mul_ln1118_1117_fu_1867_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1117_fu_1867_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1118_fu_1832_p0() {
    mul_ln1118_1118_fu_1832_p0 =  (sc_lv<16>) (sext_ln1118_1097_fu_1519646_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1118_fu_1832_p2() {
    mul_ln1118_1118_fu_1832_p2 = (!mul_ln1118_1118_fu_1832_p0.read().is_01() || !ap_const_lv24_FFFDA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1118_fu_1832_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDA4);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1119_fu_1869_p0() {
    mul_ln1118_1119_fu_1869_p0 =  (sc_lv<16>) (sext_ln1118_1100_fu_1519697_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1119_fu_1869_p2() {
    mul_ln1118_1119_fu_1869_p2 = (!mul_ln1118_1119_fu_1869_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1119_fu_1869_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1122_fu_2341_p0() {
    mul_ln1118_1122_fu_2341_p0 =  (sc_lv<16>) (sext_ln1118_1109_fu_1519823_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1122_fu_2341_p2() {
    mul_ln1118_1122_fu_2341_p2 = (!mul_ln1118_1122_fu_2341_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1122_fu_2341_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1123_fu_1873_p0() {
    mul_ln1118_1123_fu_1873_p0 =  (sc_lv<16>) (sext_ln1118_1112_fu_1519875_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1123_fu_1873_p2() {
    mul_ln1118_1123_fu_1873_p2 = (!mul_ln1118_1123_fu_1873_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1123_fu_1873_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1124_fu_2355_p0() {
    mul_ln1118_1124_fu_2355_p0 =  (sc_lv<16>) (sext_ln1118_1120_fu_1519989_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1124_fu_2355_p2() {
    mul_ln1118_1124_fu_2355_p2 = (!mul_ln1118_1124_fu_2355_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1124_fu_2355_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1125_fu_2380_p0() {
    mul_ln1118_1125_fu_2380_p0 =  (sc_lv<16>) (sext_ln1118_1152_fu_1521312_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1125_fu_2380_p2() {
    mul_ln1118_1125_fu_2380_p2 = (!mul_ln1118_1125_fu_2380_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1125_fu_2380_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1126_fu_2170_p0() {
    mul_ln1118_1126_fu_2170_p0 =  (sc_lv<16>) (sext_ln1118_1166_fu_1521486_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1126_fu_2170_p2() {
    mul_ln1118_1126_fu_2170_p2 = (!mul_ln1118_1126_fu_2170_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1126_fu_2170_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1127_fu_1865_p0() {
    mul_ln1118_1127_fu_1865_p0 =  (sc_lv<16>) (sext_ln1118_1168_fu_1521511_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1127_fu_1865_p2() {
    mul_ln1118_1127_fu_1865_p2 = (!mul_ln1118_1127_fu_1865_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1127_fu_1865_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1129_fu_1922_p0() {
    mul_ln1118_1129_fu_1922_p0 =  (sc_lv<16>) (sext_ln1118_1171_fu_1521544_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1129_fu_1922_p2() {
    mul_ln1118_1129_fu_1922_p2 = (!mul_ln1118_1129_fu_1922_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1129_fu_1922_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1130_fu_2420_p0() {
    mul_ln1118_1130_fu_2420_p0 =  (sc_lv<16>) (sext_ln1118_1172_fu_1521560_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1130_fu_2420_p2() {
    mul_ln1118_1130_fu_2420_p2 = (!mul_ln1118_1130_fu_2420_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1130_fu_2420_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1131_fu_2164_p0() {
    mul_ln1118_1131_fu_2164_p0 =  (sc_lv<16>) (sext_ln1118_1179_fu_1521654_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1131_fu_2164_p2() {
    mul_ln1118_1131_fu_2164_p2 = (!mul_ln1118_1131_fu_2164_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1131_fu_2164_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1132_fu_2422_p0() {
    mul_ln1118_1132_fu_2422_p0 =  (sc_lv<16>) (sext_ln1118_1189_fu_1521791_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1132_fu_2422_p2() {
    mul_ln1118_1132_fu_2422_p2 = (!mul_ln1118_1132_fu_2422_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1132_fu_2422_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1134_fu_2320_p0() {
    mul_ln1118_1134_fu_2320_p0 =  (sc_lv<16>) (sext_ln1118_1148_fu_1521263_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1134_fu_2320_p2() {
    mul_ln1118_1134_fu_2320_p2 = (!mul_ln1118_1134_fu_2320_p0.read().is_01() || !ap_const_lv24_FFFDD3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1134_fu_2320_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1135_fu_2321_p0() {
    mul_ln1118_1135_fu_2321_p0 =  (sc_lv<16>) (sext_ln1118_1152_fu_1521312_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1135_fu_2321_p2() {
    mul_ln1118_1135_fu_2321_p2 = (!mul_ln1118_1135_fu_2321_p0.read().is_01() || !ap_const_lv24_86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1135_fu_2321_p0.read()) * sc_biguint<24>(ap_const_lv24_86);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1137_fu_2427_p0() {
    mul_ln1118_1137_fu_2427_p0 =  (sc_lv<16>) (sext_ln1118_1158_fu_1521386_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1137_fu_2427_p2() {
    mul_ln1118_1137_fu_2427_p2 = (!mul_ln1118_1137_fu_2427_p0.read().is_01() || !ap_const_lv24_FFFF33.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1137_fu_2427_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF33);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1138_fu_2359_p0() {
    mul_ln1118_1138_fu_2359_p0 =  (sc_lv<16>) (sext_ln1118_1168_fu_1521511_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1138_fu_2359_p2() {
    mul_ln1118_1138_fu_2359_p2 = (!mul_ln1118_1138_fu_2359_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1138_fu_2359_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1139_fu_2094_p0() {
    mul_ln1118_1139_fu_2094_p0 =  (sc_lv<16>) (sext_ln1118_1171_fu_1521544_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1139_fu_2094_p2() {
    mul_ln1118_1139_fu_2094_p2 = (!mul_ln1118_1139_fu_2094_p0.read().is_01() || !ap_const_lv24_FFFDD9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1139_fu_2094_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1140_fu_2037_p0() {
    mul_ln1118_1140_fu_2037_p0 =  (sc_lv<16>) (sext_ln1118_1175_fu_1521591_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1140_fu_2037_p2() {
    mul_ln1118_1140_fu_2037_p2 = (!mul_ln1118_1140_fu_2037_p0.read().is_01() || !ap_const_lv24_FFFDB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1140_fu_2037_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDB3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1141_fu_2166_p0() {
    mul_ln1118_1141_fu_2166_p0 =  (sc_lv<16>) (sext_ln1118_1178_fu_1521648_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1141_fu_2166_p2() {
    mul_ln1118_1141_fu_2166_p2 = (!mul_ln1118_1141_fu_2166_p0.read().is_01() || !ap_const_lv24_FFFDF1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1141_fu_2166_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDF1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1142_fu_2287_p0() {
    mul_ln1118_1142_fu_2287_p0 =  (sc_lv<16>) (sext_ln1118_1181_fu_1521678_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1142_fu_2287_p2() {
    mul_ln1118_1142_fu_2287_p2 = (!mul_ln1118_1142_fu_2287_p0.read().is_01() || !ap_const_lv24_89.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1142_fu_2287_p0.read()) * sc_biguint<24>(ap_const_lv24_89);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1143_fu_2264_p0() {
    mul_ln1118_1143_fu_2264_p0 =  (sc_lv<16>) (sext_ln1118_1184_fu_1521729_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1143_fu_2264_p2() {
    mul_ln1118_1143_fu_2264_p2 = (!mul_ln1118_1143_fu_2264_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1143_fu_2264_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1144_fu_2289_p0() {
    mul_ln1118_1144_fu_2289_p0 =  (sc_lv<16>) (sext_ln1118_1188_fu_1521785_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1144_fu_2289_p2() {
    mul_ln1118_1144_fu_2289_p2 = (!mul_ln1118_1144_fu_2289_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1144_fu_2289_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1145_fu_2266_p0() {
    mul_ln1118_1145_fu_2266_p0 = sext_ln1118_1191_fu_1521816_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1145_fu_2266_p2() {
    mul_ln1118_1145_fu_2266_p2 = (!mul_ln1118_1145_fu_2266_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1145_fu_2266_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1146_fu_2291_p0() {
    mul_ln1118_1146_fu_2291_p0 =  (sc_lv<16>) (sext_ln1118_1193_fu_1521855_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1146_fu_2291_p2() {
    mul_ln1118_1146_fu_2291_p2 = (!mul_ln1118_1146_fu_2291_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1146_fu_2291_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1147_fu_2292_p0() {
    mul_ln1118_1147_fu_2292_p0 =  (sc_lv<16>) (sext_ln1118_1200_fu_1521959_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1147_fu_2292_p2() {
    mul_ln1118_1147_fu_2292_p2 = (!mul_ln1118_1147_fu_2292_p0.read().is_01() || !ap_const_lv24_83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1147_fu_2292_p0.read()) * sc_biguint<24>(ap_const_lv24_83);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1150_fu_2211_p0() {
    mul_ln1118_1150_fu_2211_p0 =  (sc_lv<16>) (sext_ln1118_1152_fu_1521312_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1150_fu_2211_p2() {
    mul_ln1118_1150_fu_2211_p2 = (!mul_ln1118_1150_fu_2211_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1150_fu_2211_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1151_fu_2284_p0() {
    mul_ln1118_1151_fu_2284_p0 =  (sc_lv<16>) (sext_ln1118_1153_fu_1521330_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1151_fu_2284_p2() {
    mul_ln1118_1151_fu_2284_p2 = (!mul_ln1118_1151_fu_2284_p0.read().is_01() || !ap_const_lv24_FFFF4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1151_fu_2284_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4B);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1152_fu_2396_p0() {
    mul_ln1118_1152_fu_2396_p0 = sext_ln1118_1157_fu_1521381_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1152_fu_2396_p2() {
    mul_ln1118_1152_fu_2396_p2 = (!mul_ln1118_1152_fu_2396_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1152_fu_2396_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1153_fu_1900_p0() {
    mul_ln1118_1153_fu_1900_p0 =  (sc_lv<16>) (sext_ln1118_1166_fu_1521486_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1153_fu_1900_p2() {
    mul_ln1118_1153_fu_1900_p2 = (!mul_ln1118_1153_fu_1900_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1153_fu_1900_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1154_fu_2005_p0() {
    mul_ln1118_1154_fu_2005_p0 =  (sc_lv<16>) (sext_ln1118_1168_fu_1521511_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1154_fu_2005_p2() {
    mul_ln1118_1154_fu_2005_p2 = (!mul_ln1118_1154_fu_2005_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1154_fu_2005_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1155_fu_2006_p0() {
    mul_ln1118_1155_fu_2006_p0 = sext_ln1118_1170_fu_1521534_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1155_fu_2006_p2() {
    mul_ln1118_1155_fu_2006_p2 = (!mul_ln1118_1155_fu_2006_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1155_fu_2006_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1156_fu_1903_p0() {
    mul_ln1118_1156_fu_1903_p0 =  (sc_lv<16>) (sext_ln1118_1172_fu_1521560_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1156_fu_1903_p2() {
    mul_ln1118_1156_fu_1903_p2 = (!mul_ln1118_1156_fu_1903_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1156_fu_1903_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1158_fu_1905_p0() {
    mul_ln1118_1158_fu_1905_p0 =  (sc_lv<16>) (sext_ln1118_1181_fu_1521678_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1158_fu_1905_p2() {
    mul_ln1118_1158_fu_1905_p2 = (!mul_ln1118_1158_fu_1905_p0.read().is_01() || !ap_const_lv24_FFFEEC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1158_fu_1905_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEC);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1159_fu_2114_p0() {
    mul_ln1118_1159_fu_2114_p0 =  (sc_lv<16>) (sext_ln1118_1184_fu_1521729_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1159_fu_2114_p2() {
    mul_ln1118_1159_fu_2114_p2 = (!mul_ln1118_1159_fu_2114_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1159_fu_2114_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1161_fu_1908_p0() {
    mul_ln1118_1161_fu_1908_p0 =  (sc_lv<16>) (sext_ln1118_1193_fu_1521855_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1161_fu_1908_p2() {
    mul_ln1118_1161_fu_1908_p2 = (!mul_ln1118_1161_fu_1908_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1161_fu_1908_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1162_fu_1909_p0() {
    mul_ln1118_1162_fu_1909_p0 =  (sc_lv<16>) (sext_ln1118_1196_fu_1521907_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1162_fu_1909_p2() {
    mul_ln1118_1162_fu_1909_p2 = (!mul_ln1118_1162_fu_1909_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1162_fu_1909_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1163_fu_2407_p0() {
    mul_ln1118_1163_fu_2407_p0 = sext_ln1118_1199_fu_1521954_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1163_fu_2407_p2() {
    mul_ln1118_1163_fu_2407_p2 = (!mul_ln1118_1163_fu_2407_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1163_fu_2407_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1164_fu_1911_p0() {
    mul_ln1118_1164_fu_1911_p0 =  (sc_lv<16>) (sext_ln1118_1148_fu_1521263_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1164_fu_1911_p2() {
    mul_ln1118_1164_fu_1911_p2 = (!mul_ln1118_1164_fu_1911_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1164_fu_1911_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1165_fu_2092_p0() {
    mul_ln1118_1165_fu_2092_p0 =  (sc_lv<16>) (sext_ln1118_1152_fu_1521312_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1165_fu_2092_p2() {
    mul_ln1118_1165_fu_2092_p2 = (!mul_ln1118_1165_fu_2092_p0.read().is_01() || !ap_const_lv24_9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1165_fu_2092_p0.read()) * sc_biguint<24>(ap_const_lv24_9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1166_fu_2105_p0() {
    mul_ln1118_1166_fu_2105_p0 = sext_ln1118_1162_fu_1521440_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1166_fu_2105_p2() {
    mul_ln1118_1166_fu_2105_p2 = (!mul_ln1118_1166_fu_2105_p0.read().is_01() || !ap_const_lv24_FFFEB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1166_fu_2105_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1167_fu_2106_p0() {
    mul_ln1118_1167_fu_2106_p0 =  (sc_lv<16>) (sext_ln1118_1168_fu_1521511_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1167_fu_2106_p2() {
    mul_ln1118_1167_fu_2106_p2 = (!mul_ln1118_1167_fu_2106_p0.read().is_01() || !ap_const_lv24_FFFEC3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1167_fu_2106_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEC3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1168_fu_2095_p0() {
    mul_ln1118_1168_fu_2095_p0 = sext_ln1118_1169_fu_1521529_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1168_fu_2095_p2() {
    mul_ln1118_1168_fu_2095_p2 = (!mul_ln1118_1168_fu_2095_p0.read().is_01() || !ap_const_lv24_FFFEBD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1168_fu_2095_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEBD);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1169_fu_1940_p0() {
    mul_ln1118_1169_fu_1940_p0 =  (sc_lv<16>) (sext_ln1118_1173_fu_1521566_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1169_fu_1940_p2() {
    mul_ln1118_1169_fu_1940_p2 = (!mul_ln1118_1169_fu_1940_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1169_fu_1940_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1170_fu_2085_p0() {
    mul_ln1118_1170_fu_2085_p0 =  (sc_lv<16>) (sext_ln1118_1175_fu_1521591_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1170_fu_2085_p2() {
    mul_ln1118_1170_fu_2085_p2 = (!mul_ln1118_1170_fu_2085_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1170_fu_2085_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1171_fu_2122_p0() {
    mul_ln1118_1171_fu_2122_p0 =  (sc_lv<16>) (sext_ln1118_1178_fu_1521648_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1171_fu_2122_p2() {
    mul_ln1118_1171_fu_2122_p2 = (!mul_ln1118_1171_fu_2122_p0.read().is_01() || !ap_const_lv24_FFFEE9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1171_fu_2122_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEE9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1172_fu_2075_p0() {
    mul_ln1118_1172_fu_2075_p0 =  (sc_lv<16>) (sext_ln1118_1184_fu_1521729_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1172_fu_2075_p2() {
    mul_ln1118_1172_fu_2075_p2 = (!mul_ln1118_1172_fu_2075_p0.read().is_01() || !ap_const_lv24_BB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1172_fu_2075_p0.read()) * sc_biguint<24>(ap_const_lv24_BB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1173_fu_2040_p0() {
    mul_ln1118_1173_fu_2040_p0 =  (sc_lv<16>) (sext_ln1118_1189_fu_1521791_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1173_fu_2040_p2() {
    mul_ln1118_1173_fu_2040_p2 = (!mul_ln1118_1173_fu_2040_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1173_fu_2040_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1174_fu_2113_p0() {
    mul_ln1118_1174_fu_2113_p0 = sext_ln1118_1190_fu_1521811_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1174_fu_2113_p2() {
    mul_ln1118_1174_fu_2113_p2 = (!mul_ln1118_1174_fu_2113_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1174_fu_2113_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1176_fu_2293_p0() {
    mul_ln1118_1176_fu_2293_p0 =  (sc_lv<16>) (sext_ln1118_1196_fu_1521907_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1176_fu_2293_p2() {
    mul_ln1118_1176_fu_2293_p2 = (!mul_ln1118_1176_fu_2293_p0.read().is_01() || !ap_const_lv24_FFFF30.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1176_fu_2293_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF30);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1177_fu_2398_p0() {
    mul_ln1118_1177_fu_2398_p0 =  (sc_lv<16>) (sext_ln1118_1200_fu_1521959_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1177_fu_2398_p2() {
    mul_ln1118_1177_fu_2398_p2 = (!mul_ln1118_1177_fu_2398_p0.read().is_01() || !ap_const_lv24_97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1177_fu_2398_p0.read()) * sc_biguint<24>(ap_const_lv24_97);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1178_fu_2295_p0() {
    mul_ln1118_1178_fu_2295_p0 = sext_ln1118_1203_fu_1522015_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1178_fu_2295_p2() {
    mul_ln1118_1178_fu_2295_p2 = (!mul_ln1118_1178_fu_2295_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1178_fu_2295_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1179_fu_2296_p0() {
    mul_ln1118_1179_fu_2296_p0 =  (sc_lv<16>) (sext_ln1118_1148_fu_1521263_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1179_fu_2296_p2() {
    mul_ln1118_1179_fu_2296_p2 = (!mul_ln1118_1179_fu_2296_p0.read().is_01() || !ap_const_lv24_A5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1179_fu_2296_p0.read()) * sc_biguint<24>(ap_const_lv24_A5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1180_fu_1985_p0() {
    mul_ln1118_1180_fu_1985_p0 = sext_ln1118_1151_fu_1521307_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1180_fu_1985_p2() {
    mul_ln1118_1180_fu_1985_p2 = (!mul_ln1118_1180_fu_1985_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1180_fu_1985_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1181_fu_2298_p0() {
    mul_ln1118_1181_fu_2298_p0 =  (sc_lv<16>) (sext_ln1118_1153_fu_1521330_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1181_fu_2298_p2() {
    mul_ln1118_1181_fu_2298_p2 = (!mul_ln1118_1181_fu_2298_p0.read().is_01() || !ap_const_lv24_FFFE24.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1181_fu_2298_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE24);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1182_fu_2299_p0() {
    mul_ln1118_1182_fu_2299_p0 =  (sc_lv<16>) (sext_ln1118_1158_fu_1521386_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1182_fu_2299_p2() {
    mul_ln1118_1182_fu_2299_p2 = (!mul_ln1118_1182_fu_2299_p0.read().is_01() || !ap_const_lv24_FFFEEB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1182_fu_2299_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1183_fu_2300_p0() {
    mul_ln1118_1183_fu_2300_p0 = sext_ln1118_1165_fu_1521481_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1183_fu_2300_p2() {
    mul_ln1118_1183_fu_2300_p2 = (!mul_ln1118_1183_fu_2300_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1183_fu_2300_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1185_fu_2406_p0() {
    mul_ln1118_1185_fu_2406_p0 =  (sc_lv<16>) (sext_ln1118_1173_fu_1521566_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1185_fu_2406_p2() {
    mul_ln1118_1185_fu_2406_p2 = (!mul_ln1118_1185_fu_2406_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1185_fu_2406_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1186_fu_2280_p0() {
    mul_ln1118_1186_fu_2280_p0 =  (sc_lv<16>) (sext_ln1118_1175_fu_1521591_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1186_fu_2280_p2() {
    mul_ln1118_1186_fu_2280_p2 = (!mul_ln1118_1186_fu_2280_p0.read().is_01() || !ap_const_lv24_BB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1186_fu_2280_p0.read()) * sc_biguint<24>(ap_const_lv24_BB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1187_fu_1992_p0() {
    mul_ln1118_1187_fu_1992_p0 =  (sc_lv<16>) (sext_ln1118_1179_fu_1521654_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1187_fu_1992_p2() {
    mul_ln1118_1187_fu_1992_p2 = (!mul_ln1118_1187_fu_1992_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1187_fu_1992_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1188_fu_1921_p0() {
    mul_ln1118_1188_fu_1921_p0 =  (sc_lv<16>) (sext_ln1118_1181_fu_1521678_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1188_fu_1921_p2() {
    mul_ln1118_1188_fu_1921_p2 = (!mul_ln1118_1188_fu_1921_p0.read().is_01() || !ap_const_lv24_FFFDA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1188_fu_1921_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDA4);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1189_fu_1910_p0() {
    mul_ln1118_1189_fu_1910_p0 =  (sc_lv<16>) (sext_ln1118_1184_fu_1521729_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1189_fu_1910_p2() {
    mul_ln1118_1189_fu_1910_p2 = (!mul_ln1118_1189_fu_1910_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1189_fu_1910_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1190_fu_1935_p0() {
    mul_ln1118_1190_fu_1935_p0 =  (sc_lv<16>) (sext_ln1118_1188_fu_1521785_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1190_fu_1935_p2() {
    mul_ln1118_1190_fu_1935_p2 = (!mul_ln1118_1190_fu_1935_p0.read().is_01() || !ap_const_lv24_8C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1190_fu_1935_p0.read()) * sc_biguint<24>(ap_const_lv24_8C);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1192_fu_1925_p0() {
    mul_ln1118_1192_fu_1925_p0 =  (sc_lv<16>) (sext_ln1118_1193_fu_1521855_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1192_fu_1925_p2() {
    mul_ln1118_1192_fu_1925_p2 = (!mul_ln1118_1192_fu_1925_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1192_fu_1925_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1193_fu_1938_p0() {
    mul_ln1118_1193_fu_1938_p0 =  (sc_lv<16>) (sext_ln1118_1196_fu_1521907_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1193_fu_1938_p2() {
    mul_ln1118_1193_fu_1938_p2 = (!mul_ln1118_1193_fu_1938_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1193_fu_1938_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1194_fu_1927_p0() {
    mul_ln1118_1194_fu_1927_p0 = sext_ln1118_1204_fu_1522021_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1194_fu_1927_p2() {
    mul_ln1118_1194_fu_1927_p2 = (!mul_ln1118_1194_fu_1927_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1194_fu_1927_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1195_fu_1928_p0() {
    mul_ln1118_1195_fu_1928_p0 =  (sc_lv<16>) (sext_ln1118_1236_fu_1523374_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1195_fu_1928_p2() {
    mul_ln1118_1195_fu_1928_p2 = (!mul_ln1118_1195_fu_1928_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1195_fu_1928_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1196_fu_1929_p0() {
    mul_ln1118_1196_fu_1929_p0 =  (sc_lv<16>) (sext_ln1118_1250_fu_1523541_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1196_fu_1929_p2() {
    mul_ln1118_1196_fu_1929_p2 = (!mul_ln1118_1196_fu_1929_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1196_fu_1929_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1197_fu_1918_p0() {
    mul_ln1118_1197_fu_1918_p0 =  (sc_lv<16>) (sext_ln1118_1252_fu_1523561_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1197_fu_1918_p2() {
    mul_ln1118_1197_fu_1918_p2 = (!mul_ln1118_1197_fu_1918_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1197_fu_1918_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1199_fu_1932_p0() {
    mul_ln1118_1199_fu_1932_p0 = sext_ln1118_1255_fu_1523586_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1199_fu_1932_p2() {
    mul_ln1118_1199_fu_1932_p2 = (!mul_ln1118_1199_fu_1932_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1199_fu_1932_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1200_fu_2167_p0() {
    mul_ln1118_1200_fu_2167_p0 = sext_ln1118_1256_fu_1523601_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1200_fu_2167_p2() {
    mul_ln1118_1200_fu_2167_p2 = (!mul_ln1118_1200_fu_2167_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1200_fu_2167_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1201_fu_2376_p0() {
    mul_ln1118_1201_fu_2376_p0 = sext_ln1118_1263_fu_1523625_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1201_fu_2376_p2() {
    mul_ln1118_1201_fu_2376_p2 = (!mul_ln1118_1201_fu_2376_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1201_fu_2376_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1202_fu_2354_p0() {
    mul_ln1118_1202_fu_2354_p0 = sext_ln1118_1273_fu_1523640_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1202_fu_2354_p2() {
    mul_ln1118_1202_fu_2354_p2 = (!mul_ln1118_1202_fu_2354_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1202_fu_2354_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1203_fu_2378_p0() {
    mul_ln1118_1203_fu_2378_p0 = sext_ln1118_1288_fu_1523655_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1203_fu_2378_p2() {
    mul_ln1118_1203_fu_2378_p2 = (!mul_ln1118_1203_fu_2378_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1203_fu_2378_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1204_fu_2379_p0() {
    mul_ln1118_1204_fu_2379_p0 =  (sc_lv<16>) (sext_ln1118_1232_fu_1523325_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1204_fu_2379_p2() {
    mul_ln1118_1204_fu_2379_p2 = (!mul_ln1118_1204_fu_2379_p0.read().is_01() || !ap_const_lv24_FFFDD3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1204_fu_2379_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1205_fu_1883_p0() {
    mul_ln1118_1205_fu_1883_p0 =  (sc_lv<16>) (sext_ln1118_1236_fu_1523374_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1205_fu_1883_p2() {
    mul_ln1118_1205_fu_1883_p2 = (!mul_ln1118_1205_fu_1883_p0.read().is_01() || !ap_const_lv24_86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1205_fu_1883_p0.read()) * sc_biguint<24>(ap_const_lv24_86);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1206_fu_1988_p0() {
    mul_ln1118_1206_fu_1988_p0 = sext_ln1118_1237_fu_1523392_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1206_fu_1988_p2() {
    mul_ln1118_1206_fu_1988_p2 = (!mul_ln1118_1206_fu_1988_p0.read().is_01() || !ap_const_lv24_E7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1206_fu_1988_p0.read()) * sc_biguint<24>(ap_const_lv24_E7);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1207_fu_2382_p0() {
    mul_ln1118_1207_fu_2382_p0 =  (sc_lv<16>) (sext_ln1118_1242_fu_1523446_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1207_fu_2382_p2() {
    mul_ln1118_1207_fu_2382_p2 = (!mul_ln1118_1207_fu_2382_p0.read().is_01() || !ap_const_lv24_FFFF33.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1207_fu_2382_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF33);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1208_fu_1990_p0() {
    mul_ln1118_1208_fu_1990_p0 =  (sc_lv<16>) (sext_ln1118_1252_fu_1523561_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1208_fu_1990_p2() {
    mul_ln1118_1208_fu_1990_p2 = (!mul_ln1118_1208_fu_1990_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1208_fu_1990_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1219_fu_1887_p0() {
    mul_ln1118_1219_fu_1887_p0 =  (sc_lv<16>) (sext_ln1118_1232_fu_1523325_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1219_fu_1887_p2() {
    mul_ln1118_1219_fu_1887_p2 = (!mul_ln1118_1219_fu_1887_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1219_fu_1887_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1220_fu_2385_p0() {
    mul_ln1118_1220_fu_2385_p0 =  (sc_lv<16>) (sext_ln1118_1236_fu_1523374_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1220_fu_2385_p2() {
    mul_ln1118_1220_fu_2385_p2 = (!mul_ln1118_1220_fu_2385_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1220_fu_2385_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1222_fu_2327_p0() {
    mul_ln1118_1222_fu_2327_p0 = sext_ln1118_1241_fu_1523441_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1222_fu_2327_p2() {
    mul_ln1118_1222_fu_2327_p2 = (!mul_ln1118_1222_fu_2327_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1222_fu_2327_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1223_fu_2328_p0() {
    mul_ln1118_1223_fu_2328_p0 =  (sc_lv<16>) (sext_ln1118_1250_fu_1523541_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1223_fu_2328_p2() {
    mul_ln1118_1223_fu_2328_p2 = (!mul_ln1118_1223_fu_2328_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1223_fu_2328_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1234_fu_2329_p0() {
    mul_ln1118_1234_fu_2329_p0 =  (sc_lv<16>) (sext_ln1118_1232_fu_1523325_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1234_fu_2329_p2() {
    mul_ln1118_1234_fu_2329_p2 = (!mul_ln1118_1234_fu_2329_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1234_fu_2329_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1235_fu_2342_p0() {
    mul_ln1118_1235_fu_2342_p0 =  (sc_lv<16>) (sext_ln1118_1236_fu_1523374_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1235_fu_2342_p2() {
    mul_ln1118_1235_fu_2342_p2 = (!mul_ln1118_1235_fu_2342_p0.read().is_01() || !ap_const_lv24_9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1235_fu_2342_p0.read()) * sc_biguint<24>(ap_const_lv24_9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1236_fu_2319_p0() {
    mul_ln1118_1236_fu_2319_p0 = sext_ln1118_1246_fu_1523500_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1236_fu_2319_p2() {
    mul_ln1118_1236_fu_2319_p2 = (!mul_ln1118_1236_fu_2319_p0.read().is_01() || !ap_const_lv24_FFFEB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1236_fu_2319_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1239_fu_2332_p0() {
    mul_ln1118_1239_fu_2332_p0 =  (sc_lv<16>) (sext_ln1118_1257_fu_1523606_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1239_fu_2332_p2() {
    mul_ln1118_1239_fu_2332_p2 = (!mul_ln1118_1239_fu_2332_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1239_fu_2332_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1249_fu_2345_p0() {
    mul_ln1118_1249_fu_2345_p0 =  (sc_lv<16>) (sext_ln1118_1232_fu_1523325_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1249_fu_2345_p2() {
    mul_ln1118_1249_fu_2345_p2 = (!mul_ln1118_1249_fu_2345_p0.read().is_01() || !ap_const_lv24_A5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1249_fu_2345_p0.read()) * sc_biguint<24>(ap_const_lv24_A5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1250_fu_2346_p0() {
    mul_ln1118_1250_fu_2346_p0 = sext_ln1118_1235_fu_1523369_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1250_fu_2346_p2() {
    mul_ln1118_1250_fu_2346_p2 = (!mul_ln1118_1250_fu_2346_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1250_fu_2346_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1252_fu_2347_p0() {
    mul_ln1118_1252_fu_2347_p0 =  (sc_lv<16>) (sext_ln1118_1242_fu_1523446_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1252_fu_2347_p2() {
    mul_ln1118_1252_fu_2347_p2 = (!mul_ln1118_1252_fu_2347_p0.read().is_01() || !ap_const_lv24_FFFEEB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1252_fu_2347_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1265_fu_2336_p0() {
    mul_ln1118_1265_fu_2336_p0 =  (sc_lv<16>) (sext_ln1118_1320_fu_1524119_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1265_fu_2336_p2() {
    mul_ln1118_1265_fu_2336_p2 = (!mul_ln1118_1265_fu_2336_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1265_fu_2336_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1274_fu_2349_p0() {
    mul_ln1118_1274_fu_2349_p0 =  (sc_lv<16>) (sext_ln1118_1316_fu_1524070_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1274_fu_2349_p2() {
    mul_ln1118_1274_fu_2349_p2 = (!mul_ln1118_1274_fu_2349_p0.read().is_01() || !ap_const_lv24_FFFDD3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1274_fu_2349_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1275_fu_2350_p0() {
    mul_ln1118_1275_fu_2350_p0 =  (sc_lv<16>) (sext_ln1118_1320_fu_1524119_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1275_fu_2350_p2() {
    mul_ln1118_1275_fu_2350_p2 = (!mul_ln1118_1275_fu_2350_p0.read().is_01() || !ap_const_lv24_86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1275_fu_2350_p0.read()) * sc_biguint<24>(ap_const_lv24_86);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1277_fu_2352_p0() {
    mul_ln1118_1277_fu_2352_p0 =  (sc_lv<16>) (sext_ln1118_1326_fu_1524186_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1277_fu_2352_p2() {
    mul_ln1118_1277_fu_2352_p2 = (!mul_ln1118_1277_fu_2352_p0.read().is_01() || !ap_const_lv24_FFFF33.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1277_fu_2352_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF33);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1289_fu_2353_p0() {
    mul_ln1118_1289_fu_2353_p0 =  (sc_lv<16>) (sext_ln1118_1316_fu_1524070_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1289_fu_2353_p2() {
    mul_ln1118_1289_fu_2353_p2 = (!mul_ln1118_1289_fu_2353_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1289_fu_2353_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1290_fu_2165_p0() {
    mul_ln1118_1290_fu_2165_p0 =  (sc_lv<16>) (sext_ln1118_1320_fu_1524119_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1290_fu_2165_p2() {
    mul_ln1118_1290_fu_2165_p2 = (!mul_ln1118_1290_fu_2165_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1290_fu_2165_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1292_fu_2225_p0() {
    mul_ln1118_1292_fu_2225_p0 = sext_ln1118_1325_fu_1524181_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1292_fu_2225_p2() {
    mul_ln1118_1292_fu_2225_p2 = (!mul_ln1118_1292_fu_2225_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1292_fu_2225_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1293_fu_1963_p0() {
    mul_ln1118_1293_fu_1963_p0 = sext_ln1118_1334_fu_1524281_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1293_fu_1963_p2() {
    mul_ln1118_1293_fu_1963_p2 = (!mul_ln1118_1293_fu_1963_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1293_fu_1963_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1304_fu_1860_p0() {
    mul_ln1118_1304_fu_1860_p0 =  (sc_lv<16>) (sext_ln1118_1316_fu_1524070_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1304_fu_1860_p2() {
    mul_ln1118_1304_fu_1860_p2 = (!mul_ln1118_1304_fu_1860_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1304_fu_1860_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1305_fu_2069_p0() {
    mul_ln1118_1305_fu_2069_p0 =  (sc_lv<16>) (sext_ln1118_1320_fu_1524119_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1305_fu_2069_p2() {
    mul_ln1118_1305_fu_2069_p2 = (!mul_ln1118_1305_fu_2069_p0.read().is_01() || !ap_const_lv24_9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1305_fu_2069_p0.read()) * sc_biguint<24>(ap_const_lv24_9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1306_fu_1966_p0() {
    mul_ln1118_1306_fu_1966_p0 = sext_ln1118_1330_fu_1524240_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1306_fu_1966_p2() {
    mul_ln1118_1306_fu_1966_p2 = (!mul_ln1118_1306_fu_1966_p0.read().is_01() || !ap_const_lv24_FFFEB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1306_fu_1966_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1309_fu_1863_p0() {
    mul_ln1118_1309_fu_1863_p0 = sext_ln1118_1341_fu_1524286_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1309_fu_1863_p2() {
    mul_ln1118_1309_fu_1863_p2 = (!mul_ln1118_1309_fu_1863_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_1309_fu_1863_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1319_fu_1968_p0() {
    mul_ln1118_1319_fu_1968_p0 =  (sc_lv<16>) (sext_ln1118_1316_fu_1524070_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1319_fu_1968_p2() {
    mul_ln1118_1319_fu_1968_p2 = (!mul_ln1118_1319_fu_1968_p0.read().is_01() || !ap_const_lv24_A5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1319_fu_1968_p0.read()) * sc_biguint<24>(ap_const_lv24_A5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1320_fu_2073_p0() {
    mul_ln1118_1320_fu_2073_p0 = sext_ln1118_1319_fu_1524114_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1320_fu_2073_p2() {
    mul_ln1118_1320_fu_2073_p2 = (!mul_ln1118_1320_fu_2073_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_1320_fu_2073_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1322_fu_2178_p0() {
    mul_ln1118_1322_fu_2178_p0 =  (sc_lv<16>) (sext_ln1118_1326_fu_1524186_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_1322_fu_2178_p2() {
    mul_ln1118_1322_fu_2178_p2 = (!mul_ln1118_1322_fu_2178_p0.read().is_01() || !ap_const_lv24_FFFEEB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_1322_fu_2178_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_636_fu_1945_p0() {
    mul_ln1118_636_fu_1945_p0 =  (sc_lv<16>) (sext_ln1118_578_fu_1507242_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_636_fu_1945_p2() {
    mul_ln1118_636_fu_1945_p2 = (!mul_ln1118_636_fu_1945_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_636_fu_1945_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_637_fu_2119_p0() {
    mul_ln1118_637_fu_2119_p0 =  (sc_lv<16>) (sext_ln1118_580_fu_1507267_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_637_fu_2119_p2() {
    mul_ln1118_637_fu_2119_p2 = (!mul_ln1118_637_fu_2119_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_637_fu_2119_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_638_fu_2120_p0() {
    mul_ln1118_638_fu_2120_p0 =  (sc_lv<16>) (sext_ln1118_582_fu_1507290_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_638_fu_2120_p2() {
    mul_ln1118_638_fu_2120_p2 = (!mul_ln1118_638_fu_2120_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_638_fu_2120_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_639_fu_2121_p0() {
    mul_ln1118_639_fu_2121_p0 =  (sc_lv<16>) (sext_ln1118_583_fu_1507310_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_639_fu_2121_p2() {
    mul_ln1118_639_fu_2121_p2 = (!mul_ln1118_639_fu_2121_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_639_fu_2121_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_641_fu_2181_p0() {
    mul_ln1118_641_fu_2181_p0 =  (sc_lv<16>) (sext_ln1118_591_fu_1507410_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_641_fu_2181_p2() {
    mul_ln1118_641_fu_2181_p2 = (!mul_ln1118_641_fu_2181_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_641_fu_2181_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_642_fu_2228_p0() {
    mul_ln1118_642_fu_2228_p0 =  (sc_lv<16>) (sext_ln1118_601_fu_1507547_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_642_fu_2228_p2() {
    mul_ln1118_642_fu_2228_p2 = (!mul_ln1118_642_fu_2228_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_642_fu_2228_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_643_fu_1917_p0() {
    mul_ln1118_643_fu_1917_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1507777_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_643_fu_1917_p2() {
    mul_ln1118_643_fu_1917_p2 = (!mul_ln1118_643_fu_1917_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_643_fu_1917_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_644_fu_2184_p0() {
    mul_ln1118_644_fu_2184_p0 =  (sc_lv<16>) (sext_ln1118_fu_1507019_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_644_fu_2184_p2() {
    mul_ln1118_644_fu_2184_p2 = (!mul_ln1118_644_fu_2184_p0.read().is_01() || !ap_const_lv24_FFFDD3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_644_fu_2184_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_645_fu_2185_p0() {
    mul_ln1118_645_fu_2185_p0 =  (sc_lv<16>) (sext_ln1118_564_fu_1507068_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_645_fu_2185_p2() {
    mul_ln1118_645_fu_2185_p2 = (!mul_ln1118_645_fu_2185_p0.read().is_01() || !ap_const_lv24_86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_645_fu_2185_p0.read()) * sc_biguint<24>(ap_const_lv24_86);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_646_fu_2210_p0() {
    mul_ln1118_646_fu_2210_p0 =  (sc_lv<16>) (sext_ln1118_565_fu_1507086_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_646_fu_2210_p2() {
    mul_ln1118_646_fu_2210_p2 = (!mul_ln1118_646_fu_2210_p0.read().is_01() || !ap_const_lv24_E7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_646_fu_2210_p0.read()) * sc_biguint<24>(ap_const_lv24_E7);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_647_fu_2187_p0() {
    mul_ln1118_647_fu_2187_p0 =  (sc_lv<16>) (sext_ln1118_570_fu_1507142_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_647_fu_2187_p2() {
    mul_ln1118_647_fu_2187_p2 = (!mul_ln1118_647_fu_2187_p0.read().is_01() || !ap_const_lv24_FFFF33.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_647_fu_2187_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF33);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_649_fu_2189_p0() {
    mul_ln1118_649_fu_2189_p0 =  (sc_lv<16>) (sext_ln1118_583_fu_1507310_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_649_fu_2189_p2() {
    mul_ln1118_649_fu_2189_p2 = (!mul_ln1118_649_fu_2189_p0.read().is_01() || !ap_const_lv24_FFFDD9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_649_fu_2189_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_650_fu_2142_p0() {
    mul_ln1118_650_fu_2142_p0 =  (sc_lv<16>) (sext_ln1118_587_fu_1507347_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_650_fu_2142_p2() {
    mul_ln1118_650_fu_2142_p2 = (!mul_ln1118_650_fu_2142_p0.read().is_01() || !ap_const_lv24_FFFDB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_650_fu_2142_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDB3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_651_fu_2203_p0() {
    mul_ln1118_651_fu_2203_p0 =  (sc_lv<16>) (sext_ln1118_590_fu_1507404_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_651_fu_2203_p2() {
    mul_ln1118_651_fu_2203_p2 = (!mul_ln1118_651_fu_2203_p0.read().is_01() || !ap_const_lv24_FFFDF1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_651_fu_2203_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDF1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_652_fu_2204_p0() {
    mul_ln1118_652_fu_2204_p0 = sext_ln1118_593_fu_1507434_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_652_fu_2204_p2() {
    mul_ln1118_652_fu_2204_p2 = (!mul_ln1118_652_fu_2204_p0.read().is_01() || !ap_const_lv24_89.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_652_fu_2204_p0.read()) * sc_biguint<24>(ap_const_lv24_89);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_653_fu_2193_p0() {
    mul_ln1118_653_fu_2193_p0 =  (sc_lv<16>) (sext_ln1118_596_fu_1507485_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_653_fu_2193_p2() {
    mul_ln1118_653_fu_2193_p2 = (!mul_ln1118_653_fu_2193_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_653_fu_2193_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_656_fu_2196_p0() {
    mul_ln1118_656_fu_2196_p0 =  (sc_lv<16>) (sext_ln1118_605_fu_1507611_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_656_fu_2196_p2() {
    mul_ln1118_656_fu_2196_p2 = (!mul_ln1118_656_fu_2196_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_656_fu_2196_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_657_fu_2405_p0() {
    mul_ln1118_657_fu_2405_p0 =  (sc_lv<16>) (sext_ln1118_612_fu_1507715_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_657_fu_2405_p2() {
    mul_ln1118_657_fu_2405_p2 = (!mul_ln1118_657_fu_2405_p0.read().is_01() || !ap_const_lv24_83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_657_fu_2405_p0.read()) * sc_biguint<24>(ap_const_lv24_83);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_658_fu_2302_p0() {
    mul_ln1118_658_fu_2302_p0 =  (sc_lv<16>) (sext_ln1118_615_fu_1507771_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_658_fu_2302_p2() {
    mul_ln1118_658_fu_2302_p2 = (!mul_ln1118_658_fu_2302_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_658_fu_2302_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_659_fu_2303_p0() {
    mul_ln1118_659_fu_2303_p0 =  (sc_lv<16>) (sext_ln1118_fu_1507019_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_659_fu_2303_p2() {
    mul_ln1118_659_fu_2303_p2 = (!mul_ln1118_659_fu_2303_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_659_fu_2303_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_660_fu_2200_p0() {
    mul_ln1118_660_fu_2200_p0 =  (sc_lv<16>) (sext_ln1118_564_fu_1507068_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_660_fu_2200_p2() {
    mul_ln1118_660_fu_2200_p2 = (!mul_ln1118_660_fu_2200_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_660_fu_2200_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_662_fu_2202_p0() {
    mul_ln1118_662_fu_2202_p0 = sext_ln1118_569_fu_1507137_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_662_fu_2202_p2() {
    mul_ln1118_662_fu_2202_p2 = (!mul_ln1118_662_fu_2202_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_662_fu_2202_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_663_fu_2388_p0() {
    mul_ln1118_663_fu_2388_p0 =  (sc_lv<16>) (sext_ln1118_578_fu_1507242_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_663_fu_2388_p2() {
    mul_ln1118_663_fu_2388_p2 = (!mul_ln1118_663_fu_2388_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_663_fu_2388_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_664_fu_2389_p0() {
    mul_ln1118_664_fu_2389_p0 =  (sc_lv<16>) (sext_ln1118_580_fu_1507267_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_664_fu_2389_p2() {
    mul_ln1118_664_fu_2389_p2 = (!mul_ln1118_664_fu_2389_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_664_fu_2389_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_665_fu_2205_p0() {
    mul_ln1118_665_fu_2205_p0 =  (sc_lv<16>) (sext_ln1118_582_fu_1507290_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_665_fu_2205_p2() {
    mul_ln1118_665_fu_2205_p2 = (!mul_ln1118_665_fu_2205_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_665_fu_2205_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_666_fu_2330_p0() {
    mul_ln1118_666_fu_2330_p0 = sext_ln1118_584_fu_1507326_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_666_fu_2330_p2() {
    mul_ln1118_666_fu_2330_p2 = (!mul_ln1118_666_fu_2330_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_666_fu_2330_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_667_fu_2103_p0() {
    mul_ln1118_667_fu_2103_p0 = sext_ln1118_586_fu_1507342_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_667_fu_2103_p2() {
    mul_ln1118_667_fu_2103_p2 = (!mul_ln1118_667_fu_2103_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_667_fu_2103_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_669_fu_1941_p0() {
    mul_ln1118_669_fu_1941_p0 =  (sc_lv<16>) (sext_ln1118_596_fu_1507485_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_669_fu_1941_p2() {
    mul_ln1118_669_fu_1941_p2 = (!mul_ln1118_669_fu_1941_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_669_fu_1941_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_670_fu_2016_p0() {
    mul_ln1118_670_fu_2016_p0 =  (sc_lv<16>) (sext_ln1118_603_fu_1507572_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_670_fu_2016_p2() {
    mul_ln1118_670_fu_2016_p2 = (!mul_ln1118_670_fu_2016_p0.read().is_01() || !ap_const_lv24_FFFEF5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_670_fu_2016_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEF5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_671_fu_2017_p0() {
    mul_ln1118_671_fu_2017_p0 =  (sc_lv<16>) (sext_ln1118_605_fu_1507611_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_671_fu_2017_p2() {
    mul_ln1118_671_fu_2017_p2 = (!mul_ln1118_671_fu_2017_p0.read().is_01() || !ap_const_lv24_43.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_671_fu_2017_p0.read()) * sc_biguint<24>(ap_const_lv24_43);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_672_fu_1970_p0() {
    mul_ln1118_672_fu_1970_p0 =  (sc_lv<16>) (sext_ln1118_608_fu_1507663_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_672_fu_1970_p2() {
    mul_ln1118_672_fu_1970_p2 = (!mul_ln1118_672_fu_1970_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_672_fu_1970_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_673_fu_2019_p0() {
    mul_ln1118_673_fu_2019_p0 = sext_ln1118_611_fu_1507710_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_673_fu_2019_p2() {
    mul_ln1118_673_fu_2019_p2 = (!mul_ln1118_673_fu_2019_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_673_fu_2019_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_674_fu_2417_p0() {
    mul_ln1118_674_fu_2417_p0 =  (sc_lv<16>) (sext_ln1118_fu_1507019_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_674_fu_2417_p2() {
    mul_ln1118_674_fu_2417_p2 = (!mul_ln1118_674_fu_2417_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_674_fu_2417_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_675_fu_2387_p0() {
    mul_ln1118_675_fu_2387_p0 =  (sc_lv<16>) (sext_ln1118_564_fu_1507068_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_675_fu_2387_p2() {
    mul_ln1118_675_fu_2387_p2 = (!mul_ln1118_675_fu_2387_p0.read().is_01() || !ap_const_lv24_9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_675_fu_2387_p0.read()) * sc_biguint<24>(ap_const_lv24_9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_676_fu_2022_p0() {
    mul_ln1118_676_fu_2022_p0 = sext_ln1118_574_fu_1507196_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_676_fu_2022_p2() {
    mul_ln1118_676_fu_2022_p2 = (!mul_ln1118_676_fu_2022_p0.read().is_01() || !ap_const_lv24_FFFEB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_676_fu_2022_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_677_fu_2023_p0() {
    mul_ln1118_677_fu_2023_p0 =  (sc_lv<16>) (sext_ln1118_580_fu_1507267_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_677_fu_2023_p2() {
    mul_ln1118_677_fu_2023_p2 = (!mul_ln1118_677_fu_2023_p0.read().is_01() || !ap_const_lv24_FFFEC3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_677_fu_2023_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEC3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_678_fu_2012_p0() {
    mul_ln1118_678_fu_2012_p0 = sext_ln1118_581_fu_1507285_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_678_fu_2012_p2() {
    mul_ln1118_678_fu_2012_p2 = (!mul_ln1118_678_fu_2012_p0.read().is_01() || !ap_const_lv24_FFFEBD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_678_fu_2012_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEBD);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_679_fu_2013_p0() {
    mul_ln1118_679_fu_2013_p0 =  (sc_lv<16>) (sext_ln1118_585_fu_1507332_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_679_fu_2013_p2() {
    mul_ln1118_679_fu_2013_p2 = (!mul_ln1118_679_fu_2013_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_679_fu_2013_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_680_fu_1942_p0() {
    mul_ln1118_680_fu_1942_p0 =  (sc_lv<16>) (sext_ln1118_587_fu_1507347_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_680_fu_1942_p2() {
    mul_ln1118_680_fu_1942_p2 = (!mul_ln1118_680_fu_1942_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_680_fu_1942_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_681_fu_1886_p0() {
    mul_ln1118_681_fu_1886_p0 =  (sc_lv<16>) (sext_ln1118_590_fu_1507404_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_681_fu_1886_p2() {
    mul_ln1118_681_fu_1886_p2 = (!mul_ln1118_681_fu_1886_p0.read().is_01() || !ap_const_lv24_FFFEE9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_681_fu_1886_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEE9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_682_fu_1991_p0() {
    mul_ln1118_682_fu_1991_p0 =  (sc_lv<16>) (sext_ln1118_596_fu_1507485_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_682_fu_1991_p2() {
    mul_ln1118_682_fu_1991_p2 = (!mul_ln1118_682_fu_1991_p0.read().is_01() || !ap_const_lv24_BB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_682_fu_1991_p0.read()) * sc_biguint<24>(ap_const_lv24_BB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_683_fu_2281_p0() {
    mul_ln1118_683_fu_2281_p0 =  (sc_lv<16>) (sext_ln1118_601_fu_1507547_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_683_fu_2281_p2() {
    mul_ln1118_683_fu_2281_p2 = (!mul_ln1118_683_fu_2281_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_683_fu_2281_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_684_fu_2317_p0() {
    mul_ln1118_684_fu_2317_p0 = sext_ln1118_602_fu_1507567_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_684_fu_2317_p2() {
    mul_ln1118_684_fu_2317_p2 = (!mul_ln1118_684_fu_2317_p0.read().is_01() || !ap_const_lv23_7FFFD1.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_684_fu_2317_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_685_fu_1890_p0() {
    mul_ln1118_685_fu_1890_p0 =  (sc_lv<16>) (sext_ln1118_605_fu_1507611_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_685_fu_1890_p2() {
    mul_ln1118_685_fu_1890_p2 = (!mul_ln1118_685_fu_1890_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_685_fu_1890_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_686_fu_2222_p0() {
    mul_ln1118_686_fu_2222_p0 =  (sc_lv<16>) (sext_ln1118_608_fu_1507663_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_686_fu_2222_p2() {
    mul_ln1118_686_fu_2222_p2 = (!mul_ln1118_686_fu_2222_p0.read().is_01() || !ap_const_lv24_FFFF30.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_686_fu_2222_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF30);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_687_fu_1892_p0() {
    mul_ln1118_687_fu_1892_p0 =  (sc_lv<16>) (sext_ln1118_612_fu_1507715_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_687_fu_1892_p2() {
    mul_ln1118_687_fu_1892_p2 = (!mul_ln1118_687_fu_1892_p0.read().is_01() || !ap_const_lv24_97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_687_fu_1892_p0.read()) * sc_biguint<24>(ap_const_lv24_97);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_688_fu_2390_p0() {
    mul_ln1118_688_fu_2390_p0 =  (sc_lv<16>) (sext_ln1118_615_fu_1507771_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_688_fu_2390_p2() {
    mul_ln1118_688_fu_2390_p2 = (!mul_ln1118_688_fu_2390_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_688_fu_2390_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_689_fu_2183_p0() {
    mul_ln1118_689_fu_2183_p0 =  (sc_lv<16>) (sext_ln1118_fu_1507019_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_689_fu_2183_p2() {
    mul_ln1118_689_fu_2183_p2 = (!mul_ln1118_689_fu_2183_p0.read().is_01() || !ap_const_lv24_A5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_689_fu_2183_p0.read()) * sc_biguint<24>(ap_const_lv24_A5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_691_fu_1896_p0() {
    mul_ln1118_691_fu_1896_p0 =  (sc_lv<16>) (sext_ln1118_565_fu_1507086_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_691_fu_1896_p2() {
    mul_ln1118_691_fu_1896_p2 = (!mul_ln1118_691_fu_1896_p0.read().is_01() || !ap_const_lv24_FFFE24.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_691_fu_1896_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFE24);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_692_fu_2397_p0() {
    mul_ln1118_692_fu_2397_p0 =  (sc_lv<16>) (sext_ln1118_570_fu_1507142_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_692_fu_2397_p2() {
    mul_ln1118_692_fu_2397_p2 = (!mul_ln1118_692_fu_2397_p0.read().is_01() || !ap_const_lv24_FFFEEB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_692_fu_2397_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_693_fu_1833_p0() {
    mul_ln1118_693_fu_1833_p0 = sext_ln1118_577_fu_1507237_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_693_fu_1833_p2() {
    mul_ln1118_693_fu_1833_p2 = (!mul_ln1118_693_fu_1833_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_693_fu_1833_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_694_fu_1834_p0() {
    mul_ln1118_694_fu_1834_p0 = sext_ln1118_579_fu_1507262_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_694_fu_1834_p2() {
    mul_ln1118_694_fu_1834_p2 = (!mul_ln1118_694_fu_1834_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_694_fu_1834_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_696_fu_1836_p0() {
    mul_ln1118_696_fu_1836_p0 =  (sc_lv<16>) (sext_ln1118_587_fu_1507347_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_696_fu_1836_p2() {
    mul_ln1118_696_fu_1836_p2 = (!mul_ln1118_696_fu_1836_p0.read().is_01() || !ap_const_lv24_BB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_696_fu_1836_p0.read()) * sc_biguint<24>(ap_const_lv24_BB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_697_fu_1837_p0() {
    mul_ln1118_697_fu_1837_p0 =  (sc_lv<16>) (sext_ln1118_591_fu_1507410_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_697_fu_1837_p2() {
    mul_ln1118_697_fu_1837_p2 = (!mul_ln1118_697_fu_1837_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_697_fu_1837_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_699_fu_1851_p0() {
    mul_ln1118_699_fu_1851_p0 =  (sc_lv<16>) (sext_ln1118_596_fu_1507485_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_699_fu_1851_p2() {
    mul_ln1118_699_fu_1851_p2 = (!mul_ln1118_699_fu_1851_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_699_fu_1851_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_700_fu_1852_p0() {
    mul_ln1118_700_fu_1852_p0 = sext_ln1118_600_fu_1507541_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_700_fu_1852_p2() {
    mul_ln1118_700_fu_1852_p2 = (!mul_ln1118_700_fu_1852_p0.read().is_01() || !ap_const_lv24_8C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_700_fu_1852_p0.read()) * sc_biguint<24>(ap_const_lv24_8C);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_701_fu_1841_p0() {
    mul_ln1118_701_fu_1841_p0 =  (sc_lv<16>) (sext_ln1118_603_fu_1507572_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_701_fu_1841_p2() {
    mul_ln1118_701_fu_1841_p2 = (!mul_ln1118_701_fu_1841_p0.read().is_01() || !ap_const_lv24_FFFEA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_701_fu_1841_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEA4);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_703_fu_1855_p0() {
    mul_ln1118_703_fu_1855_p0 =  (sc_lv<16>) (sext_ln1118_608_fu_1507663_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_703_fu_1855_p2() {
    mul_ln1118_703_fu_1855_p2 = (!mul_ln1118_703_fu_1855_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_703_fu_1855_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_704_fu_2360_p0() {
    mul_ln1118_704_fu_2360_p0 =  (sc_lv<16>) (sext_ln1118_616_fu_1507777_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_704_fu_2360_p2() {
    mul_ln1118_704_fu_2360_p2 = (!mul_ln1118_704_fu_2360_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_704_fu_2360_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_705_fu_2072_p0() {
    mul_ln1118_705_fu_2072_p0 =  (sc_lv<16>) (sext_ln1118_648_fu_1509130_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_705_fu_2072_p2() {
    mul_ln1118_705_fu_2072_p2 = (!mul_ln1118_705_fu_2072_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_705_fu_2072_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_707_fu_2375_p0() {
    mul_ln1118_707_fu_2375_p0 =  (sc_lv<16>) (sext_ln1118_664_fu_1509319_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_707_fu_2375_p2() {
    mul_ln1118_707_fu_2375_p2 = (!mul_ln1118_707_fu_2375_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_707_fu_2375_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_708_fu_2179_p0() {
    mul_ln1118_708_fu_2179_p0 =  (sc_lv<16>) (sext_ln1118_666_fu_1509342_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_708_fu_2179_p2() {
    mul_ln1118_708_fu_2179_p2 = (!mul_ln1118_708_fu_2179_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_708_fu_2179_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_709_fu_2076_p0() {
    mul_ln1118_709_fu_2076_p0 =  (sc_lv<16>) (sext_ln1118_667_fu_1509362_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_709_fu_2076_p2() {
    mul_ln1118_709_fu_2076_p2 = (!mul_ln1118_709_fu_2076_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_709_fu_2076_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_710_fu_1973_p0() {
    mul_ln1118_710_fu_1973_p0 =  (sc_lv<16>) (sext_ln1118_668_fu_1509378_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_710_fu_1973_p2() {
    mul_ln1118_710_fu_1973_p2 = (!mul_ln1118_710_fu_1973_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_710_fu_1973_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_711_fu_1974_p0() {
    mul_ln1118_711_fu_1974_p0 =  (sc_lv<16>) (sext_ln1118_675_fu_1509472_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_711_fu_1974_p2() {
    mul_ln1118_711_fu_1974_p2 = (!mul_ln1118_711_fu_1974_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_711_fu_1974_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_712_fu_2079_p0() {
    mul_ln1118_712_fu_2079_p0 =  (sc_lv<16>) (sext_ln1118_685_fu_1509609_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_712_fu_2079_p2() {
    mul_ln1118_712_fu_2079_p2 = (!mul_ln1118_712_fu_2079_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_712_fu_2079_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_713_fu_2323_p0() {
    mul_ln1118_713_fu_2323_p0 =  (sc_lv<16>) (sext_ln1118_700_fu_1509839_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_713_fu_2323_p2() {
    mul_ln1118_713_fu_2323_p2 = (!mul_ln1118_713_fu_2323_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_713_fu_2323_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_714_fu_2081_p0() {
    mul_ln1118_714_fu_2081_p0 =  (sc_lv<16>) (sext_ln1118_644_fu_1509081_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_714_fu_2081_p2() {
    mul_ln1118_714_fu_2081_p2 = (!mul_ln1118_714_fu_2081_p0.read().is_01() || !ap_const_lv24_FFFDD3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_714_fu_2081_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_715_fu_1978_p0() {
    mul_ln1118_715_fu_1978_p0 =  (sc_lv<16>) (sext_ln1118_648_fu_1509130_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_715_fu_1978_p2() {
    mul_ln1118_715_fu_1978_p2 = (!mul_ln1118_715_fu_1978_p0.read().is_01() || !ap_const_lv24_86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_715_fu_1978_p0.read()) * sc_biguint<24>(ap_const_lv24_86);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_716_fu_2251_p0() {
    mul_ln1118_716_fu_2251_p0 =  (sc_lv<16>) (sext_ln1118_649_fu_1509148_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_716_fu_2251_p2() {
    mul_ln1118_716_fu_2251_p2 = (!mul_ln1118_716_fu_2251_p0.read().is_01() || !ap_const_lv24_E7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_716_fu_2251_p0.read()) * sc_biguint<24>(ap_const_lv24_E7);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_717_fu_2240_p0() {
    mul_ln1118_717_fu_2240_p0 =  (sc_lv<16>) (sext_ln1118_654_fu_1509204_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_717_fu_2240_p2() {
    mul_ln1118_717_fu_2240_p2 = (!mul_ln1118_717_fu_2240_p0.read().is_01() || !ap_const_lv24_FFFF33.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_717_fu_2240_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF33);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_718_fu_2145_p0() {
    mul_ln1118_718_fu_2145_p0 =  (sc_lv<16>) (sext_ln1118_664_fu_1509319_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_718_fu_2145_p2() {
    mul_ln1118_718_fu_2145_p2 = (!mul_ln1118_718_fu_2145_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_718_fu_2145_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_719_fu_2230_p0() {
    mul_ln1118_719_fu_2230_p0 =  (sc_lv<16>) (sext_ln1118_667_fu_1509362_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_719_fu_2230_p2() {
    mul_ln1118_719_fu_2230_p2 = (!mul_ln1118_719_fu_2230_p0.read().is_01() || !ap_const_lv24_FFFDD9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_719_fu_2230_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDD9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_720_fu_2399_p0() {
    mul_ln1118_720_fu_2399_p0 =  (sc_lv<16>) (sext_ln1118_671_fu_1509409_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_720_fu_2399_p2() {
    mul_ln1118_720_fu_2399_p2 = (!mul_ln1118_720_fu_2399_p0.read().is_01() || !ap_const_lv24_FFFDB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_720_fu_2399_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFDB3);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_723_fu_2258_p0() {
    mul_ln1118_723_fu_2258_p0 =  (sc_lv<16>) (sext_ln1118_680_fu_1509547_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_723_fu_2258_p2() {
    mul_ln1118_723_fu_2258_p2 = (!mul_ln1118_723_fu_2258_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_723_fu_2258_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_724_fu_2259_p0() {
    mul_ln1118_724_fu_2259_p0 =  (sc_lv<16>) (sext_ln1118_684_fu_1509603_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_724_fu_2259_p2() {
    mul_ln1118_724_fu_2259_p2 = (!mul_ln1118_724_fu_2259_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_724_fu_2259_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_725_fu_2248_p0() {
    mul_ln1118_725_fu_2248_p0 =  (sc_lv<16>) (sext_ln1118_687_fu_1509634_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_725_fu_2248_p2() {
    mul_ln1118_725_fu_2248_p2 = (!mul_ln1118_725_fu_2248_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_725_fu_2248_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_726_fu_2261_p0() {
    mul_ln1118_726_fu_2261_p0 =  (sc_lv<16>) (sext_ln1118_689_fu_1509673_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_726_fu_2261_p2() {
    mul_ln1118_726_fu_2261_p2 = (!mul_ln1118_726_fu_2261_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_726_fu_2261_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_727_fu_2129_p0() {
    mul_ln1118_727_fu_2129_p0 =  (sc_lv<16>) (sext_ln1118_696_fu_1509777_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_727_fu_2129_p2() {
    mul_ln1118_727_fu_2129_p2 = (!mul_ln1118_727_fu_2129_p0.read().is_01() || !ap_const_lv24_83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_727_fu_2129_p0.read()) * sc_biguint<24>(ap_const_lv24_83);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_728_fu_2153_p0() {
    mul_ln1118_728_fu_2153_p0 =  (sc_lv<16>) (sext_ln1118_699_fu_1509833_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_728_fu_2153_p2() {
    mul_ln1118_728_fu_2153_p2 = (!mul_ln1118_728_fu_2153_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_728_fu_2153_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_729_fu_2154_p0() {
    mul_ln1118_729_fu_2154_p0 =  (sc_lv<16>) (sext_ln1118_644_fu_1509081_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_729_fu_2154_p2() {
    mul_ln1118_729_fu_2154_p2 = (!mul_ln1118_729_fu_2154_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_729_fu_2154_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_730_fu_2155_p0() {
    mul_ln1118_730_fu_2155_p0 =  (sc_lv<16>) (sext_ln1118_648_fu_1509130_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_730_fu_2155_p2() {
    mul_ln1118_730_fu_2155_p2 = (!mul_ln1118_730_fu_2155_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_730_fu_2155_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_731_fu_2364_p0() {
    mul_ln1118_731_fu_2364_p0 =  (sc_lv<16>) (sext_ln1118_649_fu_1509148_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_731_fu_2364_p2() {
    mul_ln1118_731_fu_2364_p2 = (!mul_ln1118_731_fu_2364_p0.read().is_01() || !ap_const_lv24_FFFF4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_731_fu_2364_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4B);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_732_fu_1949_p0() {
    mul_ln1118_732_fu_1949_p0 = sext_ln1118_653_fu_1509199_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_732_fu_1949_p2() {
    mul_ln1118_732_fu_1949_p2 = (!mul_ln1118_732_fu_1949_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_732_fu_1949_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_733_fu_2262_p0() {
    mul_ln1118_733_fu_2262_p0 =  (sc_lv<16>) (sext_ln1118_662_fu_1509304_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_733_fu_2262_p2() {
    mul_ln1118_733_fu_2262_p2 = (!mul_ln1118_733_fu_2262_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_733_fu_2262_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_734_fu_2263_p0() {
    mul_ln1118_734_fu_2263_p0 =  (sc_lv<16>) (sext_ln1118_664_fu_1509319_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_734_fu_2263_p2() {
    mul_ln1118_734_fu_2263_p2 = (!mul_ln1118_734_fu_2263_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_734_fu_2263_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_735_fu_2368_p0() {
    mul_ln1118_735_fu_2368_p0 =  (sc_lv<16>) (sext_ln1118_666_fu_1509342_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_735_fu_2368_p2() {
    mul_ln1118_735_fu_2368_p2 = (!mul_ln1118_735_fu_2368_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_735_fu_2368_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_736_fu_2265_p0() {
    mul_ln1118_736_fu_2265_p0 =  (sc_lv<16>) (sext_ln1118_668_fu_1509378_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_736_fu_2265_p2() {
    mul_ln1118_736_fu_2265_p2 = (!mul_ln1118_736_fu_2265_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_736_fu_2265_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_737_fu_2370_p0() {
    mul_ln1118_737_fu_2370_p0 = sext_ln1118_670_fu_1509404_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_737_fu_2370_p2() {
    mul_ln1118_737_fu_2370_p2 = (!mul_ln1118_737_fu_2370_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_737_fu_2370_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_738_fu_2163_p0() {
    mul_ln1118_738_fu_2163_p0 = sext_ln1118_677_fu_1509496_p0.read();
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_738_fu_2163_p2() {
    mul_ln1118_738_fu_2163_p2 = (!mul_ln1118_738_fu_2163_p0.read().is_01() || !ap_const_lv24_FFFEEC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_738_fu_2163_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEEC);
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_739_fu_2068_p0() {
    mul_ln1118_739_fu_2068_p0 =  (sc_lv<16>) (sext_ln1118_680_fu_1509547_p1.read());
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_mul_ln1118_739_fu_2068_p2() {
    mul_ln1118_739_fu_2068_p2 = (!mul_ln1118_739_fu_2068_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_739_fu_2068_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

}

