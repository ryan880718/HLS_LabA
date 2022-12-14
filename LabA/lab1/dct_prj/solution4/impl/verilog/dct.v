// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="dct,hls_ip_2020_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xcvu9p-flgb2104-1-e,HLS_INPUT_CLOCK=8.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.904187,HLS_SYN_LAT=477,HLS_SYN_TPT=none,HLS_SYN_MEM=3,HLS_SYN_DSP=8,HLS_SYN_FF=1003,HLS_SYN_LUT=1879,HLS_VERSION=2020_1}" *)

module dct (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        input_r_address0,
        input_r_ce0,
        input_r_q0,
        output_r_address0,
        output_r_ce0,
        output_r_we0,
        output_r_d0
);

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_state2 = 6'd2;
parameter    ap_ST_fsm_state3 = 6'd4;
parameter    ap_ST_fsm_state4 = 6'd8;
parameter    ap_ST_fsm_pp0_stage0 = 6'd16;
parameter    ap_ST_fsm_state7 = 6'd32;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [5:0] input_r_address0;
output   input_r_ce0;
input  [15:0] input_r_q0;
output  [5:0] output_r_address0;
output   output_r_ce0;
output   output_r_we0;
output  [15:0] output_r_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg output_r_ce0;
reg output_r_we0;

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [6:0] indvar_flatten_reg_138;
reg   [3:0] r_0_i_reg_149;
reg   [3:0] c_0_i_reg_160;
wire   [0:0] icmp_ln115_fu_222_p2;
reg   [0:0] icmp_ln115_reg_321;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state5_pp0_stage0_iter0;
wire    ap_block_state6_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
wire   [6:0] add_ln115_fu_228_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [3:0] select_ln115_1_fu_254_p3;
reg   [3:0] select_ln115_1_reg_330;
wire   [5:0] add_ln118_fu_305_p2;
reg   [5:0] add_ln118_reg_340;
wire   [3:0] c_fu_311_p2;
wire    ap_CS_fsm_state4;
wire    grp_dct_2d_fu_171_ap_ready;
wire    grp_dct_2d_fu_171_ap_done;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state5;
reg    ap_enable_reg_pp0_iter1;
reg   [2:0] buf_2d_in_0_address0;
reg    buf_2d_in_0_ce0;
reg    buf_2d_in_0_we0;
wire   [15:0] buf_2d_in_0_q0;
reg   [2:0] buf_2d_in_1_address0;
reg    buf_2d_in_1_ce0;
reg    buf_2d_in_1_we0;
wire   [15:0] buf_2d_in_1_q0;
reg   [2:0] buf_2d_in_2_address0;
reg    buf_2d_in_2_ce0;
reg    buf_2d_in_2_we0;
wire   [15:0] buf_2d_in_2_q0;
reg   [2:0] buf_2d_in_3_address0;
reg    buf_2d_in_3_ce0;
reg    buf_2d_in_3_we0;
wire   [15:0] buf_2d_in_3_q0;
reg   [2:0] buf_2d_in_4_address0;
reg    buf_2d_in_4_ce0;
reg    buf_2d_in_4_we0;
wire   [15:0] buf_2d_in_4_q0;
reg   [2:0] buf_2d_in_5_address0;
reg    buf_2d_in_5_ce0;
reg    buf_2d_in_5_we0;
wire   [15:0] buf_2d_in_5_q0;
reg   [2:0] buf_2d_in_6_address0;
reg    buf_2d_in_6_ce0;
reg    buf_2d_in_6_we0;
wire   [15:0] buf_2d_in_6_q0;
reg   [2:0] buf_2d_in_7_address0;
reg    buf_2d_in_7_ce0;
reg    buf_2d_in_7_we0;
wire   [15:0] buf_2d_in_7_q0;
reg   [5:0] buf_2d_out_address0;
reg    buf_2d_out_ce0;
reg    buf_2d_out_we0;
wire   [15:0] buf_2d_out_q0;
wire    grp_dct_2d_fu_171_ap_start;
wire    grp_dct_2d_fu_171_ap_idle;
wire   [2:0] grp_dct_2d_fu_171_in_block_0_address0;
wire    grp_dct_2d_fu_171_in_block_0_ce0;
wire   [2:0] grp_dct_2d_fu_171_in_block_1_address0;
wire    grp_dct_2d_fu_171_in_block_1_ce0;
wire   [2:0] grp_dct_2d_fu_171_in_block_2_address0;
wire    grp_dct_2d_fu_171_in_block_2_ce0;
wire   [2:0] grp_dct_2d_fu_171_in_block_3_address0;
wire    grp_dct_2d_fu_171_in_block_3_ce0;
wire   [2:0] grp_dct_2d_fu_171_in_block_4_address0;
wire    grp_dct_2d_fu_171_in_block_4_ce0;
wire   [2:0] grp_dct_2d_fu_171_in_block_5_address0;
wire    grp_dct_2d_fu_171_in_block_5_ce0;
wire   [2:0] grp_dct_2d_fu_171_in_block_6_address0;
wire    grp_dct_2d_fu_171_in_block_6_ce0;
wire   [2:0] grp_dct_2d_fu_171_in_block_7_address0;
wire    grp_dct_2d_fu_171_in_block_7_ce0;
wire   [5:0] grp_dct_2d_fu_171_out_block_address0;
wire    grp_dct_2d_fu_171_out_block_ce0;
wire    grp_dct_2d_fu_171_out_block_we0;
wire   [15:0] grp_dct_2d_fu_171_out_block_d0;
wire    grp_read_data_fu_200_ap_start;
wire    grp_read_data_fu_200_ap_done;
wire    grp_read_data_fu_200_ap_idle;
wire    grp_read_data_fu_200_ap_ready;
wire   [5:0] grp_read_data_fu_200_input_r_address0;
wire    grp_read_data_fu_200_input_r_ce0;
wire   [2:0] grp_read_data_fu_200_buf_0_address0;
wire    grp_read_data_fu_200_buf_0_ce0;
wire    grp_read_data_fu_200_buf_0_we0;
wire   [15:0] grp_read_data_fu_200_buf_0_d0;
wire   [2:0] grp_read_data_fu_200_buf_1_address0;
wire    grp_read_data_fu_200_buf_1_ce0;
wire    grp_read_data_fu_200_buf_1_we0;
wire   [15:0] grp_read_data_fu_200_buf_1_d0;
wire   [2:0] grp_read_data_fu_200_buf_2_address0;
wire    grp_read_data_fu_200_buf_2_ce0;
wire    grp_read_data_fu_200_buf_2_we0;
wire   [15:0] grp_read_data_fu_200_buf_2_d0;
wire   [2:0] grp_read_data_fu_200_buf_3_address0;
wire    grp_read_data_fu_200_buf_3_ce0;
wire    grp_read_data_fu_200_buf_3_we0;
wire   [15:0] grp_read_data_fu_200_buf_3_d0;
wire   [2:0] grp_read_data_fu_200_buf_4_address0;
wire    grp_read_data_fu_200_buf_4_ce0;
wire    grp_read_data_fu_200_buf_4_we0;
wire   [15:0] grp_read_data_fu_200_buf_4_d0;
wire   [2:0] grp_read_data_fu_200_buf_5_address0;
wire    grp_read_data_fu_200_buf_5_ce0;
wire    grp_read_data_fu_200_buf_5_we0;
wire   [15:0] grp_read_data_fu_200_buf_5_d0;
wire   [2:0] grp_read_data_fu_200_buf_6_address0;
wire    grp_read_data_fu_200_buf_6_ce0;
wire    grp_read_data_fu_200_buf_6_we0;
wire   [15:0] grp_read_data_fu_200_buf_6_d0;
wire   [2:0] grp_read_data_fu_200_buf_7_address0;
wire    grp_read_data_fu_200_buf_7_ce0;
wire    grp_read_data_fu_200_buf_7_we0;
wire   [15:0] grp_read_data_fu_200_buf_7_d0;
reg   [3:0] ap_phi_mux_r_0_i_phi_fu_153_p4;
wire    ap_block_pp0_stage0;
reg    grp_dct_2d_fu_171_ap_start_reg;
wire    ap_CS_fsm_state3;
reg    grp_read_data_fu_200_ap_start_reg;
wire    ap_CS_fsm_state2;
wire   [63:0] zext_ln118_1_fu_300_p1;
wire   [63:0] zext_ln118_2_fu_317_p1;
wire   [0:0] icmp_ln117_fu_240_p2;
wire   [3:0] r_fu_234_p2;
wire   [6:0] tmp_fu_262_p3;
wire   [2:0] trunc_ln115_fu_274_p1;
wire   [3:0] select_ln115_fu_246_p3;
wire   [7:0] zext_ln115_fu_270_p1;
wire   [7:0] zext_ln118_fu_290_p1;
wire   [7:0] add_ln118_1_fu_294_p2;
wire   [5:0] zext_ln117_fu_286_p1;
wire   [5:0] shl_ln118_mid2_fu_278_p3;
wire    ap_CS_fsm_state7;
reg   [5:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 6'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 grp_dct_2d_fu_171_ap_start_reg = 1'b0;
#0 grp_read_data_fu_200_ap_start_reg = 1'b0;
end

dct_2d_col_inbuf_0 #(
    .DataWidth( 16 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
buf_2d_in_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_2d_in_0_address0),
    .ce0(buf_2d_in_0_ce0),
    .we0(buf_2d_in_0_we0),
    .d0(grp_read_data_fu_200_buf_0_d0),
    .q0(buf_2d_in_0_q0)
);

