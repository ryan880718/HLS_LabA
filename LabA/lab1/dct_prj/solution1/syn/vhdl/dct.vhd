-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2020.1
-- Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity dct is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    input_r_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    input_r_ce0 : OUT STD_LOGIC;
    input_r_q0 : IN STD_LOGIC_VECTOR (15 downto 0);
    output_r_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    output_r_ce0 : OUT STD_LOGIC;
    output_r_we0 : OUT STD_LOGIC;
    output_r_d0 : OUT STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of dct is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "dct,hls_ip_2020_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xcvu9p-flgb2104-1-e,HLS_INPUT_CLOCK=8.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.143000,HLS_SYN_LAT=2935,HLS_SYN_TPT=none,HLS_SYN_MEM=5,HLS_SYN_DSP=1,HLS_SYN_FF=246,HLS_SYN_LUT=964,HLS_VERSION=2020_1}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (7 downto 0) := "00000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (7 downto 0) := "00000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (7 downto 0) := "00001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (7 downto 0) := "00010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (7 downto 0) := "00100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (7 downto 0) := "01000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (7 downto 0) := "10000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv4_8 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal r_fu_166_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal r_reg_313 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal shl_ln_fu_176_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal shl_ln_reg_318 : STD_LOGIC_VECTOR (5 downto 0);
    signal icmp_ln101_fu_160_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal zext_ln103_1_fu_192_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal zext_ln103_1_reg_323 : STD_LOGIC_VECTOR (7 downto 0);
    signal c_fu_206_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal c_reg_331 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal icmp_ln103_fu_200_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln104_1_fu_226_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal add_ln104_1_reg_341 : STD_LOGIC_VECTOR (7 downto 0);
    signal r_1_fu_241_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal r_1_reg_349 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal zext_ln116_fu_255_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal zext_ln116_reg_354 : STD_LOGIC_VECTOR (7 downto 0);
    signal icmp_ln113_fu_235_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal shl_ln1_fu_263_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal shl_ln1_reg_359 : STD_LOGIC_VECTOR (5 downto 0);
    signal c_1_fu_281_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal c_1_reg_367 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal icmp_ln115_fu_275_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln116_fu_301_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal add_ln116_reg_377 : STD_LOGIC_VECTOR (5 downto 0);
    signal buf_2d_in_address0 : STD_LOGIC_VECTOR (5 downto 0);
    signal buf_2d_in_ce0 : STD_LOGIC;
    signal buf_2d_in_we0 : STD_LOGIC;
    signal buf_2d_in_q0 : STD_LOGIC_VECTOR (15 downto 0);
    signal buf_2d_out_address0 : STD_LOGIC_VECTOR (5 downto 0);
    signal buf_2d_out_ce0 : STD_LOGIC;
    signal buf_2d_out_we0 : STD_LOGIC;
    signal buf_2d_out_q0 : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_dct_2d_fu_152_ap_start : STD_LOGIC;
    signal grp_dct_2d_fu_152_ap_done : STD_LOGIC;
    signal grp_dct_2d_fu_152_ap_idle : STD_LOGIC;
    signal grp_dct_2d_fu_152_ap_ready : STD_LOGIC;
    signal grp_dct_2d_fu_152_in_block_address0 : STD_LOGIC_VECTOR (5 downto 0);
    signal grp_dct_2d_fu_152_in_block_ce0 : STD_LOGIC;
    signal grp_dct_2d_fu_152_out_block_address0 : STD_LOGIC_VECTOR (5 downto 0);
    signal grp_dct_2d_fu_152_out_block_ce0 : STD_LOGIC;
    signal grp_dct_2d_fu_152_out_block_we0 : STD_LOGIC;
    signal grp_dct_2d_fu_152_out_block_d0 : STD_LOGIC_VECTOR (15 downto 0);
    signal r_0_i_reg_108 : STD_LOGIC_VECTOR (3 downto 0);
    signal c_0_i_reg_119 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal r_0_i2_reg_130 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal c_0_i4_reg_141 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal grp_dct_2d_fu_152_ap_start_reg : STD_LOGIC := '0';
    signal zext_ln104_fu_217_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln104_2_fu_231_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln116_3_fu_296_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln116_2_fu_306_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal trunc_ln104_fu_172_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_9_fu_184_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal zext_ln103_fu_196_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal add_ln104_fu_212_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal zext_ln104_1_fu_222_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_s_fu_247_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal trunc_ln116_fu_259_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal zext_ln116_1_fu_287_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal add_ln116_1_fu_291_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal zext_ln115_fu_271_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (7 downto 0);

    component dct_2d IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        in_block_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
        in_block_ce0 : OUT STD_LOGIC;
        in_block_q0 : IN STD_LOGIC_VECTOR (15 downto 0);
        out_block_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
        out_block_ce0 : OUT STD_LOGIC;
        out_block_we0 : OUT STD_LOGIC;
        out_block_d0 : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;


    component dct_2d_row_outbuf IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (5 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (15 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;



begin
    buf_2d_in_U : component dct_2d_row_outbuf
    generic map (
        DataWidth => 16,
        AddressRange => 64,
        AddressWidth => 6)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => buf_2d_in_address0,
        ce0 => buf_2d_in_ce0,
        we0 => buf_2d_in_we0,
        d0 => input_r_q0,
        q0 => buf_2d_in_q0);

    buf_2d_out_U : component dct_2d_row_outbuf
    generic map (
        DataWidth => 16,
        AddressRange => 64,
        AddressWidth => 6)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => buf_2d_out_address0,
        ce0 => buf_2d_out_ce0,
        we0 => buf_2d_out_we0,
        d0 => grp_dct_2d_fu_152_out_block_d0,
        q0 => buf_2d_out_q0);

    grp_dct_2d_fu_152 : component dct_2d
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_dct_2d_fu_152_ap_start,
        ap_done => grp_dct_2d_fu_152_ap_done,
        ap_idle => grp_dct_2d_fu_152_ap_idle,
        ap_ready => grp_dct_2d_fu_152_ap_ready,
        in_block_address0 => grp_dct_2d_fu_152_in_block_address0,
        in_block_ce0 => grp_dct_2d_fu_152_in_block_ce0,
        in_block_q0 => buf_2d_in_q0,
        out_block_address0 => grp_dct_2d_fu_152_out_block_address0,
        out_block_ce0 => grp_dct_2d_fu_152_out_block_ce0,
        out_block_we0 => grp_dct_2d_fu_152_out_block_we0,
        out_block_d0 => grp_dct_2d_fu_152_out_block_d0);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    grp_dct_2d_fu_152_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_dct_2d_fu_152_ap_start_reg <= ap_const_logic_0;
            else
                if (((icmp_ln101_fu_160_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_dct_2d_fu_152_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_dct_2d_fu_152_ap_ready = ap_const_logic_1)) then 
                    grp_dct_2d_fu_152_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    c_0_i4_reg_141_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                c_0_i4_reg_141 <= c_1_reg_367;
            elsif (((icmp_ln113_fu_235_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                c_0_i4_reg_141 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    c_0_i_reg_119_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                c_0_i_reg_119 <= c_reg_331;
            elsif (((icmp_ln101_fu_160_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                c_0_i_reg_119 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    r_0_i2_reg_130_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln115_fu_275_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                r_0_i2_reg_130 <= r_1_reg_349;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state5) and (grp_dct_2d_fu_152_ap_done = ap_const_logic_1))) then 
                r_0_i2_reg_130 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    r_0_i_reg_108_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln103_fu_200_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                r_0_i_reg_108 <= r_reg_313;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                r_0_i_reg_108 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln103_fu_200_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                add_ln104_1_reg_341 <= add_ln104_1_fu_226_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln115_fu_275_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then
                add_ln116_reg_377 <= add_ln116_fu_301_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                c_1_reg_367 <= c_1_fu_281_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                c_reg_331 <= c_fu_206_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                r_1_reg_349 <= r_1_fu_241_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                r_reg_313 <= r_fu_166_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln113_fu_235_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    shl_ln1_reg_359(5 downto 3) <= shl_ln1_fu_263_p3(5 downto 3);
                    zext_ln116_reg_354(6 downto 3) <= zext_ln116_fu_255_p1(6 downto 3);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln101_fu_160_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    shl_ln_reg_318(5 downto 3) <= shl_ln_fu_176_p3(5 downto 3);
                    zext_ln103_1_reg_323(6 downto 3) <= zext_ln103_1_fu_192_p1(6 downto 3);
            end if;
        end if;
    end process;
    shl_ln_reg_318(2 downto 0) <= "000";
    zext_ln103_1_reg_323(2 downto 0) <= "000";
    zext_ln103_1_reg_323(7) <= '0';
    zext_ln116_reg_354(2 downto 0) <= "000";
    zext_ln116_reg_354(7) <= '0';
    shl_ln1_reg_359(2 downto 0) <= "000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln101_fu_160_p2, ap_CS_fsm_state3, icmp_ln103_fu_200_p2, ap_CS_fsm_state6, icmp_ln113_fu_235_p2, ap_CS_fsm_state7, icmp_ln115_fu_275_p2, grp_dct_2d_fu_152_ap_done, ap_CS_fsm_state5)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln101_fu_160_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state3 => 
                if (((icmp_ln103_fu_200_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when ap_ST_fsm_state5 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state5) and (grp_dct_2d_fu_152_ap_done = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state6 => 
                if (((icmp_ln113_fu_235_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state7;
                end if;
            when ap_ST_fsm_state7 => 
                if (((icmp_ln115_fu_275_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state7))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state8;
                end if;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when others =>  
                ap_NS_fsm <= "XXXXXXXX";
        end case;
    end process;
    add_ln104_1_fu_226_p2 <= std_logic_vector(unsigned(zext_ln103_1_reg_323) + unsigned(zext_ln104_1_fu_222_p1));
    add_ln104_fu_212_p2 <= std_logic_vector(unsigned(zext_ln103_fu_196_p1) + unsigned(shl_ln_reg_318));
    add_ln116_1_fu_291_p2 <= std_logic_vector(unsigned(zext_ln116_reg_354) + unsigned(zext_ln116_1_fu_287_p1));
    add_ln116_fu_301_p2 <= std_logic_vector(unsigned(zext_ln115_fu_271_p1) + unsigned(shl_ln1_reg_359));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);

    ap_done_assign_proc : process(ap_CS_fsm_state6, icmp_ln113_fu_235_p2)
    begin
        if (((icmp_ln113_fu_235_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state6, icmp_ln113_fu_235_p2)
    begin
        if (((icmp_ln113_fu_235_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    buf_2d_in_address0_assign_proc : process(grp_dct_2d_fu_152_in_block_address0, ap_CS_fsm_state4, ap_CS_fsm_state5, zext_ln104_2_fu_231_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            buf_2d_in_address0 <= zext_ln104_2_fu_231_p1(6 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            buf_2d_in_address0 <= grp_dct_2d_fu_152_in_block_address0;
        else 
            buf_2d_in_address0 <= "XXXXXX";
        end if; 
    end process;


    buf_2d_in_ce0_assign_proc : process(grp_dct_2d_fu_152_in_block_ce0, ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            buf_2d_in_ce0 <= ap_const_logic_1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            buf_2d_in_ce0 <= grp_dct_2d_fu_152_in_block_ce0;
        else 
            buf_2d_in_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    buf_2d_in_we0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            buf_2d_in_we0 <= ap_const_logic_1;
        else 
            buf_2d_in_we0 <= ap_const_logic_0;
        end if; 
    end process;


    buf_2d_out_address0_assign_proc : process(ap_CS_fsm_state7, grp_dct_2d_fu_152_out_block_address0, ap_CS_fsm_state5, zext_ln116_3_fu_296_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            buf_2d_out_address0 <= zext_ln116_3_fu_296_p1(6 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            buf_2d_out_address0 <= grp_dct_2d_fu_152_out_block_address0;
        else 
            buf_2d_out_address0 <= "XXXXXX";
        end if; 
    end process;


    buf_2d_out_ce0_assign_proc : process(ap_CS_fsm_state7, grp_dct_2d_fu_152_out_block_ce0, ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            buf_2d_out_ce0 <= ap_const_logic_1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            buf_2d_out_ce0 <= grp_dct_2d_fu_152_out_block_ce0;
        else 
            buf_2d_out_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    buf_2d_out_we0_assign_proc : process(grp_dct_2d_fu_152_out_block_we0, ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            buf_2d_out_we0 <= grp_dct_2d_fu_152_out_block_we0;
        else 
            buf_2d_out_we0 <= ap_const_logic_0;
        end if; 
    end process;

    c_1_fu_281_p2 <= std_logic_vector(unsigned(c_0_i4_reg_141) + unsigned(ap_const_lv4_1));
    c_fu_206_p2 <= std_logic_vector(unsigned(c_0_i_reg_119) + unsigned(ap_const_lv4_1));
    grp_dct_2d_fu_152_ap_start <= grp_dct_2d_fu_152_ap_start_reg;
    icmp_ln101_fu_160_p2 <= "1" when (r_0_i_reg_108 = ap_const_lv4_8) else "0";
    icmp_ln103_fu_200_p2 <= "1" when (c_0_i_reg_119 = ap_const_lv4_8) else "0";
    icmp_ln113_fu_235_p2 <= "1" when (r_0_i2_reg_130 = ap_const_lv4_8) else "0";
    icmp_ln115_fu_275_p2 <= "1" when (c_0_i4_reg_141 = ap_const_lv4_8) else "0";
    input_r_address0 <= zext_ln104_fu_217_p1(6 - 1 downto 0);

    input_r_ce0_assign_proc : process(ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            input_r_ce0 <= ap_const_logic_1;
        else 
            input_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_r_address0 <= zext_ln116_2_fu_306_p1(6 - 1 downto 0);

    output_r_ce0_assign_proc : process(ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            output_r_ce0 <= ap_const_logic_1;
        else 
            output_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_r_d0 <= buf_2d_out_q0;

    output_r_we0_assign_proc : process(ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            output_r_we0 <= ap_const_logic_1;
        else 
            output_r_we0 <= ap_const_logic_0;
        end if; 
    end process;

    r_1_fu_241_p2 <= std_logic_vector(unsigned(r_0_i2_reg_130) + unsigned(ap_const_lv4_1));
    r_fu_166_p2 <= std_logic_vector(unsigned(r_0_i_reg_108) + unsigned(ap_const_lv4_1));
    shl_ln1_fu_263_p3 <= (trunc_ln116_fu_259_p1 & ap_const_lv3_0);
    shl_ln_fu_176_p3 <= (trunc_ln104_fu_172_p1 & ap_const_lv3_0);
    tmp_9_fu_184_p3 <= (r_0_i_reg_108 & ap_const_lv3_0);
    tmp_s_fu_247_p3 <= (r_0_i2_reg_130 & ap_const_lv3_0);
    trunc_ln104_fu_172_p1 <= r_0_i_reg_108(3 - 1 downto 0);
    trunc_ln116_fu_259_p1 <= r_0_i2_reg_130(3 - 1 downto 0);
    zext_ln103_1_fu_192_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_9_fu_184_p3),8));
    zext_ln103_fu_196_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(c_0_i_reg_119),6));
    zext_ln104_1_fu_222_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(c_0_i_reg_119),8));
    zext_ln104_2_fu_231_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln104_1_reg_341),64));
    zext_ln104_fu_217_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln104_fu_212_p2),64));
    zext_ln115_fu_271_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(c_0_i4_reg_141),6));
    zext_ln116_1_fu_287_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(c_0_i4_reg_141),8));
    zext_ln116_2_fu_306_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln116_reg_377),64));
    zext_ln116_3_fu_296_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln116_1_fu_291_p2),64));
    zext_ln116_fu_255_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_247_p3),8));
end behav;
