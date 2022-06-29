// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSocTop.h for the primary calling header

#include "VSocTop___024root.h"
#include "VSocTop__Syms.h"

#include "verilated_dpi.h"

//==========


void VSocTop___024root___ctor_var_reset(VSocTop___024root* vlSelf);

VSocTop___024root::VSocTop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSocTop___024root___ctor_var_reset(this);
}

void VSocTop___024root::__Vconfigure(VSocTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSocTop___024root::~VSocTop___024root() {
}

void VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__regfile10__DOT__difftest_dut_regs_TOP(QData/*63:0*/ Z0, QData/*63:0*/ ra, QData/*63:0*/ sp, QData/*63:0*/ gp, QData/*63:0*/ tp, QData/*63:0*/ t0, QData/*63:0*/ t1, QData/*63:0*/ t2, QData/*63:0*/ fp, QData/*63:0*/ s1, QData/*63:0*/ a0, QData/*63:0*/ a1, QData/*63:0*/ a2, QData/*63:0*/ a3, QData/*63:0*/ a4, QData/*63:0*/ a5, QData/*63:0*/ a6, QData/*63:0*/ a7, QData/*63:0*/ s2, QData/*63:0*/ s3, QData/*63:0*/ s4, QData/*63:0*/ s5, QData/*63:0*/ s6, QData/*63:0*/ s7, QData/*63:0*/ s8, QData/*63:0*/ s9, QData/*63:0*/ s10, QData/*63:0*/ a11, QData/*63:0*/ t3, QData/*63:0*/ t4, QData/*63:0*/ t5, QData/*63:0*/ t6);
void VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_pc_TOP(QData/*63:0*/ pc_data, QData/*63:0*/ exit_code, CData/*0:0*/ endyn, CData/*0:0*/ exe);
void VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_thepc_TOP(QData/*63:0*/ thepc_data);
extern const VlUnpacked<CData/*0:0*/, 64> VSocTop__ConstPool__TABLE_75b8f91e_0;
extern const VlUnpacked<CData/*1:0*/, 64> VSocTop__ConstPool__TABLE_496d821d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSocTop__ConstPool__TABLE_20009a11_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSocTop__ConstPool__TABLE_c01a1f93_0;

void VSocTop___024root___settle__TOP__1(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___settle__TOP__1\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    CData/*5:0*/ __Vtableidx3;
    // Body
    vlSelf->out_axi_aw_id = 0U;
    vlSelf->out_axi_aw_len = 0U;
    vlSelf->out_axi_aw_size = 3U;
    vlSelf->out_axi_aw_burst = 1U;
    vlSelf->out_axi_aw_cache = 2U;
    vlSelf->out_axi_aw_port = 0U;
    vlSelf->out_axi_aw_qos = 0U;
    vlSelf->out_axi_w_last = 1U;
    vlSelf->out_axi_b_ready = 1U;
    vlSelf->out_axi_ar_len = 0U;
    vlSelf->out_axi_ar_burst = 1U;
    vlSelf->out_axi_ar_cache = 2U;
    vlSelf->out_axi_ar_prot = 0U;
    vlSelf->out_axi_ar_qos = 0U;
    vlSelf->out_axi_r_ready = 1U;
    vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand 
        = ((IData)(vlSelf->out_axi_b_valid) & (0U == (IData)(vlSelf->out_axi_b_id)));
    vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand 
        = ((IData)(vlSelf->out_axi_r_valid) & (0U == (IData)(vlSelf->out_axi_r_id)));
    vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand 
        = ((IData)(vlSelf->out_axi_r_valid) & (1U == (IData)(vlSelf->out_axi_r_id)));
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__regfile10__DOT__difftest_dut_regs_TOP(
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [1U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [2U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [3U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [4U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [5U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [6U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [7U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [8U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [9U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                                                [0x1fU]);
    vlSelf->out_axi_w_strb = (((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                               | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                               ? 0xffU : 0U);
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_pc_TOP(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1, vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code, (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn), vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn);
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr = 
        ((IData)((0U != (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))))
          ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
             + (((- (QData)((IData)((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset) 
                                           >> 0xbU))))) 
                 << 0xcU) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset))))
          : 0ULL);
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask 
            = ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                ? 0U : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                         ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                             ? 0xffU : ((IData)(vlSelf->rst)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                                  ? 0xf0U
                                                  : 0xfU)))
                         : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                             ? ((IData)(vlSelf->rst)
                                 ? 0U : ((0U == (3U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 1U))))
                                          ? 3U : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                               >> 1U))))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                >> 1U))))
                                                    ? 0x30U
                                                    : 0xc0U))))
                             : ((IData)(vlSelf->rst)
                                 ? 0U : ((1U & (IData)(
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                        >> 2U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 1U)))
                                              ? ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 0x80U
                                                  : 0x40U)
                                              : ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 0x20U
                                                  : 0x10U))
                                          : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 1U)))
                                              ? ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 8U
                                                  : 4U)
                                              : ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 2U
                                                  : 1U)))))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data 
            = ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                ? 0ULL : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                           ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                               ? vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data
                               : ((IData)(vlSelf->rst)
                                   ? 0ULL : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                              : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))))
                           : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                               ? ((IData)(vlSelf->rst)
                                   ? 0ULL : ((0U == 
                                              (3U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U))))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))
                                              : ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x30U)))))
                               : ((IData)(vlSelf->rst)
                                   ? 0ULL : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x38U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x30U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x28U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x20U)))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x18U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x10U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 8U)
                                                   : (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))))))))));
    }
    vlSelf->SocTop__DOT__t_axi_w_valid = ((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                          | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)));
    vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid 
        = (((1U != (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state)) 
            & (2U != (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state))) 
           & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                         >> 2U))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                       >> 2U))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal 
            = (IData)((0x1bU == (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                          >> 2U))));
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2) 
           - (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                      >> 0x13U))))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2) 
                                         << 0xcU))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res 
        = (((0x3fU >= (0x7fU & ((IData)(0x40U) - (0x3fU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             ? ((- (QData)((IData)((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                  >> 0x3fU)))))) 
                << (0x7fU & ((IData)(0x40U) - (0x3fU 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             : 0ULL) | (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                        >> (0x3fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0x19U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                    >> 2U)))));
    vlSelf->SocTop__DOT__rvcpu_we = (1U & ((~ (IData)(vlSelf->rst)) 
                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus 
        = ((((QData)((IData)(((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs)) 
                              << 0x1fU))) << 0x20U) 
            | ((QData)((IData)((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs) 
                                 << 2U) | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))) 
               << 0xbU)) | (QData)((IData)((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie) 
                                             << 7U) 
                                            | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie) 
                                               << 3U)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
           << (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
           >> (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 
        = (((0x1fU >= (0x3fU & ((IData)(0x20U) - (0x1fU 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             ? ((- (IData)((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                          >> 0x1fU))))) 
                << (0x3fU & ((IData)(0x20U) - (0x1fU 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
             : 0U) | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1) 
                      >> (0x1fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx 
        = ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))
            ? (0xfffU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
            : 0U);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2 
        = (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
           + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                   + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)));
    vlSelf->SocTop__DOT__rvcpu_re = (1U & ((~ (IData)(vlSelf->rst)) 
                                           & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type) 
                                              >> 1U)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type = 
        ((((IData)(vlSelf->rst) ? 0U : (IData)((0x1cU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                    >> 2U))))) 
          << 7U) | ((((IData)(vlSelf->rst) ? 0U : (IData)(
                                                          (0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                               >> 2U))))) 
                     << 6U) | ((((IData)(vlSelf->rst)
                                  ? 0U : (IData)((6U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                      >> 2U))))) 
                                << 5U) | ((((IData)(vlSelf->rst)
                                             ? 0U : (IData)(
                                                            (4U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                 >> 2U))))) 
                                           << 4U) | 
                                          ((((IData)(vlSelf->rst)
                                              ? 0U : (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                  >> 2U))))) 
                                            << 3U) 
                                           | ((((IData)(vlSelf->rst)
                                                 ? 0U
                                                 : (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                >> 2U))))) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(
                                                              (3U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : (IData)(
                                                               (8U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                    >> 2U))))))))))));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu_data_addr = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst = 0U;
    } else {
        vlSelf->SocTop__DOT__rvcpu_data_addr = vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel 
            = (7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                     >> 0xcU));
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc;
        vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst;
    }
    vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1 
        = ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache) 
           & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1));
    vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena2 
        = ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache) 
           & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2));
    VSocTop___024root____Vdpiimwrap_SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_dut_thepc_TOP(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc 
        = ((IData)(vlSelf->rst) ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc);
    vlSelf->SocTop__DOT__i_cache_inst_data = (((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data 
                                                == 
                                                (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                 >> 9U)) 
                                               & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok))
                                               ? vlSelf->SocTop__DOT__i_cache12__DOT__inst_data_o
                                               : ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok)
                                                   ? vlSelf->SocTop__DOT__i_cache12__DOT__data_inst
                                                   : 0U));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__i_cache12__DOT__state_inst = 1U;
    } else if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                         >> 5U)))) {
        if ((0x10U & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)))) {
                            if (vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok) {
                                vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 1U;
                            }
                            vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 0x10U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                             >> 3U)))) {
            if ((4U & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)))) {
                        if (vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok) {
                            vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 1U;
                        }
                        vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 4U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)))) {
                    if ((((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data 
                           == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                               >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild)) 
                         | ((vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data 
                             == (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                 >> 9U)) & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild)))) {
                        vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 4U;
                    }
                    vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 0x10U;
                }
            } else if ((1U & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))) {
                if (vlSelf->rst) {
                    vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 2U;
                }
                vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = 1U;
            }
        }
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena 
        = ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
             & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)) 
            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
           & (0ULL != vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc));
    vlSelf->SocTop__DOT__arbitrate_d_ok = ((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand) 
                                           & (0U == (IData)(vlSelf->out_axi_b_resp)));
    if ((1U & ((IData)(vlSelf->rst) | (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))))) {
        vlSelf->SocTop__DOT__rvcpu_wmask = 0U;
        vlSelf->SocTop__DOT__rvcpu_data_o = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu_wmask = vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask;
        vlSelf->SocTop__DOT__rvcpu_data_o = vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data;
    }
    vlSelf->out_axi_w_valid = vlSelf->SocTop__DOT__t_axi_w_valid;
    __Vtableidx3 = (((IData)(vlSelf->out_axi_r_last) 
                     << 5U) | (((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand) 
                                << 4U) | (((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                           << 3U) | 
                                          ((((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                             & (IData)(vlSelf->out_axi_ar_ready)) 
                                            << 2U) 
                                           | (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state)))));
    if (VSocTop__ConstPool__TABLE_75b8f91e_0[__Vtableidx3]) {
        vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt 
            = VSocTop__ConstPool__TABLE_496d821d_0[__Vtableidx3];
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res 
        = (((QData)((IData)((- (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res 
        = (((QData)((IData)((- (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res 
        = (((QData)((IData)((- (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2 
        = (1U & ((((IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset 
        = (0xfffU & ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                      ? (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                         >> 0x14U) : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                                       ? ((0xfe0U & 
                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 7U)))
                                       : 0U)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40000000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x40007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x4000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x40007000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x3000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x6000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x7000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40000000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai 
        = (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2 = (IData)(
                                                            (0U 
                                                             != 
                                                             (0x4dU 
                                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x3000U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                    & (0U == (0x7000U & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
           & (1U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                     >> 0x14U)));
    vlSelf->out_axi_aw_addr = (((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                                ? vlSelf->SocTop__DOT__rvcpu_data_addr
                                : 0ULL);
    vlSelf->SocTop__DOT__d_cache13__DOT__dirty1[(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                            >> 3U)))] 
        = (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1) 
            & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_make)) 
           | ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_hit) 
              & (vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
                 == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                     >> 9U))));
    vlSelf->SocTop__DOT__d_cache13__DOT__dirty2[(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                            >> 3U)))] 
        = (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2) 
            & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_make)) 
           | ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_hit) 
              & (vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
                 == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                     >> 9U))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
        = ((0x80000U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->SocTop__DOT__i_cache_inst_data 
                                            >> 0x15U)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm 
        = ((0x800U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                      >> 0x14U)) | ((0x400U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 8U)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr 
        = (IData)((0x67U == (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)));
    vlSelf->SocTop__DOT__i_cache12__DOT__state_inst 
        = vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt;
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0ULL;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0xbULL;
                    }
                }
            }
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0ULL;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0x8000000000000007ULL;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type) 
           & (- (IData)((1U & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))))));
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
        if (((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 1U;
        } else if (((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en 
                = (0ULL != vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1);
        } else if (((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en 
                = (0ULL != vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1);
        } else if ((0x10U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
            if ((0x20U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
            }
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena) 
           & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena)));
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                    if ((0x10U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena 
                            = (0x20U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode));
                    }
                }
            }
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena = 0U;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena = 0U;
    }
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 1U;
                    } else if ((0x20U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
                    }
                }
            }
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
    }
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
        if (((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en 
                = (0U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr));
        } else if (((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 1U;
        } else if (((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 1U;
        } else if ((0x10U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
            if ((0x20U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
            }
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena 
        = ((0U != (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                            >> 7U))) & ((((IData)((0U 
                                                   != 
                                                   (0xfaU 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type)))) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch 
        = (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type) 
                  >> 2U) & ((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                             ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                != vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)
                             : ((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                 ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                    == vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)
                                 : ((0x10U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                     ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                        >= vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)
                                     : ((0x20U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                         ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                            < vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)
                                         : ((4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                             ? (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2))
                                             : ((8U 
                                                 == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                                                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2)))))))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res 
        = ((IData)(vlSelf->rst) ? 0ULL : ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? ((0x40U 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        << 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm)
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2)))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        ^ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (4ULL 
                                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        << 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (4ULL 
                                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : (QData)((IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                                           < vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res
                                                        : 
                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                        ^ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1
                                                        : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2))
                                                        : (QData)((IData)(
                                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                                           < vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res
                                                        : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2
                                                        : 0ULL)))))))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xf7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   (((((1U 
                                                        & (((IData)(
                                                                    ((0x80U 
                                                                      == 
                                                                      (0x80U 
                                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                     & (0x7000U 
                                                                        == 
                                                                        (0x7000U 
                                                                         & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                            | (IData)(
                                                                      ((4U 
                                                                        == 
                                                                        (4U 
                                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                       & (0x5000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst))))) 
                                                           | (IData)(
                                                                     ((0x10U 
                                                                       == 
                                                                       (0x10U 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                      & (0x4000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw)))) 
              << 3U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xdfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((IData)(
                                                                  ((0x80U 
                                                                    == 
                                                                    (0x80U 
                                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                          & (0x18U 
                                                             == 
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                              >> 0x19U))) 
                                                         | (1U 
                                                            & (IData)(
                                                                      ((4U 
                                                                        == 
                                                                        (4U 
                                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                       & (0x7000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                        | (1U 
                                                           & (IData)(
                                                                     ((0x10U 
                                                                       == 
                                                                       (0x10U 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                      & (0x7000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw)))) 
              << 5U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xefU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((IData)(
                                                                  ((0x80U 
                                                                    == 
                                                                    (0x80U 
                                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                              >> 0x14U))) 
                                                         | (1U 
                                                            & (IData)(
                                                                      ((4U 
                                                                        == 
                                                                        (4U 
                                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                       & (0x6000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                        | (1U 
                                                           & (IData)(
                                                                     ((0x10U 
                                                                       == 
                                                                       (0x10U 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                      & (0x6000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw)))) 
              << 4U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2)
            ? (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                        >> 0x14U)) : 0U);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xbfU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                                        | (1U 
                                                           & (IData)(
                                                                     ((0x10U 
                                                                       == 
                                                                       (0x10U 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                      & (0x1000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw)))) 
              << 6U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0x7fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs) 
                                                        | (1U 
                                                           & (IData)(
                                                                     ((0x10U 
                                                                       == 
                                                                       (0x10U 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                      & (0x5000U 
                                                                         == 
                                                                         (0x40007000U 
                                                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw)))) 
              << 7U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1 = 
        (1U & ((IData)((0U != (0x7fU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type)))) 
               | (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfbU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((1U 
                                                         & (((IData)(
                                                                     ((0x80U 
                                                                       == 
                                                                       (0x80U 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                      & (0x6000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                             | (IData)(
                                                                       ((4U 
                                                                         == 
                                                                         (4U 
                                                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                        & (0x4000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst))))) 
                                                            | (IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x10U 
                                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                       & (0x3000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add)) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))) 
              << 2U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfeU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | ((IData)(vlSelf->rst) ? 0U : (1U & (((
                                                   (((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc) 
                                                         | (1U 
                                                            & (IData)(
                                                                      ((4U 
                                                                        == 
                                                                        (4U 
                                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                       & (0U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                        | (1U 
                                                           & (IData)(
                                                                     ((0x10U 
                                                                       == 
                                                                       (0x10U 
                                                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                      & (0U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw)) 
                                                 | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfdU & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->rst) ? 0U : (1U & ((
                                                   ((((((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi) 
                                                          | (1U 
                                                             & (IData)(
                                                                       ((4U 
                                                                         == 
                                                                         (4U 
                                                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                        & (0x1000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                         | (1U 
                                                            & (IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x10U 
                                                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                                       & (0x2000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai)) 
                                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or)) 
                                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal)) 
                                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw)) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw)) 
                                                  | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))) 
              << 1U));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
            ? 0xbU : (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                               >> 0xfU)));
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 1U;
    } else if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
                            if (vlSelf->SocTop__DOT__arbitrate_d_ok) {
                                vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 0x10U;
                            }
                            vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 0x20U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
                        if (vlSelf->SocTop__DOT__d_cache13__DOT__write_ok) {
                            vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 1U;
                        }
                        vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 0x10U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
                    if (((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                             >> 3U)))] 
                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))])) 
                         | ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))] 
                                < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))])) 
                            & ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild) 
                               & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild))))) {
                        vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 0x20U;
                    }
                    vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 0x10U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
                if (vlSelf->SocTop__DOT__d_cache13__DOT__store_ok) {
                    vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 1U;
                }
                vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 4U;
            }
        }
    } else if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))) {
            if ((((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
                   == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                       >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                 | ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild)))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 4U;
            }
            vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 8U;
        }
    } else if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        if (vlSelf->SocTop__DOT__rvcpu_we) {
            vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 2U;
        }
        vlSelf->SocTop__DOT__d_cache13__DOT__state_store = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__d_cache13__DOT__state_load = 1U;
    } else if ((0x20U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))) {
                            if (vlSelf->SocTop__DOT__arbitrate_d_ok) {
                                vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 0x10U;
                            }
                            vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 0x20U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))) {
                        if (vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok) {
                            vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 0x10U;
                        }
                        vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))) {
                    if (((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                          [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                             >> 3U)))] 
                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))])) 
                         | ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty2
                             [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 3U)))] 
                             & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))] 
                                < vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                [(0x3fU & (IData)((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 3U)))])) 
                            & ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild) 
                               & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild))))) {
                        vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 0x20U;
                    }
                    vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 0x10U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((1U & (~ ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))) {
                if (vlSelf->SocTop__DOT__d_cache13__DOT__load_ok) {
                    vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 1U;
                }
                vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 4U;
            }
        }
    } else if ((2U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if ((1U & (~ (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))) {
            if ((((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data 
                   == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                       >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild)) 
                 | ((vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data 
                     == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                         >> 9U)) & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild)))) {
                vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 4U;
            }
            vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 8U;
        }
    } else if ((1U & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) {
        if (vlSelf->SocTop__DOT__rvcpu_re) {
            vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 2U;
        }
        vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = 1U;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
            ? ((1U & ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->rst)
                                                   ? 0U
                                                   : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr))))
                ? ((((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                               >> 0xfU)) == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr)) 
                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                    ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                    : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                   [(0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                              >> 0xfU))]) : 0ULL) : vlSelf->SocTop__DOT__rvcpu_inst_addr);
    vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req 
        = (1U & ((~ (IData)(vlSelf->rst)) & (~ ((4U 
                                                 == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))
                                                 ? (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_o)
                                                 : 
                                                ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok) 
                                                 & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_write))))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause 
        = ((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus 
        = ((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
        = (((((((((- (QData)((IData)(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))))) 
                  & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle) 
                 | ((- (QData)((IData)(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                    & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus)) 
                | ((- (QData)((IData)(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                        | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))))) 
                   & (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                      << 2U))) | ((- (QData)((IData)(
                                                     (((0x341U 
                                                        == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))))) 
                                  & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc)) 
              | ((- (QData)((IData)(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                 & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause)) 
             | ((- (QData)((IData)(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                & ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                   << 7U))) | ((- (QData)((IData)((
                                                   (0x344U 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                               & (QData)((IData)(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                  << 7U))))) 
           | ((- (QData)((IData)(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
              & vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena)
            ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
                ? 0xbU : (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                   >> 7U))) : 0U);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1 
        = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1)
            ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1)
            : 0U);
    vlSelf->SocTop__DOT__d_cache13__DOT__state_load 
        = vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt;
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc 
        = (vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1 
           + ((IData)((0x6fU == (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))
               ? (((- (QData)((IData)((1U & (vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                             >> 0x13U))))) 
                   << 0x14U) | (QData)((IData)((0xfffffU 
                                                & (vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                                   << 1U)))))
               : ((IData)((0x63U == (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))
                   ? (((- (QData)((IData)((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                 >> 0xbU))))) 
                       << 0xcU) | (QData)((IData)((0xfffU 
                                                   & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                      << 1U)))))
                   : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                       ? (((- (QData)((IData)((vlSelf->SocTop__DOT__i_cache_inst_data 
                                               >> 0x1fU)))) 
                           << 0xcU) | (QData)((IData)(
                                                      (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                       >> 0x14U))))
                       : 4ULL))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus) 
            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)) 
           | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
              | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena)));
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch) 
            | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena)) 
           | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
    if ((0x80U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data = 0ULL;
        if (((0x40U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1;
        } else if (((0x80U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                   | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1);
        } else if (((1U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                   & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1));
        } else if ((0x10U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))) {
            vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc;
        }
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data = 0ULL;
    }
    if (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc;
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data 
        = ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))
            ? vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2
            : ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type) 
                 >> 7U) & (7U != (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode)))
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
            == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1 
        = (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
            == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
    vlSelf->out_axi_w_data = (((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                               | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                               ? (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                   & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                   ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l
                                   : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                       & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                       ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb
                                       : 0ULL)) : 0ULL);
    if ((4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) {
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1 
            = vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_mask;
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2 
            = vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_mask;
        vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 
            = vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_data;
        vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 
            = vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_data;
    } else {
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1 
            = ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                 & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1))
                ? 0xffU : (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache) 
                            & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1))
                            ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_mask)
                            : ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                                 & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                                & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1))
                                ? 0xffU : 0U)));
        vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2 
            = ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                 & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2))
                ? 0xffU : (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache) 
                            & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2))
                            ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_mask)
                            : ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                                 & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                                & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2))
                                ? 0xffU : 0U)));
        vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 
            = ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                 & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1))
                ? vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data
                : (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache) 
                    & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1))
                    ? vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data
                    : ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                         & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                        & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1))
                        ? vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data_l
                        : 0ULL)));
        vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 
            = ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                 & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2))
                ? vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data
                : (((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache) 
                    & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2))
                    ? vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data
                    : ((((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                         & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)) 
                        & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2))
                        ? vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data_l
                        : 0ULL)));
    }
    vlSelf->SocTop__DOT__t_axi_aw_valid = (((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                            | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state))) 
                                           & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                               & (0x20U 
                                                  == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                               ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__outw_data_ena_l)
                                               : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                   & (0x20U 
                                                      == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) 
                                                  & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena))));
    vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid 
        = (((1U != (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state)) 
            & (2U != (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state))) 
           & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
               & (0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
               ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w_l)
               : (((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                   & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) 
                  & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w))));
    vlSelf->SocTop__DOT__d_cache_data_out = (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                              & (4U 
                                                 == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                              ? vlSelf->SocTop__DOT__d_cache13__DOT__load_data_o
                                              : (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                                  & ((0x10U 
                                                      == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                                                     & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))
                                                  ? vlSelf->SocTop__DOT__d_cache13__DOT__data_load
                                                  : 0ULL));
    if (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt = 3U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt 
            = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value;
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                ? 0U : (3U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                               ? (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                          >> 0xbU))
                               : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause);
        vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                     | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                    >> 7U)) : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie))));
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt 
        = (1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                     ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                     : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                    >> 3U)) : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena 
        = ((IData)(vlSelf->rst) ? 0U : (1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr) 
                                              & (~ 
                                                 (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                                   & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))))))));
    vlSelf->out_axi_aw_valid = vlSelf->SocTop__DOT__t_axi_aw_valid;
    __Vtableidx1 = (((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand) 
                     << 6U) | (((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                << 5U) | (((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                           << 4U) | 
                                          ((((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                             & (IData)(vlSelf->out_axi_w_ready)) 
                                            << 3U) 
                                           | ((((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                                & (IData)(vlSelf->out_axi_aw_ready)) 
                                               << 2U) 
                                              | (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state))))));
    if (VSocTop__ConstPool__TABLE_20009a11_0[__Vtableidx1]) {
        vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex 
            = VSocTop__ConstPool__TABLE_c01a1f93_0[__Vtableidx1];
    }
    if (vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) {
        vlSelf->out_axi_ar_id = 1U;
        vlSelf->out_axi_ar_size = 2U;
    } else {
        vlSelf->out_axi_ar_id = 0U;
        vlSelf->out_axi_ar_size = 3U;
    }
    vlSelf->out_axi_ar_valid = ((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                | (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid));
    vlSelf->out_axi_ar_addr = ((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                ? vlSelf->SocTop__DOT__rvcpu_inst_addr
                                : ((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid)
                                    ? vlSelf->SocTop__DOT__rvcpu_data_addr
                                    : 0ULL));
    __Vtableidx2 = (((IData)(vlSelf->out_axi_r_last) 
                     << 5U) | (((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand) 
                                << 4U) | (((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                           << 3U) | 
                                          ((((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                             & (IData)(vlSelf->out_axi_ar_ready)) 
                                            << 2U) 
                                           | (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state)))));
    if (VSocTop__ConstPool__TABLE_75b8f91e_0[__Vtableidx2]) {
        vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt 
            = VSocTop__ConstPool__TABLE_496d821d_0[__Vtableidx2];
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte 
        = (0xffU & ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                   >> 2U))) ? ((1U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x38U))
                                                    : (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x30U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x28U))
                                                    : (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x20U))))
                     : ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlSelf->SocTop__DOT__d_cache_data_out 
                                                               >> 0x10U)))
                         : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                             ? (IData)((vlSelf->SocTop__DOT__d_cache_data_out 
                                        >> 8U)) : (IData)(vlSelf->SocTop__DOT__d_cache_data_out)))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte 
        = (0xffffU & ((0U == (3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                            >> 1U))))
                       ? (IData)(vlSelf->SocTop__DOT__d_cache_data_out)
                       : ((1U == (3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                >> 1U))))
                           ? (IData)((vlSelf->SocTop__DOT__d_cache_data_out 
                                      >> 0x10U)) : 
                          ((2U == (3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 1U))))
                            ? (IData)((vlSelf->SocTop__DOT__d_cache_data_out 
                                       >> 0x20U)) : (IData)(
                                                            (vlSelf->SocTop__DOT__d_cache_data_out 
                                                             >> 0x30U))))));
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word 
        = ((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                          >> 2U))) ? (IData)((vlSelf->SocTop__DOT__d_cache_data_out 
                                              >> 0x20U))
            : (IData)(vlSelf->SocTop__DOT__d_cache_data_out));
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush = 
        ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data = 
        ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
          ? ((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
              ? ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                  ? ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                      ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? 0ULL : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word)))
                      : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte))
                          : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte))))
                  : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                      ? ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? vlSelf->SocTop__DOT__d_cache_data_out
                          : (((QData)((IData)((- (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word 
                                                          >> 0x1fU))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word))))
                      : ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                          ? (((- (QData)((IData)((1U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte) 
                                                     >> 0xfU))))) 
                              << 0x10U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte)))
                          : (((- (QData)((IData)((1U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte) 
                                                     >> 7U))))) 
                              << 8U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte))))))
              : 0ULL) : vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data);
    if (vlSelf->rst) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl = 0U;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op = 0ULL;
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2 = 0ULL;
    } else {
        vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl 
            = (((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu_we)) 
                                            & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                                   & (4U 
                                                      == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                                   ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h)
                                                   : 
                                                  (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                                    & ((0x10U 
                                                        == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                                                       & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))
                                                    ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem_l)
                                                    : 
                                                   (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                     & (4U 
                                                        == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                                     ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__store_finish)
                                                     : 
                                                    (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                      & ((0x10U 
                                                          == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                                                         & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) 
                                                     & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem))))))))
                ? 0x1fU : (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))
                            ? 0xfU : (((IData)(vlSelf->rst)
                                        ? 0U : (1U 
                                                & ((((IData)(vlSelf->rst)
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                          & (2U 
                                                             == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                            == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr))))) 
                                                    | ((IData)(vlSelf->rst)
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                            & (2U 
                                                               == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                           & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                              == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))) 
                                                   | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush) 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req)))))
                                       ? 7U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req)
                                                ? 3U
                                                : 0U))));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1)
                ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)
                    ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data
                    : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1)
                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data
                        : (((~ (IData)(vlSelf->rst)) 
                            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                            ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                 == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                               [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                            : 0ULL))) : (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi)
                                              ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1))
                                              : 0ULL)));
        vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2 
            = ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2)
                ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))
                    ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data
                    : ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                         == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))
                        ? vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data
                        : (((~ (IData)(vlSelf->rst)) 
                            & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                            ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                 == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                               [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                            : 0ULL))) : ((IData)((0U 
                                                  != 
                                                  (0xb0U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))))
                                          ? (((- (QData)((IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                >> 0x14U))))
                                          : (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui) 
                                              | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc))
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                      >> 0x1fU)))) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                    >> 0xcU))))
                                              : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump)
                                                  ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc
                                                  : 0ULL))));
    }
}

