// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dct_1d_HH_
#define _dct_1d_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dct_mul_mul_16s_1jbC.h"
#include "dct_mac_muladd_16kbM.h"
#include "dct_mac_muladd_16lbW.h"
#include "dct_mac_muladd_16mb6.h"
#include "dct_1d_dct_coeff_bkb.h"
#include "dct_1d_dct_coeff_cud.h"
#include "dct_1d_dct_coeff_dEe.h"
#include "dct_1d_dct_coeff_eOg.h"
#include "dct_1d_dct_coeff_fYi.h"
#include "dct_1d_dct_coeff_g8j.h"
#include "dct_1d_dct_coeff_hbi.h"
#include "dct_1d_dct_coeff_ibs.h"

namespace ap_rtl {

struct dct_1d : public sc_module {
    // Port declarations 36
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<3> > src_address0;
    sc_out< sc_logic > src_ce0;
    sc_in< sc_lv<16> > src_q0;
    sc_out< sc_lv<3> > src1_address0;
    sc_out< sc_logic > src1_ce0;
    sc_in< sc_lv<16> > src1_q0;
    sc_out< sc_lv<3> > src2_address0;
    sc_out< sc_logic > src2_ce0;
    sc_in< sc_lv<16> > src2_q0;
    sc_out< sc_lv<3> > src3_address0;
    sc_out< sc_logic > src3_ce0;
    sc_in< sc_lv<16> > src3_q0;
    sc_out< sc_lv<3> > src4_address0;
    sc_out< sc_logic > src4_ce0;
    sc_in< sc_lv<16> > src4_q0;
    sc_out< sc_lv<3> > src5_address0;
    sc_out< sc_logic > src5_ce0;
    sc_in< sc_lv<16> > src5_q0;
    sc_out< sc_lv<3> > src6_address0;
    sc_out< sc_logic > src6_ce0;
    sc_in< sc_lv<16> > src6_q0;
    sc_out< sc_lv<3> > src7_address0;
    sc_out< sc_logic > src7_ce0;
    sc_in< sc_lv<16> > src7_q0;
    sc_in< sc_lv<4> > src_offset;
    sc_out< sc_lv<6> > dst_address0;
    sc_out< sc_logic > dst_ce0;
    sc_out< sc_logic > dst_we0;
    sc_out< sc_lv<16> > dst_d0;
    sc_in< sc_lv<4> > dst_offset;


    // Module declarations
    dct_1d(sc_module_name name);
    SC_HAS_PROCESS(dct_1d);

    ~dct_1d();

    sc_trace_file* mVcdFile;

