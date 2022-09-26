-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_rom is 
    generic(
             DWIDTH     : integer := 180; 
             AWIDTH     : integer := 3; 
             MEM_SIZE    : integer := 5
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "111000100010000101100000011100000001000111101111100110100010000100010001000011011001101010001001100110110010110111101001110110011111101011111111000011000111001111100001010100000001", 
    1 => "101011111101110010100000010101100001100011100001100010111000001000111011000101011101001111111001110000000111011111110101101000111000010111011001100000000001000110010001011001000100", 
    2 => "001100101110010111110110000000011011001011011010011110000101101000100110000011111001001100000111010001010011000000010110111101000100100111011101000000010001111110100010111001100100", 
    3 => "000100000001010011101010010000001110000010000000101101001001000101100101001100111001000001000011000100111000001100010001010011000000100111101010001000101000110011000010101000001100", 
    4 => "100000000100000110110100010001101100100101101111110111101110011111110101100100010101011000100000011001000000010101011111010000110110101000000110100010111000110101001011000111011111" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213 is
    generic (
        DataWidth : INTEGER := 180;
        AddressRange : INTEGER := 5;
        AddressWidth : INTEGER := 3);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213 is
    component dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_rom_U :  component dense_resource_rf_leq_nin_0_1_0_1_0_8_w18_V213_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


