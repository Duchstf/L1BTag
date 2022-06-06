#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        add_ln703_332_reg_16049 = add_ln703_332_fu_12754_p2.read();
        add_ln703_340_reg_16054 = add_ln703_340_fu_12760_p2.read();
        add_ln703_351_reg_16059 = add_ln703_351_fu_12766_p2.read();
        add_ln703_352_reg_16064 = add_ln703_352_fu_12772_p2.read();
        add_ln703_367_reg_16069 = add_ln703_367_fu_12787_p2.read();
        add_ln703_371_reg_16074 = add_ln703_371_fu_12793_p2.read();
        add_ln703_372_reg_16079 = add_ln703_372_fu_12799_p2.read();
        add_ln703_394_reg_16084 = add_ln703_394_fu_12823_p2.read();
        add_ln703_414_reg_16089 = add_ln703_414_fu_12846_p2.read();
        add_ln703_420_reg_16094 = add_ln703_420_fu_12852_p2.read();
        add_ln703_431_reg_16099 = add_ln703_431_fu_12858_p2.read();
        add_ln703_432_reg_16104 = add_ln703_432_fu_12864_p2.read();
        add_ln703_451_reg_16109 = add_ln703_451_fu_12870_p2.read();
        add_ln703_452_reg_16114 = add_ln703_452_fu_12876_p2.read();
        add_ln703_460_reg_16119 = add_ln703_460_fu_12882_p2.read();
        add_ln703_474_reg_16124 = add_ln703_474_fu_12904_p2.read();
        add_ln703_494_reg_16129 = add_ln703_494_fu_12927_p2.read();
        add_ln703_513_reg_16134 = add_ln703_513_fu_12950_p2.read();
        add_ln703_reg_16044 = add_ln703_fu_12748_p2.read();
        data_4_V_read15_reg_15972 = ap_port_reg_data_4_V_read.read();
        data_6_V_read17_reg_15964 = ap_port_reg_data_6_V_read.read();
        data_8_V_read_8_reg_15954 = ap_port_reg_data_8_V_read.read();
        mult_108_V_reg_16039 = grp_fu_552_p2.read().range(23, 8);
        mult_22_V_reg_15978 = sub_ln1118_84_fu_12213_p2.read().range(23, 8);
        mult_25_V_reg_15983 = add_ln1118_18_fu_12239_p2.read().range(23, 8);
        mult_45_V_reg_15989 = grp_fu_538_p2.read().range(23, 8);
        mult_50_V_reg_15999 = grp_fu_543_p2.read().range(23, 8);
        mult_52_V_reg_16004 = grp_fu_564_p2.read().range(23, 8);
        trunc_ln708_108_reg_15994 = trunc_ln708_108_fu_12299_p1.read().range(22, 8);
        trunc_ln708_114_reg_16009 = trunc_ln708_114_fu_12463_p1.read().range(20, 8);
        trunc_ln708_118_reg_16014 = trunc_ln708_118_fu_12483_p1.read().range(21, 8);
        trunc_ln708_120_reg_16019 = trunc_ln708_120_fu_12553_p1.read().range(22, 8);
        trunc_ln708_123_reg_16024 = trunc_ln708_123_fu_12563_p1.read().range(22, 8);
        trunc_ln708_132_reg_16029 = trunc_ln708_132_fu_12725_p1.read().range(22, 8);
        trunc_ln708_133_reg_16034 = trunc_ln708_133_fu_12735_p1.read().range(22, 8);
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        add_ln703_334_reg_16267 = add_ln703_334_fu_14046_p2.read();
        add_ln703_343_reg_16272 = add_ln703_343_fu_14063_p2.read();
        add_ln703_354_reg_16277 = add_ln703_354_fu_14073_p2.read();
        add_ln703_360_reg_16282 = add_ln703_360_fu_14078_p2.read();
        add_ln703_374_reg_16287 = add_ln703_374_fu_14088_p2.read();
        add_ln703_383_reg_16292 = add_ln703_383_fu_14110_p2.read();
        add_ln703_385_reg_16297 = add_ln703_385_fu_14122_p2.read();
        add_ln703_403_reg_16302 = add_ln703_403_fu_14146_p2.read();
        add_ln703_423_reg_16307 = add_ln703_423_fu_14164_p2.read();
        add_ln703_428_reg_16312 = add_ln703_428_fu_14201_p2.read();
        add_ln703_434_reg_16317 = add_ln703_434_fu_14212_p2.read();
        add_ln703_443_reg_16322 = add_ln703_443_fu_14233_p2.read();
        add_ln703_454_reg_16327 = add_ln703_454_fu_14244_p2.read();
        add_ln703_463_reg_16332 = add_ln703_463_fu_14261_p2.read();
        add_ln703_468_reg_16337 = add_ln703_468_fu_14294_p2.read();
        add_ln703_483_reg_16342 = add_ln703_483_fu_14318_p2.read();
        add_ln703_487_reg_16347 = add_ln703_487_fu_14334_p2.read();
        add_ln703_500_reg_16352 = add_ln703_500_fu_14340_p2.read();
        add_ln703_506_reg_16357 = add_ln703_506_fu_14352_p2.read();
        add_ln703_522_reg_16362 = add_ln703_522_fu_14376_p2.read();
        data_15_V_read_4_reg_16149 = ap_port_reg_data_15_V_read.read();
        data_17_V_read_4_reg_16139 = ap_port_reg_data_17_V_read.read();
        mult_120_V_reg_16156 = grp_fu_560_p2.read().range(23, 8);
        mult_127_V_reg_16161 = grp_fu_563_p2.read().range(23, 8);
        mult_128_V_reg_16166 = grp_fu_553_p2.read().range(23, 8);
        sext_ln1118_295_reg_16246 = sext_ln1118_295_fu_13877_p1.read();
        trunc_ln708_141_reg_16176 = trunc_ln708_141_fu_13454_p1.read().range(22, 8);
        trunc_ln708_143_reg_16181 = trunc_ln708_143_fu_13477_p1.read().range(15, 2);
        trunc_ln708_146_reg_16186 = sub_ln1118_117_fu_13613_p2.read().range(20, 8);
        trunc_ln708_147_reg_16191 = trunc_ln708_147_fu_13645_p1.read().range(22, 8);
        trunc_ln708_149_reg_16201 = trunc_ln708_149_fu_13677_p1.read().range(22, 8);
        trunc_ln708_150_reg_16211 = sub_ln1118_119_fu_13711_p2.read().range(22, 8);
        trunc_ln708_151_reg_16221 = trunc_ln708_151_fu_13787_p1.read().range(21, 8);
        trunc_ln708_152_reg_16226 = trunc_ln708_152_fu_13797_p1.read().range(22, 8);
        trunc_ln708_153_reg_16231 = sub_ln1118_122_fu_13825_p2.read().range(21, 8);
        trunc_ln708_157_reg_16241 = trunc_ln708_157_fu_13863_p1.read().range(21, 8);
        trunc_ln708_158_reg_16262 = add_ln1118_27_fu_13932_p2.read().range(22, 8);
        trunc_ln708_30_reg_16196 = grp_fu_542_p2.read().range(23, 8);
        trunc_ln708_32_reg_16206 = grp_fu_544_p2.read().range(23, 8);
        trunc_ln708_35_reg_16216 = grp_fu_550_p2.read().range(23, 8);
        trunc_ln708_3_reg_16171 = grp_fu_566_p2.read().range(23, 8);
        trunc_ln708_40_reg_16236 = grp_fu_558_p2.read().range(23, 8);
        trunc_ln708_50_reg_16252 = grp_fu_552_p2.read().range(23, 8);
        trunc_ln708_52_reg_16257 = grp_fu_539_p2.read().range(23, 8);
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        add_ln703_335_reg_16427 = add_ln703_335_fu_15054_p2.read();
        add_ln703_348_reg_16432 = add_ln703_348_fu_15085_p2.read();
        add_ln703_355_reg_16437 = add_ln703_355_fu_15091_p2.read();
        add_ln703_363_reg_16442 = add_ln703_363_fu_15109_p2.read();
        add_ln703_368_reg_16447 = add_ln703_368_fu_15129_p2.read();
        add_ln703_375_reg_16452 = add_ln703_375_fu_15135_p2.read();
        add_ln703_388_reg_16457 = add_ln703_388_fu_15151_p2.read();
        add_ln703_395_reg_16462 = add_ln703_395_fu_15156_p2.read();
        add_ln703_397_reg_16467 = add_ln703_397_fu_15171_p2.read();
        add_ln703_405_reg_16472 = add_ln703_405_fu_15183_p2.read();
        add_ln703_415_reg_16477 = add_ln703_415_fu_15189_p2.read();
        add_ln703_435_reg_16482 = add_ln703_435_fu_15195_p2.read();
        add_ln703_448_reg_16487 = add_ln703_448_fu_15228_p2.read();
        add_ln703_455_reg_16492 = add_ln703_455_fu_15234_p2.read();
        add_ln703_475_reg_16497 = add_ln703_475_fu_15240_p2.read();
        add_ln703_488_reg_16502 = add_ln703_488_fu_15260_p2.read();
        add_ln703_495_reg_16507 = add_ln703_495_fu_15266_p2.read();
        add_ln703_503_reg_16512 = add_ln703_503_fu_15282_p2.read();
        add_ln703_507_reg_16517 = add_ln703_507_fu_15296_p2.read();
        add_ln703_514_reg_16522 = add_ln703_514_fu_15302_p2.read();
        add_ln703_516_reg_16527 = add_ln703_516_fu_15318_p2.read();
        add_ln703_524_reg_16532 = add_ln703_524_fu_15330_p2.read();
        trunc_ln708_148_reg_16377 = sub_ln1118_118_fu_14685_p2.read().range(20, 8);
        trunc_ln708_154_reg_16387 = sub_ln1118_124_fu_14815_p2.read().range(19, 8);
        trunc_ln708_155_reg_16397 = sub_ln1118_126_fu_14858_p2.read().range(22, 8);
        trunc_ln708_159_reg_16402 = trunc_ln708_159_fu_14920_p1.read().range(20, 8);
        trunc_ln708_160_reg_16417 = trunc_ln708_160_fu_14984_p1.read().range(22, 8);
        trunc_ln708_161_reg_16422 = trunc_ln708_161_fu_14994_p1.read().range(22, 8);
        trunc_ln708_42_reg_16382 = add_ln1118_24_fu_14747_p2.read().range(23, 8);
        trunc_ln708_45_reg_16392 = sub_ln1118_125_fu_14831_p2.read().range(23, 8);
        trunc_ln708_62_reg_16407 = grp_fu_565_p2.read().range(23, 8);
        trunc_ln708_65_reg_16412 = grp_fu_549_p2.read().range(23, 8);
        trunc_ln708_96_reg_16372 = add_ln1118_17_fu_14431_p2.read().range(22, 8);
        trunc_ln_reg_16367 = sub_ln1118_fu_14404_p2.read().range(22, 8);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        ap_port_reg_data_10_V_read = data_10_V_read.read();
        ap_port_reg_data_12_V_read = data_12_V_read.read();
        ap_port_reg_data_14_V_read = data_14_V_read.read();
        ap_port_reg_data_15_V_read = data_15_V_read.read();
        ap_port_reg_data_16_V_read = data_16_V_read.read();
        ap_port_reg_data_17_V_read = data_17_V_read.read();
        ap_port_reg_data_18_V_read = data_18_V_read.read();
        ap_port_reg_data_19_V_read = data_19_V_read.read();
        ap_port_reg_data_4_V_read = data_4_V_read.read();
        ap_port_reg_data_6_V_read = data_6_V_read.read();
        ap_port_reg_data_8_V_read = data_8_V_read.read();
        data_0_V_read11_reg_15805 = data_0_V_read.read();
        data_13_V_read_4_reg_15759 = data_13_V_read.read();
        data_2_V_read13_reg_15799 = data_2_V_read.read();
        data_5_V_read16_reg_15789 = data_5_V_read.read();
        data_7_V_read_8_reg_15782 = data_7_V_read.read();
        data_9_V_read_8_reg_15772 = data_9_V_read.read();
        mult_17_V_reg_15849 = sub_ln1118_82_fu_11843_p2.read().range(23, 8);
        mult_34_V_reg_15871 = sub_ln1118_86_fu_11949_p2.read().range(23, 8);
        mult_37_V_reg_15876 = grp_fu_571_p2.read().range(23, 8);
        mult_38_V_reg_15881 = sub_ln1118_87_fu_11975_p2.read().range(23, 8);
        mult_5_V_reg_15814 = grp_fu_562_p2.read().range(23, 8);
        mult_79_V_reg_15909 = grp_fu_535_p2.read().range(23, 8);
        mult_8_V_reg_15824 = grp_fu_534_p2.read().range(23, 8);
        mult_91_V_reg_15914 = sub_ln1118_102_fu_12076_p2.read().range(23, 8);
        sext_ln1118_189_reg_15854 = sext_ln1118_189_fu_11859_p1.read();
        sext_ln1118_202_reg_15886 = sext_ln1118_202_fu_11991_p1.read();
        sext_ln1118_241_reg_15919 = sext_ln1118_241_fu_12097_p1.read();
        sext_ln1118_249_reg_15947 = sext_ln1118_249_fu_12172_p1.read();
        tmp_17_reg_15932 = add_ln1118_20_fu_12136_p2.read().range(21, 8);
        trunc_ln708_100_reg_15839 = trunc_ln708_100_fu_11787_p1.read().range(22, 8);
        trunc_ln708_101_reg_15844 = sub_ln1118_80_fu_11809_p2.read().range(22, 8);
        trunc_ln708_102_reg_15861 = trunc_ln708_102_fu_11887_p1.read().range(22, 8);
        trunc_ln708_103_reg_15866 = sub_ln1118_85_fu_11921_p2.read().range(21, 8);
        trunc_ln708_111_reg_15894 = trunc_ln708_111_fu_11996_p1.read().range(15, 5);
        trunc_ln708_116_reg_15899 = trunc_ln708_116_fu_12021_p1.read().range(15, 3);
        trunc_ln708_117_reg_15904 = trunc_ln708_117_fu_12031_p1.read().range(22, 8);
        trunc_ln708_134_reg_15927 = trunc_ln708_134_fu_12102_p1.read().range(22, 8);
        trunc_ln708_135_reg_15937 = trunc_ln708_135_fu_12152_p1.read().range(15, 6);
        trunc_ln708_136_reg_15942 = trunc_ln708_136_fu_12162_p1.read().range(15, 3);
        trunc_ln708_95_reg_15819 = trunc_ln708_95_fu_11721_p1.read().range(22, 8);
        trunc_ln708_97_reg_15829 = sub_ln1118_79_fu_11761_p2.read().range(22, 8);
        trunc_ln708_99_reg_15834 = trunc_ln708_99_fu_11777_p1.read().range(21, 8);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())))) {
        reg_11563 = grp_fu_573_p2.read().range(23, 8);
        reg_11567 = grp_fu_546_p2.read().range(23, 8);
        reg_11575 = grp_fu_557_p2.read().range(23, 8);
        reg_11591 = grp_fu_568_p2.read().range(23, 8);
        reg_11603 = grp_fu_545_p2.read().range(23, 8);
        reg_11607 = grp_fu_572_p2.read().range(23, 8);
        reg_11615 = grp_fu_549_p2.read().range(23, 8);
        reg_11639 = grp_fu_570_p2.read().range(23, 8);
        reg_11663 = grp_fu_548_p2.read().range(23, 8);
        reg_11667 = grp_fu_561_p2.read().range(23, 8);
        reg_11679 = grp_fu_554_p2.read().range(23, 8);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())))) {
        reg_11571 = grp_fu_538_p2.read().range(23, 8);
        reg_11595 = grp_fu_543_p2.read().range(23, 8);
        reg_11619 = grp_fu_11353_p1.read().range(21, 8);
        reg_11627 = grp_fu_567_p2.read().range(23, 8);
        reg_11635 = grp_fu_540_p2.read().range(23, 8);
        reg_11671 = grp_fu_536_p2.read().range(23, 8);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())))) {
        reg_11579 = grp_fu_11253_p1.read().range(22, 8);
        reg_11587 = grp_fu_541_p2.read().range(23, 8);
        reg_11611 = grp_fu_559_p2.read().range(23, 8);
        reg_11623 = grp_fu_11363_p1.read().range(21, 8);
        reg_11631 = grp_fu_539_p2.read().range(23, 8);
        reg_11643 = grp_fu_542_p2.read().range(23, 8);
        reg_11647 = grp_fu_544_p2.read().range(23, 8);
        reg_11651 = grp_fu_560_p2.read().range(23, 8);
        reg_11655 = grp_fu_547_p2.read().range(23, 8);
        reg_11659 = grp_fu_11453_p1.read().range(22, 8);
        reg_11675 = grp_fu_537_p2.read().range(23, 8);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())))) {
        reg_11583 = grp_fu_555_p2.read().range(23, 8);
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
  esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())))) {
        reg_11599 = grp_fu_564_p2.read().range(23, 8);
    }
    if (((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())))) {
        reg_11683 = grp_fu_562_p2.read().range(23, 8);
        reg_11691 = grp_fu_534_p2.read().range(23, 8);
    }
    if (((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())))) {
        reg_11687 = grp_fu_551_p2.read().range(23, 8);
        reg_11695 = grp_fu_569_p2.read().range(23, 8);
        reg_11699 = grp_fu_556_p2.read().range(23, 8);
    }
    if (((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())))) {
        reg_11703 = grp_fu_550_p2.read().range(23, 8);
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0::thread_ap_NS_fsm() {
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
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}

