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
    id 625 \
    name data_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_V \
    op interface \
    ports { data_V_dout { I 2080 vector } data_V_empty_n { I 1 bit } data_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 626 \
    name res_0_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_0_V_out \
    op interface \
    ports { res_0_V_out_din { O 16 vector } res_0_V_out_full_n { I 1 bit } res_0_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 627 \
    name res_1_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_1_V_out \
    op interface \
    ports { res_1_V_out_din { O 16 vector } res_1_V_out_full_n { I 1 bit } res_1_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 628 \
    name res_2_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_2_V_out \
    op interface \
    ports { res_2_V_out_din { O 16 vector } res_2_V_out_full_n { I 1 bit } res_2_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 629 \
    name res_3_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_3_V_out \
    op interface \
    ports { res_3_V_out_din { O 16 vector } res_3_V_out_full_n { I 1 bit } res_3_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 630 \
    name res_4_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_4_V_out \
    op interface \
    ports { res_4_V_out_din { O 16 vector } res_4_V_out_full_n { I 1 bit } res_4_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 631 \
    name res_5_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_5_V_out \
    op interface \
    ports { res_5_V_out_din { O 16 vector } res_5_V_out_full_n { I 1 bit } res_5_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 632 \
    name res_6_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_6_V_out \
    op interface \
    ports { res_6_V_out_din { O 16 vector } res_6_V_out_full_n { I 1 bit } res_6_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 633 \
    name res_7_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_7_V_out \
    op interface \
    ports { res_7_V_out_din { O 16 vector } res_7_V_out_full_n { I 1 bit } res_7_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 634 \
    name res_8_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_8_V_out \
    op interface \
    ports { res_8_V_out_din { O 16 vector } res_8_V_out_full_n { I 1 bit } res_8_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 635 \
    name res_9_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_9_V_out \
    op interface \
    ports { res_9_V_out_din { O 16 vector } res_9_V_out_full_n { I 1 bit } res_9_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 636 \
    name res_10_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_10_V_out \
    op interface \
    ports { res_10_V_out_din { O 16 vector } res_10_V_out_full_n { I 1 bit } res_10_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 637 \
    name res_11_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_11_V_out \
    op interface \
    ports { res_11_V_out_din { O 16 vector } res_11_V_out_full_n { I 1 bit } res_11_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 638 \
    name res_12_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_12_V_out \
    op interface \
    ports { res_12_V_out_din { O 16 vector } res_12_V_out_full_n { I 1 bit } res_12_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 639 \
    name res_13_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_13_V_out \
    op interface \
    ports { res_13_V_out_din { O 16 vector } res_13_V_out_full_n { I 1 bit } res_13_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 640 \
    name res_14_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_14_V_out \
    op interface \
    ports { res_14_V_out_din { O 16 vector } res_14_V_out_full_n { I 1 bit } res_14_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 641 \
    name res_15_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_15_V_out \
    op interface \
    ports { res_15_V_out_din { O 16 vector } res_15_V_out_full_n { I 1 bit } res_15_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 642 \
    name res_16_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_16_V_out \
    op interface \
    ports { res_16_V_out_din { O 16 vector } res_16_V_out_full_n { I 1 bit } res_16_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 643 \
    name res_17_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_17_V_out \
    op interface \
    ports { res_17_V_out_din { O 16 vector } res_17_V_out_full_n { I 1 bit } res_17_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 644 \
    name res_18_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_18_V_out \
    op interface \
    ports { res_18_V_out_din { O 16 vector } res_18_V_out_full_n { I 1 bit } res_18_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 645 \
    name res_19_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_19_V_out \
    op interface \
    ports { res_19_V_out_din { O 16 vector } res_19_V_out_full_n { I 1 bit } res_19_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 646 \
    name res_20_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_20_V_out \
    op interface \
    ports { res_20_V_out_din { O 16 vector } res_20_V_out_full_n { I 1 bit } res_20_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 647 \
    name res_21_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_21_V_out \
    op interface \
    ports { res_21_V_out_din { O 16 vector } res_21_V_out_full_n { I 1 bit } res_21_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 648 \
    name res_22_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_22_V_out \
    op interface \
    ports { res_22_V_out_din { O 16 vector } res_22_V_out_full_n { I 1 bit } res_22_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 649 \
    name res_23_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_23_V_out \
    op interface \
    ports { res_23_V_out_din { O 16 vector } res_23_V_out_full_n { I 1 bit } res_23_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 650 \
    name res_24_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_24_V_out \
    op interface \
    ports { res_24_V_out_din { O 16 vector } res_24_V_out_full_n { I 1 bit } res_24_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 651 \
    name res_25_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_25_V_out \
    op interface \
    ports { res_25_V_out_din { O 16 vector } res_25_V_out_full_n { I 1 bit } res_25_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 652 \
    name res_26_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_26_V_out \
    op interface \
    ports { res_26_V_out_din { O 16 vector } res_26_V_out_full_n { I 1 bit } res_26_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 653 \
    name res_27_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_27_V_out \
    op interface \
    ports { res_27_V_out_din { O 16 vector } res_27_V_out_full_n { I 1 bit } res_27_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 654 \
    name res_28_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_28_V_out \
    op interface \
    ports { res_28_V_out_din { O 16 vector } res_28_V_out_full_n { I 1 bit } res_28_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 655 \
    name res_29_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_29_V_out \
    op interface \
    ports { res_29_V_out_din { O 16 vector } res_29_V_out_full_n { I 1 bit } res_29_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 656 \
    name res_30_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_30_V_out \
    op interface \
    ports { res_30_V_out_din { O 16 vector } res_30_V_out_full_n { I 1 bit } res_30_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 657 \
    name res_31_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_31_V_out \
    op interface \
    ports { res_31_V_out_din { O 16 vector } res_31_V_out_full_n { I 1 bit } res_31_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 658 \
    name res_32_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_32_V_out \
    op interface \
    ports { res_32_V_out_din { O 16 vector } res_32_V_out_full_n { I 1 bit } res_32_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 659 \
    name res_33_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_33_V_out \
    op interface \
    ports { res_33_V_out_din { O 16 vector } res_33_V_out_full_n { I 1 bit } res_33_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 660 \
    name res_34_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_34_V_out \
    op interface \
    ports { res_34_V_out_din { O 16 vector } res_34_V_out_full_n { I 1 bit } res_34_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 661 \
    name res_35_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_35_V_out \
    op interface \
    ports { res_35_V_out_din { O 16 vector } res_35_V_out_full_n { I 1 bit } res_35_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 662 \
    name res_36_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_36_V_out \
    op interface \
    ports { res_36_V_out_din { O 16 vector } res_36_V_out_full_n { I 1 bit } res_36_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 663 \
    name res_37_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_37_V_out \
    op interface \
    ports { res_37_V_out_din { O 16 vector } res_37_V_out_full_n { I 1 bit } res_37_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 664 \
    name res_38_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_38_V_out \
    op interface \
    ports { res_38_V_out_din { O 16 vector } res_38_V_out_full_n { I 1 bit } res_38_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 665 \
    name res_39_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_39_V_out \
    op interface \
    ports { res_39_V_out_din { O 16 vector } res_39_V_out_full_n { I 1 bit } res_39_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 666 \
    name res_40_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_40_V_out \
    op interface \
    ports { res_40_V_out_din { O 16 vector } res_40_V_out_full_n { I 1 bit } res_40_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 667 \
    name res_41_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_41_V_out \
    op interface \
    ports { res_41_V_out_din { O 16 vector } res_41_V_out_full_n { I 1 bit } res_41_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 668 \
    name res_42_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_42_V_out \
    op interface \
    ports { res_42_V_out_din { O 16 vector } res_42_V_out_full_n { I 1 bit } res_42_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 669 \
    name res_43_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_43_V_out \
    op interface \
    ports { res_43_V_out_din { O 16 vector } res_43_V_out_full_n { I 1 bit } res_43_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 670 \
    name res_44_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_44_V_out \
    op interface \
    ports { res_44_V_out_din { O 16 vector } res_44_V_out_full_n { I 1 bit } res_44_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 671 \
    name res_45_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_45_V_out \
    op interface \
    ports { res_45_V_out_din { O 16 vector } res_45_V_out_full_n { I 1 bit } res_45_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 672 \
    name res_46_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_46_V_out \
    op interface \
    ports { res_46_V_out_din { O 16 vector } res_46_V_out_full_n { I 1 bit } res_46_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 673 \
    name res_47_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_47_V_out \
    op interface \
    ports { res_47_V_out_din { O 16 vector } res_47_V_out_full_n { I 1 bit } res_47_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 674 \
    name res_48_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_48_V_out \
    op interface \
    ports { res_48_V_out_din { O 16 vector } res_48_V_out_full_n { I 1 bit } res_48_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 675 \
    name res_49_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_49_V_out \
    op interface \
    ports { res_49_V_out_din { O 16 vector } res_49_V_out_full_n { I 1 bit } res_49_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 676 \
    name res_50_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_50_V_out \
    op interface \
    ports { res_50_V_out_din { O 16 vector } res_50_V_out_full_n { I 1 bit } res_50_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 677 \
    name res_51_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_51_V_out \
    op interface \
    ports { res_51_V_out_din { O 16 vector } res_51_V_out_full_n { I 1 bit } res_51_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 678 \
    name res_52_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_52_V_out \
    op interface \
    ports { res_52_V_out_din { O 16 vector } res_52_V_out_full_n { I 1 bit } res_52_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 679 \
    name res_53_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_53_V_out \
    op interface \
    ports { res_53_V_out_din { O 16 vector } res_53_V_out_full_n { I 1 bit } res_53_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 680 \
    name res_54_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_54_V_out \
    op interface \
    ports { res_54_V_out_din { O 16 vector } res_54_V_out_full_n { I 1 bit } res_54_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 681 \
    name res_55_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_55_V_out \
    op interface \
    ports { res_55_V_out_din { O 16 vector } res_55_V_out_full_n { I 1 bit } res_55_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 682 \
    name res_56_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_56_V_out \
    op interface \
    ports { res_56_V_out_din { O 16 vector } res_56_V_out_full_n { I 1 bit } res_56_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 683 \
    name res_57_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_57_V_out \
    op interface \
    ports { res_57_V_out_din { O 16 vector } res_57_V_out_full_n { I 1 bit } res_57_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 684 \
    name res_58_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_58_V_out \
    op interface \
    ports { res_58_V_out_din { O 16 vector } res_58_V_out_full_n { I 1 bit } res_58_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 685 \
    name res_59_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_59_V_out \
    op interface \
    ports { res_59_V_out_din { O 16 vector } res_59_V_out_full_n { I 1 bit } res_59_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 686 \
    name res_60_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_60_V_out \
    op interface \
    ports { res_60_V_out_din { O 16 vector } res_60_V_out_full_n { I 1 bit } res_60_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 687 \
    name res_61_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_61_V_out \
    op interface \
    ports { res_61_V_out_din { O 16 vector } res_61_V_out_full_n { I 1 bit } res_61_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 688 \
    name res_62_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_62_V_out \
    op interface \
    ports { res_62_V_out_din { O 16 vector } res_62_V_out_full_n { I 1 bit } res_62_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 689 \
    name res_63_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_63_V_out \
    op interface \
    ports { res_63_V_out_din { O 16 vector } res_63_V_out_full_n { I 1 bit } res_63_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 690 \
    name res_64_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_64_V_out \
    op interface \
    ports { res_64_V_out_din { O 16 vector } res_64_V_out_full_n { I 1 bit } res_64_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 691 \
    name res_65_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_65_V_out \
    op interface \
    ports { res_65_V_out_din { O 16 vector } res_65_V_out_full_n { I 1 bit } res_65_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 692 \
    name res_66_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_66_V_out \
    op interface \
    ports { res_66_V_out_din { O 16 vector } res_66_V_out_full_n { I 1 bit } res_66_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 693 \
    name res_67_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_67_V_out \
    op interface \
    ports { res_67_V_out_din { O 16 vector } res_67_V_out_full_n { I 1 bit } res_67_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 694 \
    name res_68_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_68_V_out \
    op interface \
    ports { res_68_V_out_din { O 16 vector } res_68_V_out_full_n { I 1 bit } res_68_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 695 \
    name res_69_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_69_V_out \
    op interface \
    ports { res_69_V_out_din { O 16 vector } res_69_V_out_full_n { I 1 bit } res_69_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 696 \
    name res_70_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_70_V_out \
    op interface \
    ports { res_70_V_out_din { O 16 vector } res_70_V_out_full_n { I 1 bit } res_70_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 697 \
    name res_71_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_71_V_out \
    op interface \
    ports { res_71_V_out_din { O 16 vector } res_71_V_out_full_n { I 1 bit } res_71_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 698 \
    name res_72_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_72_V_out \
    op interface \
    ports { res_72_V_out_din { O 16 vector } res_72_V_out_full_n { I 1 bit } res_72_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 699 \
    name res_73_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_73_V_out \
    op interface \
    ports { res_73_V_out_din { O 16 vector } res_73_V_out_full_n { I 1 bit } res_73_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 700 \
    name res_74_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_74_V_out \
    op interface \
    ports { res_74_V_out_din { O 16 vector } res_74_V_out_full_n { I 1 bit } res_74_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 701 \
    name res_75_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_75_V_out \
    op interface \
    ports { res_75_V_out_din { O 16 vector } res_75_V_out_full_n { I 1 bit } res_75_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 702 \
    name res_76_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_76_V_out \
    op interface \
    ports { res_76_V_out_din { O 16 vector } res_76_V_out_full_n { I 1 bit } res_76_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 703 \
    name res_77_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_77_V_out \
    op interface \
    ports { res_77_V_out_din { O 16 vector } res_77_V_out_full_n { I 1 bit } res_77_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 704 \
    name res_78_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_78_V_out \
    op interface \
    ports { res_78_V_out_din { O 16 vector } res_78_V_out_full_n { I 1 bit } res_78_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 705 \
    name res_79_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_79_V_out \
    op interface \
    ports { res_79_V_out_din { O 16 vector } res_79_V_out_full_n { I 1 bit } res_79_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 706 \
    name res_80_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_80_V_out \
    op interface \
    ports { res_80_V_out_din { O 16 vector } res_80_V_out_full_n { I 1 bit } res_80_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 707 \
    name res_81_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_81_V_out \
    op interface \
    ports { res_81_V_out_din { O 16 vector } res_81_V_out_full_n { I 1 bit } res_81_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 708 \
    name res_82_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_82_V_out \
    op interface \
    ports { res_82_V_out_din { O 16 vector } res_82_V_out_full_n { I 1 bit } res_82_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 709 \
    name res_83_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_83_V_out \
    op interface \
    ports { res_83_V_out_din { O 16 vector } res_83_V_out_full_n { I 1 bit } res_83_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 710 \
    name res_84_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_84_V_out \
    op interface \
    ports { res_84_V_out_din { O 16 vector } res_84_V_out_full_n { I 1 bit } res_84_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 711 \
    name res_85_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_85_V_out \
    op interface \
    ports { res_85_V_out_din { O 16 vector } res_85_V_out_full_n { I 1 bit } res_85_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 712 \
    name res_86_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_86_V_out \
    op interface \
    ports { res_86_V_out_din { O 16 vector } res_86_V_out_full_n { I 1 bit } res_86_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 713 \
    name res_87_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_87_V_out \
    op interface \
    ports { res_87_V_out_din { O 16 vector } res_87_V_out_full_n { I 1 bit } res_87_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 714 \
    name res_88_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_88_V_out \
    op interface \
    ports { res_88_V_out_din { O 16 vector } res_88_V_out_full_n { I 1 bit } res_88_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 715 \
    name res_89_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_89_V_out \
    op interface \
    ports { res_89_V_out_din { O 16 vector } res_89_V_out_full_n { I 1 bit } res_89_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 716 \
    name res_90_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_90_V_out \
    op interface \
    ports { res_90_V_out_din { O 16 vector } res_90_V_out_full_n { I 1 bit } res_90_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 717 \
    name res_91_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_91_V_out \
    op interface \
    ports { res_91_V_out_din { O 16 vector } res_91_V_out_full_n { I 1 bit } res_91_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 718 \
    name res_92_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_92_V_out \
    op interface \
    ports { res_92_V_out_din { O 16 vector } res_92_V_out_full_n { I 1 bit } res_92_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 719 \
    name res_93_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_93_V_out \
    op interface \
    ports { res_93_V_out_din { O 16 vector } res_93_V_out_full_n { I 1 bit } res_93_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 720 \
    name res_94_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_94_V_out \
    op interface \
    ports { res_94_V_out_din { O 16 vector } res_94_V_out_full_n { I 1 bit } res_94_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 721 \
    name res_95_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_95_V_out \
    op interface \
    ports { res_95_V_out_din { O 16 vector } res_95_V_out_full_n { I 1 bit } res_95_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 722 \
    name res_96_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_96_V_out \
    op interface \
    ports { res_96_V_out_din { O 16 vector } res_96_V_out_full_n { I 1 bit } res_96_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 723 \
    name res_97_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_97_V_out \
    op interface \
    ports { res_97_V_out_din { O 16 vector } res_97_V_out_full_n { I 1 bit } res_97_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 724 \
    name res_98_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_98_V_out \
    op interface \
    ports { res_98_V_out_din { O 16 vector } res_98_V_out_full_n { I 1 bit } res_98_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 725 \
    name res_99_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_99_V_out \
    op interface \
    ports { res_99_V_out_din { O 16 vector } res_99_V_out_full_n { I 1 bit } res_99_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 726 \
    name res_100_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_100_V_out \
    op interface \
    ports { res_100_V_out_din { O 16 vector } res_100_V_out_full_n { I 1 bit } res_100_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 727 \
    name res_101_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_101_V_out \
    op interface \
    ports { res_101_V_out_din { O 16 vector } res_101_V_out_full_n { I 1 bit } res_101_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 728 \
    name res_102_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_102_V_out \
    op interface \
    ports { res_102_V_out_din { O 16 vector } res_102_V_out_full_n { I 1 bit } res_102_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 729 \
    name res_103_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_103_V_out \
    op interface \
    ports { res_103_V_out_din { O 16 vector } res_103_V_out_full_n { I 1 bit } res_103_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 730 \
    name res_104_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_104_V_out \
    op interface \
    ports { res_104_V_out_din { O 16 vector } res_104_V_out_full_n { I 1 bit } res_104_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 731 \
    name res_105_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_105_V_out \
    op interface \
    ports { res_105_V_out_din { O 16 vector } res_105_V_out_full_n { I 1 bit } res_105_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 732 \
    name res_106_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_106_V_out \
    op interface \
    ports { res_106_V_out_din { O 16 vector } res_106_V_out_full_n { I 1 bit } res_106_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 733 \
    name res_107_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_107_V_out \
    op interface \
    ports { res_107_V_out_din { O 16 vector } res_107_V_out_full_n { I 1 bit } res_107_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 734 \
    name res_108_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_108_V_out \
    op interface \
    ports { res_108_V_out_din { O 16 vector } res_108_V_out_full_n { I 1 bit } res_108_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 735 \
    name res_109_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_109_V_out \
    op interface \
    ports { res_109_V_out_din { O 16 vector } res_109_V_out_full_n { I 1 bit } res_109_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 736 \
    name res_110_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_110_V_out \
    op interface \
    ports { res_110_V_out_din { O 16 vector } res_110_V_out_full_n { I 1 bit } res_110_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 737 \
    name res_111_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_111_V_out \
    op interface \
    ports { res_111_V_out_din { O 16 vector } res_111_V_out_full_n { I 1 bit } res_111_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 738 \
    name res_112_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_112_V_out \
    op interface \
    ports { res_112_V_out_din { O 16 vector } res_112_V_out_full_n { I 1 bit } res_112_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 739 \
    name res_113_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_113_V_out \
    op interface \
    ports { res_113_V_out_din { O 16 vector } res_113_V_out_full_n { I 1 bit } res_113_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 740 \
    name res_114_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_114_V_out \
    op interface \
    ports { res_114_V_out_din { O 16 vector } res_114_V_out_full_n { I 1 bit } res_114_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 741 \
    name res_115_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_115_V_out \
    op interface \
    ports { res_115_V_out_din { O 16 vector } res_115_V_out_full_n { I 1 bit } res_115_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 742 \
    name res_116_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_116_V_out \
    op interface \
    ports { res_116_V_out_din { O 16 vector } res_116_V_out_full_n { I 1 bit } res_116_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 743 \
    name res_117_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_117_V_out \
    op interface \
    ports { res_117_V_out_din { O 16 vector } res_117_V_out_full_n { I 1 bit } res_117_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 744 \
    name res_118_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_118_V_out \
    op interface \
    ports { res_118_V_out_din { O 16 vector } res_118_V_out_full_n { I 1 bit } res_118_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 745 \
    name res_119_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_119_V_out \
    op interface \
    ports { res_119_V_out_din { O 16 vector } res_119_V_out_full_n { I 1 bit } res_119_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 746 \
    name res_120_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_120_V_out \
    op interface \
    ports { res_120_V_out_din { O 16 vector } res_120_V_out_full_n { I 1 bit } res_120_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 747 \
    name res_121_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_121_V_out \
    op interface \
    ports { res_121_V_out_din { O 16 vector } res_121_V_out_full_n { I 1 bit } res_121_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 748 \
    name res_122_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_122_V_out \
    op interface \
    ports { res_122_V_out_din { O 16 vector } res_122_V_out_full_n { I 1 bit } res_122_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 749 \
    name res_123_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_123_V_out \
    op interface \
    ports { res_123_V_out_din { O 16 vector } res_123_V_out_full_n { I 1 bit } res_123_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 750 \
    name res_124_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_124_V_out \
    op interface \
    ports { res_124_V_out_din { O 16 vector } res_124_V_out_full_n { I 1 bit } res_124_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 751 \
    name res_125_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_125_V_out \
    op interface \
    ports { res_125_V_out_din { O 16 vector } res_125_V_out_full_n { I 1 bit } res_125_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 752 \
    name res_126_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_126_V_out \
    op interface \
    ports { res_126_V_out_din { O 16 vector } res_126_V_out_full_n { I 1 bit } res_126_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 753 \
    name res_127_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_127_V_out \
    op interface \
    ports { res_127_V_out_din { O 16 vector } res_127_V_out_full_n { I 1 bit } res_127_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 754 \
    name res_128_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_128_V_out \
    op interface \
    ports { res_128_V_out_din { O 16 vector } res_128_V_out_full_n { I 1 bit } res_128_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 755 \
    name res_129_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_129_V_out \
    op interface \
    ports { res_129_V_out_din { O 16 vector } res_129_V_out_full_n { I 1 bit } res_129_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 756 \
    name res_130_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_130_V_out \
    op interface \
    ports { res_130_V_out_din { O 16 vector } res_130_V_out_full_n { I 1 bit } res_130_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 757 \
    name res_131_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_131_V_out \
    op interface \
    ports { res_131_V_out_din { O 16 vector } res_131_V_out_full_n { I 1 bit } res_131_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 758 \
    name res_132_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_132_V_out \
    op interface \
    ports { res_132_V_out_din { O 16 vector } res_132_V_out_full_n { I 1 bit } res_132_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 759 \
    name res_133_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_133_V_out \
    op interface \
    ports { res_133_V_out_din { O 16 vector } res_133_V_out_full_n { I 1 bit } res_133_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 760 \
    name res_134_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_134_V_out \
    op interface \
    ports { res_134_V_out_din { O 16 vector } res_134_V_out_full_n { I 1 bit } res_134_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 761 \
    name res_135_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_135_V_out \
    op interface \
    ports { res_135_V_out_din { O 16 vector } res_135_V_out_full_n { I 1 bit } res_135_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 762 \
    name res_136_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_136_V_out \
    op interface \
    ports { res_136_V_out_din { O 16 vector } res_136_V_out_full_n { I 1 bit } res_136_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 763 \
    name res_137_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_137_V_out \
    op interface \
    ports { res_137_V_out_din { O 16 vector } res_137_V_out_full_n { I 1 bit } res_137_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 764 \
    name res_138_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_138_V_out \
    op interface \
    ports { res_138_V_out_din { O 16 vector } res_138_V_out_full_n { I 1 bit } res_138_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 765 \
    name res_139_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_139_V_out \
    op interface \
    ports { res_139_V_out_din { O 16 vector } res_139_V_out_full_n { I 1 bit } res_139_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 766 \
    name res_140_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_140_V_out \
    op interface \
    ports { res_140_V_out_din { O 16 vector } res_140_V_out_full_n { I 1 bit } res_140_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 767 \
    name res_141_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_141_V_out \
    op interface \
    ports { res_141_V_out_din { O 16 vector } res_141_V_out_full_n { I 1 bit } res_141_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 768 \
    name res_142_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_142_V_out \
    op interface \
    ports { res_142_V_out_din { O 16 vector } res_142_V_out_full_n { I 1 bit } res_142_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 769 \
    name res_143_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_143_V_out \
    op interface \
    ports { res_143_V_out_din { O 16 vector } res_143_V_out_full_n { I 1 bit } res_143_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 770 \
    name res_144_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_144_V_out \
    op interface \
    ports { res_144_V_out_din { O 16 vector } res_144_V_out_full_n { I 1 bit } res_144_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 771 \
    name res_145_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_145_V_out \
    op interface \
    ports { res_145_V_out_din { O 16 vector } res_145_V_out_full_n { I 1 bit } res_145_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 772 \
    name res_146_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_146_V_out \
    op interface \
    ports { res_146_V_out_din { O 16 vector } res_146_V_out_full_n { I 1 bit } res_146_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 773 \
    name res_147_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_147_V_out \
    op interface \
    ports { res_147_V_out_din { O 16 vector } res_147_V_out_full_n { I 1 bit } res_147_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 774 \
    name res_148_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_148_V_out \
    op interface \
    ports { res_148_V_out_din { O 16 vector } res_148_V_out_full_n { I 1 bit } res_148_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 775 \
    name res_149_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_149_V_out \
    op interface \
    ports { res_149_V_out_din { O 16 vector } res_149_V_out_full_n { I 1 bit } res_149_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 776 \
    name res_150_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_150_V_out \
    op interface \
    ports { res_150_V_out_din { O 16 vector } res_150_V_out_full_n { I 1 bit } res_150_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 777 \
    name res_151_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_151_V_out \
    op interface \
    ports { res_151_V_out_din { O 16 vector } res_151_V_out_full_n { I 1 bit } res_151_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 778 \
    name res_152_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_152_V_out \
    op interface \
    ports { res_152_V_out_din { O 16 vector } res_152_V_out_full_n { I 1 bit } res_152_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 779 \
    name res_153_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_153_V_out \
    op interface \
    ports { res_153_V_out_din { O 16 vector } res_153_V_out_full_n { I 1 bit } res_153_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 780 \
    name res_154_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_154_V_out \
    op interface \
    ports { res_154_V_out_din { O 16 vector } res_154_V_out_full_n { I 1 bit } res_154_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 781 \
    name res_155_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_155_V_out \
    op interface \
    ports { res_155_V_out_din { O 16 vector } res_155_V_out_full_n { I 1 bit } res_155_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 782 \
    name res_156_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_156_V_out \
    op interface \
    ports { res_156_V_out_din { O 16 vector } res_156_V_out_full_n { I 1 bit } res_156_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 783 \
    name res_157_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_157_V_out \
    op interface \
    ports { res_157_V_out_din { O 16 vector } res_157_V_out_full_n { I 1 bit } res_157_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 784 \
    name res_158_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_158_V_out \
    op interface \
    ports { res_158_V_out_din { O 16 vector } res_158_V_out_full_n { I 1 bit } res_158_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 785 \
    name res_159_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_159_V_out \
    op interface \
    ports { res_159_V_out_din { O 16 vector } res_159_V_out_full_n { I 1 bit } res_159_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 786 \
    name res_160_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_160_V_out \
    op interface \
    ports { res_160_V_out_din { O 16 vector } res_160_V_out_full_n { I 1 bit } res_160_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 787 \
    name res_161_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_161_V_out \
    op interface \
    ports { res_161_V_out_din { O 16 vector } res_161_V_out_full_n { I 1 bit } res_161_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 788 \
    name res_162_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_162_V_out \
    op interface \
    ports { res_162_V_out_din { O 16 vector } res_162_V_out_full_n { I 1 bit } res_162_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 789 \
    name res_163_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_163_V_out \
    op interface \
    ports { res_163_V_out_din { O 16 vector } res_163_V_out_full_n { I 1 bit } res_163_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 790 \
    name res_164_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_164_V_out \
    op interface \
    ports { res_164_V_out_din { O 16 vector } res_164_V_out_full_n { I 1 bit } res_164_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 791 \
    name res_165_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_165_V_out \
    op interface \
    ports { res_165_V_out_din { O 16 vector } res_165_V_out_full_n { I 1 bit } res_165_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 792 \
    name res_166_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_166_V_out \
    op interface \
    ports { res_166_V_out_din { O 16 vector } res_166_V_out_full_n { I 1 bit } res_166_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 793 \
    name res_167_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_167_V_out \
    op interface \
    ports { res_167_V_out_din { O 16 vector } res_167_V_out_full_n { I 1 bit } res_167_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 794 \
    name res_168_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_168_V_out \
    op interface \
    ports { res_168_V_out_din { O 16 vector } res_168_V_out_full_n { I 1 bit } res_168_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 795 \
    name res_169_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_169_V_out \
    op interface \
    ports { res_169_V_out_din { O 16 vector } res_169_V_out_full_n { I 1 bit } res_169_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 796 \
    name res_170_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_170_V_out \
    op interface \
    ports { res_170_V_out_din { O 16 vector } res_170_V_out_full_n { I 1 bit } res_170_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 797 \
    name res_171_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_171_V_out \
    op interface \
    ports { res_171_V_out_din { O 16 vector } res_171_V_out_full_n { I 1 bit } res_171_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 798 \
    name res_172_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_172_V_out \
    op interface \
    ports { res_172_V_out_din { O 16 vector } res_172_V_out_full_n { I 1 bit } res_172_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 799 \
    name res_173_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_173_V_out \
    op interface \
    ports { res_173_V_out_din { O 16 vector } res_173_V_out_full_n { I 1 bit } res_173_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 800 \
    name res_174_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_174_V_out \
    op interface \
    ports { res_174_V_out_din { O 16 vector } res_174_V_out_full_n { I 1 bit } res_174_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 801 \
    name res_175_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_175_V_out \
    op interface \
    ports { res_175_V_out_din { O 16 vector } res_175_V_out_full_n { I 1 bit } res_175_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 802 \
    name res_176_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_176_V_out \
    op interface \
    ports { res_176_V_out_din { O 16 vector } res_176_V_out_full_n { I 1 bit } res_176_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 803 \
    name res_177_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_177_V_out \
    op interface \
    ports { res_177_V_out_din { O 16 vector } res_177_V_out_full_n { I 1 bit } res_177_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 804 \
    name res_178_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_178_V_out \
    op interface \
    ports { res_178_V_out_din { O 16 vector } res_178_V_out_full_n { I 1 bit } res_178_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 805 \
    name res_179_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_179_V_out \
    op interface \
    ports { res_179_V_out_din { O 16 vector } res_179_V_out_full_n { I 1 bit } res_179_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 806 \
    name res_180_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_180_V_out \
    op interface \
    ports { res_180_V_out_din { O 16 vector } res_180_V_out_full_n { I 1 bit } res_180_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 807 \
    name res_181_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_181_V_out \
    op interface \
    ports { res_181_V_out_din { O 16 vector } res_181_V_out_full_n { I 1 bit } res_181_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 808 \
    name res_182_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_182_V_out \
    op interface \
    ports { res_182_V_out_din { O 16 vector } res_182_V_out_full_n { I 1 bit } res_182_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 809 \
    name res_183_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_183_V_out \
    op interface \
    ports { res_183_V_out_din { O 16 vector } res_183_V_out_full_n { I 1 bit } res_183_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 810 \
    name res_184_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_184_V_out \
    op interface \
    ports { res_184_V_out_din { O 16 vector } res_184_V_out_full_n { I 1 bit } res_184_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 811 \
    name res_185_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_185_V_out \
    op interface \
    ports { res_185_V_out_din { O 16 vector } res_185_V_out_full_n { I 1 bit } res_185_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 812 \
    name res_186_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_186_V_out \
    op interface \
    ports { res_186_V_out_din { O 16 vector } res_186_V_out_full_n { I 1 bit } res_186_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 813 \
    name res_187_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_187_V_out \
    op interface \
    ports { res_187_V_out_din { O 16 vector } res_187_V_out_full_n { I 1 bit } res_187_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 814 \
    name res_188_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_188_V_out \
    op interface \
    ports { res_188_V_out_din { O 16 vector } res_188_V_out_full_n { I 1 bit } res_188_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 815 \
    name res_189_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_189_V_out \
    op interface \
    ports { res_189_V_out_din { O 16 vector } res_189_V_out_full_n { I 1 bit } res_189_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 816 \
    name res_190_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_190_V_out \
    op interface \
    ports { res_190_V_out_din { O 16 vector } res_190_V_out_full_n { I 1 bit } res_190_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 817 \
    name res_191_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_191_V_out \
    op interface \
    ports { res_191_V_out_din { O 16 vector } res_191_V_out_full_n { I 1 bit } res_191_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 818 \
    name res_192_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_192_V_out \
    op interface \
    ports { res_192_V_out_din { O 16 vector } res_192_V_out_full_n { I 1 bit } res_192_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 819 \
    name res_193_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_193_V_out \
    op interface \
    ports { res_193_V_out_din { O 16 vector } res_193_V_out_full_n { I 1 bit } res_193_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 820 \
    name res_194_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_194_V_out \
    op interface \
    ports { res_194_V_out_din { O 16 vector } res_194_V_out_full_n { I 1 bit } res_194_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 821 \
    name res_195_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_195_V_out \
    op interface \
    ports { res_195_V_out_din { O 16 vector } res_195_V_out_full_n { I 1 bit } res_195_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 822 \
    name res_196_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_196_V_out \
    op interface \
    ports { res_196_V_out_din { O 16 vector } res_196_V_out_full_n { I 1 bit } res_196_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 823 \
    name res_197_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_197_V_out \
    op interface \
    ports { res_197_V_out_din { O 16 vector } res_197_V_out_full_n { I 1 bit } res_197_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 824 \
    name res_198_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_198_V_out \
    op interface \
    ports { res_198_V_out_din { O 16 vector } res_198_V_out_full_n { I 1 bit } res_198_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 825 \
    name res_199_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_199_V_out \
    op interface \
    ports { res_199_V_out_din { O 16 vector } res_199_V_out_full_n { I 1 bit } res_199_V_out_write { O 1 bit } } \
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
    ports { ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
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
    id -3 \
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


