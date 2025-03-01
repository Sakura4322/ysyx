// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090015_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090015_top___024root.h"

void Vysyx_24090015_top___024root___ico_sequent__TOP__0(Vysyx_24090015_top___024root* vlSelf);

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

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_sequent__TOP__2(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_24090015_top__DOT__control_unit0__DOT__cpu_state 
        = vlSelf->ysyx_24090015_top__DOT__control_unit0__DOT__next_state;
    if ((1U == (IData)(vlSelf->ysyx_24090015_top__DOT__control_unit0__DOT__cpu_state))) {
        vlSelf->ysyx_24090015_top__DOT__control_unit0__DOT__next_state = 2U;
        vlSelf->ysyx_24090015_top__DOT__wen_control = 0U;
        vlSelf->ysyx_24090015_top__DOT__valid_control = 0U;
        vlSelf->ysyx_24090015_top__DOT__pwen_control = 0U;
        vlSelf->ysyx_24090015_top__DOT__ren2_control = 0U;
        vlSelf->ysyx_24090015_top__DOT__ren1_control = 0U;
    } else {
        vlSelf->ysyx_24090015_top__DOT__control_unit0__DOT__next_state = 1U;
        if ((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__control_unit0__DOT__cpu_state))) {
            vlSelf->ysyx_24090015_top__DOT__wen_control 
                = vlSelf->ysyx_24090015_top__DOT__wen;
            vlSelf->ysyx_24090015_top__DOT__valid_control 
                = vlSelf->ysyx_24090015_top__DOT__valid;
            vlSelf->ysyx_24090015_top__DOT__pwen_control 
                = vlSelf->ysyx_24090015_top__DOT__pwen;
            vlSelf->ysyx_24090015_top__DOT__ren2_control 
                = vlSelf->ysyx_24090015_top__DOT__ren2;
            vlSelf->ysyx_24090015_top__DOT__ren1_control 
                = vlSelf->ysyx_24090015_top__DOT__ren1;
        }
    }
}

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_comb__TOP__0(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24090015_top__DOT__src2 = ((- (IData)((IData)(vlSelf->ysyx_24090015_top__DOT__ren2_control))) 
                                            & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                                            [vlSelf->ysyx_24090015_top__DOT__rs2]);
    vlSelf->ysyx_24090015_top__DOT__src1 = ((- (IData)((IData)(vlSelf->ysyx_24090015_top__DOT__ren1_control))) 
                                            & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                                            [vlSelf->ysyx_24090015_top__DOT__rs1]);
    if ((1U & (~ ((((((((0x13U == (0x707fU & vlSelf->inst)) 
                        | (0x7013U == (0x707fU & vlSelf->inst))) 
                       | (0x5013U == (0xfe00707fU & vlSelf->inst))) 
                      | (0x1013U == (0xfe00707fU & vlSelf->inst))) 
                     | (0x3013U == (0x707fU & vlSelf->inst))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->inst))) 
                   | (0x4013U == (0x707fU & vlSelf->inst))) 
                  | (0x67U == (0x707fU & vlSelf->inst)))))) {
        if ((1U & (~ ((((((((0x2003U == (0x707fU & vlSelf->inst)) 
                            | (0x1003U == (0x707fU 
                                           & vlSelf->inst))) 
                           | (0x5003U == (0x707fU & vlSelf->inst))) 
                          | (3U == (0x707fU & vlSelf->inst))) 
                         | (0x4003U == (0x707fU & vlSelf->inst))) 
                        | (0x17U == (0x7fU & vlSelf->inst))) 
                       | (0x37U == (0x7fU & vlSelf->inst))) 
                      | (0x6fU == (0x7fU & vlSelf->inst)))))) {
            if (((((((((0x2023U == (0x707fU & vlSelf->inst)) 
                       | (0x23U == (0x707fU & vlSelf->inst))) 
                      | (0x1023U == (0x707fU & vlSelf->inst))) 
                     | (0x1063U == (0x707fU & vlSelf->inst))) 
                    | (0x63U == (0x707fU & vlSelf->inst))) 
                   | (0x5063U == (0x707fU & vlSelf->inst))) 
                  | (0x7063U == (0x707fU & vlSelf->inst))) 
                 | (0x4063U == (0x707fU & vlSelf->inst)))) {
                if ((0x2023U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                        = vlSelf->ysyx_24090015_top__DOT__src2;
                    vlSelf->ysyx_24090015_top__DOT__pmem_waddr 
                        = (vlSelf->ysyx_24090015_top__DOT__src1 
                           + vlSelf->ysyx_24090015_top__DOT__imm);
                } else if ((0x23U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                        = (0xffU & vlSelf->ysyx_24090015_top__DOT__src2);
                    vlSelf->ysyx_24090015_top__DOT__pmem_waddr 
                        = (vlSelf->ysyx_24090015_top__DOT__src1 
                           + vlSelf->ysyx_24090015_top__DOT__imm);
                } else if ((0x1023U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                        = (0xffffU & vlSelf->ysyx_24090015_top__DOT__src2);
                    vlSelf->ysyx_24090015_top__DOT__pmem_waddr 
                        = (vlSelf->ysyx_24090015_top__DOT__src1 
                           + vlSelf->ysyx_24090015_top__DOT__imm);
                }
            }
        }
        if (((((((((0x2003U == (0x707fU & vlSelf->inst)) 
                   | (0x1003U == (0x707fU & vlSelf->inst))) 
                  | (0x5003U == (0x707fU & vlSelf->inst))) 
                 | (3U == (0x707fU & vlSelf->inst))) 
                | (0x4003U == (0x707fU & vlSelf->inst))) 
               | (0x17U == (0x7fU & vlSelf->inst))) 
              | (0x37U == (0x7fU & vlSelf->inst))) 
             | (0x6fU == (0x7fU & vlSelf->inst)))) {
            if ((0x2003U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       + vlSelf->ysyx_24090015_top__DOT__imm);
            } else if ((0x1003U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       + vlSelf->ysyx_24090015_top__DOT__imm);
            } else if ((0x5003U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       + vlSelf->ysyx_24090015_top__DOT__imm);
            } else if ((3U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       + vlSelf->ysyx_24090015_top__DOT__imm);
            } else if ((0x4003U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       + vlSelf->ysyx_24090015_top__DOT__imm);
            }
        } else if (((((((((0x2023U == (0x707fU & vlSelf->inst)) 
                          | (0x23U == (0x707fU & vlSelf->inst))) 
                         | (0x1023U == (0x707fU & vlSelf->inst))) 
                        | (0x1063U == (0x707fU & vlSelf->inst))) 
                       | (0x63U == (0x707fU & vlSelf->inst))) 
                      | (0x5063U == (0x707fU & vlSelf->inst))) 
                     | (0x7063U == (0x707fU & vlSelf->inst))) 
                    | (0x4063U == (0x707fU & vlSelf->inst)))) {
            if ((0x2023U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       + vlSelf->ysyx_24090015_top__DOT__imm);
            } else if ((0x23U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       + vlSelf->ysyx_24090015_top__DOT__imm);
            } else if ((0x1023U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                       + vlSelf->ysyx_24090015_top__DOT__imm);
            }
        }
    }
    vlSelf->hit_good_or_bad = (1U & vlSelf->ysyx_24090015_top__DOT__src1);
    vlSelf->dnpc = ((IData)(4U) + vlSelf->pc);
    if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
               | (0x7013U == (0x707fU & vlSelf->inst))) 
              | (0x5013U == (0xfe00707fU & vlSelf->inst))) 
             | (0x1013U == (0xfe00707fU & vlSelf->inst))) 
            | (0x3013U == (0x707fU & vlSelf->inst))) 
           | (0x40005013U == (0xfe00707fU & vlSelf->inst))) 
          | (0x4013U == (0x707fU & vlSelf->inst))) 
         | (0x67U == (0x707fU & vlSelf->inst)))) {
        if ((0x13U != (0x707fU & vlSelf->inst))) {
            if ((0x7013U != (0x707fU & vlSelf->inst))) {
                if ((0x5013U != (0xfe00707fU & vlSelf->inst))) {
                    if ((0x1013U != (0xfe00707fU & vlSelf->inst))) {
                        if ((0x3013U != (0x707fU & vlSelf->inst))) {
                            if ((0x40005013U != (0xfe00707fU 
                                                 & vlSelf->inst))) {
                                if ((0x4013U != (0x707fU 
                                                 & vlSelf->inst))) {
                                    vlSelf->dnpc = 
                                        (vlSelf->ysyx_24090015_top__DOT__src1 
                                         + vlSelf->ysyx_24090015_top__DOT__imm);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if (((((((((0x2003U == (0x707fU & vlSelf->inst)) 
                      | (0x1003U == (0x707fU & vlSelf->inst))) 
                     | (0x5003U == (0x707fU & vlSelf->inst))) 
                    | (3U == (0x707fU & vlSelf->inst))) 
                   | (0x4003U == (0x707fU & vlSelf->inst))) 
                  | (0x17U == (0x7fU & vlSelf->inst))) 
                 | (0x37U == (0x7fU & vlSelf->inst))) 
                | (0x6fU == (0x7fU & vlSelf->inst)))) {
        if ((0x2003U != (0x707fU & vlSelf->inst))) {
            if ((0x1003U != (0x707fU & vlSelf->inst))) {
                if ((0x5003U != (0x707fU & vlSelf->inst))) {
                    if ((3U != (0x707fU & vlSelf->inst))) {
                        if ((0x4003U != (0x707fU & vlSelf->inst))) {
                            if ((0x17U != (0x7fU & vlSelf->inst))) {
                                if ((0x37U != (0x7fU 
                                               & vlSelf->inst))) {
                                    vlSelf->dnpc = 
                                        (vlSelf->pc 
                                         + vlSelf->ysyx_24090015_top__DOT__imm);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if (((((((((0x2023U == (0x707fU & vlSelf->inst)) 
                      | (0x23U == (0x707fU & vlSelf->inst))) 
                     | (0x1023U == (0x707fU & vlSelf->inst))) 
                    | (0x1063U == (0x707fU & vlSelf->inst))) 
                   | (0x63U == (0x707fU & vlSelf->inst))) 
                  | (0x5063U == (0x707fU & vlSelf->inst))) 
                 | (0x7063U == (0x707fU & vlSelf->inst))) 
                | (0x4063U == (0x707fU & vlSelf->inst)))) {
        if ((0x2023U != (0x707fU & vlSelf->inst))) {
            if ((0x23U != (0x707fU & vlSelf->inst))) {
                if ((0x1023U != (0x707fU & vlSelf->inst))) {
                    if ((0x1063U == (0x707fU & vlSelf->inst))) {
                        if ((vlSelf->ysyx_24090015_top__DOT__src1 
                             != vlSelf->ysyx_24090015_top__DOT__src2)) {
                            vlSelf->dnpc = (vlSelf->pc 
                                            + vlSelf->ysyx_24090015_top__DOT__imm);
                        }
                    } else if ((0x63U == (0x707fU & vlSelf->inst))) {
                        if ((vlSelf->ysyx_24090015_top__DOT__src1 
                             == vlSelf->ysyx_24090015_top__DOT__src2)) {
                            vlSelf->dnpc = (vlSelf->pc 
                                            + vlSelf->ysyx_24090015_top__DOT__imm);
                        }
                    } else if ((0x5063U == (0x707fU 
                                            & vlSelf->inst))) {
                        if ((1U & (((((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                                          >> 0x1fU)) 
                                      & (~ (vlSelf->ysyx_24090015_top__DOT__src2 
                                            >> 0x1fU))) 
                                     & (vlSelf->ysyx_24090015_top__DOT__src1 
                                        >= vlSelf->ysyx_24090015_top__DOT__src2)) 
                                    | (((vlSelf->ysyx_24090015_top__DOT__src1 
                                         & vlSelf->ysyx_24090015_top__DOT__src2) 
                                        >> 0x1fU) & 
                                       (vlSelf->ysyx_24090015_top__DOT__src1 
                                        >= vlSelf->ysyx_24090015_top__DOT__src2))) 
                                   | ((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                                          >> 0x1fU)) 
                                      & (vlSelf->ysyx_24090015_top__DOT__src2 
                                         >> 0x1fU))))) {
                            vlSelf->dnpc = (vlSelf->pc 
                                            + vlSelf->ysyx_24090015_top__DOT__imm);
                        }
                    } else if ((0x7063U == (0x707fU 
                                            & vlSelf->inst))) {
                        if ((vlSelf->ysyx_24090015_top__DOT__src1 
                             >= vlSelf->ysyx_24090015_top__DOT__src2)) {
                            vlSelf->dnpc = (vlSelf->pc 
                                            + vlSelf->ysyx_24090015_top__DOT__imm);
                        }
                    } else if ((1U & (((((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                                             >> 0x1fU)) 
                                         & (~ (vlSelf->ysyx_24090015_top__DOT__src2 
                                               >> 0x1fU))) 
                                        & (vlSelf->ysyx_24090015_top__DOT__src1 
                                           < vlSelf->ysyx_24090015_top__DOT__src2)) 
                                       | (((vlSelf->ysyx_24090015_top__DOT__src1 
                                            & vlSelf->ysyx_24090015_top__DOT__src2) 
                                           >> 0x1fU) 
                                          & (vlSelf->ysyx_24090015_top__DOT__src1 
                                             < vlSelf->ysyx_24090015_top__DOT__src2))) 
                                      | ((vlSelf->ysyx_24090015_top__DOT__src1 
                                          >> 0x1fU) 
                                         & (~ (vlSelf->ysyx_24090015_top__DOT__src2 
                                               >> 0x1fU)))))) {
                        vlSelf->dnpc = (vlSelf->pc 
                                        + vlSelf->ysyx_24090015_top__DOT__imm);
                    }
                }
            }
        }
    } else if (((((((((0x6063U == (0x707fU & vlSelf->inst)) 
                      | (0x40000033U == (0xfe00707fU 
                                         & vlSelf->inst))) 
                     | (0x33U == (0xfe00707fU & vlSelf->inst))) 
                    | (0x6033U == (0xfe00707fU & vlSelf->inst))) 
                   | (0x7033U == (0xfe00707fU & vlSelf->inst))) 
                  | (0x4033U == (0xfe00707fU & vlSelf->inst))) 
                 | (0x1033U == (0xfe00707fU & vlSelf->inst))) 
                | (0x5033U == (0xfe00707fU & vlSelf->inst)))) {
        if ((0x6063U == (0x707fU & vlSelf->inst))) {
            if ((vlSelf->ysyx_24090015_top__DOT__src1 
                 < vlSelf->ysyx_24090015_top__DOT__src2)) {
                vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_comb__TOP__1(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_comb__TOP__1\n"); );
    // Body
    if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
               | (0x7013U == (0x707fU & vlSelf->inst))) 
              | (0x5013U == (0xfe00707fU & vlSelf->inst))) 
             | (0x1013U == (0xfe00707fU & vlSelf->inst))) 
            | (0x3013U == (0x707fU & vlSelf->inst))) 
           | (0x40005013U == (0xfe00707fU & vlSelf->inst))) 
          | (0x4013U == (0x707fU & vlSelf->inst))) 
         | (0x67U == (0x707fU & vlSelf->inst)))) {
        vlSelf->ysyx_24090015_top__DOT__rd_wdata = 
            ((0x13U == (0x707fU & vlSelf->inst)) ? 
             (vlSelf->ysyx_24090015_top__DOT__src1 
              + vlSelf->ysyx_24090015_top__DOT__imm)
              : ((0x7013U == (0x707fU & vlSelf->inst))
                  ? (vlSelf->ysyx_24090015_top__DOT__src1 
                     & vlSelf->ysyx_24090015_top__DOT__imm)
                  : ((0x5013U == (0xfe00707fU & vlSelf->inst))
                      ? (vlSelf->ysyx_24090015_top__DOT__src1 
                         >> (0x1fU & vlSelf->ysyx_24090015_top__DOT__imm))
                      : ((0x1013U == (0xfe00707fU & vlSelf->inst))
                          ? (vlSelf->ysyx_24090015_top__DOT__src1 
                             << (0x1fU & vlSelf->ysyx_24090015_top__DOT__imm))
                          : ((0x3013U == (0x707fU & vlSelf->inst))
                              ? (vlSelf->ysyx_24090015_top__DOT__src1 
                                 < vlSelf->ysyx_24090015_top__DOT__imm)
                              : ((0x40005013U == (0xfe00707fU 
                                                  & vlSelf->inst))
                                  ? ((vlSelf->ysyx_24090015_top__DOT__src1 
                                      >> 0x1fU) ? (
                                                   ((0x1fU 
                                                     >= 
                                                     ((IData)(0x1fU) 
                                                      - 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_24090015_top__DOT__imm)))
                                                     ? 
                                                    ((IData)(0xffffffffU) 
                                                     << 
                                                     ((IData)(0x1fU) 
                                                      - 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_24090015_top__DOT__imm)))
                                                     : 0U) 
                                                   | (vlSelf->ysyx_24090015_top__DOT__src1 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_24090015_top__DOT__imm)))
                                      : (vlSelf->ysyx_24090015_top__DOT__src1 
                                         >> (0x1fU 
                                             & vlSelf->ysyx_24090015_top__DOT__imm)))
                                  : ((0x4013U == (0x707fU 
                                                  & vlSelf->inst))
                                      ? (vlSelf->ysyx_24090015_top__DOT__src1 
                                         ^ vlSelf->ysyx_24090015_top__DOT__imm)
                                      : ((IData)(4U) 
                                         + vlSelf->pc))))))));
    } else if (((((((((0x2003U == (0x707fU & vlSelf->inst)) 
                      | (0x1003U == (0x707fU & vlSelf->inst))) 
                     | (0x5003U == (0x707fU & vlSelf->inst))) 
                    | (3U == (0x707fU & vlSelf->inst))) 
                   | (0x4003U == (0x707fU & vlSelf->inst))) 
                  | (0x17U == (0x7fU & vlSelf->inst))) 
                 | (0x37U == (0x7fU & vlSelf->inst))) 
                | (0x6fU == (0x7fU & vlSelf->inst)))) {
        vlSelf->ysyx_24090015_top__DOT__rd_wdata = 
            ((0x2003U == (0x707fU & vlSelf->inst)) ? vlSelf->ysyx_24090015_top__DOT__pmem_rdata
              : ((0x1003U == (0x707fU & vlSelf->inst))
                  ? (((- (IData)((1U & (vlSelf->ysyx_24090015_top__DOT__pmem_rdata 
                                        >> 0xfU)))) 
                      << 0x10U) | (0xffffU & vlSelf->ysyx_24090015_top__DOT__pmem_rdata))
                  : ((0x5003U == (0x707fU & vlSelf->inst))
                      ? (0xffffU & vlSelf->ysyx_24090015_top__DOT__pmem_rdata)
                      : ((3U == (0x707fU & vlSelf->inst))
                          ? (((- (IData)((1U & (vlSelf->ysyx_24090015_top__DOT__pmem_rdata 
                                                >> 0xfU)))) 
                              << 8U) | (0xffU & vlSelf->ysyx_24090015_top__DOT__pmem_rdata))
                          : ((0x4003U == (0x707fU & vlSelf->inst))
                              ? (0xffU & vlSelf->ysyx_24090015_top__DOT__pmem_rdata)
                              : ((0x17U == (0x7fU & vlSelf->inst))
                                  ? (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm)
                                  : ((0x37U == (0x7fU 
                                                & vlSelf->inst))
                                      ? vlSelf->ysyx_24090015_top__DOT__imm
                                      : ((IData)(4U) 
                                         + vlSelf->pc))))))));
    } else if ((1U & (~ ((((((((0x2023U == (0x707fU 
                                            & vlSelf->inst)) 
                               | (0x23U == (0x707fU 
                                            & vlSelf->inst))) 
                              | (0x1023U == (0x707fU 
                                             & vlSelf->inst))) 
                             | (0x1063U == (0x707fU 
                                            & vlSelf->inst))) 
                            | (0x63U == (0x707fU & vlSelf->inst))) 
                           | (0x5063U == (0x707fU & vlSelf->inst))) 
                          | (0x7063U == (0x707fU & vlSelf->inst))) 
                         | (0x4063U == (0x707fU & vlSelf->inst)))))) {
        if (((((((((0x6063U == (0x707fU & vlSelf->inst)) 
                   | (0x40000033U == (0xfe00707fU & vlSelf->inst))) 
                  | (0x33U == (0xfe00707fU & vlSelf->inst))) 
                 | (0x6033U == (0xfe00707fU & vlSelf->inst))) 
                | (0x7033U == (0xfe00707fU & vlSelf->inst))) 
               | (0x4033U == (0xfe00707fU & vlSelf->inst))) 
              | (0x1033U == (0xfe00707fU & vlSelf->inst))) 
             | (0x5033U == (0xfe00707fU & vlSelf->inst)))) {
            if ((0x6063U != (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                    = ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->inst))
                        ? (vlSelf->ysyx_24090015_top__DOT__src1 
                           - vlSelf->ysyx_24090015_top__DOT__src2)
                        : ((0x33U == (0xfe00707fU & vlSelf->inst))
                            ? (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__src2)
                            : ((0x6033U == (0xfe00707fU 
                                            & vlSelf->inst))
                                ? (vlSelf->ysyx_24090015_top__DOT__src1 
                                   | vlSelf->ysyx_24090015_top__DOT__src2)
                                : ((0x7033U == (0xfe00707fU 
                                                & vlSelf->inst))
                                    ? (vlSelf->ysyx_24090015_top__DOT__src1 
                                       & vlSelf->ysyx_24090015_top__DOT__src2)
                                    : ((0x4033U == 
                                        (0xfe00707fU 
                                         & vlSelf->inst))
                                        ? (vlSelf->ysyx_24090015_top__DOT__src1 
                                           ^ vlSelf->ysyx_24090015_top__DOT__src2)
                                        : ((0x1033U 
                                            == (0xfe00707fU 
                                                & vlSelf->inst))
                                            ? (vlSelf->ysyx_24090015_top__DOT__src1 
                                               << (0x1fU 
                                                   & vlSelf->ysyx_24090015_top__DOT__src2))
                                            : (vlSelf->ysyx_24090015_top__DOT__src1 
                                               >> (0x1fU 
                                                   & vlSelf->ysyx_24090015_top__DOT__src2))))))));
            }
        } else if ((0x40005033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = ((vlSelf->ysyx_24090015_top__DOT__src1 
                    >> 0x1fU) ? (((0x1fU >= ((IData)(0x1fU) 
                                             - (0x1fU 
                                                & vlSelf->ysyx_24090015_top__DOT__src2)))
                                   ? ((IData)(0xffffffffU) 
                                      << ((IData)(0x1fU) 
                                          - (0x1fU 
                                             & vlSelf->ysyx_24090015_top__DOT__src2)))
                                   : 0U) | (vlSelf->ysyx_24090015_top__DOT__src1 
                                            >> (0x1fU 
                                                & vlSelf->ysyx_24090015_top__DOT__src2)))
                    : (vlSelf->ysyx_24090015_top__DOT__src1 
                       >> (0x1fU & vlSelf->ysyx_24090015_top__DOT__src2)));
        } else if ((0x3033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = (vlSelf->ysyx_24090015_top__DOT__src1 
                   < vlSelf->ysyx_24090015_top__DOT__src2);
        } else if ((0x2033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = (1U & (((((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                                >> 0x1fU)) & (~ (vlSelf->ysyx_24090015_top__DOT__src2 
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
        }
    }
}

void Vysyx_24090015_top___024root___nba_sequent__TOP__0(Vysyx_24090015_top___024root* vlSelf);
void Vysyx_24090015_top___024root___nba_sequent__TOP__1(Vysyx_24090015_top___024root* vlSelf);

void Vysyx_24090015_top___024root___eval_nba(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24090015_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24090015_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_24090015_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_24090015_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_24090015_top___024root___nba_comb__TOP__1(vlSelf);
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
                VL_FATAL_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 30, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 30, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 30, "", "NBA region did not converge.");
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