dct_2d_col_inbuf_0 #(
    .DataWidth( 16 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
buf_2d_in_1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_2d_in_1_address0),
    .ce0(buf_2d_in_1_ce0),
    .we0(buf_2d_in_1_we0),
    .d0(grp_read_data_fu_200_buf_1_d0),
    .q0(buf_2d_in_1_q0)
);

dct_2d_col_inbuf_0 #(
    .DataWidth( 16 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
buf_2d_in_2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_2d_in_2_address0),
    .ce0(buf_2d_in_2_ce0),
    .we0(buf_2d_in_2_we0),
    .d0(grp_read_data_fu_200_buf_2_d0),
    .q0(buf_2d_in_2_q0)
);

dct_2d_col_inbuf_0 #(
    .DataWidth( 16 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
buf_2d_in_3_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_2d_in_3_address0),
    .ce0(buf_2d_in_3_ce0),
    .we0(buf_2d_in_3_we0),
    .d0(grp_read_data_fu_200_buf_3_d0),
    .q0(buf_2d_in_3_q0)
);

dct_2d_col_inbuf_0 #(
    .DataWidth( 16 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
buf_2d_in_4_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_2d_in_4_address0),
    .ce0(buf_2d_in_4_ce0),
    .we0(buf_2d_in_4_we0),
    .d0(grp_read_data_fu_200_buf_4_d0),
    .q0(buf_2d_in_4_q0)
);

