#include "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        acc_0_V_reg_123388 = acc_0_V_fu_121235_p2.read();
        acc_13_V_reg_123483 = acc_13_V_fu_121908_p2.read();
        acc_14_V_reg_123488 = acc_14_V_fu_121961_p2.read();
        acc_15_V_reg_123493 = acc_15_V_fu_122017_p2.read();
        acc_16_V_reg_123498 = acc_16_V_fu_122075_p2.read();
        acc_17_V_reg_123503 = acc_17_V_fu_122166_p2.read();
        acc_19_V_reg_123518 = acc_19_V_fu_122260_p2.read();
        acc_1_V_reg_123393 = acc_1_V_fu_121288_p2.read();
        acc_2_V_reg_123398 = acc_2_V_fu_121348_p2.read();
        acc_3_V_reg_123403 = acc_3_V_fu_121401_p2.read();
        acc_5_V_reg_123418 = acc_5_V_fu_121494_p2.read();
        acc_7_V_reg_123433 = acc_7_V_fu_121594_p2.read();
        acc_9_V_reg_123448 = acc_9_V_fu_121710_p2.read();
        add_ln703_169_reg_123408 = add_ln703_169_fu_121430_p2.read();
        add_ln703_171_reg_123413 = add_ln703_171_fu_121440_p2.read();
        add_ln703_189_reg_123423 = add_ln703_189_fu_121528_p2.read();
        add_ln703_191_reg_123428 = add_ln703_191_fu_121538_p2.read();
        add_ln703_208_reg_123438 = add_ln703_208_fu_121621_p2.read();
        add_ln703_211_reg_123443 = add_ln703_211_fu_121638_p2.read();
        add_ln703_231_reg_123453 = add_ln703_231_fu_121743_p2.read();
        add_ln703_233_reg_123458 = add_ln703_233_fu_121753_p2.read();
        add_ln703_240_reg_123463 = add_ln703_240_fu_121780_p2.read();
        add_ln703_244_reg_123468 = add_ln703_244_fu_121800_p2.read();
        add_ln703_251_reg_123473 = add_ln703_251_fu_121833_p2.read();
        add_ln703_255_reg_123478 = add_ln703_255_fu_121856_p2.read();
        add_ln703_317_reg_123508 = add_ln703_317_fu_122196_p2.read();
        add_ln703_319_reg_123513 = add_ln703_319_fu_122206_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        add_ln703_326_reg_123383 = add_ln703_326_fu_120531_p2.read();
        data_0_V_read_7_reg_122465 = data_0_V_read.read();
        data_7_V_read_7_reg_122455 = data_7_V_read.read();
        data_9_V_read_7_reg_122443 = data_9_V_read.read();
        mult_0_V_reg_122471 = mul_ln1118_fu_518_p2.read().range(23, 8);
        mult_100_V_reg_122942 = mul_ln1118_149_fu_501_p2.read().range(23, 8);
        mult_101_V_reg_122947 = mul_ln1118_150_fu_593_p2.read().range(23, 8);
        mult_102_V_reg_122952 = mul_ln1118_151_fu_685_p2.read().range(23, 8);
        mult_103_V_reg_122957 = mul_ln1118_152_fu_670_p2.read().range(23, 8);
        mult_104_V_reg_122962 = mul_ln1118_153_fu_535_p2.read().range(23, 8);
        mult_106_V_reg_122972 = mul_ln1118_155_fu_537_p2.read().range(23, 8);
        mult_107_V_reg_122977 = mul_ln1118_156_fu_626_p2.read().range(23, 8);
        mult_110_V_reg_122992 = mul_ln1118_158_fu_527_p2.read().range(23, 8);
        mult_111_V_reg_122997 = mul_ln1118_159_fu_619_p2.read().range(23, 8);
        mult_113_V_reg_123007 = mul_ln1118_160_fu_629_p2.read().range(23, 8);
        mult_114_V_reg_123012 = sub_ln1118_52_fu_119486_p2.read().range(23, 8);
        mult_116_V_reg_123022 = sub_ln1118_54_fu_119534_p2.read().range(23, 8);
        mult_118_V_reg_123032 = mul_ln1118_162_fu_654_p2.read().range(23, 8);
        mult_119_V_reg_123037 = mul_ln1118_163_fu_655_p2.read().range(23, 8);
        mult_11_V_reg_122521 = mul_ln1118_81_fu_570_p2.read().range(23, 8);
        mult_121_V_reg_123047 = mul_ln1118_165_fu_550_p2.read().range(23, 8);
        mult_123_V_reg_123057 = mul_ln1118_166_fu_607_p2.read().range(23, 8);
        mult_124_V_reg_123062 = mul_ln1118_167_fu_512_p2.read().range(23, 8);
        mult_125_V_reg_123067 = mul_ln1118_168_fu_604_p2.read().range(23, 8);
        mult_126_V_reg_123072 = mul_ln1118_169_fu_641_p2.read().range(23, 8);
        mult_128_V_reg_123082 = mul_ln1118_170_fu_506_p2.read().range(23, 8);
        mult_129_V_reg_123087 = mul_ln1118_171_fu_572_p2.read().range(23, 8);
        mult_130_V_reg_123092 = mul_ln1118_172_fu_508_p2.read().range(23, 8);
        mult_131_V_reg_123097 = mul_ln1118_173_fu_645_p2.read().range(23, 8);
        mult_133_V_reg_123107 = mul_ln1118_175_fu_560_p2.read().range(23, 8);
        mult_134_V_reg_123112 = mul_ln1118_176_fu_652_p2.read().range(23, 8);
        mult_138_V_reg_123132 = mul_ln1118_178_fu_695_p2.read().range(23, 8);
        mult_13_V_reg_122531 = mul_ln1118_83_fu_643_p2.read().range(23, 8);
        mult_140_V_reg_123142 = mul_ln1118_180_fu_561_p2.read().range(23, 8);
        mult_142_V_reg_123152 = mul_ln1118_182_fu_563_p2.read().range(23, 8);
        mult_144_V_reg_123162 = mul_ln1118_184_fu_659_p2.read().range(23, 8);
        mult_145_V_reg_123167 = mul_ln1118_185_fu_500_p2.read().range(23, 8);
        mult_146_V_reg_123172 = mul_ln1118_186_fu_665_p2.read().range(23, 8);
        mult_14_V_reg_122536 = mul_ln1118_84_fu_573_p2.read().range(23, 8);
        mult_150_V_reg_123182 = mul_ln1118_188_fu_614_p2.read().range(23, 8);
        mult_155_V_reg_123202 = mul_ln1118_192_fu_541_p2.read().range(23, 8);
        mult_157_V_reg_123207 = mul_ln1118_193_fu_653_p2.read().range(23, 8);
        mult_158_V_reg_123212 = mul_ln1118_194_fu_631_p2.read().range(23, 8);
        mult_15_V_reg_122541 = mul_ln1118_85_fu_596_p2.read().range(23, 8);
        mult_160_V_reg_123222 = mul_ln1118_196_fu_602_p2.read().range(23, 8);
        mult_161_V_reg_123227 = mul_ln1118_197_fu_668_p2.read().range(23, 8);
        mult_162_V_reg_123232 = mul_ln1118_198_fu_669_p2.read().range(23, 8);
        mult_163_V_reg_123237 = mul_ln1118_199_fu_600_p2.read().range(23, 8);
        mult_164_V_reg_123242 = mul_ln1118_200_fu_635_p2.read().range(23, 8);
        mult_166_V_reg_123252 = mul_ln1118_201_fu_660_p2.read().range(23, 8);
        mult_167_V_reg_123257 = mul_ln1118_202_fu_679_p2.read().range(23, 8);
        mult_169_V_reg_123267 = mul_ln1118_203_fu_625_p2.read().range(23, 8);
        mult_16_V_reg_122546 = mul_ln1118_86_fu_675_p2.read().range(23, 8);
        mult_170_V_reg_123272 = mul_ln1118_204_fu_644_p2.read().range(23, 8);
        mult_171_V_reg_123277 = sub_ln1118_65_fu_120273_p2.read().range(23, 8);
        mult_173_V_reg_123287 = mul_ln1118_206_fu_521_p2.read().range(23, 8);
        mult_174_V_reg_123292 = mul_ln1118_207_fu_587_p2.read().range(23, 8);
        mult_178_V_reg_123312 = mul_ln1118_208_fu_594_p2.read().range(23, 8);
        mult_182_V_reg_123337 = mul_ln1118_210_fu_540_p2.read().range(23, 8);
        mult_183_V_reg_123342 = mul_ln1118_211_fu_664_p2.read().range(23, 8);
        mult_184_V_reg_123348 = mul_ln1118_212_fu_610_p2.read().range(23, 8);
        mult_188_V_reg_123353 = mul_ln1118_213_fu_514_p2.read().range(23, 8);
        mult_18_V_reg_122556 = mul_ln1118_87_fu_694_p2.read().range(23, 8);
        mult_193_V_reg_123363 = mul_ln1118_215_fu_510_p2.read().range(23, 8);
        mult_196_V_reg_123368 = mul_ln1118_216_fu_647_p2.read().range(23, 8);
        mult_198_V_reg_123378 = mul_ln1118_218_fu_642_p2.read().range(23, 8);
        mult_19_V_reg_122561 = mul_ln1118_88_fu_672_p2.read().range(23, 8);
        mult_1_V_reg_122476 = mul_ln1118_75_fu_519_p2.read().range(23, 8);
        mult_21_V_reg_122571 = mul_ln1118_89_fu_513_p2.read().range(23, 8);
        mult_23_V_reg_122581 = mul_ln1118_90_fu_624_p2.read().range(23, 8);
        mult_24_V_reg_122586 = mul_ln1118_91_fu_696_p2.read().range(23, 8);
        mult_25_V_reg_122591 = mul_ln1118_92_fu_697_p2.read().range(23, 8);
        mult_28_V_reg_122606 = mul_ln1118_94_fu_636_p2.read().range(23, 8);
        mult_2_V_reg_122481 = mul_ln1118_76_fu_520_p2.read().range(23, 8);
        mult_32_V_reg_122626 = mul_ln1118_95_fu_555_p2.read().range(23, 8);
        mult_33_V_reg_122631 = mul_ln1118_96_fu_606_p2.read().range(23, 8);
        mult_34_V_reg_122636 = mul_ln1118_97_fu_666_p2.read().range(23, 8);
        mult_35_V_reg_122641 = mul_ln1118_98_fu_677_p2.read().range(23, 8);
        mult_36_V_reg_122646 = mul_ln1118_99_fu_613_p2.read().range(23, 8);
        mult_37_V_reg_122651 = mul_ln1118_100_fu_543_p2.read().range(23, 8);
        mult_38_V_reg_122656 = mul_ln1118_101_fu_680_p2.read().range(23, 8);
        mult_41_V_reg_122671 = mul_ln1118_104_fu_686_p2.read().range(23, 8);
        mult_43_V_reg_122681 = mul_ln1118_105_fu_673_p2.read().range(23, 8);
        mult_44_V_reg_122686 = mul_ln1118_106_fu_692_p2.read().range(23, 8);
        mult_45_V_reg_122691 = mul_ln1118_107_fu_597_p2.read().range(23, 8);
        mult_47_V_reg_122701 = sub_ln1118_41_fu_118482_p2.read().range(23, 8);
        mult_48_V_reg_122706 = mul_ln1118_109_fu_532_p2.read().range(23, 8);
        mult_49_V_reg_122711 = mul_ln1118_110_fu_533_p2.read().range(23, 8);
        mult_4_V_reg_122491 = mul_ln1118_77_fu_649_p2.read().range(23, 8);
        mult_52_V_reg_122726 = mul_ln1118_113_fu_575_p2.read().range(23, 8);
        mult_53_V_reg_122731 = mul_ln1118_114_fu_553_p2.read().range(23, 8);
        mult_56_V_reg_122742 = mul_ln1118_116_fu_559_p2.read().range(23, 8);
        mult_58_V_reg_122747 = mul_ln1118_117_fu_585_p2.read().range(23, 8);
        mult_62_V_reg_122762 = mul_ln1118_120_fu_588_p2.read().range(23, 8);
        mult_63_V_reg_122767 = mul_ln1118_121_fu_511_p2.read().range(23, 8);
        mult_64_V_reg_122772 = mul_ln1118_122_fu_601_p2.read().range(23, 8);
        mult_68_V_reg_122792 = mul_ln1118_125_fu_638_p2.read().range(23, 8);
        mult_70_V_reg_122797 = mul_ln1118_126_fu_639_p2.read().range(23, 8);
        mult_71_V_reg_122802 = sub_ln1118_44_fu_118803_p2.read().range(23, 8);
        mult_73_V_reg_122812 = mul_ln1118_128_fu_576_p2.read().range(23, 8);
        mult_74_V_reg_122817 = sub_ln1118_45_fu_118863_p2.read().range(23, 8);
        mult_76_V_reg_122827 = mul_ln1118_130_fu_681_p2.read().range(23, 8);
        mult_77_V_reg_122832 = mul_ln1118_131_fu_554_p2.read().range(23, 8);
        mult_79_V_reg_122842 = mul_ln1118_132_fu_646_p2.read().range(23, 8);
        mult_80_V_reg_122847 = mul_ln1118_133_fu_592_p2.read().range(23, 8);
        mult_81_V_reg_122852 = mul_ln1118_134_fu_556_p2.read().range(23, 8);
        mult_84_V_reg_122867 = mul_ln1118_137_fu_565_p2.read().range(23, 8);
        mult_85_V_reg_122872 = mul_ln1118_138_fu_632_p2.read().range(23, 8);
        mult_87_V_reg_122882 = mul_ln1118_139_fu_505_p2.read().range(23, 8);
        mult_88_V_reg_122887 = mul_ln1118_140_fu_507_p2.read().range(23, 8);
        mult_89_V_reg_122892 = mul_ln1118_141_fu_526_p2.read().range(23, 8);
        mult_8_V_reg_122511 = mul_ln1118_80_fu_633_p2.read().range(23, 8);
        mult_90_V_reg_122897 = mul_ln1118_142_fu_545_p2.read().range(23, 8);
        mult_91_V_reg_122902 = mul_ln1118_143_fu_523_p2.read().range(23, 8);
        mult_94_V_reg_122917 = mul_ln1118_144_fu_546_p2.read().range(23, 8);
        mult_97_V_reg_122932 = mul_ln1118_147_fu_599_p2.read().range(23, 8);
        sext_ln1118_164_reg_123322 = sext_ln1118_164_fu_120415_p1.read();
        sext_ln1118_165_reg_123327 = sext_ln1118_165_fu_120426_p1.read();
        tmp_10_reg_123137 = mul_ln1118_179_fu_582_p2.read().range(21, 8);
        tmp_11_reg_123187 = mul_ln1118_189_fu_615_p2.read().range(21, 8);
        tmp_12_reg_123262 = sub_ln1118_64_fu_120225_p2.read().range(20, 8);
        tmp_13_reg_123302 = sub_ln1118_67_fu_120351_p2.read().range(21, 8);
        tmp_14_reg_123307 = add_ln1118_13_fu_120367_p2.read().range(20, 8);
        tmp_15_reg_123317 = sub_ln1118_68_fu_120393_p2.read().range(21, 8);
        tmp_9_reg_123122 = mul_ln1118_177_fu_671_p2.read().range(21, 8);
        trunc_ln708_27_reg_122501 = mul_ln1118_78_fu_627_p2.read().range(22, 8);
        trunc_ln708_28_reg_122506 = mul_ln1118_79_fu_605_p2.read().range(22, 8);
        trunc_ln708_29_reg_122516 = sub_ln1118_31_fu_117891_p2.read().range(22, 8);
        trunc_ln708_30_reg_122526 = mul_ln1118_82_fu_564_p2.read().range(21, 8);
        trunc_ln708_31_reg_122551 = sub_ln1118_32_fu_117967_p2.read().range(22, 8);
        trunc_ln708_32_reg_122566 = sub_ln1118_34_fu_118063_p2.read().range(22, 8);
        trunc_ln708_33_reg_122576 = sub_ln1118_35_fu_118101_p2.read().range(21, 8);
        trunc_ln708_34_reg_122596 = sub_ln1118_36_fu_118163_p2.read().range(22, 8);
        trunc_ln708_35_reg_122601 = mul_ln1118_93_fu_562_p2.read().range(22, 8);
        trunc_ln708_36_reg_122611 = trunc_ln708_36_fu_118199_p1.read().range(15, 8);
        trunc_ln708_37_reg_122616 = sub_ln1118_37_fu_118221_p2.read().range(21, 8);
        trunc_ln708_38_reg_122621 = sub_ln1118_38_fu_118237_p2.read().range(18, 8);
        trunc_ln708_39_reg_122661 = mul_ln1118_102_fu_687_p2.read().range(22, 8);
        trunc_ln708_40_reg_122666 = mul_ln1118_103_fu_590_p2.read().range(22, 8);
        trunc_ln708_41_reg_122676 = sub_ln1118_40_fu_118414_p2.read().range(21, 8);
        trunc_ln708_42_reg_122696 = mul_ln1118_108_fu_667_p2.read().range(22, 8);
        trunc_ln708_43_reg_122716 = mul_ln1118_111_fu_534_p2.read().range(22, 8);
        trunc_ln708_44_reg_122721 = mul_ln1118_112_fu_557_p2.read().range(21, 8);
        trunc_ln708_45_reg_122737 = mul_ln1118_115_fu_628_p2.read().range(22, 8);
        trunc_ln708_47_reg_122752 = mul_ln1118_118_fu_651_p2.read().range(21, 8);
        trunc_ln708_48_reg_122757 = mul_ln1118_119_fu_522_p2.read().range(22, 8);
        trunc_ln708_49_reg_122777 = mul_ln1118_123_fu_579_p2.read().range(22, 8);
        trunc_ln708_50_reg_122782 = sub_ln1118_42_fu_118739_p2.read().range(17, 8);
        trunc_ln708_51_reg_122787 = mul_ln1118_124_fu_598_p2.read().range(22, 8);
        trunc_ln708_52_reg_122807 = mul_ln1118_127_fu_504_p2.read().range(20, 8);
        trunc_ln708_53_reg_122822 = mul_ln1118_129_fu_678_p2.read().range(21, 8);
        trunc_ln708_54_reg_122837 = add_ln1118_9_fu_118921_p2.read().range(22, 8);
        trunc_ln708_55_reg_122857 = mul_ln1118_135_fu_693_p2.read().range(22, 8);
        trunc_ln708_56_reg_122862 = mul_ln1118_136_fu_558_p2.read().range(22, 8);
        trunc_ln708_57_reg_122877 = add_ln1118_10_fu_119055_p2.read().range(20, 8);
        trunc_ln708_58_reg_122907 = sub_ln1118_47_fu_119139_p2.read().range(20, 8);
        trunc_ln708_59_reg_122912 = sub_ln1118_48_fu_119167_p2.read().range(21, 8);
        trunc_ln708_60_reg_122922 = mul_ln1118_145_fu_547_p2.read().range(21, 8);
        trunc_ln708_61_reg_122927 = mul_ln1118_146_fu_684_p2.read().range(22, 8);
        trunc_ln708_62_reg_122937 = mul_ln1118_148_fu_502_p2.read().range(22, 8);
        trunc_ln708_63_reg_122967 = mul_ln1118_154_fu_542_p2.read().range(22, 8);
        trunc_ln708_64_reg_122982 = mul_ln1118_157_fu_581_p2.read().range(22, 8);
        trunc_ln708_65_reg_122987 = sub_ln1118_50_fu_119412_p2.read().range(20, 8);
        trunc_ln708_66_reg_123002 = sub_ln1118_51_fu_119448_p2.read().range(17, 8);
        trunc_ln708_67_reg_123017 = sub_ln1118_53_fu_119518_p2.read().range(18, 8);
        trunc_ln708_68_reg_123027 = mul_ln1118_161_fu_529_p2.read().range(22, 8);
        trunc_ln708_69_reg_123042 = mul_ln1118_164_fu_656_p2.read().range(22, 8);
        trunc_ln708_70_reg_123052 = sub_ln1118_55_fu_119656_p2.read().range(19, 8);
        trunc_ln708_71_reg_123077 = add_ln1118_12_fu_119724_p2.read().range(22, 8);
        trunc_ln708_72_reg_123102 = mul_ln1118_174_fu_620_p2.read().range(22, 8);
        trunc_ln708_73_reg_123117 = sub_ln1118_56_fu_119822_p2.read().range(18, 8);
        trunc_ln708_74_reg_123127 = trunc_ln708_74_fu_119848_p1.read().range(15, 7);
        trunc_ln708_75_reg_123147 = mul_ln1118_181_fu_698_p2.read().range(22, 8);
        trunc_ln708_76_reg_123157 = mul_ln1118_183_fu_640_p2.read().range(22, 8);
        trunc_ln708_78_reg_123177 = mul_ln1118_187_fu_690_p2.read().range(22, 8);
        trunc_ln708_80_reg_123192 = mul_ln1118_190_fu_616_p2.read().range(22, 8);
        trunc_ln708_81_reg_123197 = mul_ln1118_191_fu_552_p2.read().range(22, 8);
        trunc_ln708_82_reg_123217 = mul_ln1118_195_fu_536_p2.read().range(22, 8);
        trunc_ln708_83_reg_123247 = sub_ln1118_63_fu_120161_p2.read().range(21, 8);
        trunc_ln708_84_reg_123282 = mul_ln1118_205_fu_517_p2.read().range(22, 8);
        trunc_ln708_85_reg_123297 = sub_ln1118_66_fu_120319_p2.read().range(21, 8);
        trunc_ln708_86_reg_123332 = mul_ln1118_209_fu_662_p2.read().range(21, 8);
        trunc_ln708_91_reg_123358 = mul_ln1118_214_fu_574_p2.read().range(21, 8);
        trunc_ln708_93_reg_123373 = mul_ln1118_217_fu_577_p2.read().range(22, 8);
        trunc_ln708_s_reg_122496 = sub_ln1118_29_fu_117833_p2.read().range(21, 8);
        trunc_ln_reg_122486 = add_ln1118_fu_117801_p2.read().range(21, 8);
    }
}

void dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_NS_fsm() {
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
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

