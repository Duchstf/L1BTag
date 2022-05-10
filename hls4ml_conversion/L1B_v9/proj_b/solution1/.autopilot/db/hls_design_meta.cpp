#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("input_0_V", 64, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("input_1_V", 64, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("input_2_V", 64, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("input_3_V", 64, hls_in, 3, "ap_none", "in_data", 1),
	Port_Property("input_4_V", 64, hls_in, 4, "ap_none", "in_data", 1),
	Port_Property("input_5_V", 64, hls_in, 5, "ap_none", "in_data", 1),
	Port_Property("input_6_V", 64, hls_in, 6, "ap_none", "in_data", 1),
	Port_Property("input_7_V", 64, hls_in, 7, "ap_none", "in_data", 1),
	Port_Property("input_8_V", 64, hls_in, 8, "ap_none", "in_data", 1),
	Port_Property("input_9_V", 64, hls_in, 9, "ap_none", "in_data", 1),
	Port_Property("output_0_V", 64, hls_out, 54, "ap_none", "out_data", 1),
};
const char* HLS_Design_Meta::dut_name = "algo_b";
