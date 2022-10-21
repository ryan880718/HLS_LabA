#include "cordiccart2pol.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cordiccart2pol::thread_and_ln26_fu_802_p2() {
    and_ln26_fu_802_p2 = (or_ln26_fu_796_p2.read() & grp_fu_676_p2.read());
}

void cordiccart2pol::thread_and_ln44_10_fu_1376_p2() {
    and_ln44_10_fu_1376_p2 = (or_ln44_10_fu_1372_p2.read() & tmp_28_reg_2334.read());
}

void cordiccart2pol::thread_and_ln44_11_fu_1425_p2() {
    and_ln44_11_fu_1425_p2 = (or_ln44_11_fu_1421_p2.read() & tmp_30_reg_2400.read());
}

void cordiccart2pol::thread_and_ln44_12_fu_1474_p2() {
    and_ln44_12_fu_1474_p2 = (or_ln44_12_fu_1470_p2.read() & tmp_32_reg_2466.read());
}

void cordiccart2pol::thread_and_ln44_13_fu_1523_p2() {
    and_ln44_13_fu_1523_p2 = (or_ln44_13_fu_1519_p2.read() & tmp_34_reg_2532.read());
}

void cordiccart2pol::thread_and_ln44_14_fu_1572_p2() {
    and_ln44_14_fu_1572_p2 = (or_ln44_14_fu_1568_p2.read() & tmp_36_reg_2598.read());
}

void cordiccart2pol::thread_and_ln44_15_fu_1621_p2() {
    and_ln44_15_fu_1621_p2 = (or_ln44_15_fu_1617_p2.read() & tmp_38_reg_2662.read());
}

void cordiccart2pol::thread_and_ln44_1_fu_935_p2() {
    and_ln44_1_fu_935_p2 = (or_ln44_1_fu_931_p2.read() & tmp_10_reg_1740.read());
}

void cordiccart2pol::thread_and_ln44_2_fu_984_p2() {
    and_ln44_2_fu_984_p2 = (or_ln44_2_fu_980_p2.read() & tmp_12_reg_1806.read());
}

void cordiccart2pol::thread_and_ln44_3_fu_1033_p2() {
    and_ln44_3_fu_1033_p2 = (or_ln44_3_fu_1029_p2.read() & tmp_14_reg_1872.read());
}

void cordiccart2pol::thread_and_ln44_4_fu_1082_p2() {
    and_ln44_4_fu_1082_p2 = (or_ln44_4_fu_1078_p2.read() & tmp_16_reg_1938.read());
}

void cordiccart2pol::thread_and_ln44_5_fu_1131_p2() {
    and_ln44_5_fu_1131_p2 = (or_ln44_5_fu_1127_p2.read() & tmp_18_reg_2004.read());
}

void cordiccart2pol::thread_and_ln44_6_fu_1180_p2() {
    and_ln44_6_fu_1180_p2 = (or_ln44_6_fu_1176_p2.read() & tmp_20_reg_2070.read());
}

void cordiccart2pol::thread_and_ln44_7_fu_1229_p2() {
    and_ln44_7_fu_1229_p2 = (or_ln44_7_fu_1225_p2.read() & tmp_22_reg_2136.read());
}

void cordiccart2pol::thread_and_ln44_8_fu_1278_p2() {
    and_ln44_8_fu_1278_p2 = (or_ln44_8_fu_1274_p2.read() & tmp_24_reg_2202.read());
}

void cordiccart2pol::thread_and_ln44_9_fu_1327_p2() {
    and_ln44_9_fu_1327_p2 = (or_ln44_9_fu_1323_p2.read() & tmp_26_reg_2268.read());
}

void cordiccart2pol::thread_and_ln44_fu_878_p2() {
    and_ln44_fu_878_p2 = (or_ln44_fu_874_p2.read() & tmp_8_reg_1679.read());
}

void cordiccart2pol::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void cordiccart2pol::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_pp0_stage0_00001() {
    ap_block_pp0_stage0_00001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()));
}

void cordiccart2pol::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()));
}

void cordiccart2pol::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()));
}

void cordiccart2pol::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()));
}

