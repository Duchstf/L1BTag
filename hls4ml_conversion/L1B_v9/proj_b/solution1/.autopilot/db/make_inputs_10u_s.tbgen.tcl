set moduleName make_inputs_10u_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 1
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {make_inputs<10u>}
set C_modelType { int 2080 }
set C_modelArgList {
	{ puppi_candidate_0_V_read int 64 regular  }
	{ puppi_candidate_1_V_read int 64 regular  }
	{ puppi_candidate_2_V_read int 64 regular  }
	{ puppi_candidate_3_V_read int 64 regular  }
	{ puppi_candidate_4_V_read int 64 regular  }
	{ puppi_candidate_5_V_read int 64 regular  }
	{ puppi_candidate_6_V_read int 64 regular  }
	{ puppi_candidate_7_V_read int 64 regular  }
	{ puppi_candidate_8_V_read int 64 regular  }
	{ puppi_candidate_9_V_read int 64 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "puppi_candidate_0_V_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "puppi_candidate_1_V_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "puppi_candidate_2_V_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "puppi_candidate_3_V_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "puppi_candidate_4_V_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "puppi_candidate_5_V_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "puppi_candidate_6_V_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "puppi_candidate_7_V_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "puppi_candidate_8_V_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "puppi_candidate_9_V_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 2080} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ puppi_candidate_0_V_read sc_in sc_lv 64 signal 0 } 
	{ puppi_candidate_1_V_read sc_in sc_lv 64 signal 1 } 
	{ puppi_candidate_2_V_read sc_in sc_lv 64 signal 2 } 
	{ puppi_candidate_3_V_read sc_in sc_lv 64 signal 3 } 
	{ puppi_candidate_4_V_read sc_in sc_lv 64 signal 4 } 
	{ puppi_candidate_5_V_read sc_in sc_lv 64 signal 5 } 
	{ puppi_candidate_6_V_read sc_in sc_lv 64 signal 6 } 
	{ puppi_candidate_7_V_read sc_in sc_lv 64 signal 7 } 
	{ puppi_candidate_8_V_read sc_in sc_lv 64 signal 8 } 
	{ puppi_candidate_9_V_read sc_in sc_lv 64 signal 9 } 
	{ ap_return sc_out sc_lv 2080 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "puppi_candidate_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "puppi_candidate_0_V_read", "role": "default" }} , 
 	{ "name": "puppi_candidate_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "puppi_candidate_1_V_read", "role": "default" }} , 
 	{ "name": "puppi_candidate_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "puppi_candidate_2_V_read", "role": "default" }} , 
 	{ "name": "puppi_candidate_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "puppi_candidate_3_V_read", "role": "default" }} , 
 	{ "name": "puppi_candidate_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "puppi_candidate_4_V_read", "role": "default" }} , 
 	{ "name": "puppi_candidate_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "puppi_candidate_5_V_read", "role": "default" }} , 
 	{ "name": "puppi_candidate_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "puppi_candidate_6_V_read", "role": "default" }} , 
 	{ "name": "puppi_candidate_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "puppi_candidate_7_V_read", "role": "default" }} , 
 	{ "name": "puppi_candidate_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "puppi_candidate_8_V_read", "role": "default" }} , 
 	{ "name": "puppi_candidate_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "puppi_candidate_9_V_read", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":2080, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "make_inputs_10u_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "puppi_candidate_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "puppi_candidate_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "puppi_candidate_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "puppi_candidate_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "puppi_candidate_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "puppi_candidate_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "puppi_candidate_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "puppi_candidate_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "puppi_candidate_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "puppi_candidate_9_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	make_inputs_10u_s {
		puppi_candidate_0_V_read {Type I LastRead 0 FirstWrite -1}
		puppi_candidate_1_V_read {Type I LastRead 0 FirstWrite -1}
		puppi_candidate_2_V_read {Type I LastRead 0 FirstWrite -1}
		puppi_candidate_3_V_read {Type I LastRead 0 FirstWrite -1}
		puppi_candidate_4_V_read {Type I LastRead 0 FirstWrite -1}
		puppi_candidate_5_V_read {Type I LastRead 0 FirstWrite -1}
		puppi_candidate_6_V_read {Type I LastRead 0 FirstWrite -1}
		puppi_candidate_7_V_read {Type I LastRead 0 FirstWrite -1}
		puppi_candidate_8_V_read {Type I LastRead 0 FirstWrite -1}
		puppi_candidate_9_V_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	puppi_candidate_0_V_read { ap_none {  { puppi_candidate_0_V_read in_data 0 64 } } }
	puppi_candidate_1_V_read { ap_none {  { puppi_candidate_1_V_read in_data 0 64 } } }
	puppi_candidate_2_V_read { ap_none {  { puppi_candidate_2_V_read in_data 0 64 } } }
	puppi_candidate_3_V_read { ap_none {  { puppi_candidate_3_V_read in_data 0 64 } } }
	puppi_candidate_4_V_read { ap_none {  { puppi_candidate_4_V_read in_data 0 64 } } }
	puppi_candidate_5_V_read { ap_none {  { puppi_candidate_5_V_read in_data 0 64 } } }
	puppi_candidate_6_V_read { ap_none {  { puppi_candidate_6_V_read in_data 0 64 } } }
	puppi_candidate_7_V_read { ap_none {  { puppi_candidate_7_V_read in_data 0 64 } } }
	puppi_candidate_8_V_read { ap_none {  { puppi_candidate_8_V_read in_data 0 64 } } }
	puppi_candidate_9_V_read { ap_none {  { puppi_candidate_9_V_read in_data 0 64 } } }
}
