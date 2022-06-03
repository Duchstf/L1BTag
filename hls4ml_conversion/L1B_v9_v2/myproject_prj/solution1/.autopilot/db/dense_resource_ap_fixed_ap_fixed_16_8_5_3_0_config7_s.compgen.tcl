# This script segment is generated automatically by AutoPilot

set id 1276
set name myproject_mux_83_15_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 15
set din0_signed 0
set din1_width 15
set din1_signed 0
set din2_width 15
set din2_signed 0
set din3_width 15
set din3_signed 0
set din4_width 15
set din4_signed 0
set din5_width 15
set din5_signed 0
set din6_width 15
set din6_signed 0
set din7_width 15
set din7_signed 0
set din8_width 3
set din8_signed 0
set dout_width 15
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 1476
set name myproject_mul_mul_15ns_16s_24_1_1
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 15
set in0_signed 0
set in1_width 16
set in1_signed 1
set out_width 24
set exp i0*i1
set arg_lists {i0 {15 0 +} i1 {16 1 +} p {24 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 1675
set name myproject_mul_mul_9s_15ns_24_1_1
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 9
set in0_signed 1
set in1_width 15
set in1_signed 0
set out_width 24
set exp i0*i1
set arg_lists {i0 {9 1 +} i1 {15 0 +} p {24 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 1679
set hasByteEnable 0
set MemName dense_resource_ap_fixed_ap_fixed_16_8_5_3_0_config7_s_w7_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 3193
set AddrRange 5
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "1110011011111111110011110000000000010011011111111110001011111111111101010111111111110011000000000100011010000000010111000000000000100111100000000100000010000000001000100000000001000000100000000010101010000000000000000000000000011111100000000101001110000000001101100000000001001011011111111101000110000000001011111111111111001110100000000011000001111111100100000111111111000000111111111110111110000000000000001111111111011001111111111101101101111111110110010000000001100101011111111110110011111111100011100111111111010101111111110111100101111111100010000000000000010100111111111010010001111111011101100111111110110010011111111010110100000000000110011111111111000010100000000011011101111111111111001111111110111011011111111001101011111111111110110111111111110010100000000100011100000000001010011000000000000110111111111101101110000000010111110111111110111110000000000001000101111111110111011000000000110000011111111100001100000000000101001000000000101101000000000011111111111111110110100000000000001011000000000100001000000000000100011111111111101100000000000100001000000000011110010000000000101001100000000011110110000000011011101000000001001001011111111111011000000000001010100000000000110110100000000011111010000000010110110000000001001101100000000011010010000000001110001000000000111111000000000010010010000000001100101000000001011001000000000100101000000000100110011000000000110110100000000001100001111111110110001000000000010000011111110111010001111111111010100111111110111011111111111010011111111111100011101111111110010001111111111010001111111111110111111000000000011011000000000101000111111111111111000111111111001010100000000011111010000000000101100111111110101011011111111111111111111111001110001000000000101001111111111111011001111111101011000111111111111100100000000011101001111111111010011111111111010111011111111111000001111111110000000111111111111010011111111000101111111111111111011111111101110110000000000001010100000000000010111111111111110010100000000010100010000000001001100111111110111001100000000000001101111111111011010111111101011111111111111111100110000000001100001111111111100100011111111101101011111111111000000000000000001010011111111110001001111111111110000000000001000001000000000001000111111111010110011000000000001010011111111110101110000000001001101111111111110000011111111001111101111111111110111000000001001101100000000010100110000000001100000000000000111111011111111101010010000000001100110111111111101101000000000010110010000000000111101000000001000001100000000010000010000000010111000000000000111001100000000011111101111111110100110000000000001101000000000010000010000000000010101111111111110000011111111001011010000000000011000000000001100101011111111011101001111111110101100000000000100110000000000100111011111111111111101111111111001011100000000101100110000000000110101111111111111110011111111101110101111111111010001111111111000101100000000000110111111111100001001111111101110110100000000010110010000000000010111111111110101101000000000001001010000000000011101111111111101011100000000001010111111111100011011111111111100101011111111011011111111111111100010111111111010101011111111101100001111111100101111111111111100010011111111110111001111111011100110" "0000100011111111101110010111111100110001111111110101110000000000010110110111111111110000011111111010100010000000001011010000000000001110100000000110011000000000000010000000000001011000000000000011000010000000001000100000000001111000100000000010011000000000001111110000000000100101011111111111111111111111110111101000000000010100111111111110111101111111111011000000000001011110111111111111101101111111111110001111111111011110011111111111011011111111110110100111111111110101000000000000100101111111111001101111111111100111111111111000010101111111110001111000000000001101011111111100110111111111110100011111111111100111111111111111011100000000000111001000000000000010000000000010011001111111110001110000000000000011100000000010110101111111111110001000000000001010100000000110011010000000010000111111111110110010011111111001011100000000001100001111111111101011100000000100100000000000001111010000000001011011000000000000101000000000001001110000000001011000000000000011100110000000000110011000000000101110100000000001101100000000001001111111111111011001100000000011000010000000011010100000000000001101000000000000111001111111111010101000000000011011011111111011010000000000001100011000000000000111100000000001110110000000001001111000000001001101000000000100011110000000011111010111111111001010000000000001010011111111110101010000000000000110111111111100111101111111111001000000000000101000100000000101010010000000011010110000000000111100111111110101110001111111101001000111111110110100011111111011111101111111100011110111111110000101100000000001001010000000001010101000000000100000000000000010111100000000000010110000000000100101111111111110010010000000001000001111111111010111100000000001001101111111011101101000000000101001111111111101101101111111111000001111111111100001000000000100100101111111111001011111111111010001111111111110001011111111110111011000000000010100011111111001000111111111111001010111111110111011011111111010100110000000001101010111111110111001100000000110000000000000001101000111111111001000100000000001011110000000000010110111111110111010000000000000000111111111110101101000000000010010000000000000101011111111110100110111111111101110000000000001101010000000000100110000000000101001111111111111011110000000100000101111111111111000000000000011111100000000001010100111111111111011100000000000101110000000001000010000000000101000100000000001011110000000000110111000000000000101011111111100001000000000001101101111111111110101000000000011010101111111110101100000000001010100100000000110011100000000001011101000000000000000111111111111100101111111110110011111111110111111100000000000010101111111111111011111111111101111011111111100000010000000001010111000000001001001111111111011110001111111111001000111111111000010111111111110111010000000000010111111111110111011000000000111011111111111100011101111111111000010011111111010010111111111110011100111111110111010111111111110000111111111011111011000000000001000111111111101111010000000001000101111111110111111011111111111111101111111111000110111111110110101111111111111010111111111111010111000000001100011000000000011101110000000000000011111111111100010011111101111001101111110111100110111111110101100011111111110010101111111100010010" "0011000000000000000000100111111111111010000000000001010001111111111110110111111111111111111111111101010110000000000100101111111111011000111111111011011011111111111110011000000000100100111111111111110001111111111110010000000000000001111111111011001111111111110101000111111110110000100000000010110100000000010001100111111110101010011111111100110111111111101111110111111111111111100000000001000101111111110110100111111111001101000000000001110000000000000101001000000000110110000000000001011001111111110101000000000000001000111111111100111011111111110011110111111111100100100000000000111101111111111001101000000000001011100000000100100100000000000011011111111111100011000000000010011001111111111111100000000000001001011111111111001000000000000110011111111111100100011111111000110011111111111000000111111111100111111111111110011011111111111010010111111111001011011111111101010001111111101101000111111110011001011111111110100110000000000100001000000000100010100000000001101101111111111111101111111110110101011111111110101111111111101011110000000000010001100000000000101111111111010111001111111100100111011111111110100010000000000110011111111111111101011111111111000001111111111010001111111111011011111111111100110011111111111110010000000000011001011111111101101101111111110000101000000000010000111111111110100110000000000111101000000000011110000000000011010000000000001010111111111111100110011111110111111111111111100110110111111110011011000000000001000110000000000010000111111111101000000000000000010101111111111011001000000000110010100000000100000111111111110011010111111111000011111111111010111111111111111110001111111111011110111111111101110011111111111001011111111111011011011111111100011111111111111111111111111101101010011111111011111110000000001001010111111111101011100000000000100011111111111010110111111111011111111111111101111101111111110010100111111110100011111111111111101111111111100010000000000000100010000000000001000101111111110011100000000000010001011111111100111001111111110011101000000000001001011111111110101101111111111001101000000000110111111111111100001011111111111101110000000000001110111111111111011000000000000001100111111111111110011111111110111001111111111001100111111101001101111111110101111101111111111110010000000000000110111111111110110101111111111001011111111111000011111111111010010011111111101010110111111110101001111111111010111001111111101000010111111111001110000000000001101010000000001001000000000000110111000000000010110110000000001000001111111111101100011111111000111011111111011111001111111111001101111111111010111011111111111001111000000000001010011111111110100000000000001000011000000000001001000000000001100101111111110011111111111110101000000000000100001100000000000011011111111111111101100000000011101010000000000000010111111111101101000000000010000010000000000000110000000000010101111111111111111101111111101111101000000001010101111111111010100111111111111101110111111110110000111111111110101101111111100011011111111111111010111111111110110101111111101101011111111111010011100000000110111011111111110100000111111111101111011111111100101101111111110010011000000000010011000000000000111111111111111000001000000000001001100000000001010100000000010110011" "1010100010000000000011011111111111100110100000000000110110000000000011011111111111010010111111111010100111111111101110111000000000000010000000000010010111111111111000000111111111110011111111111111101001111111101010000111111110110111011111111010111011111111010100000111111111100110111111111100010000000000000100010111111111011011000000000101100011111111111101001111111111101010011111111110111100000000001110100000000001111101100000000111110100000000011110010111111111001011011111111010011010000000000010101000000000010101011111111011010110000000001101000111111111110100000000000101110100000000010100001000000001000101111111111100111101111111111100110000000000110100111111111111111101111111101101101000000000101110011111111101111111111111111110010111111111110111000000000000000100000000000001100000000000000001011111111011111010000000001010010111111110111111011111111000001111111111110011010111111011111110111111110111110010000000000011100000000001000001011111111101100110000000000011001000000000101100111111111011100001111111010100000111111111101110011111111101010100000000001010100000000001000101011111111111110100000000001111010111111111010001111111111100111101111111100000101111111110000000111111111110000001111111110111111000000000000100011111111111111010000000010001100000000000100110011111111100101111111111111000100111111111111101111111111111101010000000011011101000000000000010000000000011010011111111100011010000000000101100011111111011110010000000000001010111111110010110111111110111111000000000000101110111111111001110011111111110011011111111111111001111111111100110111111111110011000000000010110100111111110011010011111111110000100000000000001101111111111111000111111111111111000000000001100101111111111111100111111111111111000000000000010100000000000110010000000000001101010000000010000110000000001011100100000000000110111111111110111110111111111101111111111111110101010000000001001000111111111010011000000000011011000000000010111110111111111100010100000000100001111111111110110000111111110010111011111111111001100000000000001000111111111110010000000000000100010000000001010110000000000110001000000000001001100000000001011001000000000000010100000000000101000000000000000101111111111101110100000000001011111111111111110001000000000011000011111111111010000000000100111011111111111110000111111101101001110000000000100011111111110111011100000000001111000000000001000111000000000001101100000000000000111111111101011000111111111001001000000000001101111111111111001001111111111100011100000000000001001111111101111001000000000001111111111111111101110000000001001010111111101100101011111110110010011111111110100110000000010011111000000000110011000000000000001100111111110100001000000000101111111111111111001100000000000111000011111111110001010000000010011111000000000111010011111110110011100000000100010101000000001010111100000000111101010000000000110111111111111011001100000000001101000000000000011111111111110101001000000000001001110000000001001000000000001010011111111111010101110000000011100011000000001100100111111111101001111111111101110001111111101110010011111111010010000000000001011110111111110101110111111110000100011111111110101111111111110100110000000000100111100000000000100100" "1100001011111111100101100111111111110110100000000000000011111111111011111000000000010001111111111101001010000000000110010111111111111100100000000011111111111111011100111111111111110010111111111100011011111111100000110111111111100010100000000001111010000000000100100111111111111110111111111101000111111111101101110000000000011100100000000101011110000000000011001000000000101101000000000101000000000000001100001000000001000100000000000100001100000000000111111111111111110101100000000010010010000000011110011000000000110000000000000101011100000000011011101111111111010100100000000011011000000000001110010000000000111111000000000011110001111111100110110111111110101110111111111101101011111111101011010111111111001111111111111110111101111111100100101111111111001110000000000101100101111111111000110111111111000100011111110100010100000000000100001111111111100000100000000000110111111111111100000000000000110011011111111100000111111111111100101000000000100110000000000011001010000000000100011000000000000000000000000000000100000000000101110111111110111100011111111101111000000000000101101000000001010110111111111110000001111111111011100000000000010111111111111011010111111111101101100111111111101101000000000000000011111111111011101111111110100110100000000000110100000000000110100111111111100100000000000000101110000000000001110111111111011010111111111100111101111111101100111000000000000110000000000010000101111111111010101000000000001110000000000010110100000000000000110111111110101100111111111111001001111111111000100111111110100111011111111101010101111111111001000111111111101111000000000010101100000000001011000000000000100111100000000001100111111111111001101000000000111100100000000001011000000000100101111111111111101110100000000001100000000000011000010000000000010011111111111111100110000000000101011000000000100101000000000000001110000000001100000111111111110011100000000111100110000000001010111000000010001100111111111110101100000000000010101111111111101110111111111110111001111111110101111000000001000011000000000000101010000000000101111000000010011000000000000000001111111111100101000111111111110101111111111110100001111111101110101111111111010000011111111100001101111111110100110000000001001100000000000000100010000000000111010111111111111001011111111111100000000000000110100000000000011000000000000001000100000000001110101000000001101001100000000110110100000000010000101000000001100001111111111110001111111111111011001111111111001101100000000001100101111111101011101000000000110110000000000010100110000000000001111000000000100111111111111110011010000000001111100111111111101111000000000000101011111111110110101111111111110010000000000110011111111111110001001111111111000101000000000001000110000000000110101000000000011011011111111100011110000000000010110000000000110010011111111010111100000000010000110000000000100110000000000011111101111111111101110000000000101111100000000100100000000000010110001000000001011101000000000010111000000000011110001000000001100000000000000001001010000000001010101000000000001010000000000001101110000000001110101111111101110110011111111110010011111111000011101000000000000000111111111001011111111111100011001111111110110111100000000011110001111111010001111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.158
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1680 \
    name data_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_0_V_read \
    op interface \
    ports { data_0_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1681 \
    name data_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_1_V_read \
    op interface \
    ports { data_1_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1682 \
    name data_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_2_V_read \
    op interface \
    ports { data_2_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1683 \
    name data_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_3_V_read \
    op interface \
    ports { data_3_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1684 \
    name data_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_4_V_read \
    op interface \
    ports { data_4_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1685 \
    name data_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_5_V_read \
    op interface \
    ports { data_5_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1686 \
    name data_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_6_V_read \
    op interface \
    ports { data_6_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1687 \
    name data_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_7_V_read \
    op interface \
    ports { data_7_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1688 \
    name data_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_8_V_read \
    op interface \
    ports { data_8_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1689 \
    name data_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_9_V_read \
    op interface \
    ports { data_9_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1690 \
    name data_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_10_V_read \
    op interface \
    ports { data_10_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1691 \
    name data_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_11_V_read \
    op interface \
    ports { data_11_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1692 \
    name data_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_12_V_read \
    op interface \
    ports { data_12_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1693 \
    name data_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_13_V_read \
    op interface \
    ports { data_13_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1694 \
    name data_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_14_V_read \
    op interface \
    ports { data_14_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1695 \
    name data_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_15_V_read \
    op interface \
    ports { data_15_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1696 \
    name data_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_16_V_read \
    op interface \
    ports { data_16_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1697 \
    name data_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_17_V_read \
    op interface \
    ports { data_17_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1698 \
    name data_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_18_V_read \
    op interface \
    ports { data_18_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1699 \
    name data_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_19_V_read \
    op interface \
    ports { data_19_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1700 \
    name data_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_20_V_read \
    op interface \
    ports { data_20_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1701 \
    name data_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_21_V_read \
    op interface \
    ports { data_21_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1702 \
    name data_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_22_V_read \
    op interface \
    ports { data_22_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1703 \
    name data_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_23_V_read \
    op interface \
    ports { data_23_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1704 \
    name data_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_24_V_read \
    op interface \
    ports { data_24_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1705 \
    name data_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_25_V_read \
    op interface \
    ports { data_25_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1706 \
    name data_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_26_V_read \
    op interface \
    ports { data_26_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1707 \
    name data_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_27_V_read \
    op interface \
    ports { data_27_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1708 \
    name data_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_28_V_read \
    op interface \
    ports { data_28_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1709 \
    name data_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_29_V_read \
    op interface \
    ports { data_29_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1710 \
    name data_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_30_V_read \
    op interface \
    ports { data_30_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1711 \
    name data_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_31_V_read \
    op interface \
    ports { data_31_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1712 \
    name data_32_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_32_V_read \
    op interface \
    ports { data_32_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1713 \
    name data_33_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_33_V_read \
    op interface \
    ports { data_33_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1714 \
    name data_34_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_34_V_read \
    op interface \
    ports { data_34_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1715 \
    name data_35_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_35_V_read \
    op interface \
    ports { data_35_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1716 \
    name data_36_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_36_V_read \
    op interface \
    ports { data_36_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1717 \
    name data_37_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_37_V_read \
    op interface \
    ports { data_37_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1718 \
    name data_38_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_38_V_read \
    op interface \
    ports { data_38_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1719 \
    name data_39_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_39_V_read \
    op interface \
    ports { data_39_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1720 \
    name data_40_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_40_V_read \
    op interface \
    ports { data_40_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1721 \
    name data_41_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_41_V_read \
    op interface \
    ports { data_41_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1722 \
    name data_42_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_42_V_read \
    op interface \
    ports { data_42_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1723 \
    name data_43_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_43_V_read \
    op interface \
    ports { data_43_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1724 \
    name data_44_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_44_V_read \
    op interface \
    ports { data_44_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1725 \
    name data_45_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_45_V_read \
    op interface \
    ports { data_45_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1726 \
    name data_46_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_46_V_read \
    op interface \
    ports { data_46_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1727 \
    name data_47_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_47_V_read \
    op interface \
    ports { data_47_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1728 \
    name data_48_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_48_V_read \
    op interface \
    ports { data_48_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1729 \
    name data_49_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_49_V_read \
    op interface \
    ports { data_49_V_read { I 15 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