dct_2d_col_inbuf_0 #(
    .DataWidth( 16 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
buf_2d_in_5_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_2d_in_5_address0),
    .ce0(buf_2d_in_5_ce0),
    .we0(buf_2d_in_5_we0),
    .d0(grp_read_data_fu_200_buf_5_d0),
    .q0(buf_2d_in_5_q0)
);

dct_2d_col_inbuf_0 #(
    .DataWidth( 16 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
buf_2d_in_6_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_2d_in_6_address0),
    .ce0(buf_2d_in_6_ce0),
    .we0(buf_2d_in_6_we0),
    .d0(grp_read_data_fu_200_buf_6_d0),
    .q0(buf_2d_in_6_q0)
);

dct_2d_col_inbuf_0 #(
    .DataWidth( 16 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
buf_2d_in_7_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_2d_in_7_address0),
    .ce0(buf_2d_in_7_ce0),
    .we0(buf_2d_in_7_we0),
    .d0(grp_read_data_fu_200_buf_7_d0),
    .q0(buf_2d_in_7_q0)
);

dct_2d_row_outbuf #(
    .DataWidth( 16 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
buf_2d_out_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(buf_2d_out_address0),
    .ce0(buf_2d_out_ce0),
    .we0(buf_2d_out_we0),
    .d0(grp_dct_2d_fu_171_out_block_d0),
    .q0(buf_2d_out_q0)
);