void VSocTop___024root___eval_initial(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void VSocTop___024root___eval_settle(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___eval_settle\n"); );
    // Body
    VSocTop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VSocTop___024root___final(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___final\n"); );
}

void VSocTop___024root___ctor_var_reset(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->out_axi_aw_id = VL_RAND_RESET_I(4);
    vlSelf->out_axi_aw_addr = VL_RAND_RESET_Q(64);
    vlSelf->out_axi_aw_len = VL_RAND_RESET_I(8);
    vlSelf->out_axi_aw_size = VL_RAND_RESET_I(3);
    vlSelf->out_axi_aw_burst = VL_RAND_RESET_I(2);
    vlSelf->out_axi_aw_cache = VL_RAND_RESET_I(4);
    vlSelf->out_axi_aw_port = VL_RAND_RESET_I(3);
    vlSelf->out_axi_aw_qos = VL_RAND_RESET_I(4);
    vlSelf->out_axi_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->out_axi_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->out_axi_w_data = VL_RAND_RESET_Q(64);
    vlSelf->out_axi_w_strb = VL_RAND_RESET_I(8);
    vlSelf->out_axi_w_last = VL_RAND_RESET_I(1);
    vlSelf->out_axi_w_valid = VL_RAND_RESET_I(1);
    vlSelf->out_axi_w_ready = VL_RAND_RESET_I(1);
    vlSelf->out_axi_b_id = VL_RAND_RESET_I(4);
    vlSelf->out_axi_b_resp = VL_RAND_RESET_I(2);
    vlSelf->out_axi_b_valid = VL_RAND_RESET_I(1);
    vlSelf->out_axi_b_ready = VL_RAND_RESET_I(1);
    vlSelf->out_axi_ar_id = VL_RAND_RESET_I(4);
    vlSelf->out_axi_ar_addr = VL_RAND_RESET_Q(64);
    vlSelf->out_axi_ar_len = VL_RAND_RESET_I(8);
    vlSelf->out_axi_ar_size = VL_RAND_RESET_I(3);
    vlSelf->out_axi_ar_burst = VL_RAND_RESET_I(2);
    vlSelf->out_axi_ar_cache = VL_RAND_RESET_I(4);
    vlSelf->out_axi_ar_prot = VL_RAND_RESET_I(3);
    vlSelf->out_axi_ar_qos = VL_RAND_RESET_I(4);
    vlSelf->out_axi_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->out_axi_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->out_axi_r_id = VL_RAND_RESET_I(4);
    vlSelf->out_axi_r_data = VL_RAND_RESET_Q(64);
    vlSelf->out_axi_r_resp = VL_RAND_RESET_I(2);
    vlSelf->out_axi_r_last = VL_RAND_RESET_I(1);
    vlSelf->out_axi_r_valid = VL_RAND_RESET_I(1);
    vlSelf->out_axi_r_ready = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu_inst_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu_data_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu_wmask = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu_data_o = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu_we = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu_re = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache_inst_data = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__d_cache_data_out = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__arbitrate_d_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__t_axi_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__t_axi_w_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1 = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2 = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset = VL_RAND_RESET_I(12);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset = VL_RAND_RESET_I(12);
    vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm = VL_RAND_RESET_I(20);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm = VL_RAND_RESET_I(12);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx = VL_RAND_RESET_I(12);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base = VL_RAND_RESET_Q(62);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte = VL_RAND_RESET_I(16);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena2 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache12__DOT__i_counter2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->SocTop__DOT__i_cache12__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__i_cache12__DOT__state_inst = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache12__DOT__inst_data_o = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_o = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache12__DOT__data_inst = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_write = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data = VL_RAND_RESET_Q(55);
    vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data = VL_RAND_RESET_Q(55);
    vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__d_cache13__DOT__in_data1 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1 = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__d_cache13__DOT__in_data2 = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache13__DOT__counter2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->SocTop__DOT__d_cache13__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache13__DOT__dirty1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache13__DOT__dirty2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->SocTop__DOT__d_cache13__DOT__state_store = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__d_cache13__DOT__store_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__write_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__write_incache = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_mask = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__d_cache13__DOT__dirty_make = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__count_write1 = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__d_cache13__DOT__count_write2 = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_mask = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_mask = VL_RAND_RESET_I(8);
    vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache13__DOT__store_finish = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__dirty_hit = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__count_hit1 = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__d_cache13__DOT__count_hit2 = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__d_cache13__DOT__state_load = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt = VL_RAND_RESET_I(6);
    vlSelf->SocTop__DOT__d_cache13__DOT__load_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__load_data_o = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__load_hit_count1 = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__d_cache13__DOT__load_hit_count2 = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache13__DOT__outw_data_ena_l = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem_l = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__data_load = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w_l = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__load_write_count1 = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__d_cache13__DOT__load_write_count2 = VL_RAND_RESET_I(3);
    vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2 = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data_l = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__d_cache13__DOT__read_cache = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__ram[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data = VL_RAND_RESET_Q(55);
    vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__ram[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data = VL_RAND_RESET_Q(55);
    vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data = VL_RAND_RESET_Q(64);
    vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt = VL_RAND_RESET_I(2);
    vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_okreg = VL_RAND_RESET_I(1);
    vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt = VL_RAND_RESET_I(32);
    vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_data_outp = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__SocTop__DOT__rvcpu_inst_addr = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache12__DOT__i_counter2__v0 = 0;
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache12__DOT__i_counter2__v0 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache12__DOT__i_counter1__v0 = 0;
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache12__DOT__i_counter1__v0 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram__v0 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache12__DOT__u_tag01__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram__v0 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvlsb__SocTop__DOT__i_cache12__DOT__u_tag02__DOT__ram__v1 = 0;
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}