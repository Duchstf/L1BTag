-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity algo_b is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    input_0_V : IN STD_LOGIC_VECTOR (63 downto 0);
    input_1_V : IN STD_LOGIC_VECTOR (63 downto 0);
    input_2_V : IN STD_LOGIC_VECTOR (63 downto 0);
    input_3_V : IN STD_LOGIC_VECTOR (63 downto 0);
    input_4_V : IN STD_LOGIC_VECTOR (63 downto 0);
    input_5_V : IN STD_LOGIC_VECTOR (63 downto 0);
    input_6_V : IN STD_LOGIC_VECTOR (63 downto 0);
    input_7_V : IN STD_LOGIC_VECTOR (63 downto 0);
    input_8_V : IN STD_LOGIC_VECTOR (63 downto 0);
    input_9_V : IN STD_LOGIC_VECTOR (63 downto 0);
    output_0_V : OUT STD_LOGIC_VECTOR (63 downto 0) );
end;


architecture behav of algo_b is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "algo_b,hls_ip_2019_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xcvu9p-flgb2104-2-i,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=pipeline,HLS_SYN_CLOCK=4.484875,HLS_SYN_LAT=14,HLS_SYN_TPT=3,HLS_SYN_MEM=1,HLS_SYN_DSP=2014,HLS_SYN_FF=21818,HLS_SYN_LUT=140003,HLS_VERSION=2019_1}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_pp0_stage1 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_pp0_stage2 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv24_64 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000001100100";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter3 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter4 : STD_LOGIC := '0';
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_CS_fsm_pp0_stage2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage2 : signal is "none";
    signal ap_block_state3_pp0_stage2_iter0 : BOOLEAN;
    signal ap_block_state6_pp0_stage2_iter1 : BOOLEAN;
    signal ap_block_state9_pp0_stage2_iter2 : BOOLEAN;
    signal ap_block_state12_pp0_stage2_iter3 : BOOLEAN;
    signal ap_block_state15_pp0_stage2_iter4 : BOOLEAN;
    signal ap_block_pp0_stage2_11001 : BOOLEAN;
    signal ap_enable_reg_pp0_iter0_reg : STD_LOGIC := '0';
    signal ap_block_pp0_stage2_subdone : BOOLEAN;
    signal grp_myproject_fu_321_ap_start : STD_LOGIC;
    signal grp_myproject_fu_321_ap_done : STD_LOGIC;
    signal grp_myproject_fu_321_ap_idle : STD_LOGIC;
    signal grp_myproject_fu_321_ap_ready : STD_LOGIC;
    signal grp_myproject_fu_321_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal b_tag_input_V_make_inputs_10u_s_fu_328_ap_ready : STD_LOGIC;
    signal b_tag_input_V_make_inputs_10u_s_fu_328_ap_return : STD_LOGIC_VECTOR (2079 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal ap_block_pp0_stage1 : BOOLEAN;
    signal ap_block_pp0_stage2 : BOOLEAN;
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state4_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state7_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_state10_pp0_stage0_iter3 : BOOLEAN;
    signal ap_block_state13_pp0_stage0_iter4 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal ap_block_pp0_stage2_01001 : BOOLEAN;
    signal r_V_fu_357_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal r_V_fu_357_p2 : STD_LOGIC_VECTOR (23 downto 0);
    signal tmp_fu_363_p4 : STD_LOGIC_VECTOR (15 downto 0);
    signal sext_ln835_fu_373_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_idle_pp0_1to4 : STD_LOGIC;
    signal ap_block_state2_pp0_stage1_iter0 : BOOLEAN;
    signal ap_block_state5_pp0_stage1_iter1 : BOOLEAN;
    signal ap_block_state8_pp0_stage1_iter2 : BOOLEAN;
    signal ap_block_state11_pp0_stage1_iter3 : BOOLEAN;
    signal ap_block_state14_pp0_stage1_iter4 : BOOLEAN;
    signal ap_block_pp0_stage1_subdone : BOOLEAN;
    signal ap_block_pp0_stage1_11001 : BOOLEAN;
    signal ap_idle_pp0_0to3 : STD_LOGIC;
    signal ap_reset_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;
    signal r_V_fu_357_p00 : STD_LOGIC_VECTOR (23 downto 0);

    component myproject IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        conv1d_input_V_read : IN STD_LOGIC_VECTOR (2079 downto 0);
        ap_return : OUT STD_LOGIC_VECTOR (7 downto 0) );
    end component;


    component make_inputs_10u_s IS
    port (
        ap_ready : OUT STD_LOGIC;
        puppi_candidate_0_V_read : IN STD_LOGIC_VECTOR (63 downto 0);
        puppi_candidate_1_V_read : IN STD_LOGIC_VECTOR (63 downto 0);
        puppi_candidate_2_V_read : IN STD_LOGIC_VECTOR (63 downto 0);
        puppi_candidate_3_V_read : IN STD_LOGIC_VECTOR (63 downto 0);
        puppi_candidate_4_V_read : IN STD_LOGIC_VECTOR (63 downto 0);
        puppi_candidate_5_V_read : IN STD_LOGIC_VECTOR (63 downto 0);
        puppi_candidate_6_V_read : IN STD_LOGIC_VECTOR (63 downto 0);
        puppi_candidate_7_V_read : IN STD_LOGIC_VECTOR (63 downto 0);
        puppi_candidate_8_V_read : IN STD_LOGIC_VECTOR (63 downto 0);
        puppi_candidate_9_V_read : IN STD_LOGIC_VECTOR (63 downto 0);
        ap_return : OUT STD_LOGIC_VECTOR (2079 downto 0) );
    end component;