void cordiccart2pol::thread_ap_block_state100_pp0_stage0_iter99() {
    ap_block_state100_pp0_stage0_iter99 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state101_pp0_stage0_iter100() {
    ap_block_state101_pp0_stage0_iter100 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state102_pp0_stage0_iter101() {
    ap_block_state102_pp0_stage0_iter101 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state103_pp0_stage0_iter102() {
    ap_block_state103_pp0_stage0_iter102 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state104_pp0_stage0_iter103() {
    ap_block_state104_pp0_stage0_iter103 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state105_pp0_stage0_iter104() {
    ap_block_state105_pp0_stage0_iter104 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state106_pp0_stage0_iter105() {
    ap_block_state106_pp0_stage0_iter105 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state107_pp0_stage0_iter106() {
    ap_block_state107_pp0_stage0_iter106 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state108_pp0_stage0_iter107() {
    ap_block_state108_pp0_stage0_iter107 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state109_pp0_stage0_iter108() {
    ap_block_state109_pp0_stage0_iter108 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state10_pp0_stage0_iter9() {
    ap_block_state10_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state110_pp0_stage0_iter109() {
    ap_block_state110_pp0_stage0_iter109 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state111_pp0_stage0_iter110() {
    ap_block_state111_pp0_stage0_iter110 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state112_pp0_stage0_iter111() {
    ap_block_state112_pp0_stage0_iter111 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state113_pp0_stage0_iter112() {
    ap_block_state113_pp0_stage0_iter112 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state114_pp0_stage0_iter113() {
    ap_block_state114_pp0_stage0_iter113 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state115_pp0_stage0_iter114() {
    ap_block_state115_pp0_stage0_iter114 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state116_pp0_stage0_iter115() {
    ap_block_state116_pp0_stage0_iter115 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state117_pp0_stage0_iter116() {
    ap_block_state117_pp0_stage0_iter116 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state118_pp0_stage0_iter117() {
    ap_block_state118_pp0_stage0_iter117 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state119_pp0_stage0_iter118() {
    ap_block_state119_pp0_stage0_iter118 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state11_pp0_stage0_iter10() {
    ap_block_state11_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state120_pp0_stage0_iter119() {
    ap_block_state120_pp0_stage0_iter119 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state121_pp0_stage0_iter120() {
    ap_block_state121_pp0_stage0_iter120 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state122_pp0_stage0_iter121() {
    ap_block_state122_pp0_stage0_iter121 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state123_pp0_stage0_iter122() {
    ap_block_state123_pp0_stage0_iter122 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state124_pp0_stage0_iter123() {
    ap_block_state124_pp0_stage0_iter123 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state125_pp0_stage0_iter124() {
    ap_block_state125_pp0_stage0_iter124 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state126_pp0_stage0_iter125() {
    ap_block_state126_pp0_stage0_iter125 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state127_pp0_stage0_iter126() {
    ap_block_state127_pp0_stage0_iter126 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state128_pp0_stage0_iter127() {
    ap_block_state128_pp0_stage0_iter127 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state129_pp0_stage0_iter128() {
    ap_block_state129_pp0_stage0_iter128 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state12_pp0_stage0_iter11() {
    ap_block_state12_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state130_pp0_stage0_iter129() {
    ap_block_state130_pp0_stage0_iter129 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state131_pp0_stage0_iter130() {
    ap_block_state131_pp0_stage0_iter130 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state132_pp0_stage0_iter131() {
    ap_block_state132_pp0_stage0_iter131 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state133_pp0_stage0_iter132() {
    ap_block_state133_pp0_stage0_iter132 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state134_pp0_stage0_iter133() {
    ap_block_state134_pp0_stage0_iter133 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state135_pp0_stage0_iter134() {
    ap_block_state135_pp0_stage0_iter134 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state136_pp0_stage0_iter135() {
    ap_block_state136_pp0_stage0_iter135 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state137_pp0_stage0_iter136() {
    ap_block_state137_pp0_stage0_iter136 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state138_pp0_stage0_iter137() {
    ap_block_state138_pp0_stage0_iter137 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state139_pp0_stage0_iter138() {
    ap_block_state139_pp0_stage0_iter138 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state13_pp0_stage0_iter12() {
    ap_block_state13_pp0_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state140_pp0_stage0_iter139() {
    ap_block_state140_pp0_stage0_iter139 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state141_pp0_stage0_iter140() {
    ap_block_state141_pp0_stage0_iter140 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state142_pp0_stage0_iter141() {
    ap_block_state142_pp0_stage0_iter141 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state143_pp0_stage0_iter142() {
    ap_block_state143_pp0_stage0_iter142 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state144_pp0_stage0_iter143() {
    ap_block_state144_pp0_stage0_iter143 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state145_pp0_stage0_iter144() {
    ap_block_state145_pp0_stage0_iter144 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state146_pp0_stage0_iter145() {
    ap_block_state146_pp0_stage0_iter145 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state147_pp0_stage0_iter146() {
    ap_block_state147_pp0_stage0_iter146 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state148_pp0_stage0_iter147() {
    ap_block_state148_pp0_stage0_iter147 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state149_pp0_stage0_iter148() {
    ap_block_state149_pp0_stage0_iter148 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state14_pp0_stage0_iter13() {
    ap_block_state14_pp0_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state150_pp0_stage0_iter149() {
    ap_block_state150_pp0_stage0_iter149 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state151_pp0_stage0_iter150() {
    ap_block_state151_pp0_stage0_iter150 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state152_pp0_stage0_iter151() {
    ap_block_state152_pp0_stage0_iter151 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state153_pp0_stage0_iter152() {
    ap_block_state153_pp0_stage0_iter152 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state154_pp0_stage0_iter153() {
    ap_block_state154_pp0_stage0_iter153 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state155_pp0_stage0_iter154() {
    ap_block_state155_pp0_stage0_iter154 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state156_pp0_stage0_iter155() {
    ap_block_state156_pp0_stage0_iter155 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state157_pp0_stage0_iter156() {
    ap_block_state157_pp0_stage0_iter156 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state158_pp0_stage0_iter157() {
    ap_block_state158_pp0_stage0_iter157 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state159_pp0_stage0_iter158() {
    ap_block_state159_pp0_stage0_iter158 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state15_pp0_stage0_iter14() {
    ap_block_state15_pp0_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state160_pp0_stage0_iter159() {
    ap_block_state160_pp0_stage0_iter159 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state161_pp0_stage0_iter160() {
    ap_block_state161_pp0_stage0_iter160 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state162_pp0_stage0_iter161() {
    ap_block_state162_pp0_stage0_iter161 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state163_pp0_stage0_iter162() {
    ap_block_state163_pp0_stage0_iter162 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state164_pp0_stage0_iter163() {
    ap_block_state164_pp0_stage0_iter163 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state165_pp0_stage0_iter164() {
    ap_block_state165_pp0_stage0_iter164 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state166_pp0_stage0_iter165() {
    ap_block_state166_pp0_stage0_iter165 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state167_pp0_stage0_iter166() {
    ap_block_state167_pp0_stage0_iter166 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state168_pp0_stage0_iter167() {
    ap_block_state168_pp0_stage0_iter167 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state169_pp0_stage0_iter168() {
    ap_block_state169_pp0_stage0_iter168 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state16_pp0_stage0_iter15() {
    ap_block_state16_pp0_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state170_pp0_stage0_iter169() {
    ap_block_state170_pp0_stage0_iter169 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state171_pp0_stage0_iter170() {
    ap_block_state171_pp0_stage0_iter170 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state172_pp0_stage0_iter171() {
    ap_block_state172_pp0_stage0_iter171 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state173_pp0_stage0_iter172() {
    ap_block_state173_pp0_stage0_iter172 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state174_pp0_stage0_iter173() {
    ap_block_state174_pp0_stage0_iter173 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state175_pp0_stage0_iter174() {
    ap_block_state175_pp0_stage0_iter174 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state176_pp0_stage0_iter175() {
    ap_block_state176_pp0_stage0_iter175 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state177_pp0_stage0_iter176() {
    ap_block_state177_pp0_stage0_iter176 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state178_pp0_stage0_iter177() {
    ap_block_state178_pp0_stage0_iter177 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state179_pp0_stage0_iter178() {
    ap_block_state179_pp0_stage0_iter178 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state17_pp0_stage0_iter16() {
    ap_block_state17_pp0_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state180_pp0_stage0_iter179() {
    ap_block_state180_pp0_stage0_iter179 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state181_pp0_stage0_iter180() {
    ap_block_state181_pp0_stage0_iter180 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state182_pp0_stage0_iter181() {
    ap_block_state182_pp0_stage0_iter181 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state183_pp0_stage0_iter182() {
    ap_block_state183_pp0_stage0_iter182 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state184_pp0_stage0_iter183() {
    ap_block_state184_pp0_stage0_iter183 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state185_pp0_stage0_iter184() {
    ap_block_state185_pp0_stage0_iter184 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state186_pp0_stage0_iter185() {
    ap_block_state186_pp0_stage0_iter185 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state187_pp0_stage0_iter186() {
    ap_block_state187_pp0_stage0_iter186 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state188_pp0_stage0_iter187() {
    ap_block_state188_pp0_stage0_iter187 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state189_pp0_stage0_iter188() {
    ap_block_state189_pp0_stage0_iter188 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state18_pp0_stage0_iter17() {
    ap_block_state18_pp0_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state190_pp0_stage0_iter189() {
    ap_block_state190_pp0_stage0_iter189 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state191_pp0_stage0_iter190() {
    ap_block_state191_pp0_stage0_iter190 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state192_pp0_stage0_iter191() {
    ap_block_state192_pp0_stage0_iter191 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state193_pp0_stage0_iter192() {
    ap_block_state193_pp0_stage0_iter192 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state194_pp0_stage0_iter193() {
    ap_block_state194_pp0_stage0_iter193 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state195_pp0_stage0_iter194() {
    ap_block_state195_pp0_stage0_iter194 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state196_pp0_stage0_iter195() {
    ap_block_state196_pp0_stage0_iter195 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state197_pp0_stage0_iter196() {
    ap_block_state197_pp0_stage0_iter196 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state198_pp0_stage0_iter197() {
    ap_block_state198_pp0_stage0_iter197 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state199_pp0_stage0_iter198() {
    ap_block_state199_pp0_stage0_iter198 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state19_pp0_stage0_iter18() {
    ap_block_state19_pp0_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void cordiccart2pol::thread_ap_block_state200_pp0_stage0_iter199() {
    ap_block_state200_pp0_stage0_iter199 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state201_pp0_stage0_iter200() {
    ap_block_state201_pp0_stage0_iter200 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state202_pp0_stage0_iter201() {
    ap_block_state202_pp0_stage0_iter201 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state203_pp0_stage0_iter202() {
    ap_block_state203_pp0_stage0_iter202 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state204_pp0_stage0_iter203() {
    ap_block_state204_pp0_stage0_iter203 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state205_pp0_stage0_iter204() {
    ap_block_state205_pp0_stage0_iter204 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state206_pp0_stage0_iter205() {
    ap_block_state206_pp0_stage0_iter205 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state207_pp0_stage0_iter206() {
    ap_block_state207_pp0_stage0_iter206 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state208_pp0_stage0_iter207() {
    ap_block_state208_pp0_stage0_iter207 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state209_pp0_stage0_iter208() {
    ap_block_state209_pp0_stage0_iter208 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state20_pp0_stage0_iter19() {
    ap_block_state20_pp0_stage0_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state210_pp0_stage0_iter209() {
    ap_block_state210_pp0_stage0_iter209 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state211_pp0_stage0_iter210() {
    ap_block_state211_pp0_stage0_iter210 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state212_pp0_stage0_iter211() {
    ap_block_state212_pp0_stage0_iter211 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state213_pp0_stage0_iter212() {
    ap_block_state213_pp0_stage0_iter212 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state214_pp0_stage0_iter213() {
    ap_block_state214_pp0_stage0_iter213 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state215_pp0_stage0_iter214() {
    ap_block_state215_pp0_stage0_iter214 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state216_pp0_stage0_iter215() {
    ap_block_state216_pp0_stage0_iter215 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state217_pp0_stage0_iter216() {
    ap_block_state217_pp0_stage0_iter216 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state218_pp0_stage0_iter217() {
    ap_block_state218_pp0_stage0_iter217 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state219_pp0_stage0_iter218() {
    ap_block_state219_pp0_stage0_iter218 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state21_pp0_stage0_iter20() {
    ap_block_state21_pp0_stage0_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state220_pp0_stage0_iter219() {
    ap_block_state220_pp0_stage0_iter219 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state221_pp0_stage0_iter220() {
    ap_block_state221_pp0_stage0_iter220 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state222_pp0_stage0_iter221() {
    ap_block_state222_pp0_stage0_iter221 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state223_pp0_stage0_iter222() {
    ap_block_state223_pp0_stage0_iter222 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state224_pp0_stage0_iter223() {
    ap_block_state224_pp0_stage0_iter223 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state225_pp0_stage0_iter224() {
    ap_block_state225_pp0_stage0_iter224 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state226_pp0_stage0_iter225() {
    ap_block_state226_pp0_stage0_iter225 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state227_pp0_stage0_iter226() {
    ap_block_state227_pp0_stage0_iter226 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state228_pp0_stage0_iter227() {
    ap_block_state228_pp0_stage0_iter227 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state229_pp0_stage0_iter228() {
    ap_block_state229_pp0_stage0_iter228 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state22_pp0_stage0_iter21() {
    ap_block_state22_pp0_stage0_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state230_pp0_stage0_iter229() {
    ap_block_state230_pp0_stage0_iter229 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state231_pp0_stage0_iter230() {
    ap_block_state231_pp0_stage0_iter230 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state232_pp0_stage0_iter231() {
    ap_block_state232_pp0_stage0_iter231 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state233_pp0_stage0_iter232() {
    ap_block_state233_pp0_stage0_iter232 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state234_pp0_stage0_iter233() {
    ap_block_state234_pp0_stage0_iter233 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state235_pp0_stage0_iter234() {
    ap_block_state235_pp0_stage0_iter234 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state236_pp0_stage0_iter235() {
    ap_block_state236_pp0_stage0_iter235 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state237_pp0_stage0_iter236() {
    ap_block_state237_pp0_stage0_iter236 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state238_pp0_stage0_iter237() {
    ap_block_state238_pp0_stage0_iter237 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state239_pp0_stage0_iter238() {
    ap_block_state239_pp0_stage0_iter238 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state23_pp0_stage0_iter22() {
    ap_block_state23_pp0_stage0_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state240_pp0_stage0_iter239() {
    ap_block_state240_pp0_stage0_iter239 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state241_pp0_stage0_iter240() {
    ap_block_state241_pp0_stage0_iter240 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state242_pp0_stage0_iter241() {
    ap_block_state242_pp0_stage0_iter241 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state243_pp0_stage0_iter242() {
    ap_block_state243_pp0_stage0_iter242 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state244_pp0_stage0_iter243() {
    ap_block_state244_pp0_stage0_iter243 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state245_pp0_stage0_iter244() {
    ap_block_state245_pp0_stage0_iter244 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state246_pp0_stage0_iter245() {
    ap_block_state246_pp0_stage0_iter245 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state247_pp0_stage0_iter246() {
    ap_block_state247_pp0_stage0_iter246 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state248_pp0_stage0_iter247() {
    ap_block_state248_pp0_stage0_iter247 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state24_pp0_stage0_iter23() {
    ap_block_state24_pp0_stage0_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state25_pp0_stage0_iter24() {
    ap_block_state25_pp0_stage0_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state26_pp0_stage0_iter25() {
    ap_block_state26_pp0_stage0_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state27_pp0_stage0_iter26() {
    ap_block_state27_pp0_stage0_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state28_pp0_stage0_iter27() {
    ap_block_state28_pp0_stage0_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state29_pp0_stage0_iter28() {
    ap_block_state29_pp0_stage0_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state30_pp0_stage0_iter29() {
    ap_block_state30_pp0_stage0_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state31_pp0_stage0_iter30() {
    ap_block_state31_pp0_stage0_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state32_pp0_stage0_iter31() {
    ap_block_state32_pp0_stage0_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state33_pp0_stage0_iter32() {
    ap_block_state33_pp0_stage0_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state34_pp0_stage0_iter33() {
    ap_block_state34_pp0_stage0_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state35_pp0_stage0_iter34() {
    ap_block_state35_pp0_stage0_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state36_pp0_stage0_iter35() {
    ap_block_state36_pp0_stage0_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state37_pp0_stage0_iter36() {
    ap_block_state37_pp0_stage0_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state38_pp0_stage0_iter37() {
    ap_block_state38_pp0_stage0_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state39_pp0_stage0_iter38() {
    ap_block_state39_pp0_stage0_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state3_pp0_stage0_iter2() {
    ap_block_state3_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state40_pp0_stage0_iter39() {
    ap_block_state40_pp0_stage0_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state41_pp0_stage0_iter40() {
    ap_block_state41_pp0_stage0_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state42_pp0_stage0_iter41() {
    ap_block_state42_pp0_stage0_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state43_pp0_stage0_iter42() {
    ap_block_state43_pp0_stage0_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state44_pp0_stage0_iter43() {
    ap_block_state44_pp0_stage0_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state45_pp0_stage0_iter44() {
    ap_block_state45_pp0_stage0_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state46_pp0_stage0_iter45() {
    ap_block_state46_pp0_stage0_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state47_pp0_stage0_iter46() {
    ap_block_state47_pp0_stage0_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state48_pp0_stage0_iter47() {
    ap_block_state48_pp0_stage0_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state49_pp0_stage0_iter48() {
    ap_block_state49_pp0_stage0_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state4_pp0_stage0_iter3() {
    ap_block_state4_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state50_pp0_stage0_iter49() {
    ap_block_state50_pp0_stage0_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state51_pp0_stage0_iter50() {
    ap_block_state51_pp0_stage0_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state52_pp0_stage0_iter51() {
    ap_block_state52_pp0_stage0_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state53_pp0_stage0_iter52() {
    ap_block_state53_pp0_stage0_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state54_pp0_stage0_iter53() {
    ap_block_state54_pp0_stage0_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state55_pp0_stage0_iter54() {
    ap_block_state55_pp0_stage0_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state56_pp0_stage0_iter55() {
    ap_block_state56_pp0_stage0_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state57_pp0_stage0_iter56() {
    ap_block_state57_pp0_stage0_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state58_pp0_stage0_iter57() {
    ap_block_state58_pp0_stage0_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state59_pp0_stage0_iter58() {
    ap_block_state59_pp0_stage0_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state5_pp0_stage0_iter4() {
    ap_block_state5_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state60_pp0_stage0_iter59() {
    ap_block_state60_pp0_stage0_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state61_pp0_stage0_iter60() {
    ap_block_state61_pp0_stage0_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state62_pp0_stage0_iter61() {
    ap_block_state62_pp0_stage0_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state63_pp0_stage0_iter62() {
    ap_block_state63_pp0_stage0_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state64_pp0_stage0_iter63() {
    ap_block_state64_pp0_stage0_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state65_pp0_stage0_iter64() {
    ap_block_state65_pp0_stage0_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state66_pp0_stage0_iter65() {
    ap_block_state66_pp0_stage0_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state67_pp0_stage0_iter66() {
    ap_block_state67_pp0_stage0_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state68_pp0_stage0_iter67() {
    ap_block_state68_pp0_stage0_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state69_pp0_stage0_iter68() {
    ap_block_state69_pp0_stage0_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state6_pp0_stage0_iter5() {
    ap_block_state6_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state70_pp0_stage0_iter69() {
    ap_block_state70_pp0_stage0_iter69 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state71_pp0_stage0_iter70() {
    ap_block_state71_pp0_stage0_iter70 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state72_pp0_stage0_iter71() {
    ap_block_state72_pp0_stage0_iter71 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state73_pp0_stage0_iter72() {
    ap_block_state73_pp0_stage0_iter72 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state74_pp0_stage0_iter73() {
    ap_block_state74_pp0_stage0_iter73 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state75_pp0_stage0_iter74() {
    ap_block_state75_pp0_stage0_iter74 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state76_pp0_stage0_iter75() {
    ap_block_state76_pp0_stage0_iter75 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state77_pp0_stage0_iter76() {
    ap_block_state77_pp0_stage0_iter76 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state78_pp0_stage0_iter77() {
    ap_block_state78_pp0_stage0_iter77 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state79_pp0_stage0_iter78() {
    ap_block_state79_pp0_stage0_iter78 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state7_pp0_stage0_iter6() {
    ap_block_state7_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state80_pp0_stage0_iter79() {
    ap_block_state80_pp0_stage0_iter79 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state81_pp0_stage0_iter80() {
    ap_block_state81_pp0_stage0_iter80 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state82_pp0_stage0_iter81() {
    ap_block_state82_pp0_stage0_iter81 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state83_pp0_stage0_iter82() {
    ap_block_state83_pp0_stage0_iter82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state84_pp0_stage0_iter83() {
    ap_block_state84_pp0_stage0_iter83 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state85_pp0_stage0_iter84() {
    ap_block_state85_pp0_stage0_iter84 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state86_pp0_stage0_iter85() {
    ap_block_state86_pp0_stage0_iter85 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state87_pp0_stage0_iter86() {
    ap_block_state87_pp0_stage0_iter86 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state88_pp0_stage0_iter87() {
    ap_block_state88_pp0_stage0_iter87 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state89_pp0_stage0_iter88() {
    ap_block_state89_pp0_stage0_iter88 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state8_pp0_stage0_iter7() {
    ap_block_state8_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state90_pp0_stage0_iter89() {
    ap_block_state90_pp0_stage0_iter89 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state91_pp0_stage0_iter90() {
    ap_block_state91_pp0_stage0_iter90 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state92_pp0_stage0_iter91() {
    ap_block_state92_pp0_stage0_iter91 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state93_pp0_stage0_iter92() {
    ap_block_state93_pp0_stage0_iter92 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state94_pp0_stage0_iter93() {
    ap_block_state94_pp0_stage0_iter93 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state95_pp0_stage0_iter94() {
    ap_block_state95_pp0_stage0_iter94 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state96_pp0_stage0_iter95() {
    ap_block_state96_pp0_stage0_iter95 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state97_pp0_stage0_iter96() {
    ap_block_state97_pp0_stage0_iter96 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state98_pp0_stage0_iter97() {
    ap_block_state98_pp0_stage0_iter97 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state99_pp0_stage0_iter98() {
    ap_block_state99_pp0_stage0_iter98 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_block_state9_pp0_stage0_iter8() {
    ap_block_state9_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordiccart2pol::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter247.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void cordiccart2pol::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void cordiccart2pol::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void cordiccart2pol::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void cordiccart2pol::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter56.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter58.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter59.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter61.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter62.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter64.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter65.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter66.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter67.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter68.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter69.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter70.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter71.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter72.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter73.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter74.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter75.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter76.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter77.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter78.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter79.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter80.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter81.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter82.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter83.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter84.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter85.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter86.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter87.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter88.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter89.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter90.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter91.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter92.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter93.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter94.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter95.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter96.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter97.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter98.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter99.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter100.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter101.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter102.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter103.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter104.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter105.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter106.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter107.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter108.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter109.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter110.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter111.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter112.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter113.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter114.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter115.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter116.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter117.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter118.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter119.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter120.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter121.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter122.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter123.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter124.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter125.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter126.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter127.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter128.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter129.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter130.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter131.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter132.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter133.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter134.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter135.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter136.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter137.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter138.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter139.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter140.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter141.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter142.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter143.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter144.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter145.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter146.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter147.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter148.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter149.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter150.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter151.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter152.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter153.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter154.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter155.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter156.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter157.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter158.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter159.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter160.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter161.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter162.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter163.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter164.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter165.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter166.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter167.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter168.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter169.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter170.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter171.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter172.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter173.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter174.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter175.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter177.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter178.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter179.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter180.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter181.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter182.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter183.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter184.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter185.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter186.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter187.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter188.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter189.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter190.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter191.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter192.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter193.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter194.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter195.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter196.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter197.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter198.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter199.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter200.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter201.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter202.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter203.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter204.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter205.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter206.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter207.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter208.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter209.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter210.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter211.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter212.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter213.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter214.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter215.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter216.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter217.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter218.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter219.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter220.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter221.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter222.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter223.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter224.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter225.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter226.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter228.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter229.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter230.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter231.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter232.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter233.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter234.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter235.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter236.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter237.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter238.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter239.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter240.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter241.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter242.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter243.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter244.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter245.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter246.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter247.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void cordiccart2pol::thread_ap_idle_pp0_0to246() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter56.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter58.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter59.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter61.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter62.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter64.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter65.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter66.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter67.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter68.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter69.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter70.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter71.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter72.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter73.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter74.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter75.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter76.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter77.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter78.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter79.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter80.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter81.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter82.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter83.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter84.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter85.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter86.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter87.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter88.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter89.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter90.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter91.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter92.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter93.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter94.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter95.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter96.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter97.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter98.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter99.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter100.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter101.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter102.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter103.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter104.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter105.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter106.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter107.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter108.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter109.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter110.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter111.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter112.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter113.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter114.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter115.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter116.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter117.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter118.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter119.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter120.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter121.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter122.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter123.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter124.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter125.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter126.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter127.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter128.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter129.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter130.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter131.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter132.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter133.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter134.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter135.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter136.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter137.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter138.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter139.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter140.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter141.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter142.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter143.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter144.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter145.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter146.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter147.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter148.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter149.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter150.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter151.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter152.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter153.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter154.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter155.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter156.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter157.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter158.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter159.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter160.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter161.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter162.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter163.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter164.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter165.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter166.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter167.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter168.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter169.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter170.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter171.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter172.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter173.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter174.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter175.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter177.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter178.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter179.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter180.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter181.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter182.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter183.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter184.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter185.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter186.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter187.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter188.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter189.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter190.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter191.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter192.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter193.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter194.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter195.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter196.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter197.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter198.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter199.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter200.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter201.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter202.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter203.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter204.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter205.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter206.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter207.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter208.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter209.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter210.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter211.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter212.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter213.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter214.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter215.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter216.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter217.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter218.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter219.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter220.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter221.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter222.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter223.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter224.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter225.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter226.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter228.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter229.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter230.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter231.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter232.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter233.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter234.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter235.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter236.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter237.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter238.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter239.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter240.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter241.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter242.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter243.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter244.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter245.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter246.read()))) {
        ap_idle_pp0_0to246 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to246 = ap_const_logic_0;
    }
}

void cordiccart2pol::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void cordiccart2pol::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to246.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void cordiccart2pol::thread_bitcast_ln26_fu_767_p1() {
    bitcast_ln26_fu_767_p1 = y_read_reg_1636.read();
}

void cordiccart2pol::thread_bitcast_ln29_fu_825_p1() {
    bitcast_ln29_fu_825_p1 = x_read_reg_1643_pp0_iter1_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_10_fu_1343_p1() {
    bitcast_ln44_10_fu_1343_p1 = y_copy_1_9_reg_2316_pp0_iter148_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_11_fu_1392_p1() {
    bitcast_ln44_11_fu_1392_p1 = y_copy_1_s_reg_2382_pp0_iter163_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_12_fu_1441_p1() {
    bitcast_ln44_12_fu_1441_p1 = y_copy_1_10_reg_2448_pp0_iter178_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_13_fu_1490_p1() {
    bitcast_ln44_13_fu_1490_p1 = y_copy_1_11_reg_2514_pp0_iter193_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_14_fu_1539_p1() {
    bitcast_ln44_14_fu_1539_p1 = y_copy_1_12_reg_2580_pp0_iter208_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_15_fu_1588_p1() {
    bitcast_ln44_15_fu_1588_p1 = y_copy_1_13_reg_2645_pp0_iter223_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_1_fu_902_p1() {
    bitcast_ln44_1_fu_902_p1 = y_copy_1_reg_1717_pp0_iter13_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_2_fu_951_p1() {
    bitcast_ln44_2_fu_951_p1 = y_copy_1_1_reg_1788_pp0_iter28_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_3_fu_1000_p1() {
    bitcast_ln44_3_fu_1000_p1 = y_copy_1_2_reg_1854_pp0_iter43_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_4_fu_1049_p1() {
    bitcast_ln44_4_fu_1049_p1 = y_copy_1_3_reg_1920_pp0_iter58_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_5_fu_1098_p1() {
    bitcast_ln44_5_fu_1098_p1 = y_copy_1_4_reg_1986_pp0_iter73_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_6_fu_1147_p1() {
    bitcast_ln44_6_fu_1147_p1 = y_copy_1_5_reg_2052_pp0_iter88_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_7_fu_1196_p1() {
    bitcast_ln44_7_fu_1196_p1 = y_copy_1_6_reg_2118_pp0_iter103_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_8_fu_1245_p1() {
    bitcast_ln44_8_fu_1245_p1 = y_copy_1_7_reg_2184_pp0_iter118_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_9_fu_1294_p1() {
    bitcast_ln44_9_fu_1294_p1 = y_copy_1_8_reg_2250_pp0_iter133_reg.read();
}

void cordiccart2pol::thread_bitcast_ln44_fu_845_p1() {
    bitcast_ln44_fu_845_p1 = y_copy_2_reg_1661.read();
}

void cordiccart2pol::thread_grp_fu_140_p0() {
    grp_fu_140_p0 = (!and_ln26_reg_1649_pp0_iter7_reg.read()[0].is_01())? sc_lv<32>(): ((and_ln26_reg_1649_pp0_iter7_reg.read()[0].to_bool())? ap_const_lv32_3FC90FDB: ap_const_lv32_BFC90FDB);
}

void cordiccart2pol::thread_grp_fu_682_p0() {
    grp_fu_682_p0 = (!and_ln26_reg_1649.read()[0].is_01())? sc_lv<32>(): ((and_ln26_reg_1649.read()[0].to_bool())? y_copy_fu_834_p1.read(): x_read_reg_1643_pp0_iter1_reg.read());
}

void cordiccart2pol::thread_icmp_ln26_1_fu_790_p2() {
    icmp_ln26_1_fu_790_p2 = (!trunc_ln26_fu_780_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln26_fu_780_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln26_fu_784_p2() {
    icmp_ln26_fu_784_p2 = (!tmp_fu_770_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_fu_770_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_10_fu_1115_p2() {
    icmp_ln44_10_fu_1115_p2 = (!tmp_17_fu_1101_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_17_fu_1101_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_11_fu_1121_p2() {
    icmp_ln44_11_fu_1121_p2 = (!trunc_ln44_5_fu_1111_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_5_fu_1111_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_12_fu_1164_p2() {
    icmp_ln44_12_fu_1164_p2 = (!tmp_19_fu_1150_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_19_fu_1150_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_13_fu_1170_p2() {
    icmp_ln44_13_fu_1170_p2 = (!trunc_ln44_6_fu_1160_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_6_fu_1160_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_14_fu_1213_p2() {
    icmp_ln44_14_fu_1213_p2 = (!tmp_21_fu_1199_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_21_fu_1199_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_15_fu_1219_p2() {
    icmp_ln44_15_fu_1219_p2 = (!trunc_ln44_7_fu_1209_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_7_fu_1209_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_16_fu_1262_p2() {
    icmp_ln44_16_fu_1262_p2 = (!tmp_23_fu_1248_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_23_fu_1248_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_17_fu_1268_p2() {
    icmp_ln44_17_fu_1268_p2 = (!trunc_ln44_8_fu_1258_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_8_fu_1258_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_18_fu_1311_p2() {
    icmp_ln44_18_fu_1311_p2 = (!tmp_25_fu_1297_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_25_fu_1297_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_19_fu_1317_p2() {
    icmp_ln44_19_fu_1317_p2 = (!trunc_ln44_9_fu_1307_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_9_fu_1307_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_1_fu_868_p2() {
    icmp_ln44_1_fu_868_p2 = (!trunc_ln44_fu_858_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_fu_858_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_20_fu_1360_p2() {
    icmp_ln44_20_fu_1360_p2 = (!tmp_27_fu_1346_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_27_fu_1346_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_21_fu_1366_p2() {
    icmp_ln44_21_fu_1366_p2 = (!trunc_ln44_10_fu_1356_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_10_fu_1356_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_22_fu_1409_p2() {
    icmp_ln44_22_fu_1409_p2 = (!tmp_29_fu_1395_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_29_fu_1395_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_23_fu_1415_p2() {
    icmp_ln44_23_fu_1415_p2 = (!trunc_ln44_11_fu_1405_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_11_fu_1405_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_24_fu_1458_p2() {
    icmp_ln44_24_fu_1458_p2 = (!tmp_31_fu_1444_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_31_fu_1444_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_25_fu_1464_p2() {
    icmp_ln44_25_fu_1464_p2 = (!trunc_ln44_12_fu_1454_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_12_fu_1454_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_26_fu_1507_p2() {
    icmp_ln44_26_fu_1507_p2 = (!tmp_33_fu_1493_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_33_fu_1493_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_27_fu_1513_p2() {
    icmp_ln44_27_fu_1513_p2 = (!trunc_ln44_13_fu_1503_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_13_fu_1503_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_28_fu_1556_p2() {
    icmp_ln44_28_fu_1556_p2 = (!tmp_35_fu_1542_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_35_fu_1542_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_29_fu_1562_p2() {
    icmp_ln44_29_fu_1562_p2 = (!trunc_ln44_14_fu_1552_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_14_fu_1552_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_2_fu_919_p2() {
    icmp_ln44_2_fu_919_p2 = (!tmp_9_fu_905_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_9_fu_905_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_30_fu_1605_p2() {
    icmp_ln44_30_fu_1605_p2 = (!tmp_37_fu_1591_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_37_fu_1591_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_31_fu_1611_p2() {
    icmp_ln44_31_fu_1611_p2 = (!trunc_ln44_15_fu_1601_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_15_fu_1601_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_3_fu_925_p2() {
    icmp_ln44_3_fu_925_p2 = (!trunc_ln44_1_fu_915_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_1_fu_915_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_4_fu_968_p2() {
    icmp_ln44_4_fu_968_p2 = (!tmp_11_fu_954_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_fu_954_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_5_fu_974_p2() {
    icmp_ln44_5_fu_974_p2 = (!trunc_ln44_2_fu_964_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_2_fu_964_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_6_fu_1017_p2() {
    icmp_ln44_6_fu_1017_p2 = (!tmp_13_fu_1003_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_13_fu_1003_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_7_fu_1023_p2() {
    icmp_ln44_7_fu_1023_p2 = (!trunc_ln44_3_fu_1013_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_3_fu_1013_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_8_fu_1066_p2() {
    icmp_ln44_8_fu_1066_p2 = (!tmp_15_fu_1052_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_15_fu_1052_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_icmp_ln44_9_fu_1072_p2() {
    icmp_ln44_9_fu_1072_p2 = (!trunc_ln44_4_fu_1062_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln44_4_fu_1062_p1.read() == ap_const_lv23_0);
}

void cordiccart2pol::thread_icmp_ln44_fu_862_p2() {
    icmp_ln44_fu_862_p2 = (!tmp_6_fu_848_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6_fu_848_p4.read() != ap_const_lv8_FF);
}

void cordiccart2pol::thread_or_ln26_fu_796_p2() {
    or_ln26_fu_796_p2 = (icmp_ln26_1_fu_790_p2.read() | icmp_ln26_fu_784_p2.read());
}

void cordiccart2pol::thread_or_ln44_10_fu_1372_p2() {
    or_ln44_10_fu_1372_p2 = (icmp_ln44_21_reg_2329.read() | icmp_ln44_20_reg_2324.read());
}

void cordiccart2pol::thread_or_ln44_11_fu_1421_p2() {
    or_ln44_11_fu_1421_p2 = (icmp_ln44_23_reg_2395.read() | icmp_ln44_22_reg_2390.read());
}

void cordiccart2pol::thread_or_ln44_12_fu_1470_p2() {
    or_ln44_12_fu_1470_p2 = (icmp_ln44_25_reg_2461.read() | icmp_ln44_24_reg_2456.read());
}

void cordiccart2pol::thread_or_ln44_13_fu_1519_p2() {
    or_ln44_13_fu_1519_p2 = (icmp_ln44_27_reg_2527.read() | icmp_ln44_26_reg_2522.read());
}

void cordiccart2pol::thread_or_ln44_14_fu_1568_p2() {
    or_ln44_14_fu_1568_p2 = (icmp_ln44_29_reg_2593.read() | icmp_ln44_28_reg_2588.read());
}

void cordiccart2pol::thread_or_ln44_15_fu_1617_p2() {
    or_ln44_15_fu_1617_p2 = (icmp_ln44_31_reg_2657.read() | icmp_ln44_30_reg_2652.read());
}

void cordiccart2pol::thread_or_ln44_1_fu_931_p2() {
    or_ln44_1_fu_931_p2 = (icmp_ln44_3_reg_1735.read() | icmp_ln44_2_reg_1730.read());
}

void cordiccart2pol::thread_or_ln44_2_fu_980_p2() {
    or_ln44_2_fu_980_p2 = (icmp_ln44_5_reg_1801.read() | icmp_ln44_4_reg_1796.read());
}

void cordiccart2pol::thread_or_ln44_3_fu_1029_p2() {
    or_ln44_3_fu_1029_p2 = (icmp_ln44_7_reg_1867.read() | icmp_ln44_6_reg_1862.read());
}

void cordiccart2pol::thread_or_ln44_4_fu_1078_p2() {
    or_ln44_4_fu_1078_p2 = (icmp_ln44_9_reg_1933.read() | icmp_ln44_8_reg_1928.read());
}

void cordiccart2pol::thread_or_ln44_5_fu_1127_p2() {
    or_ln44_5_fu_1127_p2 = (icmp_ln44_11_reg_1999.read() | icmp_ln44_10_reg_1994.read());
}

void cordiccart2pol::thread_or_ln44_6_fu_1176_p2() {
    or_ln44_6_fu_1176_p2 = (icmp_ln44_13_reg_2065.read() | icmp_ln44_12_reg_2060.read());
}

void cordiccart2pol::thread_or_ln44_7_fu_1225_p2() {
    or_ln44_7_fu_1225_p2 = (icmp_ln44_15_reg_2131.read() | icmp_ln44_14_reg_2126.read());
}

void cordiccart2pol::thread_or_ln44_8_fu_1274_p2() {
    or_ln44_8_fu_1274_p2 = (icmp_ln44_17_reg_2197.read() | icmp_ln44_16_reg_2192.read());
}

void cordiccart2pol::thread_or_ln44_9_fu_1323_p2() {
    or_ln44_9_fu_1323_p2 = (icmp_ln44_19_reg_2263.read() | icmp_ln44_18_reg_2258.read());
}

void cordiccart2pol::thread_or_ln44_fu_874_p2() {
    or_ln44_fu_874_p2 = (icmp_ln44_1_reg_1674.read() | icmp_ln44_reg_1669.read());
}

void cordiccart2pol::thread_r() {
    r = grp_fu_669_p1.read();
}

void cordiccart2pol::thread_r_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter247.read()))) {
        r_ap_vld = ap_const_logic_1;
    } else {
        r_ap_vld = ap_const_logic_0;
    }
}

void cordiccart2pol::thread_select_ln55_10_fu_1381_p3() {
    select_ln55_10_fu_1381_p3 = (!and_ln44_10_fu_1376_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_10_fu_1376_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_11_fu_1430_p3() {
    select_ln55_11_fu_1430_p3 = (!and_ln44_11_fu_1425_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_11_fu_1425_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_12_fu_1479_p3() {
    select_ln55_12_fu_1479_p3 = (!and_ln44_12_fu_1474_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_12_fu_1474_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_13_fu_1528_p3() {
    select_ln55_13_fu_1528_p3 = (!and_ln44_13_fu_1523_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_13_fu_1523_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_14_fu_1577_p3() {
    select_ln55_14_fu_1577_p3 = (!and_ln44_14_fu_1572_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_14_fu_1572_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_15_fu_1626_p3() {
    select_ln55_15_fu_1626_p3 = (!and_ln44_15_fu_1621_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_15_fu_1621_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_1_fu_940_p3() {
    select_ln55_1_fu_940_p3 = (!and_ln44_1_fu_935_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_1_fu_935_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_2_fu_989_p3() {
    select_ln55_2_fu_989_p3 = (!and_ln44_2_fu_984_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_2_fu_984_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_3_fu_1038_p3() {
    select_ln55_3_fu_1038_p3 = (!and_ln44_3_fu_1033_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_3_fu_1033_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_4_fu_1087_p3() {
    select_ln55_4_fu_1087_p3 = (!and_ln44_4_fu_1082_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_4_fu_1082_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_5_fu_1136_p3() {
    select_ln55_5_fu_1136_p3 = (!and_ln44_5_fu_1131_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_5_fu_1131_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_6_fu_1185_p3() {
    select_ln55_6_fu_1185_p3 = (!and_ln44_6_fu_1180_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_6_fu_1180_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_7_fu_1234_p3() {
    select_ln55_7_fu_1234_p3 = (!and_ln44_7_fu_1229_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_7_fu_1229_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_8_fu_1283_p3() {
    select_ln55_8_fu_1283_p3 = (!and_ln44_8_fu_1278_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_8_fu_1278_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_9_fu_1332_p3() {
    select_ln55_9_fu_1332_p3 = (!and_ln44_9_fu_1327_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_9_fu_1327_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_select_ln55_fu_883_p3() {
    select_ln55_fu_883_p3 = (!and_ln44_fu_878_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln44_fu_878_p2.read()[0].to_bool())? ap_const_lv32_BF800000: ap_const_lv32_3F800000);
}

void cordiccart2pol::thread_theta() {
    theta = angle_14_reg_2688_pp0_iter246_reg.read();
}

void cordiccart2pol::thread_theta_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter247.read()))) {
        theta_ap_vld = ap_const_logic_1;
    } else {
        theta_ap_vld = ap_const_logic_0;
    }
}

void cordiccart2pol::thread_tmp_11_fu_954_p4() {
    tmp_11_fu_954_p4 = bitcast_ln44_2_fu_951_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_13_fu_1003_p4() {
    tmp_13_fu_1003_p4 = bitcast_ln44_3_fu_1000_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_15_fu_1052_p4() {
    tmp_15_fu_1052_p4 = bitcast_ln44_4_fu_1049_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_17_fu_1101_p4() {
    tmp_17_fu_1101_p4 = bitcast_ln44_5_fu_1098_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_19_fu_1150_p4() {
    tmp_19_fu_1150_p4 = bitcast_ln44_6_fu_1147_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_21_fu_1199_p4() {
    tmp_21_fu_1199_p4 = bitcast_ln44_7_fu_1196_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_23_fu_1248_p4() {
    tmp_23_fu_1248_p4 = bitcast_ln44_8_fu_1245_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_25_fu_1297_p4() {
    tmp_25_fu_1297_p4 = bitcast_ln44_9_fu_1294_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_27_fu_1346_p4() {
    tmp_27_fu_1346_p4 = bitcast_ln44_10_fu_1343_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_29_fu_1395_p4() {
    tmp_29_fu_1395_p4 = bitcast_ln44_11_fu_1392_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_31_fu_1444_p4() {
    tmp_31_fu_1444_p4 = bitcast_ln44_12_fu_1441_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_33_fu_1493_p4() {
    tmp_33_fu_1493_p4 = bitcast_ln44_13_fu_1490_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_35_fu_1542_p4() {
    tmp_35_fu_1542_p4 = bitcast_ln44_14_fu_1539_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_37_fu_1591_p4() {
    tmp_37_fu_1591_p4 = bitcast_ln44_15_fu_1588_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_6_fu_848_p4() {
    tmp_6_fu_848_p4 = bitcast_ln44_fu_845_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_9_fu_905_p4() {
    tmp_9_fu_905_p4 = bitcast_ln44_1_fu_902_p1.read().range(30, 23);
}

void cordiccart2pol::thread_tmp_fu_770_p4() {
    tmp_fu_770_p4 = bitcast_ln26_fu_767_p1.read().range(30, 23);
}

void cordiccart2pol::thread_trunc_ln26_fu_780_p1() {
    trunc_ln26_fu_780_p1 = bitcast_ln26_fu_767_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_10_fu_1356_p1() {
    trunc_ln44_10_fu_1356_p1 = bitcast_ln44_10_fu_1343_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_11_fu_1405_p1() {
    trunc_ln44_11_fu_1405_p1 = bitcast_ln44_11_fu_1392_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_12_fu_1454_p1() {
    trunc_ln44_12_fu_1454_p1 = bitcast_ln44_12_fu_1441_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_13_fu_1503_p1() {
    trunc_ln44_13_fu_1503_p1 = bitcast_ln44_13_fu_1490_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_14_fu_1552_p1() {
    trunc_ln44_14_fu_1552_p1 = bitcast_ln44_14_fu_1539_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_15_fu_1601_p1() {
    trunc_ln44_15_fu_1601_p1 = bitcast_ln44_15_fu_1588_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_1_fu_915_p1() {
    trunc_ln44_1_fu_915_p1 = bitcast_ln44_1_fu_902_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_2_fu_964_p1() {
    trunc_ln44_2_fu_964_p1 = bitcast_ln44_2_fu_951_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_3_fu_1013_p1() {
    trunc_ln44_3_fu_1013_p1 = bitcast_ln44_3_fu_1000_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_4_fu_1062_p1() {
    trunc_ln44_4_fu_1062_p1 = bitcast_ln44_4_fu_1049_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_5_fu_1111_p1() {
    trunc_ln44_5_fu_1111_p1 = bitcast_ln44_5_fu_1098_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_6_fu_1160_p1() {
    trunc_ln44_6_fu_1160_p1 = bitcast_ln44_6_fu_1147_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_7_fu_1209_p1() {
    trunc_ln44_7_fu_1209_p1 = bitcast_ln44_7_fu_1196_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_8_fu_1258_p1() {
    trunc_ln44_8_fu_1258_p1 = bitcast_ln44_8_fu_1245_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_9_fu_1307_p1() {
    trunc_ln44_9_fu_1307_p1 = bitcast_ln44_9_fu_1294_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_trunc_ln44_fu_858_p1() {
    trunc_ln44_fu_858_p1 = bitcast_ln44_fu_845_p1.read().range(23-1, 0);
}

void cordiccart2pol::thread_x_copy_2_fu_818_p3() {
    x_copy_2_fu_818_p3 = (!and_ln26_fu_802_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln26_fu_802_p2.read()[0].to_bool())? y_read_reg_1636.read(): x_copy_fu_814_p1.read());
}

void cordiccart2pol::thread_x_copy_fu_814_p1() {
    x_copy_fu_814_p1 = xor_ln34_fu_808_p2.read();
}

void cordiccart2pol::thread_xor_ln29_fu_828_p2() {
    xor_ln29_fu_828_p2 = (bitcast_ln29_fu_825_p1.read() ^ ap_const_lv32_80000000);
}

void cordiccart2pol::thread_xor_ln34_fu_808_p2() {
    xor_ln34_fu_808_p2 = (bitcast_ln26_fu_767_p1.read() ^ ap_const_lv32_80000000);
}

void cordiccart2pol::thread_y_copy_2_fu_838_p3() {
    y_copy_2_fu_838_p3 = (!and_ln26_reg_1649.read()[0].is_01())? sc_lv<32>(): ((and_ln26_reg_1649.read()[0].to_bool())? y_copy_fu_834_p1.read(): x_read_reg_1643_pp0_iter1_reg.read());
}

void cordiccart2pol::thread_y_copy_fu_834_p1() {
    y_copy_fu_834_p1 = xor_ln29_fu_828_p2.read();
}

}

