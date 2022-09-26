# This script segment is generated automatically by AutoPilot

set id 158
set name myproject_mux_83_10_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 10
set din0_signed 0
set din1_width 10
set din1_signed 0
set din2_width 10
set din2_signed 0
set din3_width 10
set din3_signed 0
set din4_width 10
set din4_signed 0
set din5_width 10
set din5_signed 0
set din6_width 10
set din6_signed 0
set din7_width 10
set din7_signed 0
set din8_width 3
set din8_signed 0
set dout_width 10
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


# Memory (RAM/ROM)  definition:
set ID 219
set hasByteEnable 0
set MemName dense_resource_rf_leq_nin_0_1_0_1_0_1_0_1_0_1_0_1_0_1_0_1bkb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 540
set AddrRange 5
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "000000001110111101000011110010110100111110001111111010010011111000101000000000101000000011101011110110001000110110111111100001000100011000100101000000011110011100000110010000011100001001001010100100111010110001010110010101101000011001110100110000010011110111101001001010000001000111011110000010011000001011000111011110000110111000001101010111000001011111101101110111110000111011000000000111000101000110001000010110111100001000110101111101010110100000000111101010000100110111010001001110000101000000001110000011000111111110111010100000110001" "110011011000011110000011110110110111000110010001000011111100101000010010111110101011111111000010010101111001111111001000101000000110111111011101111111011000011010000111111000100000001011100101111110110011101111000011111000101000011110000011101001001110000100101000000111011101101000000110000001110000010101000010111000101010011111010101010101000001101000010101000100100110011011011111101101110000000110000110101100000001101000111100100000100000101011000101011100110010001100100001010101111110101111001010110100011100000000000110001000110010" "011111111000011101000011111010101010000111100001010100110100010000011011110110110101110001000010000000010101110000110111111110100001011010100011110010101000010100000010101100100011001000000111000010110101010001110101111100001000011101111101001001010110000011010111111011111101111000000111000000110011111111110001110111111010011111100101100100010101110000100110000101110000000111100000000110011111000000111111101110001000001010010000111001110000110010000100000110101010001010011111101011100000000001001000000110111100000000000110000000111100" "001011100000000001000000011000101011111110110110010001111011100111011000101001101111011000111110011010000000111100111111110100100101000111110110111111111111011110000000010000111001100001010111011001000001010110011111110100001111110011000100111000100010111001111001000000110111010001001001100111010110100001000000111000010100000111101111110011110010001000011010111011111001100011001101000111111001110011101001000110000111110010100111111011010110010001111101000000101110111011101010001111000001010000000101110000100001001000000000011000010111" "111110100111110011000011010111111011011111111110111101001100111000101111000111110000000001111111100000010000000100111110101001001011100110100111100000000111010011111000111011101011000110010111110001100001111111111100000110101100000000000011100000111000011111111000100000111110000100000000111111011111000010101001011101111001111011110000010011000101001001000111100000000111111101110101101111100111110101000000101000011111110000100100111010011100000000110011000001000011110000110111100110111100011100011000110110000000111001111101110000110011" }
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
    id 220 \
    name data_0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_0_V \
    op interface \
    ports { data_0_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 221 \
    name data_1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_1_V \
    op interface \
    ports { data_1_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 222 \
    name data_2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_2_V \
    op interface \
    ports { data_2_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 223 \
    name data_3_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_3_V \
    op interface \
    ports { data_3_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 224 \
    name data_4_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_4_V \
    op interface \
    ports { data_4_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 225 \
    name data_5_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_5_V \
    op interface \
    ports { data_5_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 226 \
    name data_6_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_6_V \
    op interface \
    ports { data_6_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 227 \
    name data_7_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_7_V \
    op interface \
    ports { data_7_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 228 \
    name data_8_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_8_V \
    op interface \
    ports { data_8_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 229 \
    name data_9_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_9_V \
    op interface \
    ports { data_9_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 230 \
    name data_10_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_10_V \
    op interface \
    ports { data_10_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 231 \
    name data_11_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_11_V \
    op interface \
    ports { data_11_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 232 \
    name data_12_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_12_V \
    op interface \
    ports { data_12_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 233 \
    name data_13_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_13_V \
    op interface \
    ports { data_13_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 234 \
    name data_14_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_14_V \
    op interface \
    ports { data_14_V { I 10 vector } } \
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


