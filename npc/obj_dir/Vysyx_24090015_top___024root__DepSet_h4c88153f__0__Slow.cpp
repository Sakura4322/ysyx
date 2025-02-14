// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090015_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090015_top__Syms.h"
#include "Vysyx_24090015_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__stl(Vysyx_24090015_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_triggers__stl(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24090015_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vysyx_24090015_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ &ebreak__Vfuncrtn);

VL_ATTR_COLD void Vysyx_24090015_top___024root___stl_sequent__TOP__0(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
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
                                         ? 9U : 0U)
                                     : 0U) : 0U) : 
                            ((4U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                              ? ((2U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                  ? ((1U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                      ? 3U : 0U) : 0U)
                              : ((2U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                  ? ((1U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                      ? 7U : 0U) : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                              ? ((8U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)))
                              : ((8U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                     ? 6U
                                                     : 0U)
                                                    : 0U))))
                          : ((0x10U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                              ? ((8U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                           ? ((2U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                   ? 8U
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                   ? 2U
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                  ? ((4U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                      ? ((2U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                          ? ((1U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                              ? 5U : 0U)
                                          : 0U) : 0U)
                                  : ((4U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                      ? 0U : ((2U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                   ? 4U
                                                   : 0U)
                                               : 0U))))));
    vlSelf->ysyx_24090015_top__DOT__src2 = ((- (IData)((IData)(vlSelf->ysyx_24090015_top__DOT__ren2))) 
                                            & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                                            [vlSelf->ysyx_24090015_top__DOT__rs2]);
    if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
               | (0x3013U == (0x707fU & vlSelf->inst))) 
              | (0x67U == (0x707fU & vlSelf->inst))) 
             | (0x2003U == (0x707fU & vlSelf->inst))) 
            | (0x17U == (0x7fU & vlSelf->inst))) | 
           (0x37U == (0x7fU & vlSelf->inst))) | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst))) 
         | (0x2023U == (0x707fU & vlSelf->inst)))) {
        if ((0x13U != (0x707fU & vlSelf->inst))) {
            if ((0x3013U != (0x707fU & vlSelf->inst))) {
                if ((0x67U != (0x707fU & vlSelf->inst))) {
                    if ((0x2003U != (0x707fU & vlSelf->inst))) {
                        if ((0x17U != (0x7fU & vlSelf->inst))) {
                            if ((0x37U != (0x7fU & vlSelf->inst))) {
                                if ((0x6fU != (0x7fU 
                                               & vlSelf->inst))) {
                                    vlSelf->ysyx_24090015_top__DOT__wmask = 0xfU;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    Vysyx_24090015_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->inst, vlSelf->__Vfunc_ebreak__1__Vfuncout);
    vlSelf->ysyx_24090015_top__DOT__ren1 = (1U & vlSelf->__Vfunc_ebreak__1__Vfuncout);
    vlSelf->ysyx_24090015_top__DOT__src1 = ((- (IData)((IData)(vlSelf->ysyx_24090015_top__DOT__ren1))) 
                                            & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                                            [vlSelf->ysyx_24090015_top__DOT__rs1]);
    vlSelf->hit_good_or_bad = (1U & vlSelf->ysyx_24090015_top__DOT__src1);
    vlSelf->dnpc = ((IData)(4U) + vlSelf->pc);
    if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
               | (0x3013U == (0x707fU & vlSelf->inst))) 
              | (0x67U == (0x707fU & vlSelf->inst))) 
             | (0x2003U == (0x707fU & vlSelf->inst))) 
            | (0x17U == (0x7fU & vlSelf->inst))) | 
           (0x37U == (0x7fU & vlSelf->inst))) | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst))) 
         | (0x2023U == (0x707fU & vlSelf->inst)))) {
        if ((0x13U != (0x707fU & vlSelf->inst))) {
            if ((0x3013U != (0x707fU & vlSelf->inst))) {
                if ((0x67U != (0x707fU & vlSelf->inst))) {
                    if ((0x2003U != (0x707fU & vlSelf->inst))) {
                        if ((0x17U != (0x7fU & vlSelf->inst))) {
                            if ((0x37U != (0x7fU & vlSelf->inst))) {
                                if ((0x6fU != (0x7fU 
                                               & vlSelf->inst))) {
                                    vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                                        = vlSelf->ysyx_24090015_top__DOT__src2;
                                    vlSelf->ysyx_24090015_top__DOT__pmem_waddr 
                                        = (vlSelf->ysyx_24090015_top__DOT__src1 
                                           + vlSelf->ysyx_24090015_top__DOT__imm);
                                }
                            }
                        }
                    }
                    if ((0x2003U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    } else if ((0x17U != (0x7fU & vlSelf->inst))) {
                        if ((0x37U != (0x7fU & vlSelf->inst))) {
                            if ((0x6fU != (0x7fU & vlSelf->inst))) {
                                vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                                    = (vlSelf->ysyx_24090015_top__DOT__src1 
                                       + vlSelf->ysyx_24090015_top__DOT__imm);
                            }
                        }
                    }
                }
                if ((0x67U == (0x707fU & vlSelf->inst))) {
                    vlSelf->dnpc = (vlSelf->ysyx_24090015_top__DOT__src1 
                                    + vlSelf->ysyx_24090015_top__DOT__imm);
                } else if ((0x2003U != (0x707fU & vlSelf->inst))) {
                    if ((0x17U != (0x7fU & vlSelf->inst))) {
                        if ((0x37U != (0x7fU & vlSelf->inst))) {
                            if ((0x6fU == (0x7fU & vlSelf->inst))) {
                                vlSelf->dnpc = (vlSelf->pc 
                                                + vlSelf->ysyx_24090015_top__DOT__imm);
                            }
                        }
                    }
                }
            }
        }
        if ((0x13U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = (vlSelf->ysyx_24090015_top__DOT__src1 
                   + vlSelf->ysyx_24090015_top__DOT__imm);
        } else if ((0x3013U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = (vlSelf->ysyx_24090015_top__DOT__src1 
                   < vlSelf->ysyx_24090015_top__DOT__imm);
        } else if ((0x67U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = ((IData)(4U) + vlSelf->pc);
        } else if ((0x2003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = vlSelf->ysyx_24090015_top__DOT__pmem_rdata;
        } else if ((0x17U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
        } else if ((0x37U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = vlSelf->ysyx_24090015_top__DOT__imm;
        } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = ((IData)(4U) + vlSelf->pc);
        }
    } else {
        if ((0x1063U == (0x707fU & vlSelf->inst))) {
            if ((vlSelf->ysyx_24090015_top__DOT__src1 
                 != vlSelf->ysyx_24090015_top__DOT__src2)) {
                vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
            }
        } else if ((0x63U == (0x707fU & vlSelf->inst))) {
            if ((vlSelf->ysyx_24090015_top__DOT__src1 
                 == vlSelf->ysyx_24090015_top__DOT__src2)) {
                vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
            }
        }
        if ((0x1063U != (0x707fU & vlSelf->inst))) {
            if ((0x63U != (0x707fU & vlSelf->inst))) {
                if ((0x40000033U == (0xfe00707fU & vlSelf->inst))) {
                    vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                        = (vlSelf->ysyx_24090015_top__DOT__src1 
                           - vlSelf->ysyx_24090015_top__DOT__src2);
                } else if ((0x33U == (0xfe00707fU & vlSelf->inst))) {
                    vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                        = (vlSelf->ysyx_24090015_top__DOT__src1 
                           + vlSelf->ysyx_24090015_top__DOT__src2);
                }
            }
        }
    }
}
