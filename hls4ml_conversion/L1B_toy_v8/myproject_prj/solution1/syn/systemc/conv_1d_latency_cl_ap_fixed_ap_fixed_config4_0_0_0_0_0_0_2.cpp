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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        add_ln703_1019_reg_1533059 = add_ln703_1019_fu_1524663_p2.read();
        add_ln703_1023_reg_1533064 = add_ln703_1023_fu_1524687_p2.read();
        add_ln703_1028_reg_1533069 = add_ln703_1028_fu_1524717_p2.read();
        add_ln703_1039_reg_1533074 = add_ln703_1039_fu_1524771_p2.read();
        add_ln703_1043_reg_1533079 = add_ln703_1043_fu_1524795_p2.read();
        add_ln703_1048_reg_1533084 = add_ln703_1048_fu_1524829_p2.read();
        add_ln703_1059_reg_1533089 = add_ln703_1059_fu_1524883_p2.read();
        add_ln703_1063_reg_1533094 = add_ln703_1063_fu_1524907_p2.read();
        add_ln703_1068_reg_1533099 = add_ln703_1068_fu_1524941_p2.read();
        add_ln703_1079_reg_1533104 = add_ln703_1079_fu_1524999_p2.read();
        add_ln703_1083_reg_1533109 = add_ln703_1083_fu_1525023_p2.read();
        add_ln703_1088_reg_1533114 = add_ln703_1088_fu_1525057_p2.read();
        add_ln703_1099_reg_1533119 = add_ln703_1099_fu_1525111_p2.read();
        add_ln703_1103_reg_1533124 = add_ln703_1103_fu_1525135_p2.read();
        add_ln703_1108_reg_1533129 = add_ln703_1108_fu_1525165_p2.read();
        add_ln703_1119_reg_1533134 = add_ln703_1119_fu_1525223_p2.read();
        add_ln703_1123_reg_1533139 = add_ln703_1123_fu_1525247_p2.read();
        add_ln703_1128_reg_1533144 = add_ln703_1128_fu_1525277_p2.read();
        add_ln703_1139_reg_1533149 = add_ln703_1139_fu_1525331_p2.read();
        add_ln703_1143_reg_1533154 = add_ln703_1143_fu_1525355_p2.read();
        add_ln703_1148_reg_1533159 = add_ln703_1148_fu_1525389_p2.read();
        add_ln703_1159_reg_1533164 = add_ln703_1159_fu_1525443_p2.read();
        add_ln703_1163_reg_1533169 = add_ln703_1163_fu_1525467_p2.read();
        add_ln703_1168_reg_1533174 = add_ln703_1168_fu_1525501_p2.read();
        add_ln703_1179_reg_1533179 = add_ln703_1179_fu_1525559_p2.read();
        add_ln703_1183_reg_1533184 = add_ln703_1183_fu_1525583_p2.read();
        add_ln703_1188_reg_1533189 = add_ln703_1188_fu_1525617_p2.read();
        add_ln703_1199_reg_1533194 = add_ln703_1199_fu_1525671_p2.read();
        add_ln703_1203_reg_1533199 = add_ln703_1203_fu_1525695_p2.read();
        add_ln703_1208_reg_1533204 = add_ln703_1208_fu_1525725_p2.read();
        add_ln703_1219_reg_1533209 = add_ln703_1219_fu_1525783_p2.read();
        add_ln703_1223_reg_1533214 = add_ln703_1223_fu_1525807_p2.read();
        add_ln703_1228_reg_1533219 = add_ln703_1228_fu_1525837_p2.read();
        add_ln703_1239_reg_1533224 = add_ln703_1239_fu_1525891_p2.read();
        add_ln703_1243_reg_1533229 = add_ln703_1243_fu_1525903_p2.read();
        add_ln703_1248_reg_1533234 = add_ln703_1248_fu_1525937_p2.read();
        add_ln703_1259_reg_1533239 = add_ln703_1259_fu_1525991_p2.read();
        add_ln703_1263_reg_1533244 = add_ln703_1263_fu_1526015_p2.read();
        add_ln703_1268_reg_1533249 = add_ln703_1268_fu_1526049_p2.read();
        add_ln703_1279_reg_1533254 = add_ln703_1279_fu_1526107_p2.read();
        add_ln703_1283_reg_1533259 = add_ln703_1283_fu_1526131_p2.read();
        add_ln703_1288_reg_1533264 = add_ln703_1288_fu_1526165_p2.read();
        add_ln703_1299_reg_1533269 = add_ln703_1299_fu_1526219_p2.read();
        add_ln703_1303_reg_1533274 = add_ln703_1303_fu_1526243_p2.read();
        add_ln703_1308_reg_1533279 = add_ln703_1308_fu_1526273_p2.read();
        add_ln703_1319_reg_1533284 = add_ln703_1319_fu_1526331_p2.read();
        add_ln703_1323_reg_1533289 = add_ln703_1323_fu_1526355_p2.read();
        add_ln703_1328_reg_1533294 = add_ln703_1328_fu_1526385_p2.read();
        add_ln703_1339_reg_1533299 = add_ln703_1339_fu_1526439_p2.read();
        add_ln703_1343_reg_1533304 = add_ln703_1343_fu_1526463_p2.read();
        add_ln703_1348_reg_1533309 = add_ln703_1348_fu_1526497_p2.read();
        add_ln703_1359_reg_1533314 = add_ln703_1359_fu_1526551_p2.read();
        add_ln703_1363_reg_1533319 = add_ln703_1363_fu_1526575_p2.read();
        add_ln703_1368_reg_1533324 = add_ln703_1368_fu_1526609_p2.read();
        add_ln703_1379_reg_1533329 = add_ln703_1379_fu_1526667_p2.read();
        add_ln703_1383_reg_1533334 = add_ln703_1383_fu_1526691_p2.read();
        add_ln703_1388_reg_1533339 = add_ln703_1388_fu_1526725_p2.read();
        add_ln703_1399_reg_1533344 = add_ln703_1399_fu_1526779_p2.read();
        add_ln703_1403_reg_1533349 = add_ln703_1403_fu_1526803_p2.read();
        add_ln703_1408_reg_1533354 = add_ln703_1408_fu_1526827_p2.read();
        add_ln703_1419_reg_1533359 = add_ln703_1419_fu_1526885_p2.read();
        add_ln703_1423_reg_1533364 = add_ln703_1423_fu_1526909_p2.read();
        add_ln703_1428_reg_1533369 = add_ln703_1428_fu_1526939_p2.read();
        add_ln703_1439_reg_1533374 = add_ln703_1439_fu_1526993_p2.read();
        add_ln703_1443_reg_1533379 = add_ln703_1443_fu_1527017_p2.read();
        add_ln703_1448_reg_1533384 = add_ln703_1448_fu_1527051_p2.read();
        add_ln703_1459_reg_1533389 = add_ln703_1459_fu_1527105_p2.read();
        add_ln703_1463_reg_1533394 = add_ln703_1463_fu_1527129_p2.read();
        add_ln703_1468_reg_1533399 = add_ln703_1468_fu_1527163_p2.read();
        add_ln703_1479_reg_1533404 = add_ln703_1479_fu_1527221_p2.read();
        add_ln703_1483_reg_1533409 = add_ln703_1483_fu_1527245_p2.read();
        add_ln703_1488_reg_1533414 = add_ln703_1488_fu_1527279_p2.read();
        add_ln703_1499_reg_1533419 = add_ln703_1499_fu_1527333_p2.read();
        add_ln703_1503_reg_1533424 = add_ln703_1503_fu_1527357_p2.read();
        add_ln703_1508_reg_1533429 = add_ln703_1508_fu_1527387_p2.read();
        add_ln703_1519_reg_1533434 = add_ln703_1519_fu_1527445_p2.read();
        add_ln703_1523_reg_1533439 = add_ln703_1523_fu_1527469_p2.read();
        add_ln703_1528_reg_1533444 = add_ln703_1528_fu_1527499_p2.read();
        add_ln703_1539_reg_1533449 = add_ln703_1539_fu_1527553_p2.read();
        add_ln703_1543_reg_1533454 = add_ln703_1543_fu_1527577_p2.read();
        add_ln703_1548_reg_1533459 = add_ln703_1548_fu_1527611_p2.read();
        add_ln703_1559_reg_1533464 = add_ln703_1559_fu_1527665_p2.read();
        add_ln703_1563_reg_1533469 = add_ln703_1563_fu_1527689_p2.read();
        add_ln703_1568_reg_1533474 = add_ln703_1568_fu_1527723_p2.read();
        add_ln703_1579_reg_1533479 = add_ln703_1579_fu_1527781_p2.read();
        add_ln703_1583_reg_1533484 = add_ln703_1583_fu_1527805_p2.read();
        add_ln703_1588_reg_1533489 = add_ln703_1588_fu_1527839_p2.read();
        add_ln703_1599_reg_1533494 = add_ln703_1599_fu_1527893_p2.read();
        add_ln703_1603_reg_1533499 = add_ln703_1603_fu_1527917_p2.read();
        add_ln703_1608_reg_1533504 = add_ln703_1608_fu_1527941_p2.read();
        add_ln703_1619_reg_1533509 = add_ln703_1619_fu_1527999_p2.read();
        add_ln703_1623_reg_1533514 = add_ln703_1623_fu_1528023_p2.read();
        add_ln703_1628_reg_1533519 = add_ln703_1628_fu_1528053_p2.read();
        add_ln703_1639_reg_1533524 = add_ln703_1639_fu_1528107_p2.read();
        add_ln703_1643_reg_1533529 = add_ln703_1643_fu_1528131_p2.read();
        add_ln703_1648_reg_1533534 = add_ln703_1648_fu_1528165_p2.read();
        add_ln703_1659_reg_1533539 = add_ln703_1659_fu_1528219_p2.read();
        add_ln703_1663_reg_1533544 = add_ln703_1663_fu_1528243_p2.read();
        add_ln703_1668_reg_1533549 = add_ln703_1668_fu_1528277_p2.read();
        add_ln703_1679_reg_1533554 = add_ln703_1679_fu_1528335_p2.read();
        add_ln703_1683_reg_1533559 = add_ln703_1683_fu_1528359_p2.read();
        add_ln703_1688_reg_1533564 = add_ln703_1688_fu_1528393_p2.read();
        add_ln703_1699_reg_1533569 = add_ln703_1699_fu_1528447_p2.read();
        add_ln703_1703_reg_1533574 = add_ln703_1703_fu_1528471_p2.read();
        add_ln703_1708_reg_1533579 = add_ln703_1708_fu_1528501_p2.read();
        add_ln703_1719_reg_1533584 = add_ln703_1719_fu_1528559_p2.read();
        add_ln703_1723_reg_1533589 = add_ln703_1723_fu_1528583_p2.read();
        add_ln703_1728_reg_1533594 = add_ln703_1728_fu_1528607_p2.read();
        add_ln703_1739_reg_1533599 = add_ln703_1739_fu_1528661_p2.read();
        add_ln703_1743_reg_1533604 = add_ln703_1743_fu_1528685_p2.read();
        add_ln703_1748_reg_1533609 = add_ln703_1748_fu_1528719_p2.read();
        add_ln703_1759_reg_1533614 = add_ln703_1759_fu_1528773_p2.read();
        add_ln703_1763_reg_1533619 = add_ln703_1763_fu_1528797_p2.read();
        add_ln703_1768_reg_1533624 = add_ln703_1768_fu_1528831_p2.read();
        add_ln703_1779_reg_1533629 = add_ln703_1779_fu_1528889_p2.read();
        add_ln703_1783_reg_1533634 = add_ln703_1783_fu_1528913_p2.read();
        add_ln703_1788_reg_1533639 = add_ln703_1788_fu_1528947_p2.read();
        add_ln703_1799_reg_1533644 = add_ln703_1799_fu_1529001_p2.read();
        add_ln703_1803_reg_1533649 = add_ln703_1803_fu_1529025_p2.read();
        add_ln703_1808_reg_1533654 = add_ln703_1808_fu_1529055_p2.read();
        add_ln703_1819_reg_1533659 = add_ln703_1819_fu_1529113_p2.read();
        add_ln703_1834_reg_1533664 = add_ln703_1834_fu_1529137_p2.read();
        add_ln703_1835_reg_1533669 = add_ln703_1835_fu_1529143_p2.read();
        add_ln703_1851_reg_1533674 = add_ln703_1851_fu_1529149_p2.read();
        add_ln703_1852_reg_1533679 = add_ln703_1852_fu_1529155_p2.read();
        add_ln703_1874_reg_1533684 = add_ln703_1874_fu_1529179_p2.read();
        add_ln703_1891_reg_1533689 = add_ln703_1891_fu_1529185_p2.read();
        add_ln703_1892_reg_1533694 = add_ln703_1892_fu_1529191_p2.read();
        add_ln703_1914_reg_1533699 = add_ln703_1914_fu_1529219_p2.read();
        add_ln703_1931_reg_1533704 = add_ln703_1931_fu_1529225_p2.read();
        add_ln703_1932_reg_1533709 = add_ln703_1932_fu_1529231_p2.read();
        add_ln703_1951_reg_1533714 = add_ln703_1951_fu_1529237_p2.read();
        add_ln703_1952_reg_1533719 = add_ln703_1952_fu_1529243_p2.read();
        add_ln703_1974_reg_1533724 = add_ln703_1974_fu_1529267_p2.read();
        add_ln703_1991_reg_1533729 = add_ln703_1991_fu_1529273_p2.read();
        add_ln703_1992_reg_1533734 = add_ln703_1992_fu_1529279_p2.read();
        ap_port_reg_data_170_V_read = data_170_V_read.read();
        ap_port_reg_data_172_V_read = data_172_V_read.read();
        ap_port_reg_data_173_V_read = data_173_V_read.read();
        ap_port_reg_data_175_V_read = data_175_V_read.read();
        ap_port_reg_data_176_V_read = data_176_V_read.read();
        ap_port_reg_data_177_V_read = data_177_V_read.read();
        ap_port_reg_data_178_V_read = data_178_V_read.read();
        ap_port_reg_data_186_V_read = data_186_V_read.read();
        ap_port_reg_data_187_V_read = data_187_V_read.read();
        ap_port_reg_data_188_V_read = data_188_V_read.read();
        ap_port_reg_data_190_V_read = data_190_V_read.read();
        ap_port_reg_data_191_V_read = data_191_V_read.read();
        ap_port_reg_data_192_V_read = data_192_V_read.read();
        ap_port_reg_data_193_V_read = data_193_V_read.read();
        ap_port_reg_data_194_V_read = data_194_V_read.read();
        ap_port_reg_data_195_V_read = data_195_V_read.read();
        ap_port_reg_data_196_V_read = data_196_V_read.read();
        ap_port_reg_data_197_V_read = data_197_V_read.read();
        ap_port_reg_data_198_V_read = data_198_V_read.read();
        ap_port_reg_data_199_V_read = data_199_V_read.read();
        data_165_V_read_2_reg_1532953 = data_165_V_read.read();
        data_166_V_read_2_reg_1532948 = data_166_V_read.read();
        data_167_V_read_2_reg_1532941 = data_167_V_read.read();
        data_168_V_read_2_reg_1532932 = data_168_V_read.read();
        data_171_V_read_2_reg_1532925 = data_171_V_read.read();
        data_174_V_read_2_reg_1532918 = data_174_V_read.read();
        data_179_V_read_2_reg_1532911 = data_179_V_read.read();
        data_182_V_read_2_reg_1532906 = data_182_V_read.read();
        data_185_V_read_2_reg_1532898 = data_185_V_read.read();
        data_189_V_read_2_reg_1532892 = data_189_V_read.read();
        mult_819_V_reg_1533017 = mul_ln1118_1203_fu_2378_p2.read().range(23, 8);
        sext_ln1118_1237_reg_1532960 = sext_ln1118_1237_fu_1523392_p1.read();
        sext_ln1118_1252_reg_1532966 = sext_ln1118_1252_fu_1523561_p1.read();
        sext_ln1118_1254_reg_1532972 = sext_ln1118_1254_fu_1523577_p1.read();
        sext_ln1118_1255_reg_1532977 = sext_ln1118_1255_fu_1523586_p1.read();
        sext_ln1118_1256_reg_1532982 = sext_ln1118_1256_fu_1523601_p1.read();
        sext_ln1118_1257_reg_1532987 = sext_ln1118_1257_fu_1523606_p1.read();
        sext_ln1118_1263_reg_1532992 = sext_ln1118_1263_fu_1523625_p1.read();
        sext_ln1118_1273_reg_1533002 = sext_ln1118_1273_fu_1523640_p1.read();
        sext_ln1118_1288_reg_1533012 = sext_ln1118_1288_fu_1523655_p1.read();
        sext_ln1118_1334_reg_1533037 = sext_ln1118_1334_fu_1524281_p1.read();
        sext_ln1118_1341_reg_1533043 = sext_ln1118_1341_fu_1524286_p1.read();
        tmp_157_reg_1533032 = mul_ln1118_1239_fu_2332_p2.read().range(21, 8);
        tmp_163_reg_1533054 = mul_ln1118_1309_fu_1863_p2.read().range(21, 8);
        trunc_ln708_779_reg_1532997 = mul_ln1118_1201_fu_2376_p2.read().range(22, 8);
        trunc_ln708_782_reg_1533007 = mul_ln1118_1202_fu_2354_p2.read().range(22, 8);
        trunc_ln708_789_reg_1533022 = sub_ln1118_535_fu_1523814_p2.read().range(21, 8);
        trunc_ln708_792_reg_1533027 = trunc_ln708_792_fu_1523864_p1.read().range(15, 8);
        trunc_ln708_832_reg_1533049 = trunc_ln708_832_fu_1524405_p1.read().range(15, 8);
    }
}

void conv_1d_latency_cl_ap_fixed_ap_fixed_config4_0_0_0_0_0_0::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<2>) ("XX");
            break;
    }
}

}

