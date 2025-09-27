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
    IData/*31:0*/ __Vfunc_pmem_read__1__Vfuncout;
    __Vfunc_pmem_read__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_read__3__Vfuncout;
    __Vfunc_pmem_read__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_read__4__Vfuncout;
    __Vfunc_pmem_read__4__Vfuncout = 0;
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
                Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__lsu_addr, (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wmask), __Vfunc_pmem_read__1__Vfuncout);
                __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state = 2U;
                vlSelf->ysyx_24090015_top__DOT__lsu_rdata 
                    = (((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_reqValid) 
                        & (~ (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wen)))
                        ? __Vfunc_pmem_read__1__Vfuncout
                        : 0U);
                __Vdly__ysyx_24090015_top__DOT__lsu_respValid 
                    = vlSelf->ysyx_24090015_top__DOT__lsu_reqValid;
                if (((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_reqValid) 
                     & (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wen))) {
                    Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__lsu_addr, vlSelf->ysyx_24090015_top__DOT__lsu_wdata, (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wmask));
                }
            } else if (vlSelf->ysyx_24090015_top__DOT__ifu_reqValid) {
                Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__ifu_raddr, 0xfU, __Vfunc_pmem_read__3__Vfuncout);
                __Vdly__ysyx_24090015_top__DOT__sram0__DOT__sram_state = 1U;
                if (vlSelf->ysyx_24090015_top__DOT__ifu_reqValid) {
                    vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                        = __Vfunc_pmem_read__3__Vfuncout;
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
                        = vlSelf->ysyx_24090015_top__DOT__dnpc;
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
