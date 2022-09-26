set moduleName pointwise_conv_1d_cl_0_0_0_0_0_0_Block_pointwise_conv_1d_cl_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 1
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {pointwise_conv_1d_cl.0.0.0.0.0.0_Block_pointwise_conv_1d_cl_}
set C_modelType { void 0 }
set C_modelArgList {
	{ res_0_V int 16 regular {pointer 1}  }
	{ res_1_V int 16 regular {pointer 1}  }
	{ res_2_V int 16 regular {pointer 1}  }
	{ res_3_V int 16 regular {pointer 1}  }
	{ res_4_V int 16 regular {pointer 1}  }
	{ res_5_V int 16 regular {pointer 1}  }
	{ res_6_V int 16 regular {pointer 1}  }
	{ res_7_V int 16 regular {pointer 1}  }
	{ res_8_V int 16 regular {pointer 1}  }
	{ res_9_V int 16 regular {pointer 1}  }
	{ res_10_V int 16 regular {pointer 1}  }
	{ res_11_V int 16 regular {pointer 1}  }
	{ res_12_V int 16 regular {pointer 1}  }
	{ res_13_V int 16 regular {pointer 1}  }
	{ res_14_V int 16 regular {pointer 1}  }
	{ res_15_V int 16 regular {pointer 1}  }
	{ res_16_V int 16 regular {pointer 1}  }
	{ res_17_V int 16 regular {pointer 1}  }
	{ res_18_V int 16 regular {pointer 1}  }
	{ res_19_V int 16 regular {pointer 1}  }
	{ res_20_V int 16 regular {pointer 1}  }
	{ res_21_V int 16 regular {pointer 1}  }
	{ res_22_V int 16 regular {pointer 1}  }
	{ res_23_V int 16 regular {pointer 1}  }
	{ res_24_V int 16 regular {pointer 1}  }
	{ res_25_V int 16 regular {pointer 1}  }
	{ res_26_V int 16 regular {pointer 1}  }
	{ res_27_V int 16 regular {pointer 1}  }
	{ res_28_V int 16 regular {pointer 1}  }
	{ res_29_V int 16 regular {pointer 1}  }
	{ res_30_V int 16 regular {pointer 1}  }
	{ res_31_V int 16 regular {pointer 1}  }
	{ res_32_V int 16 regular {pointer 1}  }
	{ res_33_V int 16 regular {pointer 1}  }
	{ res_34_V int 16 regular {pointer 1}  }
	{ res_35_V int 16 regular {pointer 1}  }
	{ res_36_V int 16 regular {pointer 1}  }
	{ res_37_V int 16 regular {pointer 1}  }
	{ res_38_V int 16 regular {pointer 1}  }
	{ res_39_V int 16 regular {pointer 1}  }
	{ res_40_V int 16 regular {pointer 1}  }
	{ res_41_V int 16 regular {pointer 1}  }
	{ res_42_V int 16 regular {pointer 1}  }
	{ res_43_V int 16 regular {pointer 1}  }
	{ res_44_V int 16 regular {pointer 1}  }
	{ res_45_V int 16 regular {pointer 1}  }
	{ res_46_V int 16 regular {pointer 1}  }
	{ res_47_V int 16 regular {pointer 1}  }
	{ res_48_V int 16 regular {pointer 1}  }
	{ res_49_V int 16 regular {pointer 1}  }
	{ p_read int 16 regular  }
	{ p_read1 int 16 regular  }
	{ p_read2 int 16 regular  }
	{ p_read3 int 16 regular  }
	{ p_read4 int 16 regular  }
	{ p_read5 int 16 regular  }
	{ p_read6 int 16 regular  }
	{ p_read7 int 16 regular  }
	{ p_read8 int 16 regular  }
	{ p_read9 int 16 regular  }
	{ p_read10 int 16 regular  }
	{ p_read11 int 16 regular  }
	{ p_read12 int 16 regular  }
	{ p_read13 int 16 regular  }
	{ p_read14 int 16 regular  }
	{ p_read15 int 16 regular  }
	{ p_read16 int 16 regular  }
	{ p_read17 int 16 regular  }
	{ p_read18 int 16 regular  }
	{ p_read19 int 16 regular  }
	{ p_read20 int 16 regular  }
	{ p_read21 int 16 regular  }
	{ p_read22 int 16 regular  }
	{ p_read23 int 16 regular  }
	{ p_read24 int 16 regular  }
	{ p_read25 int 16 regular  }
	{ p_read26 int 16 regular  }
	{ p_read27 int 16 regular  }
	{ p_read28 int 16 regular  }
	{ p_read29 int 16 regular  }
	{ p_read30 int 16 regular  }
	{ p_read31 int 16 regular  }
	{ p_read32 int 16 regular  }
	{ p_read33 int 16 regular  }
	{ p_read34 int 16 regular  }
	{ p_read35 int 16 regular  }
	{ p_read36 int 16 regular  }
	{ p_read37 int 16 regular  }
	{ p_read38 int 16 regular  }
	{ p_read39 int 16 regular  }
	{ p_read40 int 16 regular  }
	{ p_read41 int 16 regular  }
	{ p_read42 int 16 regular  }
	{ p_read43 int 16 regular  }
	{ p_read44 int 16 regular  }
	{ p_read45 int 16 regular  }
	{ p_read46 int 16 regular  }
	{ p_read47 int 16 regular  }
	{ p_read48 int 16 regular  }
	{ p_read49 int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "res_0_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_1_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_2_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_3_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_4_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_5_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_6_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_7_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_8_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_9_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_10_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_11_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_12_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_13_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_14_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_15_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_16_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_17_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_18_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_19_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_20_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_21_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_22_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_23_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_24_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_25_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_26_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_27_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_28_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_29_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_30_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_31_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_32_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_33_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_34_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_35_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_36_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_37_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_38_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_39_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_40_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_41_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_42_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_43_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_44_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_45_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_46_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_47_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_48_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_49_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read1", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read2", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read3", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read4", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read5", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read6", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read7", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read8", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read9", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read10", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read11", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read12", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read13", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read14", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read15", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read16", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read17", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read18", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read19", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read20", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read21", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read22", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read23", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read24", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read25", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read26", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read27", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read28", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read29", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read30", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read31", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read32", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read33", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read34", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read35", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read36", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read37", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read38", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read39", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read40", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read41", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read42", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read43", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read44", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read45", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read46", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read47", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read48", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read49", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 157
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ res_0_V sc_out sc_lv 16 signal 0 } 
	{ res_0_V_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ res_1_V sc_out sc_lv 16 signal 1 } 
	{ res_1_V_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ res_2_V sc_out sc_lv 16 signal 2 } 
	{ res_2_V_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ res_3_V sc_out sc_lv 16 signal 3 } 
	{ res_3_V_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ res_4_V sc_out sc_lv 16 signal 4 } 
	{ res_4_V_ap_vld sc_out sc_logic 1 outvld 4 } 
	{ res_5_V sc_out sc_lv 16 signal 5 } 
	{ res_5_V_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ res_6_V sc_out sc_lv 16 signal 6 } 
	{ res_6_V_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ res_7_V sc_out sc_lv 16 signal 7 } 
	{ res_7_V_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ res_8_V sc_out sc_lv 16 signal 8 } 
	{ res_8_V_ap_vld sc_out sc_logic 1 outvld 8 } 
	{ res_9_V sc_out sc_lv 16 signal 9 } 
	{ res_9_V_ap_vld sc_out sc_logic 1 outvld 9 } 
	{ res_10_V sc_out sc_lv 16 signal 10 } 
	{ res_10_V_ap_vld sc_out sc_logic 1 outvld 10 } 
	{ res_11_V sc_out sc_lv 16 signal 11 } 
	{ res_11_V_ap_vld sc_out sc_logic 1 outvld 11 } 
	{ res_12_V sc_out sc_lv 16 signal 12 } 
	{ res_12_V_ap_vld sc_out sc_logic 1 outvld 12 } 
	{ res_13_V sc_out sc_lv 16 signal 13 } 
	{ res_13_V_ap_vld sc_out sc_logic 1 outvld 13 } 
	{ res_14_V sc_out sc_lv 16 signal 14 } 
	{ res_14_V_ap_vld sc_out sc_logic 1 outvld 14 } 
	{ res_15_V sc_out sc_lv 16 signal 15 } 
	{ res_15_V_ap_vld sc_out sc_logic 1 outvld 15 } 
	{ res_16_V sc_out sc_lv 16 signal 16 } 
	{ res_16_V_ap_vld sc_out sc_logic 1 outvld 16 } 
	{ res_17_V sc_out sc_lv 16 signal 17 } 
	{ res_17_V_ap_vld sc_out sc_logic 1 outvld 17 } 
	{ res_18_V sc_out sc_lv 16 signal 18 } 
	{ res_18_V_ap_vld sc_out sc_logic 1 outvld 18 } 
	{ res_19_V sc_out sc_lv 16 signal 19 } 
	{ res_19_V_ap_vld sc_out sc_logic 1 outvld 19 } 
	{ res_20_V sc_out sc_lv 16 signal 20 } 
	{ res_20_V_ap_vld sc_out sc_logic 1 outvld 20 } 
	{ res_21_V sc_out sc_lv 16 signal 21 } 
	{ res_21_V_ap_vld sc_out sc_logic 1 outvld 21 } 
	{ res_22_V sc_out sc_lv 16 signal 22 } 
	{ res_22_V_ap_vld sc_out sc_logic 1 outvld 22 } 
	{ res_23_V sc_out sc_lv 16 signal 23 } 
	{ res_23_V_ap_vld sc_out sc_logic 1 outvld 23 } 
	{ res_24_V sc_out sc_lv 16 signal 24 } 
	{ res_24_V_ap_vld sc_out sc_logic 1 outvld 24 } 
	{ res_25_V sc_out sc_lv 16 signal 25 } 
	{ res_25_V_ap_vld sc_out sc_logic 1 outvld 25 } 
	{ res_26_V sc_out sc_lv 16 signal 26 } 
	{ res_26_V_ap_vld sc_out sc_logic 1 outvld 26 } 
	{ res_27_V sc_out sc_lv 16 signal 27 } 
	{ res_27_V_ap_vld sc_out sc_logic 1 outvld 27 } 
	{ res_28_V sc_out sc_lv 16 signal 28 } 
	{ res_28_V_ap_vld sc_out sc_logic 1 outvld 28 } 
	{ res_29_V sc_out sc_lv 16 signal 29 } 
	{ res_29_V_ap_vld sc_out sc_logic 1 outvld 29 } 
	{ res_30_V sc_out sc_lv 16 signal 30 } 
	{ res_30_V_ap_vld sc_out sc_logic 1 outvld 30 } 
	{ res_31_V sc_out sc_lv 16 signal 31 } 
	{ res_31_V_ap_vld sc_out sc_logic 1 outvld 31 } 
	{ res_32_V sc_out sc_lv 16 signal 32 } 
	{ res_32_V_ap_vld sc_out sc_logic 1 outvld 32 } 
	{ res_33_V sc_out sc_lv 16 signal 33 } 
	{ res_33_V_ap_vld sc_out sc_logic 1 outvld 33 } 
	{ res_34_V sc_out sc_lv 16 signal 34 } 
	{ res_34_V_ap_vld sc_out sc_logic 1 outvld 34 } 
	{ res_35_V sc_out sc_lv 16 signal 35 } 
	{ res_35_V_ap_vld sc_out sc_logic 1 outvld 35 } 
	{ res_36_V sc_out sc_lv 16 signal 36 } 
	{ res_36_V_ap_vld sc_out sc_logic 1 outvld 36 } 
	{ res_37_V sc_out sc_lv 16 signal 37 } 
	{ res_37_V_ap_vld sc_out sc_logic 1 outvld 37 } 
	{ res_38_V sc_out sc_lv 16 signal 38 } 
	{ res_38_V_ap_vld sc_out sc_logic 1 outvld 38 } 
	{ res_39_V sc_out sc_lv 16 signal 39 } 
	{ res_39_V_ap_vld sc_out sc_logic 1 outvld 39 } 
	{ res_40_V sc_out sc_lv 16 signal 40 } 
	{ res_40_V_ap_vld sc_out sc_logic 1 outvld 40 } 
	{ res_41_V sc_out sc_lv 16 signal 41 } 
	{ res_41_V_ap_vld sc_out sc_logic 1 outvld 41 } 
	{ res_42_V sc_out sc_lv 16 signal 42 } 
	{ res_42_V_ap_vld sc_out sc_logic 1 outvld 42 } 
	{ res_43_V sc_out sc_lv 16 signal 43 } 
	{ res_43_V_ap_vld sc_out sc_logic 1 outvld 43 } 
	{ res_44_V sc_out sc_lv 16 signal 44 } 
	{ res_44_V_ap_vld sc_out sc_logic 1 outvld 44 } 
	{ res_45_V sc_out sc_lv 16 signal 45 } 
	{ res_45_V_ap_vld sc_out sc_logic 1 outvld 45 } 
	{ res_46_V sc_out sc_lv 16 signal 46 } 
	{ res_46_V_ap_vld sc_out sc_logic 1 outvld 46 } 
	{ res_47_V sc_out sc_lv 16 signal 47 } 
	{ res_47_V_ap_vld sc_out sc_logic 1 outvld 47 } 
	{ res_48_V sc_out sc_lv 16 signal 48 } 
	{ res_48_V_ap_vld sc_out sc_logic 1 outvld 48 } 
	{ res_49_V sc_out sc_lv 16 signal 49 } 
	{ res_49_V_ap_vld sc_out sc_logic 1 outvld 49 } 
	{ p_read sc_in sc_lv 16 signal 50 } 
	{ p_read1 sc_in sc_lv 16 signal 51 } 
	{ p_read2 sc_in sc_lv 16 signal 52 } 
	{ p_read3 sc_in sc_lv 16 signal 53 } 
	{ p_read4 sc_in sc_lv 16 signal 54 } 
	{ p_read5 sc_in sc_lv 16 signal 55 } 
	{ p_read6 sc_in sc_lv 16 signal 56 } 
	{ p_read7 sc_in sc_lv 16 signal 57 } 
	{ p_read8 sc_in sc_lv 16 signal 58 } 
	{ p_read9 sc_in sc_lv 16 signal 59 } 
	{ p_read10 sc_in sc_lv 16 signal 60 } 
	{ p_read11 sc_in sc_lv 16 signal 61 } 
	{ p_read12 sc_in sc_lv 16 signal 62 } 
	{ p_read13 sc_in sc_lv 16 signal 63 } 
	{ p_read14 sc_in sc_lv 16 signal 64 } 
	{ p_read15 sc_in sc_lv 16 signal 65 } 
	{ p_read16 sc_in sc_lv 16 signal 66 } 
	{ p_read17 sc_in sc_lv 16 signal 67 } 
	{ p_read18 sc_in sc_lv 16 signal 68 } 
	{ p_read19 sc_in sc_lv 16 signal 69 } 
	{ p_read20 sc_in sc_lv 16 signal 70 } 
	{ p_read21 sc_in sc_lv 16 signal 71 } 
	{ p_read22 sc_in sc_lv 16 signal 72 } 
	{ p_read23 sc_in sc_lv 16 signal 73 } 
	{ p_read24 sc_in sc_lv 16 signal 74 } 
	{ p_read25 sc_in sc_lv 16 signal 75 } 
	{ p_read26 sc_in sc_lv 16 signal 76 } 
	{ p_read27 sc_in sc_lv 16 signal 77 } 
	{ p_read28 sc_in sc_lv 16 signal 78 } 
	{ p_read29 sc_in sc_lv 16 signal 79 } 
	{ p_read30 sc_in sc_lv 16 signal 80 } 
	{ p_read31 sc_in sc_lv 16 signal 81 } 
	{ p_read32 sc_in sc_lv 16 signal 82 } 
	{ p_read33 sc_in sc_lv 16 signal 83 } 
	{ p_read34 sc_in sc_lv 16 signal 84 } 
	{ p_read35 sc_in sc_lv 16 signal 85 } 
	{ p_read36 sc_in sc_lv 16 signal 86 } 
	{ p_read37 sc_in sc_lv 16 signal 87 } 
	{ p_read38 sc_in sc_lv 16 signal 88 } 
	{ p_read39 sc_in sc_lv 16 signal 89 } 
	{ p_read40 sc_in sc_lv 16 signal 90 } 
	{ p_read41 sc_in sc_lv 16 signal 91 } 
	{ p_read42 sc_in sc_lv 16 signal 92 } 
	{ p_read43 sc_in sc_lv 16 signal 93 } 
	{ p_read44 sc_in sc_lv 16 signal 94 } 
	{ p_read45 sc_in sc_lv 16 signal 95 } 
	{ p_read46 sc_in sc_lv 16 signal 96 } 
	{ p_read47 sc_in sc_lv 16 signal 97 } 
	{ p_read48 sc_in sc_lv 16 signal 98 } 
	{ p_read49 sc_in sc_lv 16 signal 99 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "res_0_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_0_V", "role": "default" }} , 
 	{ "name": "res_0_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_0_V", "role": "ap_vld" }} , 
 	{ "name": "res_1_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_1_V", "role": "default" }} , 
 	{ "name": "res_1_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_1_V", "role": "ap_vld" }} , 
 	{ "name": "res_2_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_2_V", "role": "default" }} , 
 	{ "name": "res_2_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_2_V", "role": "ap_vld" }} , 
 	{ "name": "res_3_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_3_V", "role": "default" }} , 
 	{ "name": "res_3_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_3_V", "role": "ap_vld" }} , 
 	{ "name": "res_4_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_4_V", "role": "default" }} , 
 	{ "name": "res_4_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_4_V", "role": "ap_vld" }} , 
 	{ "name": "res_5_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_5_V", "role": "default" }} , 
 	{ "name": "res_5_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_5_V", "role": "ap_vld" }} , 
 	{ "name": "res_6_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_6_V", "role": "default" }} , 
 	{ "name": "res_6_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_6_V", "role": "ap_vld" }} , 
 	{ "name": "res_7_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_7_V", "role": "default" }} , 
 	{ "name": "res_7_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_7_V", "role": "ap_vld" }} , 
 	{ "name": "res_8_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_8_V", "role": "default" }} , 
 	{ "name": "res_8_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_8_V", "role": "ap_vld" }} , 
 	{ "name": "res_9_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_9_V", "role": "default" }} , 
 	{ "name": "res_9_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_9_V", "role": "ap_vld" }} , 
 	{ "name": "res_10_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_10_V", "role": "default" }} , 
 	{ "name": "res_10_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_10_V", "role": "ap_vld" }} , 
 	{ "name": "res_11_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_11_V", "role": "default" }} , 
 	{ "name": "res_11_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_11_V", "role": "ap_vld" }} , 
 	{ "name": "res_12_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_12_V", "role": "default" }} , 
 	{ "name": "res_12_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_12_V", "role": "ap_vld" }} , 
 	{ "name": "res_13_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_13_V", "role": "default" }} , 
 	{ "name": "res_13_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_13_V", "role": "ap_vld" }} , 
 	{ "name": "res_14_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_14_V", "role": "default" }} , 
 	{ "name": "res_14_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_14_V", "role": "ap_vld" }} , 
 	{ "name": "res_15_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_15_V", "role": "default" }} , 
 	{ "name": "res_15_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_15_V", "role": "ap_vld" }} , 
 	{ "name": "res_16_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_16_V", "role": "default" }} , 
 	{ "name": "res_16_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_16_V", "role": "ap_vld" }} , 
 	{ "name": "res_17_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_17_V", "role": "default" }} , 
 	{ "name": "res_17_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_17_V", "role": "ap_vld" }} , 
 	{ "name": "res_18_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_18_V", "role": "default" }} , 
 	{ "name": "res_18_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_18_V", "role": "ap_vld" }} , 
 	{ "name": "res_19_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_19_V", "role": "default" }} , 
 	{ "name": "res_19_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_19_V", "role": "ap_vld" }} , 
 	{ "name": "res_20_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_20_V", "role": "default" }} , 
 	{ "name": "res_20_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_20_V", "role": "ap_vld" }} , 
 	{ "name": "res_21_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_21_V", "role": "default" }} , 
 	{ "name": "res_21_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_21_V", "role": "ap_vld" }} , 
 	{ "name": "res_22_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_22_V", "role": "default" }} , 
 	{ "name": "res_22_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_22_V", "role": "ap_vld" }} , 
 	{ "name": "res_23_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_23_V", "role": "default" }} , 
 	{ "name": "res_23_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_23_V", "role": "ap_vld" }} , 
 	{ "name": "res_24_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_24_V", "role": "default" }} , 
 	{ "name": "res_24_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_24_V", "role": "ap_vld" }} , 
 	{ "name": "res_25_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_25_V", "role": "default" }} , 
 	{ "name": "res_25_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_25_V", "role": "ap_vld" }} , 
 	{ "name": "res_26_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_26_V", "role": "default" }} , 
 	{ "name": "res_26_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_26_V", "role": "ap_vld" }} , 
 	{ "name": "res_27_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_27_V", "role": "default" }} , 
 	{ "name": "res_27_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_27_V", "role": "ap_vld" }} , 
 	{ "name": "res_28_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_28_V", "role": "default" }} , 
 	{ "name": "res_28_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_28_V", "role": "ap_vld" }} , 
 	{ "name": "res_29_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_29_V", "role": "default" }} , 
 	{ "name": "res_29_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_29_V", "role": "ap_vld" }} , 
 	{ "name": "res_30_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_30_V", "role": "default" }} , 
 	{ "name": "res_30_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_30_V", "role": "ap_vld" }} , 
 	{ "name": "res_31_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_31_V", "role": "default" }} , 
 	{ "name": "res_31_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_31_V", "role": "ap_vld" }} , 
 	{ "name": "res_32_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_32_V", "role": "default" }} , 
 	{ "name": "res_32_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_32_V", "role": "ap_vld" }} , 
 	{ "name": "res_33_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_33_V", "role": "default" }} , 
 	{ "name": "res_33_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_33_V", "role": "ap_vld" }} , 
 	{ "name": "res_34_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_34_V", "role": "default" }} , 
 	{ "name": "res_34_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_34_V", "role": "ap_vld" }} , 
 	{ "name": "res_35_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_35_V", "role": "default" }} , 
 	{ "name": "res_35_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_35_V", "role": "ap_vld" }} , 
 	{ "name": "res_36_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_36_V", "role": "default" }} , 
 	{ "name": "res_36_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_36_V", "role": "ap_vld" }} , 
 	{ "name": "res_37_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_37_V", "role": "default" }} , 
 	{ "name": "res_37_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_37_V", "role": "ap_vld" }} , 
 	{ "name": "res_38_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_38_V", "role": "default" }} , 
 	{ "name": "res_38_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_38_V", "role": "ap_vld" }} , 
 	{ "name": "res_39_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_39_V", "role": "default" }} , 
 	{ "name": "res_39_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_39_V", "role": "ap_vld" }} , 
 	{ "name": "res_40_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_40_V", "role": "default" }} , 
 	{ "name": "res_40_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_40_V", "role": "ap_vld" }} , 
 	{ "name": "res_41_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_41_V", "role": "default" }} , 
 	{ "name": "res_41_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_41_V", "role": "ap_vld" }} , 
 	{ "name": "res_42_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_42_V", "role": "default" }} , 
 	{ "name": "res_42_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_42_V", "role": "ap_vld" }} , 
 	{ "name": "res_43_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_43_V", "role": "default" }} , 
 	{ "name": "res_43_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_43_V", "role": "ap_vld" }} , 
 	{ "name": "res_44_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_44_V", "role": "default" }} , 
 	{ "name": "res_44_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_44_V", "role": "ap_vld" }} , 
 	{ "name": "res_45_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_45_V", "role": "default" }} , 
 	{ "name": "res_45_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_45_V", "role": "ap_vld" }} , 
 	{ "name": "res_46_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_46_V", "role": "default" }} , 
 	{ "name": "res_46_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_46_V", "role": "ap_vld" }} , 
 	{ "name": "res_47_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_47_V", "role": "default" }} , 
 	{ "name": "res_47_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_47_V", "role": "ap_vld" }} , 
 	{ "name": "res_48_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_48_V", "role": "default" }} , 
 	{ "name": "res_48_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_48_V", "role": "ap_vld" }} , 
 	{ "name": "res_49_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_49_V", "role": "default" }} , 
 	{ "name": "res_49_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_49_V", "role": "ap_vld" }} , 
 	{ "name": "p_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read", "role": "default" }} , 
 	{ "name": "p_read1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read1", "role": "default" }} , 
 	{ "name": "p_read2", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read2", "role": "default" }} , 
 	{ "name": "p_read3", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read3", "role": "default" }} , 
 	{ "name": "p_read4", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read4", "role": "default" }} , 
 	{ "name": "p_read5", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read5", "role": "default" }} , 
 	{ "name": "p_read6", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read6", "role": "default" }} , 
 	{ "name": "p_read7", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read7", "role": "default" }} , 
 	{ "name": "p_read8", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read8", "role": "default" }} , 
 	{ "name": "p_read9", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read9", "role": "default" }} , 
 	{ "name": "p_read10", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read10", "role": "default" }} , 
 	{ "name": "p_read11", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read11", "role": "default" }} , 
 	{ "name": "p_read12", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read12", "role": "default" }} , 
 	{ "name": "p_read13", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read13", "role": "default" }} , 
 	{ "name": "p_read14", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read14", "role": "default" }} , 
 	{ "name": "p_read15", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read15", "role": "default" }} , 
 	{ "name": "p_read16", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read16", "role": "default" }} , 
 	{ "name": "p_read17", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read17", "role": "default" }} , 
 	{ "name": "p_read18", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read18", "role": "default" }} , 
 	{ "name": "p_read19", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read19", "role": "default" }} , 
 	{ "name": "p_read20", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read20", "role": "default" }} , 
 	{ "name": "p_read21", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read21", "role": "default" }} , 
 	{ "name": "p_read22", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read22", "role": "default" }} , 
 	{ "name": "p_read23", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read23", "role": "default" }} , 
 	{ "name": "p_read24", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read24", "role": "default" }} , 
 	{ "name": "p_read25", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read25", "role": "default" }} , 
 	{ "name": "p_read26", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read26", "role": "default" }} , 
 	{ "name": "p_read27", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read27", "role": "default" }} , 
 	{ "name": "p_read28", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read28", "role": "default" }} , 
 	{ "name": "p_read29", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read29", "role": "default" }} , 
 	{ "name": "p_read30", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read30", "role": "default" }} , 
 	{ "name": "p_read31", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read31", "role": "default" }} , 
 	{ "name": "p_read32", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read32", "role": "default" }} , 
 	{ "name": "p_read33", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read33", "role": "default" }} , 
 	{ "name": "p_read34", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read34", "role": "default" }} , 
 	{ "name": "p_read35", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read35", "role": "default" }} , 
 	{ "name": "p_read36", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read36", "role": "default" }} , 
 	{ "name": "p_read37", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read37", "role": "default" }} , 
 	{ "name": "p_read38", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read38", "role": "default" }} , 
 	{ "name": "p_read39", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read39", "role": "default" }} , 
 	{ "name": "p_read40", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read40", "role": "default" }} , 
 	{ "name": "p_read41", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read41", "role": "default" }} , 
 	{ "name": "p_read42", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read42", "role": "default" }} , 
 	{ "name": "p_read43", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read43", "role": "default" }} , 
 	{ "name": "p_read44", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read44", "role": "default" }} , 
 	{ "name": "p_read45", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read45", "role": "default" }} , 
 	{ "name": "p_read46", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read46", "role": "default" }} , 
 	{ "name": "p_read47", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read47", "role": "default" }} , 
 	{ "name": "p_read48", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read48", "role": "default" }} , 
 	{ "name": "p_read49", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read49", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "pointwise_conv_1d_cl_0_0_0_0_0_0_Block_pointwise_conv_1d_cl_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "res_0_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_1_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_2_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_3_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_4_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_5_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_6_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_7_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_8_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_9_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_10_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_11_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_12_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_13_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_14_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_15_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_16_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_17_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_18_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_19_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_20_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_21_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_22_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_23_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_24_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_25_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_26_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_27_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_28_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_29_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_30_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_31_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_32_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_33_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_34_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_35_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_36_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_37_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_38_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_39_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_40_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_41_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_42_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_43_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_44_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_45_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_46_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_47_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_48_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_49_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"}]}]}


set ArgLastReadFirstWriteLatency {
	pointwise_conv_1d_cl_0_0_0_0_0_0_Block_pointwise_conv_1d_cl_s {
		res_0_V {Type O LastRead -1 FirstWrite 0}
		res_1_V {Type O LastRead -1 FirstWrite 0}
		res_2_V {Type O LastRead -1 FirstWrite 0}
		res_3_V {Type O LastRead -1 FirstWrite 0}
		res_4_V {Type O LastRead -1 FirstWrite 0}
		res_5_V {Type O LastRead -1 FirstWrite 0}
		res_6_V {Type O LastRead -1 FirstWrite 0}
		res_7_V {Type O LastRead -1 FirstWrite 0}
		res_8_V {Type O LastRead -1 FirstWrite 0}
		res_9_V {Type O LastRead -1 FirstWrite 0}
		res_10_V {Type O LastRead -1 FirstWrite 0}
		res_11_V {Type O LastRead -1 FirstWrite 0}
		res_12_V {Type O LastRead -1 FirstWrite 0}
		res_13_V {Type O LastRead -1 FirstWrite 0}
		res_14_V {Type O LastRead -1 FirstWrite 0}
		res_15_V {Type O LastRead -1 FirstWrite 0}
		res_16_V {Type O LastRead -1 FirstWrite 0}
		res_17_V {Type O LastRead -1 FirstWrite 0}
		res_18_V {Type O LastRead -1 FirstWrite 0}
		res_19_V {Type O LastRead -1 FirstWrite 0}
		res_20_V {Type O LastRead -1 FirstWrite 0}
		res_21_V {Type O LastRead -1 FirstWrite 0}
		res_22_V {Type O LastRead -1 FirstWrite 0}
		res_23_V {Type O LastRead -1 FirstWrite 0}
		res_24_V {Type O LastRead -1 FirstWrite 0}
		res_25_V {Type O LastRead -1 FirstWrite 0}
		res_26_V {Type O LastRead -1 FirstWrite 0}
		res_27_V {Type O LastRead -1 FirstWrite 0}
		res_28_V {Type O LastRead -1 FirstWrite 0}
		res_29_V {Type O LastRead -1 FirstWrite 0}
		res_30_V {Type O LastRead -1 FirstWrite 0}
		res_31_V {Type O LastRead -1 FirstWrite 0}
		res_32_V {Type O LastRead -1 FirstWrite 0}
		res_33_V {Type O LastRead -1 FirstWrite 0}
		res_34_V {Type O LastRead -1 FirstWrite 0}
		res_35_V {Type O LastRead -1 FirstWrite 0}
		res_36_V {Type O LastRead -1 FirstWrite 0}
		res_37_V {Type O LastRead -1 FirstWrite 0}
		res_38_V {Type O LastRead -1 FirstWrite 0}
		res_39_V {Type O LastRead -1 FirstWrite 0}
		res_40_V {Type O LastRead -1 FirstWrite 0}
		res_41_V {Type O LastRead -1 FirstWrite 0}
		res_42_V {Type O LastRead -1 FirstWrite 0}
		res_43_V {Type O LastRead -1 FirstWrite 0}
		res_44_V {Type O LastRead -1 FirstWrite 0}
		res_45_V {Type O LastRead -1 FirstWrite 0}
		res_46_V {Type O LastRead -1 FirstWrite 0}
		res_47_V {Type O LastRead -1 FirstWrite 0}
		res_48_V {Type O LastRead -1 FirstWrite 0}
		res_49_V {Type O LastRead -1 FirstWrite 0}
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	res_0_V { ap_vld {  { res_0_V out_data 1 16 }  { res_0_V_ap_vld out_vld 1 1 } } }
	res_1_V { ap_vld {  { res_1_V out_data 1 16 }  { res_1_V_ap_vld out_vld 1 1 } } }
	res_2_V { ap_vld {  { res_2_V out_data 1 16 }  { res_2_V_ap_vld out_vld 1 1 } } }
	res_3_V { ap_vld {  { res_3_V out_data 1 16 }  { res_3_V_ap_vld out_vld 1 1 } } }
	res_4_V { ap_vld {  { res_4_V out_data 1 16 }  { res_4_V_ap_vld out_vld 1 1 } } }
	res_5_V { ap_vld {  { res_5_V out_data 1 16 }  { res_5_V_ap_vld out_vld 1 1 } } }
	res_6_V { ap_vld {  { res_6_V out_data 1 16 }  { res_6_V_ap_vld out_vld 1 1 } } }
	res_7_V { ap_vld {  { res_7_V out_data 1 16 }  { res_7_V_ap_vld out_vld 1 1 } } }
	res_8_V { ap_vld {  { res_8_V out_data 1 16 }  { res_8_V_ap_vld out_vld 1 1 } } }
	res_9_V { ap_vld {  { res_9_V out_data 1 16 }  { res_9_V_ap_vld out_vld 1 1 } } }
	res_10_V { ap_vld {  { res_10_V out_data 1 16 }  { res_10_V_ap_vld out_vld 1 1 } } }
	res_11_V { ap_vld {  { res_11_V out_data 1 16 }  { res_11_V_ap_vld out_vld 1 1 } } }
	res_12_V { ap_vld {  { res_12_V out_data 1 16 }  { res_12_V_ap_vld out_vld 1 1 } } }
	res_13_V { ap_vld {  { res_13_V out_data 1 16 }  { res_13_V_ap_vld out_vld 1 1 } } }
	res_14_V { ap_vld {  { res_14_V out_data 1 16 }  { res_14_V_ap_vld out_vld 1 1 } } }
	res_15_V { ap_vld {  { res_15_V out_data 1 16 }  { res_15_V_ap_vld out_vld 1 1 } } }
	res_16_V { ap_vld {  { res_16_V out_data 1 16 }  { res_16_V_ap_vld out_vld 1 1 } } }
	res_17_V { ap_vld {  { res_17_V out_data 1 16 }  { res_17_V_ap_vld out_vld 1 1 } } }
	res_18_V { ap_vld {  { res_18_V out_data 1 16 }  { res_18_V_ap_vld out_vld 1 1 } } }
	res_19_V { ap_vld {  { res_19_V out_data 1 16 }  { res_19_V_ap_vld out_vld 1 1 } } }
	res_20_V { ap_vld {  { res_20_V out_data 1 16 }  { res_20_V_ap_vld out_vld 1 1 } } }
	res_21_V { ap_vld {  { res_21_V out_data 1 16 }  { res_21_V_ap_vld out_vld 1 1 } } }
	res_22_V { ap_vld {  { res_22_V out_data 1 16 }  { res_22_V_ap_vld out_vld 1 1 } } }
	res_23_V { ap_vld {  { res_23_V out_data 1 16 }  { res_23_V_ap_vld out_vld 1 1 } } }
	res_24_V { ap_vld {  { res_24_V out_data 1 16 }  { res_24_V_ap_vld out_vld 1 1 } } }
	res_25_V { ap_vld {  { res_25_V out_data 1 16 }  { res_25_V_ap_vld out_vld 1 1 } } }
	res_26_V { ap_vld {  { res_26_V out_data 1 16 }  { res_26_V_ap_vld out_vld 1 1 } } }
	res_27_V { ap_vld {  { res_27_V out_data 1 16 }  { res_27_V_ap_vld out_vld 1 1 } } }
	res_28_V { ap_vld {  { res_28_V out_data 1 16 }  { res_28_V_ap_vld out_vld 1 1 } } }
	res_29_V { ap_vld {  { res_29_V out_data 1 16 }  { res_29_V_ap_vld out_vld 1 1 } } }
	res_30_V { ap_vld {  { res_30_V out_data 1 16 }  { res_30_V_ap_vld out_vld 1 1 } } }
	res_31_V { ap_vld {  { res_31_V out_data 1 16 }  { res_31_V_ap_vld out_vld 1 1 } } }
	res_32_V { ap_vld {  { res_32_V out_data 1 16 }  { res_32_V_ap_vld out_vld 1 1 } } }
	res_33_V { ap_vld {  { res_33_V out_data 1 16 }  { res_33_V_ap_vld out_vld 1 1 } } }
	res_34_V { ap_vld {  { res_34_V out_data 1 16 }  { res_34_V_ap_vld out_vld 1 1 } } }
	res_35_V { ap_vld {  { res_35_V out_data 1 16 }  { res_35_V_ap_vld out_vld 1 1 } } }
	res_36_V { ap_vld {  { res_36_V out_data 1 16 }  { res_36_V_ap_vld out_vld 1 1 } } }
	res_37_V { ap_vld {  { res_37_V out_data 1 16 }  { res_37_V_ap_vld out_vld 1 1 } } }
	res_38_V { ap_vld {  { res_38_V out_data 1 16 }  { res_38_V_ap_vld out_vld 1 1 } } }
	res_39_V { ap_vld {  { res_39_V out_data 1 16 }  { res_39_V_ap_vld out_vld 1 1 } } }
	res_40_V { ap_vld {  { res_40_V out_data 1 16 }  { res_40_V_ap_vld out_vld 1 1 } } }
	res_41_V { ap_vld {  { res_41_V out_data 1 16 }  { res_41_V_ap_vld out_vld 1 1 } } }
	res_42_V { ap_vld {  { res_42_V out_data 1 16 }  { res_42_V_ap_vld out_vld 1 1 } } }
	res_43_V { ap_vld {  { res_43_V out_data 1 16 }  { res_43_V_ap_vld out_vld 1 1 } } }
	res_44_V { ap_vld {  { res_44_V out_data 1 16 }  { res_44_V_ap_vld out_vld 1 1 } } }
	res_45_V { ap_vld {  { res_45_V out_data 1 16 }  { res_45_V_ap_vld out_vld 1 1 } } }
	res_46_V { ap_vld {  { res_46_V out_data 1 16 }  { res_46_V_ap_vld out_vld 1 1 } } }
	res_47_V { ap_vld {  { res_47_V out_data 1 16 }  { res_47_V_ap_vld out_vld 1 1 } } }
	res_48_V { ap_vld {  { res_48_V out_data 1 16 }  { res_48_V_ap_vld out_vld 1 1 } } }
	res_49_V { ap_vld {  { res_49_V out_data 1 16 }  { res_49_V_ap_vld out_vld 1 1 } } }
	p_read { ap_none {  { p_read in_data 0 16 } } }
	p_read1 { ap_none {  { p_read1 in_data 0 16 } } }
	p_read2 { ap_none {  { p_read2 in_data 0 16 } } }
	p_read3 { ap_none {  { p_read3 in_data 0 16 } } }
	p_read4 { ap_none {  { p_read4 in_data 0 16 } } }
	p_read5 { ap_none {  { p_read5 in_data 0 16 } } }
	p_read6 { ap_none {  { p_read6 in_data 0 16 } } }
	p_read7 { ap_none {  { p_read7 in_data 0 16 } } }
	p_read8 { ap_none {  { p_read8 in_data 0 16 } } }
	p_read9 { ap_none {  { p_read9 in_data 0 16 } } }
	p_read10 { ap_none {  { p_read10 in_data 0 16 } } }
	p_read11 { ap_none {  { p_read11 in_data 0 16 } } }
	p_read12 { ap_none {  { p_read12 in_data 0 16 } } }
	p_read13 { ap_none {  { p_read13 in_data 0 16 } } }
	p_read14 { ap_none {  { p_read14 in_data 0 16 } } }
	p_read15 { ap_none {  { p_read15 in_data 0 16 } } }
	p_read16 { ap_none {  { p_read16 in_data 0 16 } } }
	p_read17 { ap_none {  { p_read17 in_data 0 16 } } }
	p_read18 { ap_none {  { p_read18 in_data 0 16 } } }
	p_read19 { ap_none {  { p_read19 in_data 0 16 } } }
	p_read20 { ap_none {  { p_read20 in_data 0 16 } } }
	p_read21 { ap_none {  { p_read21 in_data 0 16 } } }
	p_read22 { ap_none {  { p_read22 in_data 0 16 } } }
	p_read23 { ap_none {  { p_read23 in_data 0 16 } } }
	p_read24 { ap_none {  { p_read24 in_data 0 16 } } }
	p_read25 { ap_none {  { p_read25 in_data 0 16 } } }
	p_read26 { ap_none {  { p_read26 in_data 0 16 } } }
	p_read27 { ap_none {  { p_read27 in_data 0 16 } } }
	p_read28 { ap_none {  { p_read28 in_data 0 16 } } }
	p_read29 { ap_none {  { p_read29 in_data 0 16 } } }
	p_read30 { ap_none {  { p_read30 in_data 0 16 } } }
	p_read31 { ap_none {  { p_read31 in_data 0 16 } } }
	p_read32 { ap_none {  { p_read32 in_data 0 16 } } }
	p_read33 { ap_none {  { p_read33 in_data 0 16 } } }
	p_read34 { ap_none {  { p_read34 in_data 0 16 } } }
	p_read35 { ap_none {  { p_read35 in_data 0 16 } } }
	p_read36 { ap_none {  { p_read36 in_data 0 16 } } }
	p_read37 { ap_none {  { p_read37 in_data 0 16 } } }
	p_read38 { ap_none {  { p_read38 in_data 0 16 } } }
	p_read39 { ap_none {  { p_read39 in_data 0 16 } } }
	p_read40 { ap_none {  { p_read40 in_data 0 16 } } }
	p_read41 { ap_none {  { p_read41 in_data 0 16 } } }
	p_read42 { ap_none {  { p_read42 in_data 0 16 } } }
	p_read43 { ap_none {  { p_read43 in_data 0 16 } } }
	p_read44 { ap_none {  { p_read44 in_data 0 16 } } }
	p_read45 { ap_none {  { p_read45 in_data 0 16 } } }
	p_read46 { ap_none {  { p_read46 in_data 0 16 } } }
	p_read47 { ap_none {  { p_read47 in_data 0 16 } } }
	p_read48 { ap_none {  { p_read48 in_data 0 16 } } }
	p_read49 { ap_none {  { p_read49 in_data 0 16 } } }
}
set moduleName pointwise_conv_1d_cl_0_0_0_0_0_0_Block_pointwise_conv_1d_cl_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 1
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {pointwise_conv_1d_cl.0.0.0.0.0.0_Block_pointwise_conv_1d_cl_}
set C_modelType { void 0 }
set C_modelArgList {
	{ res_0_V int 16 regular {pointer 1}  }
	{ res_1_V int 16 regular {pointer 1}  }
	{ res_2_V int 16 regular {pointer 1}  }
	{ res_3_V int 16 regular {pointer 1}  }
	{ res_4_V int 16 regular {pointer 1}  }
	{ res_5_V int 16 regular {pointer 1}  }
	{ res_6_V int 16 regular {pointer 1}  }
	{ res_7_V int 16 regular {pointer 1}  }
	{ res_8_V int 16 regular {pointer 1}  }
	{ res_9_V int 16 regular {pointer 1}  }
	{ res_10_V int 16 regular {pointer 1}  }
	{ res_11_V int 16 regular {pointer 1}  }
	{ res_12_V int 16 regular {pointer 1}  }
	{ res_13_V int 16 regular {pointer 1}  }
	{ res_14_V int 16 regular {pointer 1}  }
	{ res_15_V int 16 regular {pointer 1}  }
	{ res_16_V int 16 regular {pointer 1}  }
	{ res_17_V int 16 regular {pointer 1}  }
	{ res_18_V int 16 regular {pointer 1}  }
	{ res_19_V int 16 regular {pointer 1}  }
	{ res_20_V int 16 regular {pointer 1}  }
	{ res_21_V int 16 regular {pointer 1}  }
	{ res_22_V int 16 regular {pointer 1}  }
	{ res_23_V int 16 regular {pointer 1}  }
	{ res_24_V int 16 regular {pointer 1}  }
	{ res_25_V int 16 regular {pointer 1}  }
	{ res_26_V int 16 regular {pointer 1}  }
	{ res_27_V int 16 regular {pointer 1}  }
	{ res_28_V int 16 regular {pointer 1}  }
	{ res_29_V int 16 regular {pointer 1}  }
	{ res_30_V int 16 regular {pointer 1}  }
	{ res_31_V int 16 regular {pointer 1}  }
	{ res_32_V int 16 regular {pointer 1}  }
	{ res_33_V int 16 regular {pointer 1}  }
	{ res_34_V int 16 regular {pointer 1}  }
	{ res_35_V int 16 regular {pointer 1}  }
	{ res_36_V int 16 regular {pointer 1}  }
	{ res_37_V int 16 regular {pointer 1}  }
	{ res_38_V int 16 regular {pointer 1}  }
	{ res_39_V int 16 regular {pointer 1}  }
	{ res_40_V int 16 regular {pointer 1}  }
	{ res_41_V int 16 regular {pointer 1}  }
	{ res_42_V int 16 regular {pointer 1}  }
	{ res_43_V int 16 regular {pointer 1}  }
	{ res_44_V int 16 regular {pointer 1}  }
	{ res_45_V int 16 regular {pointer 1}  }
	{ res_46_V int 16 regular {pointer 1}  }
	{ res_47_V int 16 regular {pointer 1}  }
	{ res_48_V int 16 regular {pointer 1}  }
	{ res_49_V int 16 regular {pointer 1}  }
	{ p_read int 16 regular  }
	{ p_read1 int 16 regular  }
	{ p_read2 int 16 regular  }
	{ p_read3 int 16 regular  }
	{ p_read4 int 16 regular  }
	{ p_read5 int 16 regular  }
	{ p_read6 int 16 regular  }
	{ p_read7 int 16 regular  }
	{ p_read8 int 16 regular  }
	{ p_read9 int 16 regular  }
	{ p_read10 int 16 regular  }
	{ p_read11 int 16 regular  }
	{ p_read12 int 16 regular  }
	{ p_read13 int 16 regular  }
	{ p_read14 int 16 regular  }
	{ p_read15 int 16 regular  }
	{ p_read16 int 16 regular  }
	{ p_read17 int 16 regular  }
	{ p_read18 int 16 regular  }
	{ p_read19 int 16 regular  }
	{ p_read20 int 16 regular  }
	{ p_read21 int 16 regular  }
	{ p_read22 int 16 regular  }
	{ p_read23 int 16 regular  }
	{ p_read24 int 16 regular  }
	{ p_read25 int 16 regular  }
	{ p_read26 int 16 regular  }
	{ p_read27 int 16 regular  }
	{ p_read28 int 16 regular  }
	{ p_read29 int 16 regular  }
	{ p_read30 int 16 regular  }
	{ p_read31 int 16 regular  }
	{ p_read32 int 16 regular  }
	{ p_read33 int 16 regular  }
	{ p_read34 int 16 regular  }
	{ p_read35 int 16 regular  }
	{ p_read36 int 16 regular  }
	{ p_read37 int 16 regular  }
	{ p_read38 int 16 regular  }
	{ p_read39 int 16 regular  }
	{ p_read40 int 16 regular  }
	{ p_read41 int 16 regular  }
	{ p_read42 int 16 regular  }
	{ p_read43 int 16 regular  }
	{ p_read44 int 16 regular  }
	{ p_read45 int 16 regular  }
	{ p_read46 int 16 regular  }
	{ p_read47 int 16 regular  }
	{ p_read48 int 16 regular  }
	{ p_read49 int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "res_0_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_1_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_2_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_3_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_4_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_5_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_6_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_7_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_8_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_9_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_10_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_11_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_12_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_13_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_14_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_15_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_16_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_17_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_18_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_19_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_20_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_21_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_22_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_23_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_24_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_25_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_26_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_27_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_28_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_29_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_30_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_31_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_32_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_33_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_34_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_35_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_36_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_37_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_38_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_39_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_40_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_41_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_42_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_43_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_44_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_45_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_46_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_47_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_48_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_49_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read1", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read2", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read3", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read4", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read5", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read6", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read7", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read8", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read9", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read10", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read11", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read12", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read13", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read14", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read15", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read16", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read17", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read18", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read19", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read20", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read21", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read22", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read23", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read24", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read25", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read26", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read27", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read28", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read29", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read30", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read31", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read32", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read33", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read34", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read35", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read36", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read37", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read38", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read39", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read40", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read41", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read42", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read43", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read44", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read45", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read46", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read47", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read48", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "p_read49", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 157
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ res_0_V sc_out sc_lv 16 signal 0 } 
	{ res_0_V_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ res_1_V sc_out sc_lv 16 signal 1 } 
	{ res_1_V_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ res_2_V sc_out sc_lv 16 signal 2 } 
	{ res_2_V_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ res_3_V sc_out sc_lv 16 signal 3 } 
	{ res_3_V_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ res_4_V sc_out sc_lv 16 signal 4 } 
	{ res_4_V_ap_vld sc_out sc_logic 1 outvld 4 } 
	{ res_5_V sc_out sc_lv 16 signal 5 } 
	{ res_5_V_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ res_6_V sc_out sc_lv 16 signal 6 } 
	{ res_6_V_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ res_7_V sc_out sc_lv 16 signal 7 } 
	{ res_7_V_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ res_8_V sc_out sc_lv 16 signal 8 } 
	{ res_8_V_ap_vld sc_out sc_logic 1 outvld 8 } 
	{ res_9_V sc_out sc_lv 16 signal 9 } 
	{ res_9_V_ap_vld sc_out sc_logic 1 outvld 9 } 
	{ res_10_V sc_out sc_lv 16 signal 10 } 
	{ res_10_V_ap_vld sc_out sc_logic 1 outvld 10 } 
	{ res_11_V sc_out sc_lv 16 signal 11 } 
	{ res_11_V_ap_vld sc_out sc_logic 1 outvld 11 } 
	{ res_12_V sc_out sc_lv 16 signal 12 } 
	{ res_12_V_ap_vld sc_out sc_logic 1 outvld 12 } 
	{ res_13_V sc_out sc_lv 16 signal 13 } 
	{ res_13_V_ap_vld sc_out sc_logic 1 outvld 13 } 
	{ res_14_V sc_out sc_lv 16 signal 14 } 
	{ res_14_V_ap_vld sc_out sc_logic 1 outvld 14 } 
	{ res_15_V sc_out sc_lv 16 signal 15 } 
	{ res_15_V_ap_vld sc_out sc_logic 1 outvld 15 } 
	{ res_16_V sc_out sc_lv 16 signal 16 } 
	{ res_16_V_ap_vld sc_out sc_logic 1 outvld 16 } 
	{ res_17_V sc_out sc_lv 16 signal 17 } 
	{ res_17_V_ap_vld sc_out sc_logic 1 outvld 17 } 
	{ res_18_V sc_out sc_lv 16 signal 18 } 
	{ res_18_V_ap_vld sc_out sc_logic 1 outvld 18 } 
	{ res_19_V sc_out sc_lv 16 signal 19 } 
	{ res_19_V_ap_vld sc_out sc_logic 1 outvld 19 } 
	{ res_20_V sc_out sc_lv 16 signal 20 } 
	{ res_20_V_ap_vld sc_out sc_logic 1 outvld 20 } 
	{ res_21_V sc_out sc_lv 16 signal 21 } 
	{ res_21_V_ap_vld sc_out sc_logic 1 outvld 21 } 
	{ res_22_V sc_out sc_lv 16 signal 22 } 
	{ res_22_V_ap_vld sc_out sc_logic 1 outvld 22 } 
	{ res_23_V sc_out sc_lv 16 signal 23 } 
	{ res_23_V_ap_vld sc_out sc_logic 1 outvld 23 } 
	{ res_24_V sc_out sc_lv 16 signal 24 } 
	{ res_24_V_ap_vld sc_out sc_logic 1 outvld 24 } 
	{ res_25_V sc_out sc_lv 16 signal 25 } 
	{ res_25_V_ap_vld sc_out sc_logic 1 outvld 25 } 
	{ res_26_V sc_out sc_lv 16 signal 26 } 
	{ res_26_V_ap_vld sc_out sc_logic 1 outvld 26 } 
	{ res_27_V sc_out sc_lv 16 signal 27 } 
	{ res_27_V_ap_vld sc_out sc_logic 1 outvld 27 } 
	{ res_28_V sc_out sc_lv 16 signal 28 } 
	{ res_28_V_ap_vld sc_out sc_logic 1 outvld 28 } 
	{ res_29_V sc_out sc_lv 16 signal 29 } 
	{ res_29_V_ap_vld sc_out sc_logic 1 outvld 29 } 
	{ res_30_V sc_out sc_lv 16 signal 30 } 
	{ res_30_V_ap_vld sc_out sc_logic 1 outvld 30 } 
	{ res_31_V sc_out sc_lv 16 signal 31 } 
	{ res_31_V_ap_vld sc_out sc_logic 1 outvld 31 } 
	{ res_32_V sc_out sc_lv 16 signal 32 } 
	{ res_32_V_ap_vld sc_out sc_logic 1 outvld 32 } 
	{ res_33_V sc_out sc_lv 16 signal 33 } 
	{ res_33_V_ap_vld sc_out sc_logic 1 outvld 33 } 
	{ res_34_V sc_out sc_lv 16 signal 34 } 
	{ res_34_V_ap_vld sc_out sc_logic 1 outvld 34 } 
	{ res_35_V sc_out sc_lv 16 signal 35 } 
	{ res_35_V_ap_vld sc_out sc_logic 1 outvld 35 } 
	{ res_36_V sc_out sc_lv 16 signal 36 } 
	{ res_36_V_ap_vld sc_out sc_logic 1 outvld 36 } 
	{ res_37_V sc_out sc_lv 16 signal 37 } 
	{ res_37_V_ap_vld sc_out sc_logic 1 outvld 37 } 
	{ res_38_V sc_out sc_lv 16 signal 38 } 
	{ res_38_V_ap_vld sc_out sc_logic 1 outvld 38 } 
	{ res_39_V sc_out sc_lv 16 signal 39 } 
	{ res_39_V_ap_vld sc_out sc_logic 1 outvld 39 } 
	{ res_40_V sc_out sc_lv 16 signal 40 } 
	{ res_40_V_ap_vld sc_out sc_logic 1 outvld 40 } 
	{ res_41_V sc_out sc_lv 16 signal 41 } 
	{ res_41_V_ap_vld sc_out sc_logic 1 outvld 41 } 
	{ res_42_V sc_out sc_lv 16 signal 42 } 
	{ res_42_V_ap_vld sc_out sc_logic 1 outvld 42 } 
	{ res_43_V sc_out sc_lv 16 signal 43 } 
	{ res_43_V_ap_vld sc_out sc_logic 1 outvld 43 } 
	{ res_44_V sc_out sc_lv 16 signal 44 } 
	{ res_44_V_ap_vld sc_out sc_logic 1 outvld 44 } 
	{ res_45_V sc_out sc_lv 16 signal 45 } 
	{ res_45_V_ap_vld sc_out sc_logic 1 outvld 45 } 
	{ res_46_V sc_out sc_lv 16 signal 46 } 
	{ res_46_V_ap_vld sc_out sc_logic 1 outvld 46 } 
	{ res_47_V sc_out sc_lv 16 signal 47 } 
	{ res_47_V_ap_vld sc_out sc_logic 1 outvld 47 } 
	{ res_48_V sc_out sc_lv 16 signal 48 } 
	{ res_48_V_ap_vld sc_out sc_logic 1 outvld 48 } 
	{ res_49_V sc_out sc_lv 16 signal 49 } 
	{ res_49_V_ap_vld sc_out sc_logic 1 outvld 49 } 
	{ p_read sc_in sc_lv 16 signal 50 } 
	{ p_read1 sc_in sc_lv 16 signal 51 } 
	{ p_read2 sc_in sc_lv 16 signal 52 } 
	{ p_read3 sc_in sc_lv 16 signal 53 } 
	{ p_read4 sc_in sc_lv 16 signal 54 } 
	{ p_read5 sc_in sc_lv 16 signal 55 } 
	{ p_read6 sc_in sc_lv 16 signal 56 } 
	{ p_read7 sc_in sc_lv 16 signal 57 } 
	{ p_read8 sc_in sc_lv 16 signal 58 } 
	{ p_read9 sc_in sc_lv 16 signal 59 } 
	{ p_read10 sc_in sc_lv 16 signal 60 } 
	{ p_read11 sc_in sc_lv 16 signal 61 } 
	{ p_read12 sc_in sc_lv 16 signal 62 } 
	{ p_read13 sc_in sc_lv 16 signal 63 } 
	{ p_read14 sc_in sc_lv 16 signal 64 } 
	{ p_read15 sc_in sc_lv 16 signal 65 } 
	{ p_read16 sc_in sc_lv 16 signal 66 } 
	{ p_read17 sc_in sc_lv 16 signal 67 } 
	{ p_read18 sc_in sc_lv 16 signal 68 } 
	{ p_read19 sc_in sc_lv 16 signal 69 } 
	{ p_read20 sc_in sc_lv 16 signal 70 } 
	{ p_read21 sc_in sc_lv 16 signal 71 } 
	{ p_read22 sc_in sc_lv 16 signal 72 } 
	{ p_read23 sc_in sc_lv 16 signal 73 } 
	{ p_read24 sc_in sc_lv 16 signal 74 } 
	{ p_read25 sc_in sc_lv 16 signal 75 } 
	{ p_read26 sc_in sc_lv 16 signal 76 } 
	{ p_read27 sc_in sc_lv 16 signal 77 } 
	{ p_read28 sc_in sc_lv 16 signal 78 } 
	{ p_read29 sc_in sc_lv 16 signal 79 } 
	{ p_read30 sc_in sc_lv 16 signal 80 } 
	{ p_read31 sc_in sc_lv 16 signal 81 } 
	{ p_read32 sc_in sc_lv 16 signal 82 } 
	{ p_read33 sc_in sc_lv 16 signal 83 } 
	{ p_read34 sc_in sc_lv 16 signal 84 } 
	{ p_read35 sc_in sc_lv 16 signal 85 } 
	{ p_read36 sc_in sc_lv 16 signal 86 } 
	{ p_read37 sc_in sc_lv 16 signal 87 } 
	{ p_read38 sc_in sc_lv 16 signal 88 } 
	{ p_read39 sc_in sc_lv 16 signal 89 } 
	{ p_read40 sc_in sc_lv 16 signal 90 } 
	{ p_read41 sc_in sc_lv 16 signal 91 } 
	{ p_read42 sc_in sc_lv 16 signal 92 } 
	{ p_read43 sc_in sc_lv 16 signal 93 } 
	{ p_read44 sc_in sc_lv 16 signal 94 } 
	{ p_read45 sc_in sc_lv 16 signal 95 } 
	{ p_read46 sc_in sc_lv 16 signal 96 } 
	{ p_read47 sc_in sc_lv 16 signal 97 } 
	{ p_read48 sc_in sc_lv 16 signal 98 } 
	{ p_read49 sc_in sc_lv 16 signal 99 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "res_0_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_0_V", "role": "default" }} , 
 	{ "name": "res_0_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_0_V", "role": "ap_vld" }} , 
 	{ "name": "res_1_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_1_V", "role": "default" }} , 
 	{ "name": "res_1_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_1_V", "role": "ap_vld" }} , 
 	{ "name": "res_2_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_2_V", "role": "default" }} , 
 	{ "name": "res_2_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_2_V", "role": "ap_vld" }} , 
 	{ "name": "res_3_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_3_V", "role": "default" }} , 
 	{ "name": "res_3_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_3_V", "role": "ap_vld" }} , 
 	{ "name": "res_4_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_4_V", "role": "default" }} , 
 	{ "name": "res_4_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_4_V", "role": "ap_vld" }} , 
 	{ "name": "res_5_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_5_V", "role": "default" }} , 
 	{ "name": "res_5_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_5_V", "role": "ap_vld" }} , 
 	{ "name": "res_6_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_6_V", "role": "default" }} , 
 	{ "name": "res_6_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_6_V", "role": "ap_vld" }} , 
 	{ "name": "res_7_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_7_V", "role": "default" }} , 
 	{ "name": "res_7_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_7_V", "role": "ap_vld" }} , 
 	{ "name": "res_8_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_8_V", "role": "default" }} , 
 	{ "name": "res_8_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_8_V", "role": "ap_vld" }} , 
 	{ "name": "res_9_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_9_V", "role": "default" }} , 
 	{ "name": "res_9_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_9_V", "role": "ap_vld" }} , 
 	{ "name": "res_10_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_10_V", "role": "default" }} , 
 	{ "name": "res_10_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_10_V", "role": "ap_vld" }} , 
 	{ "name": "res_11_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_11_V", "role": "default" }} , 
 	{ "name": "res_11_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_11_V", "role": "ap_vld" }} , 
 	{ "name": "res_12_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_12_V", "role": "default" }} , 
 	{ "name": "res_12_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_12_V", "role": "ap_vld" }} , 
 	{ "name": "res_13_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_13_V", "role": "default" }} , 
 	{ "name": "res_13_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_13_V", "role": "ap_vld" }} , 
 	{ "name": "res_14_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_14_V", "role": "default" }} , 
 	{ "name": "res_14_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_14_V", "role": "ap_vld" }} , 
 	{ "name": "res_15_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_15_V", "role": "default" }} , 
 	{ "name": "res_15_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_15_V", "role": "ap_vld" }} , 
 	{ "name": "res_16_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_16_V", "role": "default" }} , 
 	{ "name": "res_16_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_16_V", "role": "ap_vld" }} , 
 	{ "name": "res_17_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_17_V", "role": "default" }} , 
 	{ "name": "res_17_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_17_V", "role": "ap_vld" }} , 
 	{ "name": "res_18_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_18_V", "role": "default" }} , 
 	{ "name": "res_18_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_18_V", "role": "ap_vld" }} , 
 	{ "name": "res_19_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_19_V", "role": "default" }} , 
 	{ "name": "res_19_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_19_V", "role": "ap_vld" }} , 
 	{ "name": "res_20_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_20_V", "role": "default" }} , 
 	{ "name": "res_20_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_20_V", "role": "ap_vld" }} , 
 	{ "name": "res_21_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_21_V", "role": "default" }} , 
 	{ "name": "res_21_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_21_V", "role": "ap_vld" }} , 
 	{ "name": "res_22_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_22_V", "role": "default" }} , 
 	{ "name": "res_22_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_22_V", "role": "ap_vld" }} , 
 	{ "name": "res_23_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_23_V", "role": "default" }} , 
 	{ "name": "res_23_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_23_V", "role": "ap_vld" }} , 
 	{ "name": "res_24_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_24_V", "role": "default" }} , 
 	{ "name": "res_24_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_24_V", "role": "ap_vld" }} , 
 	{ "name": "res_25_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_25_V", "role": "default" }} , 
 	{ "name": "res_25_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_25_V", "role": "ap_vld" }} , 
 	{ "name": "res_26_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_26_V", "role": "default" }} , 
 	{ "name": "res_26_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_26_V", "role": "ap_vld" }} , 
 	{ "name": "res_27_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_27_V", "role": "default" }} , 
 	{ "name": "res_27_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_27_V", "role": "ap_vld" }} , 
 	{ "name": "res_28_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_28_V", "role": "default" }} , 
 	{ "name": "res_28_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_28_V", "role": "ap_vld" }} , 
 	{ "name": "res_29_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_29_V", "role": "default" }} , 
 	{ "name": "res_29_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_29_V", "role": "ap_vld" }} , 
 	{ "name": "res_30_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_30_V", "role": "default" }} , 
 	{ "name": "res_30_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_30_V", "role": "ap_vld" }} , 
 	{ "name": "res_31_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_31_V", "role": "default" }} , 
 	{ "name": "res_31_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_31_V", "role": "ap_vld" }} , 
 	{ "name": "res_32_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_32_V", "role": "default" }} , 
 	{ "name": "res_32_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_32_V", "role": "ap_vld" }} , 
 	{ "name": "res_33_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_33_V", "role": "default" }} , 
 	{ "name": "res_33_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_33_V", "role": "ap_vld" }} , 
 	{ "name": "res_34_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_34_V", "role": "default" }} , 
 	{ "name": "res_34_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_34_V", "role": "ap_vld" }} , 
 	{ "name": "res_35_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_35_V", "role": "default" }} , 
 	{ "name": "res_35_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_35_V", "role": "ap_vld" }} , 
 	{ "name": "res_36_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_36_V", "role": "default" }} , 
 	{ "name": "res_36_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_36_V", "role": "ap_vld" }} , 
 	{ "name": "res_37_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_37_V", "role": "default" }} , 
 	{ "name": "res_37_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_37_V", "role": "ap_vld" }} , 
 	{ "name": "res_38_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_38_V", "role": "default" }} , 
 	{ "name": "res_38_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_38_V", "role": "ap_vld" }} , 
 	{ "name": "res_39_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_39_V", "role": "default" }} , 
 	{ "name": "res_39_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_39_V", "role": "ap_vld" }} , 
 	{ "name": "res_40_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_40_V", "role": "default" }} , 
 	{ "name": "res_40_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_40_V", "role": "ap_vld" }} , 
 	{ "name": "res_41_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_41_V", "role": "default" }} , 
 	{ "name": "res_41_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_41_V", "role": "ap_vld" }} , 
 	{ "name": "res_42_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_42_V", "role": "default" }} , 
 	{ "name": "res_42_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_42_V", "role": "ap_vld" }} , 
 	{ "name": "res_43_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_43_V", "role": "default" }} , 
 	{ "name": "res_43_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_43_V", "role": "ap_vld" }} , 
 	{ "name": "res_44_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_44_V", "role": "default" }} , 
 	{ "name": "res_44_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_44_V", "role": "ap_vld" }} , 
 	{ "name": "res_45_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_45_V", "role": "default" }} , 
 	{ "name": "res_45_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_45_V", "role": "ap_vld" }} , 
 	{ "name": "res_46_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_46_V", "role": "default" }} , 
 	{ "name": "res_46_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_46_V", "role": "ap_vld" }} , 
 	{ "name": "res_47_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_47_V", "role": "default" }} , 
 	{ "name": "res_47_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_47_V", "role": "ap_vld" }} , 
 	{ "name": "res_48_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_48_V", "role": "default" }} , 
 	{ "name": "res_48_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_48_V", "role": "ap_vld" }} , 
 	{ "name": "res_49_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_49_V", "role": "default" }} , 
 	{ "name": "res_49_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "res_49_V", "role": "ap_vld" }} , 
 	{ "name": "p_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read", "role": "default" }} , 
 	{ "name": "p_read1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read1", "role": "default" }} , 
 	{ "name": "p_read2", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read2", "role": "default" }} , 
 	{ "name": "p_read3", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read3", "role": "default" }} , 
 	{ "name": "p_read4", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read4", "role": "default" }} , 
 	{ "name": "p_read5", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read5", "role": "default" }} , 
 	{ "name": "p_read6", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read6", "role": "default" }} , 
 	{ "name": "p_read7", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read7", "role": "default" }} , 
 	{ "name": "p_read8", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read8", "role": "default" }} , 
 	{ "name": "p_read9", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read9", "role": "default" }} , 
 	{ "name": "p_read10", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read10", "role": "default" }} , 
 	{ "name": "p_read11", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read11", "role": "default" }} , 
 	{ "name": "p_read12", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read12", "role": "default" }} , 
 	{ "name": "p_read13", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read13", "role": "default" }} , 
 	{ "name": "p_read14", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read14", "role": "default" }} , 
 	{ "name": "p_read15", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read15", "role": "default" }} , 
 	{ "name": "p_read16", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read16", "role": "default" }} , 
 	{ "name": "p_read17", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read17", "role": "default" }} , 
 	{ "name": "p_read18", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read18", "role": "default" }} , 
 	{ "name": "p_read19", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read19", "role": "default" }} , 
 	{ "name": "p_read20", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read20", "role": "default" }} , 
 	{ "name": "p_read21", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read21", "role": "default" }} , 
 	{ "name": "p_read22", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read22", "role": "default" }} , 
 	{ "name": "p_read23", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read23", "role": "default" }} , 
 	{ "name": "p_read24", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read24", "role": "default" }} , 
 	{ "name": "p_read25", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read25", "role": "default" }} , 
 	{ "name": "p_read26", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read26", "role": "default" }} , 
 	{ "name": "p_read27", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read27", "role": "default" }} , 
 	{ "name": "p_read28", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read28", "role": "default" }} , 
 	{ "name": "p_read29", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read29", "role": "default" }} , 
 	{ "name": "p_read30", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read30", "role": "default" }} , 
 	{ "name": "p_read31", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read31", "role": "default" }} , 
 	{ "name": "p_read32", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read32", "role": "default" }} , 
 	{ "name": "p_read33", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read33", "role": "default" }} , 
 	{ "name": "p_read34", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read34", "role": "default" }} , 
 	{ "name": "p_read35", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read35", "role": "default" }} , 
 	{ "name": "p_read36", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read36", "role": "default" }} , 
 	{ "name": "p_read37", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read37", "role": "default" }} , 
 	{ "name": "p_read38", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read38", "role": "default" }} , 
 	{ "name": "p_read39", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read39", "role": "default" }} , 
 	{ "name": "p_read40", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read40", "role": "default" }} , 
 	{ "name": "p_read41", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read41", "role": "default" }} , 
 	{ "name": "p_read42", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read42", "role": "default" }} , 
 	{ "name": "p_read43", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read43", "role": "default" }} , 
 	{ "name": "p_read44", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read44", "role": "default" }} , 
 	{ "name": "p_read45", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read45", "role": "default" }} , 
 	{ "name": "p_read46", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read46", "role": "default" }} , 
 	{ "name": "p_read47", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read47", "role": "default" }} , 
 	{ "name": "p_read48", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read48", "role": "default" }} , 
 	{ "name": "p_read49", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "p_read49", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "pointwise_conv_1d_cl_0_0_0_0_0_0_Block_pointwise_conv_1d_cl_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "res_0_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_1_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_2_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_3_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_4_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_5_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_6_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_7_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_8_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_9_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_10_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_11_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_12_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_13_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_14_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_15_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_16_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_17_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_18_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_19_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_20_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_21_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_22_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_23_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_24_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_25_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_26_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_27_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_28_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_29_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_30_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_31_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_32_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_33_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_34_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_35_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_36_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_37_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_38_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_39_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_40_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_41_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_42_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_43_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_44_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_45_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_46_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_47_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_48_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "res_49_V", "Type" : "Vld", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"}]}]}


set ArgLastReadFirstWriteLatency {
	pointwise_conv_1d_cl_0_0_0_0_0_0_Block_pointwise_conv_1d_cl_s {
		res_0_V {Type O LastRead -1 FirstWrite 0}
		res_1_V {Type O LastRead -1 FirstWrite 0}
		res_2_V {Type O LastRead -1 FirstWrite 0}
		res_3_V {Type O LastRead -1 FirstWrite 0}
		res_4_V {Type O LastRead -1 FirstWrite 0}
		res_5_V {Type O LastRead -1 FirstWrite 0}
		res_6_V {Type O LastRead -1 FirstWrite 0}
		res_7_V {Type O LastRead -1 FirstWrite 0}
		res_8_V {Type O LastRead -1 FirstWrite 0}
		res_9_V {Type O LastRead -1 FirstWrite 0}
		res_10_V {Type O LastRead -1 FirstWrite 0}
		res_11_V {Type O LastRead -1 FirstWrite 0}
		res_12_V {Type O LastRead -1 FirstWrite 0}
		res_13_V {Type O LastRead -1 FirstWrite 0}
		res_14_V {Type O LastRead -1 FirstWrite 0}
		res_15_V {Type O LastRead -1 FirstWrite 0}
		res_16_V {Type O LastRead -1 FirstWrite 0}
		res_17_V {Type O LastRead -1 FirstWrite 0}
		res_18_V {Type O LastRead -1 FirstWrite 0}
		res_19_V {Type O LastRead -1 FirstWrite 0}
		res_20_V {Type O LastRead -1 FirstWrite 0}
		res_21_V {Type O LastRead -1 FirstWrite 0}
		res_22_V {Type O LastRead -1 FirstWrite 0}
		res_23_V {Type O LastRead -1 FirstWrite 0}
		res_24_V {Type O LastRead -1 FirstWrite 0}
		res_25_V {Type O LastRead -1 FirstWrite 0}
		res_26_V {Type O LastRead -1 FirstWrite 0}
		res_27_V {Type O LastRead -1 FirstWrite 0}
		res_28_V {Type O LastRead -1 FirstWrite 0}
		res_29_V {Type O LastRead -1 FirstWrite 0}
		res_30_V {Type O LastRead -1 FirstWrite 0}
		res_31_V {Type O LastRead -1 FirstWrite 0}
		res_32_V {Type O LastRead -1 FirstWrite 0}
		res_33_V {Type O LastRead -1 FirstWrite 0}
		res_34_V {Type O LastRead -1 FirstWrite 0}
		res_35_V {Type O LastRead -1 FirstWrite 0}
		res_36_V {Type O LastRead -1 FirstWrite 0}
		res_37_V {Type O LastRead -1 FirstWrite 0}
		res_38_V {Type O LastRead -1 FirstWrite 0}
		res_39_V {Type O LastRead -1 FirstWrite 0}
		res_40_V {Type O LastRead -1 FirstWrite 0}
		res_41_V {Type O LastRead -1 FirstWrite 0}
		res_42_V {Type O LastRead -1 FirstWrite 0}
		res_43_V {Type O LastRead -1 FirstWrite 0}
		res_44_V {Type O LastRead -1 FirstWrite 0}
		res_45_V {Type O LastRead -1 FirstWrite 0}
		res_46_V {Type O LastRead -1 FirstWrite 0}
		res_47_V {Type O LastRead -1 FirstWrite 0}
		res_48_V {Type O LastRead -1 FirstWrite 0}
		res_49_V {Type O LastRead -1 FirstWrite 0}
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	res_0_V { ap_vld {  { res_0_V out_data 1 16 }  { res_0_V_ap_vld out_vld 1 1 } } }
	res_1_V { ap_vld {  { res_1_V out_data 1 16 }  { res_1_V_ap_vld out_vld 1 1 } } }
	res_2_V { ap_vld {  { res_2_V out_data 1 16 }  { res_2_V_ap_vld out_vld 1 1 } } }
	res_3_V { ap_vld {  { res_3_V out_data 1 16 }  { res_3_V_ap_vld out_vld 1 1 } } }
	res_4_V { ap_vld {  { res_4_V out_data 1 16 }  { res_4_V_ap_vld out_vld 1 1 } } }
	res_5_V { ap_vld {  { res_5_V out_data 1 16 }  { res_5_V_ap_vld out_vld 1 1 } } }
	res_6_V { ap_vld {  { res_6_V out_data 1 16 }  { res_6_V_ap_vld out_vld 1 1 } } }
	res_7_V { ap_vld {  { res_7_V out_data 1 16 }  { res_7_V_ap_vld out_vld 1 1 } } }
	res_8_V { ap_vld {  { res_8_V out_data 1 16 }  { res_8_V_ap_vld out_vld 1 1 } } }
	res_9_V { ap_vld {  { res_9_V out_data 1 16 }  { res_9_V_ap_vld out_vld 1 1 } } }
	res_10_V { ap_vld {  { res_10_V out_data 1 16 }  { res_10_V_ap_vld out_vld 1 1 } } }
	res_11_V { ap_vld {  { res_11_V out_data 1 16 }  { res_11_V_ap_vld out_vld 1 1 } } }
	res_12_V { ap_vld {  { res_12_V out_data 1 16 }  { res_12_V_ap_vld out_vld 1 1 } } }
	res_13_V { ap_vld {  { res_13_V out_data 1 16 }  { res_13_V_ap_vld out_vld 1 1 } } }
	res_14_V { ap_vld {  { res_14_V out_data 1 16 }  { res_14_V_ap_vld out_vld 1 1 } } }
	res_15_V { ap_vld {  { res_15_V out_data 1 16 }  { res_15_V_ap_vld out_vld 1 1 } } }
	res_16_V { ap_vld {  { res_16_V out_data 1 16 }  { res_16_V_ap_vld out_vld 1 1 } } }
	res_17_V { ap_vld {  { res_17_V out_data 1 16 }  { res_17_V_ap_vld out_vld 1 1 } } }
	res_18_V { ap_vld {  { res_18_V out_data 1 16 }  { res_18_V_ap_vld out_vld 1 1 } } }
	res_19_V { ap_vld {  { res_19_V out_data 1 16 }  { res_19_V_ap_vld out_vld 1 1 } } }
	res_20_V { ap_vld {  { res_20_V out_data 1 16 }  { res_20_V_ap_vld out_vld 1 1 } } }
	res_21_V { ap_vld {  { res_21_V out_data 1 16 }  { res_21_V_ap_vld out_vld 1 1 } } }
	res_22_V { ap_vld {  { res_22_V out_data 1 16 }  { res_22_V_ap_vld out_vld 1 1 } } }
	res_23_V { ap_vld {  { res_23_V out_data 1 16 }  { res_23_V_ap_vld out_vld 1 1 } } }
	res_24_V { ap_vld {  { res_24_V out_data 1 16 }  { res_24_V_ap_vld out_vld 1 1 } } }
	res_25_V { ap_vld {  { res_25_V out_data 1 16 }  { res_25_V_ap_vld out_vld 1 1 } } }
	res_26_V { ap_vld {  { res_26_V out_data 1 16 }  { res_26_V_ap_vld out_vld 1 1 } } }
	res_27_V { ap_vld {  { res_27_V out_data 1 16 }  { res_27_V_ap_vld out_vld 1 1 } } }
	res_28_V { ap_vld {  { res_28_V out_data 1 16 }  { res_28_V_ap_vld out_vld 1 1 } } }
	res_29_V { ap_vld {  { res_29_V out_data 1 16 }  { res_29_V_ap_vld out_vld 1 1 } } }
	res_30_V { ap_vld {  { res_30_V out_data 1 16 }  { res_30_V_ap_vld out_vld 1 1 } } }
	res_31_V { ap_vld {  { res_31_V out_data 1 16 }  { res_31_V_ap_vld out_vld 1 1 } } }
	res_32_V { ap_vld {  { res_32_V out_data 1 16 }  { res_32_V_ap_vld out_vld 1 1 } } }
	res_33_V { ap_vld {  { res_33_V out_data 1 16 }  { res_33_V_ap_vld out_vld 1 1 } } }
	res_34_V { ap_vld {  { res_34_V out_data 1 16 }  { res_34_V_ap_vld out_vld 1 1 } } }
	res_35_V { ap_vld {  { res_35_V out_data 1 16 }  { res_35_V_ap_vld out_vld 1 1 } } }
	res_36_V { ap_vld {  { res_36_V out_data 1 16 }  { res_36_V_ap_vld out_vld 1 1 } } }
	res_37_V { ap_vld {  { res_37_V out_data 1 16 }  { res_37_V_ap_vld out_vld 1 1 } } }
	res_38_V { ap_vld {  { res_38_V out_data 1 16 }  { res_38_V_ap_vld out_vld 1 1 } } }
	res_39_V { ap_vld {  { res_39_V out_data 1 16 }  { res_39_V_ap_vld out_vld 1 1 } } }
	res_40_V { ap_vld {  { res_40_V out_data 1 16 }  { res_40_V_ap_vld out_vld 1 1 } } }
	res_41_V { ap_vld {  { res_41_V out_data 1 16 }  { res_41_V_ap_vld out_vld 1 1 } } }
	res_42_V { ap_vld {  { res_42_V out_data 1 16 }  { res_42_V_ap_vld out_vld 1 1 } } }
	res_43_V { ap_vld {  { res_43_V out_data 1 16 }  { res_43_V_ap_vld out_vld 1 1 } } }
	res_44_V { ap_vld {  { res_44_V out_data 1 16 }  { res_44_V_ap_vld out_vld 1 1 } } }
	res_45_V { ap_vld {  { res_45_V out_data 1 16 }  { res_45_V_ap_vld out_vld 1 1 } } }
	res_46_V { ap_vld {  { res_46_V out_data 1 16 }  { res_46_V_ap_vld out_vld 1 1 } } }
	res_47_V { ap_vld {  { res_47_V out_data 1 16 }  { res_47_V_ap_vld out_vld 1 1 } } }
	res_48_V { ap_vld {  { res_48_V out_data 1 16 }  { res_48_V_ap_vld out_vld 1 1 } } }
	res_49_V { ap_vld {  { res_49_V out_data 1 16 }  { res_49_V_ap_vld out_vld 1 1 } } }
	p_read { ap_none {  { p_read in_data 0 16 } } }
	p_read1 { ap_none {  { p_read1 in_data 0 16 } } }
	p_read2 { ap_none {  { p_read2 in_data 0 16 } } }
	p_read3 { ap_none {  { p_read3 in_data 0 16 } } }
	p_read4 { ap_none {  { p_read4 in_data 0 16 } } }
	p_read5 { ap_none {  { p_read5 in_data 0 16 } } }
	p_read6 { ap_none {  { p_read6 in_data 0 16 } } }
	p_read7 { ap_none {  { p_read7 in_data 0 16 } } }
	p_read8 { ap_none {  { p_read8 in_data 0 16 } } }
	p_read9 { ap_none {  { p_read9 in_data 0 16 } } }
	p_read10 { ap_none {  { p_read10 in_data 0 16 } } }
	p_read11 { ap_none {  { p_read11 in_data 0 16 } } }
	p_read12 { ap_none {  { p_read12 in_data 0 16 } } }
	p_read13 { ap_none {  { p_read13 in_data 0 16 } } }
	p_read14 { ap_none {  { p_read14 in_data 0 16 } } }
	p_read15 { ap_none {  { p_read15 in_data 0 16 } } }
	p_read16 { ap_none {  { p_read16 in_data 0 16 } } }
	p_read17 { ap_none {  { p_read17 in_data 0 16 } } }
	p_read18 { ap_none {  { p_read18 in_data 0 16 } } }
	p_read19 { ap_none {  { p_read19 in_data 0 16 } } }
	p_read20 { ap_none {  { p_read20 in_data 0 16 } } }
	p_read21 { ap_none {  { p_read21 in_data 0 16 } } }
	p_read22 { ap_none {  { p_read22 in_data 0 16 } } }
	p_read23 { ap_none {  { p_read23 in_data 0 16 } } }
	p_read24 { ap_none {  { p_read24 in_data 0 16 } } }
	p_read25 { ap_none {  { p_read25 in_data 0 16 } } }
	p_read26 { ap_none {  { p_read26 in_data 0 16 } } }
	p_read27 { ap_none {  { p_read27 in_data 0 16 } } }
	p_read28 { ap_none {  { p_read28 in_data 0 16 } } }
	p_read29 { ap_none {  { p_read29 in_data 0 16 } } }
	p_read30 { ap_none {  { p_read30 in_data 0 16 } } }
	p_read31 { ap_none {  { p_read31 in_data 0 16 } } }
	p_read32 { ap_none {  { p_read32 in_data 0 16 } } }
	p_read33 { ap_none {  { p_read33 in_data 0 16 } } }
	p_read34 { ap_none {  { p_read34 in_data 0 16 } } }
	p_read35 { ap_none {  { p_read35 in_data 0 16 } } }
	p_read36 { ap_none {  { p_read36 in_data 0 16 } } }
	p_read37 { ap_none {  { p_read37 in_data 0 16 } } }
	p_read38 { ap_none {  { p_read38 in_data 0 16 } } }
	p_read39 { ap_none {  { p_read39 in_data 0 16 } } }
	p_read40 { ap_none {  { p_read40 in_data 0 16 } } }
	p_read41 { ap_none {  { p_read41 in_data 0 16 } } }
	p_read42 { ap_none {  { p_read42 in_data 0 16 } } }
	p_read43 { ap_none {  { p_read43 in_data 0 16 } } }
	p_read44 { ap_none {  { p_read44 in_data 0 16 } } }
	p_read45 { ap_none {  { p_read45 in_data 0 16 } } }
	p_read46 { ap_none {  { p_read46 in_data 0 16 } } }
	p_read47 { ap_none {  { p_read47 in_data 0 16 } } }
	p_read48 { ap_none {  { p_read48 in_data 0 16 } } }
	p_read49 { ap_none {  { p_read49 in_data 0 16 } } }
}
