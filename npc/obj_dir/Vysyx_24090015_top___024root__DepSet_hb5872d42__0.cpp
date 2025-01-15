// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090015_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090015_top___024root.h"

VL_INLINE_OPT void Vysyx_24090015_top___024root___ico_sequent__TOP__0(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i2__DOT__init 
        = ((0x80000U & (vlSelf->inst >> 0xcU)) | ((0x7f800U 
                                                   & (vlSelf->inst 
                                                      >> 1U)) 
                                                  | ((0x400U 
                                                      & (vlSelf->inst 
                                                         >> 0xaU)) 
                                                     | (0x3ffU 
                                                        & (vlSelf->inst 
                                                           >> 0x15U)))));
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode 
        = (0x7fU & vlSelf->inst);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type 
        = ((0x40U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
            ? ((0x20U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                ? ((0x10U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                    ? 0U : ((8U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                             ? ((4U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                 ? ((2U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                     ? ((1U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                         ? 6U : 0U)
                                     : 0U) : 0U) : 
                            ((4U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                              ? ((2U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                  ? ((1U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                      ? 2U : 0U) : 0U)
                              : 0U))) : 0U) : ((0x20U 
                                                & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                ? 0U
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                        ? 5U
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                        ? 2U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                        ? 2U
                                                        : 0U)
                                                       : 0U))))));
    if ((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
        vlSelf->ysyx_24090015_top__DOT__wen = 1U;
        vlSelf->ysyx_24090015_top__DOT__rs2 = 0U;
        vlSelf->ysyx_24090015_top__DOT__ren2 = 0U;
        vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U));
        vlSelf->ysyx_24090015_top__DOT__imm = (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->inst 
                                                  >> 0x14U));
        vlSelf->ysyx_24090015_top__DOT__ren1 = 1U;
        vlSelf->ysyx_24090015_top__DOT__rs1 = (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0xfU));
    } else if ((5U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
        vlSelf->ysyx_24090015_top__DOT__wen = 1U;
        vlSelf->ysyx_24090015_top__DOT__rs2 = 0U;
        vlSelf->ysyx_24090015_top__DOT__ren2 = 0U;
        vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U));
        vlSelf->ysyx_24090015_top__DOT__imm = (0xfffff000U 
                                               & vlSelf->inst);
        vlSelf->ysyx_24090015_top__DOT__ren1 = 0U;
        vlSelf->ysyx_24090015_top__DOT__rs1 = 0U;
    } else if ((6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
        vlSelf->ysyx_24090015_top__DOT__wen = 1U;
        vlSelf->ysyx_24090015_top__DOT__rs2 = 0U;
        vlSelf->ysyx_24090015_top__DOT__ren2 = 0U;
        vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U));
        vlSelf->ysyx_24090015_top__DOT__imm = (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i2__DOT__init);
        vlSelf->ysyx_24090015_top__DOT__ren1 = 0U;
        vlSelf->ysyx_24090015_top__DOT__rs1 = 0U;
    }
    vlSelf->ysyx_24090015_top__DOT__src1 = ((- (IData)((IData)(vlSelf->ysyx_24090015_top__DOT__ren1))) 
                                            & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                                            [vlSelf->ysyx_24090015_top__DOT__rs1]);
}

void Vysyx_24090015_top___024root___eval_ico(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_24090015_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_24090015_top___024root___eval_act(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_sequent__TOP__0(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->flag)) {
        VL_WRITEF("Condition end\n");
        VL_FINISH_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 225, "");
    }
}

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_sequent__TOP__2(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_24090015_top__DOT__dnpc = vlSelf->ysyx_24090015_top__DOT__snpc;
    if ((0x13U == (0x707fU & vlSelf->inst))) {
        vlSelf->ysyx_24090015_top__DOT__rd_wdata = 
            (vlSelf->ysyx_24090015_top__DOT__src1 + vlSelf->ysyx_24090015_top__DOT__imm);
    } else if ((0x67U == (0x707fU & vlSelf->inst))) {
        vlSelf->ysyx_24090015_top__DOT__dnpc = (~ (vlSelf->ysyx_24090015_top__DOT__src1 
                                                   + vlSelf->ysyx_24090015_top__DOT__imm));
        vlSelf->ysyx_24090015_top__DOT__rd_wdata = 
            ((IData)(4U) + vlSelf->pc);
    } else if ((0x17U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_24090015_top__DOT__rd_wdata = 
            (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
    } else if ((0x37U == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_24090015_top__DOT__rd_wdata = vlSelf->ysyx_24090015_top__DOT__imm;
    } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
        vlSelf->ysyx_24090015_top__DOT__rd_wdata = 
            ((IData)(4U) + vlSelf->pc);
        vlSelf->ysyx_24090015_top__DOT__dnpc = (vlSelf->pc 
                                                + vlSelf->ysyx_24090015_top__DOT__imm);
    }
    vlSelf->pc = vlSelf->ysyx_24090015_top__DOT__dnpc;
}

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_sequent__TOP__3(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ysyx_24090015_top__DOT__src1 = ((- (IData)((IData)(vlSelf->ysyx_24090015_top__DOT__ren1))) 
                                            & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                                            [vlSelf->ysyx_24090015_top__DOT__rs1]);
    vlSelf->ysyx_24090015_top__DOT__snpc = ((IData)(1U) 
                                            + vlSelf->pc);
}

void Vysyx_24090015_top___024root___nba_sequent__TOP__1(Vysyx_24090015_top___024root* vlSelf);

void Vysyx_24090015_top___024root___eval_nba(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24090015_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24090015_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_24090015_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24090015_top___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vysyx_24090015_top___024root___eval_triggers__ico(Vysyx_24090015_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__ico(Vysyx_24090015_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_24090015_top___024root___eval_triggers__act(Vysyx_24090015_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__act(Vysyx_24090015_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__nba(Vysyx_24090015_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24090015_top___024root___eval(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_24090015_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24090015_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 213, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_24090015_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_24090015_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_24090015_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 213, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_24090015_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24090015_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 213, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_24090015_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_24090015_top___024root___eval_debug_assertions(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
