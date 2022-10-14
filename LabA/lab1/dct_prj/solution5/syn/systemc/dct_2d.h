// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dct_2d_HH_
#define _dct_2d_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dct_1d.h"
#include "dct_2d_row_outbuf.h"
#include "dct_2d_col_inbuf_0.h"

namespace ap_rtl {

struct dct_2d : public sc_module {
    // Port declarations 35
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<3> > in_block_0_address0;
    sc_out< sc_logic > in_block_0_ce0;
    sc_in< sc_lv<16> > in_block_0_q0;
    sc_out< sc_lv<3> > in_block_1_address0;
    sc_out< sc_logic > in_block_1_ce0;
    sc_in< sc_lv<16> > in_block_1_q0;
    sc_out< sc_lv<3> > in_block_2_address0;
    sc_out< sc_logic > in_block_2_ce0;
    sc_in< sc_lv<16> > in_block_2_q0;
    sc_out< sc_lv<3> > in_block_3_address0;
    sc_out< sc_logic > in_block_3_ce0;
    sc_in< sc_lv<16> > in_block_3_q0;
    sc_out< sc_lv<3> > in_block_4_address0;
    sc_out< sc_logic > in_block_4_ce0;
    sc_in< sc_lv<16> > in_block_4_q0;
    sc_out< sc_lv<3> > in_block_5_address0;
    sc_out< sc_logic > in_block_5_ce0;
    sc_in< sc_lv<16> > in_block_5_q0;
    sc_out< sc_lv<3> > in_block_6_address0;
    sc_out< sc_logic > in_block_6_ce0;
    sc_in< sc_lv<16> > in_block_6_q0;
    sc_out< sc_lv<3> > in_block_7_address0;
    sc_out< sc_logic > in_block_7_ce0;
    sc_in< sc_lv<16> > in_block_7_q0;
    sc_out< sc_lv<6> > out_block_address0;
    sc_out< sc_logic > out_block_ce0;
    sc_out< sc_logic > out_block_we0;
    sc_out< sc_lv<16> > out_block_d0;


    // Module declarations
    dct_2d(sc_module_name name);
    SC_HAS_PROCESS(dct_2d);

    ~dct_2d();

    sc_trace_file* mVcdFile;