dct_2d grp_dct_2d_fu_171(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_dct_2d_fu_171_ap_start),
    .ap_done(grp_dct_2d_fu_171_ap_done),
    .ap_idle(grp_dct_2d_fu_171_ap_idle),
    .ap_ready(grp_dct_2d_fu_171_ap_ready),
    .in_block_0_address0(grp_dct_2d_fu_171_in_block_0_address0),
    .in_block_0_ce0(grp_dct_2d_fu_171_in_block_0_ce0),
    .in_block_0_q0(buf_2d_in_0_q0),
    .in_block_1_address0(grp_dct_2d_fu_171_in_block_1_address0),
    .in_block_1_ce0(grp_dct_2d_fu_171_in_block_1_ce0),
    .in_block_1_q0(buf_2d_in_1_q0),
    .in_block_2_address0(grp_dct_2d_fu_171_in_block_2_address0),
    .in_block_2_ce0(grp_dct_2d_fu_171_in_block_2_ce0),
    .in_block_2_q0(buf_2d_in_2_q0),
    .in_block_3_address0(grp_dct_2d_fu_171_in_block_3_address0),
    .in_block_3_ce0(grp_dct_2d_fu_171_in_block_3_ce0),
    .in_block_3_q0(buf_2d_in_3_q0),
    .in_block_4_address0(grp_dct_2d_fu_171_in_block_4_address0),
    .in_block_4_ce0(grp_dct_2d_fu_171_in_block_4_ce0),
    .in_block_4_q0(buf_2d_in_4_q0),
    .in_block_5_address0(grp_dct_2d_fu_171_in_block_5_address0),
    .in_block_5_ce0(grp_dct_2d_fu_171_in_block_5_ce0),
    .in_block_5_q0(buf_2d_in_5_q0),
    .in_block_6_address0(grp_dct_2d_fu_171_in_block_6_address0),
    .in_block_6_ce0(grp_dct_2d_fu_171_in_block_6_ce0),
    .in_block_6_q0(buf_2d_in_6_q0),
    .in_block_7_address0(grp_dct_2d_fu_171_in_block_7_address0),
    .in_block_7_ce0(grp_dct_2d_fu_171_in_block_7_ce0),
    .in_block_7_q0(buf_2d_in_7_q0),
    .out_block_address0(grp_dct_2d_fu_171_out_block_address0),
    .out_block_ce0(grp_dct_2d_fu_171_out_block_ce0),
    .out_block_we0(grp_dct_2d_fu_171_out_block_we0),
    .out_block_d0(grp_dct_2d_fu_171_out_block_d0)
);

