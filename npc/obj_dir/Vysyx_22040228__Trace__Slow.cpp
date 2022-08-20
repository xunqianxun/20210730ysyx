// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040228__Syms.h"


void Vysyx_22040228___024root__traceInitSub0(Vysyx_22040228___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040228___024root__traceInitTop(Vysyx_22040228___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040228___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22040228___024root__traceInitSub0(Vysyx_22040228___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1534,"clk", false,-1);
        tracep->declBit(c+1535,"rst", false,-1);
        tracep->declQuad(c+1536,"out_slave_addr_", false,-1, 63,0);
        tracep->declQuad(c+1538,"out_serial_data_", false,-1, 63,0);
        tracep->declBit(c+1540,"out_serial_write_", false,-1);
        tracep->declBit(c+1541,"out_rtc_read_", false,-1);
        tracep->declQuad(c+1542,"in_rtc_data_", false,-1, 63,0);
        tracep->declBit(c+1544,"read_ena_sign_", false,-1);
        tracep->declQuad(c+1545,"out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+1547,"read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+1549,"out_write_ram_ena", false,-1);
        tracep->declQuad(c+1550,"out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+1552,"out_write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+1534,"ysyx_22040228 clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rst", false,-1);
        tracep->declQuad(c+1536,"ysyx_22040228 out_slave_addr_", false,-1, 63,0);
        tracep->declQuad(c+1538,"ysyx_22040228 out_serial_data_", false,-1, 63,0);
        tracep->declBit(c+1540,"ysyx_22040228 out_serial_write_", false,-1);
        tracep->declBit(c+1541,"ysyx_22040228 out_rtc_read_", false,-1);
        tracep->declQuad(c+1542,"ysyx_22040228 in_rtc_data_", false,-1, 63,0);
        tracep->declBit(c+1544,"ysyx_22040228 read_ena_sign_", false,-1);
        tracep->declQuad(c+1545,"ysyx_22040228 out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+1547,"ysyx_22040228 read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+1549,"ysyx_22040228 out_write_ram_ena", false,-1);
        tracep->declQuad(c+1550,"ysyx_22040228 out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+1552,"ysyx_22040228 out_write_ram_addr", false,-1, 63,0);
        tracep->declBus(c+1587,"ysyx_22040228 SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+1534,"ysyx_22040228 aclk", false,-1);
        tracep->declQuad(c+1,"ysyx_22040228 rvcpu_inst_addr", false,-1, 63,0);
        tracep->declQuad(c+958,"ysyx_22040228 rvcpu_data_addr", false,-1, 63,0);
        tracep->declBus(c+960,"ysyx_22040228 rvcpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+961,"ysyx_22040228 rvcpu_data_o", false,-1, 63,0);
        tracep->declBit(c+963,"ysyx_22040228 rvcpu_we", false,-1);
        tracep->declBit(c+964,"ysyx_22040228 rvcpu_re", false,-1);
        tracep->declBit(c+3,"ysyx_22040228 cache_fnece", false,-1);
        tracep->declBus(c+1554,"ysyx_22040228 rvcpu_we_type", false,-1, 2,0);
        tracep->declBus(c+1555,"ysyx_22040228 rvcpu_re_type", false,-1, 2,0);
        tracep->declBus(c+4,"ysyx_22040228 rvcpu_inst_counter", false,-1, 2,0);
        tracep->declBit(c+5,"ysyx_22040228 rvcpu_empty", false,-1);
        tracep->declQuad(c+965,"ysyx_22040228 uncache_arb_data", false,-1, 63,0);
        tracep->declQuad(c+967,"ysyx_22040228 uncache_arb_addr", false,-1, 63,0);
        tracep->declBus(c+969,"ysyx_22040228 uncache_arb_mask", false,-1, 7,0);
        tracep->declQuad(c+6,"ysyx_22040228 uncache_arb_data_o", false,-1, 63,0);
        tracep->declBit(c+970,"ysyx_22040228 uncache_arb_we", false,-1);
        tracep->declBit(c+971,"ysyx_22040228 uncache_arb_re", false,-1);
        tracep->declBus(c+1588,"ysyx_22040228 uncahce_arb_size", false,-1, 2,0);
        tracep->declBit(c+8,"ysyx_22040228 uncache_arb_finish", false,-1);
        tracep->declQuad(c+972,"ysyx_22040228 uncache_dc_data", false,-1, 63,0);
        tracep->declQuad(c+974,"ysyx_22040228 uncache_dc_addr", false,-1, 63,0);
        tracep->declBus(c+976,"ysyx_22040228 uncache_dc_mask", false,-1, 7,0);
        tracep->declBit(c+3,"ysyx_22040228 uncache_dc_fence", false,-1);
        tracep->declQuad(c+855,"ysyx_22040228 uncache_dc_data_o", false,-1, 63,0);
        tracep->declBit(c+977,"ysyx_22040228 uncache_dc_we", false,-1);
        tracep->declBit(c+978,"ysyx_22040228 uncache_dc_re", false,-1);
        tracep->declBit(c+979,"ysyx_22040228 uncache_dc_finish", false,-1);
        tracep->declArray(c+9,"ysyx_22040228 i_cache_inst_data", false,-1, 127,0);
        tracep->declBit(c+13,"ysyx_22040228 i_cache_inst_valid", false,-1);
        tracep->declBit(c+14,"ysyx_22040228 i_cache_read_ena", false,-1);
        tracep->declQuad(c+15,"ysyx_22040228 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+1556,"ysyx_22040228 i_cache_ready", false,-1);
        tracep->declBit(c+1589,"ysyx_22040228 i_caceh_resp", false,-1);
        tracep->declBit(c+1590,"ysyx_22040228 i_cache_canin", false,-1);
        tracep->declBit(c+17,"ysyx_22040228 i_cache_readyout", false,-1);
        tracep->declArray(c+18,"ysyx_22040228 i_cache_pc", false,-1, 255,0);
        tracep->declQuad(c+980,"ysyx_22040228 d_cache_data_out", false,-1, 63,0);
        tracep->declBit(c+982,"ysyx_22040228 d_cache_mem_finish", false,-1);
        tracep->declQuad(c+983,"ysyx_22040228 d_cache_out_addr", false,-1, 63,0);
        tracep->declQuad(c+985,"ysyx_22040228 d_cache_out_data", false,-1, 63,0);
        tracep->declBit(c+1591,"ysyx_22040228 d_cache_out_resp", false,-1);
        tracep->declBus(c+987,"ysyx_22040228 d_cache_out_type", false,-1, 3,0);
        tracep->declQuad(c+26,"ysyx_22040228 arbitrate_d_data", false,-1, 63,0);
        tracep->declBit(c+28,"ysyx_22040228 arbitrate_d_ok", false,-1);
        tracep->declQuad(c+29,"ysyx_22040228 arbitrate_i_data", false,-1, 63,0);
        tracep->declBit(c+31,"ysyx_22040228 arbitrate_i_ok", false,-1);
        tracep->declBit(c+1592,"ysyx_22040228 time_init_sign", false,-1);
        tracep->declBit(c+1592,"ysyx_22040228 interrupt_", false,-1);
        tracep->declBus(c+32,"ysyx_22040228 t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+988,"ysyx_22040228 t_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1593,"ysyx_22040228 t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+33,"ysyx_22040228 t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1594,"ysyx_22040228 t_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+1595,"ysyx_22040228 t_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1596,"ysyx_22040228 t_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+1597,"ysyx_22040228 t_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+1557,"ysyx_22040228 t_axi_aw_ready", false,-1);
        tracep->declBit(c+34,"ysyx_22040228 t_axi_aw_valid", false,-1);
        tracep->declQuad(c+990,"ysyx_22040228 t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+992,"ysyx_22040228 t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1598,"ysyx_22040228 t_axi_w_last", false,-1);
        tracep->declBit(c+35,"ysyx_22040228 t_axi_w_valid", false,-1);
        tracep->declBit(c+1558,"ysyx_22040228 t_axi_w_ready", false,-1);
        tracep->declBus(c+993,"ysyx_22040228 t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1599,"ysyx_22040228 t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+994,"ysyx_22040228 t_axi_b_valid", false,-1);
        tracep->declBit(c+1598,"ysyx_22040228 t_axi_b_ready", false,-1);
        tracep->declBus(c+36,"ysyx_22040228 t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+995,"ysyx_22040228 t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1593,"ysyx_22040228 t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+37,"ysyx_22040228 t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1594,"ysyx_22040228 t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+1595,"ysyx_22040228 t_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1596,"ysyx_22040228 t_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+1597,"ysyx_22040228 t_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+38,"ysyx_22040228 t_axi_ar_valid", false,-1);
        tracep->declBit(c+1559,"ysyx_22040228 t_axi_ar_ready", false,-1);
        tracep->declBus(c+997,"ysyx_22040228 t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+998,"ysyx_22040228 t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+1599,"ysyx_22040228 t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+1000,"ysyx_22040228 t_axi_r_last", false,-1);
        tracep->declBit(c+1001,"ysyx_22040228 t_axi_r_valid", false,-1);
        tracep->declBit(c+1598,"ysyx_22040228 t_axi_r_ready", false,-1);
        tracep->declBus(c+1002,"ysyx_22040228 add_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+1003,"ysyx_22040228 add_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+1009,"ysyx_22040228 add_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+1010,"ysyx_22040228 add_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+1011,"ysyx_22040228 add_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+1012,"ysyx_22040228 add_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+1013,"ysyx_22040228 add_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+1014,"ysyx_22040228 add_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+1015,"ysyx_22040228 add_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+1016,"ysyx_22040228 add_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+1017,"ysyx_22040228 add_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+1023,"ysyx_22040228 add_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+1024,"ysyx_22040228 add_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+1025,"ysyx_22040228 add_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+1026,"ysyx_22040228 add_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+1027,"ysyx_22040228 add_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+1600,"ysyx_22040228 add_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+39,"ysyx_22040228 add_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+1028,"ysyx_22040228 add_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+1029,"ysyx_22040228 add_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+1030,"ysyx_22040228 add_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+1036,"ysyx_22040228 add_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+1037,"ysyx_22040228 add_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+1038,"ysyx_22040228 add_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+1039,"ysyx_22040228 add_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+1040,"ysyx_22040228 add_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+1041,"ysyx_22040228 add_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+1042,"ysyx_22040228 add_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+40,"ysyx_22040228 add_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+1043,"ysyx_22040228 add_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+1044,"ysyx_22040228 add_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+1600,"ysyx_22040228 add_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+41,"ysyx_22040228 add_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+42,"ysyx_22040228 add_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+1050,"ysyx_22040228 add_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+1051,"ysyx_22040228 soc_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+1052,"ysyx_22040228 soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1054,"ysyx_22040228 soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+1055,"ysyx_22040228 soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1056,"ysyx_22040228 soc_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+1057,"ysyx_22040228 soc_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1058,"ysyx_22040228 soc_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+1059,"ysyx_22040228 soc_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+1060,"ysyx_22040228 soc_axi_aw_ready", false,-1);
        tracep->declBit(c+1061,"ysyx_22040228 soc_axi_aw_valid", false,-1);
        tracep->declQuad(c+1062,"ysyx_22040228 soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+1064,"ysyx_22040228 soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1065,"ysyx_22040228 soc_axi_w_last", false,-1);
        tracep->declBit(c+1066,"ysyx_22040228 soc_axi_w_valid", false,-1);
        tracep->declBit(c+1067,"ysyx_22040228 soc_axi_w_ready", false,-1);
        tracep->declBus(c+43,"ysyx_22040228 soc_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1599,"ysyx_22040228 soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+44,"ysyx_22040228 soc_axi_b_valid", false,-1);
        tracep->declBit(c+1068,"ysyx_22040228 soc_axi_b_ready", false,-1);
        tracep->declBus(c+1069,"ysyx_22040228 soc_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+1070,"ysyx_22040228 soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1072,"ysyx_22040228 soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+1073,"ysyx_22040228 soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1074,"ysyx_22040228 soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+1075,"ysyx_22040228 soc_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1076,"ysyx_22040228 soc_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+1077,"ysyx_22040228 soc_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+1078,"ysyx_22040228 soc_axi_ar_valid", false,-1);
        tracep->declBit(c+45,"ysyx_22040228 soc_axi_ar_ready", false,-1);
        tracep->declBus(c+46,"ysyx_22040228 soc_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+1560,"ysyx_22040228 soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+1599,"ysyx_22040228 soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+47,"ysyx_22040228 soc_axi_r_last", false,-1);
        tracep->declBit(c+48,"ysyx_22040228 soc_axi_r_valid", false,-1);
        tracep->declBit(c+1079,"ysyx_22040228 soc_axi_r_ready", false,-1);
        tracep->declBus(c+1080,"ysyx_22040228 tim_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+1081,"ysyx_22040228 tim_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1083,"ysyx_22040228 tim_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+1084,"ysyx_22040228 tim_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1085,"ysyx_22040228 tim_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+1086,"ysyx_22040228 tim_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1087,"ysyx_22040228 tim_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+1088,"ysyx_22040228 tim_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+1089,"ysyx_22040228 tim_axi_aw_ready", false,-1);
        tracep->declBit(c+1089,"ysyx_22040228 tim_axi_aw_valid", false,-1);
        tracep->declQuad(c+1090,"ysyx_22040228 tim_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+1092,"ysyx_22040228 tim_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1093,"ysyx_22040228 tim_axi_w_last", false,-1);
        tracep->declBit(c+1094,"ysyx_22040228 tim_axi_w_valid", false,-1);
        tracep->declBit(c+1095,"ysyx_22040228 tim_axi_w_ready", false,-1);
        tracep->declBus(c+49,"ysyx_22040228 tim_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1599,"ysyx_22040228 tim_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+50,"ysyx_22040228 tim_axi_b_valid", false,-1);
        tracep->declBit(c+1096,"ysyx_22040228 tim_axi_b_ready", false,-1);
        tracep->declBus(c+1097,"ysyx_22040228 tim_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+1098,"ysyx_22040228 tim_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1100,"ysyx_22040228 tim_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+1101,"ysyx_22040228 tim_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1102,"ysyx_22040228 tim_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+1103,"ysyx_22040228 tim_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1104,"ysyx_22040228 tim_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+1105,"ysyx_22040228 tim_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+1106,"ysyx_22040228 tim_axi_ar_valid", false,-1);
        tracep->declBit(c+1598,"ysyx_22040228 tim_axi_ar_ready", false,-1);
        tracep->declBus(c+51,"ysyx_22040228 tim_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+52,"ysyx_22040228 tim_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+1599,"ysyx_22040228 tim_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+54,"ysyx_22040228 tim_axi_r_last", false,-1);
        tracep->declBit(c+54,"ysyx_22040228 tim_axi_r_valid", false,-1);
        tracep->declBit(c+1107,"ysyx_22040228 tim_axi_r_ready", false,-1);
        tracep->declBus(c+1108,"ysyx_22040228 io_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+1109,"ysyx_22040228 io_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1111,"ysyx_22040228 io_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+1112,"ysyx_22040228 io_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1113,"ysyx_22040228 io_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+1114,"ysyx_22040228 io_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1115,"ysyx_22040228 io_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+1116,"ysyx_22040228 io_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+1117,"ysyx_22040228 io_axi_aw_ready", false,-1);
        tracep->declBit(c+1118,"ysyx_22040228 io_axi_aw_valid", false,-1);
        tracep->declQuad(c+1119,"ysyx_22040228 io_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+1121,"ysyx_22040228 io_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1122,"ysyx_22040228 io_axi_w_last", false,-1);
        tracep->declBit(c+1123,"ysyx_22040228 io_axi_w_valid", false,-1);
        tracep->declBit(c+1124,"ysyx_22040228 io_axi_w_ready", false,-1);
        tracep->declBus(c+1108,"ysyx_22040228 io_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1599,"ysyx_22040228 io_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+55,"ysyx_22040228 io_axi_b_valid", false,-1);
        tracep->declBit(c+1125,"ysyx_22040228 io_axi_b_ready", false,-1);
        tracep->declBus(c+1126,"ysyx_22040228 io_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+1127,"ysyx_22040228 io_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1129,"ysyx_22040228 io_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+1130,"ysyx_22040228 io_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1131,"ysyx_22040228 io_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+1132,"ysyx_22040228 io_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1133,"ysyx_22040228 io_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+1134,"ysyx_22040228 io_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+1135,"ysyx_22040228 io_axi_ar_valid", false,-1);
        tracep->declBit(c+56,"ysyx_22040228 io_axi_ar_ready", false,-1);
        tracep->declBus(c+857,"ysyx_22040228 io_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+1562,"ysyx_22040228 io_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+1599,"ysyx_22040228 io_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+57,"ysyx_22040228 io_axi_r_last", false,-1);
        tracep->declBit(c+58,"ysyx_22040228 io_axi_r_valid", false,-1);
        tracep->declBit(c+1136,"ysyx_22040228 io_axi_r_ready", false,-1);
        tracep->declBus(c+1137,"ysyx_22040228 mmio_thing", false,-1, 2,0);
        tracep->declBit(c+1138,"ysyx_22040228 read_ena_sign", false,-1);
        tracep->declQuad(c+1139,"ysyx_22040228 addr_oup_sign", false,-1, 63,0);
        tracep->declQuad(c+1547,"ysyx_22040228 read_data_sign", false,-1, 63,0);
        tracep->declBit(c+44,"ysyx_22040228 write_ena_sign", false,-1);
        tracep->declQuad(c+59,"ysyx_22040228 write_addr_sign", false,-1, 63,0);
        tracep->declQuad(c+61,"ysyx_22040228 write_data_sign", false,-1, 63,0);
        tracep->declBus(c+1137,"ysyx_22040228 prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+1137,"ysyx_22040228 prot_chose_read", false,-1, 2,0);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 rst", false,-1);
        tracep->declQuad(c+1,"ysyx_22040228 rvcpu1 inst_addr", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22040228 rvcpu1 inst_counter", false,-1, 2,0);
        tracep->declBit(c+1556,"ysyx_22040228 rvcpu1 inst_ready", false,-1);
        tracep->declArray(c+9,"ysyx_22040228 rvcpu1 inst_data", false,-1, 127,0);
        tracep->declArray(c+18,"ysyx_22040228 rvcpu1 inst_pc", false,-1, 255,0);
        tracep->declBit(c+13,"ysyx_22040228 rvcpu1 cache_unready", false,-1);
        tracep->declBit(c+17,"ysyx_22040228 rvcpu1 cache_data_ok", false,-1);
        tracep->declBit(c+5,"ysyx_22040228 rvcpu1 issu_empty", false,-1);
        tracep->declQuad(c+958,"ysyx_22040228 rvcpu1 mem_addr_o", false,-1, 63,0);
        tracep->declQuad(c+961,"ysyx_22040228 rvcpu1 mem_data_o", false,-1, 63,0);
        tracep->declBus(c+960,"ysyx_22040228 rvcpu1 mem_strb_o", false,-1, 7,0);
        tracep->declQuad(c+980,"ysyx_22040228 rvcpu1 mem_data_i", false,-1, 63,0);
        tracep->declBit(c+963,"ysyx_22040228 rvcpu1 write_ena", false,-1);
        tracep->declBit(c+964,"ysyx_22040228 rvcpu1 read_ena", false,-1);
        tracep->declBus(c+1554,"ysyx_22040228 rvcpu1 w_type_sel", false,-1, 2,0);
        tracep->declBus(c+1555,"ysyx_22040228 rvcpu1 r_type_sel", false,-1, 2,0);
        tracep->declBit(c+982,"ysyx_22040228 rvcpu1 mem_finish_i", false,-1);
        tracep->declBit(c+3,"ysyx_22040228 rvcpu1 inst_fence", false,-1);
        tracep->declBit(c+1592,"ysyx_22040228 rvcpu1 timer_initin", false,-1);
        tracep->declBit(c+1601,"ysyx_22040228 rvcpu1 aluo_de_ena", false,-1);
        tracep->declQuad(c+1602,"ysyx_22040228 rvcpu1 aluo_de_pc", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_22040228 rvcpu1 pc_phb_addr", false,-1, 3,0);
        tracep->declBit(c+64,"ysyx_22040228 rvcpu1 phb_pc_ena", false,-1);
        tracep->declBus(c+65,"ysyx_22040228 rvcpu1 pc_regsf_addr", false,-1, 4,0);
        tracep->declBit(c+66,"ysyx_22040228 rvcpu1 pc_regsf_ena", false,-1);
        tracep->declQuad(c+1141,"ysyx_22040228 rvcpu1 regsf_pc_data", false,-1, 63,0);
        tracep->declBus(c+67,"ysyx_22040228 rvcpu1 check_pcif", false,-1, 3,0);
        tracep->declBit(c+68,"ysyx_22040228 rvcpu1 phb_de1_out", false,-1);
        tracep->declBit(c+69,"ysyx_22040228 rvcpu1 phb_de2_out", false,-1);
        tracep->declQuad(c+70,"ysyx_22040228 rvcpu1 iss_de1_pc", false,-1, 63,0);
        tracep->declBus(c+72,"ysyx_22040228 rvcpu1 iss_de1_inst", false,-1, 31,0);
        tracep->declQuad(c+73,"ysyx_22040228 rvcpu1 iss_de2_pc", false,-1, 63,0);
        tracep->declBus(c+75,"ysyx_22040228 rvcpu1 iss_de2_inst", false,-1, 31,0);
        tracep->declBus(c+1143,"ysyx_22040228 rvcpu1 de1_ref_op1addr", false,-1, 4,0);
        tracep->declBus(c+1144,"ysyx_22040228 rvcpu1 de1_ref_op2addr", false,-1, 4,0);
        tracep->declBit(c+1145,"ysyx_22040228 rvcpu1 de1_ref_op1ena", false,-1);
        tracep->declBit(c+1146,"ysyx_22040228 rvcpu1 de1_ref_op2ena", false,-1);
        tracep->declBus(c+76,"ysyx_22040228 rvcpu1 de1_phb_deaddr", false,-1, 3,0);
        tracep->declBus(c+1147,"ysyx_22040228 rvcpu1 de1_deex_type", false,-1, 7,0);
        tracep->declBus(c+1148,"ysyx_22040228 rvcpu1 de1_deex_opcode", false,-1, 7,0);
        tracep->declQuad(c+1149,"ysyx_22040228 rvcpu1 de1_deex_op1", false,-1, 63,0);
        tracep->declQuad(c+1151,"ysyx_22040228 rvcpu1 de1_deex_op2", false,-1, 63,0);
        tracep->declBit(c+1153,"ysyx_22040228 rvcpu1 de1_deex_ena", false,-1);
        tracep->declBus(c+1154,"ysyx_22040228 rvcpu1 de1_deex_addr", false,-1, 4,0);
        tracep->declQuad(c+1155,"ysyx_22040228 rvcpu1 de1_deex_pc", false,-1, 63,0);
        tracep->declBus(c+1157,"ysyx_22040228 rvcpu1 de1_deex_inst", false,-1, 31,0);
        tracep->declQuad(c+1158,"ysyx_22040228 rvcpu1 de1_deex_imm", false,-1, 63,0);
        tracep->declBus(c+1564,"ysyx_22040228 rvcpu1 de1_deex_sel", false,-1, 2,0);
        tracep->declQuad(c+1160,"ysyx_22040228 rvcpu1 jump1_pc", false,-1, 63,0);
        tracep->declBit(c+1162,"ysyx_22040228 rvcpu1 jump1_ena", false,-1);
        tracep->declBit(c+1604,"ysyx_22040228 rvcpu1 jump1_flush", false,-1);
        tracep->declBus(c+1163,"ysyx_22040228 rvcpu1 de1_so_type", false,-1, 5,0);
        tracep->declBus(c+77,"ysyx_22040228 rvcpu1 de1_phb_addr", false,-1, 3,0);
        tracep->declBit(c+1164,"ysyx_22040228 rvcpu1 de1_phb_ena", false,-1);
        tracep->declBit(c+1165,"ysyx_22040228 rvcpu1 de1_phb_data", false,-1);
        tracep->declBus(c+1166,"ysyx_22040228 rvcpu1 de2_ref_op1addr", false,-1, 4,0);
        tracep->declBus(c+1167,"ysyx_22040228 rvcpu1 de2_ref_op2addr", false,-1, 4,0);
        tracep->declBit(c+1168,"ysyx_22040228 rvcpu1 de2_ref_op1ena", false,-1);
        tracep->declBit(c+1169,"ysyx_22040228 rvcpu1 de2_ref_op2ena", false,-1);
        tracep->declBus(c+78,"ysyx_22040228 rvcpu1 de2_phb_deaddr", false,-1, 3,0);
        tracep->declBus(c+1170,"ysyx_22040228 rvcpu1 de2_deex_type", false,-1, 7,0);
        tracep->declBus(c+1171,"ysyx_22040228 rvcpu1 de2_deex_opcode", false,-1, 7,0);
        tracep->declQuad(c+1172,"ysyx_22040228 rvcpu1 de2_deex_op1", false,-1, 63,0);
        tracep->declQuad(c+1174,"ysyx_22040228 rvcpu1 de2_deex_op2", false,-1, 63,0);
        tracep->declBit(c+1176,"ysyx_22040228 rvcpu1 de2_deex_ena", false,-1);
        tracep->declBus(c+1177,"ysyx_22040228 rvcpu1 de2_deex_addr", false,-1, 4,0);
        tracep->declQuad(c+1178,"ysyx_22040228 rvcpu1 de2_deex_pc", false,-1, 63,0);
        tracep->declBus(c+1180,"ysyx_22040228 rvcpu1 de2_deex_inst", false,-1, 31,0);
        tracep->declQuad(c+1181,"ysyx_22040228 rvcpu1 de2_deex_imm", false,-1, 63,0);
        tracep->declBus(c+1565,"ysyx_22040228 rvcpu1 de2_deex_sel", false,-1, 2,0);
        tracep->declBus(c+79,"ysyx_22040228 rvcpu1 de2_phb_addr", false,-1, 3,0);
        tracep->declBit(c+1183,"ysyx_22040228 rvcpu1 de2_phb_data", false,-1);
        tracep->declBit(c+1184,"ysyx_22040228 rvcpu1 de2_phb_ena", false,-1);
        tracep->declQuad(c+1185,"ysyx_22040228 rvcpu1 jump2_pc", false,-1, 63,0);
        tracep->declBit(c+1187,"ysyx_22040228 rvcpu1 jump2_ena", false,-1);
        tracep->declBus(c+1188,"ysyx_22040228 rvcpu1 de2_so_type", false,-1, 5,0);
        tracep->declBus(c+1189,"ysyx_22040228 rvcpu1 so_idex_chose1", false,-1, 2,0);
        tracep->declBus(c+1190,"ysyx_22040228 rvcpu1 so_idex_chose2", false,-1, 2,0);
        tracep->declBit(c+1191,"ysyx_22040228 rvcpu1 so_isu_stop1", false,-1);
        tracep->declBit(c+1192,"ysyx_22040228 rvcpu1 so_isu_stop2", false,-1);
        tracep->declBit(c+1193,"ysyx_22040228 rvcpu1 so_idex_cleano", false,-1);
        tracep->declBit(c+1194,"ysyx_22040228 rvcpu1 so_idex_cleant", false,-1);
        tracep->declBit(c+1195,"ysyx_22040228 rvcpu1 so_isu_nop1ena", false,-1);
        tracep->declBit(c+1196,"ysyx_22040228 rvcpu1 so_isu_nop2ena", false,-1);
        tracep->declQuad(c+1197,"ysyx_22040228 rvcpu1 so_submit_pc", false,-1, 63,0);
        tracep->declBit(c+80,"ysyx_22040228 rvcpu1 cansign1", false,-1);
        tracep->declBit(c+81,"ysyx_22040228 rvcpu1 cansign2", false,-1);
        tracep->declBit(c+82,"ysyx_22040228 rvcpu1 aluo_timer_init", false,-1);
        tracep->declQuad(c+83,"ysyx_22040228 rvcpu1 aluo_pc", false,-1, 63,0);
        tracep->declBus(c+85,"ysyx_22040228 rvcpu1 aluo_inst", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040228 rvcpu1 aluo_inst_type", false,-1, 7,0);
        tracep->declBus(c+87,"ysyx_22040228 rvcpu1 aluo_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+88,"ysyx_22040228 rvcpu1 aluo_op1_data", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22040228 rvcpu1 aluo_op2_data", false,-1, 63,0);
        tracep->declBit(c+92,"ysyx_22040228 rvcpu1 aluo_rd_ena", false,-1);
        tracep->declBus(c+93,"ysyx_22040228 rvcpu1 aluo_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+94,"ysyx_22040228 rvcpu1 alut_pc", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22040228 rvcpu1 alut_inst", false,-1, 31,0);
        tracep->declBus(c+97,"ysyx_22040228 rvcpu1 alut_inst_type", false,-1, 7,0);
        tracep->declBus(c+98,"ysyx_22040228 rvcpu1 alut_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+99,"ysyx_22040228 rvcpu1 alut_op1_data", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22040228 rvcpu1 alut_op2_data", false,-1, 63,0);
        tracep->declBit(c+103,"ysyx_22040228 rvcpu1 alut_rd_ena", false,-1);
        tracep->declBus(c+104,"ysyx_22040228 rvcpu1 alut_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+105,"ysyx_22040228 rvcpu1 mmu_pc", false,-1, 63,0);
        tracep->declBus(c+107,"ysyx_22040228 rvcpu1 mmu_inst", false,-1, 31,0);
        tracep->declBus(c+108,"ysyx_22040228 rvcpu1 mmu_inst_type", false,-1, 7,0);
        tracep->declQuad(c+109,"ysyx_22040228 rvcpu1 mmu_op2_data", false,-1, 63,0);
        tracep->declBit(c+111,"ysyx_22040228 rvcpu1 mmu_rd_ena", false,-1);
        tracep->declBus(c+112,"ysyx_22040228 rvcpu1 mmu_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+113,"ysyx_22040228 rvcpu1 mmu_offset", false,-1, 63,0);
        tracep->declBus(c+115,"ysyx_22040228 rvcpu1 mmu_sel", false,-1, 2,0);
        tracep->declQuad(c+1199,"ysyx_22040228 rvcpu1 ao_su_pc", false,-1, 63,0);
        tracep->declBus(c+1566,"ysyx_22040228 rvcpu1 ao_su_inst", false,-1, 31,0);
        tracep->declQuad(c+1201,"ysyx_22040228 rvcpu1 ao_su_data", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22040228 rvcpu1 ao_su_addr", false,-1, 4,0);
        tracep->declBit(c+116,"ysyx_22040228 rvcpu1 ao_su_ena", false,-1);
        tracep->declBit(c+117,"ysyx_22040228 rvcpu1 ao_so_busy", false,-1);
        tracep->declQuad(c+118,"ysyx_22040228 rvcpu1 ao_pc_pc", false,-1, 63,0);
        tracep->declBit(c+120,"ysyx_22040228 rvcpu1 ao_pc_ena", false,-1);
        tracep->declQuad(c+1203,"ysyx_22040228 rvcpu1 at_su_pc", false,-1, 63,0);
        tracep->declBus(c+1567,"ysyx_22040228 rvcpu1 at_su_inst", false,-1, 31,0);
        tracep->declQuad(c+1205,"ysyx_22040228 rvcpu1 at_su_data", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22040228 rvcpu1 at_su_addr", false,-1, 4,0);
        tracep->declBit(c+103,"ysyx_22040228 rvcpu1 at_su_ena", false,-1);
        tracep->declBit(c+121,"ysyx_22040228 rvcpu1 at_so_busy", false,-1);
        tracep->declQuad(c+1207,"ysyx_22040228 rvcpu1 mm_su_pc", false,-1, 63,0);
        tracep->declBus(c+1568,"ysyx_22040228 rvcpu1 mm_su_inst", false,-1, 31,0);
        tracep->declQuad(c+1209,"ysyx_22040228 rvcpu1 mm_su_data", false,-1, 63,0);
        tracep->declBus(c+112,"ysyx_22040228 rvcpu1 mm_su_addr", false,-1, 4,0);
        tracep->declBit(c+111,"ysyx_22040228 rvcpu1 mm_su_ena", false,-1);
        tracep->declBit(c+1211,"ysyx_22040228 rvcpu1 mm_so_busy", false,-1);
        tracep->declQuad(c+122,"ysyx_22040228 rvcpu1 s_r_ao_pc", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22040228 rvcpu1 s_r_ao_dara", false,-1, 63,0);
        tracep->declBus(c+126,"ysyx_22040228 rvcpu1 s_r_ao_addr", false,-1, 4,0);
        tracep->declBus(c+127,"ysyx_22040228 rvcpu1 s_r_ao_inst", false,-1, 31,0);
        tracep->declBit(c+128,"ysyx_22040228 rvcpu1 s_r_ao_ena", false,-1);
        tracep->declQuad(c+129,"ysyx_22040228 rvcpu1 s_r_at_pc", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22040228 rvcpu1 s_r_at_dara", false,-1, 63,0);
        tracep->declBus(c+133,"ysyx_22040228 rvcpu1 s_r_at_addr", false,-1, 4,0);
        tracep->declBus(c+134,"ysyx_22040228 rvcpu1 s_r_at_inst", false,-1, 31,0);
        tracep->declBit(c+135,"ysyx_22040228 rvcpu1 s_r_at_ena", false,-1);
        tracep->declQuad(c+136,"ysyx_22040228 rvcpu1 s_r_mm_pc", false,-1, 63,0);
        tracep->declQuad(c+138,"ysyx_22040228 rvcpu1 s_r_mm_dara", false,-1, 63,0);
        tracep->declBus(c+140,"ysyx_22040228 rvcpu1 s_r_mm_addr", false,-1, 4,0);
        tracep->declBit(c+141,"ysyx_22040228 rvcpu1 s_r_mm_ena", false,-1);
        tracep->declQuad(c+142,"ysyx_22040228 rvcpu1 comt_de_data0", false,-1, 63,0);
        tracep->declBus(c+144,"ysyx_22040228 rvcpu1 comt_de_addr0", false,-1, 4,0);
        tracep->declBit(c+145,"ysyx_22040228 rvcpu1 comt_de_ena0", false,-1);
        tracep->declQuad(c+146,"ysyx_22040228 rvcpu1 comt_de_data1", false,-1, 63,0);
        tracep->declBus(c+148,"ysyx_22040228 rvcpu1 comt_de_addr1", false,-1, 4,0);
        tracep->declBit(c+149,"ysyx_22040228 rvcpu1 comt_de_ena1", false,-1);
        tracep->declQuad(c+150,"ysyx_22040228 rvcpu1 comt_de_data2", false,-1, 63,0);
        tracep->declBus(c+152,"ysyx_22040228 rvcpu1 comt_de_addr2", false,-1, 4,0);
        tracep->declBit(c+153,"ysyx_22040228 rvcpu1 comt_de_ena2", false,-1);
        tracep->declQuad(c+154,"ysyx_22040228 rvcpu1 comt_de_data3", false,-1, 63,0);
        tracep->declBus(c+156,"ysyx_22040228 rvcpu1 comt_de_addr3", false,-1, 4,0);
        tracep->declBit(c+157,"ysyx_22040228 rvcpu1 comt_de_ena3", false,-1);
        tracep->declQuad(c+158,"ysyx_22040228 rvcpu1 comt_de_data4", false,-1, 63,0);
        tracep->declBus(c+160,"ysyx_22040228 rvcpu1 comt_de_addr4", false,-1, 4,0);
        tracep->declBit(c+161,"ysyx_22040228 rvcpu1 comt_de_ena4", false,-1);
        tracep->declQuad(c+162,"ysyx_22040228 rvcpu1 comt_de_data5", false,-1, 63,0);
        tracep->declBus(c+164,"ysyx_22040228 rvcpu1 comt_de_addr5", false,-1, 4,0);
        tracep->declBit(c+165,"ysyx_22040228 rvcpu1 comt_de_ena5", false,-1);
        tracep->declQuad(c+166,"ysyx_22040228 rvcpu1 comt_de_data6", false,-1, 63,0);
        tracep->declBus(c+168,"ysyx_22040228 rvcpu1 comt_de_addr6", false,-1, 4,0);
        tracep->declBit(c+169,"ysyx_22040228 rvcpu1 comt_de_ena6", false,-1);
        tracep->declQuad(c+170,"ysyx_22040228 rvcpu1 comt_de_data7", false,-1, 63,0);
        tracep->declBus(c+172,"ysyx_22040228 rvcpu1 comt_de_addr7", false,-1, 4,0);
        tracep->declBit(c+173,"ysyx_22040228 rvcpu1 comt_de_ena7", false,-1);
        tracep->declQuad(c+1212,"ysyx_22040228 rvcpu1 comt_de_datag", false,-1, 63,0);
        tracep->declBus(c+1214,"ysyx_22040228 rvcpu1 comt_de_addrg", false,-1, 4,0);
        tracep->declBit(c+1215,"ysyx_22040228 rvcpu1 comt_de_enag", false,-1);
        tracep->declBit(c+1216,"ysyx_22040228 rvcpu1 should_stop", false,-1);
        tracep->declQuad(c+1569,"ysyx_22040228 rvcpu1 regs21_out_data", false,-1, 63,0);
        tracep->declQuad(c+1571,"ysyx_22040228 rvcpu1 regs22_out_data", false,-1, 63,0);
        tracep->declQuad(c+1573,"ysyx_22040228 rvcpu1 regs11_out_data", false,-1, 63,0);
        tracep->declQuad(c+1575,"ysyx_22040228 rvcpu1 regs12_out_data", false,-1, 63,0);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 instfact clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 instfact rst", false,-1);
        tracep->declArray(c+9,"ysyx_22040228 rvcpu1 instfact inst_i", false,-1, 127,0);
        tracep->declBit(c+13,"ysyx_22040228 rvcpu1 instfact cache_un_ready", false,-1);
        tracep->declBit(c+1556,"ysyx_22040228 rvcpu1 instfact pc_ready", false,-1);
        tracep->declBus(c+67,"ysyx_22040228 rvcpu1 instfact if_thispcj", false,-1, 3,0);
        tracep->declBit(c+1162,"ysyx_22040228 rvcpu1 instfact decode1_ena", false,-1);
        tracep->declQuad(c+1160,"ysyx_22040228 rvcpu1 instfact decode1_pc", false,-1, 63,0);
        tracep->declBit(c+1187,"ysyx_22040228 rvcpu1 instfact decode2_ena", false,-1);
        tracep->declQuad(c+1185,"ysyx_22040228 rvcpu1 instfact decode2_pc", false,-1, 63,0);
        tracep->declBit(c+120,"ysyx_22040228 rvcpu1 instfact trap_ena", false,-1);
        tracep->declQuad(c+118,"ysyx_22040228 rvcpu1 instfact trap_pc", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_22040228 rvcpu1 instfact phb_addr", false,-1, 3,0);
        tracep->declBit(c+64,"ysyx_22040228 rvcpu1 instfact phb_ena", false,-1);
        tracep->declBus(c+65,"ysyx_22040228 rvcpu1 instfact jreg_addr", false,-1, 4,0);
        tracep->declBit(c+66,"ysyx_22040228 rvcpu1 instfact jreg_ena", false,-1);
        tracep->declQuad(c+1141,"ysyx_22040228 rvcpu1 instfact jreg_data", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22040228 rvcpu1 instfact pc_counter", false,-1, 2,0);
        tracep->declQuad(c+1,"ysyx_22040228 rvcpu1 instfact pc", false,-1, 63,0);
        tracep->declBus(c+174,"ysyx_22040228 rvcpu1 instfact inst1", false,-1, 31,0);
        tracep->declBus(c+175,"ysyx_22040228 rvcpu1 instfact inst2", false,-1, 31,0);
        tracep->declBus(c+176,"ysyx_22040228 rvcpu1 instfact inst3", false,-1, 31,0);
        tracep->declBus(c+177,"ysyx_22040228 rvcpu1 instfact inst4", false,-1, 31,0);
        tracep->declBus(c+178,"ysyx_22040228 rvcpu1 instfact j_imm1", false,-1, 20,1);
        tracep->declBus(c+179,"ysyx_22040228 rvcpu1 instfact i_imm1", false,-1, 11,0);
        tracep->declBus(c+180,"ysyx_22040228 rvcpu1 instfact b_imm1", false,-1, 12,1);
        tracep->declBus(c+181,"ysyx_22040228 rvcpu1 instfact j_imm2", false,-1, 20,1);
        tracep->declBus(c+182,"ysyx_22040228 rvcpu1 instfact i_imm2", false,-1, 11,0);
        tracep->declBus(c+183,"ysyx_22040228 rvcpu1 instfact b_imm2", false,-1, 12,1);
        tracep->declBus(c+184,"ysyx_22040228 rvcpu1 instfact j_imm3", false,-1, 20,1);
        tracep->declBus(c+185,"ysyx_22040228 rvcpu1 instfact i_imm3", false,-1, 11,0);
        tracep->declBus(c+186,"ysyx_22040228 rvcpu1 instfact b_imm3", false,-1, 12,1);
        tracep->declBus(c+187,"ysyx_22040228 rvcpu1 instfact j_imm4", false,-1, 20,1);
        tracep->declBus(c+188,"ysyx_22040228 rvcpu1 instfact i_imm4", false,-1, 11,0);
        tracep->declBus(c+189,"ysyx_22040228 rvcpu1 instfact b_imm4", false,-1, 12,1);
        tracep->declBus(c+190,"ysyx_22040228 rvcpu1 instfact opcode1", false,-1, 6,0);
        tracep->declBus(c+191,"ysyx_22040228 rvcpu1 instfact opcode2", false,-1, 6,0);
        tracep->declBus(c+192,"ysyx_22040228 rvcpu1 instfact opcode3", false,-1, 6,0);
        tracep->declBus(c+193,"ysyx_22040228 rvcpu1 instfact opcode4", false,-1, 6,0);
        tracep->declBit(c+194,"ysyx_22040228 rvcpu1 instfact inst_jal1", false,-1);
        tracep->declBit(c+195,"ysyx_22040228 rvcpu1 instfact inst_jalr1", false,-1);
        tracep->declBit(c+196,"ysyx_22040228 rvcpu1 instfact inst_bxx1", false,-1);
        tracep->declBit(c+197,"ysyx_22040228 rvcpu1 instfact inst_jal2", false,-1);
        tracep->declBit(c+198,"ysyx_22040228 rvcpu1 instfact inst_jalr2", false,-1);
        tracep->declBit(c+199,"ysyx_22040228 rvcpu1 instfact inst_bxx2", false,-1);
        tracep->declBit(c+200,"ysyx_22040228 rvcpu1 instfact inst_jal3", false,-1);
        tracep->declBit(c+201,"ysyx_22040228 rvcpu1 instfact inst_jalr3", false,-1);
        tracep->declBit(c+202,"ysyx_22040228 rvcpu1 instfact inst_bxx3", false,-1);
        tracep->declBit(c+203,"ysyx_22040228 rvcpu1 instfact inst_jal4", false,-1);
        tracep->declBit(c+204,"ysyx_22040228 rvcpu1 instfact inst_jalr4", false,-1);
        tracep->declBit(c+205,"ysyx_22040228 rvcpu1 instfact inst_bxx4", false,-1);
        tracep->declQuad(c+1,"ysyx_22040228 rvcpu1 instfact pc1", false,-1, 63,0);
        tracep->declQuad(c+206,"ysyx_22040228 rvcpu1 instfact pc2", false,-1, 63,0);
        tracep->declQuad(c+208,"ysyx_22040228 rvcpu1 instfact pc3", false,-1, 63,0);
        tracep->declQuad(c+210,"ysyx_22040228 rvcpu1 instfact pc4", false,-1, 63,0);
        tracep->declQuad(c+858,"ysyx_22040228 rvcpu1 instfact operand1", false,-1, 63,0);
        tracep->declQuad(c+1217,"ysyx_22040228 rvcpu1 instfact operand2", false,-1, 63,0);
        tracep->declQuad(c+1219,"ysyx_22040228 rvcpu1 instfact j_temp", false,-1, 63,0);
        tracep->declQuad(c+1221,"ysyx_22040228 rvcpu1 instfact forc_jumppc", false,-1, 63,0);
        tracep->declBit(c+212,"ysyx_22040228 rvcpu1 instfact jump_ena1", false,-1);
        tracep->declBit(c+213,"ysyx_22040228 rvcpu1 instfact jump_ena2", false,-1);
        tracep->declBit(c+214,"ysyx_22040228 rvcpu1 instfact jump_ena3", false,-1);
        tracep->declBit(c+215,"ysyx_22040228 rvcpu1 instfact jump_ena4", false,-1);
        tracep->declBus(c+860,"ysyx_22040228 rvcpu1 instfact pc_counter_temp", false,-1, 2,0);
        tracep->declBus(c+216,"ysyx_22040228 rvcpu1 instfact pc_nextpc_temp", false,-1, 4,0);
        tracep->declQuad(c+1223,"ysyx_22040228 rvcpu1 instfact pc_jnxtpc_temp", false,-1, 63,0);
        tracep->declBit(c+217,"ysyx_22040228 rvcpu1 instfact cache_ready", false,-1);
        tracep->declBus(c+1225,"ysyx_22040228 rvcpu1 instfact pc_counter_jdeo", false,-1, 2,0);
        tracep->declBus(c+1226,"ysyx_22040228 rvcpu1 instfact pc_counter_jdet", false,-1, 2,0);
        tracep->declBus(c+218,"ysyx_22040228 rvcpu1 instfact pc_counter_jtap", false,-1, 2,0);
        tracep->declBus(c+219,"ysyx_22040228 rvcpu1 instfact pc_counter_jtmp", false,-1, 2,0);
        tracep->declQuad(c+220,"ysyx_22040228 rvcpu1 instfact pc_temp", false,-1, 63,0);
        tracep->declBit(c+222,"ysyx_22040228 rvcpu1 instfact pc_temp_ena", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 forecast clk", false,-1);
        tracep->declBus(c+63,"ysyx_22040228 rvcpu1 forecast pc1_in", false,-1, 3,0);
        tracep->declBit(c+64,"ysyx_22040228 rvcpu1 forecast jump1_ena", false,-1);
        tracep->declBus(c+76,"ysyx_22040228 rvcpu1 forecast decode1_read", false,-1, 3,0);
        tracep->declBit(c+68,"ysyx_22040228 rvcpu1 forecast decode1_data", false,-1);
        tracep->declBus(c+78,"ysyx_22040228 rvcpu1 forecast decode2_read", false,-1, 3,0);
        tracep->declBit(c+69,"ysyx_22040228 rvcpu1 forecast decode2_data", false,-1);
        tracep->declBus(c+77,"ysyx_22040228 rvcpu1 forecast decode1_waddr", false,-1, 3,0);
        tracep->declBit(c+1164,"ysyx_22040228 rvcpu1 forecast decode1_wena", false,-1);
        tracep->declBit(c+1165,"ysyx_22040228 rvcpu1 forecast decode1_wdata", false,-1);
        tracep->declBus(c+79,"ysyx_22040228 rvcpu1 forecast decode2_waddr", false,-1, 3,0);
        tracep->declBit(c+1184,"ysyx_22040228 rvcpu1 forecast decode2_wena", false,-1);
        tracep->declBit(c+1183,"ysyx_22040228 rvcpu1 forecast deocde2_wdata", false,-1);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+223+i*1,"ysyx_22040228 rvcpu1 forecast ramdata", true,(i+0), 3,0);}}
        tracep->declBus(c+239,"ysyx_22040228 rvcpu1 forecast phb_addo", false,-1, 2,0);
        tracep->declBit(c+64,"ysyx_22040228 rvcpu1 forecast history_jdata1", false,-1);
        tracep->declBus(c+240,"ysyx_22040228 rvcpu1 forecast phb_addreadt", false,-1, 2,0);
        tracep->declBit(c+68,"ysyx_22040228 rvcpu1 forecast history_jread1", false,-1);
        tracep->declBus(c+241,"ysyx_22040228 rvcpu1 forecast phb_addreadw", false,-1, 2,0);
        tracep->declBit(c+69,"ysyx_22040228 rvcpu1 forecast history_jread2", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 inst8 clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 inst8 rst", false,-1);
        tracep->declArray(c+18,"ysyx_22040228 rvcpu1 inst8 pc", false,-1, 255,0);
        tracep->declArray(c+9,"ysyx_22040228 rvcpu1 inst8 inst", false,-1, 127,0);
        tracep->declBus(c+67,"ysyx_22040228 rvcpu1 inst8 check_cleanj", false,-1, 3,0);
        tracep->declBit(c+17,"ysyx_22040228 rvcpu1 inst8 cache_data_in", false,-1);
        tracep->declBit(c+1162,"ysyx_22040228 rvcpu1 inst8 decode1_j_bad", false,-1);
        tracep->declBit(c+1187,"ysyx_22040228 rvcpu1 inst8 decide2_j_bad", false,-1);
        tracep->declBit(c+120,"ysyx_22040228 rvcpu1 inst8 interrupt_terp", false,-1);
        tracep->declBit(c+1191,"ysyx_22040228 rvcpu1 inst8 stop1", false,-1);
        tracep->declBit(c+1192,"ysyx_22040228 rvcpu1 inst8 stop2", false,-1);
        tracep->declBit(c+1195,"ysyx_22040228 rvcpu1 inst8 trap_nop1", false,-1);
        tracep->declBit(c+1196,"ysyx_22040228 rvcpu1 inst8 trap_nop2", false,-1);
        tracep->declBit(c+5,"ysyx_22040228 rvcpu1 inst8 accept_icache", false,-1);
        tracep->declQuad(c+70,"ysyx_22040228 rvcpu1 inst8 pc_decode1", false,-1, 63,0);
        tracep->declBus(c+72,"ysyx_22040228 rvcpu1 inst8 inst_decode1", false,-1, 31,0);
        tracep->declQuad(c+73,"ysyx_22040228 rvcpu1 inst8 pc_decode2", false,-1, 63,0);
        tracep->declBus(c+75,"ysyx_22040228 rvcpu1 inst8 inst_decode2", false,-1, 31,0);
        tracep->declBit(c+1227,"ysyx_22040228 rvcpu1 inst8 should_updata", false,-1);
        tracep->declArray(c+242,"ysyx_22040228 rvcpu1 inst8 inreg_pc", false,-1, 255,0);
        tracep->declArray(c+250,"ysyx_22040228 rvcpu1 inst8 inreg_inst", false,-1, 127,0);
        tracep->declArray(c+254,"ysyx_22040228 rvcpu1 inst8 temp_pc", false,-1, 255,0);
        tracep->declArray(c+262,"ysyx_22040228 rvcpu1 inst8 temp_inst", false,-1, 127,0);
        tracep->declBit(c+266,"ysyx_22040228 rvcpu1 inst8 clean_temp", false,-1);
        tracep->declBit(c+267,"ysyx_22040228 rvcpu1 inst8 inreg_clean", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 decode_uo rst", false,-1);
        tracep->declBus(c+72,"ysyx_22040228 rvcpu1 decode_uo inst_i", false,-1, 31,0);
        tracep->declQuad(c+70,"ysyx_22040228 rvcpu1 decode_uo pc_i", false,-1, 63,0);
        tracep->declBus(c+1163,"ysyx_22040228 rvcpu1 decode_uo socreboard_aluo", false,-1, 5,0);
        tracep->declBit(c+1193,"ysyx_22040228 rvcpu1 decode_uo socreboard_clean", false,-1);
        tracep->declQuad(c+1573,"ysyx_22040228 rvcpu1 decode_uo op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1575,"ysyx_22040228 rvcpu1 decode_uo op2_data_i", false,-1, 63,0);
        tracep->declBus(c+1143,"ysyx_22040228 rvcpu1 decode_uo op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+1144,"ysyx_22040228 rvcpu1 decode_uo op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+1145,"ysyx_22040228 rvcpu1 decode_uo op1_read_o", false,-1);
        tracep->declBit(c+1146,"ysyx_22040228 rvcpu1 decode_uo op2_read_o", false,-1);
        tracep->declBus(c+76,"ysyx_22040228 rvcpu1 decode_uo decode1_addr", false,-1, 3,0);
        tracep->declBit(c+68,"ysyx_22040228 rvcpu1 decode_uo phb_data", false,-1);
        tracep->declQuad(c+1199,"ysyx_22040228 rvcpu1 decode_uo alu1_pc", false,-1, 63,0);
        tracep->declQuad(c+1201,"ysyx_22040228 rvcpu1 decode_uo alu1_rd_data", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22040228 rvcpu1 decode_uo alu1_rd_addr", false,-1, 4,0);
        tracep->declBit(c+116,"ysyx_22040228 rvcpu1 decode_uo alu1_rd_ena", false,-1);
        tracep->declQuad(c+1203,"ysyx_22040228 rvcpu1 decode_uo alu2_pc", false,-1, 63,0);
        tracep->declQuad(c+1205,"ysyx_22040228 rvcpu1 decode_uo alu2_rd_data", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22040228 rvcpu1 decode_uo alu2_rd_addr", false,-1, 4,0);
        tracep->declBit(c+103,"ysyx_22040228 rvcpu1 decode_uo alu2_rd_ena", false,-1);
        tracep->declQuad(c+1207,"ysyx_22040228 rvcpu1 decode_uo mem_pc", false,-1, 63,0);
        tracep->declQuad(c+1209,"ysyx_22040228 rvcpu1 decode_uo mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+112,"ysyx_22040228 rvcpu1 decode_uo mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+111,"ysyx_22040228 rvcpu1 decode_uo mem_rd_ena", false,-1);
        tracep->declBit(c+128,"ysyx_22040228 rvcpu1 decode_uo wb1_rd_ena", false,-1);
        tracep->declBus(c+126,"ysyx_22040228 rvcpu1 decode_uo wb1_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+124,"ysyx_22040228 rvcpu1 decode_uo wb1_rd_data", false,-1, 63,0);
        tracep->declBit(c+135,"ysyx_22040228 rvcpu1 decode_uo wb2_rd_ena", false,-1);
        tracep->declBus(c+133,"ysyx_22040228 rvcpu1 decode_uo wb2_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+131,"ysyx_22040228 rvcpu1 decode_uo wb2_rd_data", false,-1, 63,0);
        tracep->declBit(c+141,"ysyx_22040228 rvcpu1 decode_uo wb3_rd_ena", false,-1);
        tracep->declBus(c+140,"ysyx_22040228 rvcpu1 decode_uo wb3_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+138,"ysyx_22040228 rvcpu1 decode_uo wb3_rd_data", false,-1, 63,0);
        tracep->declBit(c+145,"ysyx_22040228 rvcpu1 decode_uo commit1_ena", false,-1);
        tracep->declBus(c+144,"ysyx_22040228 rvcpu1 decode_uo commit1_addr", false,-1, 4,0);
        tracep->declQuad(c+142,"ysyx_22040228 rvcpu1 decode_uo commit1_data", false,-1, 63,0);
        tracep->declBit(c+149,"ysyx_22040228 rvcpu1 decode_uo commit2_ena", false,-1);
        tracep->declBus(c+148,"ysyx_22040228 rvcpu1 decode_uo commit2_addr", false,-1, 4,0);
        tracep->declQuad(c+146,"ysyx_22040228 rvcpu1 decode_uo commit2_data", false,-1, 63,0);
        tracep->declBit(c+153,"ysyx_22040228 rvcpu1 decode_uo commit3_ena", false,-1);
        tracep->declBus(c+152,"ysyx_22040228 rvcpu1 decode_uo commit3_addr", false,-1, 4,0);
        tracep->declQuad(c+150,"ysyx_22040228 rvcpu1 decode_uo commit3_data", false,-1, 63,0);
        tracep->declBit(c+157,"ysyx_22040228 rvcpu1 decode_uo commit4_ena", false,-1);
        tracep->declBus(c+156,"ysyx_22040228 rvcpu1 decode_uo commit4_addr", false,-1, 4,0);
        tracep->declQuad(c+154,"ysyx_22040228 rvcpu1 decode_uo commit4_data", false,-1, 63,0);
        tracep->declBit(c+161,"ysyx_22040228 rvcpu1 decode_uo commit5_ena", false,-1);
        tracep->declBus(c+160,"ysyx_22040228 rvcpu1 decode_uo commit5_addr", false,-1, 4,0);
        tracep->declQuad(c+158,"ysyx_22040228 rvcpu1 decode_uo commit5_data", false,-1, 63,0);
        tracep->declBit(c+165,"ysyx_22040228 rvcpu1 decode_uo commit6_ena", false,-1);
        tracep->declBus(c+164,"ysyx_22040228 rvcpu1 decode_uo commit6_addr", false,-1, 4,0);
        tracep->declQuad(c+162,"ysyx_22040228 rvcpu1 decode_uo commit6_data", false,-1, 63,0);
        tracep->declBit(c+169,"ysyx_22040228 rvcpu1 decode_uo commit7_ena", false,-1);
        tracep->declBus(c+168,"ysyx_22040228 rvcpu1 decode_uo commit7_addr", false,-1, 4,0);
        tracep->declQuad(c+166,"ysyx_22040228 rvcpu1 decode_uo commit7_data", false,-1, 63,0);
        tracep->declBit(c+173,"ysyx_22040228 rvcpu1 decode_uo commit8_ena", false,-1);
        tracep->declBus(c+172,"ysyx_22040228 rvcpu1 decode_uo commit8_addr", false,-1, 4,0);
        tracep->declQuad(c+170,"ysyx_22040228 rvcpu1 decode_uo commit8_data", false,-1, 63,0);
        tracep->declBus(c+1147,"ysyx_22040228 rvcpu1 decode_uo inst_type", false,-1, 7,0);
        tracep->declBus(c+1148,"ysyx_22040228 rvcpu1 decode_uo inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+1149,"ysyx_22040228 rvcpu1 decode_uo op1_o", false,-1, 63,0);
        tracep->declQuad(c+1151,"ysyx_22040228 rvcpu1 decode_uo op2_o", false,-1, 63,0);
        tracep->declBit(c+1153,"ysyx_22040228 rvcpu1 decode_uo rd_w_ena", false,-1);
        tracep->declBus(c+1154,"ysyx_22040228 rvcpu1 decode_uo rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+1155,"ysyx_22040228 rvcpu1 decode_uo pc_o", false,-1, 63,0);
        tracep->declBus(c+1157,"ysyx_22040228 rvcpu1 decode_uo inst_o", false,-1, 31,0);
        tracep->declQuad(c+1158,"ysyx_22040228 rvcpu1 decode_uo mem_op_imm", false,-1, 63,0);
        tracep->declBus(c+1564,"ysyx_22040228 rvcpu1 decode_uo mem_op_sel", false,-1, 2,0);
        tracep->declBus(c+77,"ysyx_22040228 rvcpu1 decode_uo jump_addr", false,-1, 3,0);
        tracep->declBit(c+1165,"ysyx_22040228 rvcpu1 decode_uo jump_data", false,-1);
        tracep->declBit(c+1164,"ysyx_22040228 rvcpu1 decode_uo jump_ena", false,-1);
        tracep->declBit(c+1162,"ysyx_22040228 rvcpu1 decode_uo jump_pc_ena", false,-1);
        tracep->declQuad(c+1160,"ysyx_22040228 rvcpu1 decode_uo jump_pc", false,-1, 63,0);
        tracep->declBus(c+268,"ysyx_22040228 rvcpu1 decode_uo opcode", false,-1, 6,0);
        tracep->declBus(c+269,"ysyx_22040228 rvcpu1 decode_uo rd", false,-1, 4,0);
        tracep->declBus(c+270,"ysyx_22040228 rvcpu1 decode_uo funct3", false,-1, 2,0);
        tracep->declBus(c+1228,"ysyx_22040228 rvcpu1 decode_uo rs1", false,-1, 4,0);
        tracep->declBus(c+271,"ysyx_22040228 rvcpu1 decode_uo imm", false,-1, 11,0);
        tracep->declBus(c+272,"ysyx_22040228 rvcpu1 decode_uo funct7", false,-1, 6,0);
        tracep->declBus(c+273,"ysyx_22040228 rvcpu1 decode_uo rs2", false,-1, 4,0);
        tracep->declBus(c+274,"ysyx_22040228 rvcpu1 decode_uo u_imm", false,-1, 19,0);
        tracep->declBus(c+275,"ysyx_22040228 rvcpu1 decode_uo s_imm", false,-1, 11,0);
        tracep->declBus(c+276,"ysyx_22040228 rvcpu1 decode_uo b_imm", false,-1, 12,1);
        tracep->declBit(c+1229,"ysyx_22040228 rvcpu1 decode_uo inst_lui", false,-1);
        tracep->declBit(c+1230,"ysyx_22040228 rvcpu1 decode_uo inst_auipc", false,-1);
        tracep->declBit(c+1231,"ysyx_22040228 rvcpu1 decode_uo inst_jal", false,-1);
        tracep->declBit(c+1232,"ysyx_22040228 rvcpu1 decode_uo inst_jalr", false,-1);
        tracep->declBit(c+1233,"ysyx_22040228 rvcpu1 decode_uo inst_jump", false,-1);
        tracep->declBit(c+861,"ysyx_22040228 rvcpu1 decode_uo inst_addi", false,-1);
        tracep->declBit(c+862,"ysyx_22040228 rvcpu1 decode_uo inst_slti", false,-1);
        tracep->declBit(c+863,"ysyx_22040228 rvcpu1 decode_uo inst_sltiu", false,-1);
        tracep->declBit(c+864,"ysyx_22040228 rvcpu1 decode_uo inst_xori", false,-1);
        tracep->declBit(c+865,"ysyx_22040228 rvcpu1 decode_uo inst_ori", false,-1);
        tracep->declBit(c+866,"ysyx_22040228 rvcpu1 decode_uo inst_andi", false,-1);
        tracep->declBit(c+867,"ysyx_22040228 rvcpu1 decode_uo inst_slli", false,-1);
        tracep->declBit(c+868,"ysyx_22040228 rvcpu1 decode_uo inst_srli", false,-1);
        tracep->declBit(c+1234,"ysyx_22040228 rvcpu1 decode_uo inst_srai", false,-1);
        tracep->declBit(c+1235,"ysyx_22040228 rvcpu1 decode_uo inst_addiw", false,-1);
        tracep->declBit(c+1236,"ysyx_22040228 rvcpu1 decode_uo inst_slliw", false,-1);
        tracep->declBit(c+1237,"ysyx_22040228 rvcpu1 decode_uo inst_srliw", false,-1);
        tracep->declBit(c+1238,"ysyx_22040228 rvcpu1 decode_uo inst_sraiw", false,-1);
        tracep->declBit(c+1239,"ysyx_22040228 rvcpu1 decode_uo inst_add", false,-1);
        tracep->declBit(c+1240,"ysyx_22040228 rvcpu1 decode_uo inst_sub", false,-1);
        tracep->declBit(c+1241,"ysyx_22040228 rvcpu1 decode_uo inst_sll", false,-1);
        tracep->declBit(c+1242,"ysyx_22040228 rvcpu1 decode_uo inst_slt", false,-1);
        tracep->declBit(c+1243,"ysyx_22040228 rvcpu1 decode_uo inst_sltu", false,-1);
        tracep->declBit(c+1244,"ysyx_22040228 rvcpu1 decode_uo inst_xor", false,-1);
        tracep->declBit(c+1245,"ysyx_22040228 rvcpu1 decode_uo inst_srl", false,-1);
        tracep->declBit(c+1246,"ysyx_22040228 rvcpu1 decode_uo inst_sra", false,-1);
        tracep->declBit(c+1247,"ysyx_22040228 rvcpu1 decode_uo inst_or", false,-1);
        tracep->declBit(c+1248,"ysyx_22040228 rvcpu1 decode_uo inst_and", false,-1);
        tracep->declBit(c+1249,"ysyx_22040228 rvcpu1 decode_uo inst_div", false,-1);
        tracep->declBit(c+1250,"ysyx_22040228 rvcpu1 decode_uo inst_divu", false,-1);
        tracep->declBit(c+1251,"ysyx_22040228 rvcpu1 decode_uo inst_mul", false,-1);
        tracep->declBit(c+1252,"ysyx_22040228 rvcpu1 decode_uo inst_mulh", false,-1);
        tracep->declBit(c+1253,"ysyx_22040228 rvcpu1 decode_uo inst_mulhsu", false,-1);
        tracep->declBit(c+1254,"ysyx_22040228 rvcpu1 decode_uo inst_mulhu", false,-1);
        tracep->declBit(c+1255,"ysyx_22040228 rvcpu1 decode_uo inst_rem", false,-1);
        tracep->declBit(c+1256,"ysyx_22040228 rvcpu1 decode_uo inst_remu", false,-1);
        tracep->declBit(c+1257,"ysyx_22040228 rvcpu1 decode_uo inst_addw", false,-1);
        tracep->declBit(c+1258,"ysyx_22040228 rvcpu1 decode_uo inst_subw", false,-1);
        tracep->declBit(c+1259,"ysyx_22040228 rvcpu1 decode_uo inst_sllw", false,-1);
        tracep->declBit(c+1260,"ysyx_22040228 rvcpu1 decode_uo inst_srlw", false,-1);
        tracep->declBit(c+1261,"ysyx_22040228 rvcpu1 decode_uo inst_sraw", false,-1);
        tracep->declBit(c+1262,"ysyx_22040228 rvcpu1 decode_uo inst_divuw", false,-1);
        tracep->declBit(c+1263,"ysyx_22040228 rvcpu1 decode_uo inst_divw", false,-1);
        tracep->declBit(c+1264,"ysyx_22040228 rvcpu1 decode_uo inst_mulw", false,-1);
        tracep->declBit(c+1265,"ysyx_22040228 rvcpu1 decode_uo inst_remuw", false,-1);
        tracep->declBit(c+1266,"ysyx_22040228 rvcpu1 decode_uo inst_remw", false,-1);
        tracep->declBit(c+869,"ysyx_22040228 rvcpu1 decode_uo inst_beq", false,-1);
        tracep->declBit(c+870,"ysyx_22040228 rvcpu1 decode_uo inst_ben", false,-1);
        tracep->declBit(c+871,"ysyx_22040228 rvcpu1 decode_uo inst_blt", false,-1);
        tracep->declBit(c+872,"ysyx_22040228 rvcpu1 decode_uo inst_bge", false,-1);
        tracep->declBit(c+873,"ysyx_22040228 rvcpu1 decode_uo inst_bltu", false,-1);
        tracep->declBit(c+874,"ysyx_22040228 rvcpu1 decode_uo inst_bgeu", false,-1);
        tracep->declBit(c+1267,"ysyx_22040228 rvcpu1 decode_uo inst_csrrw", false,-1);
        tracep->declBit(c+1268,"ysyx_22040228 rvcpu1 decode_uo inst_csrrs", false,-1);
        tracep->declBit(c+1269,"ysyx_22040228 rvcpu1 decode_uo inst_csrrc", false,-1);
        tracep->declBit(c+1270,"ysyx_22040228 rvcpu1 decode_uo inst_csrrwi", false,-1);
        tracep->declBit(c+1271,"ysyx_22040228 rvcpu1 decode_uo inst_csrrsi", false,-1);
        tracep->declBit(c+1272,"ysyx_22040228 rvcpu1 decode_uo inst_csrrci", false,-1);
        tracep->declBit(c+1273,"ysyx_22040228 rvcpu1 decode_uo inst_csr_rs1", false,-1);
        tracep->declBit(c+1274,"ysyx_22040228 rvcpu1 decode_uo inst_csr_imm", false,-1);
        tracep->declBit(c+1275,"ysyx_22040228 rvcpu1 decode_uo inst_ecall", false,-1);
        tracep->declBit(c+1276,"ysyx_22040228 rvcpu1 decode_uo inst_ebreak", false,-1);
        tracep->declBit(c+1277,"ysyx_22040228 rvcpu1 decode_uo inst_mret", false,-1);
        tracep->declBit(c+277,"ysyx_22040228 rvcpu1 decode_uo inst_fence_i", false,-1);
        tracep->declBus(c+1278,"ysyx_22040228 rvcpu1 decode_uo store_addr_offset", false,-1, 11,0);
        tracep->declBit(c+1279,"ysyx_22040228 rvcpu1 decode_uo alu1_op1", false,-1);
        tracep->declBit(c+1280,"ysyx_22040228 rvcpu1 decode_uo alu2_op1", false,-1);
        tracep->declBit(c+1281,"ysyx_22040228 rvcpu1 decode_uo com1_op1", false,-1);
        tracep->declBit(c+1282,"ysyx_22040228 rvcpu1 decode_uo com2_op1", false,-1);
        tracep->declBit(c+1283,"ysyx_22040228 rvcpu1 decode_uo com3_op1", false,-1);
        tracep->declBit(c+1284,"ysyx_22040228 rvcpu1 decode_uo com4_op1", false,-1);
        tracep->declBit(c+1285,"ysyx_22040228 rvcpu1 decode_uo com5_op1", false,-1);
        tracep->declBit(c+1286,"ysyx_22040228 rvcpu1 decode_uo com6_op1", false,-1);
        tracep->declBit(c+1287,"ysyx_22040228 rvcpu1 decode_uo com7_op1", false,-1);
        tracep->declBit(c+1288,"ysyx_22040228 rvcpu1 decode_uo com8_op1", false,-1);
        tracep->declBit(c+1289,"ysyx_22040228 rvcpu1 decode_uo wb1_op1", false,-1);
        tracep->declBit(c+1290,"ysyx_22040228 rvcpu1 decode_uo wb2_op1", false,-1);
        tracep->declBit(c+1291,"ysyx_22040228 rvcpu1 decode_uo wb3_op1", false,-1);
        tracep->declBit(c+1292,"ysyx_22040228 rvcpu1 decode_uo opselcet1", false,-1);
        tracep->declBit(c+1293,"ysyx_22040228 rvcpu1 decode_uo opselcet2", false,-1);
        tracep->declBit(c+1294,"ysyx_22040228 rvcpu1 decode_uo mem_op1", false,-1);
        tracep->declBit(c+1295,"ysyx_22040228 rvcpu1 decode_uo mem_select1", false,-1);
        tracep->declBit(c+1296,"ysyx_22040228 rvcpu1 decode_uo mem_select2", false,-1);
        tracep->declBit(c+1297,"ysyx_22040228 rvcpu1 decode_uo alu1_op2", false,-1);
        tracep->declBit(c+1298,"ysyx_22040228 rvcpu1 decode_uo alu2_op2", false,-1);
        tracep->declBit(c+875,"ysyx_22040228 rvcpu1 decode_uo com1_op2", false,-1);
        tracep->declBit(c+876,"ysyx_22040228 rvcpu1 decode_uo com2_op2", false,-1);
        tracep->declBit(c+877,"ysyx_22040228 rvcpu1 decode_uo com3_op2", false,-1);
        tracep->declBit(c+878,"ysyx_22040228 rvcpu1 decode_uo com4_op2", false,-1);
        tracep->declBit(c+879,"ysyx_22040228 rvcpu1 decode_uo com5_op2", false,-1);
        tracep->declBit(c+880,"ysyx_22040228 rvcpu1 decode_uo com6_op2", false,-1);
        tracep->declBit(c+881,"ysyx_22040228 rvcpu1 decode_uo com7_op2", false,-1);
        tracep->declBit(c+882,"ysyx_22040228 rvcpu1 decode_uo com8_op2", false,-1);
        tracep->declBit(c+883,"ysyx_22040228 rvcpu1 decode_uo wb1_op2", false,-1);
        tracep->declBit(c+1299,"ysyx_22040228 rvcpu1 decode_uo wb2_op2", false,-1);
        tracep->declBit(c+884,"ysyx_22040228 rvcpu1 decode_uo wb3_op2", false,-1);
        tracep->declBit(c+1300,"ysyx_22040228 rvcpu1 decode_uo opselceto", false,-1);
        tracep->declBit(c+1301,"ysyx_22040228 rvcpu1 decode_uo opselcett", false,-1);
        tracep->declBit(c+1302,"ysyx_22040228 rvcpu1 decode_uo mem_op2", false,-1);
        tracep->declBit(c+1303,"ysyx_22040228 rvcpu1 decode_uo mem_selecto", false,-1);
        tracep->declBit(c+1304,"ysyx_22040228 rvcpu1 decode_uo mem_selectt", false,-1);
        tracep->declBit(c+1305,"ysyx_22040228 rvcpu1 decode_uo forcast_state", false,-1);
        tracep->declBit(c+1165,"ysyx_22040228 rvcpu1 decode_uo data_jf", false,-1);
        tracep->declQuad(c+1306,"ysyx_22040228 rvcpu1 decode_uo op1_sub_op2", false,-1, 63,0);
        tracep->declBit(c+1308,"ysyx_22040228 rvcpu1 decode_uo op1_ls_op2", false,-1);
        tracep->declBit(c+1309,"ysyx_22040228 rvcpu1 decode_uo branch_pc_ena", false,-1);
        tracep->declQuad(c+885,"ysyx_22040228 rvcpu1 decode_uo branch_pc", false,-1, 63,0);
        tracep->declBit(c+1310,"ysyx_22040228 rvcpu1 decode_uo jalr_pc_ena", false,-1);
        tracep->declQuad(c+887,"ysyx_22040228 rvcpu1 decode_uo jalr_pc", false,-1, 63,0);
        tracep->declQuad(c+889,"ysyx_22040228 rvcpu1 decode_uo jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+1311,"ysyx_22040228 rvcpu1 decode_uo predict_success", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 decode_ut rst", false,-1);
        tracep->declBus(c+75,"ysyx_22040228 rvcpu1 decode_ut inst_i", false,-1, 31,0);
        tracep->declQuad(c+73,"ysyx_22040228 rvcpu1 decode_ut pc_i", false,-1, 63,0);
        tracep->declBus(c+1188,"ysyx_22040228 rvcpu1 decode_ut socreboard_alut", false,-1, 5,0);
        tracep->declBit(c+1194,"ysyx_22040228 rvcpu1 decode_ut socreboard_clean", false,-1);
        tracep->declQuad(c+1569,"ysyx_22040228 rvcpu1 decode_ut op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+1571,"ysyx_22040228 rvcpu1 decode_ut op2_data_i", false,-1, 63,0);
        tracep->declBus(c+1166,"ysyx_22040228 rvcpu1 decode_ut op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+1167,"ysyx_22040228 rvcpu1 decode_ut op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+1168,"ysyx_22040228 rvcpu1 decode_ut op1_read_o", false,-1);
        tracep->declBit(c+1169,"ysyx_22040228 rvcpu1 decode_ut op2_read_o", false,-1);
        tracep->declBus(c+78,"ysyx_22040228 rvcpu1 decode_ut decode1_addr", false,-1, 3,0);
        tracep->declBit(c+69,"ysyx_22040228 rvcpu1 decode_ut phb_data", false,-1);
        tracep->declQuad(c+1199,"ysyx_22040228 rvcpu1 decode_ut alu1_pc", false,-1, 63,0);
        tracep->declQuad(c+1201,"ysyx_22040228 rvcpu1 decode_ut alu1_rd_data", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22040228 rvcpu1 decode_ut alu1_rd_addr", false,-1, 4,0);
        tracep->declBit(c+116,"ysyx_22040228 rvcpu1 decode_ut alu1_rd_ena", false,-1);
        tracep->declQuad(c+1203,"ysyx_22040228 rvcpu1 decode_ut alu2_pc", false,-1, 63,0);
        tracep->declQuad(c+1205,"ysyx_22040228 rvcpu1 decode_ut alu2_rd_data", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22040228 rvcpu1 decode_ut alu2_rd_addr", false,-1, 4,0);
        tracep->declBit(c+103,"ysyx_22040228 rvcpu1 decode_ut alu2_rd_ena", false,-1);
        tracep->declQuad(c+1207,"ysyx_22040228 rvcpu1 decode_ut mem_pc", false,-1, 63,0);
        tracep->declQuad(c+1209,"ysyx_22040228 rvcpu1 decode_ut mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+112,"ysyx_22040228 rvcpu1 decode_ut mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+111,"ysyx_22040228 rvcpu1 decode_ut mem_rd_ena", false,-1);
        tracep->declBit(c+128,"ysyx_22040228 rvcpu1 decode_ut wb1_rd_ena", false,-1);
        tracep->declBus(c+126,"ysyx_22040228 rvcpu1 decode_ut wb1_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+124,"ysyx_22040228 rvcpu1 decode_ut wb1_rd_data", false,-1, 63,0);
        tracep->declBit(c+135,"ysyx_22040228 rvcpu1 decode_ut wb2_rd_ena", false,-1);
        tracep->declBus(c+133,"ysyx_22040228 rvcpu1 decode_ut wb2_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+131,"ysyx_22040228 rvcpu1 decode_ut wb2_rd_data", false,-1, 63,0);
        tracep->declBit(c+141,"ysyx_22040228 rvcpu1 decode_ut wb3_rd_ena", false,-1);
        tracep->declBus(c+140,"ysyx_22040228 rvcpu1 decode_ut wb3_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+138,"ysyx_22040228 rvcpu1 decode_ut wb3_rd_data", false,-1, 63,0);
        tracep->declBit(c+145,"ysyx_22040228 rvcpu1 decode_ut commit1_ena", false,-1);
        tracep->declBus(c+144,"ysyx_22040228 rvcpu1 decode_ut commit1_addr", false,-1, 4,0);
        tracep->declQuad(c+142,"ysyx_22040228 rvcpu1 decode_ut commit1_data", false,-1, 63,0);
        tracep->declBit(c+149,"ysyx_22040228 rvcpu1 decode_ut commit2_ena", false,-1);
        tracep->declBus(c+148,"ysyx_22040228 rvcpu1 decode_ut commit2_addr", false,-1, 4,0);
        tracep->declQuad(c+146,"ysyx_22040228 rvcpu1 decode_ut commit2_data", false,-1, 63,0);
        tracep->declBit(c+153,"ysyx_22040228 rvcpu1 decode_ut commit3_ena", false,-1);
        tracep->declBus(c+152,"ysyx_22040228 rvcpu1 decode_ut commit3_addr", false,-1, 4,0);
        tracep->declQuad(c+150,"ysyx_22040228 rvcpu1 decode_ut commit3_data", false,-1, 63,0);
        tracep->declBit(c+157,"ysyx_22040228 rvcpu1 decode_ut commit4_ena", false,-1);
        tracep->declBus(c+156,"ysyx_22040228 rvcpu1 decode_ut commit4_addr", false,-1, 4,0);
        tracep->declQuad(c+154,"ysyx_22040228 rvcpu1 decode_ut commit4_data", false,-1, 63,0);
        tracep->declBit(c+161,"ysyx_22040228 rvcpu1 decode_ut commit5_ena", false,-1);
        tracep->declBus(c+160,"ysyx_22040228 rvcpu1 decode_ut commit5_addr", false,-1, 4,0);
        tracep->declQuad(c+158,"ysyx_22040228 rvcpu1 decode_ut commit5_data", false,-1, 63,0);
        tracep->declBit(c+165,"ysyx_22040228 rvcpu1 decode_ut commit6_ena", false,-1);
        tracep->declBus(c+164,"ysyx_22040228 rvcpu1 decode_ut commit6_addr", false,-1, 4,0);
        tracep->declQuad(c+162,"ysyx_22040228 rvcpu1 decode_ut commit6_data", false,-1, 63,0);
        tracep->declBit(c+169,"ysyx_22040228 rvcpu1 decode_ut commit7_ena", false,-1);
        tracep->declBus(c+168,"ysyx_22040228 rvcpu1 decode_ut commit7_addr", false,-1, 4,0);
        tracep->declQuad(c+166,"ysyx_22040228 rvcpu1 decode_ut commit7_data", false,-1, 63,0);
        tracep->declBit(c+173,"ysyx_22040228 rvcpu1 decode_ut commit8_ena", false,-1);
        tracep->declBus(c+172,"ysyx_22040228 rvcpu1 decode_ut commit8_addr", false,-1, 4,0);
        tracep->declQuad(c+170,"ysyx_22040228 rvcpu1 decode_ut commit8_data", false,-1, 63,0);
        tracep->declBus(c+1170,"ysyx_22040228 rvcpu1 decode_ut inst_type", false,-1, 7,0);
        tracep->declBus(c+1171,"ysyx_22040228 rvcpu1 decode_ut inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+1172,"ysyx_22040228 rvcpu1 decode_ut op1_o", false,-1, 63,0);
        tracep->declQuad(c+1174,"ysyx_22040228 rvcpu1 decode_ut op2_o", false,-1, 63,0);
        tracep->declBit(c+1176,"ysyx_22040228 rvcpu1 decode_ut rd_w_ena", false,-1);
        tracep->declBus(c+1177,"ysyx_22040228 rvcpu1 decode_ut rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+1178,"ysyx_22040228 rvcpu1 decode_ut pc_o", false,-1, 63,0);
        tracep->declBus(c+1180,"ysyx_22040228 rvcpu1 decode_ut inst_o", false,-1, 31,0);
        tracep->declBus(c+79,"ysyx_22040228 rvcpu1 decode_ut jump_addr", false,-1, 3,0);
        tracep->declBit(c+1183,"ysyx_22040228 rvcpu1 decode_ut jump_data", false,-1);
        tracep->declBit(c+1184,"ysyx_22040228 rvcpu1 decode_ut jump_ena", false,-1);
        tracep->declQuad(c+1181,"ysyx_22040228 rvcpu1 decode_ut mem_op_imm", false,-1, 63,0);
        tracep->declBus(c+1565,"ysyx_22040228 rvcpu1 decode_ut mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+1187,"ysyx_22040228 rvcpu1 decode_ut jump_pc_ena", false,-1);
        tracep->declQuad(c+1185,"ysyx_22040228 rvcpu1 decode_ut jump_pc", false,-1, 63,0);
        tracep->declBus(c+278,"ysyx_22040228 rvcpu1 decode_ut opcode", false,-1, 6,0);
        tracep->declBus(c+279,"ysyx_22040228 rvcpu1 decode_ut rd", false,-1, 4,0);
        tracep->declBus(c+280,"ysyx_22040228 rvcpu1 decode_ut funct3", false,-1, 2,0);
        tracep->declBus(c+1312,"ysyx_22040228 rvcpu1 decode_ut rs1", false,-1, 4,0);
        tracep->declBus(c+281,"ysyx_22040228 rvcpu1 decode_ut imm", false,-1, 11,0);
        tracep->declBus(c+282,"ysyx_22040228 rvcpu1 decode_ut funct7", false,-1, 6,0);
        tracep->declBus(c+283,"ysyx_22040228 rvcpu1 decode_ut rs2", false,-1, 4,0);
        tracep->declBus(c+284,"ysyx_22040228 rvcpu1 decode_ut u_imm", false,-1, 19,0);
        tracep->declBus(c+285,"ysyx_22040228 rvcpu1 decode_ut s_imm", false,-1, 11,0);
        tracep->declBus(c+286,"ysyx_22040228 rvcpu1 decode_ut b_imm", false,-1, 12,1);
        tracep->declBit(c+1313,"ysyx_22040228 rvcpu1 decode_ut inst_lui", false,-1);
        tracep->declBit(c+1314,"ysyx_22040228 rvcpu1 decode_ut inst_auipc", false,-1);
        tracep->declBit(c+1315,"ysyx_22040228 rvcpu1 decode_ut inst_jal", false,-1);
        tracep->declBit(c+1316,"ysyx_22040228 rvcpu1 decode_ut inst_jalr", false,-1);
        tracep->declBit(c+1317,"ysyx_22040228 rvcpu1 decode_ut inst_jump", false,-1);
        tracep->declBit(c+891,"ysyx_22040228 rvcpu1 decode_ut inst_addi", false,-1);
        tracep->declBit(c+892,"ysyx_22040228 rvcpu1 decode_ut inst_slti", false,-1);
        tracep->declBit(c+893,"ysyx_22040228 rvcpu1 decode_ut inst_sltiu", false,-1);
        tracep->declBit(c+894,"ysyx_22040228 rvcpu1 decode_ut inst_xori", false,-1);
        tracep->declBit(c+895,"ysyx_22040228 rvcpu1 decode_ut inst_ori", false,-1);
        tracep->declBit(c+896,"ysyx_22040228 rvcpu1 decode_ut inst_andi", false,-1);
        tracep->declBit(c+897,"ysyx_22040228 rvcpu1 decode_ut inst_slli", false,-1);
        tracep->declBit(c+898,"ysyx_22040228 rvcpu1 decode_ut inst_srli", false,-1);
        tracep->declBit(c+1318,"ysyx_22040228 rvcpu1 decode_ut inst_srai", false,-1);
        tracep->declBit(c+1319,"ysyx_22040228 rvcpu1 decode_ut inst_addiw", false,-1);
        tracep->declBit(c+1320,"ysyx_22040228 rvcpu1 decode_ut inst_slliw", false,-1);
        tracep->declBit(c+1321,"ysyx_22040228 rvcpu1 decode_ut inst_srliw", false,-1);
        tracep->declBit(c+1322,"ysyx_22040228 rvcpu1 decode_ut inst_sraiw", false,-1);
        tracep->declBit(c+1323,"ysyx_22040228 rvcpu1 decode_ut inst_add", false,-1);
        tracep->declBit(c+1324,"ysyx_22040228 rvcpu1 decode_ut inst_sub", false,-1);
        tracep->declBit(c+1325,"ysyx_22040228 rvcpu1 decode_ut inst_sll", false,-1);
        tracep->declBit(c+1326,"ysyx_22040228 rvcpu1 decode_ut inst_slt", false,-1);
        tracep->declBit(c+1327,"ysyx_22040228 rvcpu1 decode_ut inst_sltu", false,-1);
        tracep->declBit(c+1328,"ysyx_22040228 rvcpu1 decode_ut inst_xor", false,-1);
        tracep->declBit(c+1329,"ysyx_22040228 rvcpu1 decode_ut inst_srl", false,-1);
        tracep->declBit(c+1330,"ysyx_22040228 rvcpu1 decode_ut inst_sra", false,-1);
        tracep->declBit(c+1331,"ysyx_22040228 rvcpu1 decode_ut inst_or", false,-1);
        tracep->declBit(c+1332,"ysyx_22040228 rvcpu1 decode_ut inst_and", false,-1);
        tracep->declBit(c+1333,"ysyx_22040228 rvcpu1 decode_ut inst_div", false,-1);
        tracep->declBit(c+1334,"ysyx_22040228 rvcpu1 decode_ut inst_divu", false,-1);
        tracep->declBit(c+1335,"ysyx_22040228 rvcpu1 decode_ut inst_mul", false,-1);
        tracep->declBit(c+1336,"ysyx_22040228 rvcpu1 decode_ut inst_mulh", false,-1);
        tracep->declBit(c+1337,"ysyx_22040228 rvcpu1 decode_ut inst_mulhsu", false,-1);
        tracep->declBit(c+1338,"ysyx_22040228 rvcpu1 decode_ut inst_mulhu", false,-1);
        tracep->declBit(c+1339,"ysyx_22040228 rvcpu1 decode_ut inst_rem", false,-1);
        tracep->declBit(c+1340,"ysyx_22040228 rvcpu1 decode_ut inst_remu", false,-1);
        tracep->declBit(c+1341,"ysyx_22040228 rvcpu1 decode_ut inst_addw", false,-1);
        tracep->declBit(c+1342,"ysyx_22040228 rvcpu1 decode_ut inst_subw", false,-1);
        tracep->declBit(c+1343,"ysyx_22040228 rvcpu1 decode_ut inst_sllw", false,-1);
        tracep->declBit(c+1344,"ysyx_22040228 rvcpu1 decode_ut inst_srlw", false,-1);
        tracep->declBit(c+1345,"ysyx_22040228 rvcpu1 decode_ut inst_sraw", false,-1);
        tracep->declBit(c+1346,"ysyx_22040228 rvcpu1 decode_ut inst_divuw", false,-1);
        tracep->declBit(c+1347,"ysyx_22040228 rvcpu1 decode_ut inst_divw", false,-1);
        tracep->declBit(c+1348,"ysyx_22040228 rvcpu1 decode_ut inst_mulw", false,-1);
        tracep->declBit(c+1349,"ysyx_22040228 rvcpu1 decode_ut inst_remuw", false,-1);
        tracep->declBit(c+1350,"ysyx_22040228 rvcpu1 decode_ut inst_remw", false,-1);
        tracep->declBit(c+899,"ysyx_22040228 rvcpu1 decode_ut inst_beq", false,-1);
        tracep->declBit(c+900,"ysyx_22040228 rvcpu1 decode_ut inst_ben", false,-1);
        tracep->declBit(c+901,"ysyx_22040228 rvcpu1 decode_ut inst_blt", false,-1);
        tracep->declBit(c+902,"ysyx_22040228 rvcpu1 decode_ut inst_bge", false,-1);
        tracep->declBit(c+903,"ysyx_22040228 rvcpu1 decode_ut inst_bltu", false,-1);
        tracep->declBit(c+904,"ysyx_22040228 rvcpu1 decode_ut inst_bgeu", false,-1);
        tracep->declBit(c+1351,"ysyx_22040228 rvcpu1 decode_ut inst_csrrw", false,-1);
        tracep->declBit(c+1352,"ysyx_22040228 rvcpu1 decode_ut inst_csrrs", false,-1);
        tracep->declBit(c+1353,"ysyx_22040228 rvcpu1 decode_ut inst_csrrc", false,-1);
        tracep->declBit(c+1354,"ysyx_22040228 rvcpu1 decode_ut inst_csrrwi", false,-1);
        tracep->declBit(c+1355,"ysyx_22040228 rvcpu1 decode_ut inst_csrrsi", false,-1);
        tracep->declBit(c+1356,"ysyx_22040228 rvcpu1 decode_ut inst_csrrci", false,-1);
        tracep->declBit(c+1357,"ysyx_22040228 rvcpu1 decode_ut inst_csr_rs1", false,-1);
        tracep->declBit(c+1358,"ysyx_22040228 rvcpu1 decode_ut inst_csr_imm", false,-1);
        tracep->declBit(c+1359,"ysyx_22040228 rvcpu1 decode_ut inst_ecall", false,-1);
        tracep->declBit(c+1360,"ysyx_22040228 rvcpu1 decode_ut inst_ebreak", false,-1);
        tracep->declBit(c+1361,"ysyx_22040228 rvcpu1 decode_ut inst_mret", false,-1);
        tracep->declBit(c+287,"ysyx_22040228 rvcpu1 decode_ut inst_fence_i", false,-1);
        tracep->declBus(c+1362,"ysyx_22040228 rvcpu1 decode_ut store_addr_offset", false,-1, 11,0);
        tracep->declBit(c+1363,"ysyx_22040228 rvcpu1 decode_ut alu1_op1", false,-1);
        tracep->declBit(c+1364,"ysyx_22040228 rvcpu1 decode_ut alu2_op1", false,-1);
        tracep->declBit(c+1365,"ysyx_22040228 rvcpu1 decode_ut com1_op1", false,-1);
        tracep->declBit(c+1366,"ysyx_22040228 rvcpu1 decode_ut com2_op1", false,-1);
        tracep->declBit(c+1367,"ysyx_22040228 rvcpu1 decode_ut com3_op1", false,-1);
        tracep->declBit(c+1368,"ysyx_22040228 rvcpu1 decode_ut com4_op1", false,-1);
        tracep->declBit(c+1369,"ysyx_22040228 rvcpu1 decode_ut com5_op1", false,-1);
        tracep->declBit(c+1370,"ysyx_22040228 rvcpu1 decode_ut com6_op1", false,-1);
        tracep->declBit(c+1371,"ysyx_22040228 rvcpu1 decode_ut com7_op1", false,-1);
        tracep->declBit(c+1372,"ysyx_22040228 rvcpu1 decode_ut com8_op1", false,-1);
        tracep->declBit(c+1373,"ysyx_22040228 rvcpu1 decode_ut wb1_op1", false,-1);
        tracep->declBit(c+1374,"ysyx_22040228 rvcpu1 decode_ut wb2_op1", false,-1);
        tracep->declBit(c+1375,"ysyx_22040228 rvcpu1 decode_ut wb3_op1", false,-1);
        tracep->declBit(c+1376,"ysyx_22040228 rvcpu1 decode_ut opselcet1", false,-1);
        tracep->declBit(c+1377,"ysyx_22040228 rvcpu1 decode_ut opselcet2", false,-1);
        tracep->declBit(c+1378,"ysyx_22040228 rvcpu1 decode_ut mem_op1", false,-1);
        tracep->declBit(c+1379,"ysyx_22040228 rvcpu1 decode_ut mem_select1", false,-1);
        tracep->declBit(c+1380,"ysyx_22040228 rvcpu1 decode_ut mem_select2", false,-1);
        tracep->declBit(c+1381,"ysyx_22040228 rvcpu1 decode_ut alu1_op2", false,-1);
        tracep->declBit(c+1382,"ysyx_22040228 rvcpu1 decode_ut alu2_op2", false,-1);
        tracep->declBit(c+905,"ysyx_22040228 rvcpu1 decode_ut com1_op2", false,-1);
        tracep->declBit(c+906,"ysyx_22040228 rvcpu1 decode_ut com2_op2", false,-1);
        tracep->declBit(c+907,"ysyx_22040228 rvcpu1 decode_ut com3_op2", false,-1);
        tracep->declBit(c+908,"ysyx_22040228 rvcpu1 decode_ut com4_op2", false,-1);
        tracep->declBit(c+909,"ysyx_22040228 rvcpu1 decode_ut com5_op2", false,-1);
        tracep->declBit(c+910,"ysyx_22040228 rvcpu1 decode_ut com6_op2", false,-1);
        tracep->declBit(c+911,"ysyx_22040228 rvcpu1 decode_ut com7_op2", false,-1);
        tracep->declBit(c+912,"ysyx_22040228 rvcpu1 decode_ut com8_op2", false,-1);
        tracep->declBit(c+913,"ysyx_22040228 rvcpu1 decode_ut wb1_op2", false,-1);
        tracep->declBit(c+1383,"ysyx_22040228 rvcpu1 decode_ut wb2_op2", false,-1);
        tracep->declBit(c+914,"ysyx_22040228 rvcpu1 decode_ut wb3_op2", false,-1);
        tracep->declBit(c+1384,"ysyx_22040228 rvcpu1 decode_ut opselceto", false,-1);
        tracep->declBit(c+1385,"ysyx_22040228 rvcpu1 decode_ut opselcett", false,-1);
        tracep->declBit(c+1386,"ysyx_22040228 rvcpu1 decode_ut mem_op2", false,-1);
        tracep->declBit(c+1387,"ysyx_22040228 rvcpu1 decode_ut mem_selecto", false,-1);
        tracep->declBit(c+1388,"ysyx_22040228 rvcpu1 decode_ut mem_selectt", false,-1);
        tracep->declBit(c+1389,"ysyx_22040228 rvcpu1 decode_ut forcast_state", false,-1);
        tracep->declBit(c+1183,"ysyx_22040228 rvcpu1 decode_ut data_jf", false,-1);
        tracep->declQuad(c+1390,"ysyx_22040228 rvcpu1 decode_ut op1_sub_op2", false,-1, 63,0);
        tracep->declBit(c+1392,"ysyx_22040228 rvcpu1 decode_ut op1_ls_op2", false,-1);
        tracep->declBit(c+1393,"ysyx_22040228 rvcpu1 decode_ut branch_pc_ena", false,-1);
        tracep->declQuad(c+915,"ysyx_22040228 rvcpu1 decode_ut branch_pc", false,-1, 63,0);
        tracep->declBit(c+1394,"ysyx_22040228 rvcpu1 decode_ut jalr_pc_ena", false,-1);
        tracep->declQuad(c+917,"ysyx_22040228 rvcpu1 decode_ut jalr_pc", false,-1, 63,0);
        tracep->declQuad(c+919,"ysyx_22040228 rvcpu1 decode_ut jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+1395,"ysyx_22040228 rvcpu1 decode_ut predict_success", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 socreboard_u clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 socreboard_u rst", false,-1);
        tracep->declQuad(c+1155,"ysyx_22040228 rvcpu1 socreboard_u decode1_pc", false,-1, 63,0);
        tracep->declBus(c+1163,"ysyx_22040228 rvcpu1 socreboard_u type_needstop1", false,-1, 5,0);
        tracep->declBus(c+1143,"ysyx_22040228 rvcpu1 socreboard_u decode11_addr", false,-1, 4,0);
        tracep->declBit(c+1145,"ysyx_22040228 rvcpu1 socreboard_u decode11_ena", false,-1);
        tracep->declBus(c+1144,"ysyx_22040228 rvcpu1 socreboard_u decode12_addr", false,-1, 4,0);
        tracep->declBit(c+1146,"ysyx_22040228 rvcpu1 socreboard_u decode12_ena", false,-1);
        tracep->declBus(c+1154,"ysyx_22040228 rvcpu1 socreboard_u de1_wb_addr", false,-1, 4,0);
        tracep->declBit(c+1153,"ysyx_22040228 rvcpu1 socreboard_u de1_wb_ena", false,-1);
        tracep->declQuad(c+1178,"ysyx_22040228 rvcpu1 socreboard_u decode2_pc", false,-1, 63,0);
        tracep->declBus(c+1188,"ysyx_22040228 rvcpu1 socreboard_u type_needstop2", false,-1, 5,0);
        tracep->declBus(c+1166,"ysyx_22040228 rvcpu1 socreboard_u decode21_addr", false,-1, 4,0);
        tracep->declBit(c+1168,"ysyx_22040228 rvcpu1 socreboard_u decode21_ena", false,-1);
        tracep->declBus(c+1167,"ysyx_22040228 rvcpu1 socreboard_u decode22_addr", false,-1, 4,0);
        tracep->declBit(c+1169,"ysyx_22040228 rvcpu1 socreboard_u decode22_ena", false,-1);
        tracep->declBus(c+1177,"ysyx_22040228 rvcpu1 socreboard_u de2_wb_addr", false,-1, 4,0);
        tracep->declBit(c+1176,"ysyx_22040228 rvcpu1 socreboard_u de2_wb_ena", false,-1);
        tracep->declBus(c+93,"ysyx_22040228 rvcpu1 socreboard_u aluo_addr", false,-1, 4,0);
        tracep->declBit(c+116,"ysyx_22040228 rvcpu1 socreboard_u aluo_ena", false,-1);
        tracep->declBus(c+104,"ysyx_22040228 rvcpu1 socreboard_u alut_addr", false,-1, 4,0);
        tracep->declBit(c+103,"ysyx_22040228 rvcpu1 socreboard_u alut_ena", false,-1);
        tracep->declBus(c+112,"ysyx_22040228 rvcpu1 socreboard_u mmu_addr", false,-1, 4,0);
        tracep->declBit(c+111,"ysyx_22040228 rvcpu1 socreboard_u mmu_ena", false,-1);
        tracep->declBit(c+117,"ysyx_22040228 rvcpu1 socreboard_u aluo_busy", false,-1);
        tracep->declBit(c+121,"ysyx_22040228 rvcpu1 socreboard_u alut_busy", false,-1);
        tracep->declBit(c+1211,"ysyx_22040228 rvcpu1 socreboard_u mmu_busy", false,-1);
        tracep->declBit(c+1216,"ysyx_22040228 rvcpu1 socreboard_u commit_stop", false,-1);
        tracep->declBit(c+1592,"ysyx_22040228 rvcpu1 socreboard_u timer_intr", false,-1);
        tracep->declBit(c+80,"ysyx_22040228 rvcpu1 socreboard_u caninissu1", false,-1);
        tracep->declBit(c+81,"ysyx_22040228 rvcpu1 socreboard_u caninissu2", false,-1);
        tracep->declBus(c+1189,"ysyx_22040228 rvcpu1 socreboard_u chose_exu1", false,-1, 2,0);
        tracep->declBus(c+1190,"ysyx_22040228 rvcpu1 socreboard_u chose_exu2", false,-1, 2,0);
        tracep->declBit(c+1191,"ysyx_22040228 rvcpu1 socreboard_u decode1_launch", false,-1);
        tracep->declBit(c+1192,"ysyx_22040228 rvcpu1 socreboard_u decode2_launch", false,-1);
        tracep->declBit(c+1193,"ysyx_22040228 rvcpu1 socreboard_u de_ex_cleano", false,-1);
        tracep->declBit(c+1194,"ysyx_22040228 rvcpu1 socreboard_u de_ex_cleant", false,-1);
        tracep->declBit(c+1195,"ysyx_22040228 rvcpu1 socreboard_u shoud_nop_de1", false,-1);
        tracep->declBit(c+1196,"ysyx_22040228 rvcpu1 socreboard_u shoud_nop_de2", false,-1);
        tracep->declQuad(c+1197,"ysyx_22040228 rvcpu1 socreboard_u retire_pc", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+288+i*1,"ysyx_22040228 rvcpu1 socreboard_u reg_exe_name", true,(i+0), 4,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+921+i*1,"ysyx_22040228 rvcpu1 socreboard_u busy", true,(i+0));}}
        tracep->declBit(c+1396,"ysyx_22040228 rvcpu1 socreboard_u shoudo_stop_waw", false,-1);
        tracep->declBit(c+1397,"ysyx_22040228 rvcpu1 socreboard_u shoudt_stop_waw", false,-1);
        tracep->declBit(c+1398,"ysyx_22040228 rvcpu1 socreboard_u shoudo1_stop_war", false,-1);
        tracep->declBit(c+1399,"ysyx_22040228 rvcpu1 socreboard_u shoudo2_stop_war", false,-1);
        tracep->declBit(c+1400,"ysyx_22040228 rvcpu1 socreboard_u shoudt1_stop_war", false,-1);
        tracep->declBit(c+1401,"ysyx_22040228 rvcpu1 socreboard_u shoudt2_stop_war", false,-1);
        tracep->declBit(c+1402,"ysyx_22040228 rvcpu1 socreboard_u shoudo_stop_ctrl", false,-1);
        tracep->declBit(c+1403,"ysyx_22040228 rvcpu1 socreboard_u shoudt_stop_ctrl", false,-1);
        tracep->declBit(c+1404,"ysyx_22040228 rvcpu1 socreboard_u shoudo_stop_hard", false,-1);
        tracep->declBit(c+1405,"ysyx_22040228 rvcpu1 socreboard_u shoudt_stop_hard", false,-1);
        tracep->declBit(c+1196,"ysyx_22040228 rvcpu1 socreboard_u shoudo_stop_trap", false,-1);
        tracep->declBit(c+1195,"ysyx_22040228 rvcpu1 socreboard_u shoudt_stop_trap", false,-1);
        tracep->declBit(c+80,"ysyx_22040228 rvcpu1 socreboard_u can1", false,-1);
        tracep->declBit(c+291,"ysyx_22040228 rvcpu1 socreboard_u caa1", false,-1);
        tracep->declBit(c+81,"ysyx_22040228 rvcpu1 socreboard_u can2", false,-1);
        tracep->declBit(c+292,"ysyx_22040228 rvcpu1 socreboard_u caa2", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 de clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 de rst", false,-1);
        tracep->declBit(c+1193,"ysyx_22040228 rvcpu1 de clean1_ena", false,-1);
        tracep->declBit(c+1194,"ysyx_22040228 rvcpu1 de clean2_ena", false,-1);
        tracep->declBit(c+1592,"ysyx_22040228 rvcpu1 de timer_init", false,-1);
        tracep->declBit(c+117,"ysyx_22040228 rvcpu1 de stop_aluo", false,-1);
        tracep->declBit(c+121,"ysyx_22040228 rvcpu1 de stop_alut", false,-1);
        tracep->declBit(c+1211,"ysyx_22040228 rvcpu1 de stop_mmu", false,-1);
        tracep->declBus(c+1189,"ysyx_22040228 rvcpu1 de de_ex_chose1", false,-1, 2,0);
        tracep->declBus(c+1190,"ysyx_22040228 rvcpu1 de de_ex_chose2", false,-1, 2,0);
        tracep->declBus(c+1147,"ysyx_22040228 rvcpu1 de inst_type_d1", false,-1, 7,0);
        tracep->declBus(c+1148,"ysyx_22040228 rvcpu1 de inst_opcode_d1", false,-1, 7,0);
        tracep->declQuad(c+1149,"ysyx_22040228 rvcpu1 de op1_decode1", false,-1, 63,0);
        tracep->declQuad(c+1151,"ysyx_22040228 rvcpu1 de op2_decode1", false,-1, 63,0);
        tracep->declBit(c+1153,"ysyx_22040228 rvcpu1 de decode1_rd_ena", false,-1);
        tracep->declBus(c+1154,"ysyx_22040228 rvcpu1 de decode1_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1155,"ysyx_22040228 rvcpu1 de decode1_pc_data", false,-1, 63,0);
        tracep->declBus(c+1157,"ysyx_22040228 rvcpu1 de decode1_inst_data", false,-1, 31,0);
        tracep->declQuad(c+1158,"ysyx_22040228 rvcpu1 de decode1_memoffset", false,-1, 63,0);
        tracep->declBus(c+1564,"ysyx_22040228 rvcpu1 de decode1_memsel", false,-1, 2,0);
        tracep->declBus(c+1170,"ysyx_22040228 rvcpu1 de inst_type_d2", false,-1, 7,0);
        tracep->declBus(c+1171,"ysyx_22040228 rvcpu1 de inst_opcode_d2", false,-1, 7,0);
        tracep->declQuad(c+1172,"ysyx_22040228 rvcpu1 de op1_decode2", false,-1, 63,0);
        tracep->declQuad(c+1174,"ysyx_22040228 rvcpu1 de op2_decode2", false,-1, 63,0);
        tracep->declBit(c+1176,"ysyx_22040228 rvcpu1 de decode2_rd_ena", false,-1);
        tracep->declBus(c+1177,"ysyx_22040228 rvcpu1 de decode2_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+1178,"ysyx_22040228 rvcpu1 de decode2_pc_data", false,-1, 63,0);
        tracep->declBus(c+1180,"ysyx_22040228 rvcpu1 de decode2_inst_data", false,-1, 31,0);
        tracep->declQuad(c+1181,"ysyx_22040228 rvcpu1 de decode2_memoffset", false,-1, 63,0);
        tracep->declBus(c+1565,"ysyx_22040228 rvcpu1 de decode2_memsel", false,-1, 2,0);
        tracep->declBit(c+82,"ysyx_22040228 rvcpu1 de alu1_timer_init", false,-1);
        tracep->declBus(c+85,"ysyx_22040228 rvcpu1 de alu1_inst", false,-1, 31,0);
        tracep->declQuad(c+83,"ysyx_22040228 rvcpu1 de alu1_pc", false,-1, 63,0);
        tracep->declBus(c+86,"ysyx_22040228 rvcpu1 de alu1_inst_type", false,-1, 7,0);
        tracep->declBus(c+87,"ysyx_22040228 rvcpu1 de alu1_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+88,"ysyx_22040228 rvcpu1 de alu1_op1_data", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22040228 rvcpu1 de alu1_op2_data", false,-1, 63,0);
        tracep->declBit(c+92,"ysyx_22040228 rvcpu1 de alu1_rd_ena", false,-1);
        tracep->declBus(c+93,"ysyx_22040228 rvcpu1 de alu1_rd_addr", false,-1, 4,0);
        tracep->declBus(c+96,"ysyx_22040228 rvcpu1 de alu2_inst", false,-1, 31,0);
        tracep->declQuad(c+94,"ysyx_22040228 rvcpu1 de alu2_pc", false,-1, 63,0);
        tracep->declBus(c+97,"ysyx_22040228 rvcpu1 de alu2_inst_type", false,-1, 7,0);
        tracep->declBus(c+98,"ysyx_22040228 rvcpu1 de alu2_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+99,"ysyx_22040228 rvcpu1 de alu2_op1_data", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22040228 rvcpu1 de alu2_op2_data", false,-1, 63,0);
        tracep->declBit(c+103,"ysyx_22040228 rvcpu1 de alu2_rd_ena", false,-1);
        tracep->declBus(c+104,"ysyx_22040228 rvcpu1 de alu2_rd_addr", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22040228 rvcpu1 de mem_inst", false,-1, 31,0);
        tracep->declQuad(c+105,"ysyx_22040228 rvcpu1 de mem_pc", false,-1, 63,0);
        tracep->declBus(c+108,"ysyx_22040228 rvcpu1 de mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+111,"ysyx_22040228 rvcpu1 de mem_rd_ena", false,-1);
        tracep->declBus(c+112,"ysyx_22040228 rvcpu1 de mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+109,"ysyx_22040228 rvcpu1 de mem_op2", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_22040228 rvcpu1 de mem_offset", false,-1, 63,0);
        tracep->declBus(c+115,"ysyx_22040228 rvcpu1 de mem_sel", false,-1, 2,0);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 aluo clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 aluo rst", false,-1);
        tracep->declQuad(c+83,"ysyx_22040228 rvcpu1 aluo pc_i", false,-1, 63,0);
        tracep->declBus(c+85,"ysyx_22040228 rvcpu1 aluo id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040228 rvcpu1 aluo inst_type_i", false,-1, 7,0);
        tracep->declBus(c+87,"ysyx_22040228 rvcpu1 aluo inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+88,"ysyx_22040228 rvcpu1 aluo op1_i", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22040228 rvcpu1 aluo op2_i", false,-1, 63,0);
        tracep->declBit(c+92,"ysyx_22040228 rvcpu1 aluo rd_ena_i", false,-1);
        tracep->declBus(c+93,"ysyx_22040228 rvcpu1 aluo rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+116,"ysyx_22040228 rvcpu1 aluo rd_ena_o", false,-1);
        tracep->declBus(c+93,"ysyx_22040228 rvcpu1 aluo rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+1201,"ysyx_22040228 rvcpu1 aluo rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+1199,"ysyx_22040228 rvcpu1 aluo ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+1566,"ysyx_22040228 rvcpu1 aluo ex_inst_o", false,-1, 31,0);
        tracep->declBit(c+3,"ysyx_22040228 rvcpu1 aluo fence_ready", false,-1);
        tracep->declBit(c+117,"ysyx_22040228 rvcpu1 aluo socreboard_aluo", false,-1);
        tracep->declBit(c+82,"ysyx_22040228 rvcpu1 aluo timer_intr", false,-1);
        tracep->declQuad(c+118,"ysyx_22040228 rvcpu1 aluo trap_pc", false,-1, 63,0);
        tracep->declBit(c+120,"ysyx_22040228 rvcpu1 aluo trap_able", false,-1);
        tracep->declQuad(c+1406,"ysyx_22040228 rvcpu1 aluo exe_res", false,-1, 63,0);
        tracep->declQuad(c+293,"ysyx_22040228 rvcpu1 aluo op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+295,"ysyx_22040228 rvcpu1 aluo op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+297,"ysyx_22040228 rvcpu1 aluo op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+299,"ysyx_22040228 rvcpu1 aluo op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+301,"ysyx_22040228 rvcpu1 aluo op1_ls_op2", false,-1);
        tracep->declQuad(c+302,"ysyx_22040228 rvcpu1 aluo shift_res", false,-1, 63,0);
        tracep->declBus(c+304,"ysyx_22040228 rvcpu1 aluo op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+305,"ysyx_22040228 rvcpu1 aluo sllw_res", false,-1, 63,0);
        tracep->declBus(c+307,"ysyx_22040228 rvcpu1 aluo op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+308,"ysyx_22040228 rvcpu1 aluo srlw_res", false,-1, 63,0);
        tracep->declBus(c+310,"ysyx_22040228 rvcpu1 aluo op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+311,"ysyx_22040228 rvcpu1 aluo sraw_res", false,-1, 63,0);
        tracep->declBus(c+313,"ysyx_22040228 rvcpu1 aluo op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+314,"ysyx_22040228 rvcpu1 aluo subw_res", false,-1, 63,0);
        tracep->declQuad(c+316,"ysyx_22040228 rvcpu1 aluo upper_imm", false,-1, 63,0);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 aluo clk_in", false,-1);
        tracep->declQuad(c+318,"ysyx_22040228 rvcpu1 aluo mul_data", false,-1, 63,0);
        tracep->declBit(c+320,"ysyx_22040228 rvcpu1 aluo mul_finish_sign", false,-1);
        tracep->declBit(c+321,"ysyx_22040228 rvcpu1 aluo mul_ready", false,-1);
        tracep->declQuad(c+1408,"ysyx_22040228 rvcpu1 aluo divrem_data", false,-1, 63,0);
        tracep->declBit(c+322,"ysyx_22040228 rvcpu1 aluo dr_finish_sign", false,-1);
        tracep->declBit(c+323,"ysyx_22040228 rvcpu1 aluo dr_ready", false,-1);
        tracep->declQuad(c+324,"ysyx_22040228 rvcpu1 aluo op1_divdata", false,-1, 63,0);
        tracep->declQuad(c+326,"ysyx_22040228 rvcpu1 aluo op2_divdata", false,-1, 63,0);
        tracep->declBit(c+117,"ysyx_22040228 rvcpu1 aluo mul_div_req", false,-1);
        tracep->declBit(c+328,"ysyx_22040228 rvcpu1 aluo tmr_trap_ena", false,-1);
        tracep->declBus(c+329,"ysyx_22040228 rvcpu1 aluo csr_idx", false,-1, 11,0);
        tracep->declQuad(c+330,"ysyx_22040228 rvcpu1 aluo read_csr_data", false,-1, 63,0);
        tracep->declBit(c+120,"ysyx_22040228 rvcpu1 aluo trap_ena", false,-1);
        tracep->declBit(c+332,"ysyx_22040228 rvcpu1 aluo ecall_trap_ena", false,-1);
        tracep->declBit(c+333,"ysyx_22040228 rvcpu1 aluo cmt_mret_ena", false,-1);
        tracep->declBit(c+334,"ysyx_22040228 rvcpu1 aluo csr_wr_en", false,-1);
        tracep->declBit(c+335,"ysyx_22040228 rvcpu1 aluo csr_rd_en", false,-1);
        tracep->declQuad(c+336,"ysyx_22040228 rvcpu1 aluo wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+338,"ysyx_22040228 rvcpu1 aluo trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+340,"ysyx_22040228 rvcpu1 aluo mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+342,"ysyx_22040228 rvcpu1 aluo mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 aluo decode1_multiplier clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 aluo decode1_multiplier rst", false,-1);
        tracep->declBit(c+321,"ysyx_22040228 rvcpu1 aluo decode1_multiplier mult_ready", false,-1);
        tracep->declBus(c+87,"ysyx_22040228 rvcpu1 aluo decode1_multiplier inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+88,"ysyx_22040228 rvcpu1 aluo decode1_multiplier mult_op1", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22040228 rvcpu1 aluo decode1_multiplier mult_op2", false,-1, 63,0);
        tracep->declQuad(c+318,"ysyx_22040228 rvcpu1 aluo decode1_multiplier product_val", false,-1, 63,0);
        tracep->declBit(c+320,"ysyx_22040228 rvcpu1 aluo decode1_multiplier mult_finish", false,-1);
        tracep->declBit(c+344,"ysyx_22040228 rvcpu1 aluo decode1_multiplier mult_valid", false,-1);
        tracep->declBit(c+345,"ysyx_22040228 rvcpu1 aluo decode1_multiplier op1_signbit", false,-1);
        tracep->declBit(c+346,"ysyx_22040228 rvcpu1 aluo decode1_multiplier op2_signbit", false,-1);
        tracep->declQuad(c+347,"ysyx_22040228 rvcpu1 aluo decode1_multiplier op1_absolute", false,-1, 63,0);
        tracep->declQuad(c+349,"ysyx_22040228 rvcpu1 aluo decode1_multiplier op2_absolute", false,-1, 63,0);
        tracep->declArray(c+351,"ysyx_22040228 rvcpu1 aluo decode1_multiplier multiplcand", false,-1, 127,0);
        tracep->declQuad(c+355,"ysyx_22040228 rvcpu1 aluo decode1_multiplier multipler", false,-1, 63,0);
        tracep->declArray(c+357,"ysyx_22040228 rvcpu1 aluo decode1_multiplier product_lins", false,-1, 127,0);
        tracep->declArray(c+361,"ysyx_22040228 rvcpu1 aluo decode1_multiplier product_temp", false,-1, 127,0);
        tracep->declBit(c+365,"ysyx_22040228 rvcpu1 aluo decode1_multiplier product_signbit", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 aluo decode1_divider clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 aluo decode1_divider rst", false,-1);
        tracep->declQuad(c+326,"ysyx_22040228 rvcpu1 aluo decode1_divider diviser", false,-1, 63,0);
        tracep->declQuad(c+324,"ysyx_22040228 rvcpu1 aluo decode1_divider dividend", false,-1, 63,0);
        tracep->declBus(c+87,"ysyx_22040228 rvcpu1 aluo decode1_divider inst_opcode", false,-1, 7,0);
        tracep->declBit(c+323,"ysyx_22040228 rvcpu1 aluo decode1_divider div_ready", false,-1);
        tracep->declQuad(c+1408,"ysyx_22040228 rvcpu1 aluo decode1_divider div_rem_data", false,-1, 63,0);
        tracep->declBit(c+322,"ysyx_22040228 rvcpu1 aluo decode1_divider div_finish", false,-1);
        tracep->declBus(c+366,"ysyx_22040228 rvcpu1 aluo decode1_divider counter", false,-1, 6,0);
        tracep->declBit(c+367,"ysyx_22040228 rvcpu1 aluo decode1_divider sign", false,-1);
        tracep->declQuad(c+368,"ysyx_22040228 rvcpu1 aluo decode1_divider dividend_t", false,-1, 63,0);
        tracep->declQuad(c+370,"ysyx_22040228 rvcpu1 aluo decode1_divider divider_t", false,-1, 63,0);
        tracep->declArray(c+372,"ysyx_22040228 rvcpu1 aluo decode1_divider temp_a", false,-1, 128,0);
        tracep->declArray(c+377,"ysyx_22040228 rvcpu1 aluo decode1_divider temp_b", false,-1, 64,0);
        tracep->declBit(c+322,"ysyx_22040228 rvcpu1 aluo decode1_divider finish", false,-1);
        tracep->declBit(c+380,"ysyx_22040228 rvcpu1 aluo decode1_divider sigin_inst", false,-1);
        tracep->declQuad(c+1410,"ysyx_22040228 rvcpu1 aluo decode1_divider yushu", false,-1, 63,0);
        tracep->declQuad(c+1412,"ysyx_22040228 rvcpu1 aluo decode1_divider shang", false,-1, 63,0);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 aluo csr0 clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 aluo csr0 rst", false,-1);
        tracep->declQuad(c+83,"ysyx_22040228 rvcpu1 aluo csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+334,"ysyx_22040228 rvcpu1 aluo csr0 csr_wr_en", false,-1);
        tracep->declBit(c+335,"ysyx_22040228 rvcpu1 aluo csr0 csr_rd_en", false,-1);
        tracep->declBus(c+329,"ysyx_22040228 rvcpu1 aluo csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+333,"ysyx_22040228 rvcpu1 aluo csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+332,"ysyx_22040228 rvcpu1 aluo csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+338,"ysyx_22040228 rvcpu1 aluo csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+82,"ysyx_22040228 rvcpu1 aluo csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+328,"ysyx_22040228 rvcpu1 aluo csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+330,"ysyx_22040228 rvcpu1 aluo csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+336,"ysyx_22040228 rvcpu1 aluo csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+381,"ysyx_22040228 rvcpu1 aluo csr0 sel_mcycle", false,-1);
        tracep->declBit(c+382,"ysyx_22040228 rvcpu1 aluo csr0 rd_mcycle", false,-1);
        tracep->declBit(c+383,"ysyx_22040228 rvcpu1 aluo csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+384,"ysyx_22040228 rvcpu1 aluo csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+386,"ysyx_22040228 rvcpu1 aluo csr0 sel_mstatus", false,-1);
        tracep->declBit(c+387,"ysyx_22040228 rvcpu1 aluo csr0 rd_mstatus", false,-1);
        tracep->declBit(c+388,"ysyx_22040228 rvcpu1 aluo csr0 wr_mstatus", false,-1);
        tracep->declBit(c+389,"ysyx_22040228 rvcpu1 aluo csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+390,"ysyx_22040228 rvcpu1 aluo csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+391,"ysyx_22040228 rvcpu1 aluo csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+389,"ysyx_22040228 rvcpu1 aluo csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+392,"ysyx_22040228 rvcpu1 aluo csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+393,"ysyx_22040228 rvcpu1 aluo csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+389,"ysyx_22040228 rvcpu1 aluo csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+394,"ysyx_22040228 rvcpu1 aluo csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+395,"ysyx_22040228 rvcpu1 aluo csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+1599,"ysyx_22040228 rvcpu1 aluo csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+396,"ysyx_22040228 rvcpu1 aluo csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+397,"ysyx_22040228 rvcpu1 aluo csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+398,"ysyx_22040228 rvcpu1 aluo csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+400,"ysyx_22040228 rvcpu1 aluo csr0 sel_mtvec", false,-1);
        tracep->declBit(c+401,"ysyx_22040228 rvcpu1 aluo csr0 rd_mtvec", false,-1);
        tracep->declBit(c+402,"ysyx_22040228 rvcpu1 aluo csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+403,"ysyx_22040228 rvcpu1 aluo csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+1599,"ysyx_22040228 rvcpu1 aluo csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+405,"ysyx_22040228 rvcpu1 aluo csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+407,"ysyx_22040228 rvcpu1 aluo csr0 sel_mepc", false,-1);
        tracep->declBit(c+408,"ysyx_22040228 rvcpu1 aluo csr0 rd_mepc", false,-1);
        tracep->declBit(c+409,"ysyx_22040228 rvcpu1 aluo csr0 wr_mepc", false,-1);
        tracep->declQuad(c+410,"ysyx_22040228 rvcpu1 aluo csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+412,"ysyx_22040228 rvcpu1 aluo csr0 sel_mcause", false,-1);
        tracep->declBit(c+413,"ysyx_22040228 rvcpu1 aluo csr0 rd_mcause", false,-1);
        tracep->declBit(c+414,"ysyx_22040228 rvcpu1 aluo csr0 wr_mcause", false,-1);
        tracep->declBit(c+415,"ysyx_22040228 rvcpu1 aluo csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+416,"ysyx_22040228 rvcpu1 aluo csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+418,"ysyx_22040228 rvcpu1 aluo csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+420,"ysyx_22040228 rvcpu1 aluo csr0 sle_mie", false,-1);
        tracep->declBit(c+421,"ysyx_22040228 rvcpu1 aluo csr0 rd_mie", false,-1);
        tracep->declBit(c+422,"ysyx_22040228 rvcpu1 aluo csr0 wr_mie", false,-1);
        tracep->declBit(c+423,"ysyx_22040228 rvcpu1 aluo csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+424,"ysyx_22040228 rvcpu1 aluo csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+426,"ysyx_22040228 rvcpu1 aluo csr0 sel_mip", false,-1);
        tracep->declBit(c+427,"ysyx_22040228 rvcpu1 aluo csr0 rd_mip", false,-1);
        tracep->declBit(c+428,"ysyx_22040228 rvcpu1 aluo csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+429,"ysyx_22040228 rvcpu1 aluo csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+431,"ysyx_22040228 rvcpu1 aluo csr0 sel_mscratch", false,-1);
        tracep->declBit(c+432,"ysyx_22040228 rvcpu1 aluo csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+433,"ysyx_22040228 rvcpu1 aluo csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+434,"ysyx_22040228 rvcpu1 aluo csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+436,"ysyx_22040228 rvcpu1 aluo csr0 sel_mvendorid", false,-1);
        tracep->declBit(c+437,"ysyx_22040228 rvcpu1 aluo csr0 rd_mvendorid", false,-1);
        tracep->declQuad(c+1605,"ysyx_22040228 rvcpu1 aluo csr0 csr_mvendorid", false,-1, 63,0);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 alut clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 alut rst", false,-1);
        tracep->declQuad(c+94,"ysyx_22040228 rvcpu1 alut pc_i", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22040228 rvcpu1 alut id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+97,"ysyx_22040228 rvcpu1 alut inst_type_i", false,-1, 7,0);
        tracep->declBus(c+98,"ysyx_22040228 rvcpu1 alut inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+99,"ysyx_22040228 rvcpu1 alut op1_i", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22040228 rvcpu1 alut op2_i", false,-1, 63,0);
        tracep->declBit(c+103,"ysyx_22040228 rvcpu1 alut rd_ena_i", false,-1);
        tracep->declBus(c+104,"ysyx_22040228 rvcpu1 alut rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+103,"ysyx_22040228 rvcpu1 alut rd_ena_o", false,-1);
        tracep->declBus(c+104,"ysyx_22040228 rvcpu1 alut rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+1205,"ysyx_22040228 rvcpu1 alut rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+1203,"ysyx_22040228 rvcpu1 alut ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+1567,"ysyx_22040228 rvcpu1 alut ex_inst_o", false,-1, 31,0);
        tracep->declBit(c+121,"ysyx_22040228 rvcpu1 alut socreboard_alut", false,-1);
        tracep->declQuad(c+1414,"ysyx_22040228 rvcpu1 alut exe_res", false,-1, 63,0);
        tracep->declQuad(c+438,"ysyx_22040228 rvcpu1 alut op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+440,"ysyx_22040228 rvcpu1 alut op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+442,"ysyx_22040228 rvcpu1 alut op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+444,"ysyx_22040228 rvcpu1 alut op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+446,"ysyx_22040228 rvcpu1 alut op1_ls_op2", false,-1);
        tracep->declQuad(c+447,"ysyx_22040228 rvcpu1 alut shift_res", false,-1, 63,0);
        tracep->declBus(c+449,"ysyx_22040228 rvcpu1 alut op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+450,"ysyx_22040228 rvcpu1 alut sllw_res", false,-1, 63,0);
        tracep->declBus(c+452,"ysyx_22040228 rvcpu1 alut op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+453,"ysyx_22040228 rvcpu1 alut srlw_res", false,-1, 63,0);
        tracep->declBus(c+455,"ysyx_22040228 rvcpu1 alut op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+456,"ysyx_22040228 rvcpu1 alut sraw_res", false,-1, 63,0);
        tracep->declBus(c+458,"ysyx_22040228 rvcpu1 alut op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+459,"ysyx_22040228 rvcpu1 alut subw_res", false,-1, 63,0);
        tracep->declQuad(c+461,"ysyx_22040228 rvcpu1 alut upper_imm", false,-1, 63,0);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 alut clk_in", false,-1);
        tracep->declQuad(c+463,"ysyx_22040228 rvcpu1 alut mul_data", false,-1, 63,0);
        tracep->declBit(c+465,"ysyx_22040228 rvcpu1 alut mul_finish_sign", false,-1);
        tracep->declBit(c+466,"ysyx_22040228 rvcpu1 alut mul_ready", false,-1);
        tracep->declQuad(c+1416,"ysyx_22040228 rvcpu1 alut divrem_data", false,-1, 63,0);
        tracep->declBit(c+467,"ysyx_22040228 rvcpu1 alut dr_finish_sign", false,-1);
        tracep->declBit(c+468,"ysyx_22040228 rvcpu1 alut dr_ready", false,-1);
        tracep->declQuad(c+469,"ysyx_22040228 rvcpu1 alut op1_divdata", false,-1, 63,0);
        tracep->declQuad(c+471,"ysyx_22040228 rvcpu1 alut op2_divdata", false,-1, 63,0);
        tracep->declBit(c+121,"ysyx_22040228 rvcpu1 alut mul_div_req", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 alut decode2_multiplier clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 alut decode2_multiplier rst", false,-1);
        tracep->declBit(c+466,"ysyx_22040228 rvcpu1 alut decode2_multiplier mult_ready", false,-1);
        tracep->declBus(c+98,"ysyx_22040228 rvcpu1 alut decode2_multiplier inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+99,"ysyx_22040228 rvcpu1 alut decode2_multiplier mult_op1", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22040228 rvcpu1 alut decode2_multiplier mult_op2", false,-1, 63,0);
        tracep->declQuad(c+463,"ysyx_22040228 rvcpu1 alut decode2_multiplier product_val", false,-1, 63,0);
        tracep->declBit(c+465,"ysyx_22040228 rvcpu1 alut decode2_multiplier mult_finish", false,-1);
        tracep->declBit(c+473,"ysyx_22040228 rvcpu1 alut decode2_multiplier mult_valid", false,-1);
        tracep->declBit(c+474,"ysyx_22040228 rvcpu1 alut decode2_multiplier op1_signbit", false,-1);
        tracep->declBit(c+475,"ysyx_22040228 rvcpu1 alut decode2_multiplier op2_signbit", false,-1);
        tracep->declQuad(c+476,"ysyx_22040228 rvcpu1 alut decode2_multiplier op1_absolute", false,-1, 63,0);
        tracep->declQuad(c+478,"ysyx_22040228 rvcpu1 alut decode2_multiplier op2_absolute", false,-1, 63,0);
        tracep->declArray(c+480,"ysyx_22040228 rvcpu1 alut decode2_multiplier multiplcand", false,-1, 127,0);
        tracep->declQuad(c+484,"ysyx_22040228 rvcpu1 alut decode2_multiplier multipler", false,-1, 63,0);
        tracep->declArray(c+486,"ysyx_22040228 rvcpu1 alut decode2_multiplier product_lins", false,-1, 127,0);
        tracep->declArray(c+490,"ysyx_22040228 rvcpu1 alut decode2_multiplier product_temp", false,-1, 127,0);
        tracep->declBit(c+494,"ysyx_22040228 rvcpu1 alut decode2_multiplier product_signbit", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 alut decode2_divider clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 alut decode2_divider rst", false,-1);
        tracep->declQuad(c+471,"ysyx_22040228 rvcpu1 alut decode2_divider diviser", false,-1, 63,0);
        tracep->declQuad(c+469,"ysyx_22040228 rvcpu1 alut decode2_divider dividend", false,-1, 63,0);
        tracep->declBus(c+98,"ysyx_22040228 rvcpu1 alut decode2_divider inst_opcode", false,-1, 7,0);
        tracep->declBit(c+468,"ysyx_22040228 rvcpu1 alut decode2_divider div_ready", false,-1);
        tracep->declQuad(c+1416,"ysyx_22040228 rvcpu1 alut decode2_divider div_rem_data", false,-1, 63,0);
        tracep->declBit(c+467,"ysyx_22040228 rvcpu1 alut decode2_divider div_finish", false,-1);
        tracep->declBus(c+495,"ysyx_22040228 rvcpu1 alut decode2_divider counter", false,-1, 6,0);
        tracep->declBit(c+496,"ysyx_22040228 rvcpu1 alut decode2_divider sign", false,-1);
        tracep->declQuad(c+497,"ysyx_22040228 rvcpu1 alut decode2_divider dividend_t", false,-1, 63,0);
        tracep->declQuad(c+499,"ysyx_22040228 rvcpu1 alut decode2_divider divider_t", false,-1, 63,0);
        tracep->declArray(c+501,"ysyx_22040228 rvcpu1 alut decode2_divider temp_a", false,-1, 128,0);
        tracep->declArray(c+506,"ysyx_22040228 rvcpu1 alut decode2_divider temp_b", false,-1, 64,0);
        tracep->declBit(c+467,"ysyx_22040228 rvcpu1 alut decode2_divider finish", false,-1);
        tracep->declBit(c+509,"ysyx_22040228 rvcpu1 alut decode2_divider sigin_inst", false,-1);
        tracep->declQuad(c+1418,"ysyx_22040228 rvcpu1 alut decode2_divider yushu", false,-1, 63,0);
        tracep->declQuad(c+1420,"ysyx_22040228 rvcpu1 alut decode2_divider shang", false,-1, 63,0);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 mmu rst", false,-1);
        tracep->declBus(c+108,"ysyx_22040228 rvcpu1 mmu inst_type_i", false,-1, 7,0);
        tracep->declBit(c+111,"ysyx_22040228 rvcpu1 mmu rd_ena_i", false,-1);
        tracep->declQuad(c+109,"ysyx_22040228 rvcpu1 mmu data_op2", false,-1, 63,0);
        tracep->declBus(c+112,"ysyx_22040228 rvcpu1 mmu rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+105,"ysyx_22040228 rvcpu1 mmu mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+107,"ysyx_22040228 rvcpu1 mmu mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+113,"ysyx_22040228 rvcpu1 mmu ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+115,"ysyx_22040228 rvcpu1 mmu ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+958,"ysyx_22040228 rvcpu1 mmu data_addr_o", false,-1, 63,0);
        tracep->declBus(c+960,"ysyx_22040228 rvcpu1 mmu wmask_o", false,-1, 7,0);
        tracep->declQuad(c+980,"ysyx_22040228 rvcpu1 mmu data_i", false,-1, 63,0);
        tracep->declQuad(c+961,"ysyx_22040228 rvcpu1 mmu data_o", false,-1, 63,0);
        tracep->declBit(c+963,"ysyx_22040228 rvcpu1 mmu we", false,-1);
        tracep->declBus(c+1554,"ysyx_22040228 rvcpu1 mmu we_type_sel", false,-1, 2,0);
        tracep->declBit(c+964,"ysyx_22040228 rvcpu1 mmu re", false,-1);
        tracep->declBus(c+1555,"ysyx_22040228 rvcpu1 mmu re_type_sel", false,-1, 2,0);
        tracep->declBit(c+982,"ysyx_22040228 rvcpu1 mmu mem_finish", false,-1);
        tracep->declBit(c+111,"ysyx_22040228 rvcpu1 mmu rd_ena_o", false,-1);
        tracep->declQuad(c+1209,"ysyx_22040228 rvcpu1 mmu rd_data_o", false,-1, 63,0);
        tracep->declBus(c+112,"ysyx_22040228 rvcpu1 mmu rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+1207,"ysyx_22040228 rvcpu1 mmu mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+1568,"ysyx_22040228 rvcpu1 mmu mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+1211,"ysyx_22040228 rvcpu1 mmu socreboard_mmu", false,-1);
        tracep->declQuad(c+1209,"ysyx_22040228 rvcpu1 mmu load_data", false,-1, 63,0);
        tracep->declBus(c+510,"ysyx_22040228 rvcpu1 mmu byte_sel", false,-1, 2,0);
        tracep->declBus(c+511,"ysyx_22040228 rvcpu1 mmu half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+512,"ysyx_22040228 rvcpu1 mmu word_sel", false,-1);
        tracep->declBus(c+1422,"ysyx_22040228 rvcpu1 mmu data_byte", false,-1, 7,0);
        tracep->declBus(c+1423,"ysyx_22040228 rvcpu1 mmu data_half_byte", false,-1, 15,0);
        tracep->declBus(c+1424,"ysyx_22040228 rvcpu1 mmu data_word", false,-1, 31,0);
        tracep->declQuad(c+1425,"ysyx_22040228 rvcpu1 mmu store_data", false,-1, 63,0);
        tracep->declBus(c+1427,"ysyx_22040228 rvcpu1 mmu store_mask", false,-1, 7,0);
        tracep->declQuad(c+1577,"ysyx_22040228 rvcpu1 mmu sb_data", false,-1, 63,0);
        tracep->declQuad(c+1579,"ysyx_22040228 rvcpu1 mmu sh_data", false,-1, 63,0);
        tracep->declQuad(c+1581,"ysyx_22040228 rvcpu1 mmu sw_data", false,-1, 63,0);
        tracep->declBus(c+1583,"ysyx_22040228 rvcpu1 mmu sb_mask", false,-1, 7,0);
        tracep->declBus(c+1584,"ysyx_22040228 rvcpu1 mmu sh_mask", false,-1, 7,0);
        tracep->declBus(c+1585,"ysyx_22040228 rvcpu1 mmu sw_mask", false,-1, 7,0);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 es clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 es rst", false,-1);
        tracep->declQuad(c+1197,"ysyx_22040228 rvcpu1 es socreboard_pc", false,-1, 63,0);
        tracep->declQuad(c+1201,"ysyx_22040228 rvcpu1 es ao_data_in", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22040228 rvcpu1 es ao_addr_in", false,-1, 4,0);
        tracep->declQuad(c+1199,"ysyx_22040228 rvcpu1 es ao_pc_in", false,-1, 63,0);
        tracep->declBus(c+1566,"ysyx_22040228 rvcpu1 es ao_inst_in", false,-1, 31,0);
        tracep->declBit(c+116,"ysyx_22040228 rvcpu1 es ao_ena_in", false,-1);
        tracep->declQuad(c+1205,"ysyx_22040228 rvcpu1 es at_data_in", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22040228 rvcpu1 es at_addr_in", false,-1, 4,0);
        tracep->declQuad(c+1203,"ysyx_22040228 rvcpu1 es at_pc_in", false,-1, 63,0);
        tracep->declBus(c+1567,"ysyx_22040228 rvcpu1 es at_inst_in", false,-1, 31,0);
        tracep->declBit(c+103,"ysyx_22040228 rvcpu1 es at_ena_in", false,-1);
        tracep->declQuad(c+1209,"ysyx_22040228 rvcpu1 es mm_data_in", false,-1, 63,0);
        tracep->declBus(c+112,"ysyx_22040228 rvcpu1 es mm_addr_in", false,-1, 4,0);
        tracep->declQuad(c+1207,"ysyx_22040228 rvcpu1 es mm_pc_in", false,-1, 63,0);
        tracep->declBit(c+111,"ysyx_22040228 rvcpu1 es mm_ena_in", false,-1);
        tracep->declQuad(c+122,"ysyx_22040228 rvcpu1 es ao_pc_out", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22040228 rvcpu1 es ao_data_out", false,-1, 63,0);
        tracep->declBus(c+126,"ysyx_22040228 rvcpu1 es ao_addr_out", false,-1, 4,0);
        tracep->declBus(c+127,"ysyx_22040228 rvcpu1 es ao_inst_out", false,-1, 31,0);
        tracep->declBit(c+128,"ysyx_22040228 rvcpu1 es ao_ena_out", false,-1);
        tracep->declQuad(c+129,"ysyx_22040228 rvcpu1 es at_pc_out", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22040228 rvcpu1 es at_data_out", false,-1, 63,0);
        tracep->declBus(c+133,"ysyx_22040228 rvcpu1 es at_addr_out", false,-1, 4,0);
        tracep->declBus(c+134,"ysyx_22040228 rvcpu1 es at_inst_out", false,-1, 31,0);
        tracep->declBit(c+135,"ysyx_22040228 rvcpu1 es at_ena_out", false,-1);
        tracep->declQuad(c+136,"ysyx_22040228 rvcpu1 es mm_pc_out", false,-1, 63,0);
        tracep->declQuad(c+138,"ysyx_22040228 rvcpu1 es mm_data_out", false,-1, 63,0);
        tracep->declBus(c+140,"ysyx_22040228 rvcpu1 es mm_addr_out", false,-1, 4,0);
        tracep->declBit(c+141,"ysyx_22040228 rvcpu1 es mm_ena_out", false,-1);
        tracep->declBus(c+1428,"ysyx_22040228 rvcpu1 es gating", false,-1, 2,0);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 commit_u clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 commit_u rst", false,-1);
        tracep->declBus(c+1189,"ysyx_22040228 rvcpu1 commit_u decode1_counter", false,-1, 2,0);
        tracep->declBit(c+1193,"ysyx_22040228 rvcpu1 commit_u decode1_clean", false,-1);
        tracep->declQuad(c+1155,"ysyx_22040228 rvcpu1 commit_u decode1_pc", false,-1, 63,0);
        tracep->declBit(c+1429,"ysyx_22040228 rvcpu1 commit_u decode1_jtype", false,-1);
        tracep->declBus(c+1190,"ysyx_22040228 rvcpu1 commit_u decode2_counter", false,-1, 2,0);
        tracep->declBit(c+1194,"ysyx_22040228 rvcpu1 commit_u decode2_clean", false,-1);
        tracep->declQuad(c+1178,"ysyx_22040228 rvcpu1 commit_u decode2_pc", false,-1, 63,0);
        tracep->declBit(c+1430,"ysyx_22040228 rvcpu1 commit_u decode2_jtype", false,-1);
        tracep->declBit(c+80,"ysyx_22040228 rvcpu1 commit_u decode1_caninis", false,-1);
        tracep->declBit(c+81,"ysyx_22040228 rvcpu1 commit_u decode2_caninis", false,-1);
        tracep->declQuad(c+122,"ysyx_22040228 rvcpu1 commit_u commit_pc1", false,-1, 63,0);
        tracep->declBus(c+127,"ysyx_22040228 rvcpu1 commit_u commit_inst1", false,-1, 31,0);
        tracep->declBus(c+126,"ysyx_22040228 rvcpu1 commit_u commit_addr1", false,-1, 4,0);
        tracep->declQuad(c+124,"ysyx_22040228 rvcpu1 commit_u commit_data1", false,-1, 63,0);
        tracep->declBit(c+128,"ysyx_22040228 rvcpu1 commit_u commit_ena1", false,-1);
        tracep->declQuad(c+129,"ysyx_22040228 rvcpu1 commit_u commit_pc2", false,-1, 63,0);
        tracep->declBus(c+134,"ysyx_22040228 rvcpu1 commit_u commit_inst2", false,-1, 31,0);
        tracep->declBus(c+133,"ysyx_22040228 rvcpu1 commit_u commit_addr2", false,-1, 4,0);
        tracep->declQuad(c+131,"ysyx_22040228 rvcpu1 commit_u commit_data2", false,-1, 63,0);
        tracep->declBit(c+135,"ysyx_22040228 rvcpu1 commit_u commit_ena2", false,-1);
        tracep->declQuad(c+136,"ysyx_22040228 rvcpu1 commit_u commit_pc3", false,-1, 63,0);
        tracep->declBus(c+140,"ysyx_22040228 rvcpu1 commit_u commit_addr3", false,-1, 4,0);
        tracep->declQuad(c+138,"ysyx_22040228 rvcpu1 commit_u commit_data3", false,-1, 63,0);
        tracep->declBit(c+141,"ysyx_22040228 rvcpu1 commit_u commit_ena3", false,-1);
        tracep->declBit(c+1216,"ysyx_22040228 rvcpu1 commit_u shouldstop", false,-1);
        tracep->declBit(c+1215,"ysyx_22040228 rvcpu1 commit_u subm_wbena", false,-1);
        tracep->declBus(c+1214,"ysyx_22040228 rvcpu1 commit_u subm_wbaddr", false,-1, 4,0);
        tracep->declQuad(c+1212,"ysyx_22040228 rvcpu1 commit_u subm_wbdata", false,-1, 63,0);
        tracep->declBus(c+144,"ysyx_22040228 rvcpu1 commit_u comt_addr0", false,-1, 4,0);
        tracep->declQuad(c+142,"ysyx_22040228 rvcpu1 commit_u comt_data0", false,-1, 63,0);
        tracep->declBit(c+145,"ysyx_22040228 rvcpu1 commit_u comt_ena0", false,-1);
        tracep->declBus(c+148,"ysyx_22040228 rvcpu1 commit_u comt_addr1", false,-1, 4,0);
        tracep->declQuad(c+146,"ysyx_22040228 rvcpu1 commit_u comt_data1", false,-1, 63,0);
        tracep->declBit(c+149,"ysyx_22040228 rvcpu1 commit_u comt_ena1", false,-1);
        tracep->declBus(c+152,"ysyx_22040228 rvcpu1 commit_u comt_addr2", false,-1, 4,0);
        tracep->declQuad(c+150,"ysyx_22040228 rvcpu1 commit_u comt_data2", false,-1, 63,0);
        tracep->declBit(c+153,"ysyx_22040228 rvcpu1 commit_u comt_ena2", false,-1);
        tracep->declBus(c+156,"ysyx_22040228 rvcpu1 commit_u comt_addr3", false,-1, 4,0);
        tracep->declQuad(c+154,"ysyx_22040228 rvcpu1 commit_u comt_data3", false,-1, 63,0);
        tracep->declBit(c+157,"ysyx_22040228 rvcpu1 commit_u comt_ena3", false,-1);
        tracep->declBus(c+160,"ysyx_22040228 rvcpu1 commit_u comt_addr4", false,-1, 4,0);
        tracep->declQuad(c+158,"ysyx_22040228 rvcpu1 commit_u comt_data4", false,-1, 63,0);
        tracep->declBit(c+161,"ysyx_22040228 rvcpu1 commit_u comt_ena4", false,-1);
        tracep->declBus(c+164,"ysyx_22040228 rvcpu1 commit_u comt_addr5", false,-1, 4,0);
        tracep->declQuad(c+162,"ysyx_22040228 rvcpu1 commit_u comt_data5", false,-1, 63,0);
        tracep->declBit(c+165,"ysyx_22040228 rvcpu1 commit_u comt_ena5", false,-1);
        tracep->declBus(c+168,"ysyx_22040228 rvcpu1 commit_u comt_addr6", false,-1, 4,0);
        tracep->declQuad(c+166,"ysyx_22040228 rvcpu1 commit_u comt_data6", false,-1, 63,0);
        tracep->declBit(c+169,"ysyx_22040228 rvcpu1 commit_u comt_ena6", false,-1);
        tracep->declBus(c+172,"ysyx_22040228 rvcpu1 commit_u comt_addr7", false,-1, 4,0);
        tracep->declQuad(c+170,"ysyx_22040228 rvcpu1 commit_u comt_data7", false,-1, 63,0);
        tracep->declBit(c+173,"ysyx_22040228 rvcpu1 commit_u comt_ena7", false,-1);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+513+i*3,"ysyx_22040228 rvcpu1 commit_u commit_pcbuff", true,(i+0), 67,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+537+i*1,"ysyx_22040228 rvcpu1 commit_u commit_addrbuff", true,(i+0), 4,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+545+i*2,"ysyx_22040228 rvcpu1 commit_u commit_databuff", true,(i+0), 63,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBit(c+561+i*1,"ysyx_22040228 rvcpu1 commit_u commit_enabuff", true,(i+0));}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBit(c+569+i*1,"ysyx_22040228 rvcpu1 commit_u commit_jumpbuff", true,(i+0));}}
        tracep->declBit(c+1431,"ysyx_22040228 rvcpu1 commit_u decode1_ena", false,-1);
        tracep->declBit(c+1432,"ysyx_22040228 rvcpu1 commit_u decode2_ena", false,-1);
        tracep->declBit(c+577,"ysyx_22040228 rvcpu1 commit_u able_buff1_pc1", false,-1);
        tracep->declBit(c+578,"ysyx_22040228 rvcpu1 commit_u able_buff1_pc2", false,-1);
        tracep->declBit(c+579,"ysyx_22040228 rvcpu1 commit_u able_buff1_pc3", false,-1);
        tracep->declBit(c+580,"ysyx_22040228 rvcpu1 commit_u able_buff2_pc1", false,-1);
        tracep->declBit(c+581,"ysyx_22040228 rvcpu1 commit_u able_buff2_pc2", false,-1);
        tracep->declBit(c+582,"ysyx_22040228 rvcpu1 commit_u able_buff2_pc3", false,-1);
        tracep->declBit(c+583,"ysyx_22040228 rvcpu1 commit_u able_buff3_pc1", false,-1);
        tracep->declBit(c+584,"ysyx_22040228 rvcpu1 commit_u able_buff3_pc2", false,-1);
        tracep->declBit(c+585,"ysyx_22040228 rvcpu1 commit_u able_buff3_pc3", false,-1);
        tracep->declBit(c+586,"ysyx_22040228 rvcpu1 commit_u able_buff4_pc1", false,-1);
        tracep->declBit(c+587,"ysyx_22040228 rvcpu1 commit_u able_buff4_pc2", false,-1);
        tracep->declBit(c+588,"ysyx_22040228 rvcpu1 commit_u able_buff4_pc3", false,-1);
        tracep->declBit(c+589,"ysyx_22040228 rvcpu1 commit_u able_buff5_pc1", false,-1);
        tracep->declBit(c+590,"ysyx_22040228 rvcpu1 commit_u able_buff5_pc2", false,-1);
        tracep->declBit(c+591,"ysyx_22040228 rvcpu1 commit_u able_buff5_pc3", false,-1);
        tracep->declBit(c+592,"ysyx_22040228 rvcpu1 commit_u able_buff6_pc1", false,-1);
        tracep->declBit(c+593,"ysyx_22040228 rvcpu1 commit_u able_buff6_pc2", false,-1);
        tracep->declBit(c+594,"ysyx_22040228 rvcpu1 commit_u able_buff6_pc3", false,-1);
        tracep->declBit(c+595,"ysyx_22040228 rvcpu1 commit_u able_buff7_pc1", false,-1);
        tracep->declBit(c+596,"ysyx_22040228 rvcpu1 commit_u able_buff7_pc2", false,-1);
        tracep->declBit(c+597,"ysyx_22040228 rvcpu1 commit_u able_buff7_pc3", false,-1);
        tracep->declBit(c+598,"ysyx_22040228 rvcpu1 commit_u able_buff8_pc1", false,-1);
        tracep->declBit(c+599,"ysyx_22040228 rvcpu1 commit_u able_buff8_pc2", false,-1);
        tracep->declBit(c+600,"ysyx_22040228 rvcpu1 commit_u able_buff8_pc3", false,-1);
        tracep->declBit(c+601,"ysyx_22040228 rvcpu1 commit_u able_buff1", false,-1);
        tracep->declBit(c+602,"ysyx_22040228 rvcpu1 commit_u able_buff2", false,-1);
        tracep->declBit(c+603,"ysyx_22040228 rvcpu1 commit_u able_buff3", false,-1);
        tracep->declBit(c+604,"ysyx_22040228 rvcpu1 commit_u able_buff4", false,-1);
        tracep->declBit(c+605,"ysyx_22040228 rvcpu1 commit_u able_buff5", false,-1);
        tracep->declBit(c+606,"ysyx_22040228 rvcpu1 commit_u able_buff6", false,-1);
        tracep->declBit(c+607,"ysyx_22040228 rvcpu1 commit_u able_buff7", false,-1);
        tracep->declBit(c+608,"ysyx_22040228 rvcpu1 commit_u able_buff8", false,-1);
        tracep->declQuad(c+1433,"ysyx_22040228 rvcpu1 commit_u depcbf1", false,-1, 63,0);
        tracep->declQuad(c+1435,"ysyx_22040228 rvcpu1 commit_u depcbf2", false,-1, 63,0);
        tracep->declQuad(c+609,"ysyx_22040228 rvcpu1 commit_u forc_inpco", false,-1, 63,0);
        tracep->declQuad(c+611,"ysyx_22040228 rvcpu1 commit_u forc_inpct", false,-1, 63,0);
        tracep->declBus(c+613,"ysyx_22040228 rvcpu1 commit_u jump_counter", false,-1, 7,0);
        tracep->declArray(c+1437,"ysyx_22040228 rvcpu1 commit_u old_ready", false,-1, 66,0);
        tracep->declBit(c+1440,"ysyx_22040228 rvcpu1 commit_u diff_ena", false,-1);
        tracep->declBit(c+614,"ysyx_22040228 rvcpu1 commit_u chose_pc7", false,-1);
        tracep->declBit(c+615,"ysyx_22040228 rvcpu1 commit_u chose_pc6", false,-1);
        tracep->declBit(c+616,"ysyx_22040228 rvcpu1 commit_u chose_pc5", false,-1);
        tracep->declBit(c+617,"ysyx_22040228 rvcpu1 commit_u chose_pc4", false,-1);
        tracep->declBit(c+618,"ysyx_22040228 rvcpu1 commit_u chose_pc3", false,-1);
        tracep->declBit(c+619,"ysyx_22040228 rvcpu1 commit_u chose_pc2", false,-1);
        tracep->declBit(c+620,"ysyx_22040228 rvcpu1 commit_u chose_pc1", false,-1);
        tracep->declBit(c+621,"ysyx_22040228 rvcpu1 commit_u chose_pc0", false,-1);
        tracep->declBus(c+1441,"ysyx_22040228 rvcpu1 commit_u clean_submcont", false,-1, 7,0);
        tracep->declBit(c+622,"ysyx_22040228 rvcpu1 commit_u difftest_ena", false,-1);
        tracep->declQuad(c+623,"ysyx_22040228 rvcpu1 commit_u difftest_pc", false,-1, 63,0);
        tracep->declBit(c+1534,"ysyx_22040228 rvcpu1 regsf clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 rvcpu1 regsf rst", false,-1);
        tracep->declBus(c+1214,"ysyx_22040228 rvcpu1 regsf waddr", false,-1, 4,0);
        tracep->declQuad(c+1212,"ysyx_22040228 rvcpu1 regsf wdata", false,-1, 63,0);
        tracep->declBit(c+1215,"ysyx_22040228 rvcpu1 regsf we", false,-1);
        tracep->declBus(c+1143,"ysyx_22040228 rvcpu1 regsf raddr1_1", false,-1, 4,0);
        tracep->declQuad(c+1573,"ysyx_22040228 rvcpu1 regsf rdata1_1", false,-1, 63,0);
        tracep->declBit(c+1145,"ysyx_22040228 rvcpu1 regsf re1_1", false,-1);
        tracep->declBus(c+1166,"ysyx_22040228 rvcpu1 regsf raddr2_1", false,-1, 4,0);
        tracep->declQuad(c+1569,"ysyx_22040228 rvcpu1 regsf rdata2_1", false,-1, 63,0);
        tracep->declBit(c+1168,"ysyx_22040228 rvcpu1 regsf re2_1", false,-1);
        tracep->declBus(c+1144,"ysyx_22040228 rvcpu1 regsf raddr1_2", false,-1, 4,0);
        tracep->declQuad(c+1575,"ysyx_22040228 rvcpu1 regsf rdata1_2", false,-1, 63,0);
        tracep->declBit(c+1146,"ysyx_22040228 rvcpu1 regsf re1_2", false,-1);
        tracep->declBus(c+1167,"ysyx_22040228 rvcpu1 regsf raddr2_2", false,-1, 4,0);
        tracep->declQuad(c+1571,"ysyx_22040228 rvcpu1 regsf rdata2_2", false,-1, 63,0);
        tracep->declBit(c+1169,"ysyx_22040228 rvcpu1 regsf re2_2", false,-1);
        tracep->declBit(c+66,"ysyx_22040228 rvcpu1 regsf x1_read_ena", false,-1);
        tracep->declQuad(c+1141,"ysyx_22040228 rvcpu1 regsf x1_data", false,-1, 63,0);
        tracep->declBus(c+65,"ysyx_22040228 rvcpu1 regsf x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+625+i*2,"ysyx_22040228 rvcpu1 regsf regs", true,(i+0), 63,0);}}
        tracep->declBus(c+689,"ysyx_22040228 rvcpu1 regsf i", false,-1, 31,0);
        tracep->declBus(c+1137,"ysyx_22040228 uncache_mmio7 mmio_sign", false,-1, 2,0);
        tracep->declQuad(c+958,"ysyx_22040228 uncache_mmio7 core_addr", false,-1, 63,0);
        tracep->declQuad(c+961,"ysyx_22040228 uncache_mmio7 core_data", false,-1, 63,0);
        tracep->declBus(c+960,"ysyx_22040228 uncache_mmio7 core_mask", false,-1, 7,0);
        tracep->declBit(c+3,"ysyx_22040228 uncache_mmio7 fence_in", false,-1);
        tracep->declBus(c+1554,"ysyx_22040228 uncache_mmio7 core_we_type", false,-1, 2,0);
        tracep->declBit(c+963,"ysyx_22040228 uncache_mmio7 core_we", false,-1);
        tracep->declBus(c+1555,"ysyx_22040228 uncache_mmio7 core_re_type", false,-1, 2,0);
        tracep->declBit(c+964,"ysyx_22040228 uncache_mmio7 core_re", false,-1);
        tracep->declQuad(c+980,"ysyx_22040228 uncache_mmio7 in_core_data", false,-1, 63,0);
        tracep->declBit(c+982,"ysyx_22040228 uncache_mmio7 in_core_finish", false,-1);
        tracep->declQuad(c+967,"ysyx_22040228 uncache_mmio7 arb_addr", false,-1, 63,0);
        tracep->declQuad(c+965,"ysyx_22040228 uncache_mmio7 arb_data", false,-1, 63,0);
        tracep->declBus(c+969,"ysyx_22040228 uncache_mmio7 arb_mask", false,-1, 7,0);
        tracep->declBit(c+970,"ysyx_22040228 uncache_mmio7 arb_we", false,-1);
        tracep->declBit(c+971,"ysyx_22040228 uncache_mmio7 arb_re", false,-1);
        tracep->declBus(c+1588,"ysyx_22040228 uncache_mmio7 arb_size_data", false,-1, 2,0);
        tracep->declQuad(c+6,"ysyx_22040228 uncache_mmio7 in_arb_data", false,-1, 63,0);
        tracep->declBit(c+8,"ysyx_22040228 uncache_mmio7 in_arb_finish", false,-1);
        tracep->declQuad(c+974,"ysyx_22040228 uncache_mmio7 dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+972,"ysyx_22040228 uncache_mmio7 dcache_data", false,-1, 63,0);
        tracep->declBus(c+976,"ysyx_22040228 uncache_mmio7 dcache_mask", false,-1, 7,0);
        tracep->declBit(c+3,"ysyx_22040228 uncache_mmio7 dcache_fence", false,-1);
        tracep->declBit(c+977,"ysyx_22040228 uncache_mmio7 dcache_we", false,-1);
        tracep->declBit(c+978,"ysyx_22040228 uncache_mmio7 dcache_re", false,-1);
        tracep->declQuad(c+855,"ysyx_22040228 uncache_mmio7 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+979,"ysyx_22040228 uncache_mmio7 in_dcache_finish", false,-1);
        tracep->declBit(c+1442,"ysyx_22040228 uncache_mmio7 start_sign", false,-1);
        tracep->declBit(c+1443,"ysyx_22040228 uncache_mmio7 uncache", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 inst_cache2 clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 inst_cache2 rst", false,-1);
        tracep->declQuad(c+1,"ysyx_22040228 inst_cache2 inst_addr", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22040228 inst_cache2 inst_counter", false,-1, 2,0);
        tracep->declBit(c+1556,"ysyx_22040228 inst_cache2 inst_ready", false,-1);
        tracep->declBit(c+5,"ysyx_22040228 inst_cache2 issu_canin", false,-1);
        tracep->declBit(c+3,"ysyx_22040228 inst_cache2 inst_fence", false,-1);
        tracep->declArray(c+9,"ysyx_22040228 inst_cache2 inst_data", false,-1, 127,0);
        tracep->declArray(c+18,"ysyx_22040228 inst_cache2 inst_pc", false,-1, 255,0);
        tracep->declBit(c+13,"ysyx_22040228 inst_cache2 inst_valid", false,-1);
        tracep->declBit(c+17,"ysyx_22040228 inst_cache2 inst_readyout", false,-1);
        tracep->declBit(c+14,"ysyx_22040228 inst_cache2 cache_read_ena", false,-1);
        tracep->declQuad(c+15,"ysyx_22040228 inst_cache2 cache_addr", false,-1, 63,0);
        tracep->declQuad(c+29,"ysyx_22040228 inst_cache2 cache_in_data", false,-1, 63,0);
        tracep->declBit(c+31,"ysyx_22040228 inst_cache2 cache_in_valid", false,-1);
        tracep->declBit(c+1444,"ysyx_22040228 inst_cache2 icache_if_shankhand", false,-1);
        tracep->declBus(c+690,"ysyx_22040228 inst_cache2 icache_tag", false,-1, 21,0);
        tracep->declBus(c+691,"ysyx_22040228 inst_cache2 icache_index", false,-1, 5,0);
        tracep->declBus(c+692,"ysyx_22040228 inst_cache2 state_inst", false,-1, 5,0);
        tracep->declBus(c+1445,"ysyx_22040228 inst_cache2 state_inst_nxt", false,-1, 5,0);
        tracep->declBus(c+693,"ysyx_22040228 inst_cache2 fence_counter", false,-1, 6,0);
        tracep->declBit(c+694,"ysyx_22040228 inst_cache2 read_ok_", false,-1);
        tracep->declBit(c+695,"ysyx_22040228 inst_cache2 read_ok", false,-1);
        tracep->declBit(c+696,"ysyx_22040228 inst_cache2 inst_hit_ok", false,-1);
        tracep->declArray(c+697,"ysyx_22040228 inst_cache2 inst_pc_", false,-1, 255,0);
        tracep->declArray(c+705,"ysyx_22040228 inst_cache2 inst_data_", false,-1, 127,0);
        tracep->declBit(c+709,"ysyx_22040228 inst_cache2 inst_readyout_", false,-1);
        tracep->declBit(c+696,"ysyx_22040228 inst_cache2 inst_valid_", false,-1);
        tracep->declBit(c+710,"ysyx_22040228 inst_cache2 write_i_ok", false,-1);
        tracep->declBit(c+711,"ysyx_22040228 inst_cache2 cahce_miss_ena", false,-1);
        tracep->declQuad(c+712,"ysyx_22040228 inst_cache2 cache_miss_addr", false,-1, 63,0);
        tracep->declBit(c+714,"ysyx_22040228 inst_cache2 write_m_ok", false,-1);
        tracep->declBit(c+715,"ysyx_22040228 inst_cache2 cache_mism_ena", false,-1);
        tracep->declQuad(c+716,"ysyx_22040228 inst_cache2 cahce_mism_addr", false,-1, 63,0);
        tracep->declBus(c+718,"ysyx_22040228 inst_cache2 counter_readl", false,-1, 1,0);
        tracep->declBus(c+719,"ysyx_22040228 inst_cache2 counter_readl_n", false,-1, 1,0);
        tracep->declArray(c+720,"ysyx_22040228 inst_cache2 temp_date", false,-1, 127,0);
        tracep->declBit(c+724,"ysyx_22040228 inst_cache2 miss_strb_o", false,-1);
        tracep->declBit(c+725,"ysyx_22040228 inst_cache2 miss_strb_t", false,-1);
        tracep->declBus(c+726,"ysyx_22040228 inst_cache2 counter_readh", false,-1, 2,0);
        tracep->declBus(c+727,"ysyx_22040228 inst_cache2 counter_readh_n", false,-1, 2,0);
        tracep->declArray(c+728,"ysyx_22040228 inst_cache2 temp_data", false,-1, 127,0);
        tracep->declBit(c+732,"ysyx_22040228 inst_cache2 mism_strb_o", false,-1);
        tracep->declBit(c+733,"ysyx_22040228 inst_cache2 mism_strb_t", false,-1);
        tracep->declBit(c+734,"ysyx_22040228 inst_cache2 oteg_ena_i", false,-1);
        tracep->declBit(c+735,"ysyx_22040228 inst_cache2 oteg_valid_i", false,-1);
        tracep->declBus(c+736,"ysyx_22040228 inst_cache2 oteg_data_i", false,-1, 21,0);
        tracep->declBus(c+737,"ysyx_22040228 inst_cache2 oteg_addr_i", false,-1, 5,0);
        tracep->declBus(c+738,"ysyx_22040228 inst_cache2 oteg_ata_o", false,-1, 21,0);
        tracep->declBit(c+739,"ysyx_22040228 inst_cache2 oteg_valid_o", false,-1);
        tracep->declBit(c+740,"ysyx_22040228 inst_cache2 tteg_ena_i", false,-1);
        tracep->declBit(c+735,"ysyx_22040228 inst_cache2 tteg_valid_i", false,-1);
        tracep->declBus(c+736,"ysyx_22040228 inst_cache2 tteg_data_i", false,-1, 21,0);
        tracep->declBus(c+737,"ysyx_22040228 inst_cache2 tteg_addr_i", false,-1, 5,0);
        tracep->declBus(c+741,"ysyx_22040228 inst_cache2 tteg_ata_o", false,-1, 21,0);
        tracep->declBit(c+742,"ysyx_22040228 inst_cache2 tteg_valid_o", false,-1);
        tracep->declArray(c+743,"ysyx_22040228 inst_cache2 data_outo", false,-1, 127,0);
        tracep->declBit(c+1592,"ysyx_22040228 inst_cache2 CEO", false,-1);
        tracep->declArray(c+747,"ysyx_22040228 inst_cache2 w_strb_ramo", false,-1, 127,0);
        tracep->declArray(c+751,"ysyx_22040228 inst_cache2 w_data_ramo", false,-1, 127,0);
        tracep->declBit(c+755,"ysyx_22040228 inst_cache2 w_data_enao", false,-1);
        tracep->declArray(c+756,"ysyx_22040228 inst_cache2 data_outt", false,-1, 127,0);
        tracep->declBit(c+1592,"ysyx_22040228 inst_cache2 CET", false,-1);
        tracep->declArray(c+760,"ysyx_22040228 inst_cache2 w_strb_ramt", false,-1, 127,0);
        tracep->declArray(c+764,"ysyx_22040228 inst_cache2 w_data_ramt", false,-1, 127,0);
        tracep->declBit(c+768,"ysyx_22040228 inst_cache2 w_data_enat", false,-1);
        tracep->declBus(c+769,"ysyx_22040228 inst_cache2 i", false,-1, 31,0);
        tracep->declBit(c+1534,"ysyx_22040228 inst_cache2 TEG_ICACHEO clk", false,-1);
        tracep->declBus(c+737,"ysyx_22040228 inst_cache2 TEG_ICACHEO addr_i", false,-1, 5,0);
        tracep->declBus(c+736,"ysyx_22040228 inst_cache2 TEG_ICACHEO teg_i", false,-1, 21,0);
        tracep->declBit(c+735,"ysyx_22040228 inst_cache2 TEG_ICACHEO teg_valid", false,-1);
        tracep->declBit(c+734,"ysyx_22040228 inst_cache2 TEG_ICACHEO teg_ena", false,-1);
        tracep->declBus(c+738,"ysyx_22040228 inst_cache2 TEG_ICACHEO data_o", false,-1, 21,0);
        tracep->declBit(c+739,"ysyx_22040228 inst_cache2 TEG_ICACHEO data_valid", false,-1);
        tracep->declBus(c+738,"ysyx_22040228 inst_cache2 TEG_ICACHEO out_data_r", false,-1, 21,0);
        tracep->declBit(c+739,"ysyx_22040228 inst_cache2 TEG_ICACHEO out_valid_r", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 inst_cache2 TEG_ICACHET clk", false,-1);
        tracep->declBus(c+737,"ysyx_22040228 inst_cache2 TEG_ICACHET addr_i", false,-1, 5,0);
        tracep->declBus(c+736,"ysyx_22040228 inst_cache2 TEG_ICACHET teg_i", false,-1, 21,0);
        tracep->declBit(c+735,"ysyx_22040228 inst_cache2 TEG_ICACHET teg_valid", false,-1);
        tracep->declBit(c+740,"ysyx_22040228 inst_cache2 TEG_ICACHET teg_ena", false,-1);
        tracep->declBus(c+741,"ysyx_22040228 inst_cache2 TEG_ICACHET data_o", false,-1, 21,0);
        tracep->declBit(c+742,"ysyx_22040228 inst_cache2 TEG_ICACHET data_valid", false,-1);
        tracep->declBus(c+741,"ysyx_22040228 inst_cache2 TEG_ICACHET out_data_r", false,-1, 21,0);
        tracep->declBit(c+742,"ysyx_22040228 inst_cache2 TEG_ICACHET out_valid_r", false,-1);
        tracep->declBus(c+1607,"ysyx_22040228 inst_cache2 REM_ICACHEO Bits", false,-1, 31,0);
        tracep->declBus(c+1608,"ysyx_22040228 inst_cache2 REM_ICACHEO Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1609,"ysyx_22040228 inst_cache2 REM_ICACHEO Add_Width", false,-1, 31,0);
        tracep->declBus(c+1607,"ysyx_22040228 inst_cache2 REM_ICACHEO Wen_Width", false,-1, 31,0);
        tracep->declArray(c+743,"ysyx_22040228 inst_cache2 REM_ICACHEO Q", false,-1, 127,0);
        tracep->declBit(c+1534,"ysyx_22040228 inst_cache2 REM_ICACHEO CLK", false,-1);
        tracep->declBit(c+1592,"ysyx_22040228 inst_cache2 REM_ICACHEO CEN", false,-1);
        tracep->declBit(c+770,"ysyx_22040228 inst_cache2 REM_ICACHEO WEN", false,-1);
        tracep->declArray(c+771,"ysyx_22040228 inst_cache2 REM_ICACHEO BWEN", false,-1, 127,0);
        tracep->declBus(c+691,"ysyx_22040228 inst_cache2 REM_ICACHEO A", false,-1, 5,0);
        tracep->declArray(c+751,"ysyx_22040228 inst_cache2 REM_ICACHEO D", false,-1, 127,0);
        tracep->declBit(c+1598,"ysyx_22040228 inst_cache2 REM_ICACHEO cen", false,-1);
        tracep->declBit(c+755,"ysyx_22040228 inst_cache2 REM_ICACHEO wen", false,-1);
        tracep->declArray(c+747,"ysyx_22040228 inst_cache2 REM_ICACHEO bwen", false,-1, 127,0);
        tracep->declBus(c+1607,"ysyx_22040228 inst_cache2 REM_ICACHET Bits", false,-1, 31,0);
        tracep->declBus(c+1608,"ysyx_22040228 inst_cache2 REM_ICACHET Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1609,"ysyx_22040228 inst_cache2 REM_ICACHET Add_Width", false,-1, 31,0);
        tracep->declBus(c+1607,"ysyx_22040228 inst_cache2 REM_ICACHET Wen_Width", false,-1, 31,0);
        tracep->declArray(c+756,"ysyx_22040228 inst_cache2 REM_ICACHET Q", false,-1, 127,0);
        tracep->declBit(c+1534,"ysyx_22040228 inst_cache2 REM_ICACHET CLK", false,-1);
        tracep->declBit(c+1592,"ysyx_22040228 inst_cache2 REM_ICACHET CEN", false,-1);
        tracep->declBit(c+775,"ysyx_22040228 inst_cache2 REM_ICACHET WEN", false,-1);
        tracep->declArray(c+776,"ysyx_22040228 inst_cache2 REM_ICACHET BWEN", false,-1, 127,0);
        tracep->declBus(c+691,"ysyx_22040228 inst_cache2 REM_ICACHET A", false,-1, 5,0);
        tracep->declArray(c+764,"ysyx_22040228 inst_cache2 REM_ICACHET D", false,-1, 127,0);
        tracep->declBit(c+1598,"ysyx_22040228 inst_cache2 REM_ICACHET cen", false,-1);
        tracep->declBit(c+768,"ysyx_22040228 inst_cache2 REM_ICACHET wen", false,-1);
        tracep->declArray(c+760,"ysyx_22040228 inst_cache2 REM_ICACHET bwen", false,-1, 127,0);
        tracep->declBit(c+1534,"ysyx_22040228 data_cache3 clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 data_cache3 rst", false,-1);
        tracep->declQuad(c+974,"ysyx_22040228 data_cache3 mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+972,"ysyx_22040228 data_cache3 mem_data_i", false,-1, 63,0);
        tracep->declBus(c+976,"ysyx_22040228 data_cache3 mem_strb_i", false,-1, 7,0);
        tracep->declBit(c+3,"ysyx_22040228 data_cache3 mem_fence_i", false,-1);
        tracep->declBit(c+978,"ysyx_22040228 data_cache3 mem_read_valid", false,-1);
        tracep->declBit(c+977,"ysyx_22040228 data_cache3 mem_write_valid", false,-1);
        tracep->declQuad(c+855,"ysyx_22040228 data_cache3 mem_data_out", false,-1, 63,0);
        tracep->declBit(c+979,"ysyx_22040228 data_cache3 mem_data_ready", false,-1);
        tracep->declQuad(c+26,"ysyx_22040228 data_cache3 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+28,"ysyx_22040228 data_cache3 in_dcache_ready", false,-1);
        tracep->declQuad(c+983,"ysyx_22040228 data_cache3 out_dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+985,"ysyx_22040228 data_cache3 out_dcache_data", false,-1, 63,0);
        tracep->declBus(c+987,"ysyx_22040228 data_cache3 out_dcache_type", false,-1, 3,0);
        tracep->declBus(c+780,"ysyx_22040228 data_cache3 counter", false,-1, 6,0);
        tracep->declBit(c+781,"ysyx_22040228 data_cache3 fence_valid_req", false,-1);
        tracep->declBit(c+782,"ysyx_22040228 data_cache3 read_request", false,-1);
        tracep->declBit(c+783,"ysyx_22040228 data_cache3 read_success", false,-1);
        tracep->declBit(c+784,"ysyx_22040228 data_cache3 write_request", false,-1);
        tracep->declBit(c+785,"ysyx_22040228 data_cache3 write_success", false,-1);
        tracep->declBit(c+786,"ysyx_22040228 data_cache3 fence_write_valid1", false,-1);
        tracep->declBit(c+787,"ysyx_22040228 data_cache3 fence_write_valid2", false,-1);
        tracep->declQuad(c+788,"ysyx_22040228 data_cache3 fence_data_out", false,-1, 63,0);
        tracep->declQuad(c+790,"ysyx_22040228 data_cache3 fence_addr_out", false,-1, 63,0);
        tracep->declBus(c+792,"ysyx_22040228 data_cache3 fence_type_out", false,-1, 3,0);
        tracep->declBit(c+793,"ysyx_22040228 data_cache3 delay_oclk", false,-1);
        tracep->declBit(c+924,"ysyx_22040228 data_cache3 dcache_read_shankhand", false,-1);
        tracep->declBit(c+925,"ysyx_22040228 data_cache3 dcache_write_shankhand", false,-1);
        tracep->declBit(c+794,"ysyx_22040228 data_cache3 dcache_read_ready", false,-1);
        tracep->declBit(c+795,"ysyx_22040228 data_cache3 dcache_write_ready", false,-1);
        tracep->declBus(c+1446,"ysyx_22040228 data_cache3 dcache_tag", false,-1, 22,0);
        tracep->declBus(c+1447,"ysyx_22040228 data_cache3 dcache_index", false,-1, 5,0);
        tracep->declBus(c+796,"ysyx_22040228 data_cache3 state_dread", false,-1, 5,0);
        tracep->declBus(c+1448,"ysyx_22040228 data_cache3 state_dread_nxt", false,-1, 5,0);
        tracep->declBit(c+797,"ysyx_22040228 data_cache3 read_ok_", false,-1);
        tracep->declBit(c+798,"ysyx_22040228 data_cache3 read_ok", false,-1);
        tracep->declBit(c+1449,"ysyx_22040228 data_cache3 mem_hit_ok", false,-1);
        tracep->declBit(c+926,"ysyx_22040228 data_cache3 hit_data_ready", false,-1);
        tracep->declBit(c+799,"ysyx_22040228 data_cache3 dirty_ok", false,-1);
        tracep->declQuad(c+1450,"ysyx_22040228 data_cache3 dirty_out_addr", false,-1, 63,0);
        tracep->declQuad(c+1452,"ysyx_22040228 data_cache3 dirty_out_data", false,-1, 63,0);
        tracep->declBus(c+1454,"ysyx_22040228 data_cache3 dirty_out_type", false,-1, 3,0);
        tracep->declBit(c+1455,"ysyx_22040228 data_cache3 dirty_clean_o", false,-1);
        tracep->declBit(c+1456,"ysyx_22040228 data_cache3 dirty_clean_t", false,-1);
        tracep->declBit(c+1457,"ysyx_22040228 data_cache3 missr_i_ok", false,-1);
        tracep->declBus(c+800,"ysyx_22040228 data_cache3 missr_out_type", false,-1, 3,0);
        tracep->declQuad(c+1458,"ysyx_22040228 data_cache3 missr_out_addr", false,-1, 63,0);
        tracep->declArray(c+1460,"ysyx_22040228 data_cache3 missr_data_strb", false,-1, 127,0);
        tracep->declBit(c+1464,"ysyx_22040228 data_cache3 missr_tag_ena1", false,-1);
        tracep->declArray(c+1465,"ysyx_22040228 data_cache3 missr_data_temp", false,-1, 127,0);
        tracep->declBit(c+1469,"ysyx_22040228 data_cache3 missr_tag_ena2", false,-1);
        tracep->declBit(c+801,"ysyx_22040228 data_cache3 missr_data_ena", false,-1);
        tracep->declBit(c+802,"ysyx_22040228 data_cache3 write_regr", false,-1);
        tracep->declBit(c+803,"ysyx_22040228 data_cache3 write_regr_", false,-1);
        tracep->declBus(c+804,"ysyx_22040228 data_cache3 state_dwrite", false,-1, 5,0);
        tracep->declBus(c+1470,"ysyx_22040228 data_cache3 state_dwrite_nxt", false,-1, 5,0);
        tracep->declBit(c+805,"ysyx_22040228 data_cache3 read_w_ok_", false,-1);
        tracep->declBit(c+806,"ysyx_22040228 data_cache3 read_w_ok", false,-1);
        tracep->declBit(c+807,"ysyx_22040228 data_cache3 memw_hit_ok", false,-1);
        tracep->declArray(c+927,"ysyx_22040228 data_cache3 hitw_data_strb", false,-1, 127,0);
        tracep->declArray(c+1471,"ysyx_22040228 data_cache3 hitw_data_temp", false,-1, 127,0);
        tracep->declBit(c+931,"ysyx_22040228 data_cache3 hitw_data_ready", false,-1);
        tracep->declBit(c+931,"ysyx_22040228 data_cache3 hitw_data_ena", false,-1);
        tracep->declQuad(c+1475,"ysyx_22040228 data_cache3 strb_extection", false,-1, 63,0);
        tracep->declBit(c+808,"ysyx_22040228 data_cache3 dirtyw_ok", false,-1);
        tracep->declQuad(c+1477,"ysyx_22040228 data_cache3 dirtyw_out_addr", false,-1, 63,0);
        tracep->declQuad(c+1479,"ysyx_22040228 data_cache3 dirtyw_out_data", false,-1, 63,0);
        tracep->declBus(c+1481,"ysyx_22040228 data_cache3 dirtyw_out_type", false,-1, 3,0);
        tracep->declBit(c+1482,"ysyx_22040228 data_cache3 dirtyw_clean_o", false,-1);
        tracep->declBit(c+1483,"ysyx_22040228 data_cache3 dirtyw_clean_t", false,-1);
        tracep->declBit(c+1484,"ysyx_22040228 data_cache3 missw_i_ok", false,-1);
        tracep->declBus(c+809,"ysyx_22040228 data_cache3 missw_out_type", false,-1, 3,0);
        tracep->declQuad(c+1485,"ysyx_22040228 data_cache3 missw_out_addr", false,-1, 63,0);
        tracep->declArray(c+1487,"ysyx_22040228 data_cache3 missw_data_strb", false,-1, 127,0);
        tracep->declBit(c+1491,"ysyx_22040228 data_cache3 missw_tag_ena1", false,-1);
        tracep->declArray(c+1492,"ysyx_22040228 data_cache3 missw_data_temp", false,-1, 127,0);
        tracep->declBit(c+1496,"ysyx_22040228 data_cache3 missw_tag_ena2", false,-1);
        tracep->declBit(c+810,"ysyx_22040228 data_cache3 missw_data_ena", false,-1);
        tracep->declBit(c+811,"ysyx_22040228 data_cache3 write_regw", false,-1);
        tracep->declBit(c+812,"ysyx_22040228 data_cache3 write_regw_", false,-1);
        tracep->declBus(c+813,"ysyx_22040228 data_cache3 i", false,-1, 31,0);
        tracep->declBit(c+932,"ysyx_22040228 data_cache3 dirty1_", false,-1);
        tracep->declBit(c+933,"ysyx_22040228 data_cache3 dirty2_", false,-1);
        tracep->declBus(c+814,"ysyx_22040228 data_cache3 j", false,-1, 31,0);
        tracep->declBit(c+1497,"ysyx_22040228 data_cache3 oteg_ena_i", false,-1);
        tracep->declBit(c+735,"ysyx_22040228 data_cache3 oteg_valid_i", false,-1);
        tracep->declBus(c+934,"ysyx_22040228 data_cache3 oteg_data_i", false,-1, 22,0);
        tracep->declBus(c+1498,"ysyx_22040228 data_cache3 oteg_addr_i", false,-1, 5,0);
        tracep->declBus(c+815,"ysyx_22040228 data_cache3 oteg_ata_o", false,-1, 22,0);
        tracep->declBit(c+816,"ysyx_22040228 data_cache3 oteg_valid_o", false,-1);
        tracep->declBit(c+1499,"ysyx_22040228 data_cache3 tteg_ena_i", false,-1);
        tracep->declBit(c+735,"ysyx_22040228 data_cache3 tteg_valid_i", false,-1);
        tracep->declBus(c+934,"ysyx_22040228 data_cache3 tteg_data_i", false,-1, 22,0);
        tracep->declBus(c+1500,"ysyx_22040228 data_cache3 tteg_addr_i", false,-1, 5,0);
        tracep->declBus(c+817,"ysyx_22040228 data_cache3 tteg_ata_o", false,-1, 22,0);
        tracep->declBit(c+818,"ysyx_22040228 data_cache3 tteg_valid_o", false,-1);
        tracep->declArray(c+819,"ysyx_22040228 data_cache3 data_out", false,-1, 127,0);
        tracep->declBit(c+1592,"ysyx_22040228 data_cache3 CE", false,-1);
        tracep->declArray(c+935,"ysyx_22040228 data_cache3 w_strb_ram", false,-1, 127,0);
        tracep->declArray(c+939,"ysyx_22040228 data_cache3 w_data_ram", false,-1, 127,0);
        tracep->declBit(c+943,"ysyx_22040228 data_cache3 w_data_ena", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 data_cache3 TEG_DCACHEO clk", false,-1);
        tracep->declBus(c+1498,"ysyx_22040228 data_cache3 TEG_DCACHEO addr_i", false,-1, 5,0);
        tracep->declBus(c+934,"ysyx_22040228 data_cache3 TEG_DCACHEO teg_i", false,-1, 22,0);
        tracep->declBit(c+735,"ysyx_22040228 data_cache3 TEG_DCACHEO teg_valid", false,-1);
        tracep->declBit(c+1497,"ysyx_22040228 data_cache3 TEG_DCACHEO teg_ena", false,-1);
        tracep->declBus(c+815,"ysyx_22040228 data_cache3 TEG_DCACHEO data_o", false,-1, 22,0);
        tracep->declBit(c+816,"ysyx_22040228 data_cache3 TEG_DCACHEO data_valid", false,-1);
        tracep->declBus(c+815,"ysyx_22040228 data_cache3 TEG_DCACHEO out_data_r", false,-1, 22,0);
        tracep->declBit(c+816,"ysyx_22040228 data_cache3 TEG_DCACHEO out_valid_r", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 data_cache3 TEG_DCACHET clk", false,-1);
        tracep->declBus(c+1500,"ysyx_22040228 data_cache3 TEG_DCACHET addr_i", false,-1, 5,0);
        tracep->declBus(c+934,"ysyx_22040228 data_cache3 TEG_DCACHET teg_i", false,-1, 22,0);
        tracep->declBit(c+735,"ysyx_22040228 data_cache3 TEG_DCACHET teg_valid", false,-1);
        tracep->declBit(c+1499,"ysyx_22040228 data_cache3 TEG_DCACHET teg_ena", false,-1);
        tracep->declBus(c+817,"ysyx_22040228 data_cache3 TEG_DCACHET data_o", false,-1, 22,0);
        tracep->declBit(c+818,"ysyx_22040228 data_cache3 TEG_DCACHET data_valid", false,-1);
        tracep->declBus(c+817,"ysyx_22040228 data_cache3 TEG_DCACHET out_data_r", false,-1, 22,0);
        tracep->declBit(c+818,"ysyx_22040228 data_cache3 TEG_DCACHET out_valid_r", false,-1);
        tracep->declBus(c+1607,"ysyx_22040228 data_cache3 REM_DCACHE Bits", false,-1, 31,0);
        tracep->declBus(c+1608,"ysyx_22040228 data_cache3 REM_DCACHE Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1609,"ysyx_22040228 data_cache3 REM_DCACHE Add_Width", false,-1, 31,0);
        tracep->declBus(c+1607,"ysyx_22040228 data_cache3 REM_DCACHE Wen_Width", false,-1, 31,0);
        tracep->declArray(c+819,"ysyx_22040228 data_cache3 REM_DCACHE Q", false,-1, 127,0);
        tracep->declBit(c+1534,"ysyx_22040228 data_cache3 REM_DCACHE CLK", false,-1);
        tracep->declBit(c+1592,"ysyx_22040228 data_cache3 REM_DCACHE CEN", false,-1);
        tracep->declBit(c+944,"ysyx_22040228 data_cache3 REM_DCACHE WEN", false,-1);
        tracep->declArray(c+945,"ysyx_22040228 data_cache3 REM_DCACHE BWEN", false,-1, 127,0);
        tracep->declBus(c+1447,"ysyx_22040228 data_cache3 REM_DCACHE A", false,-1, 5,0);
        tracep->declArray(c+939,"ysyx_22040228 data_cache3 REM_DCACHE D", false,-1, 127,0);
        tracep->declBit(c+1598,"ysyx_22040228 data_cache3 REM_DCACHE cen", false,-1);
        tracep->declBit(c+943,"ysyx_22040228 data_cache3 REM_DCACHE wen", false,-1);
        tracep->declArray(c+935,"ysyx_22040228 data_cache3 REM_DCACHE bwen", false,-1, 127,0);
        tracep->declBit(c+1534,"ysyx_22040228 arbitratem4 clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 arbitratem4 rst", false,-1);
        tracep->declQuad(c+983,"ysyx_22040228 arbitratem4 d_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+985,"ysyx_22040228 arbitratem4 d_cache_data", false,-1, 63,0);
        tracep->declBus(c+987,"ysyx_22040228 arbitratem4 d_cache_type", false,-1, 3,0);
        tracep->declQuad(c+26,"ysyx_22040228 arbitratem4 d_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+28,"ysyx_22040228 arbitratem4 d_cache_valid_", false,-1);
        tracep->declQuad(c+967,"ysyx_22040228 arbitratem4 uncache_addr", false,-1, 63,0);
        tracep->declQuad(c+965,"ysyx_22040228 arbitratem4 uncache_data", false,-1, 63,0);
        tracep->declBit(c+971,"ysyx_22040228 arbitratem4 uncache_read_ena", false,-1);
        tracep->declBit(c+970,"ysyx_22040228 arbitratem4 uncache_write_ena", false,-1);
        tracep->declBus(c+1588,"ysyx_22040228 arbitratem4 uncache_size_data", false,-1, 2,0);
        tracep->declBus(c+969,"ysyx_22040228 arbitratem4 uncache_mask", false,-1, 7,0);
        tracep->declQuad(c+6,"ysyx_22040228 arbitratem4 uncahce_data_o", false,-1, 63,0);
        tracep->declBit(c+8,"ysyx_22040228 arbitratem4 uncahce_valid_", false,-1);
        tracep->declQuad(c+15,"ysyx_22040228 arbitratem4 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+14,"ysyx_22040228 arbitratem4 i_cache_ena", false,-1);
        tracep->declQuad(c+29,"ysyx_22040228 arbitratem4 i_cache_data", false,-1, 63,0);
        tracep->declBit(c+31,"ysyx_22040228 arbitratem4 i_cache_valid_", false,-1);
        tracep->declBus(c+32,"ysyx_22040228 arbitratem4 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+988,"ysyx_22040228 arbitratem4 axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1593,"ysyx_22040228 arbitratem4 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+33,"ysyx_22040228 arbitratem4 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1594,"ysyx_22040228 arbitratem4 axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+1595,"ysyx_22040228 arbitratem4 axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1596,"ysyx_22040228 arbitratem4 axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+1597,"ysyx_22040228 arbitratem4 axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+34,"ysyx_22040228 arbitratem4 axi_aw_valid", false,-1);
        tracep->declBit(c+1557,"ysyx_22040228 arbitratem4 axi_aw_ready", false,-1);
        tracep->declQuad(c+990,"ysyx_22040228 arbitratem4 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+992,"ysyx_22040228 arbitratem4 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1598,"ysyx_22040228 arbitratem4 axi_w_last", false,-1);
        tracep->declBit(c+35,"ysyx_22040228 arbitratem4 axi_w_valid", false,-1);
        tracep->declBit(c+1558,"ysyx_22040228 arbitratem4 axi_w_ready", false,-1);
        tracep->declBus(c+993,"ysyx_22040228 arbitratem4 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1599,"ysyx_22040228 arbitratem4 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+994,"ysyx_22040228 arbitratem4 axi_b_valid", false,-1);
        tracep->declBit(c+1598,"ysyx_22040228 arbitratem4 axi_b_ready", false,-1);
        tracep->declBus(c+36,"ysyx_22040228 arbitratem4 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+995,"ysyx_22040228 arbitratem4 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1593,"ysyx_22040228 arbitratem4 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+37,"ysyx_22040228 arbitratem4 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1594,"ysyx_22040228 arbitratem4 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+1595,"ysyx_22040228 arbitratem4 axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1596,"ysyx_22040228 arbitratem4 axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+1597,"ysyx_22040228 arbitratem4 axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+38,"ysyx_22040228 arbitratem4 axi_ar_valid", false,-1);
        tracep->declBit(c+1559,"ysyx_22040228 arbitratem4 axi_ar_ready", false,-1);
        tracep->declBus(c+997,"ysyx_22040228 arbitratem4 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+998,"ysyx_22040228 arbitratem4 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+1599,"ysyx_22040228 arbitratem4 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+1000,"ysyx_22040228 arbitratem4 axi_r_last", false,-1);
        tracep->declBit(c+1001,"ysyx_22040228 arbitratem4 axi_r_valid", false,-1);
        tracep->declBit(c+1598,"ysyx_22040228 arbitratem4 axi_r_ready", false,-1);
        tracep->declBit(c+1501,"ysyx_22040228 arbitratem4 read_dcache_shankhand", false,-1);
        tracep->declBit(c+1502,"ysyx_22040228 arbitratem4 write_dcache_shankhand", false,-1);
        tracep->declBit(c+1503,"ysyx_22040228 arbitratem4 read_icache_shankhand", false,-1);
        tracep->declBit(c+1504,"ysyx_22040228 arbitratem4 read_uncahce_shankhand", false,-1);
        tracep->declBit(c+1505,"ysyx_22040228 arbitratem4 write_uncahce_shankhand", false,-1);
        tracep->declBus(c+823,"ysyx_22040228 arbitratem4 arbitrate_state", false,-1, 2,0);
        tracep->declBus(c+949,"ysyx_22040228 arbitratem4 arbitrate_state_nxt", false,-1, 2,0);
        tracep->declBit(c+824,"ysyx_22040228 arbitratem4 dread_ok", false,-1);
        tracep->declBit(c+825,"ysyx_22040228 arbitratem4 dread_ok_u", false,-1);
        tracep->declBit(c+826,"ysyx_22040228 arbitratem4 dwrite_ok", false,-1);
        tracep->declBit(c+827,"ysyx_22040228 arbitratem4 dwrite_ok_u", false,-1);
        tracep->declBit(c+828,"ysyx_22040228 arbitratem4 iread_ok", false,-1);
        tracep->declBus(c+829,"ysyx_22040228 arbitratem4 axi_state", false,-1, 2,0);
        tracep->declBus(c+1506,"ysyx_22040228 arbitratem4 axi_state_n", false,-1, 2,0);
        tracep->declBit(c+1507,"ysyx_22040228 arbitratem4 success_dread", false,-1);
        tracep->declBit(c+1508,"ysyx_22040228 arbitratem4 success_dwrite", false,-1);
        tracep->declBit(c+1509,"ysyx_22040228 arbitratem4 success_iread", false,-1);
        tracep->declBit(c+1510,"ysyx_22040228 arbitratem4 success_uncahceread", false,-1);
        tracep->declBit(c+1511,"ysyx_22040228 arbitratem4 success_uncahcewrite", false,-1);
        tracep->declBit(c+1586,"ysyx_22040228 arbitratem4 axi_shankhand", false,-1);
        tracep->declBit(c+1512,"ysyx_22040228 arbitratem4 shankhand", false,-1);
        tracep->declBit(c+830,"ysyx_22040228 arbitratem4 success", false,-1);
        tracep->declBit(c+824,"ysyx_22040228 arbitratem4 sign_delay_dread", false,-1);
        tracep->declBit(c+826,"ysyx_22040228 arbitratem4 sign_delay_dwrite", false,-1);
        tracep->declBit(c+828,"ysyx_22040228 arbitratem4 sign_delay_iread", false,-1);
        tracep->declBit(c+825,"ysyx_22040228 arbitratem4 sign_delay_unread", false,-1);
        tracep->declBit(c+827,"ysyx_22040228 arbitratem4 sign_delay_unwrite", false,-1);
        tracep->declBit(c+831,"ysyx_22040228 arbitratem4 aw_enable", false,-1);
        tracep->declBit(c+1557,"ysyx_22040228 arbitratem4 aw_enable_n", false,-1);
        tracep->declBit(c+1534,"ysyx_22040228 axi_mnq4 clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 axi_mnq4 rst", false,-1);
        tracep->declBus(c+1051,"ysyx_22040228 axi_mnq4 s_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+1052,"ysyx_22040228 axi_mnq4 s_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1054,"ysyx_22040228 axi_mnq4 s_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+1055,"ysyx_22040228 axi_mnq4 s_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1056,"ysyx_22040228 axi_mnq4 s_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+1057,"ysyx_22040228 axi_mnq4 s_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1058,"ysyx_22040228 axi_mnq4 s_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+1059,"ysyx_22040228 axi_mnq4 s_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+1061,"ysyx_22040228 axi_mnq4 s_axi_aw_valid", false,-1);
        tracep->declBit(c+1060,"ysyx_22040228 axi_mnq4 s_axi_aw_ready", false,-1);
        tracep->declQuad(c+1062,"ysyx_22040228 axi_mnq4 s_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+1064,"ysyx_22040228 axi_mnq4 s_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1065,"ysyx_22040228 axi_mnq4 s_axi_w_last", false,-1);
        tracep->declBit(c+1066,"ysyx_22040228 axi_mnq4 s_axi_w_valid", false,-1);
        tracep->declBit(c+1067,"ysyx_22040228 axi_mnq4 s_axi_w_ready", false,-1);
        tracep->declBus(c+43,"ysyx_22040228 axi_mnq4 s_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1599,"ysyx_22040228 axi_mnq4 s_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+44,"ysyx_22040228 axi_mnq4 s_axi_b_valid", false,-1);
        tracep->declBit(c+1068,"ysyx_22040228 axi_mnq4 s_axi_b_ready", false,-1);
        tracep->declBus(c+1069,"ysyx_22040228 axi_mnq4 s_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+1070,"ysyx_22040228 axi_mnq4 s_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1072,"ysyx_22040228 axi_mnq4 s_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+1073,"ysyx_22040228 axi_mnq4 s_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1074,"ysyx_22040228 axi_mnq4 s_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+1075,"ysyx_22040228 axi_mnq4 s_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1076,"ysyx_22040228 axi_mnq4 s_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+1077,"ysyx_22040228 axi_mnq4 s_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+1078,"ysyx_22040228 axi_mnq4 s_axi_ar_valid", false,-1);
        tracep->declBit(c+45,"ysyx_22040228 axi_mnq4 s_axi_ar_ready", false,-1);
        tracep->declBus(c+46,"ysyx_22040228 axi_mnq4 s_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+1560,"ysyx_22040228 axi_mnq4 s_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+1599,"ysyx_22040228 axi_mnq4 s_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+47,"ysyx_22040228 axi_mnq4 s_axi_r_last", false,-1);
        tracep->declBit(c+48,"ysyx_22040228 axi_mnq4 s_axi_r_valid", false,-1);
        tracep->declBit(c+1079,"ysyx_22040228 axi_mnq4 s_axi_r_ready", false,-1);
        tracep->declBit(c+1138,"ysyx_22040228 axi_mnq4 mnq_read_ena", false,-1);
        tracep->declQuad(c+1139,"ysyx_22040228 axi_mnq4 addr_oup", false,-1, 63,0);
        tracep->declQuad(c+1547,"ysyx_22040228 axi_mnq4 mnq_data_in", false,-1, 63,0);
        tracep->declBit(c+44,"ysyx_22040228 axi_mnq4 write_ram_ena", false,-1);
        tracep->declQuad(c+61,"ysyx_22040228 axi_mnq4 write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+59,"ysyx_22040228 axi_mnq4 write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+1513,"ysyx_22040228 axi_mnq4 aw_shankhand", false,-1);
        tracep->declBit(c+1514,"ysyx_22040228 axi_mnq4 w_shankhand", false,-1);
        tracep->declBit(c+950,"ysyx_22040228 axi_mnq4 b_shankhand", false,-1);
        tracep->declBus(c+832,"ysyx_22040228 axi_mnq4 s_write_state", false,-1, 1,0);
        tracep->declBus(c+1515,"ysyx_22040228 axi_mnq4 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+1516,"ysyx_22040228 axi_mnq4 ar_shankhand", false,-1);
        tracep->declBit(c+951,"ysyx_22040228 axi_mnq4 r_shankhand", false,-1);
        tracep->declBus(c+833,"ysyx_22040228 axi_mnq4 s_read_state", false,-1, 1,0);
        tracep->declBus(c+1517,"ysyx_22040228 axi_mnq4 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+834,"ysyx_22040228 axi_mnq4 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+836,"ysyx_22040228 axi_mnq4 write_addr_reg", false,-1, 63,0);
        tracep->declBus(c+838,"ysyx_22040228 axi_mnq4 r_s_axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+43,"ysyx_22040228 axi_mnq4 r_s_axi_aw_id", false,-1, 3,0);
        tracep->declBit(c+1534,"ysyx_22040228 axi_crossbar clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 axi_crossbar rst", false,-1);
        tracep->declBus(c+1137,"ysyx_22040228 axi_crossbar prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+1137,"ysyx_22040228 axi_crossbar prot_chose_read", false,-1, 2,0);
        tracep->declBus(c+32,"ysyx_22040228 axi_crossbar master_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+988,"ysyx_22040228 axi_crossbar master_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1593,"ysyx_22040228 axi_crossbar master_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+33,"ysyx_22040228 axi_crossbar master_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1594,"ysyx_22040228 axi_crossbar master_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+1595,"ysyx_22040228 axi_crossbar master_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1596,"ysyx_22040228 axi_crossbar master_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+1597,"ysyx_22040228 axi_crossbar master_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+34,"ysyx_22040228 axi_crossbar master_axi_aw_valid", false,-1);
        tracep->declBit(c+1557,"ysyx_22040228 axi_crossbar master_axi_aw_ready", false,-1);
        tracep->declQuad(c+990,"ysyx_22040228 axi_crossbar master_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+992,"ysyx_22040228 axi_crossbar master_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1598,"ysyx_22040228 axi_crossbar master_axi_w_last", false,-1);
        tracep->declBit(c+35,"ysyx_22040228 axi_crossbar master_axi_w_valid", false,-1);
        tracep->declBit(c+1558,"ysyx_22040228 axi_crossbar master_axi_w_ready", false,-1);
        tracep->declBus(c+993,"ysyx_22040228 axi_crossbar master_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1599,"ysyx_22040228 axi_crossbar master_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+1598,"ysyx_22040228 axi_crossbar master_axi_b_ready", false,-1);
        tracep->declBit(c+994,"ysyx_22040228 axi_crossbar master_axi_b_valid", false,-1);
        tracep->declBus(c+36,"ysyx_22040228 axi_crossbar master_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+995,"ysyx_22040228 axi_crossbar master_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1593,"ysyx_22040228 axi_crossbar master_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+37,"ysyx_22040228 axi_crossbar master_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1594,"ysyx_22040228 axi_crossbar master_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+1595,"ysyx_22040228 axi_crossbar master_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1596,"ysyx_22040228 axi_crossbar master_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+1597,"ysyx_22040228 axi_crossbar master_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+38,"ysyx_22040228 axi_crossbar master_axi_ar_valid", false,-1);
        tracep->declBit(c+1559,"ysyx_22040228 axi_crossbar master_axi_ar_ready", false,-1);
        tracep->declBus(c+997,"ysyx_22040228 axi_crossbar master_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+998,"ysyx_22040228 axi_crossbar master_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+1599,"ysyx_22040228 axi_crossbar master_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+1000,"ysyx_22040228 axi_crossbar master_axi_r_last", false,-1);
        tracep->declBit(c+1001,"ysyx_22040228 axi_crossbar master_axi_r_valid", false,-1);
        tracep->declBit(c+1598,"ysyx_22040228 axi_crossbar master_axi_r_ready", false,-1);
        tracep->declBus(c+1002,"ysyx_22040228 axi_crossbar slave_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+1003,"ysyx_22040228 axi_crossbar slave_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+1009,"ysyx_22040228 axi_crossbar slave_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+1010,"ysyx_22040228 axi_crossbar slave_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+1011,"ysyx_22040228 axi_crossbar slave_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+1012,"ysyx_22040228 axi_crossbar slave_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+1013,"ysyx_22040228 axi_crossbar slave_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+1014,"ysyx_22040228 axi_crossbar slave_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+1015,"ysyx_22040228 axi_crossbar slave_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+1016,"ysyx_22040228 axi_crossbar slave_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+1017,"ysyx_22040228 axi_crossbar slave_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+1023,"ysyx_22040228 axi_crossbar slave_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+1024,"ysyx_22040228 axi_crossbar slave_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+1025,"ysyx_22040228 axi_crossbar slave_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+1026,"ysyx_22040228 axi_crossbar slave_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+1027,"ysyx_22040228 axi_crossbar slave_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+1600,"ysyx_22040228 axi_crossbar slave_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+39,"ysyx_22040228 axi_crossbar slave_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+1028,"ysyx_22040228 axi_crossbar slave_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+1029,"ysyx_22040228 axi_crossbar slave_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+1030,"ysyx_22040228 axi_crossbar slave_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+1036,"ysyx_22040228 axi_crossbar slave_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+1037,"ysyx_22040228 axi_crossbar slave_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+1038,"ysyx_22040228 axi_crossbar slave_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+1039,"ysyx_22040228 axi_crossbar slave_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+1040,"ysyx_22040228 axi_crossbar slave_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+1041,"ysyx_22040228 axi_crossbar slave_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+1042,"ysyx_22040228 axi_crossbar slave_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+40,"ysyx_22040228 axi_crossbar slave_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+1043,"ysyx_22040228 axi_crossbar slave_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+1044,"ysyx_22040228 axi_crossbar slave_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+1600,"ysyx_22040228 axi_crossbar slave_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+41,"ysyx_22040228 axi_crossbar slave_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+42,"ysyx_22040228 axi_crossbar slave_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+1050,"ysyx_22040228 axi_crossbar slave_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+1587,"ysyx_22040228 axi_crossbar SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+1534,"ysyx_22040228 clint6 clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 clint6 rst", false,-1);
        tracep->declBit(c+1592,"ysyx_22040228 clint6 time_interrupt", false,-1);
        tracep->declBus(c+1080,"ysyx_22040228 clint6 time_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+1081,"ysyx_22040228 clint6 time_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1083,"ysyx_22040228 clint6 time_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+1084,"ysyx_22040228 clint6 time_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1085,"ysyx_22040228 clint6 time_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+1086,"ysyx_22040228 clint6 time_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1087,"ysyx_22040228 clint6 time_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+1088,"ysyx_22040228 clint6 time_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+1089,"ysyx_22040228 clint6 time_axi_aw_valid", false,-1);
        tracep->declBit(c+1089,"ysyx_22040228 clint6 time_axi_aw_ready", false,-1);
        tracep->declQuad(c+1090,"ysyx_22040228 clint6 time_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+1092,"ysyx_22040228 clint6 time_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1093,"ysyx_22040228 clint6 time_axi_w_last", false,-1);
        tracep->declBit(c+1094,"ysyx_22040228 clint6 time_axi_w_valid", false,-1);
        tracep->declBit(c+1095,"ysyx_22040228 clint6 time_axi_w_ready", false,-1);
        tracep->declBus(c+49,"ysyx_22040228 clint6 time_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1599,"ysyx_22040228 clint6 time_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+50,"ysyx_22040228 clint6 time_axi_b_valid", false,-1);
        tracep->declBit(c+1096,"ysyx_22040228 clint6 time_axi_b_ready", false,-1);
        tracep->declBus(c+1097,"ysyx_22040228 clint6 time_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+1098,"ysyx_22040228 clint6 time_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1100,"ysyx_22040228 clint6 time_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+1101,"ysyx_22040228 clint6 time_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1102,"ysyx_22040228 clint6 time_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+1103,"ysyx_22040228 clint6 time_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1104,"ysyx_22040228 clint6 time_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+1105,"ysyx_22040228 clint6 time_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+1106,"ysyx_22040228 clint6 time_axi_ar_valid", false,-1);
        tracep->declBit(c+1598,"ysyx_22040228 clint6 time_axi_ar_ready", false,-1);
        tracep->declBus(c+51,"ysyx_22040228 clint6 time_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+52,"ysyx_22040228 clint6 time_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+1599,"ysyx_22040228 clint6 time_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+54,"ysyx_22040228 clint6 time_axi_r_last", false,-1);
        tracep->declBit(c+54,"ysyx_22040228 clint6 time_axi_r_valid", false,-1);
        tracep->declBit(c+1107,"ysyx_22040228 clint6 time_axi_r_ready", false,-1);
        tracep->declQuad(c+839,"ysyx_22040228 clint6 csr_mtime", false,-1, 63,0);
        tracep->declQuad(c+841,"ysyx_22040228 clint6 csr_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+1095,"ysyx_22040228 clint6 success_aw", false,-1);
        tracep->declBit(c+1095,"ysyx_22040228 clint6 success_w", false,-1);
        tracep->declBit(c+1106,"ysyx_22040228 clint6 success_ar", false,-1);
        tracep->declBit(c+1518,"ysyx_22040228 clint6 success_r", false,-1);
        tracep->declBit(c+1519,"ysyx_22040228 clint6 success_b", false,-1);
        tracep->declBit(c+1095,"ysyx_22040228 clint6 shankhand_successw", false,-1);
        tracep->declBit(c+1106,"ysyx_22040228 clint6 shankhand_successr", false,-1);
        tracep->declBit(c+1520,"ysyx_22040228 clint6 resp_success", false,-1);
        tracep->declQuad(c+1521,"ysyx_22040228 clint6 wmask", false,-1, 63,0);
        tracep->declBus(c+843,"ysyx_22040228 clint6 timer_state", false,-1, 1,0);
        tracep->declBus(c+1523,"ysyx_22040228 clint6 timer_state_n", false,-1, 1,0);
        tracep->declBus(c+844,"ysyx_22040228 clint6 timew_state", false,-1, 1,0);
        tracep->declBus(c+1524,"ysyx_22040228 clint6 timew_state_n", false,-1, 1,0);
        tracep->declBus(c+845,"ysyx_22040228 clint6 timeraw_id_temp", false,-1, 3,0);
        tracep->declBit(c+1525,"ysyx_22040228 clint6 csr_mtime_readena", false,-1);
        tracep->declBit(c+1526,"ysyx_22040228 clint6 csr_mtimecmp_readena", false,-1);
        tracep->declBit(c+1527,"ysyx_22040228 clint6 csr_mtime_writeena", false,-1);
        tracep->declBit(c+1528,"ysyx_22040228 clint6 csr_mtimecmp_writeena", false,-1);
        tracep->declQuad(c+952,"ysyx_22040228 clint6 csr_mtime_temp", false,-1, 63,0);
        tracep->declQuad(c+954,"ysyx_22040228 clint6 csr_mtimecmp_temp", false,-1, 63,0);
        tracep->declQuad(c+846,"ysyx_22040228 clint6 read_csrdata_temp", false,-1, 63,0);
        tracep->declBus(c+848,"ysyx_22040228 clint6 timerar_id_temp", false,-1, 3,0);
        tracep->declBit(c+1534,"ysyx_22040228 io_slave_axi9 clk", false,-1);
        tracep->declBit(c+1535,"ysyx_22040228 io_slave_axi9 rst", false,-1);
        tracep->declBus(c+1108,"ysyx_22040228 io_slave_axi9 ioe_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+1109,"ysyx_22040228 io_slave_axi9 ioe_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1111,"ysyx_22040228 io_slave_axi9 ioe_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+1112,"ysyx_22040228 io_slave_axi9 ioe_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1113,"ysyx_22040228 io_slave_axi9 ioe_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+1114,"ysyx_22040228 io_slave_axi9 ioe_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1115,"ysyx_22040228 io_slave_axi9 ioe_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+1116,"ysyx_22040228 io_slave_axi9 ioe_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+1118,"ysyx_22040228 io_slave_axi9 ioe_axi_aw_valid", false,-1);
        tracep->declBit(c+1117,"ysyx_22040228 io_slave_axi9 ioe_axi_aw_ready", false,-1);
        tracep->declQuad(c+1119,"ysyx_22040228 io_slave_axi9 ioe_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+1121,"ysyx_22040228 io_slave_axi9 ioe_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1122,"ysyx_22040228 io_slave_axi9 ioe_axi_w_last", false,-1);
        tracep->declBit(c+1123,"ysyx_22040228 io_slave_axi9 ioe_axi_w_valid", false,-1);
        tracep->declBit(c+1124,"ysyx_22040228 io_slave_axi9 ioe_axi_w_ready", false,-1);
        tracep->declBus(c+1108,"ysyx_22040228 io_slave_axi9 ioe_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+1599,"ysyx_22040228 io_slave_axi9 ioe_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+55,"ysyx_22040228 io_slave_axi9 ioe_axi_b_valid", false,-1);
        tracep->declBit(c+1125,"ysyx_22040228 io_slave_axi9 ioe_axi_b_ready", false,-1);
        tracep->declBus(c+1126,"ysyx_22040228 io_slave_axi9 ioe_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+1127,"ysyx_22040228 io_slave_axi9 ioe_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1129,"ysyx_22040228 io_slave_axi9 ioe_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+1130,"ysyx_22040228 io_slave_axi9 ioe_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1131,"ysyx_22040228 io_slave_axi9 ioe_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+1132,"ysyx_22040228 io_slave_axi9 ioe_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1133,"ysyx_22040228 io_slave_axi9 ioe_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+1134,"ysyx_22040228 io_slave_axi9 ioe_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+1135,"ysyx_22040228 io_slave_axi9 ioe_axi_ar_valid", false,-1);
        tracep->declBit(c+56,"ysyx_22040228 io_slave_axi9 ioe_axi_ar_ready", false,-1);
        tracep->declBus(c+857,"ysyx_22040228 io_slave_axi9 ioe_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+1562,"ysyx_22040228 io_slave_axi9 ioe_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+1599,"ysyx_22040228 io_slave_axi9 ioe_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+57,"ysyx_22040228 io_slave_axi9 ioe_axi_r_last", false,-1);
        tracep->declBit(c+58,"ysyx_22040228 io_slave_axi9 ioe_axi_r_valid", false,-1);
        tracep->declBit(c+1136,"ysyx_22040228 io_slave_axi9 ioe_axi_r_ready", false,-1);
        tracep->declQuad(c+1536,"ysyx_22040228 io_slave_axi9 out_slave_addr", false,-1, 63,0);
        tracep->declQuad(c+1538,"ysyx_22040228 io_slave_axi9 out_serial_data", false,-1, 63,0);
        tracep->declBit(c+1540,"ysyx_22040228 io_slave_axi9 out_serial_write", false,-1);
        tracep->declQuad(c+1542,"ysyx_22040228 io_slave_axi9 in_rtc_data", false,-1, 63,0);
        tracep->declBit(c+1541,"ysyx_22040228 io_slave_axi9 out_rtc_read", false,-1);
        tracep->declBit(c+1529,"ysyx_22040228 io_slave_axi9 aw_shankhand", false,-1);
        tracep->declBit(c+1530,"ysyx_22040228 io_slave_axi9 w_shankhand", false,-1);
        tracep->declBit(c+956,"ysyx_22040228 io_slave_axi9 b_shankhand", false,-1);
        tracep->declBus(c+849,"ysyx_22040228 io_slave_axi9 s_write_state", false,-1, 1,0);
        tracep->declBus(c+1531,"ysyx_22040228 io_slave_axi9 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+1532,"ysyx_22040228 io_slave_axi9 ar_shankhand", false,-1);
        tracep->declBit(c+957,"ysyx_22040228 io_slave_axi9 r_shankhand", false,-1);
        tracep->declBus(c+850,"ysyx_22040228 io_slave_axi9 s_read_state", false,-1, 1,0);
        tracep->declBus(c+1533,"ysyx_22040228 io_slave_axi9 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+851,"ysyx_22040228 io_slave_axi9 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+853,"ysyx_22040228 io_slave_axi9 write_addr_reg", false,-1, 63,0);
    }
}

void Vysyx_22040228___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22040228___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040228___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22040228___024root__traceRegister(Vysyx_22040228___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22040228___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22040228___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22040228___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22040228___024root__traceFullSub0(Vysyx_22040228___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040228___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040228___024root* const __restrict vlSelf = static_cast<Vysyx_22040228___024root*>(voidSelf);
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040228___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040228___024root__traceFullSub0(Vysyx_22040228___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp1047;
    VlWide<4>/*127:0*/ __Vtemp1050;
    VlWide<4>/*127:0*/ __Vtemp1057;
    VlWide<4>/*127:0*/ __Vtemp1062;
    VlWide<4>/*127:0*/ __Vtemp1069;
    VlWide<4>/*127:0*/ __Vtemp1074;
    VlWide<4>/*127:0*/ __Vtemp1082;
    VlWide<4>/*127:0*/ __Vtemp1090;
    VlWide<4>/*127:0*/ __Vtemp1091;
    VlWide<4>/*127:0*/ __Vtemp1100;
    VlWide<4>/*127:0*/ __Vtemp1101;
    VlWide<4>/*127:0*/ __Vtemp1117;
    VlWide<4>/*127:0*/ __Vtemp1124;
    VlWide<4>/*127:0*/ __Vtemp1125;
    VlWide<4>/*127:0*/ __Vtemp1142;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr),64);
        tracep->fullBit(oldp+3,((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))));
        tracep->fullCData(oldp+4,(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter),3);
        tracep->fullBit(oldp+5,(vlSelf->ysyx_22040228__DOT__rvcpu_empty));
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22040228__DOT__uncache_arb_data_o),64);
        tracep->fullBit(oldp+8,(vlSelf->ysyx_22040228__DOT__uncache_arb_finish));
        tracep->fullWData(oldp+9,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data),128);
        tracep->fullBit(oldp+13,(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid));
        tracep->fullBit(oldp+14,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                   ? (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena)
                                   : ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena)))));
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22040228__DOT__i_cache_addr),64);
        tracep->fullBit(oldp+17,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                     & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_empty)) 
                                        | (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                                             == (0x3fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                            >> 0xaU)))) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                                           | ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                                               == (0x3fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                              >> 0xaU)))) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))))))));
        tracep->fullWData(oldp+18,(vlSelf->ysyx_22040228__DOT__i_cache_pc),256);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22040228__DOT__arbitrate_d_data),64);
        tracep->fullBit(oldp+28,(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok));
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22040228__DOT__arbitrate_i_data),64);
        tracep->fullBit(oldp+31,(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok));
        tracep->fullCData(oldp+32,(vlSelf->ysyx_22040228__DOT__t_axi_aw_id),4);
        tracep->fullCData(oldp+33,(vlSelf->ysyx_22040228__DOT__t_axi_aw_size),3);
        tracep->fullBit(oldp+34,(vlSelf->ysyx_22040228__DOT__t_axi_aw_valid));
        tracep->fullBit(oldp+35,(vlSelf->ysyx_22040228__DOT__t_axi_w_valid));
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22040228__DOT__t_axi_ar_id),4);
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22040228__DOT__t_axi_ar_size),3);
        tracep->fullBit(oldp+38,(vlSelf->ysyx_22040228__DOT__t_axi_ar_valid));
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22040228__DOT__add_axi_b_valid),3);
        tracep->fullCData(oldp+40,(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready),3);
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22040228__DOT__add_axi_r_last),3);
        tracep->fullCData(oldp+42,(vlSelf->ysyx_22040228__DOT__add_axi_r_valid),3);
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_aw_id),4);
        tracep->fullBit(oldp+44,((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state))));
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22040228__DOT__soc_axi_ar_ready));
        tracep->fullCData(oldp+46,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))
                                     ? (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                     : 0U)),4);
        tracep->fullBit(oldp+47,((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+48,((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullCData(oldp+49,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state))
                                     ? (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timeraw_id_temp)
                                     : 0U)),4);
        tracep->fullBit(oldp+50,((2U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state))));
        tracep->fullCData(oldp+51,(((3U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state))
                                     ? (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timerar_id_temp)
                                     : 0U)),4);
        tracep->fullQData(oldp+52,(((3U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state))
                                     ? vlSelf->ysyx_22040228__DOT__clint6__DOT__read_csrdata_temp
                                     : 0ULL)),64);
        tracep->fullBit(oldp+54,((3U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state))));
        tracep->fullBit(oldp+55,((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state))));
        tracep->fullBit(oldp+56,(vlSelf->ysyx_22040228__DOT__io_axi_ar_ready));
        tracep->fullBit(oldp+57,((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))));
        tracep->fullBit(oldp+58,((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))));
        tracep->fullQData(oldp+59,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state))
                                     ? vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_addr_reg
                                     : 0ULL)),64);
        tracep->fullQData(oldp+61,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state))
                                     ? vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_data_reg
                                     : 0ULL)),64);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr),4);
        tracep->fullBit(oldp+64,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1));
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr),5);
        tracep->fullBit(oldp+66,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1) 
                                  | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2) 
                                     | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4))))));
        tracep->fullCData(oldp+67,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif),4);
        tracep->fullBit(oldp+68,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1));
        tracep->fullBit(oldp+69,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2));
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc),64);
        tracep->fullIData(oldp+72,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst),32);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc),64);
        tracep->fullIData(oldp+75,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst),32);
        tracep->fullCData(oldp+76,((0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                            >> 2U))),4);
        tracep->fullCData(oldp+77,((0xfU & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
                                                    >> 2U)))),4);
        tracep->fullCData(oldp+78,((0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                            >> 2U))),4);
        tracep->fullCData(oldp+79,((0xfU & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
                                                    >> 2U)))),4);
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__can1));
        tracep->fullBit(oldp+81,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__can2));
        tracep->fullBit(oldp+82,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_timer_init));
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc),64);
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst),32);
        tracep->fullCData(oldp+86,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type),8);
        tracep->fullCData(oldp+87,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode),8);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data),64);
        tracep->fullBit(oldp+92,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_ena));
        tracep->fullCData(oldp+93,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr),5);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_pc),64);
        tracep->fullIData(oldp+96,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst),32);
        tracep->fullCData(oldp+97,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_type),8);
        tracep->fullCData(oldp+98,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode),8);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data),64);
        tracep->fullBit(oldp+103,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena));
        tracep->fullCData(oldp+104,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr),5);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_pc),64);
        tracep->fullIData(oldp+107,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst),32);
        tracep->fullCData(oldp+108,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type),8);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data),64);
        tracep->fullBit(oldp+111,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena));
        tracep->fullCData(oldp+112,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr),5);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset),64);
        tracep->fullCData(oldp+115,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel),3);
        tracep->fullBit(oldp+116,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena));
        tracep->fullBit(oldp+117,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req));
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc),64);
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena));
        tracep->fullBit(oldp+121,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req));
        tracep->fullQData(oldp+122,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc),64);
        tracep->fullQData(oldp+124,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara),64);
        tracep->fullCData(oldp+126,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr),5);
        tracep->fullIData(oldp+127,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_inst),32);
        tracep->fullBit(oldp+128,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena));
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara),64);
        tracep->fullCData(oldp+133,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr),5);
        tracep->fullIData(oldp+134,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_inst),32);
        tracep->fullBit(oldp+135,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena));
        tracep->fullQData(oldp+136,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc),64);
        tracep->fullQData(oldp+138,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara),64);
        tracep->fullCData(oldp+140,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr),5);
        tracep->fullBit(oldp+141,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena));
        tracep->fullQData(oldp+142,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data0),64);
        tracep->fullCData(oldp+144,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0),5);
        tracep->fullBit(oldp+145,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0));
        tracep->fullQData(oldp+146,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data1),64);
        tracep->fullCData(oldp+148,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1),5);
        tracep->fullBit(oldp+149,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1));
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data2),64);
        tracep->fullCData(oldp+152,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2),5);
        tracep->fullBit(oldp+153,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2));
        tracep->fullQData(oldp+154,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data3),64);
        tracep->fullCData(oldp+156,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3),5);
        tracep->fullBit(oldp+157,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3));
        tracep->fullQData(oldp+158,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data4),64);
        tracep->fullCData(oldp+160,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4),5);
        tracep->fullBit(oldp+161,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4));
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data5),64);
        tracep->fullCData(oldp+164,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5),5);
        tracep->fullBit(oldp+165,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5));
        tracep->fullQData(oldp+166,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data6),64);
        tracep->fullCData(oldp+168,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6),5);
        tracep->fullBit(oldp+169,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6));
        tracep->fullQData(oldp+170,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data7),64);
        tracep->fullCData(oldp+172,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7),5);
        tracep->fullBit(oldp+173,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7));
        tracep->fullIData(oldp+174,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U]),32);
        tracep->fullIData(oldp+175,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U]),32);
        tracep->fullIData(oldp+176,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U]),32);
        tracep->fullIData(oldp+177,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U]),32);
        tracep->fullIData(oldp+178,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm1),20);
        tracep->fullSData(oldp+179,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+180,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm1),12);
        tracep->fullIData(oldp+181,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm2),20);
        tracep->fullSData(oldp+182,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+183,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm2),12);
        tracep->fullIData(oldp+184,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm3),20);
        tracep->fullSData(oldp+185,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+186,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm3),12);
        tracep->fullIData(oldp+187,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm4),20);
        tracep->fullSData(oldp+188,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+189,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm4),12);
        tracep->fullCData(oldp+190,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U])),7);
        tracep->fullCData(oldp+191,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U])),7);
        tracep->fullCData(oldp+192,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U])),7);
        tracep->fullCData(oldp+193,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U])),7);
        tracep->fullBit(oldp+194,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1));
        tracep->fullBit(oldp+195,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1));
        tracep->fullBit(oldp+196,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1));
        tracep->fullBit(oldp+197,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2));
        tracep->fullBit(oldp+198,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2));
        tracep->fullBit(oldp+199,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2));
        tracep->fullBit(oldp+200,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3));
        tracep->fullBit(oldp+201,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3));
        tracep->fullBit(oldp+202,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3));
        tracep->fullBit(oldp+203,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4));
        tracep->fullBit(oldp+204,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4));
        tracep->fullBit(oldp+205,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4));
        tracep->fullQData(oldp+206,((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
        tracep->fullQData(oldp+208,((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
        tracep->fullQData(oldp+210,((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
        tracep->fullBit(oldp+212,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1));
        tracep->fullBit(oldp+213,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2));
        tracep->fullBit(oldp+214,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3));
        tracep->fullBit(oldp+215,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4));
        tracep->fullCData(oldp+216,(((0U == (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                      ? 0x10U : ((4U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                  ? 0xcU
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                   ? 8U
                                                   : 
                                                  ((0xcU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                    ? 4U
                                                    : 0U))))),5);
        tracep->fullBit(oldp+217,((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid)))));
        tracep->fullCData(oldp+218,(((0xcU == (0xfU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc)))
                                      ? 1U : ((8U == 
                                               (0xfU 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc)))
                                               ? 2U
                                               : ((4U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc)))
                                                   ? 3U
                                                   : 4U)))),3);
        tracep->fullCData(oldp+219,(((0xcU == (0xfU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp)))
                                      ? 1U : ((8U == 
                                               (0xfU 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp)))
                                               ? 2U
                                               : ((4U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp)))
                                                   ? 3U
                                                   : 4U)))),3);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp),64);
        tracep->fullBit(oldp+222,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena));
        tracep->fullCData(oldp+223,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[0]),4);
        tracep->fullCData(oldp+224,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[1]),4);
        tracep->fullCData(oldp+225,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[2]),4);
        tracep->fullCData(oldp+226,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[3]),4);
        tracep->fullCData(oldp+227,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[4]),4);
        tracep->fullCData(oldp+228,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[5]),4);
        tracep->fullCData(oldp+229,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[6]),4);
        tracep->fullCData(oldp+230,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[7]),4);
        tracep->fullCData(oldp+231,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[8]),4);
        tracep->fullCData(oldp+232,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[9]),4);
        tracep->fullCData(oldp+233,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[10]),4);
        tracep->fullCData(oldp+234,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[11]),4);
        tracep->fullCData(oldp+235,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[12]),4);
        tracep->fullCData(oldp+236,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[13]),4);
        tracep->fullCData(oldp+237,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[14]),4);
        tracep->fullCData(oldp+238,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[15]),4);
        tracep->fullCData(oldp+239,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo),3);
        tracep->fullCData(oldp+240,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt),3);
        tracep->fullCData(oldp+241,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw),3);
        tracep->fullWData(oldp+242,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc),256);
        tracep->fullWData(oldp+250,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst),128);
        tracep->fullWData(oldp+254,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc),256);
        tracep->fullWData(oldp+262,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst),128);
        tracep->fullBit(oldp+266,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp));
        tracep->fullBit(oldp+267,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_clean));
        tracep->fullCData(oldp+268,((0x7fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)),7);
        tracep->fullCData(oldp+269,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+270,((7U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+271,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+272,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+273,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+274,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+275,(((0xfe0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+276,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm),12);
        tracep->fullBit(oldp+277,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i));
        tracep->fullCData(oldp+278,((0x7fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)),7);
        tracep->fullCData(oldp+279,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+280,((7U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+281,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+282,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+283,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+284,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+285,(((0xfe0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                 >> 7U)))),12);
        tracep->fullSData(oldp+286,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm),12);
        tracep->fullBit(oldp+287,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i));
        tracep->fullCData(oldp+288,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[0]),5);
        tracep->fullCData(oldp+289,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[1]),5);
        tracep->fullCData(oldp+290,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[2]),5);
        tracep->fullBit(oldp+291,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__caa1));
        tracep->fullBit(oldp+292,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__caa2));
        tracep->fullQData(oldp+293,((1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))),64);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+299,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+301,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_ls_op2));
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__shift_res),64);
        tracep->fullIData(oldp+304,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+305,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sllw_res),64);
        tracep->fullIData(oldp+307,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+308,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__srlw_res),64);
        tracep->fullIData(oldp+310,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+311,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sraw_res),64);
        tracep->fullIData(oldp+313,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+314,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+316,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__upper_imm),64);
        tracep->fullQData(oldp+318,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data),64);
        tracep->fullBit(oldp+320,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_finish_sign));
        tracep->fullBit(oldp+321,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready));
        tracep->fullBit(oldp+322,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish));
        tracep->fullBit(oldp+323,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__dr_ready));
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata),64);
        tracep->fullQData(oldp+326,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata),64);
        tracep->fullBit(oldp+328,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+329,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx),12);
        tracep->fullQData(oldp+330,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data),64);
        tracep->fullBit(oldp+332,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+333,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+334,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en));
        tracep->fullBit(oldp+335,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en));
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+340,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                                     | vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)),64);
        tracep->fullQData(oldp+342,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                                     & (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))),64);
        tracep->fullBit(oldp+344,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid));
        tracep->fullBit(oldp+345,((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+346,((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+347,(((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))
                                      : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)),64);
        tracep->fullQData(oldp+349,(((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
                                      : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)),64);
        tracep->fullWData(oldp+351,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand),128);
        tracep->fullQData(oldp+355,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler),64);
        if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler))) {
            __Vtemp1047[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U];
            __Vtemp1047[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U];
            __Vtemp1047[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U];
            __Vtemp1047[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U];
        } else {
            __Vtemp1047[0U] = 0U;
            __Vtemp1047[1U] = 0U;
            __Vtemp1047[2U] = 0U;
            __Vtemp1047[3U] = 0U;
        }
        tracep->fullWData(oldp+357,(__Vtemp1047),128);
        tracep->fullWData(oldp+361,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp),128);
        tracep->fullBit(oldp+365,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit));
        tracep->fullCData(oldp+366,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter),7);
        tracep->fullBit(oldp+367,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign));
        tracep->fullQData(oldp+368,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__dividend_t),64);
        tracep->fullQData(oldp+370,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__divider_t),64);
        tracep->fullWData(oldp+372,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a),129);
        tracep->fullWData(oldp+377,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b),65);
        tracep->fullBit(oldp+380,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sigin_inst));
        tracep->fullBit(oldp+381,((0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
        tracep->fullBit(oldp+382,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)))));
        tracep->fullBit(oldp+383,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)))));
        tracep->fullQData(oldp+384,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+386,((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
        tracep->fullBit(oldp+387,(((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
        tracep->fullBit(oldp+388,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+389,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+390,((1U & (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+391,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+392,((1U & ((~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+393,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+394,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+395,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+396,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+397,((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+398,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+400,((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
        tracep->fullBit(oldp+401,(((((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+402,(((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
        tracep->fullQData(oldp+403,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+405,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+407,((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
        tracep->fullBit(oldp+408,((((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+409,(((((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+410,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+412,((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
        tracep->fullBit(oldp+413,(((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
        tracep->fullBit(oldp+414,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+415,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+416,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                                      ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data
                                          : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+418,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+420,((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
        tracep->fullBit(oldp+421,(((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
        tracep->fullBit(oldp+422,(((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
        tracep->fullBit(oldp+423,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+424,(((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+426,((0x344U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
        tracep->fullBit(oldp+427,(((0x344U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
        tracep->fullBit(oldp+428,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+429,((QData)((IData)(
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+431,((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
        tracep->fullBit(oldp+432,(((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
        tracep->fullBit(oldp+433,(((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
        tracep->fullQData(oldp+434,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullBit(oldp+436,((0xf11U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
        tracep->fullBit(oldp+437,(((0xf11U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
        tracep->fullQData(oldp+438,((1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))),64);
        tracep->fullQData(oldp+440,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+442,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+444,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+446,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_ls_op2));
        tracep->fullQData(oldp+447,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__shift_res),64);
        tracep->fullIData(oldp+449,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+450,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sllw_res),64);
        tracep->fullIData(oldp+452,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+453,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__srlw_res),64);
        tracep->fullIData(oldp+455,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+456,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sraw_res),64);
        tracep->fullIData(oldp+458,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+459,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+461,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__upper_imm),64);
        tracep->fullQData(oldp+463,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data),64);
        tracep->fullBit(oldp+465,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_finish_sign));
        tracep->fullBit(oldp+466,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready));
        tracep->fullBit(oldp+467,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish));
        tracep->fullBit(oldp+468,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__dr_ready));
        tracep->fullQData(oldp+469,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata),64);
        tracep->fullQData(oldp+471,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata),64);
        tracep->fullBit(oldp+473,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid));
        tracep->fullBit(oldp+474,((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+475,((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+476,(((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data))
                                      : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)),64);
        tracep->fullQData(oldp+478,(((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))
                                      : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)),64);
        tracep->fullWData(oldp+480,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand),128);
        tracep->fullQData(oldp+484,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler),64);
        if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler))) {
            __Vtemp1050[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U];
            __Vtemp1050[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U];
            __Vtemp1050[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U];
            __Vtemp1050[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U];
        } else {
            __Vtemp1050[0U] = 0U;
            __Vtemp1050[1U] = 0U;
            __Vtemp1050[2U] = 0U;
            __Vtemp1050[3U] = 0U;
        }
        tracep->fullWData(oldp+486,(__Vtemp1050),128);
        tracep->fullWData(oldp+490,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp),128);
        tracep->fullBit(oldp+494,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit));
        tracep->fullCData(oldp+495,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter),7);
        tracep->fullBit(oldp+496,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign));
        tracep->fullQData(oldp+497,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__dividend_t),64);
        tracep->fullQData(oldp+499,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__divider_t),64);
        tracep->fullWData(oldp+501,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a),129);
        tracep->fullWData(oldp+506,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b),65);
        tracep->fullBit(oldp+509,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sigin_inst));
        tracep->fullCData(oldp+510,((7U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))),3);
        tracep->fullCData(oldp+511,((3U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+512,((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                 >> 2U)))));
        tracep->fullWData(oldp+513,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[0]),68);
        tracep->fullWData(oldp+516,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[1]),68);
        tracep->fullWData(oldp+519,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[2]),68);
        tracep->fullWData(oldp+522,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[3]),68);
        tracep->fullWData(oldp+525,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[4]),68);
        tracep->fullWData(oldp+528,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[5]),68);
        tracep->fullWData(oldp+531,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[6]),68);
        tracep->fullWData(oldp+534,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[7]),68);
        tracep->fullCData(oldp+537,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[0]),5);
        tracep->fullCData(oldp+538,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[1]),5);
        tracep->fullCData(oldp+539,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[2]),5);
        tracep->fullCData(oldp+540,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[3]),5);
        tracep->fullCData(oldp+541,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[4]),5);
        tracep->fullCData(oldp+542,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[5]),5);
        tracep->fullCData(oldp+543,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[6]),5);
        tracep->fullCData(oldp+544,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[7]),5);
        tracep->fullQData(oldp+545,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[0]),64);
        tracep->fullQData(oldp+547,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[1]),64);
        tracep->fullQData(oldp+549,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[2]),64);
        tracep->fullQData(oldp+551,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[3]),64);
        tracep->fullQData(oldp+553,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[4]),64);
        tracep->fullQData(oldp+555,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[5]),64);
        tracep->fullQData(oldp+557,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[6]),64);
        tracep->fullQData(oldp+559,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[7]),64);
        tracep->fullBit(oldp+561,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[0]));
        tracep->fullBit(oldp+562,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[1]));
        tracep->fullBit(oldp+563,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[2]));
        tracep->fullBit(oldp+564,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[3]));
        tracep->fullBit(oldp+565,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[4]));
        tracep->fullBit(oldp+566,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[5]));
        tracep->fullBit(oldp+567,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[6]));
        tracep->fullBit(oldp+568,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[7]));
        tracep->fullBit(oldp+569,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff[0]));
        tracep->fullBit(oldp+570,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff[1]));
        tracep->fullBit(oldp+571,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff[2]));
        tracep->fullBit(oldp+572,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff[3]));
        tracep->fullBit(oldp+573,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff[4]));
        tracep->fullBit(oldp+574,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff[5]));
        tracep->fullBit(oldp+575,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff[6]));
        tracep->fullBit(oldp+576,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff[7]));
        tracep->fullBit(oldp+577,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc1));
        tracep->fullBit(oldp+578,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc2));
        tracep->fullBit(oldp+579,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc3));
        tracep->fullBit(oldp+580,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc1));
        tracep->fullBit(oldp+581,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc2));
        tracep->fullBit(oldp+582,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc3));
        tracep->fullBit(oldp+583,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc1));
        tracep->fullBit(oldp+584,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc2));
        tracep->fullBit(oldp+585,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc3));
        tracep->fullBit(oldp+586,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc1));
        tracep->fullBit(oldp+587,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc2));
        tracep->fullBit(oldp+588,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc3));
        tracep->fullBit(oldp+589,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc1));
        tracep->fullBit(oldp+590,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc2));
        tracep->fullBit(oldp+591,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc3));
        tracep->fullBit(oldp+592,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc1));
        tracep->fullBit(oldp+593,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc2));
        tracep->fullBit(oldp+594,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc3));
        tracep->fullBit(oldp+595,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc1));
        tracep->fullBit(oldp+596,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc2));
        tracep->fullBit(oldp+597,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc3));
        tracep->fullBit(oldp+598,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc1));
        tracep->fullBit(oldp+599,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc2));
        tracep->fullBit(oldp+600,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc3));
        tracep->fullBit(oldp+601,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1));
        tracep->fullBit(oldp+602,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2));
        tracep->fullBit(oldp+603,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3));
        tracep->fullBit(oldp+604,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4));
        tracep->fullBit(oldp+605,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5));
        tracep->fullBit(oldp+606,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6));
        tracep->fullBit(oldp+607,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7));
        tracep->fullBit(oldp+608,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc1) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc2)) 
                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc3))));
        tracep->fullQData(oldp+609,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__forc_inpco),64);
        tracep->fullQData(oldp+611,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__forc_inpct),64);
        tracep->fullCData(oldp+613,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter),8);
        tracep->fullBit(oldp+614,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc7));
        tracep->fullBit(oldp+615,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc6));
        tracep->fullBit(oldp+616,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc5));
        tracep->fullBit(oldp+617,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc4));
        tracep->fullBit(oldp+618,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc3));
        tracep->fullBit(oldp+619,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc2));
        tracep->fullBit(oldp+620,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc1));
        tracep->fullBit(oldp+621,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc0));
        tracep->fullBit(oldp+622,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__difftest_ena));
        tracep->fullQData(oldp+623,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__difftest_pc),64);
        tracep->fullQData(oldp+625,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0]),64);
        tracep->fullQData(oldp+627,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[1]),64);
        tracep->fullQData(oldp+629,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[2]),64);
        tracep->fullQData(oldp+631,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[3]),64);
        tracep->fullQData(oldp+633,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[4]),64);
        tracep->fullQData(oldp+635,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[5]),64);
        tracep->fullQData(oldp+637,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[6]),64);
        tracep->fullQData(oldp+639,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[7]),64);
        tracep->fullQData(oldp+641,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[8]),64);
        tracep->fullQData(oldp+643,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[9]),64);
        tracep->fullQData(oldp+645,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[10]),64);
        tracep->fullQData(oldp+647,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[11]),64);
        tracep->fullQData(oldp+649,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[12]),64);
        tracep->fullQData(oldp+651,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[13]),64);
        tracep->fullQData(oldp+653,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[14]),64);
        tracep->fullQData(oldp+655,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[15]),64);
        tracep->fullQData(oldp+657,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[16]),64);
        tracep->fullQData(oldp+659,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[17]),64);
        tracep->fullQData(oldp+661,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[18]),64);
        tracep->fullQData(oldp+663,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[19]),64);
        tracep->fullQData(oldp+665,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[20]),64);
        tracep->fullQData(oldp+667,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[21]),64);
        tracep->fullQData(oldp+669,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[22]),64);
        tracep->fullQData(oldp+671,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[23]),64);
        tracep->fullQData(oldp+673,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[24]),64);
        tracep->fullQData(oldp+675,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[25]),64);
        tracep->fullQData(oldp+677,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[26]),64);
        tracep->fullQData(oldp+679,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[27]),64);
        tracep->fullQData(oldp+681,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[28]),64);
        tracep->fullQData(oldp+683,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[29]),64);
        tracep->fullQData(oldp+685,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[30]),64);
        tracep->fullQData(oldp+687,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[31]),64);
        tracep->fullIData(oldp+689,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__i),32);
        tracep->fullIData(oldp+690,((0x3fffffU & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                          >> 0xaU)))),22);
        tracep->fullCData(oldp+691,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+692,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst),6);
        tracep->fullCData(oldp+693,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__fence_counter),7);
        tracep->fullBit(oldp+694,((0x20U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))));
        tracep->fullBit(oldp+695,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__read_ok));
        tracep->fullBit(oldp+696,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_empty) 
                                      & (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                                           == (0x3fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                          >> 0xaU)))) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                                         | ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                                             == (0x3fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                            >> 0xaU)))) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)))))));
        tracep->fullWData(oldp+697,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_),256);
        tracep->fullWData(oldp+705,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_),128);
        tracep->fullBit(oldp+709,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_empty)) 
                                      | (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                                           == (0x3fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                          >> 0xaU)))) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                                         | ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                                             == (0x3fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                            >> 0xaU)))) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)))))));
        tracep->fullBit(oldp+710,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_i_ok));
        tracep->fullBit(oldp+711,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena));
        tracep->fullQData(oldp+712,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_miss_addr),64);
        tracep->fullBit(oldp+714,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_m_ok));
        tracep->fullBit(oldp+715,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena));
        tracep->fullQData(oldp+716,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr),64);
        tracep->fullCData(oldp+718,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl),2);
        tracep->fullCData(oldp+719,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n),2);
        tracep->fullWData(oldp+720,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date),128);
        tracep->fullBit(oldp+724,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o));
        tracep->fullBit(oldp+725,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t));
        tracep->fullCData(oldp+726,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh),3);
        tracep->fullCData(oldp+727,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n),3);
        tracep->fullWData(oldp+728,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data),128);
        tracep->fullBit(oldp+732,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o));
        tracep->fullBit(oldp+733,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t));
        tracep->fullBit(oldp+734,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_ena_i));
        tracep->fullBit(oldp+735,((0xa8U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))));
        tracep->fullIData(oldp+736,(((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                      ? 0U : (0x3fffffU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                         >> 0xaU))))),22);
        tracep->fullCData(oldp+737,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i),6);
        tracep->fullIData(oldp+738,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r),22);
        tracep->fullBit(oldp+739,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r));
        tracep->fullBit(oldp+740,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_ena_i));
        tracep->fullIData(oldp+741,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r),22);
        tracep->fullBit(oldp+742,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r));
        tracep->fullWData(oldp+743,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo),128);
        if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
             & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))) {
            __Vtemp1057[0U] = 0xffffffffU;
            __Vtemp1057[1U] = 0xffffffffU;
            __Vtemp1057[2U] = 0xffffffffU;
            __Vtemp1057[3U] = 0xffffffffU;
        } else {
            __Vtemp1057[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                ? 0xffffffffU : 0U);
            __Vtemp1057[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                ? 0xffffffffU : 0U);
            __Vtemp1057[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                ? 0xffffffffU : 0U);
            __Vtemp1057[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                ? 0xffffffffU : 0U);
        }
        tracep->fullWData(oldp+747,(__Vtemp1057),128);
        if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
             & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))) {
            __Vtemp1062[0U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U];
            __Vtemp1062[1U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U];
            __Vtemp1062[2U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U];
            __Vtemp1062[3U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U];
        } else {
            __Vtemp1062[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U]
                                : 0U);
            __Vtemp1062[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U]
                                : 0U);
            __Vtemp1062[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U]
                                : 0U);
            __Vtemp1062[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U]
                                : 0U);
        }
        tracep->fullWData(oldp+751,(__Vtemp1062),128);
        tracep->fullBit(oldp+755,((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
                                   | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o)))));
        tracep->fullWData(oldp+756,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt),128);
        if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
             & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))) {
            __Vtemp1069[0U] = 0xffffffffU;
            __Vtemp1069[1U] = 0xffffffffU;
            __Vtemp1069[2U] = 0xffffffffU;
            __Vtemp1069[3U] = 0xffffffffU;
        } else {
            __Vtemp1069[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                ? 0xffffffffU : 0U);
            __Vtemp1069[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                ? 0xffffffffU : 0U);
            __Vtemp1069[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                ? 0xffffffffU : 0U);
            __Vtemp1069[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                ? 0xffffffffU : 0U);
        }
        tracep->fullWData(oldp+760,(__Vtemp1069),128);
        if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
             & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))) {
            __Vtemp1074[0U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U];
            __Vtemp1074[1U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U];
            __Vtemp1074[2U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U];
            __Vtemp1074[3U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U];
        } else {
            __Vtemp1074[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U]
                                : 0U);
            __Vtemp1074[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U]
                                : 0U);
            __Vtemp1074[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U]
                                : 0U);
            __Vtemp1074[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U]
                                : 0U);
        }
        tracep->fullWData(oldp+764,(__Vtemp1074),128);
        tracep->fullBit(oldp+768,((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
                                   | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t)))));
        tracep->fullIData(oldp+769,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i),32);
        tracep->fullBit(oldp+770,((1U & (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                             & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
                                            | ((8U 
                                                == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o)))))));
        __Vtemp1082[0U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                               ? 0xffffffffU : (((8U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                 ? 0xffffffffU
                                                 : 0U)));
        __Vtemp1082[1U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                               ? 0xffffffffU : (((8U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                 ? 0xffffffffU
                                                 : 0U)));
        __Vtemp1082[2U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                               ? 0xffffffffU : (((8U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                 ? 0xffffffffU
                                                 : 0U)));
        __Vtemp1082[3U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                               ? 0xffffffffU : (((8U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                 ? 0xffffffffU
                                                 : 0U)));
        tracep->fullWData(oldp+771,(__Vtemp1082),128);
        tracep->fullBit(oldp+775,((1U & (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                             & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
                                            | ((8U 
                                                == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t)))))));
        __Vtemp1090[0U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                               ? 0xffffffffU : (((8U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                 ? 0xffffffffU
                                                 : 0U)));
        __Vtemp1090[1U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                               ? 0xffffffffU : (((8U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                 ? 0xffffffffU
                                                 : 0U)));
        __Vtemp1090[2U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                               ? 0xffffffffU : (((8U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                 ? 0xffffffffU
                                                 : 0U)));
        __Vtemp1090[3U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                               ? 0xffffffffU : (((8U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                 ? 0xffffffffU
                                                 : 0U)));
        tracep->fullWData(oldp+776,(__Vtemp1090),128);
        tracep->fullCData(oldp+780,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter),7);
        tracep->fullBit(oldp+781,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_valid_req));
        tracep->fullBit(oldp+782,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request));
        tracep->fullBit(oldp+783,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request));
        tracep->fullBit(oldp+784,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request));
        tracep->fullBit(oldp+785,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_success));
        tracep->fullBit(oldp+786,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid1));
        tracep->fullBit(oldp+787,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid2));
        tracep->fullQData(oldp+788,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out),64);
        tracep->fullQData(oldp+790,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out),64);
        tracep->fullCData(oldp+792,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out),4);
        tracep->fullBit(oldp+793,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk));
        tracep->fullBit(oldp+794,((1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))));
        tracep->fullBit(oldp+795,((1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
        tracep->fullCData(oldp+796,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread),6);
        tracep->fullBit(oldp+797,((2U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))));
        tracep->fullBit(oldp+798,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_ok));
        tracep->fullBit(oldp+799,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_ok));
        tracep->fullCData(oldp+800,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_type),4);
        tracep->fullBit(oldp+801,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena));
        tracep->fullBit(oldp+802,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr));
        tracep->fullBit(oldp+803,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_));
        tracep->fullCData(oldp+804,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite),6);
        tracep->fullBit(oldp+805,((2U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
        tracep->fullBit(oldp+806,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_w_ok));
        tracep->fullBit(oldp+807,((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
        tracep->fullBit(oldp+808,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_ok));
        tracep->fullCData(oldp+809,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_type),4);
        tracep->fullBit(oldp+810,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena));
        tracep->fullBit(oldp+811,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw));
        tracep->fullBit(oldp+812,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_));
        tracep->fullIData(oldp+813,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__i),32);
        tracep->fullIData(oldp+814,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__j),32);
        tracep->fullIData(oldp+815,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r),23);
        tracep->fullBit(oldp+816,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r));
        tracep->fullIData(oldp+817,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r),23);
        tracep->fullBit(oldp+818,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r));
        tracep->fullWData(oldp+819,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out),128);
        tracep->fullCData(oldp+823,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state),3);
        tracep->fullBit(oldp+824,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread));
        tracep->fullBit(oldp+825,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread));
        tracep->fullBit(oldp+826,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite));
        tracep->fullBit(oldp+827,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite));
        tracep->fullBit(oldp+828,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread));
        tracep->fullCData(oldp+829,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state),3);
        tracep->fullBit(oldp+830,((((((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite)) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread)) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread)) 
                                   | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite))));
        tracep->fullBit(oldp+831,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__aw_enable));
        tracep->fullCData(oldp+832,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state),2);
        tracep->fullCData(oldp+833,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state),2);
        tracep->fullQData(oldp+834,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_data_reg),64);
        tracep->fullQData(oldp+836,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_addr_reg),64);
        tracep->fullCData(oldp+838,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_ar_id),4);
        tracep->fullQData(oldp+839,(vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime),64);
        tracep->fullQData(oldp+841,(vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp),64);
        tracep->fullCData(oldp+843,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state),2);
        tracep->fullCData(oldp+844,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state),2);
        tracep->fullCData(oldp+845,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timeraw_id_temp),4);
        tracep->fullQData(oldp+846,(vlSelf->ysyx_22040228__DOT__clint6__DOT__read_csrdata_temp),64);
        tracep->fullCData(oldp+848,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timerar_id_temp),4);
        tracep->fullCData(oldp+849,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state),2);
        tracep->fullCData(oldp+850,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state),2);
        tracep->fullQData(oldp+851,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_data_reg),64);
        tracep->fullQData(oldp+853,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_addr_reg),64);
        tracep->fullQData(oldp+855,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                      ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 9U)))) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                          ? (((QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[0U])))
                                          : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                               == (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 9U)))) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                              ? (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[2U])))
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+857,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))
                                      ? (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id))
                                      : 0U)),4);
        tracep->fullQData(oldp+858,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1) 
                                      | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                      ? vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr
                                      : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
                                          & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                          ? vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr
                                          : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1)
                                              ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                                              : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2) 
                                                  | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
                                                   & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2)
                                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3) 
                                                     | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                     ? 
                                                    (8ULL 
                                                     + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                     : 
                                                    (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
                                                      & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                      ? 
                                                     (8ULL 
                                                      + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3)
                                                       ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                                                       : 
                                                      (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4) 
                                                        | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
                                                           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                        ? 
                                                       (0xcULL 
                                                        + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                        : 
                                                       (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
                                                         & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                         ? 
                                                        (0xcULL 
                                                         + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                         : 
                                                        ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4)
                                                          ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                                                          : vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr))))))))))))),64);
        tracep->fullCData(oldp+860,((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4))
                                      ? ((0U == (0xfU 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                          ? 4U : ((4U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                                   ? 3U
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                                    ? 2U
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                                     ? 1U
                                                     : 4U))))
                                      : ((0xcU == (0xfU 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp)))
                                          ? 1U : ((8U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp)))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp)))
                                                    ? 3U
                                                    : 4U))))),3);
        tracep->fullBit(oldp+861,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+862,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+863,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+864,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+865,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+866,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+867,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+868,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+869,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+870,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+871,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+872,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+873,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+874,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
        tracep->fullBit(oldp+875,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0))));
        tracep->fullBit(oldp+876,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1))));
        tracep->fullBit(oldp+877,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2))));
        tracep->fullBit(oldp+878,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3))));
        tracep->fullBit(oldp+879,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4))));
        tracep->fullBit(oldp+880,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5))));
        tracep->fullBit(oldp+881,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6))));
        tracep->fullBit(oldp+882,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7))));
        tracep->fullBit(oldp+883,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))));
        tracep->fullBit(oldp+884,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))));
        tracep->fullQData(oldp+885,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state)
                                      ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1)
                                          ? (4ULL + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc)
                                          : ((((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm) 
                                                                      >> 0xbU))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (0xfffU 
                                                                 & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm) 
                                                                    << 1U))))) 
                                             + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+887,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr)
                                      ? (0xfffffffffffffffeULL 
                                         & ((((- (QData)((IData)(
                                                                 (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                                >> 0x14U)))) 
                                            + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+889,(((((- (QData)((IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1)),64);
        tracep->fullBit(oldp+891,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+892,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+893,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+894,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+895,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+896,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+897,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+898,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+899,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+900,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+901,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+902,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+903,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+904,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
        tracep->fullBit(oldp+905,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0))));
        tracep->fullBit(oldp+906,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1))));
        tracep->fullBit(oldp+907,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2))));
        tracep->fullBit(oldp+908,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3))));
        tracep->fullBit(oldp+909,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4))));
        tracep->fullBit(oldp+910,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5))));
        tracep->fullBit(oldp+911,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6))));
        tracep->fullBit(oldp+912,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7))));
        tracep->fullBit(oldp+913,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))));
        tracep->fullBit(oldp+914,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))));
        tracep->fullQData(oldp+915,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state)
                                      ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2)
                                          ? (4ULL + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc)
                                          : ((((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm) 
                                                                      >> 0xbU))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (0xfffU 
                                                                 & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm) 
                                                                    << 1U))))) 
                                             + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+917,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr)
                                      ? (0xfffffffffffffffeULL 
                                         & ((((- (QData)((IData)(
                                                                 (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                                >> 0x14U)))) 
                                            + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+919,(((((- (QData)((IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1)),64);
        tracep->fullBit(oldp+921,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[0]));
        tracep->fullBit(oldp+922,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[1]));
        tracep->fullBit(oldp+923,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[2]));
        tracep->fullBit(oldp+924,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_re) 
                                   & (1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)))));
        tracep->fullBit(oldp+925,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_we) 
                                   & (1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)))));
        tracep->fullBit(oldp+926,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
                                   & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                        == (0x7fffffU 
                                            & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                       >> 9U)))) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                      | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                          == (0x7fffffU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                         >> 9U)))) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))));
        VL_EXTEND_WQ(128,64, __Vtemp1091, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
        if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) {
            __Vtemp1100[0U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                 == (0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 9U)))) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                ? __Vtemp1091[0U] : 0U);
            __Vtemp1100[1U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                 == (0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 9U)))) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                ? __Vtemp1091[1U] : 0U);
            __Vtemp1100[2U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                 == (0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 9U)))) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                ? __Vtemp1091[2U] : 
                               (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                  == (0x7fffffU & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                 & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                 ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection)
                                 : 0U));
            __Vtemp1100[3U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                 == (0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 9U)))) 
                                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                ? __Vtemp1091[3U] : 
                               (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                  == (0x7fffffU & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                 & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                 ? (IData)((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection 
                                            >> 0x20U))
                                 : 0U));
        } else {
            __Vtemp1100[0U] = 0U;
            __Vtemp1100[1U] = 0U;
            __Vtemp1100[2U] = 0U;
            __Vtemp1100[3U] = 0U;
        }
        tracep->fullWData(oldp+927,(__Vtemp1100),128);
        tracep->fullBit(oldp+931,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                                   & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                        == (0x7fffffU 
                                            & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                       >> 9U)))) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                      | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                          == (0x7fffffU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                         >> 9U)))) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))));
        tracep->fullBit(oldp+932,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                     >> 3U)))]));
        tracep->fullBit(oldp+933,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                     >> 3U)))]));
        tracep->fullIData(oldp+934,(((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                      ? 0U : (0x7fffffU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                         >> 9U))))),23);
        VL_EXTEND_WQ(128,64, __Vtemp1101, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
        if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
            __Vtemp1117[0U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U];
            __Vtemp1117[1U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U];
            __Vtemp1117[2U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U];
            __Vtemp1117[3U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U];
        } else {
            __Vtemp1117[0U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                         == (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                        >> 9U)))) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                        ? __Vtemp1101[0U]
                                        : 0U) : 0U)
                                : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U]
                                    : 0U));
            __Vtemp1117[1U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                         == (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                        >> 9U)))) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                        ? __Vtemp1101[1U]
                                        : 0U) : 0U)
                                : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U]
                                    : 0U));
            __Vtemp1117[2U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                         == (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                        >> 9U)))) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                        ? __Vtemp1101[2U]
                                        : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                             == (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                            ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection)
                                            : 0U)) : 0U)
                                : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U]
                                    : 0U));
            __Vtemp1117[3U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                         == (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                        >> 9U)))) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                        ? __Vtemp1101[3U]
                                        : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                             == (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                            ? (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection 
                                                       >> 0x20U))
                                            : 0U)) : 0U)
                                : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U]
                                    : 0U));
        }
        tracep->fullWData(oldp+935,(__Vtemp1117),128);
        if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
            __Vtemp1124[0U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[0U];
            __Vtemp1124[1U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[1U];
            __Vtemp1124[2U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[2U];
            __Vtemp1124[3U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[3U];
        } else {
            __Vtemp1124[0U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[0U]
                                : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[0U]
                                    : 0U));
            __Vtemp1124[1U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[1U]
                                : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[1U]
                                    : 0U));
            __Vtemp1124[2U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[2U]
                                : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[2U]
                                    : 0U));
            __Vtemp1124[3U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[3U]
                                : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[3U]
                                    : 0U));
        }
        tracep->fullWData(oldp+939,(__Vtemp1124),128);
        tracep->fullBit(oldp+943,(((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                    ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena)
                                    : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                                           & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                == 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                              | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                  == 
                                                  (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 9U)))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
                                        : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena))))));
        tracep->fullBit(oldp+944,((1U & (~ ((0x10U 
                                             == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                             ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena)
                                             : ((4U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                 ? 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                                                 & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                      == 
                                                      (0x7fffffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                  >> 9U)))) 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                                    | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                        == 
                                                        (0x7fffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                    >> 9U)))) 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
                                                 : 
                                                ((0x10U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena))))))));
        VL_EXTEND_WQ(128,64, __Vtemp1125, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
        __Vtemp1142[0U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                               ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U]
                               : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp1125[0U]
                                           : 0U) : 0U)
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U]
                                       : 0U))));
        __Vtemp1142[1U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                               ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U]
                               : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp1125[1U]
                                           : 0U) : 0U)
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U]
                                       : 0U))));
        __Vtemp1142[2U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                               ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U]
                               : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp1125[2U]
                                           : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                == 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                               ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection)
                                               : 0U))
                                       : 0U) : ((0x10U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                 ? 
                                                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U]
                                                 : 0U))));
        __Vtemp1142[3U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                               ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U]
                               : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp1125[3U]
                                           : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                == 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                               ? (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection 
                                                          >> 0x20U))
                                               : 0U))
                                       : 0U) : ((0x10U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                 ? 
                                                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U]
                                                 : 0U))));
        tracep->fullWData(oldp+945,(__Vtemp1142),128);
        tracep->fullCData(oldp+949,(((4U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                      ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                          ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                              ? 1U : 
                                             ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread)
                                               ? 1U
                                               : 6U))
                                          : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                              ? ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread)
                                                  ? 1U
                                                  : 5U)
                                              : ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread)
                                                  ? 1U
                                                  : 4U)))
                                      : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                          ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                              ? ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite)
                                                  ? 1U
                                                  : 3U)
                                              : ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite)
                                                  ? 1U
                                                  : 2U))
                                          : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                              ? ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand)
                                                  ? 5U
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand)
                                                   ? 6U
                                                   : 
                                                  ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)
                                                      ? 4U
                                                      : 1U)))))
                                              : 1U)))),3);
        tracep->fullBit(oldp+950,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state)) 
                                   & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                      >> 2U))));
        tracep->fullBit(oldp+951,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                    >> 2U) & (2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)))));
        tracep->fullQData(oldp+952,((((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                      & (0x200bff8ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))
                                      ? ((vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask 
                                          & (((QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U])))) 
                                         | ((~ vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask) 
                                            & vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime))
                                      : (1ULL + vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime))),64);
        tracep->fullQData(oldp+954,((((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))
                                      ? ((vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask 
                                          & (((QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U])))) 
                                         | ((~ vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask) 
                                            & vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp))
                                      : vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp)),64);
        tracep->fullBit(oldp+956,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready))));
        tracep->fullBit(oldp+957,(((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                   & (2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state)))));
        tracep->fullQData(oldp+958,(vlSelf->ysyx_22040228__DOT__rvcpu_data_addr),64);
        tracep->fullCData(oldp+960,(vlSelf->ysyx_22040228__DOT__rvcpu_wmask),8);
        tracep->fullQData(oldp+961,(vlSelf->ysyx_22040228__DOT__rvcpu_data_o),64);
        tracep->fullBit(oldp+963,(vlSelf->ysyx_22040228__DOT__rvcpu_we));
        tracep->fullBit(oldp+964,(vlSelf->ysyx_22040228__DOT__rvcpu_re));
        tracep->fullQData(oldp+965,(vlSelf->ysyx_22040228__DOT__uncache_arb_data),64);
        tracep->fullQData(oldp+967,(vlSelf->ysyx_22040228__DOT__uncache_arb_addr),64);
        tracep->fullCData(oldp+969,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)
                                      ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_wmask)
                                      : 0U)),8);
        tracep->fullBit(oldp+970,(vlSelf->ysyx_22040228__DOT__uncache_arb_we));
        tracep->fullBit(oldp+971,(vlSelf->ysyx_22040228__DOT__uncache_arb_re));
        tracep->fullQData(oldp+972,(vlSelf->ysyx_22040228__DOT__uncache_dc_data),64);
        tracep->fullQData(oldp+974,(vlSelf->ysyx_22040228__DOT__uncache_dc_addr),64);
        tracep->fullCData(oldp+976,(vlSelf->ysyx_22040228__DOT__uncache_dc_mask),8);
        tracep->fullBit(oldp+977,(vlSelf->ysyx_22040228__DOT__uncache_dc_we));
        tracep->fullBit(oldp+978,(vlSelf->ysyx_22040228__DOT__uncache_dc_re));
        tracep->fullBit(oldp+979,(vlSelf->ysyx_22040228__DOT__uncache_dc_finish));
        tracep->fullQData(oldp+980,(vlSelf->ysyx_22040228__DOT__d_cache_data_out),64);
        tracep->fullBit(oldp+982,(vlSelf->ysyx_22040228__DOT__d_cache_mem_finish__out9));
        tracep->fullQData(oldp+983,(vlSelf->ysyx_22040228__DOT__d_cache_out_addr),64);
        tracep->fullQData(oldp+985,(vlSelf->ysyx_22040228__DOT__d_cache_out_data),64);
        tracep->fullCData(oldp+987,(vlSelf->ysyx_22040228__DOT__d_cache_out_type),4);
        tracep->fullQData(oldp+988,(vlSelf->ysyx_22040228__DOT__t_axi_aw_addr),64);
        tracep->fullQData(oldp+990,(vlSelf->ysyx_22040228__DOT__t_axi_w_data),64);
        tracep->fullCData(oldp+992,(vlSelf->ysyx_22040228__DOT__t_axi_w_strb),8);
        tracep->fullCData(oldp+993,(vlSelf->ysyx_22040228__DOT__t_axi_b_id),4);
        tracep->fullBit(oldp+994,(vlSelf->ysyx_22040228__DOT__t_axi_b_valid));
        tracep->fullQData(oldp+995,(vlSelf->ysyx_22040228__DOT__t_axi_ar_addr),64);
        tracep->fullCData(oldp+997,(vlSelf->ysyx_22040228__DOT__t_axi_r_id),4);
        tracep->fullQData(oldp+998,(vlSelf->ysyx_22040228__DOT__t_axi_r_data),64);
        tracep->fullBit(oldp+1000,(vlSelf->ysyx_22040228__DOT__t_axi_r_last));
        tracep->fullBit(oldp+1001,(vlSelf->ysyx_22040228__DOT__t_axi_r_valid));
        tracep->fullSData(oldp+1002,(vlSelf->ysyx_22040228__DOT__add_axi_aw_id),12);
        tracep->fullWData(oldp+1003,(vlSelf->ysyx_22040228__DOT__add_axi_aw_addr),192);
        tracep->fullIData(oldp+1009,(vlSelf->ysyx_22040228__DOT__add_axi_aw_len),24);
        tracep->fullSData(oldp+1010,(vlSelf->ysyx_22040228__DOT__add_axi_aw_size),9);
        tracep->fullCData(oldp+1011,(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst),6);
        tracep->fullSData(oldp+1012,(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache),12);
        tracep->fullSData(oldp+1013,(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot),9);
        tracep->fullSData(oldp+1014,(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos),12);
        tracep->fullCData(oldp+1015,(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid),3);
        tracep->fullCData(oldp+1016,(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready),3);
        tracep->fullWData(oldp+1017,(vlSelf->ysyx_22040228__DOT__add_axi_w_data),192);
        tracep->fullIData(oldp+1023,(vlSelf->ysyx_22040228__DOT__add_axi_w_strb),24);
        tracep->fullCData(oldp+1024,(vlSelf->ysyx_22040228__DOT__add_axi_w_last),3);
        tracep->fullCData(oldp+1025,(vlSelf->ysyx_22040228__DOT__add_axi_w_valid),3);
        tracep->fullCData(oldp+1026,(vlSelf->ysyx_22040228__DOT__add_axi_w_ready),3);
        tracep->fullSData(oldp+1027,(vlSelf->ysyx_22040228__DOT__add_axi_b_id),12);
        tracep->fullCData(oldp+1028,(vlSelf->ysyx_22040228__DOT__add_axi_b_ready),3);
        tracep->fullSData(oldp+1029,(vlSelf->ysyx_22040228__DOT__add_axi_ar_id),12);
        tracep->fullWData(oldp+1030,(vlSelf->ysyx_22040228__DOT__add_axi_ar_addr),192);
        tracep->fullIData(oldp+1036,(vlSelf->ysyx_22040228__DOT__add_axi_ar_len),24);
        tracep->fullSData(oldp+1037,(vlSelf->ysyx_22040228__DOT__add_axi_ar_size),9);
        tracep->fullCData(oldp+1038,(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst),6);
        tracep->fullSData(oldp+1039,(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache),12);
        tracep->fullSData(oldp+1040,(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot),9);
        tracep->fullSData(oldp+1041,(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos),12);
        tracep->fullCData(oldp+1042,(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid),3);
        tracep->fullSData(oldp+1043,(vlSelf->ysyx_22040228__DOT__add_axi_r_id),12);
        tracep->fullWData(oldp+1044,(vlSelf->ysyx_22040228__DOT__add_axi_r_data),192);
        tracep->fullCData(oldp+1050,(vlSelf->ysyx_22040228__DOT__add_axi_r_ready),3);
        tracep->fullCData(oldp+1051,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id) 
                                              >> 8U))),4);
        tracep->fullQData(oldp+1052,((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[4U])))),64);
        tracep->fullCData(oldp+1054,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_aw_len 
                                               >> 0x10U))),8);
        tracep->fullCData(oldp+1055,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size) 
                                            >> 6U))),3);
        tracep->fullCData(oldp+1056,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst) 
                                            >> 4U))),2);
        tracep->fullCData(oldp+1057,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache) 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1058,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot) 
                                            >> 6U))),3);
        tracep->fullCData(oldp+1059,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos) 
                                              >> 8U))),4);
        tracep->fullBit(oldp+1060,(vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready));
        tracep->fullBit(oldp+1061,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                          >> 2U))));
        tracep->fullQData(oldp+1062,((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__add_axi_w_data[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__add_axi_w_data[4U])))),64);
        tracep->fullCData(oldp+1064,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                               >> 0x10U))),8);
        tracep->fullBit(oldp+1065,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last) 
                                          >> 2U))));
        tracep->fullBit(oldp+1066,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                          >> 2U))));
        tracep->fullBit(oldp+1067,(vlSelf->ysyx_22040228__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+1068,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                          >> 2U))));
        tracep->fullCData(oldp+1069,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id) 
                                              >> 8U))),4);
        tracep->fullQData(oldp+1070,((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U])))),64);
        tracep->fullCData(oldp+1072,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_ar_len 
                                               >> 0x10U))),8);
        tracep->fullCData(oldp+1073,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size) 
                                            >> 6U))),3);
        tracep->fullCData(oldp+1074,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst) 
                                            >> 4U))),2);
        tracep->fullCData(oldp+1075,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache) 
                                              >> 8U))),4);
        tracep->fullCData(oldp+1076,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot) 
                                            >> 6U))),3);
        tracep->fullCData(oldp+1077,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos) 
                                              >> 8U))),4);
        tracep->fullBit(oldp+1078,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                          >> 2U))));
        tracep->fullBit(oldp+1079,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                          >> 2U))));
        tracep->fullCData(oldp+1080,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id) 
                                              >> 4U))),4);
        tracep->fullQData(oldp+1081,((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))),64);
        tracep->fullCData(oldp+1083,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_aw_len 
                                               >> 8U))),8);
        tracep->fullCData(oldp+1084,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size) 
                                            >> 3U))),3);
        tracep->fullCData(oldp+1085,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst) 
                                            >> 2U))),2);
        tracep->fullCData(oldp+1086,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache) 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1087,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot) 
                                            >> 3U))),3);
        tracep->fullCData(oldp+1088,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos) 
                                              >> 4U))),4);
        tracep->fullBit(oldp+1089,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                          >> 1U))));
        tracep->fullQData(oldp+1090,((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U])))),64);
        tracep->fullCData(oldp+1092,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                               >> 8U))),8);
        tracep->fullBit(oldp+1093,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last) 
                                          >> 1U))));
        tracep->fullBit(oldp+1094,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                          >> 1U))));
        tracep->fullBit(oldp+1095,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw));
        tracep->fullBit(oldp+1096,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                          >> 1U))));
        tracep->fullCData(oldp+1097,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id) 
                                              >> 4U))),4);
        tracep->fullQData(oldp+1098,((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))),64);
        tracep->fullCData(oldp+1100,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_ar_len 
                                               >> 8U))),8);
        tracep->fullCData(oldp+1101,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size) 
                                            >> 3U))),3);
        tracep->fullCData(oldp+1102,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst) 
                                            >> 2U))),2);
        tracep->fullCData(oldp+1103,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache) 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1104,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot) 
                                            >> 3U))),3);
        tracep->fullCData(oldp+1105,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos) 
                                              >> 4U))),4);
        tracep->fullBit(oldp+1106,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                          >> 1U))));
        tracep->fullBit(oldp+1107,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                          >> 1U))));
        tracep->fullCData(oldp+1108,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id))),4);
        tracep->fullQData(oldp+1109,((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[0U])))),64);
        tracep->fullCData(oldp+1111,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_aw_len)),8);
        tracep->fullCData(oldp+1112,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size))),3);
        tracep->fullCData(oldp+1113,((3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst))),2);
        tracep->fullCData(oldp+1114,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache))),4);
        tracep->fullCData(oldp+1115,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot))),3);
        tracep->fullCData(oldp+1116,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos))),4);
        tracep->fullBit(oldp+1117,(vlSelf->ysyx_22040228__DOT__io_axi_aw_ready));
        tracep->fullBit(oldp+1118,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid))));
        tracep->fullQData(oldp+1119,((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__add_axi_w_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__add_axi_w_data[0U])))),64);
        tracep->fullCData(oldp+1121,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_w_strb)),8);
        tracep->fullBit(oldp+1122,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last))));
        tracep->fullBit(oldp+1123,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid))));
        tracep->fullBit(oldp+1124,(vlSelf->ysyx_22040228__DOT__io_axi_w_ready));
        tracep->fullBit(oldp+1125,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready))));
        tracep->fullCData(oldp+1126,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id))),4);
        tracep->fullQData(oldp+1127,((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[0U])))),64);
        tracep->fullCData(oldp+1129,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_ar_len)),8);
        tracep->fullCData(oldp+1130,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size))),3);
        tracep->fullCData(oldp+1131,((3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst))),2);
        tracep->fullCData(oldp+1132,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache))),4);
        tracep->fullCData(oldp+1133,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot))),3);
        tracep->fullCData(oldp+1134,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos))),4);
        tracep->fullBit(oldp+1135,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid))));
        tracep->fullBit(oldp+1136,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready))));
        tracep->fullCData(oldp+1137,(vlSelf->ysyx_22040228__DOT__mmio_thing),3);
        tracep->fullBit(oldp+1138,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullQData(oldp+1139,(((IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand)
                                       ? (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U])))
                                       : 0ULL)),64);
        tracep->fullQData(oldp+1141,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data),64);
        tracep->fullCData(oldp+1143,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr),5);
        tracep->fullCData(oldp+1144,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr),5);
        tracep->fullBit(oldp+1145,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena));
        tracep->fullBit(oldp+1146,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena));
        tracep->fullCData(oldp+1147,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type),8);
        tracep->fullCData(oldp+1148,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode),8);
        tracep->fullQData(oldp+1149,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1),64);
        tracep->fullQData(oldp+1151,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2),64);
        tracep->fullBit(oldp+1153,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_ena));
        tracep->fullCData(oldp+1154,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_addr),5);
        tracep->fullQData(oldp+1155,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc),64);
        tracep->fullIData(oldp+1157,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_inst),32);
        tracep->fullQData(oldp+1158,(((IData)((0U != 
                                               (3U 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))))
                                       ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                                          + (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset) 
                                                                     >> 0xbU))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset))))
                                       : 0ULL)),64);
        tracep->fullQData(oldp+1160,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc),64);
        tracep->fullBit(oldp+1162,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena));
        tracep->fullCData(oldp+1163,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type),6);
        tracep->fullBit(oldp+1164,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type) 
                                          >> 2U))));
        tracep->fullBit(oldp+1165,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf));
        tracep->fullCData(oldp+1166,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr),5);
        tracep->fullCData(oldp+1167,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr),5);
        tracep->fullBit(oldp+1168,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena));
        tracep->fullBit(oldp+1169,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena));
        tracep->fullCData(oldp+1170,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type),8);
        tracep->fullCData(oldp+1171,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode),8);
        tracep->fullQData(oldp+1172,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1),64);
        tracep->fullQData(oldp+1174,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2),64);
        tracep->fullBit(oldp+1176,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_ena));
        tracep->fullCData(oldp+1177,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_addr),5);
        tracep->fullQData(oldp+1178,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc),64);
        tracep->fullIData(oldp+1180,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_inst),32);
        tracep->fullQData(oldp+1181,(((IData)((0U != 
                                               (3U 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))))
                                       ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                                          + (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset) 
                                                                     >> 0xbU))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset))))
                                       : 0ULL)),64);
        tracep->fullBit(oldp+1183,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf));
        tracep->fullBit(oldp+1184,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type) 
                                          >> 2U))));
        tracep->fullQData(oldp+1185,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc),64);
        tracep->fullBit(oldp+1187,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena));
        tracep->fullCData(oldp+1188,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type),6);
        tracep->fullCData(oldp+1189,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1),3);
        tracep->fullCData(oldp+1190,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2),3);
        tracep->fullBit(oldp+1191,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1));
        tracep->fullBit(oldp+1192,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2));
        tracep->fullBit(oldp+1193,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano));
        tracep->fullBit(oldp+1194,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant));
        tracep->fullBit(oldp+1195,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_trap));
        tracep->fullBit(oldp+1196,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_trap));
        tracep->fullQData(oldp+1197,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_submit_pc),64);
        tracep->fullQData(oldp+1199,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc),64);
        tracep->fullQData(oldp+1201,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data),64);
        tracep->fullQData(oldp+1203,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc),64);
        tracep->fullQData(oldp+1205,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data),64);
        tracep->fullQData(oldp+1207,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc),64);
        tracep->fullQData(oldp+1209,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data),64);
        tracep->fullBit(oldp+1211,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy));
        tracep->fullQData(oldp+1212,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag),64);
        tracep->fullCData(oldp+1214,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg),5);
        tracep->fullBit(oldp+1215,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag));
        tracep->fullBit(oldp+1216,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__should_stop));
        tracep->fullQData(oldp+1217,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__operand2),64);
        tracep->fullQData(oldp+1219,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_temp),64);
        tracep->fullQData(oldp+1221,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc),64);
        tracep->fullQData(oldp+1223,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp),64);
        tracep->fullCData(oldp+1225,(((0xcU == (0xfU 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc)))
                                       ? 1U : ((8U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc)))
                                                ? 2U
                                                : (
                                                   (4U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc)))
                                                    ? 3U
                                                    : 4U)))),3);
        tracep->fullCData(oldp+1226,(((0xcU == (0xfU 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc)))
                                       ? 1U : ((8U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc)))
                                                ? 2U
                                                : (
                                                   (4U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc)))
                                                    ? 3U
                                                    : 4U)))),3);
        tracep->fullBit(oldp+1227,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__should_updata));
        tracep->fullCData(oldp+1228,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__rs1),5);
        tracep->fullBit(oldp+1229,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui));
        tracep->fullBit(oldp+1230,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc));
        tracep->fullBit(oldp+1231,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jal));
        tracep->fullBit(oldp+1232,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr));
        tracep->fullBit(oldp+1233,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jump));
        tracep->fullBit(oldp+1234,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srai));
        tracep->fullBit(oldp+1235,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addiw));
        tracep->fullBit(oldp+1236,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slliw));
        tracep->fullBit(oldp+1237,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srliw));
        tracep->fullBit(oldp+1238,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraiw));
        tracep->fullBit(oldp+1239,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_add));
        tracep->fullBit(oldp+1240,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sub));
        tracep->fullBit(oldp+1241,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sll));
        tracep->fullBit(oldp+1242,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slt));
        tracep->fullBit(oldp+1243,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sltu));
        tracep->fullBit(oldp+1244,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_xor));
        tracep->fullBit(oldp+1245,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srl));
        tracep->fullBit(oldp+1246,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sra));
        tracep->fullBit(oldp+1247,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_or));
        tracep->fullBit(oldp+1248,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_and));
        tracep->fullBit(oldp+1249,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_div));
        tracep->fullBit(oldp+1250,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divu));
        tracep->fullBit(oldp+1251,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mul));
        tracep->fullBit(oldp+1252,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulh));
        tracep->fullBit(oldp+1253,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhsu));
        tracep->fullBit(oldp+1254,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhu));
        tracep->fullBit(oldp+1255,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_rem));
        tracep->fullBit(oldp+1256,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remu));
        tracep->fullBit(oldp+1257,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addw));
        tracep->fullBit(oldp+1258,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_subw));
        tracep->fullBit(oldp+1259,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sllw));
        tracep->fullBit(oldp+1260,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srlw));
        tracep->fullBit(oldp+1261,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraw));
        tracep->fullBit(oldp+1262,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divuw));
        tracep->fullBit(oldp+1263,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divw));
        tracep->fullBit(oldp+1264,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulw));
        tracep->fullBit(oldp+1265,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remuw));
        tracep->fullBit(oldp+1266,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remw));
        tracep->fullBit(oldp+1267,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw));
        tracep->fullBit(oldp+1268,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs));
        tracep->fullBit(oldp+1269,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc));
        tracep->fullBit(oldp+1270,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi));
        tracep->fullBit(oldp+1271,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi));
        tracep->fullBit(oldp+1272,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci));
        tracep->fullBit(oldp+1273,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs)) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc))));
        tracep->fullBit(oldp+1274,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi)) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci))));
        tracep->fullBit(oldp+1275,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ecall));
        tracep->fullBit(oldp+1276,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak));
        tracep->fullBit(oldp+1277,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mret));
        tracep->fullSData(oldp+1278,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset),12);
        tracep->fullBit(oldp+1279,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1));
        tracep->fullBit(oldp+1280,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1));
        tracep->fullBit(oldp+1281,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com1_op1));
        tracep->fullBit(oldp+1282,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com2_op1));
        tracep->fullBit(oldp+1283,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com3_op1));
        tracep->fullBit(oldp+1284,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com4_op1));
        tracep->fullBit(oldp+1285,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com5_op1));
        tracep->fullBit(oldp+1286,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com6_op1));
        tracep->fullBit(oldp+1287,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com7_op1));
        tracep->fullBit(oldp+1288,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com8_op1));
        tracep->fullBit(oldp+1289,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb1_op1));
        tracep->fullBit(oldp+1290,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op1));
        tracep->fullBit(oldp+1291,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb3_op1));
        tracep->fullBit(oldp+1292,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                     > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1)))));
        tracep->fullBit(oldp+1293,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1)))));
        tracep->fullBit(oldp+1294,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1));
        tracep->fullBit(oldp+1295,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1)))));
        tracep->fullBit(oldp+1296,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1)))));
        tracep->fullBit(oldp+1297,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2));
        tracep->fullBit(oldp+1298,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2));
        tracep->fullBit(oldp+1299,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op2));
        tracep->fullBit(oldp+1300,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                     > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2)))));
        tracep->fullBit(oldp+1301,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2)))));
        tracep->fullBit(oldp+1302,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2));
        tracep->fullBit(oldp+1303,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2)))));
        tracep->fullBit(oldp+1304,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2)))));
        tracep->fullBit(oldp+1305,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state));
        tracep->fullQData(oldp+1306,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_sub_op2),64);
        tracep->fullBit(oldp+1308,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_ls_op2));
        tracep->fullBit(oldp+1309,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state));
        tracep->fullBit(oldp+1310,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__jalr_pc_ena));
        tracep->fullBit(oldp+1311,((1U & ((((((((((
                                                   ((((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1)) 
                                                      & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1))) 
                                                     & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1))) 
                                                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb1_op1))) 
                                                   & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op1))) 
                                                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb3_op1))) 
                                                 & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com1_op1))) 
                                                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com2_op1))) 
                                               & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com3_op1))) 
                                              & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com4_op1))) 
                                             & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com5_op1))) 
                                            & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com6_op1))) 
                                           & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com7_op1))) 
                                          & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com8_op1))))));
        tracep->fullCData(oldp+1312,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__rs1),5);
        tracep->fullBit(oldp+1313,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui));
        tracep->fullBit(oldp+1314,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc));
        tracep->fullBit(oldp+1315,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal));
        tracep->fullBit(oldp+1316,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr));
        tracep->fullBit(oldp+1317,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jump));
        tracep->fullBit(oldp+1318,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srai));
        tracep->fullBit(oldp+1319,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addiw));
        tracep->fullBit(oldp+1320,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slliw));
        tracep->fullBit(oldp+1321,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srliw));
        tracep->fullBit(oldp+1322,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraiw));
        tracep->fullBit(oldp+1323,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_add));
        tracep->fullBit(oldp+1324,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sub));
        tracep->fullBit(oldp+1325,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sll));
        tracep->fullBit(oldp+1326,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slt));
        tracep->fullBit(oldp+1327,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sltu));
        tracep->fullBit(oldp+1328,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_xor));
        tracep->fullBit(oldp+1329,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srl));
        tracep->fullBit(oldp+1330,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sra));
        tracep->fullBit(oldp+1331,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_or));
        tracep->fullBit(oldp+1332,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_and));
        tracep->fullBit(oldp+1333,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_div));
        tracep->fullBit(oldp+1334,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divu));
        tracep->fullBit(oldp+1335,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mul));
        tracep->fullBit(oldp+1336,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulh));
        tracep->fullBit(oldp+1337,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhsu));
        tracep->fullBit(oldp+1338,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhu));
        tracep->fullBit(oldp+1339,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_rem));
        tracep->fullBit(oldp+1340,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remu));
        tracep->fullBit(oldp+1341,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addw));
        tracep->fullBit(oldp+1342,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_subw));
        tracep->fullBit(oldp+1343,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sllw));
        tracep->fullBit(oldp+1344,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srlw));
        tracep->fullBit(oldp+1345,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraw));
        tracep->fullBit(oldp+1346,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divuw));
        tracep->fullBit(oldp+1347,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divw));
        tracep->fullBit(oldp+1348,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulw));
        tracep->fullBit(oldp+1349,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remuw));
        tracep->fullBit(oldp+1350,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remw));
        tracep->fullBit(oldp+1351,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw));
        tracep->fullBit(oldp+1352,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs));
        tracep->fullBit(oldp+1353,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc));
        tracep->fullBit(oldp+1354,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi));
        tracep->fullBit(oldp+1355,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi));
        tracep->fullBit(oldp+1356,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci));
        tracep->fullBit(oldp+1357,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs)) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc))));
        tracep->fullBit(oldp+1358,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi)) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci))));
        tracep->fullBit(oldp+1359,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ecall));
        tracep->fullBit(oldp+1360,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak));
        tracep->fullBit(oldp+1361,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mret));
        tracep->fullSData(oldp+1362,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset),12);
        tracep->fullBit(oldp+1363,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1));
        tracep->fullBit(oldp+1364,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1));
        tracep->fullBit(oldp+1365,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com1_op1));
        tracep->fullBit(oldp+1366,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com2_op1));
        tracep->fullBit(oldp+1367,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com3_op1));
        tracep->fullBit(oldp+1368,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com4_op1));
        tracep->fullBit(oldp+1369,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com5_op1));
        tracep->fullBit(oldp+1370,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com6_op1));
        tracep->fullBit(oldp+1371,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com7_op1));
        tracep->fullBit(oldp+1372,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com8_op1));
        tracep->fullBit(oldp+1373,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb1_op1));
        tracep->fullBit(oldp+1374,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op1));
        tracep->fullBit(oldp+1375,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb3_op1));
        tracep->fullBit(oldp+1376,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                     > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))));
        tracep->fullBit(oldp+1377,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))));
        tracep->fullBit(oldp+1378,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1));
        tracep->fullBit(oldp+1379,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1)))));
        tracep->fullBit(oldp+1380,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1)))));
        tracep->fullBit(oldp+1381,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2));
        tracep->fullBit(oldp+1382,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2));
        tracep->fullBit(oldp+1383,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op2));
        tracep->fullBit(oldp+1384,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                     > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2)))));
        tracep->fullBit(oldp+1385,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2)))));
        tracep->fullBit(oldp+1386,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2));
        tracep->fullBit(oldp+1387,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2)))));
        tracep->fullBit(oldp+1388,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                     < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2)))));
        tracep->fullBit(oldp+1389,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state));
        tracep->fullQData(oldp+1390,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_sub_op2),64);
        tracep->fullBit(oldp+1392,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_ls_op2));
        tracep->fullBit(oldp+1393,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state));
        tracep->fullBit(oldp+1394,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__jalr_pc_ena));
        tracep->fullBit(oldp+1395,((1U & ((((((((((
                                                   ((((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1)) 
                                                      & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1))) 
                                                     & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1))) 
                                                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb1_op1))) 
                                                   & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op1))) 
                                                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb3_op1))) 
                                                 & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com1_op1))) 
                                                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com2_op1))) 
                                               & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com3_op1))) 
                                              & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com4_op1))) 
                                             & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com5_op1))) 
                                            & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com6_op1))) 
                                           & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com7_op1))) 
                                          & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com8_op1))))));
        tracep->fullBit(oldp+1396,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw));
        tracep->fullBit(oldp+1397,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_waw));
        tracep->fullBit(oldp+1398,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war));
        tracep->fullBit(oldp+1399,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war));
        tracep->fullBit(oldp+1400,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt1_stop_war));
        tracep->fullBit(oldp+1401,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt2_stop_war));
        tracep->fullBit(oldp+1402,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                                     >> 3U) & ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw) 
                                                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war)) 
                                                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war)) 
                                               | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard)))));
        tracep->fullBit(oldp+1403,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                                     >> 3U) & ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw) 
                                                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war)) 
                                                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war)) 
                                               | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard)))));
        tracep->fullBit(oldp+1404,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard));
        tracep->fullBit(oldp+1405,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_hard));
        tracep->fullQData(oldp+1406,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__exe_res),64);
        tracep->fullQData(oldp+1408,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data),64);
        tracep->fullQData(oldp+1410,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__yushu),64);
        tracep->fullQData(oldp+1412,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__shang),64);
        tracep->fullQData(oldp+1414,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__exe_res),64);
        tracep->fullQData(oldp+1416,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data),64);
        tracep->fullQData(oldp+1418,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__yushu),64);
        tracep->fullQData(oldp+1420,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__shang),64);
        tracep->fullCData(oldp+1422,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_byte),8);
        tracep->fullSData(oldp+1423,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_half_byte),16);
        tracep->fullIData(oldp+1424,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_word),32);
        tracep->fullQData(oldp+1425,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_data),64);
        tracep->fullCData(oldp+1427,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_mask),8);
        tracep->fullCData(oldp+1428,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating),3);
        tracep->fullBit(oldp+1429,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                                          >> 3U))));
        tracep->fullBit(oldp+1430,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                                          >> 3U))));
        tracep->fullBit(oldp+1431,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode1_ena));
        tracep->fullBit(oldp+1432,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode2_ena));
        tracep->fullQData(oldp+1433,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__depcbf1),64);
        tracep->fullQData(oldp+1435,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__depcbf2),64);
        tracep->fullWData(oldp+1437,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready),67);
        tracep->fullBit(oldp+1440,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__diff_ena));
        tracep->fullCData(oldp+1441,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__clean_submcont),8);
        tracep->fullBit(oldp+1442,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_we) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_re))));
        tracep->fullBit(oldp+1443,(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache));
        tracep->fullBit(oldp+1444,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__icache_if_shankhand));
        tracep->fullCData(oldp+1445,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst_nxt),6);
        tracep->fullIData(oldp+1446,((0x7fffffU & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))),23);
        tracep->fullCData(oldp+1447,((0x3fU & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                       >> 3U)))),6);
        tracep->fullCData(oldp+1448,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt),6);
        tracep->fullBit(oldp+1449,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__mem_hit_ok));
        tracep->fullQData(oldp+1450,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_addr),64);
        tracep->fullQData(oldp+1452,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_data),64);
        tracep->fullCData(oldp+1454,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_type),4);
        tracep->fullBit(oldp+1455,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_o));
        tracep->fullBit(oldp+1456,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_t));
        tracep->fullBit(oldp+1457,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_i_ok));
        tracep->fullQData(oldp+1458,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_addr),64);
        tracep->fullWData(oldp+1460,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb),128);
        tracep->fullBit(oldp+1464,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena1));
        tracep->fullWData(oldp+1465,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp),128);
        tracep->fullBit(oldp+1469,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena2));
        tracep->fullCData(oldp+1470,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt),6);
        tracep->fullWData(oldp+1471,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp),128);
        tracep->fullQData(oldp+1475,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection),64);
        tracep->fullQData(oldp+1477,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_addr),64);
        tracep->fullQData(oldp+1479,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_data),64);
        tracep->fullCData(oldp+1481,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_type),4);
        tracep->fullBit(oldp+1482,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_o));
        tracep->fullBit(oldp+1483,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_t));
        tracep->fullBit(oldp+1484,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_i_ok));
        tracep->fullQData(oldp+1485,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_addr),64);
        tracep->fullWData(oldp+1487,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb),128);
        tracep->fullBit(oldp+1491,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena1));
        tracep->fullWData(oldp+1492,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp),128);
        tracep->fullBit(oldp+1496,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena2));
        tracep->fullBit(oldp+1497,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_ena_i));
        tracep->fullCData(oldp+1498,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_addr_i),6);
        tracep->fullBit(oldp+1499,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_ena_i));
        tracep->fullCData(oldp+1500,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_addr_i),6);
        tracep->fullBit(oldp+1501,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand));
        tracep->fullBit(oldp+1502,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand));
        tracep->fullBit(oldp+1503,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand));
        tracep->fullBit(oldp+1504,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand));
        tracep->fullBit(oldp+1505,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand));
        tracep->fullCData(oldp+1506,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state_n),3);
        tracep->fullBit(oldp+1507,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread));
        tracep->fullBit(oldp+1508,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite));
        tracep->fullBit(oldp+1509,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread));
        tracep->fullBit(oldp+1510,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread));
        tracep->fullBit(oldp+1511,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite));
        tracep->fullBit(oldp+1512,((((((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand)) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand))));
        tracep->fullBit(oldp+1513,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                     >> 2U) & (IData)(vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+1514,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                     >> 2U) & (IData)(vlSelf->ysyx_22040228__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+1515,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
        tracep->fullBit(oldp+1516,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullCData(oldp+1517,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
        tracep->fullBit(oldp+1518,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_r));
        tracep->fullBit(oldp+1519,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_b));
        tracep->fullBit(oldp+1520,(vlSelf->ysyx_22040228__DOT__clint6__DOT__resp_success));
        tracep->fullQData(oldp+1521,(vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask),64);
        tracep->fullCData(oldp+1523,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state_n),2);
        tracep->fullCData(oldp+1524,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state_n),2);
        tracep->fullBit(oldp+1525,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                     >> 1U) & (0x200bff8ULL 
                                               == (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+1526,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                     >> 1U) & (0x2004000ULL 
                                               == (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+1527,(((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                    & (0x200bff8ULL 
                                       == (((QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullBit(oldp+1528,(((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                    & (0x2004000ULL 
                                       == (((QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullBit(oldp+1529,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__aw_shankhand));
        tracep->fullBit(oldp+1530,(((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__io_axi_w_ready))));
        tracep->fullCData(oldp+1531,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state_nxt),2);
        tracep->fullBit(oldp+1532,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__ar_shankhand));
        tracep->fullCData(oldp+1533,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state_nxt),2);
        tracep->fullBit(oldp+1534,(vlSelf->clk));
        tracep->fullBit(oldp+1535,(vlSelf->rst));
        tracep->fullQData(oldp+1536,(vlSelf->out_slave_addr_),64);
        tracep->fullQData(oldp+1538,(vlSelf->out_serial_data_),64);
        tracep->fullBit(oldp+1540,(vlSelf->out_serial_write_));
        tracep->fullBit(oldp+1541,(vlSelf->out_rtc_read_));
        tracep->fullQData(oldp+1542,(vlSelf->in_rtc_data_),64);
        tracep->fullBit(oldp+1544,(vlSelf->read_ena_sign_));
        tracep->fullQData(oldp+1545,(vlSelf->out_addr_outp),64);
        tracep->fullQData(oldp+1547,(vlSelf->read_data_sign_),64);
        tracep->fullBit(oldp+1549,(vlSelf->out_write_ram_ena));
        tracep->fullQData(oldp+1550,(vlSelf->out_write_ram_data),64);
        tracep->fullQData(oldp+1552,(vlSelf->out_write_ram_addr),64);
        tracep->fullCData(oldp+1554,(((IData)(vlSelf->rst)
                                       ? 7U : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)))
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                    & (1U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)))
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                     & (2U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)))
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                      & (3U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)))
                                                      ? 4U
                                                      : 7U)))))),3);
        tracep->fullCData(oldp+1555,(((IData)(vlSelf->rst)
                                       ? 7U : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                 >> 1U) 
                                                & ((0U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)) 
                                                   | (4U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))))
                                                ? 0U
                                                : (
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                     >> 1U) 
                                                    & ((1U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)) 
                                                       | (5U 
                                                          == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))))
                                                    ? 1U
                                                    : 
                                                   ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                      >> 1U) 
                                                     & ((2U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)) 
                                                        | (6U 
                                                           == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))))
                                                     ? 2U
                                                     : 
                                                    ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                       >> 1U) 
                                                      & (3U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)))
                                                      ? 4U
                                                      : 7U)))))),3);
        tracep->fullBit(oldp+1556,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->fullBit(oldp+1557,((1U & ((~ (IData)(vlSelf->rst)) 
                                          & ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                              ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready)
                                              : ((2U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready) 
                                                  >> 1U)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready)) 
                                                  >> 2U)))))));
        tracep->fullBit(oldp+1558,((1U & ((~ (IData)(vlSelf->rst)) 
                                          & ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                              ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready)
                                              : ((2U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready) 
                                                  >> 1U)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready)) 
                                                  >> 2U)))))));
        tracep->fullBit(oldp+1559,((1U & ((~ (IData)(vlSelf->rst)) 
                                          & ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                              ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready)
                                              : ((2U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready) 
                                                  >> 1U)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready)) 
                                                  >> 2U)))))));
        tracep->fullQData(oldp+1560,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))
                                       ? vlSelf->read_data_sign_
                                       : 0ULL)),64);
        tracep->fullQData(oldp+1562,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))
                                       ? vlSelf->in_rtc_data_
                                       : 0ULL)),64);
        tracep->fullCData(oldp+1564,(((IData)(vlSelf->rst)
                                       ? 0U : (7U & 
                                               (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                >> 0xcU)))),3);
        tracep->fullCData(oldp+1565,(((IData)(vlSelf->rst)
                                       ? 0U : (7U & 
                                               (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                >> 0xcU)))),3);
        tracep->fullIData(oldp+1566,((((IData)(vlSelf->rst) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req))
                                       ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst)),32);
        tracep->fullIData(oldp+1567,((((IData)(vlSelf->rst) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req))
                                       ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst)),32);
        tracep->fullIData(oldp+1568,((((IData)(vlSelf->rst) 
                                       | (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_re) 
                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_we)) 
                                          & (~ (IData)(vlSelf->ysyx_22040228__DOT__d_cache_mem_finish__out9))))
                                       ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst)),32);
        tracep->fullQData(oldp+1569,(((IData)(vlSelf->rst)
                                       ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena) 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                  ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                  : 
                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                 [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr]))),64);
        tracep->fullQData(oldp+1571,(((IData)(vlSelf->rst)
                                       ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena) 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                  ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                  : 
                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                 [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr]))),64);
        tracep->fullQData(oldp+1573,(((IData)(vlSelf->rst)
                                       ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena) 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                  ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                  : 
                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                 [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr]))),64);
        tracep->fullQData(oldp+1575,(((IData)(vlSelf->rst)
                                       ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena) 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                  ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                  : 
                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                 [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr]))),64);
        tracep->fullQData(oldp+1577,(((IData)(vlSelf->rst)
                                       ? 0ULL : ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                             >> 2U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                    << 0x38U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                    << 0x30U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                    << 0x28U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                    << 0x20U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                    << 0x18U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                    << 0x10U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                    << 8U)
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data))))))))),64);
        tracep->fullQData(oldp+1579,(((IData)(vlSelf->rst)
                                       ? 0ULL : ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                              >> 1U))))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                   << 0x10U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                    << 0x20U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                    << 0x30U)))))),64);
        tracep->fullQData(oldp+1581,(((IData)(vlSelf->rst)
                                       ? 0ULL : ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                             >> 2U)))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)) 
                                                  << 0x20U)
                                                  : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data))))),64);
        tracep->fullCData(oldp+1583,(((IData)(vlSelf->rst)
                                       ? 0U : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                           >> 2U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                     ? 0x80U
                                                     : 0x40U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                     ? 0x20U
                                                     : 0x10U))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                     ? 8U
                                                     : 4U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                     ? 2U
                                                     : 1U))))),8);
        tracep->fullCData(oldp+1584,(((IData)(vlSelf->rst)
                                       ? 0U : ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                            >> 1U))))
                                                ? 3U
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                                >> 1U))))
                                                    ? 0xcU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                                 >> 1U))))
                                                     ? 0x30U
                                                     : 0xc0U))))),8);
        tracep->fullCData(oldp+1585,(((IData)(vlSelf->rst)
                                       ? 0U : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                           >> 2U)))
                                                ? 0xf0U
                                                : 0xfU))),8);
        tracep->fullBit(oldp+1586,((1U & (((~ (IData)(vlSelf->rst)) 
                                           & ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                               ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready)
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready) 
                                                   >> 1U)
                                                   : 
                                                  (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready)) 
                                                   >> 2U)))) 
                                          | ((~ (IData)(vlSelf->rst)) 
                                             & ((1U 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                 ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready)
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready) 
                                                  >> 1U)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready)) 
                                                  >> 2U))))))));
        tracep->fullIData(oldp+1587,(3U),32);
        tracep->fullCData(oldp+1588,(3U),3);
        tracep->fullBit(oldp+1589,(vlSelf->ysyx_22040228__DOT__i_caceh_resp));
        tracep->fullBit(oldp+1590,(vlSelf->ysyx_22040228__DOT__i_cache_canin));
        tracep->fullBit(oldp+1591,(vlSelf->ysyx_22040228__DOT__d_cache_out_resp));
        tracep->fullBit(oldp+1592,(0U));
        tracep->fullCData(oldp+1593,(0U),8);
        tracep->fullCData(oldp+1594,(1U),2);
        tracep->fullCData(oldp+1595,(2U),4);
        tracep->fullCData(oldp+1596,(0U),3);
        tracep->fullCData(oldp+1597,(0U),4);
        tracep->fullBit(oldp+1598,(1U));
        tracep->fullCData(oldp+1599,(0U),2);
        tracep->fullCData(oldp+1600,(0U),6);
        tracep->fullBit(oldp+1601,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_de_ena));
        tracep->fullQData(oldp+1602,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_de_pc),64);
        tracep->fullBit(oldp+1604,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_flush));
        tracep->fullQData(oldp+1605,(0x43593231ULL),64);
        tracep->fullIData(oldp+1607,(0x80U),32);
        tracep->fullIData(oldp+1608,(0x40U),32);
        tracep->fullIData(oldp+1609,(6U),32);
    }
}