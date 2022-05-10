#include "conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        add_ln703_1019_reg_1536906 = add_ln703_1019_fu_1528699_p2.read();
        add_ln703_1023_reg_1536911 = add_ln703_1023_fu_1528723_p2.read();
        add_ln703_1034_reg_1536916 = add_ln703_1034_fu_1528787_p2.read();
        add_ln703_1039_reg_1536921 = add_ln703_1039_fu_1528811_p2.read();
        add_ln703_1043_reg_1536926 = add_ln703_1043_fu_1528835_p2.read();
        add_ln703_1054_reg_1536931 = add_ln703_1054_fu_1528899_p2.read();
        add_ln703_1059_reg_1536936 = add_ln703_1059_fu_1528923_p2.read();
        add_ln703_1063_reg_1536941 = add_ln703_1063_fu_1528947_p2.read();
        add_ln703_1074_reg_1536946 = add_ln703_1074_fu_1529015_p2.read();
        add_ln703_1079_reg_1536951 = add_ln703_1079_fu_1529039_p2.read();
        add_ln703_1083_reg_1536956 = add_ln703_1083_fu_1529063_p2.read();
        add_ln703_1094_reg_1536961 = add_ln703_1094_fu_1529123_p2.read();
        add_ln703_1099_reg_1536966 = add_ln703_1099_fu_1529147_p2.read();
        add_ln703_1103_reg_1536971 = add_ln703_1103_fu_1529171_p2.read();
        add_ln703_1114_reg_1536976 = add_ln703_1114_fu_1529231_p2.read();
        add_ln703_1119_reg_1536981 = add_ln703_1119_fu_1529255_p2.read();
        add_ln703_1123_reg_1536986 = add_ln703_1123_fu_1529279_p2.read();
        add_ln703_1134_reg_1536991 = add_ln703_1134_fu_1529343_p2.read();
        add_ln703_1139_reg_1536996 = add_ln703_1139_fu_1529367_p2.read();
        add_ln703_1143_reg_1537001 = add_ln703_1143_fu_1529391_p2.read();
        add_ln703_1154_reg_1537006 = add_ln703_1154_fu_1529455_p2.read();
        add_ln703_1159_reg_1537011 = add_ln703_1159_fu_1529479_p2.read();
        add_ln703_1163_reg_1537016 = add_ln703_1163_fu_1529503_p2.read();
        add_ln703_1174_reg_1537021 = add_ln703_1174_fu_1529571_p2.read();
        add_ln703_1179_reg_1537026 = add_ln703_1179_fu_1529595_p2.read();
        add_ln703_1183_reg_1537031 = add_ln703_1183_fu_1529619_p2.read();
        add_ln703_1194_reg_1537036 = add_ln703_1194_fu_1529679_p2.read();
        add_ln703_1199_reg_1537041 = add_ln703_1199_fu_1529703_p2.read();
        add_ln703_1203_reg_1537046 = add_ln703_1203_fu_1529727_p2.read();
        add_ln703_1214_reg_1537051 = add_ln703_1214_fu_1529787_p2.read();
        add_ln703_1219_reg_1537056 = add_ln703_1219_fu_1529811_p2.read();
        add_ln703_1223_reg_1537061 = add_ln703_1223_fu_1529835_p2.read();
        add_ln703_1234_reg_1537066 = add_ln703_1234_fu_1529899_p2.read();
        add_ln703_1239_reg_1537071 = add_ln703_1239_fu_1529923_p2.read();
        add_ln703_1243_reg_1537076 = add_ln703_1243_fu_1529947_p2.read();
        add_ln703_1254_reg_1537081 = add_ln703_1254_fu_1530011_p2.read();
        add_ln703_1259_reg_1537086 = add_ln703_1259_fu_1530035_p2.read();
        add_ln703_1263_reg_1537091 = add_ln703_1263_fu_1530059_p2.read();
        add_ln703_1274_reg_1537096 = add_ln703_1274_fu_1530127_p2.read();
        add_ln703_1279_reg_1537101 = add_ln703_1279_fu_1530151_p2.read();
        add_ln703_1283_reg_1537106 = add_ln703_1283_fu_1530175_p2.read();
        add_ln703_1294_reg_1537111 = add_ln703_1294_fu_1530235_p2.read();
        add_ln703_1299_reg_1537116 = add_ln703_1299_fu_1530259_p2.read();
        add_ln703_1303_reg_1537121 = add_ln703_1303_fu_1530283_p2.read();
        add_ln703_1314_reg_1537126 = add_ln703_1314_fu_1530337_p2.read();
        add_ln703_1319_reg_1537131 = add_ln703_1319_fu_1530361_p2.read();
        add_ln703_1323_reg_1537136 = add_ln703_1323_fu_1530385_p2.read();
        add_ln703_1334_reg_1537141 = add_ln703_1334_fu_1530449_p2.read();
        add_ln703_1339_reg_1537146 = add_ln703_1339_fu_1530473_p2.read();
        add_ln703_1343_reg_1537151 = add_ln703_1343_fu_1530497_p2.read();
        add_ln703_1354_reg_1537156 = add_ln703_1354_fu_1530561_p2.read();
        add_ln703_1359_reg_1537161 = add_ln703_1359_fu_1530585_p2.read();
        add_ln703_1363_reg_1537166 = add_ln703_1363_fu_1530609_p2.read();
        add_ln703_1374_reg_1537171 = add_ln703_1374_fu_1530677_p2.read();
        add_ln703_1379_reg_1537176 = add_ln703_1379_fu_1530701_p2.read();
        add_ln703_1383_reg_1537181 = add_ln703_1383_fu_1530725_p2.read();
        add_ln703_1394_reg_1537186 = add_ln703_1394_fu_1530785_p2.read();
        add_ln703_1399_reg_1537191 = add_ln703_1399_fu_1530809_p2.read();
        add_ln703_1403_reg_1537196 = add_ln703_1403_fu_1530833_p2.read();
        add_ln703_1414_reg_1537201 = add_ln703_1414_fu_1530893_p2.read();
        add_ln703_1419_reg_1537206 = add_ln703_1419_fu_1530917_p2.read();
        add_ln703_1423_reg_1537211 = add_ln703_1423_fu_1530941_p2.read();
        add_ln703_1434_reg_1537216 = add_ln703_1434_fu_1531005_p2.read();
        add_ln703_1439_reg_1537221 = add_ln703_1439_fu_1531029_p2.read();
        add_ln703_1443_reg_1537226 = add_ln703_1443_fu_1531053_p2.read();
        add_ln703_1454_reg_1537231 = add_ln703_1454_fu_1531117_p2.read();
        add_ln703_1459_reg_1537236 = add_ln703_1459_fu_1531141_p2.read();
        add_ln703_1463_reg_1537241 = add_ln703_1463_fu_1531165_p2.read();
        add_ln703_1474_reg_1537246 = add_ln703_1474_fu_1531233_p2.read();
        add_ln703_1479_reg_1537251 = add_ln703_1479_fu_1531257_p2.read();
        add_ln703_1483_reg_1537256 = add_ln703_1483_fu_1531281_p2.read();
        add_ln703_1494_reg_1537261 = add_ln703_1494_fu_1531341_p2.read();
        add_ln703_1499_reg_1537266 = add_ln703_1499_fu_1531365_p2.read();
        add_ln703_1503_reg_1537271 = add_ln703_1503_fu_1531389_p2.read();
        add_ln703_1514_reg_1537276 = add_ln703_1514_fu_1531449_p2.read();
        add_ln703_1519_reg_1537281 = add_ln703_1519_fu_1531473_p2.read();
        add_ln703_1523_reg_1537286 = add_ln703_1523_fu_1531497_p2.read();
        add_ln703_1534_reg_1537291 = add_ln703_1534_fu_1531561_p2.read();
        add_ln703_1539_reg_1537296 = add_ln703_1539_fu_1531585_p2.read();
        add_ln703_1543_reg_1537301 = add_ln703_1543_fu_1531609_p2.read();
        add_ln703_1554_reg_1537306 = add_ln703_1554_fu_1531673_p2.read();
        add_ln703_1559_reg_1537311 = add_ln703_1559_fu_1531697_p2.read();
        add_ln703_1563_reg_1537316 = add_ln703_1563_fu_1531721_p2.read();
        add_ln703_1574_reg_1537321 = add_ln703_1574_fu_1531789_p2.read();
        add_ln703_1579_reg_1537326 = add_ln703_1579_fu_1531813_p2.read();
        add_ln703_1583_reg_1537331 = add_ln703_1583_fu_1531837_p2.read();
        add_ln703_1594_reg_1537336 = add_ln703_1594_fu_1531897_p2.read();
        add_ln703_1599_reg_1537341 = add_ln703_1599_fu_1531921_p2.read();
        add_ln703_1603_reg_1537346 = add_ln703_1603_fu_1531945_p2.read();
        add_ln703_1614_reg_1537351 = add_ln703_1614_fu_1532005_p2.read();
        add_ln703_1619_reg_1537356 = add_ln703_1619_fu_1532029_p2.read();
        add_ln703_1623_reg_1537361 = add_ln703_1623_fu_1532053_p2.read();
        add_ln703_1634_reg_1537366 = add_ln703_1634_fu_1532117_p2.read();
        add_ln703_1639_reg_1537371 = add_ln703_1639_fu_1532141_p2.read();
        add_ln703_1643_reg_1537376 = add_ln703_1643_fu_1532159_p2.read();
        add_ln703_1654_reg_1537381 = add_ln703_1654_fu_1532223_p2.read();
        add_ln703_1659_reg_1537386 = add_ln703_1659_fu_1532247_p2.read();
        add_ln703_1663_reg_1537391 = add_ln703_1663_fu_1532271_p2.read();
        add_ln703_1674_reg_1537396 = add_ln703_1674_fu_1532339_p2.read();
        add_ln703_1679_reg_1537401 = add_ln703_1679_fu_1532363_p2.read();
        add_ln703_1683_reg_1537406 = add_ln703_1683_fu_1532387_p2.read();
        add_ln703_1694_reg_1537411 = add_ln703_1694_fu_1532447_p2.read();
        add_ln703_1699_reg_1537416 = add_ln703_1699_fu_1532471_p2.read();
        add_ln703_1703_reg_1537421 = add_ln703_1703_fu_1532495_p2.read();
        add_ln703_1714_reg_1537426 = add_ln703_1714_fu_1532555_p2.read();
        add_ln703_1719_reg_1537431 = add_ln703_1719_fu_1532579_p2.read();
        add_ln703_1723_reg_1537436 = add_ln703_1723_fu_1532603_p2.read();
        add_ln703_1734_reg_1537441 = add_ln703_1734_fu_1532667_p2.read();
        add_ln703_1739_reg_1537446 = add_ln703_1739_fu_1532691_p2.read();
        add_ln703_1743_reg_1537451 = add_ln703_1743_fu_1532715_p2.read();
        add_ln703_1754_reg_1537456 = add_ln703_1754_fu_1532779_p2.read();
        add_ln703_1759_reg_1537461 = add_ln703_1759_fu_1532803_p2.read();
        add_ln703_1763_reg_1537466 = add_ln703_1763_fu_1532827_p2.read();
        add_ln703_1774_reg_1537471 = add_ln703_1774_fu_1532895_p2.read();
        add_ln703_1779_reg_1537476 = add_ln703_1779_fu_1532919_p2.read();
        add_ln703_1783_reg_1537481 = add_ln703_1783_fu_1532943_p2.read();
        add_ln703_1794_reg_1537486 = add_ln703_1794_fu_1533003_p2.read();
        add_ln703_1799_reg_1537491 = add_ln703_1799_fu_1533027_p2.read();
        add_ln703_1803_reg_1537496 = add_ln703_1803_fu_1533051_p2.read();
        add_ln703_1814_reg_1537501 = add_ln703_1814_fu_1533111_p2.read();
        add_ln703_1818_reg_1537506 = add_ln703_1818_fu_1533123_p2.read();
        add_ln703_1829_reg_1537511 = add_ln703_1829_fu_1533129_p2.read();
        add_ln703_1853_reg_1537516 = add_ln703_1853_fu_1533163_p2.read();
        add_ln703_1873_reg_1537521 = add_ln703_1873_fu_1533197_p2.read();
        add_ln703_1893_reg_1537526 = add_ln703_1893_fu_1533227_p2.read();
        add_ln703_1909_reg_1537531 = add_ln703_1909_fu_1533233_p2.read();
        add_ln703_1912_reg_1537536 = add_ln703_1912_fu_1533245_p2.read();
        add_ln703_1929_reg_1537541 = add_ln703_1929_fu_1533251_p2.read();
        add_ln703_1953_reg_1537546 = add_ln703_1953_fu_1533285_p2.read();
        add_ln703_1973_reg_1537551 = add_ln703_1973_fu_1533319_p2.read();
        add_ln703_1993_reg_1537556 = add_ln703_1993_fu_1533349_p2.read();
        add_ln703_2009_reg_1537561 = add_ln703_2009_fu_1533355_p2.read();
        add_ln703_2012_reg_1537566 = add_ln703_2012_fu_1533367_p2.read();
        ap_port_reg_data_161_V_read = data_161_V_read.read();
        ap_port_reg_data_165_V_read = data_165_V_read.read();
        ap_port_reg_data_166_V_read = data_166_V_read.read();
        ap_port_reg_data_167_V_read = data_167_V_read.read();
        ap_port_reg_data_168_V_read = data_168_V_read.read();
        ap_port_reg_data_169_V_read = data_169_V_read.read();
        ap_port_reg_data_170_V_read = data_170_V_read.read();
        ap_port_reg_data_171_V_read = data_171_V_read.read();
        ap_port_reg_data_172_V_read = data_172_V_read.read();
        ap_port_reg_data_173_V_read = data_173_V_read.read();
        ap_port_reg_data_174_V_read = data_174_V_read.read();
        ap_port_reg_data_180_V_read = data_180_V_read.read();
        ap_port_reg_data_181_V_read = data_181_V_read.read();
        ap_port_reg_data_182_V_read = data_182_V_read.read();
        ap_port_reg_data_183_V_read = data_183_V_read.read();
        ap_port_reg_data_184_V_read = data_184_V_read.read();
        ap_port_reg_data_185_V_read = data_185_V_read.read();
        ap_port_reg_data_186_V_read = data_186_V_read.read();
        ap_port_reg_data_187_V_read = data_187_V_read.read();
        ap_port_reg_data_188_V_read = data_188_V_read.read();
        ap_port_reg_data_189_V_read = data_189_V_read.read();
        ap_port_reg_data_190_V_read = data_190_V_read.read();
        ap_port_reg_data_191_V_read = data_191_V_read.read();
        ap_port_reg_data_192_V_read = data_192_V_read.read();
        ap_port_reg_data_193_V_read = data_193_V_read.read();
        ap_port_reg_data_194_V_read = data_194_V_read.read();
        data_160_V_read_2_reg_1536845 = data_160_V_read.read();
        data_163_V_read_2_reg_1536837 = data_163_V_read.read();
        data_164_V_read_2_reg_1536831 = data_164_V_read.read();
        data_175_V_read_2_reg_1536826 = data_175_V_read.read();
        data_195_V_read_2_reg_1536821 = data_195_V_read.read();
        mult_800_V_reg_1536856 = mul_ln1118_1263_fu_2392_p2.read().range(23, 8);
        sext_ln1118_1065_reg_1536850 = sext_ln1118_1065_fu_1527705_p1.read();
        sext_ln1118_1069_reg_1536861 = sext_ln1118_1069_fu_1527720_p1.read();
        sext_ln1118_1072_reg_1536869 = sext_ln1118_1072_fu_1527754_p1.read();
        sext_ln1118_1093_reg_1536881 = sext_ln1118_1093_fu_1527813_p1.read();
        sext_ln1118_1160_reg_1536896 = sext_ln1118_1160_fu_1528269_p1.read();
        trunc_ln708_636_reg_1536876 = add_ln1118_122_fu_1527797_p2.read().range(20, 8);
        trunc_ln708_638_reg_1536886 = mul_ln1118_1278_fu_1901_p2.read().range(22, 8);
        trunc_ln708_665_reg_1536891 = add_ln1118_130_fu_1528253_p2.read().range(20, 8);
        trunc_ln708_667_reg_1536901 = mul_ln1118_1349_fu_2366_p2.read().range(22, 8);
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<2>) ("XX");
            break;
    }
}

}