    dct_2d_row_outbuf* row_outbuf_U;
    dct_2d_row_outbuf* col_outbuf_U;
    dct_2d_col_inbuf_0* col_inbuf_0_U;
    dct_2d_col_inbuf_0* col_inbuf_1_U;
    dct_2d_col_inbuf_0* col_inbuf_2_U;
    dct_2d_col_inbuf_0* col_inbuf_3_U;
    dct_2d_col_inbuf_0* col_inbuf_4_U;
    dct_2d_col_inbuf_0* col_inbuf_5_U;
    dct_2d_col_inbuf_0* col_inbuf_6_U;
    dct_2d_col_inbuf_0* col_inbuf_7_U;
    dct_1d* grp_dct_1d_fu_374;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > indvar_flatten_reg_296;
    sc_signal< sc_lv<4> > j_0_reg_307;
    sc_signal< sc_lv<4> > i_1_reg_318;
    sc_signal< sc_lv<7> > indvar_flatten19_reg_341;
    sc_signal< sc_lv<4> > j_1_reg_352;
    sc_signal< sc_lv<4> > i_3_reg_363;
    sc_signal< sc_lv<1> > icmp_ln76_fu_417_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > i_fu_423_p2;
    sc_signal< sc_lv<4> > i_reg_631;
    sc_signal< sc_lv<1> > icmp_ln81_fu_429_p2;
    sc_signal< sc_lv<1> > icmp_ln81_reg_636;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<7> > add_ln81_fu_435_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<4> > select_ln84_1_fu_461_p3;
    sc_signal< sc_lv<4> > select_ln84_1_reg_645;
    sc_signal< sc_lv<3> > trunc_ln84_fu_496_p1;
    sc_signal< sc_lv<3> > trunc_ln84_reg_656;
    sc_signal< sc_lv<4> > i_5_fu_500_p2;
    sc_signal< sc_lv<1> > icmp_ln87_fu_517_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<4> > i_4_fu_523_p2;
    sc_signal< sc_lv<4> > i_4_reg_669;
    sc_signal< sc_lv<1> > icmp_ln92_fu_529_p2;
    sc_signal< sc_lv<1> > icmp_ln92_reg_674;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state9_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state10_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<7> > add_ln92_fu_535_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<4> > select_ln95_fu_553_p3;
    sc_signal< sc_lv<4> > select_ln95_reg_683;
    sc_signal< sc_lv<4> > select_ln95_1_fu_561_p3;
    sc_signal< sc_lv<4> > select_ln95_1_reg_688;
    sc_signal< sc_lv<4> > i_6_fu_596_p2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state9;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<6> > row_outbuf_address0;
    sc_signal< sc_logic > row_outbuf_ce0;
    sc_signal< sc_logic > row_outbuf_we0;
    sc_signal< sc_lv<16> > row_outbuf_q0;
    sc_signal< sc_lv<6> > col_outbuf_address0;
    sc_signal< sc_logic > col_outbuf_ce0;
    sc_signal< sc_logic > col_outbuf_we0;
    sc_signal< sc_lv<16> > col_outbuf_q0;
    sc_signal< sc_lv<3> > col_inbuf_0_address0;
    sc_signal< sc_logic > col_inbuf_0_ce0;
    sc_signal< sc_logic > col_inbuf_0_we0;
    sc_signal< sc_lv<16> > col_inbuf_0_q0;
    sc_signal< sc_lv<3> > col_inbuf_1_address0;
    sc_signal< sc_logic > col_inbuf_1_ce0;
    sc_signal< sc_logic > col_inbuf_1_we0;
    sc_signal< sc_lv<16> > col_inbuf_1_q0;
    sc_signal< sc_lv<3> > col_inbuf_2_address0;
    sc_signal< sc_logic > col_inbuf_2_ce0;
    sc_signal< sc_logic > col_inbuf_2_we0;
    sc_signal< sc_lv<16> > col_inbuf_2_q0;
    sc_signal< sc_lv<3> > col_inbuf_3_address0;
    sc_signal< sc_logic > col_inbuf_3_ce0;
    sc_signal< sc_logic > col_inbuf_3_we0;
    sc_signal< sc_lv<16> > col_inbuf_3_q0;
    sc_signal< sc_lv<3> > col_inbuf_4_address0;
    sc_signal< sc_logic > col_inbuf_4_ce0;
    sc_signal< sc_logic > col_inbuf_4_we0;
    sc_signal< sc_lv<16> > col_inbuf_4_q0;
    sc_signal< sc_lv<3> > col_inbuf_5_address0;
    sc_signal< sc_logic > col_inbuf_5_ce0;
    sc_signal< sc_logic > col_inbuf_5_we0;
    sc_signal< sc_lv<16> > col_inbuf_5_q0;
    sc_signal< sc_lv<3> > col_inbuf_6_address0;
    sc_signal< sc_logic > col_inbuf_6_ce0;
    sc_signal< sc_logic > col_inbuf_6_we0;
    sc_signal< sc_lv<16> > col_inbuf_6_q0;
    sc_signal< sc_lv<3> > col_inbuf_7_address0;
    sc_signal< sc_logic > col_inbuf_7_ce0;
    sc_signal< sc_logic > col_inbuf_7_we0;
    sc_signal< sc_lv<16> > col_inbuf_7_q0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_ap_start;
    sc_signal< sc_logic > grp_dct_1d_fu_374_ap_done;
    sc_signal< sc_logic > grp_dct_1d_fu_374_ap_idle;
    sc_signal< sc_logic > grp_dct_1d_fu_374_ap_ready;
    sc_signal< sc_lv<3> > grp_dct_1d_fu_374_src_address0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_src_ce0;
    sc_signal< sc_lv<16> > grp_dct_1d_fu_374_src_q0;
    sc_signal< sc_lv<3> > grp_dct_1d_fu_374_src1_address0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_src1_ce0;
    sc_signal< sc_lv<16> > grp_dct_1d_fu_374_src1_q0;
    sc_signal< sc_lv<3> > grp_dct_1d_fu_374_src2_address0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_src2_ce0;
    sc_signal< sc_lv<16> > grp_dct_1d_fu_374_src2_q0;
    sc_signal< sc_lv<3> > grp_dct_1d_fu_374_src3_address0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_src3_ce0;
    sc_signal< sc_lv<16> > grp_dct_1d_fu_374_src3_q0;
    sc_signal< sc_lv<3> > grp_dct_1d_fu_374_src4_address0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_src4_ce0;
    sc_signal< sc_lv<16> > grp_dct_1d_fu_374_src4_q0;
    sc_signal< sc_lv<3> > grp_dct_1d_fu_374_src5_address0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_src5_ce0;
    sc_signal< sc_lv<16> > grp_dct_1d_fu_374_src5_q0;
    sc_signal< sc_lv<3> > grp_dct_1d_fu_374_src6_address0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_src6_ce0;
    sc_signal< sc_lv<16> > grp_dct_1d_fu_374_src6_q0;
    sc_signal< sc_lv<3> > grp_dct_1d_fu_374_src7_address0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_src7_ce0;
    sc_signal< sc_lv<16> > grp_dct_1d_fu_374_src7_q0;
    sc_signal< sc_lv<4> > grp_dct_1d_fu_374_src_offset;
    sc_signal< sc_lv<6> > grp_dct_1d_fu_374_dst_address0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_dst_ce0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_dst_we0;
    sc_signal< sc_lv<16> > grp_dct_1d_fu_374_dst_d0;
    sc_signal< sc_lv<4> > grp_dct_1d_fu_374_dst_offset;
    sc_signal< sc_lv<4> > i_0_reg_284;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<4> > ap_phi_mux_j_0_phi_fu_311_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<4> > i_2_reg_329;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<4> > ap_phi_mux_j_1_phi_fu_356_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_logic > grp_dct_1d_fu_374_ap_start_reg;
    sc_signal< sc_lv<64> > zext_ln84_3_fu_491_p1;
    sc_signal< sc_lv<64> > zext_ln84_fu_506_p1;
    sc_signal< sc_lv<64> > zext_ln95_5_fu_591_p1;
    sc_signal< sc_lv<64> > zext_ln95_3_fu_622_p1;
    sc_signal< sc_lv<1> > icmp_ln83_fu_447_p2;
    sc_signal< sc_lv<4> > j_fu_441_p2;
    sc_signal< sc_lv<4> > select_ln84_fu_453_p3;
    sc_signal< sc_lv<7> > tmp_fu_473_p3;
    sc_signal< sc_lv<8> > zext_ln84_2_fu_481_p1;
    sc_signal< sc_lv<8> > zext_ln84_1_fu_469_p1;
    sc_signal< sc_lv<8> > add_ln84_fu_485_p2;
    sc_signal< sc_lv<1> > icmp_ln94_fu_547_p2;
    sc_signal< sc_lv<4> > j_2_fu_541_p2;
    sc_signal< sc_lv<7> > tmp_6_fu_573_p3;
    sc_signal< sc_lv<8> > zext_ln95_fu_569_p1;
    sc_signal< sc_lv<8> > zext_ln95_4_fu_581_p1;
    sc_signal< sc_lv<8> > add_ln95_1_fu_585_p2;
    sc_signal< sc_lv<7> > tmp_3_fu_602_p3;
    sc_signal< sc_lv<8> > zext_ln95_2_fu_613_p1;
    sc_signal< sc_lv<8> > zext_ln95_1_fu_609_p1;
    sc_signal< sc_lv<8> > add_ln95_fu_616_p2;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_pp0_stage0;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_pp1_stage0;
    static const sc_lv<9> ap_ST_fsm_state11;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<32> ap_const_lv32_8;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln81_fu_435_p2();
    void thread_add_ln84_fu_485_p2();
    void thread_add_ln92_fu_535_p2();
    void thread_add_ln95_1_fu_585_p2();
    void thread_add_ln95_fu_616_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp1_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter0();
    void thread_ap_block_state5_pp0_stage0_iter1();
    void thread_ap_block_state9_pp1_stage0_iter0();
    void thread_ap_condition_pp0_exit_iter0_state4();
    void thread_ap_condition_pp1_exit_iter0_state9();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_j_0_phi_fu_311_p4();
    void thread_ap_phi_mux_j_1_phi_fu_356_p4();
    void thread_ap_ready();
    void thread_col_inbuf_0_address0();
    void thread_col_inbuf_0_ce0();
    void thread_col_inbuf_0_we0();
    void thread_col_inbuf_1_address0();
    void thread_col_inbuf_1_ce0();
    void thread_col_inbuf_1_we0();
    void thread_col_inbuf_2_address0();
    void thread_col_inbuf_2_ce0();
    void thread_col_inbuf_2_we0();
    void thread_col_inbuf_3_address0();
    void thread_col_inbuf_3_ce0();
    void thread_col_inbuf_3_we0();
    void thread_col_inbuf_4_address0();
    void thread_col_inbuf_4_ce0();
    void thread_col_inbuf_4_we0();
    void thread_col_inbuf_5_address0();
    void thread_col_inbuf_5_ce0();
    void thread_col_inbuf_5_we0();
    void thread_col_inbuf_6_address0();
    void thread_col_inbuf_6_ce0();
    void thread_col_inbuf_6_we0();
    void thread_col_inbuf_7_address0();
    void thread_col_inbuf_7_ce0();
    void thread_col_inbuf_7_we0();
    void thread_col_outbuf_address0();
    void thread_col_outbuf_ce0();
    void thread_col_outbuf_we0();
    void thread_grp_dct_1d_fu_374_ap_start();
    void thread_grp_dct_1d_fu_374_dst_offset();
    void thread_grp_dct_1d_fu_374_src1_q0();
    void thread_grp_dct_1d_fu_374_src2_q0();
    void thread_grp_dct_1d_fu_374_src3_q0();
    void thread_grp_dct_1d_fu_374_src4_q0();
    void thread_grp_dct_1d_fu_374_src5_q0();
    void thread_grp_dct_1d_fu_374_src6_q0();
    void thread_grp_dct_1d_fu_374_src7_q0();
    void thread_grp_dct_1d_fu_374_src_offset();
    void thread_grp_dct_1d_fu_374_src_q0();
    void thread_i_4_fu_523_p2();
    void thread_i_5_fu_500_p2();
    void thread_i_6_fu_596_p2();
    void thread_i_fu_423_p2();
    void thread_icmp_ln76_fu_417_p2();
    void thread_icmp_ln81_fu_429_p2();
    void thread_icmp_ln83_fu_447_p2();
    void thread_icmp_ln87_fu_517_p2();
    void thread_icmp_ln92_fu_529_p2();
    void thread_icmp_ln94_fu_547_p2();
    void thread_in_block_0_address0();
    void thread_in_block_0_ce0();
    void thread_in_block_1_address0();
    void thread_in_block_1_ce0();
    void thread_in_block_2_address0();
    void thread_in_block_2_ce0();
    void thread_in_block_3_address0();
    void thread_in_block_3_ce0();
    void thread_in_block_4_address0();
    void thread_in_block_4_ce0();
    void thread_in_block_5_address0();
    void thread_in_block_5_ce0();
    void thread_in_block_6_address0();
    void thread_in_block_6_ce0();
    void thread_in_block_7_address0();
    void thread_in_block_7_ce0();
    void thread_j_2_fu_541_p2();
    void thread_j_fu_441_p2();
    void thread_out_block_address0();
    void thread_out_block_ce0();
    void thread_out_block_d0();
    void thread_out_block_we0();
    void thread_row_outbuf_address0();
    void thread_row_outbuf_ce0();
    void thread_row_outbuf_we0();
    void thread_select_ln84_1_fu_461_p3();
    void thread_select_ln84_fu_453_p3();
    void thread_select_ln95_1_fu_561_p3();
    void thread_select_ln95_fu_553_p3();
    void thread_tmp_3_fu_602_p3();
    void thread_tmp_6_fu_573_p3();
    void thread_tmp_fu_473_p3();
    void thread_trunc_ln84_fu_496_p1();
    void thread_zext_ln84_1_fu_469_p1();
    void thread_zext_ln84_2_fu_481_p1();
    void thread_zext_ln84_3_fu_491_p1();
    void thread_zext_ln84_fu_506_p1();
    void thread_zext_ln95_1_fu_609_p1();
    void thread_zext_ln95_2_fu_613_p1();
    void thread_zext_ln95_3_fu_622_p1();
    void thread_zext_ln95_4_fu_581_p1();
    void thread_zext_ln95_5_fu_591_p1();
    void thread_zext_ln95_fu_569_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
