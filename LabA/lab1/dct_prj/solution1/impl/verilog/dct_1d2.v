// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dct_1d2 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        src_address0,
        src_ce0,
        src_q0,
        src_offset,
        dst_address0,
        dst_ce0,
        dst_we0,
        dst_d0,
        dst_offset
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_state3 = 4'd4;
parameter    ap_ST_fsm_state4 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [5:0] src_address0;
output   src_ce0;
input  [15:0] src_q0;
input  [3:0] src_offset;
output  [5:0] dst_address0;
output   dst_ce0;
output   dst_we0;
output  [15:0] dst_d0;
input  [3:0] dst_offset;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg src_ce0;
reg dst_ce0;
reg dst_we0;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [5:0] dct_coeff_table_address0;
reg    dct_coeff_table_ce0;
wire  signed [14:0] dct_coeff_table_q0;
wire   [7:0] zext_ln59_fu_140_p1;
reg   [7:0] zext_ln59_reg_267;
wire   [7:0] zext_ln48_fu_152_p1;
reg   [7:0] zext_ln48_reg_272;
wire   [3:0] k_fu_162_p2;
reg   [3:0] k_reg_280;
wire    ap_CS_fsm_state2;
wire   [7:0] zext_ln61_fu_180_p1;
reg   [7:0] zext_ln61_reg_285;
wire   [0:0] icmp_ln55_fu_156_p2;
reg   [5:0] dst_addr_reg_290;
wire   [3:0] n_fu_200_p2;
reg   [3:0] n_reg_298;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_ln57_fu_194_p2;
wire  signed [31:0] grp_fu_259_p3;
wire    ap_CS_fsm_state4;
reg   [3:0] k_0_reg_98;
reg   [3:0] n_0_reg_109;
reg   [31:0] tmp_0_reg_120;
wire   [63:0] zext_ln61_1_fu_189_p1;
wire   [63:0] zext_ln58_2_fu_215_p1;
wire   [63:0] zext_ln59_1_fu_225_p1;
wire   [6:0] tmp_6_fu_132_p3;
wire   [6:0] tmp_7_fu_144_p3;
wire   [6:0] tmp_8_fu_172_p3;
wire   [7:0] zext_ln58_fu_168_p1;
wire   [7:0] add_ln61_1_fu_184_p2;
wire   [7:0] zext_ln58_1_fu_206_p1;
wire   [7:0] add_ln58_fu_210_p2;
wire   [7:0] add_ln59_fu_220_p2;
wire   [28:0] trunc_ln57_fu_230_p1;
wire   [28:0] add_ln61_fu_234_p2;
reg   [3:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
end

dct_1d2_dct_coeffbkb #(
    .DataWidth( 15 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
dct_coeff_table_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dct_coeff_table_address0),
    .ce0(dct_coeff_table_ce0),
    .q0(dct_coeff_table_q0)
);

dct_mac_muladd_15cud #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 15 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
dct_mac_muladd_15cud_U1(
    .din0(dct_coeff_table_q0),
    .din1(src_q0),
    .din2(tmp_0_reg_120),
    .dout(grp_fu_259_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln57_fu_194_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        k_0_reg_98 <= k_reg_280;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        k_0_reg_98 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        n_0_reg_109 <= n_reg_298;
    end else if (((icmp_ln55_fu_156_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        n_0_reg_109 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        tmp_0_reg_120 <= grp_fu_259_p3;
    end else if (((icmp_ln55_fu_156_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_0_reg_120 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln55_fu_156_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        dst_addr_reg_290 <= zext_ln61_1_fu_189_p1;
        zext_ln61_reg_285[6 : 3] <= zext_ln61_fu_180_p1[6 : 3];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        k_reg_280 <= k_fu_162_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        n_reg_298 <= n_fu_200_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        zext_ln48_reg_272[6 : 3] <= zext_ln48_fu_152_p1[6 : 3];
        zext_ln59_reg_267[6 : 3] <= zext_ln59_fu_140_p1[6 : 3];
    end
end

always @ (*) begin
    if ((((icmp_ln55_fu_156_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((icmp_ln55_fu_156_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        dct_coeff_table_ce0 = 1'b1;
    end else begin
        dct_coeff_table_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        dst_ce0 = 1'b1;
    end else begin
        dst_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln57_fu_194_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        dst_we0 = 1'b1;
    end else begin
        dst_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        src_ce0 = 1'b1;
    end else begin
        src_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln55_fu_156_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln57_fu_194_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln58_fu_210_p2 = (zext_ln61_reg_285 + zext_ln58_1_fu_206_p1);

assign add_ln59_fu_220_p2 = (zext_ln48_reg_272 + zext_ln58_1_fu_206_p1);

assign add_ln61_1_fu_184_p2 = (zext_ln58_fu_168_p1 + zext_ln59_reg_267);

assign add_ln61_fu_234_p2 = (29'd4096 + trunc_ln57_fu_230_p1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign dct_coeff_table_address0 = zext_ln58_2_fu_215_p1;

assign dst_address0 = dst_addr_reg_290;

assign dst_d0 = {{add_ln61_fu_234_p2[28:13]}};

assign icmp_ln55_fu_156_p2 = ((k_0_reg_98 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln57_fu_194_p2 = ((n_0_reg_109 == 4'd8) ? 1'b1 : 1'b0);

assign k_fu_162_p2 = (k_0_reg_98 + 4'd1);

assign n_fu_200_p2 = (n_0_reg_109 + 4'd1);

assign src_address0 = zext_ln59_1_fu_225_p1;

assign tmp_6_fu_132_p3 = {{dst_offset}, {3'd0}};

assign tmp_7_fu_144_p3 = {{src_offset}, {3'd0}};

assign tmp_8_fu_172_p3 = {{k_0_reg_98}, {3'd0}};

assign trunc_ln57_fu_230_p1 = tmp_0_reg_120[28:0];

assign zext_ln48_fu_152_p1 = tmp_7_fu_144_p3;

assign zext_ln58_1_fu_206_p1 = n_0_reg_109;

assign zext_ln58_2_fu_215_p1 = add_ln58_fu_210_p2;

assign zext_ln58_fu_168_p1 = k_0_reg_98;

assign zext_ln59_1_fu_225_p1 = add_ln59_fu_220_p2;

assign zext_ln59_fu_140_p1 = tmp_6_fu_132_p3;

assign zext_ln61_1_fu_189_p1 = add_ln61_1_fu_184_p2;

assign zext_ln61_fu_180_p1 = tmp_8_fu_172_p3;

always @ (posedge ap_clk) begin
    zext_ln59_reg_267[2:0] <= 3'b000;
    zext_ln59_reg_267[7] <= 1'b0;
    zext_ln48_reg_272[2:0] <= 3'b000;
    zext_ln48_reg_272[7] <= 1'b0;
    zext_ln61_reg_285[2:0] <= 3'b000;
    zext_ln61_reg_285[7] <= 1'b0;
end

endmodule //dct_1d2
