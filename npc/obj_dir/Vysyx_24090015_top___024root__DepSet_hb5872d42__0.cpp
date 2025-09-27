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
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->ysyx_24090015_top__DOT__lsu_wen = 0U;
    }
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state))) {
            vlSelf->ysyx_24090015_top__DOT__lsu_reqValid 
                = vlSelf->ysyx_24090015_top__DOT__pmem_work;
        } else if ((1U == (IData)(vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state))) {
            if (vlSelf->ysyx_24090015_top__DOT__lsu_respValid) {
                vlSelf->ysyx_24090015_top__DOT__lsu_reqValid = 0U;
            }
        }
    } else {
        vlSelf->ysyx_24090015_top__DOT__lsu_reqValid = 0U;
    }
    vlSelf->ysyx_24090015_top__DOT__lsu_wmask = ((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wen)
                                                  ? (IData)(vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask)
                                                  : 0U);
}

VL_INLINE_OPT void Vysyx_24090015_top___024root___ico_comb__TOP__0(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___ico_comb__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state))) {
            if (((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_reqValid) 
                 & (~ (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_respValid)))) {
                vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state = 2U;
            } else if (vlSelf->ysyx_24090015_top__DOT__ifu_reqValid) {
                vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state))) {
            if (vlSelf->ysyx_24090015_top__DOT__ifu_respValid) {
                vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state = 0U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state))) {
            if (vlSelf->ysyx_24090015_top__DOT__lsu_respValid) {
                vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state = 0U;
            }
        }
    } else {
        vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state = 0U;
    }
}

