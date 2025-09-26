// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090015_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090015_top__Syms.h"
#include "Vysyx_24090015_top___024root.h"

void Vysyx_24090015_top___024root____Vdpiexp_ysyx_24090015_top__DOT__reg0__DOT__read_wire_TOP(Vysyx_24090015_top__Syms* __restrict vlSymsp, IData/*31:0*/ sec, IData/*31:0*/ &read_wire__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root____Vdpiexp_ysyx_24090015_top__DOT__reg0__DOT__read_wire_TOP\n"); );
    // Init
    // Body
    read_wire__Vfuncrtn = vlSymsp->TOP.ysyx_24090015_top__DOT__reg0__DOT__rf
        [(0x1fU & sec)];
}

void Vysyx_24090015_top___024root____Vdpiexp_ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__read_wire_TOP(Vysyx_24090015_top__Syms* __restrict vlSymsp, IData/*31:0*/ sec, IData/*31:0*/ &read_wire__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root____Vdpiexp_ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__read_wire_TOP\n"); );
    // Init
    // Body
    read_wire__Vfuncrtn = vlSymsp->TOP.ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS
        [(3U & sec)];
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__act(Vysyx_24090015_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24090015_top___024root___eval_triggers__act(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->ysyx_24090015_top__DOT__ifu_respValid) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__ifu_respValid));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__ifu_respValid 
        = vlSelf->ysyx_24090015_top__DOT__ifu_respValid;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24090015_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_24090015_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ &ebreak__Vfuncrtn);
void Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, CData/*7:0*/ wmask, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_sequent__TOP__0(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ebreak__0__Vfuncout;
    __Vfunc_ebreak__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    __Vfunc_pmem_read__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_read__4__Vfuncout;
    __Vfunc_pmem_read__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_read__5__Vfuncout;
    __Vfunc_pmem_read__5__Vfuncout = 0;
    CData/*1:0*/ __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state;
    __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state = 0;
    CData/*0:0*/ __Vdly__ysyx_24090015_top__DOT__lsu_respValid;
    __Vdly__ysyx_24090015_top__DOT__lsu_respValid = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_24090015_top__DOT__reg0__DOT__rf__v0;
    __Vdlyvdim0__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24090015_top__DOT__reg0__DOT__rf__v0;
    __Vdlyvval__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0;
    __Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0;
    __Vdlyvdim0__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0;
    __Vdlyvval__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0;
    __Vdlyvset__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1;
    __Vdlyvdim0__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1;
    __Vdlyvval__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1;
    __Vdlyvset__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1 = 0;
    // Body
    __Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 = 0U;
    __Vdlyvset__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0 = 0U;
    __Vdlyvset__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1 = 0U;
    __Vdly__ysyx_24090015_top__DOT__lsu_respValid = vlSelf->ysyx_24090015_top__DOT__lsu_respValid;
    __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state 
        = vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state;
    vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid 
        = vlSelf->ysyx_24090015_top__DOT__ifu_respValid;
    Vysyx_24090015_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->inst, __Vfunc_ebreak__0__Vfuncout);
    vlSelf->ysyx_24090015_top__DOT__ebreak_ret = __Vfunc_ebreak__0__Vfuncout;
    vlSelf->flag = (1U & vlSelf->ysyx_24090015_top__DOT__ebreak_ret);
    if (((IData)(vlSelf->ysyx_24090015_top__DOT__wen) 
         & (0U != (IData)(vlSelf->ysyx_24090015_top__DOT__rd)))) {
        __Vdlyvval__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 
            = vlSelf->ysyx_24090015_top__DOT__rd_wdata;
        __Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 
            = vlSelf->ysyx_24090015_top__DOT__rd;
    }
    if (((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen) 
         & ((0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)) 
            | ((0x300U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)) 
               | ((0x302U != (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)) 
                  & ((0x305U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)) 
                     | ((0x341U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)) 
                        | (0x342U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))))))))) {
        __Vdlyvval__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0 
            = vlSelf->ysyx_24090015_top__DOT__csr_wdata0;
        __Vdlyvset__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0 = 1U;
        __Vdlyvdim0__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0 
            = ((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen)
                ? ((0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))
                    ? 2U : ((0x300U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))
                             ? 0U : ((0x302U == (0xfffU 
                                                 & vlSelf->ysyx_24090015_top__DOT__imm))
                                      ? 0U : ((0x305U 
                                               == (0xfffU 
                                                   & vlSelf->ysyx_24090015_top__DOT__imm))
                                               ? 1U
                                               : ((0x341U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->ysyx_24090015_top__DOT__imm))
                                                   ? 2U
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->ysyx_24090015_top__DOT__imm))
                                                    ? 3U
                                                    : 0U))))))
                : 0U);
    }
    if (((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen) 
         & (0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)))) {
        __Vdlyvval__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1 
            = vlSelf->ysyx_24090015_top__DOT__csr_wdata1;
        __Vdlyvset__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1 = 1U;
        __Vdlyvdim0__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1 
            = ((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen)
                ? ((0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))
                    ? 3U : 0U) : 0U);
    }
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state))) {
            if (vlSelf->ysyx_24090015_top__DOT__lsu_reqValid) {
                Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__lsu_addr, (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wmask), __Vfunc_pmem_read__2__Vfuncout);
                __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state = 2U;
                vlSelf->ysyx_24090015_top__DOT__lsu_rdata 
                    = (((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_reqValid) 
                        & (~ (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wen)))
                        ? __Vfunc_pmem_read__2__Vfuncout
                        : 0U);
                __Vdly__ysyx_24090015_top__DOT__lsu_respValid 
                    = vlSelf->ysyx_24090015_top__DOT__lsu_reqValid;
                if (((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_reqValid) 
                     & (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wen))) {
                    Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__lsu_addr, vlSelf->ysyx_24090015_top__DOT__lsu_wdata, (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wmask));
                }
            } else if (vlSelf->ysyx_24090015_top__DOT__ifu_reqValid) {
                Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__ifu_raddr, 0xfU, __Vfunc_pmem_read__4__Vfuncout);
                __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state = 1U;
                if (vlSelf->ysyx_24090015_top__DOT__ifu_reqValid) {
                    vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                        = __Vfunc_pmem_read__4__Vfuncout;
                    vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = 1U;
                } else {
                    vlSelf->ysyx_24090015_top__DOT__ifu_rdata = 0U;
                    vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = 0U;
                }
            }
        } else if ((1U == (IData)(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state))) {
            vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = 0U;
            __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state = 0U;
        } else if ((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state))) {
            if (vlSelf->ysyx_24090015_top__DOT__ifu_reqValid) {
                Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__ifu_raddr, 0xfU, __Vfunc_pmem_read__5__Vfuncout);
                __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state = 1U;
                if (vlSelf->ysyx_24090015_top__DOT__ifu_reqValid) {
                    vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                        = __Vfunc_pmem_read__5__Vfuncout;
                    vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = 1U;
                } else {
                    vlSelf->ysyx_24090015_top__DOT__ifu_rdata = 0U;
                    vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = 0U;
                }
                __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state = 1U;
            } else {
                __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state = 0U;
            }
            __Vdly__ysyx_24090015_top__DOT__lsu_respValid = 0U;
        }
    } else {
        __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state = 0U;
        vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = 0U;
        __Vdly__ysyx_24090015_top__DOT__lsu_respValid = 0U;
        vlSelf->ysyx_24090015_top__DOT__lsu_rdata = 0U;
    }
    if (vlSelf->rst) {
        if (vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state) {
            if (vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state) {
                if (vlSelf->ysyx_24090015_top__DOT__lsu_respValid) {
                    vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state = 0U;
                    vlSelf->ysyx_24090015_top__DOT__lsu_reqValid = 0U;
                }
            }
        } else if (vlSelf->ysyx_24090015_top__DOT__pmem_work) {
            vlSelf->ysyx_24090015_top__DOT__lsu_reqValid = 1U;
            vlSelf->ysyx_24090015_top__DOT__lsu_addr 
                = vlSelf->ysyx_24090015_top__DOT__pmem_raddr;
            vlSelf->ysyx_24090015_top__DOT__lsu_wdata 
                = ((IData)(vlSelf->ysyx_24090015_top__DOT__pmem_ls)
                    ? 0U : vlSelf->ysyx_24090015_top__DOT__pmem_wdata);
            vlSelf->ysyx_24090015_top__DOT__lsu_wmask 
                = ((IData)(vlSelf->ysyx_24090015_top__DOT__pmem_ls)
                    ? 0U : (0xfU & (IData)(vlSelf->ysyx_24090015_top__DOT__wmask)));
            vlSelf->ysyx_24090015_top__DOT__lsu_wen 
                = (1U & (~ (IData)(vlSelf->ysyx_24090015_top__DOT__pmem_ls)));
        }
        if (vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state) {
            if (vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state) {
                if (vlSelf->ysyx_24090015_top__DOT__ifu_respValid) {
                    vlSelf->ysyx_24090015_top__DOT__ifu_raddr 
                        = vlSelf->pc;
                    vlSelf->ysyx_24090015_top__DOT__ifu_reqValid = 0U;
                    vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state = 0U;
                }
            }
        } else {
            vlSelf->ysyx_24090015_top__DOT__ifu_reqValid = 1U;
            vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state = 1U;
        }
    } else {
        vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state = 0U;
        vlSelf->ysyx_24090015_top__DOT__lsu_reqValid = 0U;
        vlSelf->ysyx_24090015_top__DOT__lsu_addr = 0U;
        vlSelf->ysyx_24090015_top__DOT__lsu_wdata = 0U;
        vlSelf->ysyx_24090015_top__DOT__lsu_wmask = 0U;
        vlSelf->ysyx_24090015_top__DOT__lsu_wen = 0U;
        vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state = 0U;
        vlSelf->ysyx_24090015_top__DOT__ifu_raddr = vlSelf->pc;
        vlSelf->ysyx_24090015_top__DOT__ifu_reqValid = 0U;
    }
    if (__Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0) {
        vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[__Vdlyvdim0__ysyx_24090015_top__DOT__reg0__DOT__rf__v0] 
            = __Vdlyvval__ysyx_24090015_top__DOT__reg0__DOT__rf__v0;
    }
    if (__Vdlyvset__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0) {
        vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[__Vdlyvdim0__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0] 
            = __Vdlyvval__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v0;
    }
    if (__Vdlyvset__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1) {
        vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[__Vdlyvdim0__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1] 
            = __Vdlyvval__ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS__v1;
    }
    vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state 
        = __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state;
    vlSelf->ysyx_24090015_top__DOT__lsu_respValid = __Vdly__ysyx_24090015_top__DOT__lsu_respValid;
}

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_sequent__TOP__2(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_24090015_top__DOT__ifu_respValid = vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid;
    vlSelf->__VdfgTmp_h7246bf09__0 = ((IData)(vlSelf->ysyx_24090015_top__DOT__ifu_reqValid) 
                                      & (IData)(vlSelf->ysyx_24090015_top__DOT__ifu_respValid));
    if (vlSelf->__VdfgTmp_h7246bf09__0) {
        vlSelf->__VdfgTmp_h872a8a4a__0 = (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                          >> 0x1fU);
        vlSelf->inst = vlSelf->ysyx_24090015_top__DOT__ifu_rdata;
    } else {
        vlSelf->__VdfgTmp_h872a8a4a__0 = 0U;
        vlSelf->inst = 0U;
    }
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI 
        = (((- (IData)((IData)(vlSelf->__VdfgTmp_h872a8a4a__0))) 
            << 0xcU) | ((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                         ? (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                            >> 0x14U) : 0U));
    if (vlSelf->ysyx_24090015_top__DOT__ifu_respValid) {
        if ((1U & (~ ((((((((0x13U == (0x707fU & vlSelf->inst)) 
                            | (0x7013U == (0x707fU 
                                           & vlSelf->inst))) 
                           | (0x5013U == (0xfe00707fU 
                                          & vlSelf->inst))) 
                          | (0x1013U == (0xfe00707fU 
                                         & vlSelf->inst))) 
                         | (0x3013U == (0x707fU & vlSelf->inst))) 
                        | (0x40005013U == (0xfe00707fU 
                                           & vlSelf->inst))) 
                       | (0x4013U == (0x707fU & vlSelf->inst))) 
                      | (0x6013U == (0x707fU & vlSelf->inst)))))) {
            if (((((((((0x67U == (0x707fU & vlSelf->inst)) 
                       | (0x2003U == (0x707fU & vlSelf->inst))) 
                      | (0x1003U == (0x707fU & vlSelf->inst))) 
                     | (0x5003U == (0x707fU & vlSelf->inst))) 
                    | (3U == (0x707fU & vlSelf->inst))) 
                   | (0x4003U == (0x707fU & vlSelf->inst))) 
                  | (0x17U == (0x7fU & vlSelf->inst))) 
                 | (0x37U == (0x7fU & vlSelf->inst)))) {
                if ((0x67U != (0x707fU & vlSelf->inst))) {
                    if ((0x2003U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask = 0xfU;
                        vlSelf->ysyx_24090015_top__DOT__pmem_ls = 1U;
                    } else if ((0x1003U == (0x707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask = 3U;
                        vlSelf->ysyx_24090015_top__DOT__pmem_ls = 1U;
                    } else if ((0x5003U == (0x707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask = 3U;
                        vlSelf->ysyx_24090015_top__DOT__pmem_ls = 1U;
                    } else if ((3U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask = 1U;
                        vlSelf->ysyx_24090015_top__DOT__pmem_ls = 1U;
                    } else if ((0x4003U == (0x707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask = 1U;
                        vlSelf->ysyx_24090015_top__DOT__pmem_ls = 1U;
                    }
                }
            } else if (((((((((0x6fU == (0x7fU & vlSelf->inst)) 
                              | (0x2023U == (0x707fU 
                                             & vlSelf->inst))) 
                             | (0x23U == (0x707fU & vlSelf->inst))) 
                            | (0x1023U == (0x707fU 
                                           & vlSelf->inst))) 
                           | (0x1063U == (0x707fU & vlSelf->inst))) 
                          | (0x63U == (0x707fU & vlSelf->inst))) 
                         | (0x5063U == (0x707fU & vlSelf->inst))) 
                        | (0x7063U == (0x707fU & vlSelf->inst)))) {
                if ((0x6fU != (0x7fU & vlSelf->inst))) {
                    if ((0x2023U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask = 0xfU;
                        vlSelf->ysyx_24090015_top__DOT__pmem_ls = 0U;
                    } else if ((0x23U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask = 1U;
                        vlSelf->ysyx_24090015_top__DOT__pmem_ls = 0U;
                    } else if ((0x1023U == (0x707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask = 3U;
                        vlSelf->ysyx_24090015_top__DOT__pmem_ls = 0U;
                    }
                }
            }
        }
        if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
                   | (0x7013U == (0x707fU & vlSelf->inst))) 
                  | (0x5013U == (0xfe00707fU & vlSelf->inst))) 
                 | (0x1013U == (0xfe00707fU & vlSelf->inst))) 
                | (0x3013U == (0x707fU & vlSelf->inst))) 
               | (0x40005013U == (0xfe00707fU & vlSelf->inst))) 
              | (0x4013U == (0x707fU & vlSelf->inst))) 
             | (0x6013U == (0x707fU & vlSelf->inst)))) {
            vlSelf->ysyx_24090015_top__DOT__LSU_work = 0U;
        } else if (((((((((0x67U == (0x707fU & vlSelf->inst)) 
                          | (0x2003U == (0x707fU & vlSelf->inst))) 
                         | (0x1003U == (0x707fU & vlSelf->inst))) 
                        | (0x5003U == (0x707fU & vlSelf->inst))) 
                       | (3U == (0x707fU & vlSelf->inst))) 
                      | (0x4003U == (0x707fU & vlSelf->inst))) 
                     | (0x17U == (0x7fU & vlSelf->inst))) 
                    | (0x37U == (0x7fU & vlSelf->inst)))) {
            vlSelf->ysyx_24090015_top__DOT__LSU_work 
                = ((0x67U != (0x707fU & vlSelf->inst)) 
                   & ((0x2003U == (0x707fU & vlSelf->inst)) 
                      | ((0x1003U == (0x707fU & vlSelf->inst)) 
                         | ((0x5003U == (0x707fU & vlSelf->inst)) 
                            | ((3U == (0x707fU & vlSelf->inst)) 
                               | (0x4003U == (0x707fU 
                                              & vlSelf->inst)))))));
        } else if (((((((((0x6fU == (0x7fU & vlSelf->inst)) 
                          | (0x2023U == (0x707fU & vlSelf->inst))) 
                         | (0x23U == (0x707fU & vlSelf->inst))) 
                        | (0x1023U == (0x707fU & vlSelf->inst))) 
                       | (0x1063U == (0x707fU & vlSelf->inst))) 
                      | (0x63U == (0x707fU & vlSelf->inst))) 
                     | (0x5063U == (0x707fU & vlSelf->inst))) 
                    | (0x7063U == (0x707fU & vlSelf->inst)))) {
            vlSelf->ysyx_24090015_top__DOT__LSU_work 
                = ((0x6fU != (0x7fU & vlSelf->inst)) 
                   & ((0x2023U == (0x707fU & vlSelf->inst)) 
                      | ((0x23U == (0x707fU & vlSelf->inst)) 
                         | (0x1023U == (0x707fU & vlSelf->inst)))));
        } else if (((((((((0x4063U == (0x707fU & vlSelf->inst)) 
                          | (0x6063U == (0x707fU & vlSelf->inst))) 
                         | (0x40000033U == (0xfe00707fU 
                                            & vlSelf->inst))) 
                        | (0x33U == (0xfe00707fU & vlSelf->inst))) 
                       | (0x6033U == (0xfe00707fU & vlSelf->inst))) 
                      | (0x7033U == (0xfe00707fU & vlSelf->inst))) 
                     | (0x4033U == (0xfe00707fU & vlSelf->inst))) 
                    | (0x1033U == (0xfe00707fU & vlSelf->inst)))) {
            vlSelf->ysyx_24090015_top__DOT__LSU_work = 0U;
        } else if (((((((((0x5033U == (0xfe00707fU 
                                       & vlSelf->inst)) 
                          | (0x40005033U == (0xfe00707fU 
                                             & vlSelf->inst))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSelf->inst))) 
                        | (0x2033U == (0xfe00707fU 
                                       & vlSelf->inst))) 
                       | (0x3073U == (0x707fU & vlSelf->inst))) 
                      | (0x2073U == (0x707fU & vlSelf->inst))) 
                     | (0x1073U == (0x707fU & vlSelf->inst))) 
                    | (0x30200073U == vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__LSU_work = 0U;
        } else if ((0x73U == vlSelf->inst)) {
            vlSelf->ysyx_24090015_top__DOT__LSU_work = 0U;
        }
    }
    Vysyx_24090015_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->inst, vlSelf->__Vfunc_ebreak__1__Vfuncout);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type 
        = ((0x40U & vlSelf->inst) ? ((0x20U & vlSelf->inst)
                                      ? ((0x10U & vlSelf->inst)
                                          ? ((8U & vlSelf->inst)
                                              ? 0U : 
                                             ((4U & vlSelf->inst)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->inst)
                                                    ? 5U
                                                    : 0U)
                                                   : 0U)))
                                          : ((8U & vlSelf->inst)
                                              ? ((4U 
                                                  & vlSelf->inst)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->inst)
                                                    ? 9U
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)
                                              : ((4U 
                                                  & vlSelf->inst)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->inst)
                                                    ? 3U
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->inst)
                                                    ? 7U
                                                    : 0U)
                                                   : 0U))))
                                      : 0U) : ((0x20U 
                                                & vlSelf->inst)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->inst)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->inst)
                                                        ? 8U
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->inst)
                                                        ? 1U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->inst)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->inst)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->inst)
                                                        ? 6U
                                                        : 0U)
                                                       : 0U))))
                                                : (
                                                   (0x10U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->inst)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->inst)
                                                        ? 8U
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->inst)
                                                        ? 2U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->inst)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->inst)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->inst)
                                                        ? 4U
                                                        : 0U)
                                                       : 0U))))));
    if (((((((((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
               | (3U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
              | (4U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
             | (5U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
            | (8U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
           | (9U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
          | (6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
         | (7U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))) {
        vlSelf->ysyx_24090015_top__DOT__pwen = ((2U 
                                                 != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                & ((3U 
                                                    != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                   & ((4U 
                                                       != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                      & ((5U 
                                                          != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                         & ((8U 
                                                             != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                            & ((9U 
                                                                != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                               & (6U 
                                                                  == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))))))));
        vlSelf->ysyx_24090015_top__DOT__valid = ((2U 
                                                  != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                 & ((3U 
                                                     != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                    & ((4U 
                                                        == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                       | ((5U 
                                                           != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                          & ((8U 
                                                              != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                             & ((9U 
                                                                 != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                                & (6U 
                                                                   == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))))))));
        vlSelf->ysyx_24090015_top__DOT__wen = ((2U 
                                                == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                               | ((3U 
                                                   == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                     | ((5U 
                                                         == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                        | ((8U 
                                                            == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                           | (9U 
                                                              == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))))));
        if ((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1 
                = (1U & (vlSelf->inst >> 0xfU));
            vlSelf->ysyx_24090015_top__DOT__imm = vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI;
        } else if ((3U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1 
                = (1U & (vlSelf->inst >> 0xfU));
            vlSelf->ysyx_24090015_top__DOT__imm = vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI;
        } else if ((4U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1 
                = (1U & (vlSelf->inst >> 0xfU));
            vlSelf->ysyx_24090015_top__DOT__imm = vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI;
        } else if ((5U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1 
                = (1U & ((0U == (7U & (vlSelf->inst 
                                       >> 0xcU))) ? 0xfU
                          : (0x1fU & (vlSelf->inst 
                                      >> 0xfU))));
            vlSelf->ysyx_24090015_top__DOT__imm = vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI;
        } else {
            if ((8U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_24090015_top__DOT__imm 
                    = (((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                         ? (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                            >> 0xcU) : 0U) << 0xcU);
            } else if ((9U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_24090015_top__DOT__imm 
                    = (((- (IData)((IData)(vlSelf->__VdfgTmp_h872a8a4a__0))) 
                        << 0x15U) | (((IData)(vlSelf->__VdfgTmp_h872a8a4a__0) 
                                      << 0x14U) | (
                                                   (((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                                      ? 
                                                     (0xffU 
                                                      & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                         >> 0xcU))
                                                      : 0U) 
                                                    << 0xcU) 
                                                   | ((0x7ff800U 
                                                       & (((IData)(vlSelf->__VdfgTmp_h7246bf09__0) 
                                                           << 0xbU) 
                                                          & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                             >> 9U))) 
                                                      | (((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                                           ? 
                                                          (0x3ffU 
                                                           & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                              >> 0x15U))
                                                           : 0U) 
                                                         << 1U)))));
            } else {
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & 0U);
                vlSelf->ysyx_24090015_top__DOT__imm 
                    = ((6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                        ? (((- (IData)((IData)(vlSelf->__VdfgTmp_h872a8a4a__0))) 
                            << 0xcU) | ((((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                           ? (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                              >> 0x19U)
                                           : 0U) << 5U) 
                                        | ((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                            ? (0x1fU 
                                               & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                  >> 7U))
                                            : 0U)))
                        : (((- (IData)((IData)(vlSelf->__VdfgTmp_h872a8a4a__0))) 
                            << 0xdU) | (((IData)(vlSelf->__VdfgTmp_h872a8a4a__0) 
                                         << 0xcU) | 
                                        ((0xfffff800U 
                                          & (((IData)(vlSelf->__VdfgTmp_h7246bf09__0) 
                                              << 0xbU) 
                                             & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                << 4U))) 
                                         | ((((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                               ? (0x3fU 
                                                  & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                     >> 0x19U))
                                               : 0U) 
                                             << 5U) 
                                            | (((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                                 ? 
                                                (0xfU 
                                                 & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                    >> 8U))
                                                 : 0U) 
                                               << 1U))))));
            }
            vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1 
                = (1U & ((8U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                         & ((9U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                            & ((6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                ? (vlSelf->inst >> 0xfU)
                                : (vlSelf->inst >> 0xfU)))));
        }
        vlSelf->ysyx_24090015_top__DOT__ren2 = ((2U 
                                                 != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                & ((3U 
                                                    != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                   & ((4U 
                                                       != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                      & ((5U 
                                                          != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                         & ((8U 
                                                             != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                            & (9U 
                                                               != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))))));
        vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs2 
            = ((2U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
               & ((3U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                  & ((4U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                     & ((5U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                        & ((8U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                           & ((9U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                              & ((6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                  ? (vlSelf->inst >> 0x14U)
                                  : (vlSelf->inst >> 0x14U))))))));
        vlSelf->ysyx_24090015_top__DOT__ren1 = ((2U 
                                                 == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                | ((3U 
                                                    == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                   | ((4U 
                                                       == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                      | ((5U 
                                                          == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                         | ((8U 
                                                             != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                            & (9U 
                                                               != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))))));
        vlSelf->ysyx_24090015_top__DOT__csr_wen = (
                                                   (2U 
                                                    != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                   & ((3U 
                                                       != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                      & ((4U 
                                                          != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                         & (5U 
                                                            == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))));
    } else {
        vlSelf->ysyx_24090015_top__DOT__pwen = 0U;
        vlSelf->ysyx_24090015_top__DOT__valid = 0U;
        if ((1U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__wen = 1U;
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_24090015_top__DOT__ren2 = 1U;
            vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs2 
                = (1U & (vlSelf->inst >> 0x14U));
            vlSelf->ysyx_24090015_top__DOT__ren1 = 1U;
        } else {
            vlSelf->ysyx_24090015_top__DOT__wen = 0U;
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & 0U);
            vlSelf->ysyx_24090015_top__DOT__ren2 = 0U;
            vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs2 = 0U;
            vlSelf->ysyx_24090015_top__DOT__ren1 = 0U;
        }
        vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1 
            = (1U & ((1U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                     & (vlSelf->inst >> 0xfU)));
        vlSelf->ysyx_24090015_top__DOT__imm = 0U;
        vlSelf->ysyx_24090015_top__DOT__csr_wen = 0U;
    }
    vlSelf->ysyx_24090015_top__DOT__src2 = ((- (IData)((IData)(vlSelf->ysyx_24090015_top__DOT__ren2))) 
                                            & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                                            [vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs2]);
    vlSelf->ysyx_24090015_top__DOT__src1 = ((- (IData)((IData)(vlSelf->ysyx_24090015_top__DOT__ren1))) 
                                            & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                                            [vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1]);
    if (vlSelf->ysyx_24090015_top__DOT__ifu_respValid) {
        if ((1U & (~ ((((((((0x13U == (0x707fU & vlSelf->inst)) 
                            | (0x7013U == (0x707fU 
                                           & vlSelf->inst))) 
                           | (0x5013U == (0xfe00707fU 
                                          & vlSelf->inst))) 
                          | (0x1013U == (0xfe00707fU 
                                         & vlSelf->inst))) 
                         | (0x3013U == (0x707fU & vlSelf->inst))) 
                        | (0x40005013U == (0xfe00707fU 
                                           & vlSelf->inst))) 
                       | (0x4013U == (0x707fU & vlSelf->inst))) 
                      | (0x6013U == (0x707fU & vlSelf->inst)))))) {
            if ((1U & (~ ((((((((0x67U == (0x707fU 
                                           & vlSelf->inst)) 
                                | (0x2003U == (0x707fU 
                                               & vlSelf->inst))) 
                               | (0x1003U == (0x707fU 
                                              & vlSelf->inst))) 
                              | (0x5003U == (0x707fU 
                                             & vlSelf->inst))) 
                             | (3U == (0x707fU & vlSelf->inst))) 
                            | (0x4003U == (0x707fU 
                                           & vlSelf->inst))) 
                           | (0x17U == (0x7fU & vlSelf->inst))) 
                          | (0x37U == (0x7fU & vlSelf->inst)))))) {
                if (((((((((0x6fU == (0x7fU & vlSelf->inst)) 
                           | (0x2023U == (0x707fU & vlSelf->inst))) 
                          | (0x23U == (0x707fU & vlSelf->inst))) 
                         | (0x1023U == (0x707fU & vlSelf->inst))) 
                        | (0x1063U == (0x707fU & vlSelf->inst))) 
                       | (0x63U == (0x707fU & vlSelf->inst))) 
                      | (0x5063U == (0x707fU & vlSelf->inst))) 
                     | (0x7063U == (0x707fU & vlSelf->inst)))) {
                    if ((0x6fU != (0x7fU & vlSelf->inst))) {
                        if ((0x2023U == (0x707fU & vlSelf->inst))) {
                            vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                                = vlSelf->ysyx_24090015_top__DOT__src2;
                        } else if ((0x23U == (0x707fU 
                                              & vlSelf->inst))) {
                            vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                                = (0xffU & vlSelf->ysyx_24090015_top__DOT__src2);
                        } else if ((0x1023U == (0x707fU 
                                                & vlSelf->inst))) {
                            vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                                = (0xffffU & vlSelf->ysyx_24090015_top__DOT__src2);
                        }
                    }
                }
                if ((1U & (~ ((((((((0x6fU == (0x7fU 
                                               & vlSelf->inst)) 
                                    | (0x2023U == (0x707fU 
                                                   & vlSelf->inst))) 
                                   | (0x23U == (0x707fU 
                                                & vlSelf->inst))) 
                                  | (0x1023U == (0x707fU 
                                                 & vlSelf->inst))) 
                                 | (0x1063U == (0x707fU 
                                                & vlSelf->inst))) 
                                | (0x63U == (0x707fU 
                                             & vlSelf->inst))) 
                               | (0x5063U == (0x707fU 
                                              & vlSelf->inst))) 
                              | (0x7063U == (0x707fU 
                                             & vlSelf->inst)))))) {
                    if ((1U & (~ ((((((((0x4063U == 
                                         (0x707fU & vlSelf->inst)) 
                                        | (0x6063U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                       | (0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->inst))) 
                                      | (0x33U == (0xfe00707fU 
                                                   & vlSelf->inst))) 
                                     | (0x6033U == 
                                        (0xfe00707fU 
                                         & vlSelf->inst))) 
                                    | (0x7033U == (0xfe00707fU 
                                                   & vlSelf->inst))) 
                                   | (0x4033U == (0xfe00707fU 
                                                  & vlSelf->inst))) 
                                  | (0x1033U == (0xfe00707fU 
                                                 & vlSelf->inst)))))) {
                        if ((1U & (~ ((((((((0x5033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->inst)) 
                                            | (0x40005033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->inst))) 
                                           | (0x3033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->inst))) 
                                          | (0x2033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->inst))) 
                                         | (0x3073U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                        | (0x2073U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                       | (0x1073U == 
                                          (0x707fU 
                                           & vlSelf->inst))) 
                                      | (0x30200073U 
                                         == vlSelf->inst))))) {
                            if ((0x73U == vlSelf->inst)) {
                                vlSelf->ysyx_24090015_top__DOT__csr_wdata1 
                                    = vlSelf->ysyx_24090015_top__DOT__src1;
                            }
                        }
                    }
                }
            }
            if (((((((((0x67U == (0x707fU & vlSelf->inst)) 
                       | (0x2003U == (0x707fU & vlSelf->inst))) 
                      | (0x1003U == (0x707fU & vlSelf->inst))) 
                     | (0x5003U == (0x707fU & vlSelf->inst))) 
                    | (3U == (0x707fU & vlSelf->inst))) 
                   | (0x4003U == (0x707fU & vlSelf->inst))) 
                  | (0x17U == (0x7fU & vlSelf->inst))) 
                 | (0x37U == (0x7fU & vlSelf->inst)))) {
                if ((0x67U != (0x707fU & vlSelf->inst))) {
                    if ((0x2003U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    } else if ((0x1003U == (0x707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    } else if ((0x5003U == (0x707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    } else if ((3U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    } else if ((0x4003U == (0x707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    }
                }
            } else if (((((((((0x6fU == (0x7fU & vlSelf->inst)) 
                              | (0x2023U == (0x707fU 
                                             & vlSelf->inst))) 
                             | (0x23U == (0x707fU & vlSelf->inst))) 
                            | (0x1023U == (0x707fU 
                                           & vlSelf->inst))) 
                           | (0x1063U == (0x707fU & vlSelf->inst))) 
                          | (0x63U == (0x707fU & vlSelf->inst))) 
                         | (0x5063U == (0x707fU & vlSelf->inst))) 
                        | (0x7063U == (0x707fU & vlSelf->inst)))) {
                if ((0x6fU != (0x7fU & vlSelf->inst))) {
                    if ((0x2023U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    } else if ((0x23U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    } else if ((0x1023U == (0x707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    }
                }
            }
        }
    }
    if (vlSelf->ysyx_24090015_top__DOT__csr_wen) {
        if ((0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))) {
            vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0 = 1U;
        } else if ((0x300U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))) {
            vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0 = 0U;
        } else if ((0x302U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))) {
            vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0 = 2U;
        } else if ((0x305U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))) {
            vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0 = 1U;
        } else if ((0x341U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))) {
            vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0 = 2U;
        } else if ((0x342U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))) {
            vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0 = 3U;
        }
    }
    vlSelf->hit_good_or_bad = (1U & vlSelf->ysyx_24090015_top__DOT__src1);
    vlSelf->ysyx_24090015_top__DOT__csr_rdata = vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS
        [vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0];
}
