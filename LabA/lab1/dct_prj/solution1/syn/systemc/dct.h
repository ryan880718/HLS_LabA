// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dct_HH_
#define _dct_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dct_2d.h"
#include "dct_2d_row_outbuf.h"

namespace ap_rtl {

struct dct : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > input_r_address0;
    sc_out< sc_logic > input_r_ce0;
    sc_in< sc_lv<16> > input_r_q0;
    sc_out< sc_lv<6> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_logic > output_r_we0;
    sc_out< sc_lv<16> > output_r_d0;


    // Module declarations
    dct(sc_module_name name);
    SC_HAS_PROCESS(dct);

    ~dct();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    dct_2d_row_outbuf* buf_2d_in_U;
    dct_2d_row_outbuf* buf_2d_out_U;
    dct_2d* grp_dct_2d_fu_152;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > r_fu_166_p2;
    sc_signal< sc_lv<4> > r_reg_313;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > shl_ln_fu_176_p3;
    sc_signal< sc_lv<6> > shl_ln_reg_318;
    sc_signal< sc_lv<1> > icmp_ln101_fu_160_p2;
    sc_signal< sc_lv<8> > zext_ln103_1_fu_192_p1;
    sc_signal< sc_lv<8> > zext_ln103_1_reg_323;
    sc_signal< sc_lv<4> > c_fu_206_p2;
    sc_signal< sc_lv<4> > c_reg_331;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln103_fu_200_p2;
    sc_signal< sc_lv<8> > add_ln104_1_fu_226_p2;
    sc_signal< sc_lv<8> > add_ln104_1_reg_341;
    sc_signal< sc_lv<4> > r_1_fu_241_p2;
    sc_signal< sc_lv<4> > r_1_reg_349;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<8> > zext_ln116_fu_255_p1;
    sc_signal< sc_lv<8> > zext_ln116_reg_354;
    sc_signal< sc_lv<1> > icmp_ln113_fu_235_p2;
    sc_signal< sc_lv<6> > shl_ln1_fu_263_p3;
    sc_signal< sc_lv<6> > shl_ln1_reg_359;
    sc_signal< sc_lv<4> > c_1_fu_281_p2;
    sc_signal< sc_lv<4> > c_1_reg_367;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > icmp_ln115_fu_275_p2;
    sc_signal< sc_lv<6> > add_ln116_fu_301_p2;
    sc_signal< sc_lv<6> > add_ln116_reg_377;
    sc_signal< sc_lv<6> > buf_2d_in_address0;
    sc_signal< sc_logic > buf_2d_in_ce0;
    sc_signal< sc_logic > buf_2d_in_we0;
    sc_signal< sc_lv<16> > buf_2d_in_q0;
    sc_signal< sc_lv<6> > buf_2d_out_address0;
    sc_signal< sc_logic > buf_2d_out_ce0;
    sc_signal< sc_logic > buf_2d_out_we0;
    sc_signal< sc_lv<16> > buf_2d_out_q0;
    sc_signal< sc_logic > grp_dct_2d_fu_152_ap_start;
    sc_signal< sc_logic > grp_dct_2d_fu_152_ap_done;
    sc_signal< sc_logic > grp_dct_2d_fu_152_ap_idle;
    sc_signal< sc_logic > grp_dct_2d_fu_152_ap_ready;
    sc_signal< sc_lv<6> > grp_dct_2d_fu_152_in_block_address0;
    sc_signal< sc_logic > grp_dct_2d_fu_152_in_block_ce0;
    sc_signal< sc_lv<6> > grp_dct_2d_fu_152_out_block_address0;
    sc_signal< sc_logic > grp_dct_2d_fu_152_out_block_ce0;
    sc_signal< sc_logic > grp_dct_2d_fu_152_out_block_we0;
    sc_signal< sc_lv<16> > grp_dct_2d_fu_152_out_block_d0;
    sc_signal< sc_lv<4> > r_0_i_reg_108;
    sc_signal< sc_lv<4> > c_0_i_reg_119;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<4> > r_0_i2_reg_130;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<4> > c_0_i4_reg_141;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > grp_dct_2d_fu_152_ap_start_reg;
    sc_signal< sc_lv<64> > zext_ln104_fu_217_p1;
    sc_signal< sc_lv<64> > zext_ln104_2_fu_231_p1;
    sc_signal< sc_lv<64> > zext_ln116_3_fu_296_p1;
    sc_signal< sc_lv<64> > zext_ln116_2_fu_306_p1;
    sc_signal< sc_lv<3> > trunc_ln104_fu_172_p1;
    sc_signal< sc_lv<7> > tmp_9_fu_184_p3;
    sc_signal< sc_lv<6> > zext_ln103_fu_196_p1;
    sc_signal< sc_lv<6> > add_ln104_fu_212_p2;
    sc_signal< sc_lv<8> > zext_ln104_1_fu_222_p1;
    sc_signal< sc_lv<7> > tmp_s_fu_247_p3;
    sc_signal< sc_lv<3> > trunc_ln116_fu_259_p1;
    sc_signal< sc_lv<8> > zext_ln116_1_fu_287_p1;
    sc_signal< sc_lv<8> > add_ln116_1_fu_291_p2;
    sc_signal< sc_lv<6> > zext_ln115_fu_271_p1;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln104_1_fu_226_p2();
    void thread_add_ln104_fu_212_p2();
    void thread_add_ln116_1_fu_291_p2();
    void thread_add_ln116_fu_301_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_buf_2d_in_address0();
    void thread_buf_2d_in_ce0();
    void thread_buf_2d_in_we0();
    void thread_buf_2d_out_address0();
    void thread_buf_2d_out_ce0();
    void thread_buf_2d_out_we0();
    void thread_c_1_fu_281_p2();
    void thread_c_fu_206_p2();
    void thread_grp_dct_2d_fu_152_ap_start();
    void thread_icmp_ln101_fu_160_p2();
    void thread_icmp_ln103_fu_200_p2();
    void thread_icmp_ln113_fu_235_p2();
    void thread_icmp_ln115_fu_275_p2();
    void thread_input_r_address0();
    void thread_input_r_ce0();
    void thread_output_r_address0();
    void thread_output_r_ce0();
    void thread_output_r_d0();
    void thread_output_r_we0();
    void thread_r_1_fu_241_p2();
    void thread_r_fu_166_p2();
    void thread_shl_ln1_fu_263_p3();
    void thread_shl_ln_fu_176_p3();
    void thread_tmp_9_fu_184_p3();
    void thread_tmp_s_fu_247_p3();
    void thread_trunc_ln104_fu_172_p1();
    void thread_trunc_ln116_fu_259_p1();
    void thread_zext_ln103_1_fu_192_p1();
    void thread_zext_ln103_fu_196_p1();
    void thread_zext_ln104_1_fu_222_p1();
    void thread_zext_ln104_2_fu_231_p1();
    void thread_zext_ln104_fu_217_p1();
    void thread_zext_ln115_fu_271_p1();
    void thread_zext_ln116_1_fu_287_p1();
    void thread_zext_ln116_2_fu_306_p1();
    void thread_zext_ln116_3_fu_296_p1();
    void thread_zext_ln116_fu_255_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
