// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090015_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090015_top___024root.h"

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_static(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_initial(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__flag = vlSelf->flag;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_final(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_settle(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__act(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] flag)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__nba(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] flag)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24090015_top___024root___ctor_var_reset(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__snpc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__dnpc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24090015_top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24090015_top__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24090015_top__DOT__ren1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ren2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__rd_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__inst_2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__init = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigrprev__TOP__flag = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
