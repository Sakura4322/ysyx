// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090015_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090015_top__Syms.h"
#include "Vysyx_24090015_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__ico(Vysyx_24090015_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24090015_top___024root___eval_triggers__ico(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24090015_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__act(Vysyx_24090015_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24090015_top___024root___eval_triggers__act(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->flag) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__flag));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__flag = vlSelf->flag;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24090015_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_24090015_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ &ebreak__Vfuncrtn);

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_sequent__TOP__1(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ebreak__0__Vfuncout;
    __Vfunc_ebreak__0__Vfuncout = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_24090015_top__DOT__reg0__DOT__rf__v0;
    __Vdlyvdim0__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24090015_top__DOT__reg0__DOT__rf__v0;
    __Vdlyvval__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0;
    __Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->ysyx_24090015_top__DOT__ren1) 
         & (~ (IData)(vlSelf->ysyx_24090015_top__DOT__ren2)))) {
        vlSelf->ysyx_24090015_top__DOT__src2 = 0U;
        vlSelf->ysyx_24090015_top__DOT__src1 = vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
            [vlSelf->ysyx_24090015_top__DOT__rs1];
    } else if (((~ (IData)(vlSelf->ysyx_24090015_top__DOT__ren1)) 
                & (IData)(vlSelf->ysyx_24090015_top__DOT__ren2))) {
        vlSelf->ysyx_24090015_top__DOT__src2 = vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
            [vlSelf->ysyx_24090015_top__DOT__rs2];
        vlSelf->ysyx_24090015_top__DOT__src1 = 0U;
    } else if (((IData)(vlSelf->ysyx_24090015_top__DOT__ren1) 
                & (IData)(vlSelf->ysyx_24090015_top__DOT__ren2))) {
        vlSelf->ysyx_24090015_top__DOT__src2 = vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
            [vlSelf->ysyx_24090015_top__DOT__rs2];
        vlSelf->ysyx_24090015_top__DOT__src1 = vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
            [vlSelf->ysyx_24090015_top__DOT__rs1];
    } else {
        vlSelf->ysyx_24090015_top__DOT__src2 = 0U;
        vlSelf->ysyx_24090015_top__DOT__src1 = 0U;
    }
    if (vlSelf->ysyx_24090015_top__DOT__wen) {
        __Vdlyvval__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 
            = vlSelf->ysyx_24090015_top__DOT__rd_wdata;
        __Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 
            = vlSelf->ysyx_24090015_top__DOT__rd;
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_24090015_top__DOT__en)))) {
        vlSelf->ysyx_24090015_top__DOT__snpc = ((IData)(1U) 
                                                + vlSelf->pc);
    }
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode 
        = (0x7fU & vlSelf->inst);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type 
        = ((0x13U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
            ? 2U : 0U);
    Vysyx_24090015_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->inst, __Vfunc_ebreak__0__Vfuncout);
    vlSelf->flag = (1U & __Vfunc_ebreak__0__Vfuncout);
    if (__Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0) {
        vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[__Vdlyvdim0__ysyx_24090015_top__DOT__reg0__DOT__rf__v0] 
            = __Vdlyvval__ysyx_24090015_top__DOT__reg0__DOT__rf__v0;
    }
    vlSelf->ysyx_24090015_top__DOT__dnpc = vlSelf->ysyx_24090015_top__DOT__snpc;
    vlSelf->pc = vlSelf->ysyx_24090015_top__DOT__dnpc;
    if ((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
        vlSelf->ysyx_24090015_top__DOT__ren1 = 1U;
        vlSelf->ysyx_24090015_top__DOT__wen = 1U;
        vlSelf->ysyx_24090015_top__DOT__imm = (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->inst 
                                                  >> 0x14U));
    } else {
        vlSelf->ysyx_24090015_top__DOT__ren1 = 0U;
        vlSelf->ysyx_24090015_top__DOT__wen = 0U;
        vlSelf->ysyx_24090015_top__DOT__imm = 0U;
    }
    if ((0x13U == (0x707fU & vlSelf->inst))) {
        vlSelf->ysyx_24090015_top__DOT__rd_wdata = 
            (vlSelf->ysyx_24090015_top__DOT__src1 + vlSelf->ysyx_24090015_top__DOT__imm);
    }
}
