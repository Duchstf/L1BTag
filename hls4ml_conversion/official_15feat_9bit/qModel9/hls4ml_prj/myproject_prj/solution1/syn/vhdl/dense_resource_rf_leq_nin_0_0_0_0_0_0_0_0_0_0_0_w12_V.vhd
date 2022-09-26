-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_w12_V_rom is 
    generic(
             DWIDTH     : integer := 360; 
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


architecture rtl of dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_w12_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000111100000101010000000111000011100000101100010001011010010010011010001011111111011001011010100100011111101000010111000000001010110000100000000001101010010100110101101001000100100111101010000011001100011001110011001011010100000110111000011001011111111101010111000010111010111101101100010000100010000110001000011100011111010000010100110100101111110001000101101", 
    1 => "010110100000010010000010000010001011111000111111100110001111010010010010100001111100000011100000000001001001111000010000100011001001110000001100001010011001101101110101111000100000101100110000000100110011001010100011101011101111000010101010001001100110100110000001101011000111111111101010010111111110111010111100100010000100111111011111011000001100111000111001", 
    2 => "111001000000101010000010000000110100000010001000110100111111010011110101111010101100000100100000010011010111010101010000010011001011001110100101101100110111111010000000100011011010111001101111110111111001111000101010111101010110101100000110100010100011000101101110101101000100000000110001111000110110010001100110000011110001000100100000110010000111011010001110", 
    3 => "001001111111010001001001111010010101111000100101010001000001011000111100111100111100001010111001000010010001000101010000010000110100000110001111010000011101101010010101111000011001000001110000011000000100101000100101111010001111100011101110110000101100000110101001110000110110001110010011000111100110110100111111011011100100111000100111000000111110101001001111", 
    4 => "110101100011111101111110100111011011101101001011110111011110110110010001000011000011100100110010011101001110001001111101110001110110011101011111111000001011111111011011111011001001101000001011111110000000111100110011000100101011101100100000000001001101001010111110110010111101010000000010111111000011111100011111101000100000111011100001000111110011110111011110" );


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

entity dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_w12_V is
    generic (
        DataWidth : INTEGER := 360;
        AddressRange : INTEGER := 5;
        AddressWidth : INTEGER := 3);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_w12_V is
    component dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_w12_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_w12_V_rom_U :  component dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_w12_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