void Vysyx_24090015_top___024root___eval_ico(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_24090015_top___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        Vysyx_24090015_top___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vysyx_24090015_top___024root___eval_act(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vysyx_24090015_top___024root___ico_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_sequent__TOP__1(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->ysyx_24090015_top__DOT__ifu_respValid) {
            vlSelf->pc = vlSelf->ysyx_24090015_top__DOT__dnpc;
        }
    } else {
        vlSelf->pc = 0x80000000U;
    }
}

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_sequent__TOP__2(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_24090015_top__DOT__lsu_wmask = ((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wen)
                                                  ? (IData)(vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask)
                                                  : 0U);
    vlSelf->ysyx_24090015_top__DOT__ifu_respValid = vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid;
    vlSelf->fetch = vlSelf->ysyx_24090015_top__DOT__ifu_respValid;
    if (vlSelf->fetch) {
        if (((((((((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                   | (3U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                  | (4U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                 | (5U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                | (8U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
               | (9U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
              | (6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
             | (7U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))) {
            vlSelf->ysyx_24090015_top__DOT__pwen = 
                ((2U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                 & ((3U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                    & ((4U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                       & ((5U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                          & ((8U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                             & ((9U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                & (6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))))))));
            vlSelf->ysyx_24090015_top__DOT__valid = 
                ((2U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                 & ((3U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                    & ((4U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                       | ((5U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                          & ((8U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                             & ((9U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                & (6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))))))));
            vlSelf->ysyx_24090015_top__DOT__wen = (
                                                   (2U 
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
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_24090015_top__DOT__rs2 
                    = (0x1fU & 0U);
            } else if ((3U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_24090015_top__DOT__rs2 
                    = (0x1fU & 0U);
            } else if ((4U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_24090015_top__DOT__rs2 
                    = (0x1fU & 0U);
            } else if ((5U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_24090015_top__DOT__rs2 
                    = (0x1fU & 0U);
            } else if ((8U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_24090015_top__DOT__rs2 
                    = (0x1fU & 0U);
            } else if ((9U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_24090015_top__DOT__rs2 
                    = (0x1fU & 0U);
            } else {
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & 0U);
                vlSelf->ysyx_24090015_top__DOT__rs2 
                    = (0x1fU & ((6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                 ? (vlSelf->inst >> 0x14U)
                                 : (vlSelf->inst >> 0x14U)));
            }
            vlSelf->ysyx_24090015_top__DOT__ren2 = 
                ((2U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                 & ((3U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                    & ((4U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                       & ((5U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                          & ((8U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                             & (9U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))))));
        } else {
            vlSelf->ysyx_24090015_top__DOT__pwen = 0U;
            vlSelf->ysyx_24090015_top__DOT__valid = 0U;
            if ((1U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
                vlSelf->ysyx_24090015_top__DOT__wen = 1U;
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_24090015_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_24090015_top__DOT__ren2 = 1U;
            } else {
                vlSelf->ysyx_24090015_top__DOT__wen = 0U;
                vlSelf->ysyx_24090015_top__DOT__rd 
                    = (0x1fU & 0U);
                vlSelf->ysyx_24090015_top__DOT__rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_24090015_top__DOT__ren2 = 0U;
            }
        }
    }
    vlSelf->ysyx_24090015_top__DOT__src2 = ((- (IData)((IData)(vlSelf->ysyx_24090015_top__DOT__ren2))) 
                                            & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                                            [vlSelf->ysyx_24090015_top__DOT__rs2]);
    if (vlSelf->fetch) {
        if (((((((((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                   | (3U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                  | (4U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                 | (5U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                | (8U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
               | (9U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
              | (6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
             | (7U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))) {
            vlSelf->ysyx_24090015_top__DOT__csr_wen 
                = ((2U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                   & ((3U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                      & ((4U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                         & (5U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))));
            vlSelf->ysyx_24090015_top__DOT__ren1 = 
                ((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                 | ((3U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                    | ((4U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                       | ((5U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                          | ((8U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                             & (9U != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))))));
            vlSelf->ysyx_24090015_top__DOT__rs1 = (0x1fU 
                                                   & ((2U 
                                                       == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 0xfU)
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 0xfU)
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 0xfU)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->inst 
                                                               >> 0xcU)))
                                                           ? 0xfU
                                                           : 
                                                          (0x1fU 
                                                           & (vlSelf->inst 
                                                              >> 0xfU)))
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                           ? 0U
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                            ? 0U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                             ? 
                                                            (vlSelf->inst 
                                                             >> 0xfU)
                                                             : 
                                                            (vlSelf->inst 
                                                             >> 0xfU)))))))));
        } else {
            vlSelf->ysyx_24090015_top__DOT__csr_wen = 0U;
            if ((1U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
                vlSelf->ysyx_24090015_top__DOT__ren1 = 1U;
                vlSelf->ysyx_24090015_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else {
                vlSelf->ysyx_24090015_top__DOT__ren1 = 0U;
                vlSelf->ysyx_24090015_top__DOT__rs1 
                    = (0x1fU & 5U);
            }
        }
    }
    vlSelf->ysyx_24090015_top__DOT__src1 = ((- (IData)((IData)(vlSelf->ysyx_24090015_top__DOT__ren1))) 
                                            & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                                            [vlSelf->ysyx_24090015_top__DOT__rs1]);
    if (vlSelf->fetch) {
        vlSelf->ysyx_24090015_top__DOT__imm = (((((
                                                   ((((2U 
                                                       == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                      | (3U 
                                                         == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                                                     | (4U 
                                                        == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                                                    | (5U 
                                                       == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                                                   | (8U 
                                                      == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                                                  | (9U 
                                                     == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                                                 | (6U 
                                                    == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
                                                | (7U 
                                                   == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))
                                                ? (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                    ? vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                     ? vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                      ? vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                       ? vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelf->ysyx_24090015_top__DOT__ifu_rdata)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                      >> 0x1fU))) 
                                                          << 0x15U) 
                                                         | ((0x100000U 
                                                             & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                >> 0xbU)) 
                                                            | ((0xff000U 
                                                                & vlSelf->ysyx_24090015_top__DOT__ifu_rdata) 
                                                               | ((0x800U 
                                                                   & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                        >> 0x14U))))))
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | ((0xfe0U 
                                                              & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                 >> 0x14U)) 
                                                             | (0x1fU 
                                                                & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                   >> 7U))))
                                                          : 
                                                         (((- (IData)(
                                                                      (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                       >> 0x1fU))) 
                                                           << 0xdU) 
                                                          | ((0x1000U 
                                                              & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                                         >> 7U)))))))))))))
                                                : 0U);
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
    vlSelf->ysyx_24090015_top__DOT__csr_rdata = vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS
        [vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0];
    if (vlSelf->fetch) {
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
                                | (0x17U == (0x7fU 
                                             & vlSelf->inst))) 
                               | (0x37U == (0x7fU & vlSelf->inst))) 
                              | (0x6fU == (0x7fU & vlSelf->inst))) 
                             | (0x1063U == (0x707fU 
                                            & vlSelf->inst))) 
                            | (0x63U == (0x707fU & vlSelf->inst))) 
                           | (0x5063U == (0x707fU & vlSelf->inst))) 
                          | (0x7063U == (0x707fU & vlSelf->inst)))))) {
                if ((1U & (~ ((((((((0x4063U == (0x707fU 
                                                 & vlSelf->inst)) 
                                    | (0x6063U == (0x707fU 
                                                   & vlSelf->inst))) 
                                   | (0x40000033U == 
                                      (0xfe00707fU 
                                       & vlSelf->inst))) 
                                  | (0x33U == (0xfe00707fU 
                                               & vlSelf->inst))) 
                                 | (0x6033U == (0xfe00707fU 
                                                & vlSelf->inst))) 
                                | (0x7033U == (0xfe00707fU 
                                               & vlSelf->inst))) 
                               | (0x4033U == (0xfe00707fU 
                                              & vlSelf->inst))) 
                              | (0x1033U == (0xfe00707fU 
                                             & vlSelf->inst)))))) {
                    if ((1U & (~ ((((((((0x5033U == 
                                         (0xfe00707fU 
                                          & vlSelf->inst)) 
                                        | (0x40005033U 
                                           == (0xfe00707fU 
                                               & vlSelf->inst))) 
                                       | (0x3033U == 
                                          (0xfe00707fU 
                                           & vlSelf->inst))) 
                                      | (0x2033U == 
                                         (0xfe00707fU 
                                          & vlSelf->inst))) 
                                     | (0x3073U == 
                                        (0x707fU & vlSelf->inst))) 
                                    | (0x2073U == (0x707fU 
                                                   & vlSelf->inst))) 
                                   | (0x1073U == (0x707fU 
                                                  & vlSelf->inst))) 
                                  | (0x30200073U == vlSelf->inst))))) {
                        if ((0x73U == vlSelf->inst)) {
                            vlSelf->ysyx_24090015_top__DOT__csr_wdata1 
                                = vlSelf->ysyx_24090015_top__DOT__src1;
                        }
                    }
                    if (((((((((0x5033U == (0xfe00707fU 
                                            & vlSelf->inst)) 
                               | (0x40005033U == (0xfe00707fU 
                                                  & vlSelf->inst))) 
                              | (0x3033U == (0xfe00707fU 
                                             & vlSelf->inst))) 
                             | (0x2033U == (0xfe00707fU 
                                            & vlSelf->inst))) 
                            | (0x3073U == (0x707fU 
                                           & vlSelf->inst))) 
                           | (0x2073U == (0x707fU & vlSelf->inst))) 
                          | (0x1073U == (0x707fU & vlSelf->inst))) 
                         | (0x30200073U == vlSelf->inst))) {
                        if ((0x5033U != (0xfe00707fU 
                                         & vlSelf->inst))) {
                            if ((0x40005033U != (0xfe00707fU 
                                                 & vlSelf->inst))) {
                                if ((0x3033U != (0xfe00707fU 
                                                 & vlSelf->inst))) {
                                    if ((0x2033U != 
                                         (0xfe00707fU 
                                          & vlSelf->inst))) {
                                        if ((0x3073U 
                                             == (0x707fU 
                                                 & vlSelf->inst))) {
                                            vlSelf->ysyx_24090015_top__DOT__csr_wdata0 
                                                = (vlSelf->ysyx_24090015_top__DOT__csr_rdata 
                                                   & (~ vlSelf->ysyx_24090015_top__DOT__src1));
                                        } else if (
                                                   (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))) {
                                            vlSelf->ysyx_24090015_top__DOT__csr_wdata0 
                                                = (vlSelf->ysyx_24090015_top__DOT__csr_rdata 
                                                   | vlSelf->ysyx_24090015_top__DOT__src1);
                                        } else if (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))) {
                                            vlSelf->ysyx_24090015_top__DOT__csr_wdata0 
                                                = vlSelf->ysyx_24090015_top__DOT__src1;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x73U == vlSelf->inst)) {
                        vlSelf->ysyx_24090015_top__DOT__csr_wdata0 
                            = vlSelf->ifu_raddr;
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
            if ((0x13U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       + vlSelf->ysyx_24090015_top__DOT__imm);
            } else if ((0x7013U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       & vlSelf->ysyx_24090015_top__DOT__imm);
            } else if ((0x5013U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       >> (0x1fU & vlSelf->ysyx_24090015_top__DOT__imm));
            } else if ((0x1013U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       << (0x1fU & vlSelf->ysyx_24090015_top__DOT__imm));
            } else if ((0x3013U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       < vlSelf->ysyx_24090015_top__DOT__imm);
            } else if ((0x40005013U == (0xfe00707fU 
                                        & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = ((vlSelf->ysyx_24090015_top__DOT__src1 
                        >> 0x1fU) ? (((0x1fU >= ((IData)(0x1fU) 
                                                 - 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24090015_top__DOT__imm)))
                                       ? ((IData)(0xffffffffU) 
                                          << ((IData)(0x1fU) 
                                              - (0x1fU 
                                                 & vlSelf->ysyx_24090015_top__DOT__imm)))
                                       : 0U) | (vlSelf->ysyx_24090015_top__DOT__src1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->ysyx_24090015_top__DOT__imm)))
                        : (vlSelf->ysyx_24090015_top__DOT__src1 
                           >> (0x1fU & vlSelf->ysyx_24090015_top__DOT__imm)));
            } else if ((0x4013U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       ^ vlSelf->ysyx_24090015_top__DOT__imm);
            } else {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       | vlSelf->ysyx_24090015_top__DOT__imm);
            }
        } else if (((((((((0x67U == (0x707fU & vlSelf->inst)) 
                          | (0x17U == (0x7fU & vlSelf->inst))) 
                         | (0x37U == (0x7fU & vlSelf->inst))) 
                        | (0x6fU == (0x7fU & vlSelf->inst))) 
                       | (0x1063U == (0x707fU & vlSelf->inst))) 
                      | (0x63U == (0x707fU & vlSelf->inst))) 
                     | (0x5063U == (0x707fU & vlSelf->inst))) 
                    | (0x7063U == (0x707fU & vlSelf->inst)))) {
            if ((0x67U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       + vlSelf->ysyx_24090015_top__DOT__imm);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
            } else if ((0x17U == (0x7fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = (vlSelf->ifu_raddr + vlSelf->ysyx_24090015_top__DOT__imm);
            } else if ((0x37U == (0x7fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = vlSelf->ysyx_24090015_top__DOT__imm;
            } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = (vlSelf->ifu_raddr + vlSelf->ysyx_24090015_top__DOT__imm);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
            } else {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((0x1063U == (0x707fU & vlSelf->inst))
                        ? ((vlSelf->ysyx_24090015_top__DOT__src1 
                            != vlSelf->ysyx_24090015_top__DOT__src2)
                            ? (vlSelf->ifu_raddr + vlSelf->ysyx_24090015_top__DOT__imm)
                            : ((IData)(4U) + vlSelf->ifu_raddr))
                        : ((0x63U == (0x707fU & vlSelf->inst))
                            ? ((vlSelf->ysyx_24090015_top__DOT__src1 
                                == vlSelf->ysyx_24090015_top__DOT__src2)
                                ? (vlSelf->ifu_raddr 
                                   + vlSelf->ysyx_24090015_top__DOT__imm)
                                : ((IData)(4U) + vlSelf->ifu_raddr))
                            : ((0x5063U == (0x707fU 
                                            & vlSelf->inst))
                                ? ((1U & (((((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                                                 >> 0x1fU)) 
                                             & (~ (vlSelf->ysyx_24090015_top__DOT__src2 
                                                   >> 0x1fU))) 
                                            & (vlSelf->ysyx_24090015_top__DOT__src1 
                                               >= vlSelf->ysyx_24090015_top__DOT__src2)) 
                                           | (((vlSelf->ysyx_24090015_top__DOT__src1 
                                                & vlSelf->ysyx_24090015_top__DOT__src2) 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_24090015_top__DOT__src1 
                                                 >= vlSelf->ysyx_24090015_top__DOT__src2))) 
                                          | ((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                                                 >> 0x1fU)) 
                                             & (vlSelf->ysyx_24090015_top__DOT__src2 
                                                >> 0x1fU))))
                                    ? (vlSelf->ifu_raddr 
                                       + vlSelf->ysyx_24090015_top__DOT__imm)
                                    : ((IData)(4U) 
                                       + vlSelf->ifu_raddr))
                                : ((vlSelf->ysyx_24090015_top__DOT__src1 
                                    >= vlSelf->ysyx_24090015_top__DOT__src2)
                                    ? (vlSelf->ifu_raddr 
                                       + vlSelf->ysyx_24090015_top__DOT__imm)
                                    : ((IData)(4U) 
                                       + vlSelf->ifu_raddr)))));
            }
        } else if (((((((((0x4063U == (0x707fU & vlSelf->inst)) 
                          | (0x6063U == (0x707fU & vlSelf->inst))) 
                         | (0x40000033U == (0xfe00707fU 
                                            & vlSelf->inst))) 
                        | (0x33U == (0xfe00707fU & vlSelf->inst))) 
                       | (0x6033U == (0xfe00707fU & vlSelf->inst))) 
                      | (0x7033U == (0xfe00707fU & vlSelf->inst))) 
                     | (0x4033U == (0xfe00707fU & vlSelf->inst))) 
                    | (0x1033U == (0xfe00707fU & vlSelf->inst)))) {
            vlSelf->ysyx_24090015_top__DOT__dnpc = 
                ((0x4063U == (0x707fU & vlSelf->inst))
                  ? ((1U & (((((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                                   >> 0x1fU)) & (~ 
                                                 (vlSelf->ysyx_24090015_top__DOT__src2 
                                                  >> 0x1fU))) 
                              & (vlSelf->ysyx_24090015_top__DOT__src1 
                                 < vlSelf->ysyx_24090015_top__DOT__src2)) 
                             | (((vlSelf->ysyx_24090015_top__DOT__src1 
                                  & vlSelf->ysyx_24090015_top__DOT__src2) 
                                 >> 0x1fU) & (vlSelf->ysyx_24090015_top__DOT__src1 
                                              < vlSelf->ysyx_24090015_top__DOT__src2))) 
                            | ((vlSelf->ysyx_24090015_top__DOT__src1 
                                >> 0x1fU) & (~ (vlSelf->ysyx_24090015_top__DOT__src2 
                                                >> 0x1fU)))))
                      ? (vlSelf->ifu_raddr + vlSelf->ysyx_24090015_top__DOT__imm)
                      : ((IData)(4U) + vlSelf->ifu_raddr))
                  : ((0x6063U == (0x707fU & vlSelf->inst))
                      ? ((vlSelf->ysyx_24090015_top__DOT__src1 
                          < vlSelf->ysyx_24090015_top__DOT__src2)
                          ? (vlSelf->ifu_raddr + vlSelf->ysyx_24090015_top__DOT__imm)
                          : ((IData)(4U) + vlSelf->ifu_raddr))
                      : ((0x40000033U == (0xfe00707fU 
                                          & vlSelf->inst))
                          ? ((IData)(4U) + vlSelf->ifu_raddr)
                          : ((0x33U == (0xfe00707fU 
                                        & vlSelf->inst))
                              ? ((IData)(4U) + vlSelf->ifu_raddr)
                              : ((0x6033U == (0xfe00707fU 
                                              & vlSelf->inst))
                                  ? ((IData)(4U) + vlSelf->ifu_raddr)
                                  : ((0x7033U == (0xfe00707fU 
                                                  & vlSelf->inst))
                                      ? ((IData)(4U) 
                                         + vlSelf->ifu_raddr)
                                      : ((0x4033U == 
                                          (0xfe00707fU 
                                           & vlSelf->inst))
                                          ? ((IData)(4U) 
                                             + vlSelf->ifu_raddr)
                                          : ((IData)(4U) 
                                             + vlSelf->ifu_raddr))))))));
            if ((0x4063U != (0x707fU & vlSelf->inst))) {
                if ((0x6063U != (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                        = ((0x40000033U == (0xfe00707fU 
                                            & vlSelf->inst))
                            ? (vlSelf->ysyx_24090015_top__DOT__src1 
                               - vlSelf->ysyx_24090015_top__DOT__src2)
                            : ((0x33U == (0xfe00707fU 
                                          & vlSelf->inst))
                                ? (vlSelf->ysyx_24090015_top__DOT__src1 
                                   + vlSelf->ysyx_24090015_top__DOT__src2)
                                : ((0x6033U == (0xfe00707fU 
                                                & vlSelf->inst))
                                    ? (vlSelf->ysyx_24090015_top__DOT__src1 
                                       | vlSelf->ysyx_24090015_top__DOT__src2)
                                    : ((0x7033U == 
                                        (0xfe00707fU 
                                         & vlSelf->inst))
                                        ? (vlSelf->ysyx_24090015_top__DOT__src1 
                                           & vlSelf->ysyx_24090015_top__DOT__src2)
                                        : ((0x4033U 
                                            == (0xfe00707fU 
                                                & vlSelf->inst))
                                            ? (vlSelf->ysyx_24090015_top__DOT__src1 
                                               ^ vlSelf->ysyx_24090015_top__DOT__src2)
                                            : (vlSelf->ysyx_24090015_top__DOT__src1 
                                               << (0x1fU 
                                                   & vlSelf->ysyx_24090015_top__DOT__src2)))))));
                }
            }
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
            if ((0x5033U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       >> (0x1fU & vlSelf->ysyx_24090015_top__DOT__src2));
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = ((vlSelf->ysyx_24090015_top__DOT__src1 
                        >> 0x1fU) ? (((0x1fU >= ((IData)(0x1fU) 
                                                 - 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_24090015_top__DOT__src2)))
                                       ? ((IData)(0xffffffffU) 
                                          << ((IData)(0x1fU) 
                                              - (0x1fU 
                                                 & vlSelf->ysyx_24090015_top__DOT__src2)))
                                       : 0U) | (vlSelf->ysyx_24090015_top__DOT__src1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->ysyx_24090015_top__DOT__src2)))
                        : (vlSelf->ysyx_24090015_top__DOT__src1 
                           >> (0x1fU & vlSelf->ysyx_24090015_top__DOT__src2)));
            } else if ((0x3033U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       < vlSelf->ysyx_24090015_top__DOT__src2);
            } else if ((0x2033U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = (1U & (((((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                                    >> 0x1fU)) & (~ 
                                                  (vlSelf->ysyx_24090015_top__DOT__src2 
                                                   >> 0x1fU))) 
                               & (vlSelf->ysyx_24090015_top__DOT__src1 
                                  < vlSelf->ysyx_24090015_top__DOT__src2)) 
                              | (((vlSelf->ysyx_24090015_top__DOT__src1 
                                   & vlSelf->ysyx_24090015_top__DOT__src2) 
                                  >> 0x1fU) & (vlSelf->ysyx_24090015_top__DOT__src1 
                                               < vlSelf->ysyx_24090015_top__DOT__src2))) 
                             | ((vlSelf->ysyx_24090015_top__DOT__src1 
                                 >> 0x1fU) & (~ (vlSelf->ysyx_24090015_top__DOT__src2 
                                                 >> 0x1fU)))));
            } else if ((0x3073U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = vlSelf->ysyx_24090015_top__DOT__csr_rdata;
            } else if ((0x2073U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = vlSelf->ysyx_24090015_top__DOT__csr_rdata;
            } else if ((0x1073U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->ifu_raddr);
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = vlSelf->ysyx_24090015_top__DOT__csr_rdata;
            } else {
                vlSelf->ysyx_24090015_top__DOT__dnpc 
                    = vlSelf->ysyx_24090015_top__DOT__csr_rdata;
            }
        } else {
            vlSelf->ysyx_24090015_top__DOT__dnpc = 
                ((0x73U == vlSelf->inst) ? vlSelf->ysyx_24090015_top__DOT__csr_rdata
                  : ((IData)(4U) + vlSelf->ifu_raddr));
        }
    } else {
        vlSelf->ysyx_24090015_top__DOT__dnpc = ((IData)(4U) 
                                                + vlSelf->ifu_raddr);
    }
    if (((((((((0x2003U == (0x707fU & vlSelf->inst)) 
               | (0x1003U == (0x707fU & vlSelf->inst))) 
              | (0x5003U == (0x707fU & vlSelf->inst))) 
             | (3U == (0x707fU & vlSelf->inst))) | 
            (0x4003U == (0x707fU & vlSelf->inst))) 
           | (0x2023U == (0x707fU & vlSelf->inst))) 
          | (0x23U == (0x707fU & vlSelf->inst))) | 
         (0x1023U == (0x707fU & vlSelf->inst)))) {
        if ((0x2003U != (0x707fU & vlSelf->inst))) {
            if ((0x1003U != (0x707fU & vlSelf->inst))) {
                if ((0x5003U != (0x707fU & vlSelf->inst))) {
                    if ((3U != (0x707fU & vlSelf->inst))) {
                        if ((0x4003U != (0x707fU & vlSelf->inst))) {
                            vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                                = ((0x2023U == (0x707fU 
                                                & vlSelf->inst))
                                    ? vlSelf->ysyx_24090015_top__DOT__src2
                                    : ((0x23U == (0x707fU 
                                                  & vlSelf->inst))
                                        ? (0xffU & vlSelf->ysyx_24090015_top__DOT__src2)
                                        : (0xffffU 
                                           & vlSelf->ysyx_24090015_top__DOT__src2)));
                        }
                    }
                }
            }
        }
        if ((0x2003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                = (vlSelf->ysyx_24090015_top__DOT__src1 
                   + vlSelf->ysyx_24090015_top__DOT__imm);
            vlSelf->ysyx_24090015_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->ifu_raddr);
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = vlSelf->ysyx_24090015_top__DOT__lsu_rdata;
        } else if ((0x1003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                = (vlSelf->ysyx_24090015_top__DOT__src1 
                   + vlSelf->ysyx_24090015_top__DOT__imm);
            vlSelf->ysyx_24090015_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->ifu_raddr);
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = (((- (IData)((1U & (vlSelf->ysyx_24090015_top__DOT__lsu_rdata 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->ysyx_24090015_top__DOT__lsu_rdata));
        } else if ((0x5003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                = (vlSelf->ysyx_24090015_top__DOT__src1 
                   + vlSelf->ysyx_24090015_top__DOT__imm);
            vlSelf->ysyx_24090015_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->ifu_raddr);
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = vlSelf->ysyx_24090015_top__DOT__lsu_rdata;
        } else if ((3U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                = (vlSelf->ysyx_24090015_top__DOT__src1 
                   + vlSelf->ysyx_24090015_top__DOT__imm);
            vlSelf->ysyx_24090015_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->ifu_raddr);
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = (((- (IData)((1U & (vlSelf->ysyx_24090015_top__DOT__lsu_rdata 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelf->ysyx_24090015_top__DOT__lsu_rdata));
        } else if ((0x4003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                = (vlSelf->ysyx_24090015_top__DOT__src1 
                   + vlSelf->ysyx_24090015_top__DOT__imm);
            vlSelf->ysyx_24090015_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->ifu_raddr);
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = vlSelf->ysyx_24090015_top__DOT__lsu_rdata;
        } else if ((0x2023U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                = (vlSelf->ysyx_24090015_top__DOT__src1 
                   + vlSelf->ysyx_24090015_top__DOT__imm);
            vlSelf->ysyx_24090015_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->ifu_raddr);
        } else if ((0x23U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                = (vlSelf->ysyx_24090015_top__DOT__src1 
                   + vlSelf->ysyx_24090015_top__DOT__imm);
            vlSelf->ysyx_24090015_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->ifu_raddr);
        } else {
            vlSelf->ysyx_24090015_top__DOT__pmem_addr 
                = (vlSelf->ysyx_24090015_top__DOT__src1 
                   + vlSelf->ysyx_24090015_top__DOT__imm);
            vlSelf->ysyx_24090015_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->ifu_raddr);
        }
    } else {
        vlSelf->ysyx_24090015_top__DOT__pmem_wdata = 0U;
        vlSelf->ysyx_24090015_top__DOT__pmem_addr = 0U;
    }
}

void Vysyx_24090015_top___024root___nba_sequent__TOP__0(Vysyx_24090015_top___024root* vlSelf);

void Vysyx_24090015_top___024root___eval_nba(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24090015_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_24090015_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24090015_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_24090015_top___024root___ico_comb__TOP__0(vlSelf);
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
                VL_FATAL_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 12, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 12, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 12, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
