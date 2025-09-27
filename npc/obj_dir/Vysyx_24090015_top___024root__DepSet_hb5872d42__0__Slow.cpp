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
    vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__sram0__DOT__sram_state 
        = vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__ifu_respValid 
        = vlSelf->ysyx_24090015_top__DOT__ifu_respValid;
}

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_final(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_triggers__stl(Vysyx_24090015_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__stl(Vysyx_24090015_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_stl(Vysyx_24090015_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_settle(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_24090015_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24090015_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 12, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_24090015_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__stl(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] ysyx_24090015_top.sram0.sram_state)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24090015_top___024root___stl_sequent__TOP__0(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->ysyx_24090015_top__DOT__lsu_wen = 0U;
    }
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI 
        = (((- (IData)((vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                >> 0x14U));
    vlSelf->fetch = vlSelf->ysyx_24090015_top__DOT__ifu_respValid;
    vlSelf->inst = vlSelf->ysyx_24090015_top__DOT__ifu_rdata;
    vlSelf->ysyx_24090015_top__DOT__pmem_ls = (((((
                                                   ((((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst)) 
                                                      | (0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))) 
                                                    | (3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))) 
                                                   | (0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))) 
                                                  | (0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))) 
                                                 | (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))) 
                                                | (0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))) 
                                               & ((0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)) 
                                                  | ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst)) 
                                                     | ((0x5003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst)) 
                                                        | ((3U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->inst)) 
                                                           | (0x4003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->inst)))))));
    vlSelf->ysyx_24090015_top__DOT__pmem_work = (((
                                                   (((((0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst)) 
                                                       | (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x5003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))) 
                                                     | (3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))) 
                                                   | (0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))) 
                                                  | (0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))) 
                                                 | (0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
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
    vlSelf->ysyx_24090015_top__DOT__lsu_wen = (1U & 
                                               (~ (IData)(vlSelf->ysyx_24090015_top__DOT__pmem_ls)));
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
    vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask 
        = (((((((((0x2003U == (0x707fU & vlSelf->inst)) 
                  | (0x1003U == (0x707fU & vlSelf->inst))) 
                 | (0x5003U == (0x707fU & vlSelf->inst))) 
                | (3U == (0x707fU & vlSelf->inst))) 
               | (0x4003U == (0x707fU & vlSelf->inst))) 
              | (0x2023U == (0x707fU & vlSelf->inst))) 
             | (0x23U == (0x707fU & vlSelf->inst))) 
            | (0x1023U == (0x707fU & vlSelf->inst)))
            ? ((0x2003U == (0x707fU & vlSelf->inst))
                ? 0xfU : ((0x1003U == (0x707fU & vlSelf->inst))
                           ? 3U : ((0x5003U == (0x707fU 
                                                & vlSelf->inst))
                                    ? 3U : ((3U == 
                                             (0x707fU 
                                              & vlSelf->inst))
                                             ? 1U : 
                                            ((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->inst))
                                              ? 1U : 
                                             ((0x2023U 
                                               == (0x707fU 
                                                   & vlSelf->inst))
                                               ? 0xfU
                                               : ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))
                                                   ? 1U
                                                   : 3U)))))))
            : 0U);
    vlSelf->ysyx_24090015_top__DOT__lsu_wmask = ((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wen)
                                                  ? (IData)(vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask)
                                                  : 0U);
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

void Vysyx_24090015_top___024root___ico_comb__TOP__0(Vysyx_24090015_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_stl(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_24090015_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        Vysyx_24090015_top___024root___ico_comb__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__ico(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] ysyx_24090015_top.sram0.sram_state)\n");
    }
}
#endif  // VL_DEBUG

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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] ysyx_24090015_top.sram0.sram_state)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] ysyx_24090015_top.ifu_respValid)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] ysyx_24090015_top.sram0.sram_state)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] ysyx_24090015_top.ifu_respValid)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24090015_top___024root___ctor_var_reset(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->ifu_raddr = VL_RAND_RESET_I(32);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->fetch = VL_RAND_RESET_I(1);
    vlSelf->flag = VL_RAND_RESET_I(1);
    vlSelf->hit_good_or_bad = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ebreak_ret = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__dnpc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__ifu_respValid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ifu_reqvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ifu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__lsu_reqvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu_wmask = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24090015_top__DOT__lsu_respvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__pmem_work = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__pmem_ls = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__pmem_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__pmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__rd_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24090015_top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24090015_top__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24090015_top__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ren1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ren2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__pwen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__csr_wdata0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__csr_wdata1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__csr_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24090015_top__DOT__ifu_reqValid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu_reqValid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu_respValid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__sram0__DOT__sram_state = VL_RAND_RESET_I(2);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__ifu_respValid = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
