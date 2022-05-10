# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1 \
    name puppi_candidate_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_puppi_candidate_0_V_read \
    op interface \
    ports { puppi_candidate_0_V_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2 \
    name puppi_candidate_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_puppi_candidate_1_V_read \
    op interface \
    ports { puppi_candidate_1_V_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3 \
    name puppi_candidate_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_puppi_candidate_2_V_read \
    op interface \
    ports { puppi_candidate_2_V_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4 \
    name puppi_candidate_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_puppi_candidate_3_V_read \
    op interface \
    ports { puppi_candidate_3_V_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name puppi_candidate_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_puppi_candidate_4_V_read \
    op interface \
    ports { puppi_candidate_4_V_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
    name puppi_candidate_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_puppi_candidate_5_V_read \
    op interface \
    ports { puppi_candidate_5_V_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 7 \
    name puppi_candidate_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_puppi_candidate_6_V_read \
    op interface \
    ports { puppi_candidate_6_V_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8 \
    name puppi_candidate_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_puppi_candidate_7_V_read \
    op interface \
    ports { puppi_candidate_7_V_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
    name puppi_candidate_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_puppi_candidate_8_V_read \
    op interface \
    ports { puppi_candidate_8_V_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 10 \
    name puppi_candidate_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_puppi_candidate_9_V_read \
    op interface \
    ports { puppi_candidate_9_V_read { I 64 vector } } \
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
    ports { ap_ready { O 1 bit } } \
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
    ports { ap_return { O 2080 vector } } \
} "
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