read_data grp_read_data_fu_200(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_read_data_fu_200_ap_start),
    .ap_done(grp_read_data_fu_200_ap_done),
    .ap_idle(grp_read_data_fu_200_ap_idle),
    .ap_ready(grp_read_data_fu_200_ap_ready),
    .input_r_address0(grp_read_data_fu_200_input_r_address0),
    .input_r_ce0(grp_read_data_fu_200_input_r_ce0),
    .input_r_q0(input_r_q0),
    .buf_0_address0(grp_read_data_fu_200_buf_0_address0),
    .buf_0_ce0(grp_read_data_fu_200_buf_0_ce0),
    .buf_0_we0(grp_read_data_fu_200_buf_0_we0),
    .buf_0_d0(grp_read_data_fu_200_buf_0_d0),
    .buf_1_address0(grp_read_data_fu_200_buf_1_address0),
    .buf_1_ce0(grp_read_data_fu_200_buf_1_ce0),
    .buf_1_we0(grp_read_data_fu_200_buf_1_we0),
    .buf_1_d0(grp_read_data_fu_200_buf_1_d0),
    .buf_2_address0(grp_read_data_fu_200_buf_2_address0),
    .buf_2_ce0(grp_read_data_fu_200_buf_2_ce0),
    .buf_2_we0(grp_read_data_fu_200_buf_2_we0),
    .buf_2_d0(grp_read_data_fu_200_buf_2_d0),
    .buf_3_address0(grp_read_data_fu_200_buf_3_address0),
    .buf_3_ce0(grp_read_data_fu_200_buf_3_ce0),
    .buf_3_we0(grp_read_data_fu_200_buf_3_we0),
    .buf_3_d0(grp_read_data_fu_200_buf_3_d0),
    .buf_4_address0(grp_read_data_fu_200_buf_4_address0),
    .buf_4_ce0(grp_read_data_fu_200_buf_4_ce0),
    .buf_4_we0(grp_read_data_fu_200_buf_4_we0),
    .buf_4_d0(grp_read_data_fu_200_buf_4_d0),
    .buf_5_address0(grp_read_data_fu_200_buf_5_address0),
    .buf_5_ce0(grp_read_data_fu_200_buf_5_ce0),
    .buf_5_we0(grp_read_data_fu_200_buf_5_we0),
    .buf_5_d0(grp_read_data_fu_200_buf_5_d0),
    .buf_6_address0(grp_read_data_fu_200_buf_6_address0),
    .buf_6_ce0(grp_read_data_fu_200_buf_6_ce0),
    .buf_6_we0(grp_read_data_fu_200_buf_6_we0),
    .buf_6_d0(grp_read_data_fu_200_buf_6_d0),
    .buf_7_address0(grp_read_data_fu_200_buf_7_address0),
    .buf_7_ce0(grp_read_data_fu_200_buf_7_ce0),
    .buf_7_we0(grp_read_data_fu_200_buf_7_we0),
    .buf_7_d0(grp_read_data_fu_200_buf_7_d0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state5) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((grp_dct_2d_fu_171_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state5))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state5);
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((grp_dct_2d_fu_171_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_dct_2d_fu_171_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state3)) begin
            grp_dct_2d_fu_171_ap_start_reg <= 1'b1;
        end else if ((grp_dct_2d_fu_171_ap_ready == 1'b1)) begin
            grp_dct_2d_fu_171_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_read_data_fu_200_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            grp_read_data_fu_200_ap_start_reg <= 1'b1;
        end else if ((grp_read_data_fu_200_ap_ready == 1'b1)) begin
            grp_read_data_fu_200_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln115_fu_222_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        c_0_i_reg_160 <= c_fu_311_p2;
    end else if (((grp_dct_2d_fu_171_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
        c_0_i_reg_160 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln115_fu_222_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        indvar_flatten_reg_138 <= add_ln115_fu_228_p2;
    end else if (((grp_dct_2d_fu_171_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
        indvar_flatten_reg_138 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln115_reg_321 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        r_0_i_reg_149 <= select_ln115_1_reg_330;
    end else if (((grp_dct_2d_fu_171_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
        r_0_i_reg_149 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln115_fu_222_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        add_ln118_reg_340 <= add_ln118_fu_305_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln115_reg_321 <= icmp_ln115_fu_222_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln115_fu_222_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        select_ln115_1_reg_330 <= select_ln115_1_fu_254_p3;
    end
end

always @ (*) begin
    if ((icmp_ln115_fu_222_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state5 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state5 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln115_reg_321 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_r_0_i_phi_fu_153_p4 = select_ln115_1_reg_330;
    end else begin
        ap_phi_mux_r_0_i_phi_fu_153_p4 = r_0_i_reg_149;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_0_address0 = grp_read_data_fu_200_buf_0_address0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_0_address0 = grp_dct_2d_fu_171_in_block_0_address0;
    end else begin
        buf_2d_in_0_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_0_ce0 = grp_read_data_fu_200_buf_0_ce0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_0_ce0 = grp_dct_2d_fu_171_in_block_0_ce0;
    end else begin
        buf_2d_in_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_0_we0 = grp_read_data_fu_200_buf_0_we0;
    end else begin
        buf_2d_in_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_1_address0 = grp_read_data_fu_200_buf_1_address0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_1_address0 = grp_dct_2d_fu_171_in_block_1_address0;
    end else begin
        buf_2d_in_1_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_1_ce0 = grp_read_data_fu_200_buf_1_ce0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_1_ce0 = grp_dct_2d_fu_171_in_block_1_ce0;
    end else begin
        buf_2d_in_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_1_we0 = grp_read_data_fu_200_buf_1_we0;
    end else begin
        buf_2d_in_1_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_2_address0 = grp_read_data_fu_200_buf_2_address0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_2_address0 = grp_dct_2d_fu_171_in_block_2_address0;
    end else begin
        buf_2d_in_2_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_2_ce0 = grp_read_data_fu_200_buf_2_ce0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_2_ce0 = grp_dct_2d_fu_171_in_block_2_ce0;
    end else begin
        buf_2d_in_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_2_we0 = grp_read_data_fu_200_buf_2_we0;
    end else begin
        buf_2d_in_2_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_3_address0 = grp_read_data_fu_200_buf_3_address0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_3_address0 = grp_dct_2d_fu_171_in_block_3_address0;
    end else begin
        buf_2d_in_3_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_3_ce0 = grp_read_data_fu_200_buf_3_ce0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_3_ce0 = grp_dct_2d_fu_171_in_block_3_ce0;
    end else begin
        buf_2d_in_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_3_we0 = grp_read_data_fu_200_buf_3_we0;
    end else begin
        buf_2d_in_3_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_4_address0 = grp_read_data_fu_200_buf_4_address0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_4_address0 = grp_dct_2d_fu_171_in_block_4_address0;
    end else begin
        buf_2d_in_4_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_4_ce0 = grp_read_data_fu_200_buf_4_ce0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_4_ce0 = grp_dct_2d_fu_171_in_block_4_ce0;
    end else begin
        buf_2d_in_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_4_we0 = grp_read_data_fu_200_buf_4_we0;
    end else begin
        buf_2d_in_4_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_5_address0 = grp_read_data_fu_200_buf_5_address0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_5_address0 = grp_dct_2d_fu_171_in_block_5_address0;
    end else begin
        buf_2d_in_5_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_5_ce0 = grp_read_data_fu_200_buf_5_ce0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_5_ce0 = grp_dct_2d_fu_171_in_block_5_ce0;
    end else begin
        buf_2d_in_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_5_we0 = grp_read_data_fu_200_buf_5_we0;
    end else begin
        buf_2d_in_5_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_6_address0 = grp_read_data_fu_200_buf_6_address0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_6_address0 = grp_dct_2d_fu_171_in_block_6_address0;
    end else begin
        buf_2d_in_6_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_6_ce0 = grp_read_data_fu_200_buf_6_ce0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_6_ce0 = grp_dct_2d_fu_171_in_block_6_ce0;
    end else begin
        buf_2d_in_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_6_we0 = grp_read_data_fu_200_buf_6_we0;
    end else begin
        buf_2d_in_6_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_7_address0 = grp_read_data_fu_200_buf_7_address0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_7_address0 = grp_dct_2d_fu_171_in_block_7_address0;
    end else begin
        buf_2d_in_7_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_7_ce0 = grp_read_data_fu_200_buf_7_ce0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_in_7_ce0 = grp_dct_2d_fu_171_in_block_7_ce0;
    end else begin
        buf_2d_in_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        buf_2d_in_7_we0 = grp_read_data_fu_200_buf_7_we0;
    end else begin
        buf_2d_in_7_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        buf_2d_out_address0 = zext_ln118_1_fu_300_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_out_address0 = grp_dct_2d_fu_171_out_block_address0;
    end else begin
        buf_2d_out_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        buf_2d_out_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_out_ce0 = grp_dct_2d_fu_171_out_block_ce0;
    end else begin
        buf_2d_out_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        buf_2d_out_we0 = grp_dct_2d_fu_171_out_block_we0;
    end else begin
        buf_2d_out_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        output_r_ce0 = 1'b1;
    end else begin
        output_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln115_reg_321 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        output_r_we0 = 1'b1;
    end else begin
        output_r_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((grp_read_data_fu_200_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            if (((grp_dct_2d_fu_171_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln115_fu_222_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln115_fu_222_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln115_fu_228_p2 = (indvar_flatten_reg_138 + 7'd1);

assign add_ln118_1_fu_294_p2 = (zext_ln115_fu_270_p1 + zext_ln118_fu_290_p1);

assign add_ln118_fu_305_p2 = (zext_ln117_fu_286_p1 + shl_ln118_mid2_fu_278_p3);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd5];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign c_fu_311_p2 = (4'd1 + select_ln115_fu_246_p3);

assign grp_dct_2d_fu_171_ap_start = grp_dct_2d_fu_171_ap_start_reg;

assign grp_read_data_fu_200_ap_start = grp_read_data_fu_200_ap_start_reg;

assign icmp_ln115_fu_222_p2 = ((indvar_flatten_reg_138 == 7'd64) ? 1'b1 : 1'b0);

assign icmp_ln117_fu_240_p2 = ((c_0_i_reg_160 == 4'd8) ? 1'b1 : 1'b0);

assign input_r_address0 = grp_read_data_fu_200_input_r_address0;

assign input_r_ce0 = grp_read_data_fu_200_input_r_ce0;

assign output_r_address0 = zext_ln118_2_fu_317_p1;

assign output_r_d0 = buf_2d_out_q0;

assign r_fu_234_p2 = (4'd1 + ap_phi_mux_r_0_i_phi_fu_153_p4);

assign select_ln115_1_fu_254_p3 = ((icmp_ln117_fu_240_p2[0:0] === 1'b1) ? r_fu_234_p2 : ap_phi_mux_r_0_i_phi_fu_153_p4);

assign select_ln115_fu_246_p3 = ((icmp_ln117_fu_240_p2[0:0] === 1'b1) ? 4'd0 : c_0_i_reg_160);

assign shl_ln118_mid2_fu_278_p3 = {{trunc_ln115_fu_274_p1}, {3'd0}};

assign tmp_fu_262_p3 = {{select_ln115_1_fu_254_p3}, {3'd0}};

assign trunc_ln115_fu_274_p1 = select_ln115_1_fu_254_p3[2:0];

assign zext_ln115_fu_270_p1 = tmp_fu_262_p3;

assign zext_ln117_fu_286_p1 = select_ln115_fu_246_p3;

assign zext_ln118_1_fu_300_p1 = add_ln118_1_fu_294_p2;

assign zext_ln118_2_fu_317_p1 = add_ln118_reg_340;

assign zext_ln118_fu_290_p1 = select_ln115_fu_246_p3;

endmodule //dct