begin
    grp_myproject_fu_321 : component myproject
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_myproject_fu_321_ap_start,
        ap_done => grp_myproject_fu_321_ap_done,
        ap_idle => grp_myproject_fu_321_ap_idle,
        ap_ready => grp_myproject_fu_321_ap_ready,
        conv1d_input_V_read => b_tag_input_V_make_inputs_10u_s_fu_328_ap_return,
        ap_return => grp_myproject_fu_321_ap_return);

    b_tag_input_V_make_inputs_10u_s_fu_328 : component make_inputs_10u_s
    port map (
        ap_ready => b_tag_input_V_make_inputs_10u_s_fu_328_ap_ready,
        puppi_candidate_0_V_read => input_0_V,
        puppi_candidate_1_V_read => input_1_V,
        puppi_candidate_2_V_read => input_2_V,
        puppi_candidate_3_V_read => input_3_V,
        puppi_candidate_4_V_read => input_4_V,
        puppi_candidate_5_V_read => input_5_V,
        puppi_candidate_6_V_read => input_6_V,
        puppi_candidate_7_V_read => input_7_V,
        puppi_candidate_8_V_read => input_8_V,
        puppi_candidate_9_V_read => input_9_V,
        ap_return => b_tag_input_V_make_inputs_10u_s_fu_328_ap_return);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0_reg <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) then 
                    ap_enable_reg_pp0_iter0_reg <= ap_start;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_const_boolean_0 = ap_block_pp0_stage2_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2))) then 
                    ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if (((ap_const_boolean_0 = ap_block_pp0_stage2_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2))) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter3_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter3 <= ap_const_logic_0;
            else
                if (((ap_const_boolean_0 = ap_block_pp0_stage2_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2))) then 
                    ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter4_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter4 <= ap_const_logic_0;
            else
                if (((ap_const_boolean_0 = ap_block_pp0_stage2_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2))) then 
                    ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
                end if; 
            end if;
        end if;
    end process;


    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_block_pp0_stage2_subdone, ap_block_pp0_stage0_subdone, ap_idle_pp0_1to4, ap_block_pp0_stage1_subdone, ap_reset_idle_pp0)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_pp0_stage0 => 
                if ((not(((ap_start = ap_const_logic_0) and (ap_idle_pp0_1to4 = ap_const_logic_1))) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage1;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_pp0_stage1 => 
                if ((ap_const_boolean_0 = ap_block_pp0_stage1_subdone)) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage2;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage1;
                end if;
            when ap_ST_fsm_pp0_stage2 => 
                if ((((ap_const_boolean_0 = ap_block_pp0_stage2_subdone) and (ap_reset_idle_pp0 = ap_const_logic_0)) or ((ap_const_boolean_0 = ap_block_pp0_stage2_subdone) and (ap_reset_idle_pp0 = ap_const_logic_1)))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage2;
                end if;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(0);
    ap_CS_fsm_pp0_stage2 <= ap_CS_fsm(2);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_11001_assign_proc : process(ap_start, ap_enable_reg_pp0_iter0)
    begin
                ap_block_pp0_stage0_11001 <= ((ap_start = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(ap_start, ap_enable_reg_pp0_iter0)
    begin
                ap_block_pp0_stage0_subdone <= ((ap_start = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1));
    end process;

        ap_block_pp0_stage1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage1_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage1_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage2_01001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage2_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage2_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state10_pp0_stage0_iter3 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state11_pp0_stage1_iter3 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state12_pp0_stage2_iter3 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state13_pp0_stage0_iter4 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state14_pp0_stage1_iter4 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state15_pp0_stage2_iter4 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_state1_pp0_stage0_iter0_assign_proc : process(ap_start)
    begin
                ap_block_state1_pp0_stage0_iter0 <= (ap_start = ap_const_logic_0);
    end process;

        ap_block_state2_pp0_stage1_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage2_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state4_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state5_pp0_stage1_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state6_pp0_stage2_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state7_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state8_pp0_stage1_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state9_pp0_stage2_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_done_assign_proc : process(ap_enable_reg_pp0_iter4, ap_CS_fsm_pp0_stage2, ap_block_pp0_stage2_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage2_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2) and (ap_enable_reg_pp0_iter4 = ap_const_logic_1))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_enable_reg_pp0_iter0_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0_reg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_pp0_stage0)) then 
            ap_enable_reg_pp0_iter0 <= ap_start;
        else 
            ap_enable_reg_pp0_iter0 <= ap_enable_reg_pp0_iter0_reg;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_idle_pp0)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_idle_pp0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, ap_enable_reg_pp0_iter4)
    begin
        if (((ap_enable_reg_pp0_iter4 = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_0to3_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3)
    begin
        if (((ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0_0to3 <= ap_const_logic_1;
        else 
            ap_idle_pp0_0to3 <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_1to4_assign_proc : process(ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, ap_enable_reg_pp0_iter4)
    begin
        if (((ap_enable_reg_pp0_iter4 = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) then 
            ap_idle_pp0_1to4 <= ap_const_logic_1;
        else 
            ap_idle_pp0_1to4 <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage2, ap_block_pp0_stage2_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage2_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage2) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_reset_idle_pp0_assign_proc : process(ap_start, ap_idle_pp0_0to3)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_idle_pp0_0to3 = ap_const_logic_1))) then 
            ap_reset_idle_pp0 <= ap_const_logic_1;
        else 
            ap_reset_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    grp_myproject_fu_321_ap_start_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_start = ap_const_logic_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            grp_myproject_fu_321_ap_start <= ap_const_logic_1;
        else 
            grp_myproject_fu_321_ap_start <= ap_const_logic_0;
        end if; 
    end process;

        output_0_V <= std_logic_vector(IEEE.numeric_std.resize(signed(sext_ln835_fu_373_p1),64));

    r_V_fu_357_p0 <= r_V_fu_357_p00(8 - 1 downto 0);
    r_V_fu_357_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(grp_myproject_fu_321_ap_return),24));
    r_V_fu_357_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(r_V_fu_357_p0) * unsigned(ap_const_lv24_64), 24));
        sext_ln835_fu_373_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_fu_363_p4),17));

    tmp_fu_363_p4 <= r_V_fu_357_p2(23 downto 8);
end behav;