    dct_1d_dct_coeff_bkb* dct_coeff_table_0_U;
    dct_1d_dct_coeff_cud* dct_coeff_table_1_U;
    dct_1d_dct_coeff_dEe* dct_coeff_table_2_U;
    dct_1d_dct_coeff_eOg* dct_coeff_table_3_U;
    dct_1d_dct_coeff_fYi* dct_coeff_table_4_U;
    dct_1d_dct_coeff_g8j* dct_coeff_table_5_U;
    dct_1d_dct_coeff_hbi* dct_coeff_table_6_U;
    dct_1d_dct_coeff_ibs* dct_coeff_table_7_U;
    dct_mul_mul_16s_1jbC<1,1,16,15,29>* dct_mul_mul_16s_1jbC_U10;
    dct_mul_mul_16s_1jbC<1,1,16,15,29>* dct_mul_mul_16s_1jbC_U11;
    dct_mul_mul_16s_1jbC<1,1,16,15,29>* dct_mul_mul_16s_1jbC_U12;
    dct_mac_muladd_16kbM<1,1,16,15,14,29>* dct_mac_muladd_16kbM_U13;
    dct_mac_muladd_16lbW<1,1,16,14,29,29>* dct_mac_muladd_16lbW_U14;
    dct_mac_muladd_16mb6<1,1,16,15,29,29>* dct_mac_muladd_16mb6_U15;
    dct_mac_muladd_16mb6<1,1,16,15,29,29>* dct_mac_muladd_16mb6_U16;
    dct_mac_muladd_16mb6<1,1,16,15,29,29>* dct_mac_muladd_16mb6_U17;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > dct_coeff_table_0_address0;
    sc_signal< sc_logic > dct_coeff_table_0_ce0;
    sc_signal< sc_lv<14> > dct_coeff_table_0_q0;
    sc_signal< sc_lv<3> > dct_coeff_table_1_address0;
    sc_signal< sc_logic > dct_coeff_table_1_ce0;
    sc_signal< sc_lv<15> > dct_coeff_table_1_q0;
    sc_signal< sc_lv<3> > dct_coeff_table_2_address0;
    sc_signal< sc_logic > dct_coeff_table_2_ce0;
    sc_signal< sc_lv<15> > dct_coeff_table_2_q0;
    sc_signal< sc_lv<3> > dct_coeff_table_3_address0;
    sc_signal< sc_logic > dct_coeff_table_3_ce0;
    sc_signal< sc_lv<15> > dct_coeff_table_3_q0;
    sc_signal< sc_lv<3> > dct_coeff_table_4_address0;
    sc_signal< sc_logic > dct_coeff_table_4_ce0;
    sc_signal< sc_lv<15> > dct_coeff_table_4_q0;
    sc_signal< sc_lv<3> > dct_coeff_table_5_address0;
    sc_signal< sc_logic > dct_coeff_table_5_ce0;
    sc_signal< sc_lv<15> > dct_coeff_table_5_q0;
    sc_signal< sc_lv<3> > dct_coeff_table_6_address0;
    sc_signal< sc_logic > dct_coeff_table_6_ce0;
    sc_signal< sc_lv<15> > dct_coeff_table_6_q0;
    sc_signal< sc_lv<3> > dct_coeff_table_7_address0;
    sc_signal< sc_logic > dct_coeff_table_7_ce0;
    sc_signal< sc_lv<15> > dct_coeff_table_7_q0;
    sc_signal< sc_lv<4> > k_0_reg_307;
    sc_signal< sc_lv<8> > zext_ln63_cast_fu_326_p1;
    sc_signal< sc_lv<8> > zext_ln63_cast_reg_522;
    sc_signal< sc_lv<3> > src_addr_reg_527;
    sc_signal< sc_lv<3> > src1_addr_reg_532;
    sc_signal< sc_lv<3> > src2_addr_reg_537;
    sc_signal< sc_lv<3> > src3_addr_reg_542;
    sc_signal< sc_lv<3> > src4_addr_reg_547;
    sc_signal< sc_lv<3> > src5_addr_reg_552;
    sc_signal< sc_lv<3> > src6_addr_reg_557;
    sc_signal< sc_lv<3> > src7_addr_reg_562;
    sc_signal< sc_lv<1> > icmp_ln55_fu_342_p2;
    sc_signal< sc_lv<1> > icmp_ln55_reg_567;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln55_reg_567_pp0_iter1_reg;
    sc_signal< sc_lv<4> > k_fu_348_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<8> > add_ln63_8_fu_370_p2;
    sc_signal< sc_lv<8> > add_ln63_8_reg_576;
    sc_signal< sc_lv<8> > add_ln63_8_reg_576_pp0_iter1_reg;
    sc_signal< sc_lv<14> > dct_coeff_table_0_lo_reg_621;
    sc_signal< sc_lv<29> > mul_ln61_1_fu_464_p2;
    sc_signal< sc_lv<29> > mul_ln61_1_reg_626;
    sc_signal< sc_lv<15> > dct_coeff_table_2_lo_reg_631;
    sc_signal< sc_lv<29> > mul_ln61_3_fu_470_p2;
    sc_signal< sc_lv<29> > mul_ln61_3_reg_636;
    sc_signal< sc_lv<15> > dct_coeff_table_4_lo_reg_641;
    sc_signal< sc_lv<29> > mul_ln61_5_fu_476_p2;
    sc_signal< sc_lv<29> > mul_ln61_5_reg_646;
    sc_signal< sc_lv<15> > dct_coeff_table_6_lo_reg_651;
    sc_signal< sc_lv<29> > grp_fu_482_p3;
    sc_signal< sc_lv<29> > add_ln63_5_reg_656;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<64> > src_offset_cast_fu_330_p1;
    sc_signal< sc_lv<64> > zext_ln60_fu_354_p1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > zext_ln63_1_fu_407_p1;
    sc_signal< sc_lv<7> > tmp_3_fu_318_p3;
    sc_signal< sc_lv<8> > zext_ln63_fu_366_p1;
    sc_signal< sc_lv<29> > grp_fu_490_p3;
    sc_signal< sc_lv<29> > grp_fu_498_p3;
    sc_signal< sc_lv<29> > grp_fu_506_p3;
    sc_signal< sc_lv<29> > grp_fu_514_p3;
    sc_signal< sc_lv<29> > add_ln63_3_fu_439_p2;
    sc_signal< sc_lv<29> > add_ln63_7_fu_443_p2;
    sc_signal< sc_lv<29> > add_ln63_fu_447_p2;
    sc_signal< sc_lv<14> > grp_fu_482_p2;
    sc_signal< sc_lv<14> > grp_fu_490_p1;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<29> > grp_fu_490_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state5;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<29> ap_const_lv29_1000;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln63_3_fu_439_p2();
    void thread_add_ln63_7_fu_443_p2();
    void thread_add_ln63_8_fu_370_p2();
    void thread_add_ln63_fu_447_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_dct_coeff_table_0_address0();
    void thread_dct_coeff_table_0_ce0();
    void thread_dct_coeff_table_1_address0();
    void thread_dct_coeff_table_1_ce0();
    void thread_dct_coeff_table_2_address0();
    void thread_dct_coeff_table_2_ce0();
    void thread_dct_coeff_table_3_address0();
    void thread_dct_coeff_table_3_ce0();
    void thread_dct_coeff_table_4_address0();
    void thread_dct_coeff_table_4_ce0();
    void thread_dct_coeff_table_5_address0();
    void thread_dct_coeff_table_5_ce0();
    void thread_dct_coeff_table_6_address0();
    void thread_dct_coeff_table_6_ce0();
    void thread_dct_coeff_table_7_address0();
    void thread_dct_coeff_table_7_ce0();
    void thread_dst_address0();
    void thread_dst_ce0();
    void thread_dst_d0();
    void thread_dst_we0();
    void thread_grp_fu_482_p2();
    void thread_grp_fu_490_p1();
    void thread_grp_fu_490_p10();
    void thread_icmp_ln55_fu_342_p2();
    void thread_k_fu_348_p2();
    void thread_src1_address0();
    void thread_src1_ce0();
    void thread_src2_address0();
    void thread_src2_ce0();
    void thread_src3_address0();
    void thread_src3_ce0();
    void thread_src4_address0();
    void thread_src4_ce0();
    void thread_src5_address0();
    void thread_src5_ce0();
    void thread_src6_address0();
    void thread_src6_ce0();
    void thread_src7_address0();
    void thread_src7_ce0();
    void thread_src_address0();
    void thread_src_ce0();
    void thread_src_offset_cast_fu_330_p1();
    void thread_tmp_3_fu_318_p3();
    void thread_zext_ln60_fu_354_p1();
    void thread_zext_ln63_1_fu_407_p1();
    void thread_zext_ln63_cast_fu_326_p1();
    void thread_zext_ln63_fu_366_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif