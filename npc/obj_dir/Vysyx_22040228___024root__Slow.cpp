// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040228.h for the primary calling header

#include "Vysyx_22040228___024root.h"
#include "Vysyx_22040228__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040228___024root___ctor_var_reset(Vysyx_22040228___024root* vlSelf);

Vysyx_22040228___024root::Vysyx_22040228___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040228___024root___ctor_var_reset(this);
}

void Vysyx_22040228___024root::__Vconfigure(Vysyx_22040228__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040228___024root::~Vysyx_22040228___024root() {
}

void Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__difftest_dut_thepc_TOP(QData/*63:0*/ thepc_data);
void Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__difftest_dut_regs_TOP(QData/*63:0*/ Z0, QData/*63:0*/ ra, QData/*63:0*/ sp, QData/*63:0*/ gp, QData/*63:0*/ tp, QData/*63:0*/ t0, QData/*63:0*/ t1, QData/*63:0*/ t2, QData/*63:0*/ fp, QData/*63:0*/ s1, QData/*63:0*/ a0, QData/*63:0*/ a1, QData/*63:0*/ a2, QData/*63:0*/ a3, QData/*63:0*/ a4, QData/*63:0*/ a5, QData/*63:0*/ a6, QData/*63:0*/ a7, QData/*63:0*/ s2, QData/*63:0*/ s3, QData/*63:0*/ s4, QData/*63:0*/ s5, QData/*63:0*/ s6, QData/*63:0*/ s7, QData/*63:0*/ s8, QData/*63:0*/ s9, QData/*63:0*/ s10, QData/*63:0*/ a11, QData/*63:0*/ t3, QData/*63:0*/ t4, QData/*63:0*/ t5, QData/*63:0*/ t6);
void Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__difftest_dut_csrs_TOP(QData/*63:0*/ mcycle_val, QData/*63:0*/ mstatus_val, QData/*63:0*/ mtvec_val, QData/*63:0*/ mepc_val, QData/*63:0*/ mcause_val, QData/*63:0*/ mie_val, QData/*63:0*/ mip_val, QData/*63:0*/ mscratch_val);
extern const VlWide<8>/*255:0*/ Vysyx_22040228__ConstPool__CONST_9e67c271_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_22040228__ConstPool__TABLE_0bdcfe05_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vysyx_22040228__ConstPool__TABLE_440d609d_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vysyx_22040228__ConstPool__TABLE_2039a795_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_22040228__ConstPool__TABLE_287fc343_0;

void Vysyx_22040228___024root___settle__TOP__4(Vysyx_22040228___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root___settle__TOP__4\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx4;
    CData/*3:0*/ __Vtableidx5;
    CData/*6:0*/ __Vtableidx6;
    CData/*4:0*/ __Vtableidx7;
    VlWide<4>/*127:0*/ __Vtemp982;
    VlWide<4>/*127:0*/ __Vtemp989;
    VlWide<4>/*127:0*/ __Vtemp992;
    VlWide<4>/*127:0*/ __Vtemp993;
    VlWide<4>/*127:0*/ __Vtemp996;
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__yushu = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__shang = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__yushu = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__shang = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__yushu 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish)
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign)
                    ? (1ULL + (~ (((QData)((IData)(
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U])))))
                    : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U]))))
                : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[2U]))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__shang 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish)
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign)
                    ? (1ULL + (~ (((QData)((IData)(
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U])))))
                    : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U]))))
                : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a[0U]))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__yushu 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish)
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign)
                    ? (1ULL + (~ (((QData)((IData)(
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U])))))
                    : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U]))))
                : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[2U]))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__shang 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish)
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign)
                    ? (1ULL + (~ (((QData)((IData)(
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U])))))
                    : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U]))))
                : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a[0U]))));
    }
    Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__difftest_dut_thepc_TOP(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__difftest_pc);
    Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__difftest_dut_regs_TOP(
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [1U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [2U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [3U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [4U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [5U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [6U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [7U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [8U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [9U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                                                [0x1fU]);
    vlSelf->out_write_ram_ena = (2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sigin_inst 
        = ((((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)) 
             | (0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
            | (0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
           | (0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)));
    vlSelf->out_serial_write_ = (2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state));
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state))) {
        vlSelf->out_write_ram_addr = vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_addr_reg;
        vlSelf->out_write_ram_data = vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_data_reg;
    } else {
        vlSelf->out_write_ram_addr = 0ULL;
        vlSelf->out_write_ram_data = 0ULL;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_inst = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_inst = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_inst 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_inst 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst;
    }
    if ((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata 
            = ((0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data
                : ((0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data))
                    : ((0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                        ? ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)))
                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)))
                        : ((0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data
                            : ((0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data
                                : ((0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data))
                                    : ((0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)))
                                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)))
                                        : 0ULL)))))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata 
            = ((0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data
                : ((0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))
                    : ((0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                        ? ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))
                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))
                        : ((0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data
                            : ((0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data
                                : ((0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))
                                    : ((0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))
                                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))
                                        : 0ULL)))))));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc3 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [7U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [7U][0U])))));
    vlSelf->out_serial_data_ = ((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state))
                                 ? vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_data_reg
                                 : 0ULL);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc3 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [0U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [0U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc3 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [1U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [1U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc3 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [2U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [2U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc3 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [3U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [3U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc3 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [4U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [4U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc3 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [5U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [5U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc3 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [6U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [6U][0U])))));
    vlSelf->ysyx_22040228__DOT__add_axi_r_data[0U] 
        = (IData)(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))
                    ? vlSelf->in_rtc_data_ : 0ULL));
    vlSelf->ysyx_22040228__DOT__add_axi_r_data[1U] 
        = (IData)((((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))
                     ? vlSelf->in_rtc_data_ : 0ULL) 
                   >> 0x20U));
    vlSelf->ysyx_22040228__DOT__add_axi_r_data[2U] 
        = (IData)(((3U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state))
                    ? vlSelf->ysyx_22040228__DOT__clint6__DOT__read_csrdata_temp
                    : 0ULL));
    vlSelf->ysyx_22040228__DOT__add_axi_r_data[3U] 
        = (IData)((((3U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state))
                     ? vlSelf->ysyx_22040228__DOT__clint6__DOT__read_csrdata_temp
                     : 0ULL) >> 0x20U));
    vlSelf->ysyx_22040228__DOT__add_axi_r_data[4U] 
        = (IData)(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))
                    ? vlSelf->read_data_sign_ : 0ULL));
    vlSelf->ysyx_22040228__DOT__add_axi_r_data[5U] 
        = (IData)((((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))
                     ? vlSelf->read_data_sign_ : 0ULL) 
                   >> 0x20U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__add_axi_b_valid = (
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state)) 
                                                    << 2U) 
                                                   | (((2U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state)) 
                                                       << 1U) 
                                                      | (2U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state))));
    vlSelf->ysyx_22040228__DOT__add_axi_r_last = ((
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)) 
                                                   << 2U) 
                                                  | (((3U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state)) 
                                                      << 1U) 
                                                     | (2U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))));
    vlSelf->ysyx_22040228__DOT__add_axi_r_valid = (
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)) 
                                                    << 2U) 
                                                   | (((3U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state)) 
                                                       << 1U) 
                                                      | (2U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))));
    vlSelf->ysyx_22040228__DOT__soc_axi_ar_ready = 
        ((0U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)) 
         | (1U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)));
    vlSelf->ysyx_22040228__DOT__io_axi_ar_ready = (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state)) 
                                                   | (1U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt 
        = (7U & ((((1U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                    [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                              >> 2U))]) + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 >> 1U))) 
                  + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                           [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                     >> 2U))] >> 2U))) 
                 + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                    >> 2U))] >> 3U))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw 
        = (7U & ((((1U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                    [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                              >> 2U))]) + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 >> 1U))) 
                  + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                           [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                     >> 2U))] >> 2U))) 
                 + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                    >> 2U))] >> 3U))));
    vlSelf->ysyx_22040228__DOT__t_axi_aw_id = (((2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                & (6U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                ? 1U
                                                : (
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                    ? 2U
                                                    : 0U));
    vlSelf->ysyx_22040228__DOT__t_axi_ar_id = (((5U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                & (6U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                ? 1U
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                    ? 2U
                                                    : 
                                                   (((4U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                     & (6U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                     ? 4U
                                                     : 0U)));
    vlSelf->ysyx_22040228__DOT__t_axi_ar_valid = ((
                                                   (5U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                  | (((6U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                      & (6U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                     | ((4U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                        & (6U 
                                                           == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))));
    vlSelf->ysyx_22040228__DOT__t_axi_aw_size = (((2U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                  ? 3U
                                                  : 
                                                 (((3U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                   ? 3U
                                                   : 0U));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_mask = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_data = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_mask 
            = ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                ? 0U : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                         ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                             ? 0xffU : ((IData)(vlSelf->rst)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                             >> 2U)))
                                                  ? 0xf0U
                                                  : 0xfU)))
                         : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                             ? ((IData)(vlSelf->rst)
                                 ? 0U : ((0U == (3U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                            >> 1U))))
                                          ? 3U : ((1U 
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
                                                    : 0xc0U))))
                             : ((IData)(vlSelf->rst)
                                 ? 0U : ((1U & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                        >> 2U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                            >> 1U)))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                  ? 0x80U
                                                  : 0x40U)
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                  ? 0x20U
                                                  : 0x10U))
                                          : ((1U & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                            >> 1U)))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                  ? 8U
                                                  : 4U)
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                  ? 2U
                                                  : 1U)))))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_data 
            = ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                           ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                               ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data
                               : ((IData)(vlSelf->rst)
                                   ? 0ULL : ((1U & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                            >> 2U)))
                                              ? ((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)) 
                                                 << 0x20U)
                                              : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))))
                           : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                               ? ((IData)(vlSelf->rst)
                                   ? 0ULL : ((0U == 
                                              (3U & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                             >> 1U))))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data))))
                                              : ((1U 
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
                                                   << 0x30U)))))
                               : ((IData)(vlSelf->rst)
                                   ? 0ULL : ((1U & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                            >> 2U)))
                                              ? ((1U 
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
                                              : ((1U 
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
                                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))))))))));
    }
    vlSelf->ysyx_22040228__DOT__t_axi_w_valid = (((2U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))));
    vlSelf->ysyx_22040228__DOT__t_axi_aw_valid = (1U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                      & (6U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                      ? 
                                                     (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__aw_enable))
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                       & (6U 
                                                          == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                      & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__aw_enable)))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data7 
        = ((- (QData)((IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                     [7U][2U] >> 3U))))) 
           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff
           [7U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data6 
        = ((- (QData)((IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                     [6U][2U] >> 3U))))) 
           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff
           [6U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data5 
        = ((- (QData)((IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                     [5U][2U] >> 3U))))) 
           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff
           [5U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data1 
        = ((- (QData)((IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                     [1U][2U] >> 3U))))) 
           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff
           [1U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data4 
        = ((- (QData)((IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                     [4U][2U] >> 3U))))) 
           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff
           [4U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data2 
        = ((- (QData)((IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                     [2U][2U] >> 3U))))) 
           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff
           [2U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data0 
        = ((- (QData)((IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                     [0U][2U] >> 3U))))) 
           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff
           [0U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data3 
        = ((- (QData)((IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                     [3U][2U] >> 3U))))) 
           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff
           [3U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6 
        = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
            [6U][2U] >> 3U) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff
           [6U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6 
        = ((- (IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                             [6U][2U] >> 3U)))) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff
           [6U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5 
        = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
            [5U][2U] >> 3U) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff
           [5U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5 
        = ((- (IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                             [5U][2U] >> 3U)))) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff
           [5U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4 
        = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
            [4U][2U] >> 3U) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff
           [4U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4 
        = ((- (IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                             [4U][2U] >> 3U)))) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff
           [4U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3 
        = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
            [3U][2U] >> 3U) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff
           [3U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0 
        = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
            [0U][2U] >> 3U) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff
           [0U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1 
        = ((- (IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                             [1U][2U] >> 3U)))) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff
           [1U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7 
        = ((- (IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                             [7U][2U] >> 3U)))) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff
           [7U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0 
        = ((- (IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                             [0U][2U] >> 3U)))) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff
           [0U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3 
        = ((- (IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                             [3U][2U] >> 3U)))) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff
           [3U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1 
        = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
            [1U][2U] >> 3U) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff
           [1U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2 
        = ((- (IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                             [2U][2U] >> 3U)))) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff
           [2U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2 
        = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
            [2U][2U] >> 3U) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff
           [2U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7 
        = ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
            [7U][2U] >> 3U) & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff
           [7U]);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__upper_imm 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                      >> 0x13U))))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data) 
                                         << 0xcU))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__shift_res 
        = (((0x3fU >= (0x7fU & ((IData)(0x40U) - (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))
             ? ((- (QData)((IData)((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                  >> 0x3fU)))))) 
                << (0x7fU & ((IData)(0x40U) - (0x3fU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))
             : 0ULL) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                        >> (0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data) 
           - (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data 
        = ((0xeU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
            ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit)
                ? (1ULL + (~ (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U])))))
                : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U]))))
            : ((0x1cU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit)
                    ? ((QData)((IData)(((IData)(1U) 
                                        + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])))) 
                       << 0x20U) : ((QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])) 
                                    << 0x20U)) : ((0x70U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit)
                                                    ? 
                                                   ((QData)((IData)(
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (~ 
                                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])))) 
                                                    << 0x20U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[1U])) 
                                                    << 0x20U))
                                                   : 
                                                  ((0xe0U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit)
                                                     ? 
                                                    ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U]))))
                                                      : 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U]))))))
                                                     : 
                                                    ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U])))
                                                      : (QData)((IData)(
                                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp[0U]))))
                                                    : 0ULL))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__upper_imm 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                      >> 0x13U))))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data) 
                                         << 0xcU))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__shift_res 
        = (((0x3fU >= (0x7fU & ((IData)(0x40U) - (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))
             ? ((- (QData)((IData)((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                  >> 0x3fU)))))) 
                << (0x7fU & ((IData)(0x40U) - (0x3fU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))
             : 0ULL) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                        >> (0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data) 
           - (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus 
        = ((((QData)((IData)(((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs)) 
                              << 0x1fU))) << 0x20U) 
            | ((QData)((IData)((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs) 
                                 << 2U) | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp)))) 
               << 0xbU)) | (QData)((IData)((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie) 
                                             << 7U) 
                                            | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie) 
                                               << 3U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx 
        = ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))
            ? (0xfffU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
            : 0U);
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                         >> 2U))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                         >> 2U))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                       >> 2U))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                       >> 2U))));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sllw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data) 
           << (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_srlw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data) 
           >> (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sraw_op2 
        = (((0x1fU >= (0x3fU & ((IData)(0x20U) - (0x1fU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))
             ? ((- (IData)((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                          >> 0x1fU))))) 
                << (0x3fU & ((IData)(0x20U) - (0x1fU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))
             : 0U) | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data) 
                      >> (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sllw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data) 
           << (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_srlw_op2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data) 
           >> (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sraw_op2 
        = (((0x1fU >= (0x3fU & ((IData)(0x20U) - (0x1fU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))
             ? ((- (IData)((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                          >> 0x1fU))))) 
                << (0x3fU & ((IData)(0x20U) - (0x1fU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))
             : 0U) | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data) 
                      >> (0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__dr_ready 
        = ((((((((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)) 
                 | (0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
                | (0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
               | (0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
              | (0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
             | (0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
            | (0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
           | (0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)));
    vlSelf->ysyx_22040228__DOT__rvcpu_we = (1U & ((~ (IData)(vlSelf->rst)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type)));
    vlSelf->ysyx_22040228__DOT__rvcpu_re = (1U & ((~ (IData)(vlSelf->rst)) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                     >> 1U)));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jal = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal 
            = (IData)((0x1bU == (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                          >> 2U))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jal 
            = (IData)((0x1bU == (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                          >> 2U))));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2 
        = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
           + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                   + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2 
        = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
           + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                   + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena 
        = ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip) 
             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)) 
            & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie)) 
           & (0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr 
            = (IData)((0x19U == (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                          >> 2U))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr 
            = (IData)((0x19U == (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                          >> 2U))));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter 
        = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff
           [0U] ? 0U : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff
                        [1U] ? 1U : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff
                                     [2U] ? 3U : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff
                                                  [3U]
                                                   ? 7U
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff
                                                   [4U]
                                                    ? 0xfU
                                                    : 
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff
                                                    [5U]
                                                     ? 0x1fU
                                                     : 
                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff
                                                     [6U]
                                                      ? 0x3fU
                                                      : 
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_jumpbuff
                                                      [7U]
                                                       ? 0x7fU
                                                       : 0U))))))));
    vlSelf->ysyx_22040228__DOT__rvcpu_data_addr = ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i 
        = (IData)((0x1007U == (0x707fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i 
        = (IData)((0x1007U == (0x707fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc1 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [7U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [7U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc2 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [7U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [7U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc1 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [0U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [0U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc2 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [0U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [0U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc1 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [1U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [1U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc2 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [1U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [1U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc1 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [2U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [2U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc2 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [2U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [2U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc1 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [3U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [3U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc2 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [3U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [3U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc1 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [4U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [4U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc2 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [4U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [4U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc1 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [5U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [5U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc2 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [5U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [5U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc1 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [6U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [6U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc2 
        = ((0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc 
              == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                   [6U][1U])) << 0x20U) 
                  | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                    [6U][0U])))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__should_stop 
        = ((~ (IData)(vlSelf->rst)) & ((0ULL != (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [6U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [6U][0U])))) 
                                       | (0ULL != (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [7U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [7U][0U]))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready 
        = (((((0xeU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)) 
              | (0x1cU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
             | (0x38U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
            | (0x70U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
           | (0xe0U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)));
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n = 2U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n = 2U;
            }
        } else {
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n = 1U;
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n = 1U;
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 1U;
            } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 1U;
            } else if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 4U;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 4U;
                }
            } else if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 3U;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 2U;
            }
        } else {
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 1U;
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = 1U;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena 
            = (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_));
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr = 1U;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr = 0U;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena 
            = (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_));
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw = 1U;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw = 0U;
    }
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U] 
                    = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_data);
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U] 
                    = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_i_data 
                               >> 0x20U));
            }
        } else if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U] 
                    = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_data);
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U] 
                    = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_i_data 
                               >> 0x20U));
            }
        }
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U] 
                            = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_i_data 
                                       >> 0x20U));
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_data);
                }
            } else if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U] 
                    = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_i_data 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U] 
                    = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_data);
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U] = 0U;
    }
    if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if (vlSelf->ysyx_22040228__DOT__rvcpu_empty) {
            if (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                  == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                           >> 0xaU)))) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r))) {
                if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)(((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                }
            } else if (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                         == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                  >> 0xaU)))) 
                        & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))) {
                if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)(((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)(((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                   >> 0x20U));
                }
                if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                   >> 0x20U));
                }
            }
        }
    }
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U != (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
                if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                    if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r) {
                        if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r) {
                            if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                    >> 4U)))] 
                                 >= vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                    >> 4U)))])) {
                                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o = 1U;
                            }
                        }
                    } else {
                        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o = 1U;
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o = 0U;
    }
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U != (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
                if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                    if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r) {
                        if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r) {
                            if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                    >> 4U)))] 
                                 < vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                    >> 4U)))])) {
                                if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))] 
                                     < vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))])) {
                                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t = 1U;
                                }
                            }
                        } else {
                            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t = 1U;
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t = 0U;
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                        if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r) {
                            if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r) {
                                if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))] 
                                     < vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))])) {
                                    if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                            >> 4U)))] 
                                         < vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                            >> 4U)))])) {
                                        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t = 1U;
                                    }
                                }
                            } else {
                                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t = 0U;
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                        if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r) {
                            if (vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r) {
                                if ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))] 
                                     >= vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                        >> 4U)))])) {
                                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o = 1U;
                                }
                            }
                        } else {
                            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o = 1U;
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o = 0U;
    }
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U != (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
                if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_i_ok = 1U;
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_i_ok = 0U;
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    if (vlSelf->ysyx_22040228__DOT__arbitrate_i_ok) {
                        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_m_ok = 1U;
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_m_ok = 0U;
    }
    if ((1U & (~ ((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_ok 
            = ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
               & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)));
    }
    if ((1U & (~ ((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_ok 
            = ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
               & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)));
    }
    vlSelf->ysyx_22040228__DOT__i_cache_inst_valid 
        = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
           & ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
              & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_empty) 
                 & (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                      == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                               >> 0xaU)))) 
                     & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                    | ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                        == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                 >> 0xaU)))) 
                       & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))))));
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena = 1U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena 
                = (1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)));
        }
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena 
                        = (1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)));
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena = 1U;
            }
        }
    }
    if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_miss_addr 
                    = (0xfffffffffffffff0ULL & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
            }
        } else if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl))) {
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_miss_addr 
                = ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)
                    ? 0ULL : (8ULL | (0xfffffffffffffff0ULL 
                                      & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)));
        }
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh)))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr 
                        = ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)
                            ? 0ULL : (0xcULL | (0xfffffffffffffff0ULL 
                                                & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)));
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr 
                        = (8ULL | (0xfffffffffffffff0ULL 
                                   & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
                }
            } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr 
                    = (4ULL | (0xfffffffffffffff0ULL 
                               & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok)))) {
                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr 
                    = (0xfffffffffffffff0ULL & vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr);
            }
        }
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_type = 2U;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_type = 0U;
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_type = 8U;
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_type = 0U;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[1U] 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena)
            ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr)
            : 0U);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[2U] 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena)
            ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr)
            : 0U);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_finish_sign 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid) 
           & (~ (IData)((0U != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_finish_sign 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid) 
           & (~ (IData)((0U != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler))));
    if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        if (vlSelf->ysyx_22040228__DOT__rvcpu_empty) {
            if (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                  == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                           >> 0xaU)))) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r))) {
                if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[0U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[1U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[2U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U];
                }
                if ((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[1U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[2U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U];
                }
                if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[2U]))));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[2U]))) 
                                   >> 0x20U));
                }
                if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo[3U];
                }
            } else if (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                         == (0x3fffffU & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                  >> 0xaU)))) 
                        & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))) {
                if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[0U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[1U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[2U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U];
                }
                if ((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[1U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[2U];
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U];
                }
                if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[2U]))));
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[2U]))) 
                                   >> 0x20U));
                }
                if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter))) {
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] = 0U;
                    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] 
                        = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt[3U];
                }
            }
        } else {
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U] = 0U;
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U] = 0U;
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U] = 0U;
            vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U] = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_success 
                = (1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk)));
        }
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sigin_inst 
        = ((((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
             | (0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
            | (0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
           | (0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)));
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_success 
        = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request;
    if ((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata 
            = ((0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data
                : ((0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))
                    : ((0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                        ? ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)))
                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)))
                        : ((0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data
                            : ((0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data
                                : ((0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))
                                    : ((0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)))
                                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)))
                                        : 0ULL)))))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata 
            = ((0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data
                : ((0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
                    : ((0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                        ? ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))
                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))
                        : ((0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data
                            : ((0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data
                                : ((0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
                                    : ((0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))
                                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))
                                        : 0ULL)))))));
    }
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i 
        = (0x3fU & ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                     ? (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__fence_counter)
                     : (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                >> 4U))));
    if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))) {
        if ((1U & (~ ((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
                      & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                      [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                          & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                          [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])))) {
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid1 = 1U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk)))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid1 = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))))) {
        if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))) {
            if ((1U & (~ ((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
                          & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                          [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                              & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                              [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])))) {
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid2 = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk)))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid2 = 0U;
        }
    }
    if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r)) 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter) 
                                                 << 3U)))));
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out = 0ULL;
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r)) 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter) 
                                                 << 3U)))));
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out = 0ULL;
        }
    }
    if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[0U])));
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out = 0ULL;
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[2U])));
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out = 0ULL;
        }
    }
    if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
         & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out = 1U;
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out = 0U;
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))) {
        if (((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)) 
             & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
             [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out = 1U;
        } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                    & vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter))])) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out = 0U;
        }
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data 
        = ((0xeU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
            ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit)
                ? (1ULL + (~ (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U])))))
                : (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U]))))
            : ((0x1cU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit)
                    ? ((QData)((IData)(((IData)(1U) 
                                        + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])))) 
                       << 0x20U) : ((QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])) 
                                    << 0x20U)) : ((0x70U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit)
                                                    ? 
                                                   ((QData)((IData)(
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (~ 
                                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])))) 
                                                    << 0x20U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[1U])) 
                                                    << 0x20U))
                                                   : 
                                                  ((0xe0U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit)
                                                     ? 
                                                    ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U]))))
                                                      : 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U]))))))
                                                     : 
                                                    ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U])))
                                                      : (QData)((IData)(
                                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp[0U]))))
                                                    : 0ULL))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready 
        = (((((0xeU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
              | (0x1cU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
             | (0x38U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
            | (0x70U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
           | (0xe0U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__dr_ready 
        = ((((((((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                 | (0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
                | (0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
               | (0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
              | (0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
             | (0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
            | (0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
           | (0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data 
        = (((((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)) 
              | (0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
             | (0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
            | (0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)))
            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__shang
            : (((((0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)) 
                  | (0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
                 | (0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))) 
                | (0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode)))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__yushu
                : 0ULL));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data 
        = (((((0x86U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
              | (0x1aU == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
             | (0x25U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
            | (0x51U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))
            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__shang
            : (((((0xc1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                  | (0x85U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
                 | (0x43U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) 
                | (0x13U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__yushu
                : 0ULL));
    vlSelf->ysyx_22040228__DOT__add_axi_ar_ready = 
        (2U | (((IData)(vlSelf->ysyx_22040228__DOT__soc_axi_ar_ready) 
                << 2U) | (IData)(vlSelf->ysyx_22040228__DOT__io_axi_ar_ready)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1 
        = (1U & ((8U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                  [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                            >> 2U))]) ? ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                          [(0xfU & 
                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                             >> 2U))])
                                          ? ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))
                                              : ((~ 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))]) 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt))))
                                          : ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))
                                              : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))))
                  : ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                      [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                >> 2U))]) ? ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))
                                              : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt))))
                      : ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                    >> 2U))]) ? ((~ 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                      >> 2U))]) 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))
                          : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                       >> 2U))] & (2U 
                                                   < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt)))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2 
        = (1U & ((8U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                  [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                            >> 2U))]) ? ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                          [(0xfU & 
                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                             >> 2U))])
                                          ? ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))
                                              : ((~ 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))]) 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw))))
                                          : ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))
                                              : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))))
                  : ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                      [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                >> 2U))]) ? ((2U & 
                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [(0xfU 
                                                & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                   >> 2U))])
                                              ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))
                                              : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                 [(0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))] 
                                                 | (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw))))
                      : ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                    >> 2U))]) ? ((~ 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                      >> 2U))]) 
                                                 & (2U 
                                                    < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))
                          : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [(0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                       >> 2U))] & (2U 
                                                   < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw)))))));
    if ((1U & ((IData)(vlSelf->rst) | (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type))))) {
        vlSelf->ysyx_22040228__DOT__rvcpu_wmask = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu_data_o = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu_wmask = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_mask;
        vlSelf->ysyx_22040228__DOT__rvcpu_data_o = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_data;
    }
    Vysyx_22040228___024root____Vdpiimwrap_ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__difftest_dut_csrs_TOP(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus, 
                                                                                (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base 
                                                                                << 2U), vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause, 
                                                                                ((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie)) 
                                                                                << 7U), (QData)((IData)(
                                                                                ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip) 
                                                                                << 7U))), vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sllw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sllw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sllw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__srlw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_srlw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_srlw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sraw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sraw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sraw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sllw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sllw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sllw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__srlw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_srlw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_srlw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sraw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sraw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sraw_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_ls_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_ls_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_ena) 
           & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena)));
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value = 0ULL;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                      | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                          | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                              | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value = 0xbULL;
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value = 0ULL;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value = 0x8000000000000007ULL;
    }
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en = 0U;
        if (((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
             | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en = 1U;
        } else if (((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en 
                = (0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data);
        } else if (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en 
                = (0ULL != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data);
        } else if ((0x10U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
            if ((0x20U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en = 0U;
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en = 0U;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en = 0U;
    }
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 0U;
        if (((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
             | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en 
                = (0U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr));
        } else if (((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 1U;
        } else if (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 1U;
        } else if ((0x10U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
            if ((0x20U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 0U;
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 0U;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = 0U;
    }
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                      | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                          | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                              | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                    if ((0x10U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena 
                            = (0x20U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode));
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena = 0U;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena = 0U;
    }
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                      | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                          | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                              | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena = 1U;
                    } else if ((0x20U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena = 0U;
                    }
                }
            }
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena = 0U;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena = 0U;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jump 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jal) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jump 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc7 
        = ((((0ULL != (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                        [7U][1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [7U][0U])))) 
             & (~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                   >> 7U))) & ((((((((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [7U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [7U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [6U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [6U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [6U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [6U][0U]))))) 
                                     | ((0ULL == (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [6U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [6U][0U])))) 
                                        | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                           >> 6U))) 
                                    & ((((((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [7U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [7U][0U]))) 
                                         < (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [5U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [5U][0U])))) 
                                        & (0ULL != 
                                           (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [5U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [5U][0U]))))) 
                                       | ((0ULL == 
                                           (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [5U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [5U][0U])))) 
                                          | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                             >> 5U)))) 
                                   & ((((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [7U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [7U][0U]))) 
                                        < (((QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [4U][1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [4U][0U])))) 
                                       & (0ULL != (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [4U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [4U][0U]))))) 
                                      | ((0ULL == (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [4U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [4U][0U])))) 
                                         | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                            >> 4U)))) 
                                  & ((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [7U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [7U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [3U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [3U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [3U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [3U][0U]))))) 
                                     | ((0ULL == (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [3U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [3U][0U])))) 
                                        | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                           >> 3U)))) 
                                 & ((((((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [7U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [7U][0U]))) 
                                      < (((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [2U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [2U][0U])))) 
                                     & (0ULL != (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [2U][0U]))))) 
                                    | ((0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [2U][0U])))) 
                                       | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                          >> 2U)))) 
                                & ((((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [7U][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][0U]))) 
                                     < (((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [1U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [1U][0U])))) 
                                    & (0ULL != (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U]))))) 
                                   | ((0ULL == (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U])))) 
                                      | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                         >> 1U)))) 
                               & ((((((QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                      [7U][1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [7U][0U]))) 
                                    < (((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [0U][0U])))) 
                                   & (0ULL != (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U]))))) 
                                  | ((0ULL == (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U])))) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter))))) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
              [7U][2U] >> 3U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc6 
        = ((((0ULL != (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                        [6U][1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [6U][0U])))) 
             & (~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                   >> 6U))) & ((((((((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [6U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [6U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [7U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [7U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [7U][0U]))))) 
                                     | (0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [7U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][0U]))))) 
                                    & ((((((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [6U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [6U][0U]))) 
                                         < (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [5U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [5U][0U])))) 
                                        & (0ULL != 
                                           (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [5U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [5U][0U]))))) 
                                       | ((0ULL == 
                                           (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [5U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [5U][0U])))) 
                                          | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                             >> 5U)))) 
                                   & ((((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [6U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [6U][0U]))) 
                                        < (((QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [4U][1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [4U][0U])))) 
                                       & (0ULL != (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [4U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [4U][0U]))))) 
                                      | ((0ULL == (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [4U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [4U][0U])))) 
                                         | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                            >> 4U)))) 
                                  & ((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [6U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [6U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [3U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [3U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [3U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [3U][0U]))))) 
                                     | ((0ULL == (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [3U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [3U][0U])))) 
                                        | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                           >> 3U)))) 
                                 & ((((((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [6U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [6U][0U]))) 
                                      < (((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [2U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [2U][0U])))) 
                                     & (0ULL != (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [2U][0U]))))) 
                                    | ((0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [2U][0U])))) 
                                       | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                          >> 2U)))) 
                                & ((((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [6U][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [6U][0U]))) 
                                     < (((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [1U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [1U][0U])))) 
                                    & (0ULL != (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U]))))) 
                                   | ((0ULL == (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U])))) 
                                      | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                         >> 1U)))) 
                               & ((((((QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                      [6U][1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [6U][0U]))) 
                                    < (((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [0U][0U])))) 
                                   & (0ULL != (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U]))))) 
                                  | ((0ULL == (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U])))) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter))))) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
              [6U][2U] >> 3U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc5 
        = ((((0ULL != (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                        [5U][1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [5U][0U])))) 
             & (~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                   >> 5U))) & ((((((((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [5U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [5U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [7U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [7U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [7U][0U]))))) 
                                     | (0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [7U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][0U]))))) 
                                    & ((((((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [5U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [5U][0U]))) 
                                         < (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [6U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [6U][0U])))) 
                                        & (0ULL != 
                                           (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [6U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [6U][0U]))))) 
                                       | (0ULL == (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [6U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [6U][0U])))))) 
                                   & ((((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [5U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [5U][0U]))) 
                                        < (((QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [4U][1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [4U][0U])))) 
                                       & (0ULL != (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [4U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [4U][0U]))))) 
                                      | ((0ULL == (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [4U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [4U][0U])))) 
                                         | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                            >> 4U)))) 
                                  & ((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [5U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [5U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [3U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [3U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [3U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [3U][0U]))))) 
                                     | ((0ULL == (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [3U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [3U][0U])))) 
                                        | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                           >> 3U)))) 
                                 & ((((((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [5U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [5U][0U]))) 
                                      < (((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [2U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [2U][0U])))) 
                                     & (0ULL != (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [2U][0U]))))) 
                                    | ((0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [2U][0U])))) 
                                       | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                          >> 2U)))) 
                                & ((((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [5U][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [5U][0U]))) 
                                     < (((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [1U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [1U][0U])))) 
                                    & (0ULL != (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U]))))) 
                                   | ((0ULL == (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U])))) 
                                      | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                         >> 1U)))) 
                               & ((((((QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                      [5U][1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [5U][0U]))) 
                                    < (((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [0U][0U])))) 
                                   & (0ULL != (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U]))))) 
                                  | ((0ULL == (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U])))) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter))))) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
              [5U][2U] >> 3U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc4 
        = ((((0ULL != (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                        [4U][1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [4U][0U])))) 
             & (~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                   >> 4U))) & ((((((((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [4U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [4U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [7U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [7U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [7U][0U]))))) 
                                     | (0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [7U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][0U]))))) 
                                    & ((((((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [4U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [4U][0U]))) 
                                         < (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [6U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [6U][0U])))) 
                                        & (0ULL != 
                                           (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [6U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [6U][0U]))))) 
                                       | (0ULL == (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [6U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [6U][0U])))))) 
                                   & ((((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [4U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [4U][0U]))) 
                                        < (((QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [5U][1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [5U][0U])))) 
                                       & (0ULL != (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [5U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [5U][0U]))))) 
                                      | (0ULL == (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [5U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [5U][0U])))))) 
                                  & ((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [4U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [4U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [3U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [3U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [3U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [3U][0U]))))) 
                                     | ((0ULL == (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [3U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [3U][0U])))) 
                                        | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                           >> 3U)))) 
                                 & ((((((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [4U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [4U][0U]))) 
                                      < (((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [2U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [2U][0U])))) 
                                     & (0ULL != (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [2U][0U]))))) 
                                    | ((0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [2U][0U])))) 
                                       | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                          >> 2U)))) 
                                & ((((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [4U][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [4U][0U]))) 
                                     < (((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [1U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [1U][0U])))) 
                                    & (0ULL != (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U]))))) 
                                   | ((0ULL == (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U])))) 
                                      | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                         >> 1U)))) 
                               & ((((((QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                      [4U][1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [4U][0U]))) 
                                    < (((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [0U][0U])))) 
                                   & (0ULL != (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U]))))) 
                                  | ((0ULL == (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U])))) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter))))) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
              [4U][2U] >> 3U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc3 
        = ((((0ULL != (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                        [3U][1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [3U][0U])))) 
             & (~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                   >> 3U))) & ((((((((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [3U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [3U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [7U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [7U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [7U][0U]))))) 
                                     | (0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [7U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][0U]))))) 
                                    & ((((((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [3U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [3U][0U]))) 
                                         < (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [6U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [6U][0U])))) 
                                        & (0ULL != 
                                           (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [6U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [6U][0U]))))) 
                                       | (0ULL == (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [6U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [6U][0U])))))) 
                                   & ((((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [3U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [3U][0U]))) 
                                        < (((QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [5U][1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [5U][0U])))) 
                                       & (0ULL != (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [5U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [5U][0U]))))) 
                                      | (0ULL == (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [5U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [5U][0U])))))) 
                                  & ((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [3U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [3U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [4U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [4U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [4U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [4U][0U]))))) 
                                     | (0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [4U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [4U][0U])))))) 
                                 & ((((((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [3U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [3U][0U]))) 
                                      < (((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [2U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [2U][0U])))) 
                                     & (0ULL != (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [2U][0U]))))) 
                                    | ((0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [2U][0U])))) 
                                       | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                          >> 2U)))) 
                                & ((((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [3U][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [3U][0U]))) 
                                     < (((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [1U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [1U][0U])))) 
                                    & (0ULL != (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U]))))) 
                                   | ((0ULL == (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U])))) 
                                      | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                         >> 1U)))) 
                               & ((((((QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                      [3U][1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [3U][0U]))) 
                                    < (((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [0U][0U])))) 
                                   & (0ULL != (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U]))))) 
                                  | ((0ULL == (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U])))) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter))))) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
              [3U][2U] >> 3U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc2 
        = ((((0ULL != (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                        [2U][1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [2U][0U])))) 
             & (~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                   >> 2U))) & ((((((((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [2U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [2U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [7U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [7U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [7U][0U]))))) 
                                     | (0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [7U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][0U]))))) 
                                    & ((((((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [2U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [2U][0U]))) 
                                         < (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [6U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [6U][0U])))) 
                                        & (0ULL != 
                                           (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [6U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [6U][0U]))))) 
                                       | (0ULL == (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [6U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [6U][0U])))))) 
                                   & ((((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [2U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [2U][0U]))) 
                                        < (((QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [5U][1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [5U][0U])))) 
                                       & (0ULL != (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [5U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [5U][0U]))))) 
                                      | (0ULL == (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [5U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [5U][0U])))))) 
                                  & ((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [2U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [2U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [4U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [4U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [4U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [4U][0U]))))) 
                                     | (0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [4U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [4U][0U])))))) 
                                 & ((((((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [2U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [2U][0U]))) 
                                      < (((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [3U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [3U][0U])))) 
                                     & (0ULL != (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [3U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [3U][0U]))))) 
                                    | (0ULL == (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [3U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [3U][0U])))))) 
                                & ((((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [2U][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [2U][0U]))) 
                                     < (((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [1U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [1U][0U])))) 
                                    & (0ULL != (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U]))))) 
                                   | ((0ULL == (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [1U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U])))) 
                                      | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                                         >> 1U)))) 
                               & ((((((QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                      [2U][1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][0U]))) 
                                    < (((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [0U][0U])))) 
                                   & (0ULL != (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U]))))) 
                                  | ((0ULL == (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U])))) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter))))) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
              [2U][2U] >> 3U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc1 
        = ((((0ULL != (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                        [1U][1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [1U][0U])))) 
             & (~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter) 
                   >> 1U))) & ((((((((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [1U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [1U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [7U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [7U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [7U][0U]))))) 
                                     | (0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [7U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [7U][0U]))))) 
                                    & ((((((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [1U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [1U][0U]))) 
                                         < (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [6U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [6U][0U])))) 
                                        & (0ULL != 
                                           (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [6U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [6U][0U]))))) 
                                       | (0ULL == (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [6U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [6U][0U])))))) 
                                   & ((((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [1U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [1U][0U]))) 
                                        < (((QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [5U][1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [5U][0U])))) 
                                       & (0ULL != (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [5U][1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                     [5U][0U]))))) 
                                      | (0ULL == (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [5U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [5U][0U])))))) 
                                  & ((((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [1U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [1U][0U]))) 
                                       < (((QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [4U][1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [4U][0U])))) 
                                      & (0ULL != (((QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [4U][1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [4U][0U]))))) 
                                     | (0ULL == (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [4U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [4U][0U])))))) 
                                 & ((((((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [1U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [1U][0U]))) 
                                      < (((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [3U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [3U][0U])))) 
                                     & (0ULL != (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [3U][1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [3U][0U]))))) 
                                    | (0ULL == (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [3U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [3U][0U])))))) 
                                & ((((((QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [1U][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                   [1U][0U]))) 
                                     < (((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [2U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                          [2U][0U])))) 
                                    & (0ULL != (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [2U][1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [2U][0U]))))) 
                                   | (0ULL == (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [2U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [2U][0U])))))) 
                               & ((((((QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                      [1U][1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                  [1U][0U]))) 
                                    < (((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [0U][1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                    [0U][0U])))) 
                                   & (0ULL != (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U]))))) 
                                  | ((0ULL == (((QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [0U][1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [0U][0U])))) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter))))) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
              [1U][2U] >> 3U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc0 
        = ((((0ULL != (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                        [0U][1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [0U][0U])))) 
             & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__jump_counter))) 
            & ((((((((((((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                         [0U][1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                     [0U][0U]))) 
                       < (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                           [7U][1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [7U][0U])))) 
                      & (0ULL != (((QData)((IData)(
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                   [7U][1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                               [7U][0U]))))) 
                     | (0ULL == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                  [7U][1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [7U][0U]))))) 
                    & ((((((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                           [0U][1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [0U][0U]))) 
                         < (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                             [6U][1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                         [6U][0U])))) 
                        & (0ULL != (((QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                     [6U][1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                 [6U][0U]))))) 
                       | (0ULL == (((QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [6U][1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [6U][0U])))))) 
                   & ((((((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                          [0U][1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                      [0U][0U]))) 
                        < (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                            [5U][1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                        [5U][0U])))) 
                       & (0ULL != (((QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [5U][1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                                [5U][0U]))))) 
                      | (0ULL == (((QData)((IData)(
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                   [5U][1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                               [5U][0U])))))) 
                  & ((((((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                         [0U][1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                     [0U][0U]))) 
                       < (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                           [4U][1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [4U][0U])))) 
                      & (0ULL != (((QData)((IData)(
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                   [4U][1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                               [4U][0U]))))) 
                     | (0ULL == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                  [4U][1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [4U][0U])))))) 
                 & ((((((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                        [0U][1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [0U][0U]))) 
                      < (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                          [3U][1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                      [3U][0U])))) 
                     & (0ULL != (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                  [3U][1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                              [3U][0U]))))) 
                    | (0ULL == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                 [3U][1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [3U][0U])))))) 
                & ((((((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                       [0U][1U])) << 0x20U) 
                      | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                        [0U][0U]))) 
                     < (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                         [2U][1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                     [2U][0U])))) 
                    & (0ULL != (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                 [2U][1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                             [2U][0U]))))) 
                   | (0ULL == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                [2U][1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [2U][0U])))))) 
               & ((((((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                      [0U][1U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                       [0U][0U]))) 
                    < (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                        [1U][1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [1U][0U])))) 
                   & (0ULL != (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                [1U][1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                            [1U][0U]))))) 
                  | (0ULL == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                               [1U][1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                           [1U][0U]))))))) 
           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
              [0U][2U] >> 3U));
    vlSelf->ysyx_22040228__DOT__mmio_thing = ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_we) 
                                                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_re)) 
                                               & ((0xa00003f8ULL 
                                                   <= vlSelf->ysyx_22040228__DOT__rvcpu_data_addr) 
                                                  & (0xa00003ffULL 
                                                     >= vlSelf->ysyx_22040228__DOT__rvcpu_data_addr)))
                                               ? 1U
                                               : 4U);
    vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache 
        = ((0xa00003f8ULL <= vlSelf->ysyx_22040228__DOT__rvcpu_data_addr) 
           & (0xa00003ffULL >= vlSelf->ysyx_22040228__DOT__rvcpu_data_addr));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type 
        = ((((IData)(vlSelf->rst) ? 0U : (1U & ((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                     >> 2U))) 
                                                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i)))) 
            << 7U) | ((((IData)(vlSelf->rst) ? 0U : (IData)(
                                                            (0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                                 >> 2U))))) 
                       << 6U) | ((((IData)(vlSelf->rst)
                                    ? 0U : (IData)(
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                        >> 2U))))) 
                                  << 5U) | ((((IData)(vlSelf->rst)
                                               ? 0U
                                               : (IData)(
                                                         (4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                              >> 2U))))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                                 >> 2U))))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : (IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                                    >> 2U))))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->rst)
                                                        ? 0U
                                                        : (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->rst)
                                                         ? 0U
                                                         : (IData)(
                                                                   (8U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                                        >> 2U))))))))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type 
        = ((((IData)(vlSelf->rst) ? 0U : (1U & ((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                     >> 2U))) 
                                                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i)))) 
            << 7U) | ((((IData)(vlSelf->rst) ? 0U : (IData)(
                                                            (0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                                 >> 2U))))) 
                       << 6U) | ((((IData)(vlSelf->rst)
                                    ? 0U : (IData)(
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                        >> 2U))))) 
                                  << 5U) | ((((IData)(vlSelf->rst)
                                               ? 0U
                                               : (IData)(
                                                         (4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                              >> 2U))))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                                 >> 2U))))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : (IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                                    >> 2U))))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->rst)
                                                        ? 0U
                                                        : (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->rst)
                                                         ? 0U
                                                         : (IData)(
                                                                   (8U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                                        >> 2U))))))))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc1) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc2)) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc3));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc1) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc2)) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc3));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc1) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc2)) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc3));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc1) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc2)) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc3));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc1) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc2)) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc3));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc1) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc2)) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc3));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc1) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc2)) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc3));
    if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        vlSelf->ysyx_22040228__DOT__i_cache_pc[0U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[1U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[2U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[3U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[4U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[5U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[6U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[7U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U];
    } else {
        vlSelf->ysyx_22040228__DOT__i_cache_pc[0U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[1U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[2U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[3U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[4U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[5U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[6U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->ysyx_22040228__DOT__i_cache_pc[7U] 
            = Vysyx_22040228__ConstPool__CONST_9e67c271_0[7U];
    }
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_ena_i 
        = ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
           | (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
              | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))));
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_ena_i 
        = ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
           | (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
              | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))));
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__icache_if_shankhand 
        = (1U & ((~ (IData)(vlSelf->rst)) & (~ (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid))));
    vlSelf->ysyx_22040228__DOT__i_cache_addr = ((2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                                 ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_miss_addr
                                                 : 
                                                ((8U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                                  ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr
                                                  : 0ULL));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req 
        = (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish)) 
            & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__dr_ready)) 
           | ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_finish_sign)) 
              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready)));
    if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[0U];
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[1U];
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[2U];
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
            = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_[3U];
    } else {
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] = 0U;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req 
        = (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish)) 
            & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__dr_ready)) 
           | ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_finish_sign)) 
              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready)));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__exe_res = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__exe_res = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__exe_res 
            = ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                ? ((0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                    ? ((0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data)))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data
                                                    : 
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                    << 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                             ? 0ULL
                                             : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__srlw_res))))
                            : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                   + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__upper_imm))))
                                : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data)
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data
                                            : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__srlw_res))
                                    : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                   + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__upper_imm)
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))))))))))
                : ((0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                    ? ((0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                             ? 0ULL
                                             : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data))))
                            : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                             ? 0ULL
                                             : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_addw_op2)))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                             ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data
                                             : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                ^ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))
                            : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sraw_res)))
                                : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                   & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))
                                    : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data
                                            : (4ULL 
                                               + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? 0ULL : 
                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                            << (0x3fU 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data)))
                                : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2))))
                            : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                           ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))
                                           : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                   | vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2)))
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                   & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                            ? ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data))
                                    : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data)
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_addw_op2)))
                                : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sllw_res)
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__shift_res
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                   | vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))
                            : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data)
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? 0ULL : (QData)((IData)(
                                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                                      < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))))
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sllw_res
                                            : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                               ^ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))))
                                : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                    ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data
                                            : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sraw_res)
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_ls_op2))
                                            : (QData)((IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                               < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)))))
                                    : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__shift_res
                                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_ls_op2)))
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2
                                            : 0ULL))))))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__exe_res 
            = ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                ? ((0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                    ? ((0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data)))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data
                                                    : 
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                    << 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                             ? 0ULL
                                             : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__srlw_res))))
                            : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                   + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__upper_imm))))
                                : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data)
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data
                                            : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__srlw_res))
                                    : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                   + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__upper_imm)
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))))))))))
                : ((0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                    ? ((0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                             ? 0ULL
                                             : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data))))
                            : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                             ? 0ULL
                                             : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_addw_op2)))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                             ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data
                                             : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                ^ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))
                            : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sraw_res)))
                                : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                   & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))
                                    : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data
                                            : (4ULL 
                                               + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? 0ULL : 
                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                            << (0x3fU 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data)))
                                : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2))))
                            : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                           ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))
                                           : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                   | vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2)))
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                   & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                            ? ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data))
                                    : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data)
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_addw_op2)))
                                : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sllw_res)
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__shift_res
                                                   : 
                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                   | vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))
                            : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data)
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? 0ULL : (QData)((IData)(
                                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                                      < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))))
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sllw_res
                                            : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                               ^ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))))
                                : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                    ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data
                                            : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sraw_res)
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_ls_op2))
                                            : (QData)((IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                               < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)))))
                                    : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                        ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__shift_res
                                            : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_ls_op2)))
                                        : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2
                                            : 0ULL))))))));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[0U] 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena)
            ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr)
            : 0U);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause 
        = ((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus 
        = ((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
        = ((((((((((- (QData)((IData)(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en) 
                                       & (0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)))))) 
                   & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle) 
                  | ((- (QData)((IData)(((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))))) 
                     & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus)) 
                 | ((- (QData)((IData)(((((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))))) 
                    & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base 
                       << 2U))) | ((- (QData)((IData)(
                                                      (((0x341U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena))))) 
                                   & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc)) 
               | ((- (QData)((IData)(((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))))) 
                  & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause)) 
              | ((- (QData)((IData)(((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))))) 
                 & ((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie)) 
                    << 7U))) | ((- (QData)((IData)(
                                                   ((0x344U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))))) 
                                & (QData)((IData)(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip) 
                                                   << 7U))))) 
            | ((- (QData)((IData)(((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))))) 
               & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch)) 
           | (0x43593231ULL & (- (QData)((IData)(((0xf11U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__clean_submcont 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc7)
                                         ? 0x80U : 
                                        ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc6)
                                          ? 0x40U : 
                                         ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc5)
                                           ? 0x20U : 
                                          ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc4)
                                            ? 0x10U
                                            : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc3)
                                                ? 8U
                                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc2)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc1)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc0)
                                                      ? 1U
                                                      : 0U)))))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__diff_ena 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc7) 
                                       | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc6) 
                                          | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc5) 
                                             | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc4) 
                                                | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc3) 
                                                   | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc2) 
                                                      | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc1) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc0)))))))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_qos = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_prot = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_cache = 0U;
        vlSelf->ysyx_22040228__DOT__t_axi_r_data = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready[0U] 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc7)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
               [7U][0U] : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc6)
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                           [6U][0U] : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc5)
                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                       [5U][0U] : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc4)
                                                    ? 
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                   [4U][0U]
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc3)
                                                     ? 
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [3U][0U]
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc2)
                                                      ? 
                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                     [2U][0U]
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc1)
                                                       ? 
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                      [1U][0U]
                                                       : 
                                                      ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc0)
                                                        ? 
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [0U][0U]
                                                        : 0U))))))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready[1U] 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc7)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
               [7U][1U] : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc6)
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                           [6U][1U] : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc5)
                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                       [5U][1U] : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc4)
                                                    ? 
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                   [4U][1U]
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc3)
                                                     ? 
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [3U][1U]
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc2)
                                                      ? 
                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                     [2U][1U]
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc1)
                                                       ? 
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                      [1U][1U]
                                                       : 
                                                      ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc0)
                                                        ? 
                                                       vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                       [0U][1U]
                                                        : 0U))))))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready[2U] 
            = (7U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc7)
                      ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                     [7U][2U] : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc6)
                                  ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                 [6U][2U] : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc5)
                                              ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                             [5U][2U]
                                              : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc4)
                                                  ? 
                                                 vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                 [4U][2U]
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc3)
                                                   ? 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                  [3U][2U]
                                                   : 
                                                  ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc2)
                                                    ? 
                                                   vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                   [2U][2U]
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc1)
                                                     ? 
                                                    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                    [1U][2U]
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc0)
                                                      ? 
                                                     vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff
                                                     [0U][2U]
                                                      : 0U)))))))));
        vlSelf->ysyx_22040228__DOT__add_axi_ar_qos 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (0xff0U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (0xf0fU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos))
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (0xffU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos))
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_ar_prot 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (0x1f8U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (0x1c7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot))
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot))
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_ar_cache 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (2U | (0xff0U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache)))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (0x20U | (0xf0fU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache)))
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (0x200U | (0xffU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache)))
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__t_axi_r_data = 
            ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
              ? (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_data[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_data[0U])))
              : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                  ? (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_data[3U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_data[2U])))
                  : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                      ? (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_data[5U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__add_axi_r_data[4U])))
                      : 0ULL)));
    }
    vlSelf->ysyx_22040228__DOT__t_axi_b_valid = (1U 
                                                 & ((~ (IData)(vlSelf->rst)) 
                                                    & ((1U 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                        ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_valid)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                         ? 
                                                        ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_valid) 
                                                         >> 1U)
                                                         : 
                                                        (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                          & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_valid)) 
                                                         >> 2U)))));
    vlSelf->ysyx_22040228__DOT__t_axi_r_last = (1U 
                                                & ((~ (IData)(vlSelf->rst)) 
                                                   & ((1U 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                       ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_last)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                        ? 
                                                       ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_last) 
                                                        >> 1U)
                                                        : 
                                                       (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                         & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_last)) 
                                                        >> 2U)))));
    vlSelf->ysyx_22040228__DOT__t_axi_r_valid = (1U 
                                                 & ((~ (IData)(vlSelf->rst)) 
                                                    & ((1U 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                        ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_valid)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                         ? 
                                                        ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_valid) 
                                                         >> 1U)
                                                         : 
                                                        (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                          & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_valid)) 
                                                         >> 2U)))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__add_axi_aw_id = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_burst = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_len = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_id = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_r_ready = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_b_ready = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_valid = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_qos = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_prot = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_cache = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_burst = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_len = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_size = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_last = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_valid = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_valid = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__add_axi_aw_id = 
            ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
              ? ((0xff0U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id)) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_id))
              : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                  ? ((0xf0fU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id)) 
                     | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_id) 
                        << 4U)) : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                    ? ((0xffU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id)) 
                                       | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_id) 
                                          << 8U)) : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_ar_burst 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (1U | (0x3cU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst)))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (4U | (0x33U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst)))
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (0x10U | (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst)))
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_ar_len 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (0xffff00U & vlSelf->ysyx_22040228__DOT__add_axi_ar_len)
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (0xff00ffU & vlSelf->ysyx_22040228__DOT__add_axi_ar_len)
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (0xffffU & vlSelf->ysyx_22040228__DOT__add_axi_ar_len)
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_ar_id = 
            ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
              ? ((0xff0U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id)) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_id))
              : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                  ? ((0xf0fU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id)) 
                     | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_id) 
                        << 4U)) : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                    ? ((0xffU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id)) 
                                       | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_id) 
                                          << 8U)) : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_r_ready 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (1U | (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (2U | (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready))
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (4U | (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready))
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_b_ready 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (1U | (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (2U | (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready))
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (4U | (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready))
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_ar_valid 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? ((6U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid)) 
                   | (IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_valid))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? ((5U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid)) 
                       | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_valid) 
                          << 1U)) : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                      ? ((3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid)) 
                                         | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_valid) 
                                            << 2U))
                                      : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_aw_qos 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (0xff0U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (0xf0fU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos))
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (0xffU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos))
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_aw_prot 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (0x1f8U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (0x1c7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot))
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot))
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_aw_cache 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (2U | (0xff0U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache)))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (0x20U | (0xf0fU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache)))
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (0x200U | (0xffU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache)))
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_aw_burst 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (1U | (0x3cU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst)))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (4U | (0x33U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst)))
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (0x10U | (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst)))
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_aw_len 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (0xffff00U & vlSelf->ysyx_22040228__DOT__add_axi_aw_len)
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (0xff00ffU & vlSelf->ysyx_22040228__DOT__add_axi_aw_len)
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (0xffffU & vlSelf->ysyx_22040228__DOT__add_axi_aw_len)
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_aw_size 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? ((0x1f8U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size)) 
                   | (IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_size))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? ((0x1c7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size)) 
                       | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_size) 
                          << 3U)) : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                      ? ((0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size)) 
                                         | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_size) 
                                            << 6U))
                                      : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_w_last 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? (1U | (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? (2U | (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last))
                    : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                        ? (4U | (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last))
                        : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_w_valid 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? ((6U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid)) 
                   | (IData)(vlSelf->ysyx_22040228__DOT__t_axi_w_valid))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? ((5U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid)) 
                       | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_w_valid) 
                          << 1U)) : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                      ? ((3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid)) 
                                         | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_w_valid) 
                                            << 2U))
                                      : 0U)));
        vlSelf->ysyx_22040228__DOT__add_axi_aw_valid 
            = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                ? ((6U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid)) 
                   | (IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_valid))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                    ? ((5U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid)) 
                       | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_valid) 
                          << 1U)) : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                      ? ((3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid)) 
                                         | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_valid) 
                                            << 2U))
                                      : 0U)));
    }
    if (vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache) {
        vlSelf->ysyx_22040228__DOT__uncache_dc_mask = 0U;
        vlSelf->ysyx_22040228__DOT__uncache_dc_data = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__uncache_dc_mask 
            = vlSelf->ysyx_22040228__DOT__rvcpu_wmask;
        vlSelf->ysyx_22040228__DOT__uncache_dc_data 
            = vlSelf->ysyx_22040228__DOT__rvcpu_data_o;
    }
    vlSelf->ysyx_22040228__DOT__uncache_dc_we = ((~ (IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_we));
    vlSelf->ysyx_22040228__DOT__uncache_dc_re = ((~ (IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_re));
    vlSelf->ysyx_22040228__DOT__t_axi_w_strb = (((2U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                 & (6U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                 ? 0xffU
                                                 : 
                                                (((3U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)
                                                   ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_wmask)
                                                   : 0U)
                                                  : 0U));
    if (vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache) {
        vlSelf->ysyx_22040228__DOT__uncache_arb_addr 
            = vlSelf->ysyx_22040228__DOT__rvcpu_data_addr;
        vlSelf->ysyx_22040228__DOT__uncache_arb_data 
            = vlSelf->ysyx_22040228__DOT__rvcpu_data_o;
        vlSelf->ysyx_22040228__DOT__uncache_arb_we 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_we) 
               & 1U);
        vlSelf->ysyx_22040228__DOT__uncache_arb_re 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_re) 
               & 1U);
        vlSelf->ysyx_22040228__DOT__uncache_dc_addr = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__uncache_arb_addr = 0ULL;
        vlSelf->ysyx_22040228__DOT__uncache_arb_data = 0ULL;
        vlSelf->ysyx_22040228__DOT__uncache_arb_we = 0U;
        vlSelf->ysyx_22040228__DOT__uncache_arb_re = 0U;
        vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
            = vlSelf->ysyx_22040228__DOT__rvcpu_data_addr;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset 
        = (0xfffU & ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))
                      ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                         >> 0x14U) : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))
                                       ? ((0xfe0U & 
                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                >> 7U)))
                                       : 0U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srai 
        = (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x7000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type 
        = ((0x39U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type)) 
           | ((4U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type) 
                     >> 5U)) | ((IData)((0U != (3U 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type)))) 
                                << 1U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type 
        = ((0x37U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type)) 
           | (8U & (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jump) 
                     << 3U) | (0xfffffff8U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type) 
                                              << 1U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mret 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))) 
           & (0x18U == (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                        >> 0x19U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ecall 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))) 
           & (0U == (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                     >> 0x14U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srl 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_add 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sub 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sll 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x1000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sltu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x3000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_or 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x6000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srlw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_xor 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x4000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_and 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x7000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_subw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sllw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slt 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sra 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhsu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2002000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_div 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mul 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulh 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2001000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2003000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_rem 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena 
        = (IData)((0U != (0x4dU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))) 
           & (1U == (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                     >> 0x14U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset 
        = (0xfffU & ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))
                      ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                         >> 0x14U) : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))
                                       ? ((0xfe0U & 
                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                >> 7U)))
                                       : 0U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srai 
        = (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x7000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type 
        = ((0x39U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type)) 
           | ((4U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type) 
                     >> 5U)) | ((IData)((0U != (3U 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type)))) 
                                << 1U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type 
        = ((0x37U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type)) 
           | (8U & (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jump) 
                     << 3U) | (0xfffffff8U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type) 
                                              << 1U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mret 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))) 
           & (0x18U == (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                        >> 0x19U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ecall 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))) 
           & (0U == (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                     >> 0x14U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srl 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_add 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sub 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sll 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x1000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sltu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x3000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_or 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x6000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srlw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_xor 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x4000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_and 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x7000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_subw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sllw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slt 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2000U == (0x2007000U 
                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sra 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhsu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2002000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_div 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mul 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulh 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2001000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2003000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_rem 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena 
        = (IData)((0U != (0x4dU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))) 
           & (1U == (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                     >> 0x14U)));
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst_nxt 
        = ((0x20U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
            ? ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                ? 1U : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                         ? 1U : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                  ? 1U : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                           ? 1U : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__read_ok) 
                                                     & (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                                                          == 
                                                          (0x3fffffU 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                                      >> 0xaU)))) 
                                                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                                                        | ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                                                            == 
                                                            (0x3fffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                                        >> 0xaU)))) 
                                                           & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))))
                                                     ? 4U
                                                     : 
                                                    (((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__read_ok) 
                                                      & (~ 
                                                         ((0x10000000ULL 
                                                           <= vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                                          & (0x3fffffffULL 
                                                             >= vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr))))
                                                      ? 2U
                                                      : 
                                                     (((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__read_ok) 
                                                       & ((0x10000000ULL 
                                                           <= vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                                          & (0x3fffffffULL 
                                                             >= vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                       ? 8U
                                                       : 0x20U))))))))
            : ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                ? 1U : ((8U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                         ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                             ? 1U : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                      ? 1U : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                               ? 1U
                                               : ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_m_ok)
                                                   ? 0x20U
                                                   : 8U))))
                         : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                             ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                 ? 1U : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                          ? 1U : ((
                                                   (4U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_empty) 
                                                      & (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                                                           == 
                                                           (0x3fffffU 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                                       >> 0xaU)))) 
                                                          & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                                                         | ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                                                             == 
                                                             (0x3fffffU 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                                         >> 0xaU)))) 
                                                            & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)))))
                                                   ? 1U
                                                   : 4U)))
                             : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                 ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                     ? 1U : ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_i_ok)
                                              ? 0x20U
                                              : 2U))
                                 : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                     ? ((IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__icache_if_shankhand)
                                         ? 0x20U : 1U)
                                     : 1U))))));
    vlSelf->ysyx_22040228__DOT__t_axi_ar_size = (((5U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                  ? 3U
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                   ? 3U
                                                   : 
                                                  ((((4U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                     & (6U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                    & ((0x10000000ULL 
                                                        <= vlSelf->ysyx_22040228__DOT__i_cache_addr) 
                                                       & (0x3fffffffULL 
                                                          >= vlSelf->ysyx_22040228__DOT__i_cache_addr)))
                                                    ? 2U
                                                    : 
                                                   ((((4U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                      & (6U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))) 
                                                     & ((0x10000000ULL 
                                                         > vlSelf->ysyx_22040228__DOT__i_cache_addr) 
                                                        | (0x3fffffffULL 
                                                           < vlSelf->ysyx_22040228__DOT__i_cache_addr)))
                                                     ? 3U
                                                     : 0U))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc 
        = (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req))
            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_pc);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[1U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm1 
        = ((0x80000U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                  >> 1U)) 
                                     | ((0x400U & (
                                                   vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                            >> 0x15U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm1 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm2 
        = ((0x80000U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                  >> 1U)) 
                                     | ((0x400U & (
                                                   vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                            >> 0x15U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm2 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm3 
        = ((0x80000U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                  >> 1U)) 
                                     | ((0x400U & (
                                                   vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                            >> 0x15U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm3 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm4 
        = ((0x80000U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                  >> 1U)) 
                                     | ((0x400U & (
                                                   vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                            >> 0x15U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm4 
        = ((0x800U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                  >> 8U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4 
        = ((0x1bU == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1 
        = ((0x1bU == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2 
        = ((0x1bU == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3 
        = ((0x1bU == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4 
        = ((0x19U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1 
        = ((0x19U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2 
        = ((0x19U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3 
        = ((0x19U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4 
        = ((0x18U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1 
        = ((0x18U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2 
        = ((0x18U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3 
        = ((0x18U == (0x1fU & (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                               >> 2U))) & (3U == (3U 
                                                  & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U])));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
        = (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req))
            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[0U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req;
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data 
        = ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_type))
            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data
            : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__exe_res);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_ena 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)) 
           | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
              | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena)
            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data
            : 0ULL);
    if ((0x80U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data = 0ULL;
        if (((0x40U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
             | (2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data;
        } else if (((0x80U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                   | vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data);
        } else if (((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)) 
                    | (8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                   & (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data));
        } else if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc;
        }
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data = 0ULL;
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc;
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data 
        = ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type) 
             >> 7U) & (7U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode)))
            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data
            : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__exe_res);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__diff_ena) 
           & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff
           [(7U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready[2U])]);
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__diff_ena) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff
            [(7U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready[2U])];
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff
            [(7U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready[2U])];
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag = 0ULL;
    }
    vlSelf->ysyx_22040228__DOT__add_axi_b_id = (((IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_aw_id) 
                                                 << 8U) 
                                                | ((((2U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state))
                                                      ? (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timeraw_id_temp)
                                                      : 0U) 
                                                    << 4U) 
                                                   | (0xfU 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id))));
    vlSelf->ysyx_22040228__DOT__add_axi_r_id = ((((2U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))
                                                   ? (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                                   : 0U) 
                                                 << 8U) 
                                                | ((((3U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state))
                                                      ? (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timerar_id_temp)
                                                      : 0U) 
                                                    << 4U) 
                                                   | ((2U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))
                                                       ? 
                                                      (0xfU 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id))
                                                       : 0U)));
    vlSelf->ysyx_22040228__DOT__clint6__DOT__success_r 
        = (((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
            >> 1U) & (3U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state)));
    vlSelf->ysyx_22040228__DOT__clint6__DOT__success_b 
        = (((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
            >> 1U) & (2U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state)));
    vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready = (IData)(
                                                           ((((((((4U 
                                                                   == 
                                                                   (4U 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid))) 
                                                                  & (4U 
                                                                     == 
                                                                     (4U 
                                                                      & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid)))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0xff0000U 
                                                                     & vlSelf->ysyx_22040228__DOT__add_axi_aw_len))) 
                                                                & (0xc0U 
                                                                   == 
                                                                   (0x1c0U 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size)))) 
                                                               & (0x10U 
                                                                  == 
                                                                  (0x30U 
                                                                   & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst)))) 
                                                              & (0x200U 
                                                                 == 
                                                                 (0xf00U 
                                                                  & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache)))) 
                                                             & (0U 
                                                                == 
                                                                (0x1c0U 
                                                                 & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot)))) 
                                                            & (0U 
                                                               == 
                                                               (0xf00U 
                                                                & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos)))));
    vlSelf->ysyx_22040228__DOT__io_axi_aw_ready = (
                                                   (((((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                                         & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid)) 
                                                        & (0U 
                                                           == 
                                                           (0xffU 
                                                            & vlSelf->ysyx_22040228__DOT__add_axi_aw_len))) 
                                                       & (3U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size)))) 
                                                      & (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst)))) 
                                                     & (2U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache)))) 
                                                    & (0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot)))) 
                                                   & (0U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos))));
    vlSelf->ysyx_22040228__DOT__soc_axi_w_ready = (1U 
                                                   & ((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid)) 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last)) 
                                                      >> 2U));
    vlSelf->ysyx_22040228__DOT__io_axi_w_ready = (1U 
                                                  & (((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid)) 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last)));
    vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw 
        = (1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                 >> 1U));
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection 
        = (((QData)((IData)((((- (IData)((1U & ((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_mask) 
                                                >> 7U)))) 
                              << 0x18U) | ((0xff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_mask) 
                                                              >> 6U)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_mask) 
                                                                 >> 5U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_mask) 
                                                                  >> 4U)))))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_mask) 
                                                         >> 3U)))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_mask) 
                                                               >> 2U)))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_mask) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_mask)))))))))));
    vlSelf->ysyx_22040228__DOT__add_axi_w_strb = ((IData)(vlSelf->rst)
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                    ? 
                                                   ((0xffff00U 
                                                     & vlSelf->ysyx_22040228__DOT__add_axi_w_strb) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__t_axi_w_strb))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                     ? 
                                                    ((0xff00ffU 
                                                      & vlSelf->ysyx_22040228__DOT__add_axi_w_strb) 
                                                     | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_w_strb) 
                                                        << 8U))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                      ? 
                                                     ((0xffffU 
                                                       & vlSelf->ysyx_22040228__DOT__add_axi_w_strb) 
                                                      | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_w_strb) 
                                                         << 0x10U))
                                                      : 0U))));
    if (((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_o = 1U;
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_o = 0U;
    }
    if (((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_o = 1U;
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_o = 0U;
    }
    if (((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        if ((1U & (~ (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                      [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                         >> 3U)))] 
                      & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))]))))) {
            if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                 [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                    >> 3U)))] & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 3U)))]))) {
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_t = 1U;
            }
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_t = 0U;
    }
    if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) {
        VL_EXTEND_WQ(128,64, __Vtemp982, vlSelf->ysyx_22040228__DOT__uncache_dc_data);
        if (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
              == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                       >> 9U)))) & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[0U] 
                = __Vtemp982[0U];
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[1U] 
                = __Vtemp982[1U];
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[2U] 
                = __Vtemp982[2U];
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[3U] 
                = __Vtemp982[3U];
        } else {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[0U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[1U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[2U] 
                = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                     == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                              >> 9U)))) 
                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                    ? (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_data)
                    : 0U);
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[3U] 
                = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                     == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                              >> 9U)))) 
                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                    ? (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_data 
                               >> 0x20U)) : 0U);
        }
    }
    if (((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        if ((1U & (~ (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                      [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                         >> 3U)))] 
                      & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))]))))) {
            if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                 [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                    >> 3U)))] & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 3U)))]))) {
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_t = 1U;
            }
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_t = 0U;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_))) {
            if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) {
                if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) {
                    if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U] = 0xffffffffU;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U] = 0xffffffffU;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U] = 0U;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U] = 0U;
                    } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))] 
                                < vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U] = 0U;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U] = 0U;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U] = 0xffffffffU;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U] = 0xffffffffU;
                    }
                } else {
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U] = 0xffffffffU;
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U] = 0xffffffffU;
                }
            } else {
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U] = 0xffffffffU;
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U] = 0xffffffffU;
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U] = 0U;
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U] = 0U;
            }
        } else {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U] = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_))) {
            if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) {
                if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) {
                    if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U] = 0xffffffffU;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U] = 0xffffffffU;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U] = 0U;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U] = 0U;
                    } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))] 
                                < vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U] = 0U;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U] = 0U;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U] = 0xffffffffU;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U] = 0xffffffffU;
                    }
                } else {
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U] = 0xffffffffU;
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U] = 0xffffffffU;
                }
            } else {
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U] = 0xffffffffU;
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U] = 0xffffffffU;
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U] = 0U;
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U] = 0U;
            }
        } else {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U] = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_))) {
            if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) {
                if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) {
                    if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        VL_EXTEND_WQ(128,64, __Vtemp989, vlSelf->ysyx_22040228__DOT__arbitrate_d_data);
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[0U] 
                            = __Vtemp989[0U];
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[1U] 
                            = __Vtemp989[1U];
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[2U] 
                            = __Vtemp989[2U];
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[3U] 
                            = __Vtemp989[3U];
                    } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))] 
                                < vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[0U] = 0U;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[1U] = 0U;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[2U] 
                            = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_data);
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[3U] 
                            = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_d_data 
                                       >> 0x20U));
                    }
                } else {
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[2U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_data);
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[3U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_d_data 
                                   >> 0x20U));
                }
            } else {
                VL_EXTEND_WQ(128,64, __Vtemp992, vlSelf->ysyx_22040228__DOT__arbitrate_d_data);
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[0U] 
                    = __Vtemp992[0U];
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[1U] 
                    = __Vtemp992[1U];
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[2U] 
                    = __Vtemp992[2U];
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[3U] 
                    = __Vtemp992[3U];
            }
        } else {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[0U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[1U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[2U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[3U] = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_))) {
            if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) {
                if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) {
                    if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        VL_EXTEND_WQ(128,64, __Vtemp993, vlSelf->ysyx_22040228__DOT__arbitrate_d_data);
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[0U] 
                            = __Vtemp993[0U];
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[1U] 
                            = __Vtemp993[1U];
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[2U] 
                            = __Vtemp993[2U];
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[3U] 
                            = __Vtemp993[3U];
                    } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))] 
                                < vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[0U] = 0U;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[1U] = 0U;
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[2U] 
                            = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_data);
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[3U] 
                            = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_d_data 
                                       >> 0x20U));
                    }
                } else {
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[0U] = 0U;
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[1U] = 0U;
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[2U] 
                        = (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_data);
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[3U] 
                        = (IData)((vlSelf->ysyx_22040228__DOT__arbitrate_d_data 
                                   >> 0x20U));
                }
            } else {
                VL_EXTEND_WQ(128,64, __Vtemp996, vlSelf->ysyx_22040228__DOT__arbitrate_d_data);
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[0U] 
                    = __Vtemp996[0U];
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[1U] 
                    = __Vtemp996[1U];
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[2U] 
                    = __Vtemp996[2U];
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[3U] 
                    = __Vtemp996[3U];
            }
        } else {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[0U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[1U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[2U] = 0U;
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[3U] = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_))) {
            if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) {
                if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) {
                    if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena1 = 1U;
                    }
                }
            } else {
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena1 = 1U;
            }
        } else {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena1 = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_))) {
            if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) {
                if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) {
                    if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         < vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                >> 3U)))] 
                             < vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                >> 3U)))])) {
                            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena2 = 1U;
                        }
                    }
                } else {
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena2 = 1U;
                }
            }
        } else {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena2 = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_))) {
            if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) {
                if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) {
                    if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena1 = 1U;
                    }
                }
            } else {
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena1 = 1U;
            }
        } else {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena1 = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_))) {
            if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) {
                if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) {
                    if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         < vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                >> 3U)))] 
                             < vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                >> 3U)))])) {
                            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena2 = 1U;
                        }
                    }
                } else {
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena2 = 1U;
                }
            }
        } else {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena2 = 0U;
        }
    }
    if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
        if (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
              == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                       >> 9U)))) & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__mem_hit_ok = 1U;
        } else if (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                     == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                              >> 9U)))) 
                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__mem_hit_ok = 1U;
        }
    } else {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__mem_hit_ok = 0U;
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_))) {
            if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) {
                if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) {
                    if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_i_ok = 1U;
                    } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))] 
                                < vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_i_ok = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_i_ok = 1U;
                }
            } else {
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_i_ok = 1U;
            }
        } else {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_i_ok = 0U;
        }
    }
    if ((1U & (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))))) {
        if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
              & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_))) {
            if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) {
                if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) {
                    if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))] 
                         >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                         [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_i_ok = 1U;
                    } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))] 
                                < vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                   >> 3U)))])) {
                        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_i_ok = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_i_ok = 1U;
                }
            } else {
                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_i_ok = 1U;
            }
        } else {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_i_ok = 0U;
        }
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_addr 
            = (0xfffffffffffffff8ULL & vlSelf->ysyx_22040228__DOT__uncache_dc_addr);
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_addr = 0ULL;
    }
    if (((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_addr 
            = (0xfffffffffffffff8ULL & vlSelf->ysyx_22040228__DOT__uncache_dc_addr);
    } else if ((((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                 & (0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) 
                & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_addr = 0ULL;
    }
    if (((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_addr 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r)) 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)) 
                                                 << 3U)))));
        } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_addr 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r)) 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)) 
                                                 << 3U)))));
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_addr = 0ULL;
    }
    if (((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_addr 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r)) 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)) 
                                                 << 3U)))));
        } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_addr 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r)) 
                    << 9U) | (QData)((IData)((0x1f8U 
                                              & ((IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)) 
                                                 << 3U)))));
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_addr = 0ULL;
    }
    if (((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_data 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[0U])));
        } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_data 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[2U])));
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_data = 0ULL;
    }
    if (((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_data 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[0U])));
        } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_data 
                = (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[2U])));
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_data = 0ULL;
    }
    if (((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_type = 1U;
        } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_type = 1U;
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_type = 0U;
    }
    if (((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
         & (~ (IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok)))) {
        if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
             [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)))] & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_type = 4U;
        } else if ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                    [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))] < 
                     vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                        >> 3U)))]))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_type = 4U;
        }
    } else if (((IData)(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok) 
                & (8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_type = 0U;
    }
    vlSelf->ysyx_22040228__DOT__d_cache_data_out = 
        ((IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)
          ? vlSelf->ysyx_22040228__DOT__uncache_arb_data_o
          : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
              ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                   == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                            >> 9U)))) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                  ? (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[0U])))
                  : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                       == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                >> 9U)))) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                      ? (((QData)((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[2U])))
                      : 0ULL)) : 0ULL));
    if ((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_addr_i 
            = (0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter));
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_addr_i 
            = (0x3fU & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter));
    } else {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_addr_i 
            = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)));
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_addr_i 
            = (0x3fU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    vlSelf->ysyx_22040228__DOT__uncache_dc_finish = 
        ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
          ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
             & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                  == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                           >> 9U)))) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                    == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                             >> 9U)))) 
                   & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
          : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
              ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                 & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                      == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                               >> 9U)))) 
                     & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                    | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                        == (0x7fffffU & (IData)((vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                 >> 9U)))) 
                       & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
              : (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_valid_req)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type 
        = ((0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type)) 
           | (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ecall) 
               | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mret)) 
              << 5U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode 
        = ((0xdfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mret) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((4U 
                                                                             == 
                                                                             (4U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                            & (0x7000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                             | (1U 
                                                                & (IData)(
                                                                          ((0x10U 
                                                                            == 
                                                                            (0x10U 
                                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                           & (0x7000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sub)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srl)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_or)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_subw)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhsu)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhu)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulw)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divuw)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i)))) 
              << 5U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode 
        = ((0xf7U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((4U 
                                                                             == 
                                                                             (4U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                            & (0x5000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                             | (1U 
                                                                & (IData)(
                                                                          ((0x10U 
                                                                            == 
                                                                            (0x10U 
                                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                           & (0x4000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_add)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sltu)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addiw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slliw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraw)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mul)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulh)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhsu)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divu)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i)))) 
              << 3U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode 
        = ((0xefU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ecall) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                             & (0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                            & (0x6000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sub)) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_xor)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sra)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addiw)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srliw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sllw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulh)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhsu)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhu)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divu)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divw)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remw)))) 
              << 4U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type 
        = ((0x3eU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type)) 
           | (((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_div) 
                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divu)) 
                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mul)) 
                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulh)) 
                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhsu)) 
                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhu)) 
                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_rem)) 
                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remu)) 
                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divuw)) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divw)) 
                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulw)) 
               | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remuw)) 
              | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remw)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena)
            ? (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                        >> 0x14U)) : 0U);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode 
        = ((0x7fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs) 
                                                             | (1U 
                                                                & (IData)(
                                                                          ((0x10U 
                                                                            == 
                                                                            (0x10U 
                                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                           & (0x5000U 
                                                                              == 
                                                                              (0x40007000U 
                                                                               & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sll)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srl)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srliw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srlw)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulw)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_div)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_rem)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remu)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i)))) 
              << 7U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode 
        = ((0xbfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                            & (0x1000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sll)) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_xor)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_and)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jal)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhu)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulw)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divu)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_rem)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remuw)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divw)))) 
              << 6U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena 
        = (1U & (((IData)((0U != (0x7fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type)))) 
                  | (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw) 
                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs)) 
                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc))) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode 
        = ((0xfdU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                             & (0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                            & (0x2000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srai)) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sltu)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_or)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jal)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraiw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sllw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mul)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_div)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divu)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remuw)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remw)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak)))) 
              << 1U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode 
        = ((0xfbU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                             & (0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                            & (0x3000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_add)) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slt)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_and)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraiw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srlw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mul)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulh)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_div)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divuw)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remu)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak)))) 
              << 2U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode 
        = ((0xfeU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode)) 
           | ((IData)(vlSelf->rst) ? 0U : (1U & (((
                                                   (((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                             & (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                                            & (0U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))) 
                                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srai)) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slt)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sra)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slliw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_subw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divuw)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divw)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_rem)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remu)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remuw)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remw)) 
                                                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type 
        = ((0x2fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type)) 
           | (0x10U & (((((((((((((((((((((IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type)))) 
                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraw)) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srlw)) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sllw)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_subw)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addw)) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_and)) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_or)) 
                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sra)) 
                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srl)) 
                                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_xor)) 
                                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sltu)) 
                               | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slt)) 
                              | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sll)) 
                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sub)) 
                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_add)) 
                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui)) 
                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc)) 
                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i)) 
                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak)) 
                       << 4U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_ena 
        = (1U & (((((IData)((0U != (0xfaU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type)))) 
                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui)) 
                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc)) 
                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jump)) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__rs1 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak)
            ? 0xbU : (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                               >> 0xfU)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type 
        = ((0x1fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type)) 
           | (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ecall) 
               | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mret)) 
              << 5U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode 
        = ((0xdfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mret) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((4U 
                                                                             == 
                                                                             (4U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                            & (0x7000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                             | (1U 
                                                                & (IData)(
                                                                          ((0x10U 
                                                                            == 
                                                                            (0x10U 
                                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                           & (0x7000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sub)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srl)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_or)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_subw)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhsu)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhu)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulw)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divuw)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i)))) 
              << 5U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode 
        = ((0xf7U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((4U 
                                                                             == 
                                                                             (4U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                            & (0x5000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                             | (1U 
                                                                & (IData)(
                                                                          ((0x10U 
                                                                            == 
                                                                            (0x10U 
                                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                           & (0x4000U 
                                                                              == 
                                                                              (0x7000U 
                                                                               & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_add)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sltu)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addiw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slliw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraw)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mul)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulh)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhsu)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divu)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i)))) 
              << 3U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode 
        = ((0xefU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ecall) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                             & (0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                            & (0x6000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sub)) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_xor)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sra)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addiw)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srliw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sllw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulh)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhsu)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhu)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divu)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divw)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remw)))) 
              << 4U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type 
        = ((0x3eU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type)) 
           | (((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_div) 
                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divu)) 
                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mul)) 
                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulh)) 
                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhsu)) 
                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhu)) 
                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_rem)) 
                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remu)) 
                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divuw)) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divw)) 
                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulw)) 
               | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remuw)) 
              | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remw)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena)
            ? (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                        >> 0x14U)) : 0U);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode 
        = ((0x7fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs) 
                                                             | (1U 
                                                                & (IData)(
                                                                          ((0x10U 
                                                                            == 
                                                                            (0x10U 
                                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                           & (0x5000U 
                                                                              == 
                                                                              (0x40007000U 
                                                                               & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sll)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srl)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srliw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srlw)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulw)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_div)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_rem)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remu)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i)))) 
              << 7U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode 
        = ((0xbfU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                            & (0x1000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sll)) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_xor)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_and)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhu)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulw)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divu)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_rem)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remuw)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divw)))) 
              << 6U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena 
        = (1U & (((IData)((0U != (0x7fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type)))) 
                  | (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw) 
                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs)) 
                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc))) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode 
        = ((0xfdU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                             & (0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                            & (0x2000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srai)) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sltu)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_or)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraiw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sllw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mul)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_div)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divu)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remuw)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remw)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak)))) 
              << 1U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode 
        = ((0xfbU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                             & (0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                            & (0x3000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_add)) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slt)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_and)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraiw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srlw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mul)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulh)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_div)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divuw)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remu)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak)))) 
              << 2U));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode 
        = ((0xfeU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode)) 
           | ((IData)(vlSelf->rst) ? 0U : (1U & (((
                                                   (((((((((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            ((4U 
                                                                              == 
                                                                              (4U 
                                                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                             & (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           ((0x10U 
                                                                             == 
                                                                             (0x10U 
                                                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                                            & (0U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))) 
                                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srai)) 
                                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slt)) 
                                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sra)) 
                                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc)) 
                                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slliw)) 
                                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_subw)) 
                                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divuw)) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divw)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_rem)) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remu)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remuw)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remw)) 
                                                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type 
        = ((0x2fU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type)) 
           | (0x10U & (((((((((((((((((((((IData)((0U 
                                                   != 
                                                   (0x30U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type)))) 
                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraw)) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srlw)) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sllw)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_subw)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addw)) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_and)) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_or)) 
                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sra)) 
                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srl)) 
                                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_xor)) 
                                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sltu)) 
                               | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slt)) 
                              | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sll)) 
                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sub)) 
                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_add)) 
                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui)) 
                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc)) 
                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i)) 
                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak)) 
                       << 4U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_ena 
        = (1U & (((((IData)((0U != (0xfaU & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type)))) 
                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui)) 
                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc)) 
                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jump)) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__rs1 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak)
            ? 0xbU : (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                               >> 0xfU)));
    vlSelf->ysyx_22040228__DOT__add_axi_ar_size = ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                     ? 
                                                    ((0x1f8U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size)) 
                                                     | (IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_size))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                      ? 
                                                     ((0x1c7U 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size)) 
                                                      | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_size) 
                                                         << 3U))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                       ? 
                                                      ((0x3fU 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size)) 
                                                       | ((IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_size) 
                                                          << 6U))
                                                       : 0U))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr 
        = (0x1fU & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1)
                     ? ((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                         << 0x11U) | (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                      >> 0xfU)) : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2)
                                                    ? 
                                                   ((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                     << 0x11U) 
                                                    | (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                       >> 0xfU))
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3)
                                                     ? 
                                                    ((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                      << 0x11U) 
                                                     | (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                        >> 0xfU))
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4)
                                                      ? 
                                                     ((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                       << 0x11U) 
                                                      | (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                         >> 0xfU))
                                                      : 0U)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4)) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1)) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2)) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3)) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr 
        = (0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1)
                    ? (IData)((vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                               >> 2U)) : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2)
                                           ? (IData)(
                                                     ((4ULL 
                                                       + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                                      >> 2U))
                                           : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3)
                                               ? (IData)(
                                                         ((8ULL 
                                                           + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                                          >> 2U))
                                               : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4)
                                                   ? (IData)(
                                                             ((0xcULL 
                                                               + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr) 
                                                              >> 2U))
                                                   : 0U)))));
    if (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpp_nxt = 3U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause_nxt 
            = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie));
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpp_nxt 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)
                ? 0U : (3U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                               ? (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                          >> 0xbU))
                               : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause_nxt 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data
                : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause);
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena) 
                     | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                    >> 7U)) : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie))));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mie_nxt 
        = (1U & ((~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))) 
                 & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)
                     ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie)
                     : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                    >> 3U)) : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__t_axi_b_id = 0U;
        vlSelf->ysyx_22040228__DOT__t_axi_r_id = 0U;
    } else {
        vlSelf->ysyx_22040228__DOT__t_axi_b_id = (0xfU 
                                                  & ((1U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                      ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_id)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                       ? 
                                                      ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_id) 
                                                       >> 4U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                        ? 
                                                       ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_id) 
                                                        >> 8U)
                                                        : 0U))));
        vlSelf->ysyx_22040228__DOT__t_axi_r_id = (0xfU 
                                                  & ((1U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                      ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_id)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                       ? 
                                                      ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_id) 
                                                       >> 4U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                        ? 
                                                       ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_id) 
                                                        >> 8U)
                                                        : 0U))));
    }
    vlSelf->ysyx_22040228__DOT__clint6__DOT__resp_success 
        = ((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_r) 
           | (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_b));
    vlSelf->ysyx_22040228__DOT__add_axi_aw_ready = 
        (((IData)(vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready) 
          << 2U) | ((2U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid)) 
                    | (IData)(vlSelf->ysyx_22040228__DOT__io_axi_aw_ready)));
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__aw_shankhand 
        = ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
           & (IData)(vlSelf->ysyx_22040228__DOT__io_axi_aw_ready));
    __Vtableidx2 = ((0xffffffc0U & (((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state)) 
                                     << 6U) & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                               << 4U))) 
                    | ((0x20U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                 << 3U)) | ((0x10U 
                                             & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                                << 2U)) 
                                            | ((0xfffffff8U 
                                                & (((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__soc_axi_w_ready) 
                                                      << 3U))) 
                                               | ((0xfffffffcU 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                                      & ((IData)(vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready) 
                                                         << 2U))) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state))))));
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state_nxt 
        = Vysyx_22040228__ConstPool__TABLE_0bdcfe05_0
        [__Vtableidx2];
    vlSelf->ysyx_22040228__DOT__add_axi_w_ready = (
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__soc_axi_w_ready) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ysyx_22040228__DOT__io_axi_w_ready)));
    vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask 
        = (((QData)((IData)((((- (IData)((1U & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                >> 0xfU)))) 
                              << 0x18U) | ((0xff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                              >> 0xeU)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                                 >> 0xdU)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                                  >> 0xcU)))))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                         >> 0xbU)))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                               >> 0xaU)))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                                  >> 9U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                                   >> 8U)))))))))));
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_ena_i 
        = ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid1) 
           | ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
               ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena1)
               : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena1))));
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_ena_i 
        = ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid2) 
           | ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
               ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena2)
               : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena2))));
    if ((0x20U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt = 1U;
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt 
            = ((8U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                ? 1U : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                         ? 1U : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                  ? 1U : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                           ? 1U : ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_i_ok)
                                                    ? 2U
                                                    : 0x10U)))));
    } else if ((8U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt = 1U;
        } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt = 1U;
        } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt = 1U;
        } else if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_ok) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt = 0x10U;
        }
    } else {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt 
            = ((4U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                    ? 1U : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                             ? 1U : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                      ? 1U : 4U))) : 
               ((2U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                 ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                     ? 1U : (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_w_ok) 
                              & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                   == (0x7fffffU & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                 | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                     == (0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                    >> 9U)))) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
                              ? 4U : (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_w_ok) 
                                       & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                         >> 3U)))] 
                                            & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 3U)))] 
                                               >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 3U)))])) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r)) 
                                          | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 3U)))] 
                                              & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 3U)))])) 
                                             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))))
                                       ? 8U : ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_w_ok)
                                                ? 0x10U
                                                : 2U))))
                 : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                     ? (((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_we) 
                         & (1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)))
                         ? 2U : 1U) : 1U)));
    }
    if ((0x20U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt = 1U;
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt 
            = ((8U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                ? 1U : ((4U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                         ? 1U : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                  ? 1U : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                           ? 1U : ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_i_ok)
                                                    ? 2U
                                                    : 0x10U)))));
    } else if ((8U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
        if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt = 1U;
        } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt = 1U;
        } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt = 1U;
        } else if (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_ok) {
            vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt = 0x10U;
        }
    } else {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt 
            = ((4U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                    ? 1U : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                             ? 1U : ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__mem_hit_ok)
                                      ? 1U : 4U))) : 
               ((2U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                 ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                     ? 1U : (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_ok) 
                              & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                   == (0x7fffffU & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                 | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                     == (0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                    >> 9U)))) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
                              ? 4U : (((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_ok) 
                                       & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                         >> 3U)))] 
                                            & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 3U)))] 
                                               >= vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 3U)))])) 
                                           | (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 3U)))] 
                                              & (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 3U)))]))) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r)))
                                       ? 8U : ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_ok)
                                                ? 0x10U
                                                : 2U))))
                 : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                     ? (((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_re) 
                         & (1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)))
                         ? 2U : 1U) : 1U)));
    }
    if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
        vlSelf->ysyx_22040228__DOT__d_cache_out_addr 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_addr;
        vlSelf->ysyx_22040228__DOT__d_cache_out_data 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_data;
        vlSelf->ysyx_22040228__DOT__d_cache_out_type 
            = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_type;
    } else {
        vlSelf->ysyx_22040228__DOT__d_cache_out_addr 
            = ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_addr
                : ((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_addr
                    : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                        ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_addr
                        : ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request)
                            ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out
                            : 0ULL))));
        vlSelf->ysyx_22040228__DOT__d_cache_out_data 
            = ((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_data
                : ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request)
                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out
                    : 0ULL));
        vlSelf->ysyx_22040228__DOT__d_cache_out_type 
            = ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_type)
                : ((8U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                    ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_type)
                    : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                        ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_type)
                        : ((IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request)
                            ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out)
                            : 0U))));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_byte 
        = (0xffU & ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                   >> 2U))) ? ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__d_cache_data_out 
                                                               >> 0x38U))
                                                    : (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__d_cache_data_out 
                                                               >> 0x30U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__d_cache_data_out 
                                                               >> 0x28U))
                                                    : (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__d_cache_data_out 
                                                               >> 0x20U))))
                     : ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__d_cache_data_out 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__d_cache_data_out 
                                                               >> 0x10U)))
                         : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                             ? (IData)((vlSelf->ysyx_22040228__DOT__d_cache_data_out 
                                        >> 8U)) : (IData)(vlSelf->ysyx_22040228__DOT__d_cache_data_out)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_half_byte 
        = (0xffffU & ((0U == (3U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                            >> 1U))))
                       ? (IData)(vlSelf->ysyx_22040228__DOT__d_cache_data_out)
                       : ((1U == (3U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                >> 1U))))
                           ? (IData)((vlSelf->ysyx_22040228__DOT__d_cache_data_out 
                                      >> 0x10U)) : 
                          ((2U == (3U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                 >> 1U))))
                            ? (IData)((vlSelf->ysyx_22040228__DOT__d_cache_data_out 
                                       >> 0x20U)) : (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__d_cache_data_out 
                                                             >> 0x30U))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_word 
        = ((1U & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                          >> 2U))) ? (IData)((vlSelf->ysyx_22040228__DOT__d_cache_data_out 
                                              >> 0x20U))
            : (IData)(vlSelf->ysyx_22040228__DOT__d_cache_data_out));
    vlSelf->ysyx_22040228__DOT__d_cache_mem_finish__out9 
        = ((IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)
            ? (IData)(vlSelf->ysyx_22040228__DOT__uncache_arb_finish)
            : (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_finish));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
            >> 3U) & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc 
                      < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_addr 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_ena)
            ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak)
                ? 0xbU : (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                   >> 7U))) : 0U);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena)
            ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__rs1)
            : 0U);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
            >> 3U) & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc 
                      > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_addr 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_ena)
            ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak)
                ? 0xbU : (0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                   >> 7U))) : 0U);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena)
            ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__rs1)
            : 0U);
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand 
        = (((((IData)(vlSelf->ysyx_22040228__DOT__soc_axi_ar_ready) 
              & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                 >> 2U)) & (0U == (0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_ar_len 
                                            >> 0x10U)))) 
            & (3U == (7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size) 
                            >> 6U)))) & (1U == (3U 
                                                & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst) 
                                                   >> 4U))));
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__ar_shankhand 
        = (((((IData)(vlSelf->ysyx_22040228__DOT__io_axi_ar_ready) 
              & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid)) 
             & (0U == (0xffU & vlSelf->ysyx_22040228__DOT__add_axi_ar_len))) 
            & (3U == (7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size)))) 
           & (1U == (3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data 
        = ((IData)(vlSelf->rst) ? 0ULL : (((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1) 
                                             | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2) 
                                                | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4)))) 
                                            & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                               == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                           ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                           : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                          [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr]));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1)
            ? 0xeU : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2)
                       ? 0xcU : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3)
                                  ? 8U : 0U)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo 
        = (7U & ((((1U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                    [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr]) 
                   + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                            [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                            >> 1U))) + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                                              [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                                              >> 2U))) 
                 + (1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                          >> 3U))));
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite 
        = (((2U == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
            & (1U == (IData)(vlSelf->ysyx_22040228__DOT__t_axi_b_id))) 
           & (IData)(vlSelf->ysyx_22040228__DOT__t_axi_b_valid));
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite 
        = (((3U == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
            & (2U == (IData)(vlSelf->ysyx_22040228__DOT__t_axi_b_id))) 
           & (IData)(vlSelf->ysyx_22040228__DOT__t_axi_b_valid));
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread 
        = ((((5U == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
             & (1U == (IData)(vlSelf->ysyx_22040228__DOT__t_axi_r_id))) 
            & (IData)(vlSelf->ysyx_22040228__DOT__t_axi_r_last)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__t_axi_r_valid));
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread 
        = ((((4U == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
             & (4U == (IData)(vlSelf->ysyx_22040228__DOT__t_axi_r_id))) 
            & (IData)(vlSelf->ysyx_22040228__DOT__t_axi_r_last)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__t_axi_r_valid));
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread 
        = ((((6U == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
             & (0xfU != (IData)(vlSelf->ysyx_22040228__DOT__t_axi_r_id))) 
            & (IData)(vlSelf->ysyx_22040228__DOT__t_axi_r_last)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__t_axi_r_valid));
    __Vtableidx4 = (((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__resp_success) 
                     << 3U) | ((4U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                      << 1U)) | (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state)));
    vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state_n 
        = Vysyx_22040228__ConstPool__TABLE_440d609d_0
        [__Vtableidx4];
    __Vtableidx5 = (((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__resp_success) 
                     << 3U) | (((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                << 2U) | (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state)));
    vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state_n 
        = Vysyx_22040228__ConstPool__TABLE_2039a795_0
        [__Vtableidx5];
    __Vtableidx6 = ((((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state)) 
                      & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready)) 
                     << 6U) | ((0x20U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                         << 5U)) | 
                               ((0x10U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                          << 4U)) | 
                                ((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__io_axi_w_ready)) 
                                  << 3U) | (((IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__aw_shankhand) 
                                             << 2U) 
                                            | (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state))))));
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state_nxt 
        = Vysyx_22040228__ConstPool__TABLE_0bdcfe05_0
        [__Vtableidx6];
    vlSelf->ysyx_22040228__DOT__t_axi_ar_addr = (((5U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                  ? vlSelf->ysyx_22040228__DOT__d_cache_out_addr
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                   ? vlSelf->ysyx_22040228__DOT__uncache_arb_addr
                                                   : 
                                                  (((4U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
                                                    ? vlSelf->ysyx_22040228__DOT__i_cache_addr
                                                    : 0ULL)));
    if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
         & (6U == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))) {
        vlSelf->ysyx_22040228__DOT__t_axi_aw_addr = vlSelf->ysyx_22040228__DOT__d_cache_out_addr;
        vlSelf->ysyx_22040228__DOT__t_axi_w_data = vlSelf->ysyx_22040228__DOT__d_cache_out_data;
    } else {
        vlSelf->ysyx_22040228__DOT__t_axi_aw_addr = 
            (((3U == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
              & (6U == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
              ? vlSelf->ysyx_22040228__DOT__uncache_arb_addr
              : 0ULL);
        vlSelf->ysyx_22040228__DOT__t_axi_w_data = 
            (((3U == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state)) 
              & (6U == (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state)))
              ? vlSelf->ysyx_22040228__DOT__uncache_arb_data
              : 0ULL);
    }
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand 
        = ((((0U == (IData)(vlSelf->ysyx_22040228__DOT__d_cache_out_type)) 
             | (~ (IData)(vlSelf->ysyx_22040228__DOT__uncache_arb_re))) 
            | (~ (IData)(vlSelf->ysyx_22040228__DOT__uncache_arb_we))) 
           & ((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
               ? (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena)
               : ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data 
        = ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type))
            ? ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                    ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                        ? 0ULL : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_word)))
                    : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                        ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_half_byte))
                        : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_byte))))
                : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                    ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                        ? vlSelf->ysyx_22040228__DOT__d_cache_data_out
                        : (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_word 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_word))))
                    : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))
                        ? (((- (QData)((IData)((1U 
                                                & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_half_byte) 
                                                   >> 0xfU))))) 
                            << 0x10U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_half_byte)))
                        : (((- (QData)((IData)((1U 
                                                & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_byte) 
                                                   >> 7U))))) 
                            << 8U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_byte))))))
            : 0ULL);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
        = (((IData)(vlSelf->rst) | (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_re) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_we)) 
                                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__d_cache_mem_finish__out9))))
            ? 0ULL : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_pc);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_re) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_we)) 
                                       & (~ (IData)(vlSelf->ysyx_22040228__DOT__d_cache_mem_finish__out9))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com1_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com2_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com3_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com4_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com5_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com6_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com7_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com8_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb1_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb3_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com1_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com2_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com3_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com4_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com5_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com6_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com7_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com8_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb1_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb3_op1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena));
    vlSelf->read_ena_sign_ = vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand;
    __Vtableidx3 = ((0xfffffff0U & (((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                     << 2U) & ((2U 
                                                == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)) 
                                               << 4U))) 
                    | ((8U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                              << 1U)) | (((IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand) 
                                          << 2U) | (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))));
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state_nxt 
        = Vysyx_22040228__ConstPool__TABLE_287fc343_0
        [__Vtableidx3];
    vlSelf->out_rtc_read_ = vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__ar_shankhand;
    __Vtableidx7 = ((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                      & (2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))) 
                     << 4U) | ((8U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                      << 3U)) | (((IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__ar_shankhand) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))));
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state_nxt 
        = Vysyx_22040228__ConstPool__TABLE_287fc343_0
        [__Vtableidx7];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1 
        = (1U & ((8U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                  [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                  ? ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                      [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                      ? ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                          ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             | (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))
                          : ((~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                              [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr]) 
                             | (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo))))
                      : ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                          ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             & (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))
                          : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             | (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))))
                  : ((4U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                      [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                      ? ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                          ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             & (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))
                          : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             | (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo))))
                      : ((2U & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                          [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr])
                          ? ((~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                              [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr]) 
                             & (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))
                          : (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata
                             [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr] 
                             & (2U < (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo)))))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U] = 0U;
    } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))) {
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[0U] 
            = (IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_addr);
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[1U] 
            = (IData)((vlSelf->ysyx_22040228__DOT__t_axi_ar_addr 
                       >> 0x20U));
    } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))) {
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U] 
            = (IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_addr);
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U] 
            = (IData)((vlSelf->ysyx_22040228__DOT__t_axi_ar_addr 
                       >> 0x20U));
    } else if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))) {
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U] 
            = (IData)(vlSelf->ysyx_22040228__DOT__t_axi_ar_addr);
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U] 
            = (IData)((vlSelf->ysyx_22040228__DOT__t_axi_ar_addr 
                       >> 0x20U));
    } else {
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U] = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[4U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[5U] = 0U;
    } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))) {
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[0U] 
            = (IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_addr);
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[1U] 
            = (IData)((vlSelf->ysyx_22040228__DOT__t_axi_aw_addr 
                       >> 0x20U));
    } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))) {
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U] 
            = (IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_addr);
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U] 
            = (IData)((vlSelf->ysyx_22040228__DOT__t_axi_aw_addr 
                       >> 0x20U));
    } else if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))) {
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[4U] 
            = (IData)(vlSelf->ysyx_22040228__DOT__t_axi_aw_addr);
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[5U] 
            = (IData)((vlSelf->ysyx_22040228__DOT__t_axi_aw_addr 
                       >> 0x20U));
    } else {
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[4U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[5U] = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[4U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[5U] = 0U;
    } else if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))) {
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[0U] 
            = (IData)(vlSelf->ysyx_22040228__DOT__t_axi_w_data);
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[1U] 
            = (IData)((vlSelf->ysyx_22040228__DOT__t_axi_w_data 
                       >> 0x20U));
    } else if ((2U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))) {
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U] 
            = (IData)(vlSelf->ysyx_22040228__DOT__t_axi_w_data);
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U] 
            = (IData)((vlSelf->ysyx_22040228__DOT__t_axi_w_data 
                       >> 0x20U));
    } else if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))) {
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[4U] 
            = (IData)(vlSelf->ysyx_22040228__DOT__t_axi_w_data);
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[5U] 
            = (IData)((vlSelf->ysyx_22040228__DOT__t_axi_w_data 
                       >> 0x20U));
    } else {
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[0U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[1U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[4U] = 0U;
        vlSelf->ysyx_22040228__DOT__add_axi_w_data[5U] = 0U;
    }
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand 
        = ((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__uncache_arb_re));
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand 
        = ((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & (IData)(vlSelf->ysyx_22040228__DOT__uncache_arb_we));
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand 
        = ((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & ((2U == (IData)(vlSelf->ysyx_22040228__DOT__d_cache_out_type)) 
              | (8U == (IData)(vlSelf->ysyx_22040228__DOT__d_cache_out_type))));
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand 
        = ((~ (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & ((1U == (IData)(vlSelf->ysyx_22040228__DOT__d_cache_out_type)) 
              | (4U == (IData)(vlSelf->ysyx_22040228__DOT__d_cache_out_type))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2 = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2 = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena)
                ? (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                     > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data
                    : (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                         < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                        & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data
                        : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                            | ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                               & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2))))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data
                            : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2) 
                                | ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                    < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2))))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data
                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2)
                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data
                                    : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                         == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))
                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                        : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op2)
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                            : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op2)
                                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                                : (
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7))
                                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data7
                                                    : 
                                                   ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6) 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6))
                                                     ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data6
                                                     : 
                                                    ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5) 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5))
                                                      ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data5
                                                      : 
                                                     ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4) 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4))
                                                       ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data4
                                                       : 
                                                      ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3) 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3))
                                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data3
                                                        : 
                                                       ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2) 
                                                          == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                                         & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2))
                                                         ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data2
                                                         : 
                                                        ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1) 
                                                           == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1))
                                                          ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data1
                                                          : 
                                                         ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0) 
                                                            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                                           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0))
                                                           ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data0
                                                           : 
                                                          ((IData)(vlSelf->rst)
                                                            ? 0ULL
                                                            : 
                                                           ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena) 
                                                              & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                                 == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr))) 
                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                             ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                             : 
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                            [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr]))))))))))))))))))
                : ((IData)((0U != (0xb0U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))))
                    ? (((- (QData)((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                    >> 0x14U))))
                    : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui) 
                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc))
                        ? (((- (QData)((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                >> 0x1fU)))) 
                            << 0x14U) | (QData)((IData)(
                                                        (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                         >> 0xcU))))
                        : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jump)
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc
                            : 0ULL))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena)
                ? (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                     > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data
                    : (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                         < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                        & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data
                        : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                            | ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                               & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2))))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data
                            : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2) 
                                | ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                    < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2))))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data
                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2)
                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data
                                    : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                         == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))
                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                        : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op2)
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                            : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op2)
                                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                                : (
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7))
                                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data7
                                                    : 
                                                   ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6) 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6))
                                                     ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data6
                                                     : 
                                                    ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5) 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5))
                                                      ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data5
                                                      : 
                                                     ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4) 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4))
                                                       ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data4
                                                       : 
                                                      ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3) 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3))
                                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data3
                                                        : 
                                                       ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2) 
                                                          == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                                         & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2))
                                                         ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data2
                                                         : 
                                                        ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1) 
                                                           == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1))
                                                          ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data1
                                                          : 
                                                         ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0) 
                                                            == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                                           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0))
                                                           ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data0
                                                           : 
                                                          ((IData)(vlSelf->rst)
                                                            ? 0ULL
                                                            : 
                                                           ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena) 
                                                              & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                                 == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr))) 
                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                             ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                             : 
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                            [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr]))))))))))))))))))
                : ((IData)((0U != (0xb0U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))))
                    ? (((- (QData)((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                    >> 0x14U))))
                    : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui) 
                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc))
                        ? (((- (QData)((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                >> 0x1fU)))) 
                            << 0x14U) | (QData)((IData)(
                                                        (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                         >> 0xcU))))
                        : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jump)
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc
                            : 0ULL))));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[2U] 
        = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy;
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__jalr_pc_ena = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 = 0ULL;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__jalr_pc_ena = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__jalr_pc_ena 
            = (1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr) 
                     & (~ ((((((((((((((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1)) 
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
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena)
                ? (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                     > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data
                    : (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                         < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                        & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data
                        : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                            | ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                               & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1))))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data
                            : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1) 
                                | ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                    < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1))))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data
                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1)
                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data
                                    : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb1_op1)
                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                        : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op1)
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara
                                            : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb3_op1)
                                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara
                                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com8_op1)
                                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data7
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com7_op1)
                                                     ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data6
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com6_op1)
                                                      ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data5
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com5_op1)
                                                       ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data4
                                                       : 
                                                      ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com4_op1)
                                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data3
                                                        : 
                                                       ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com3_op1)
                                                         ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data2
                                                         : 
                                                        ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com2_op1)
                                                          ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data1
                                                          : 
                                                         ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com1_op1)
                                                           ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data0
                                                           : 
                                                          ((IData)(vlSelf->rst)
                                                            ? 0ULL
                                                            : 
                                                           ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena) 
                                                              & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                                 == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr))) 
                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                             ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                             : 
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                            [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr]))))))))))))))))))
                : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc) 
                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jal))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc
                    : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi) 
                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi)) 
                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci))
                        ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__rs1))
                        : 0ULL)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__jalr_pc_ena 
            = (1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr) 
                     & (~ ((((((((((((((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1)) 
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
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena)
                ? (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                     > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data
                    : (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                         < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                        & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data
                        : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                            | ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                               & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1))))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data
                            : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1) 
                                | ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                    < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1))))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data
                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1)
                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data
                                    : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb1_op1)
                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                        : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op1)
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara
                                            : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb3_op1)
                                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara
                                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com8_op1)
                                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data7
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com7_op1)
                                                     ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data6
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com6_op1)
                                                      ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data5
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com5_op1)
                                                       ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data4
                                                       : 
                                                      ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com4_op1)
                                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data3
                                                        : 
                                                       ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com3_op1)
                                                         ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data2
                                                         : 
                                                        ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com2_op1)
                                                          ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data1
                                                          : 
                                                         ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com1_op1)
                                                           ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data0
                                                           : 
                                                          ((IData)(vlSelf->rst)
                                                            ? 0ULL
                                                            : 
                                                           ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena) 
                                                              & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                                 == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr))) 
                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                             ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                             : 
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                            [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr]))))))))))))))))))
                : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc) 
                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc
                    : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi) 
                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi)) 
                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci))
                        ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__rs1))
                        : 0ULL)));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__operand2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1)
            ? (((- (QData)((IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm1 
                                          >> 0x13U))))) 
                << 0x14U) | (QData)((IData)((0xfffffU 
                                             & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm1 
                                                << 1U)))))
            : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))
                ? (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm1) 
                                              >> 0xbU))))) 
                    << 0xcU) | (QData)((IData)((0xfffU 
                                                & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm1) 
                                                   << 1U)))))
                : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                    ? 4ULL : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1)
                               ? (((- (QData)((IData)(
                                                      (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                       >> 0x1fU)))) 
                                   << 0xcU) | (QData)((IData)(
                                                              (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                               >> 0x14U))))
                               : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2)
                                   ? (((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm2 
                                                              >> 0x13U))))) 
                                       << 0x14U) | (QData)((IData)(
                                                                   (0xfffffU 
                                                                    & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm2 
                                                                       << 1U)))))
                                   : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm2) 
                                                                  >> 0xbU))))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (0xfffU 
                                                             & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm2) 
                                                                << 1U)))))
                                       : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
                                           & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                           ? 4ULL : 
                                          ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2)
                                            ? (((- (QData)((IData)(
                                                                   (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                                    >> 0x1fU)))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                                  >> 0x14U))))
                                            : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3)
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm3 
                                                                           >> 0x13U))))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     (0xfffffU 
                                                                      & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm3 
                                                                         << 1U)))))
                                                : (
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm3) 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm3) 
                                                                          << 1U)))))
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
                                                     & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                     ? 4ULL
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                                         >> 0x14U))))
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4)
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm4 
                                                                               >> 0x13U))))) 
                                                        << 0x14U) 
                                                       | (QData)((IData)(
                                                                         (0xfffffU 
                                                                          & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm4 
                                                                             << 1U)))))
                                                       : 
                                                      (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm4) 
                                                                                >> 0xbU))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm4) 
                                                                              << 1U)))))
                                                        : 
                                                       (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
                                                         & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                         ? 4ULL
                                                         : 
                                                        ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4)
                                                          ? 
                                                         (((- (QData)((IData)(
                                                                              (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                                               >> 0x1fU)))) 
                                                           << 0xcU) 
                                                          | (QData)((IData)(
                                                                            (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                                             >> 0x14U))))
                                                          : 
                                                         ((IData)(vlSelf->rst)
                                                           ? 0ULL
                                                           : 0xfULL)))))))))))))))));
}