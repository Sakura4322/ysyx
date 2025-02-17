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

void Vysyx_24090015_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ &ebreak__Vfuncrtn);
void Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_24090015_top___024root___ico_sequent__TOP__0(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    if ((1U & (~ ((((((((0x13U == (0x707fU & vlSelf->inst)) 
                        | (0x7013U == (0x707fU & vlSelf->inst))) 
                       | (0x5013U == (0xfe00707fU & vlSelf->inst))) 
                      | (0x1013U == (0xfe00707fU & vlSelf->inst))) 
                     | (0x3013U == (0x707fU & vlSelf->inst))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->inst))) 
                   | (0x67U == (0x707fU & vlSelf->inst))) 
                  | (0x2003U == (0x707fU & vlSelf->inst)))))) {
        if (((((((((0x17U == (0x7fU & vlSelf->inst)) 
                   | (0x37U == (0x7fU & vlSelf->inst))) 
                  | (0x6fU == (0x7fU & vlSelf->inst))) 
                 | (0x2023U == (0x707fU & vlSelf->inst))) 
                | (0x1023U == (0x707fU & vlSelf->inst))) 
               | (0x23U == (0x707fU & vlSelf->inst))) 
              | (0x1063U == (0x707fU & vlSelf->inst))) 
             | (0x63U == (0x707fU & vlSelf->inst)))) {
            if ((0x17U != (0x7fU & vlSelf->inst))) {
                if ((0x37U != (0x7fU & vlSelf->inst))) {
                    if ((0x6fU != (0x7fU & vlSelf->inst))) {
                        if ((0x2023U == (0x707fU & vlSelf->inst))) {
                            vlSelf->ysyx_24090015_top__DOT__wmask = 0xfU;
                        } else if ((0x1023U == (0x707fU 
                                                & vlSelf->inst))) {
                            vlSelf->ysyx_24090015_top__DOT__wmask = 1U;
                        } else if ((0x23U == (0x707fU 
                                              & vlSelf->inst))) {
                            vlSelf->ysyx_24090015_top__DOT__wmask = 3U;
                        }
                    }
                }
            }
        }
    }
    Vysyx_24090015_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->inst, vlSelf->__Vfunc_ebreak__1__Vfuncout);
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
                                           ? ((2U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                                   ? 8U
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode))
                                               ? ((1U 
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
    if (((((((((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
               | (3U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
              | (4U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
             | (8U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
            | (9U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
           | (6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
          | (7U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) 
         | (1U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))) {
        if ((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_24090015_top__DOT__rs2 = 0U;
            vlSelf->ysyx_24090015_top__DOT__imm = vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI;
            vlSelf->ysyx_24090015_top__DOT__rs1 = (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU));
        } else if ((3U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_24090015_top__DOT__rs2 = 0U;
            vlSelf->ysyx_24090015_top__DOT__imm = vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI;
            vlSelf->ysyx_24090015_top__DOT__rs1 = (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU));
        } else if ((4U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_24090015_top__DOT__rs2 = 0U;
            vlSelf->ysyx_24090015_top__DOT__imm = vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI;
            vlSelf->ysyx_24090015_top__DOT__rs1 = (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU));
        } else if ((8U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_24090015_top__DOT__rs2 = 0U;
            vlSelf->ysyx_24090015_top__DOT__imm = (0xfffff000U 
                                                   & vlSelf->inst);
            vlSelf->ysyx_24090015_top__DOT__rs1 = (0x1fU 
                                                   & 0U);
        } else if ((9U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_24090015_top__DOT__rs2 = 0U;
            vlSelf->ysyx_24090015_top__DOT__imm = (
                                                   ((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->inst 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->inst) 
                                                         | ((0x800U 
                                                             & (vlSelf->inst 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->inst 
                                                                  >> 0x14U))))));
            vlSelf->ysyx_24090015_top__DOT__rs1 = (0x1fU 
                                                   & 0U);
        } else if ((6U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & 0U);
            vlSelf->ysyx_24090015_top__DOT__rs2 = (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U));
            vlSelf->ysyx_24090015_top__DOT__imm = (
                                                   ((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->inst 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->inst 
                                                            >> 7U))));
            vlSelf->ysyx_24090015_top__DOT__rs1 = (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU));
        } else if ((7U == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))) {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & 0U);
            vlSelf->ysyx_24090015_top__DOT__rs2 = (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U));
            vlSelf->ysyx_24090015_top__DOT__imm = (
                                                   ((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (vlSelf->inst 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (vlSelf->inst 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->inst 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->inst 
                                                                  >> 7U))))));
            vlSelf->ysyx_24090015_top__DOT__rs1 = (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU));
        } else {
            vlSelf->ysyx_24090015_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_24090015_top__DOT__rs2 = (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U));
            vlSelf->ysyx_24090015_top__DOT__imm = 0U;
            vlSelf->ysyx_24090015_top__DOT__rs1 = (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU));
        }
        vlSelf->ysyx_24090015_top__DOT__wen = ((2U 
                                                == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                               | ((3U 
                                                   == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                     | ((8U 
                                                         == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                        | ((9U 
                                                            == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                           | ((6U 
                                                               != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                              & (7U 
                                                                 != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))))))));
        vlSelf->ysyx_24090015_top__DOT__pwen = ((2U 
                                                 != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                & ((3U 
                                                    != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                   & ((4U 
                                                       != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                      & ((8U 
                                                          != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                         & ((9U 
                                                             != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                            & (6U 
                                                               == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))))));
        vlSelf->ysyx_24090015_top__DOT__valid = ((2U 
                                                  != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                 & ((3U 
                                                     != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                    & ((4U 
                                                        == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                       | ((8U 
                                                           != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                          & ((9U 
                                                              != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                             & (6U 
                                                                == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)))))));
        vlSelf->ysyx_24090015_top__DOT__ren2 = ((2U 
                                                 != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                & ((3U 
                                                    != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                   & ((4U 
                                                       != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                      & ((8U 
                                                          != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                         & (9U 
                                                            != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))))));
        vlSelf->ysyx_24090015_top__DOT__ren1 = ((2U 
                                                 == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                | ((3U 
                                                    == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                   | ((4U 
                                                       == (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                      | ((8U 
                                                          != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type)) 
                                                         & (9U 
                                                            != (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type))))));
    } else {
        vlSelf->ysyx_24090015_top__DOT__rd = 0U;
        vlSelf->ysyx_24090015_top__DOT__rs2 = 0U;
        vlSelf->ysyx_24090015_top__DOT__imm = 0U;
        vlSelf->ysyx_24090015_top__DOT__rs1 = 0U;
        vlSelf->ysyx_24090015_top__DOT__wen = 0U;
        vlSelf->ysyx_24090015_top__DOT__pwen = 0U;
        vlSelf->ysyx_24090015_top__DOT__valid = 0U;
        vlSelf->ysyx_24090015_top__DOT__ren2 = 0U;
        vlSelf->ysyx_24090015_top__DOT__ren1 = 0U;
    }
    if ((1U == (IData)(vlSelf->ysyx_24090015_top__DOT__control_unit0__DOT__cpu_state))) {
        vlSelf->ysyx_24090015_top__DOT__wen_control = 0U;
        vlSelf->ysyx_24090015_top__DOT__pwen_control = 0U;
        vlSelf->ysyx_24090015_top__DOT__valid_control = 0U;
        vlSelf->ysyx_24090015_top__DOT__ren2_control = 0U;
        vlSelf->ysyx_24090015_top__DOT__ren1_control = 0U;
    } else if ((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__control_unit0__DOT__cpu_state))) {
        vlSelf->ysyx_24090015_top__DOT__wen_control 
            = vlSelf->ysyx_24090015_top__DOT__wen;
        vlSelf->ysyx_24090015_top__DOT__pwen_control 
            = vlSelf->ysyx_24090015_top__DOT__pwen;
        vlSelf->ysyx_24090015_top__DOT__valid_control 
            = vlSelf->ysyx_24090015_top__DOT__valid;
        vlSelf->ysyx_24090015_top__DOT__ren2_control 
            = vlSelf->ysyx_24090015_top__DOT__ren2;
        vlSelf->ysyx_24090015_top__DOT__ren1_control 
            = vlSelf->ysyx_24090015_top__DOT__ren1;
    }
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
                   | (0x67U == (0x707fU & vlSelf->inst))) 
                  | (0x2003U == (0x707fU & vlSelf->inst)))))) {
        if (((((((((0x17U == (0x7fU & vlSelf->inst)) 
                   | (0x37U == (0x7fU & vlSelf->inst))) 
                  | (0x6fU == (0x7fU & vlSelf->inst))) 
                 | (0x2023U == (0x707fU & vlSelf->inst))) 
                | (0x1023U == (0x707fU & vlSelf->inst))) 
               | (0x23U == (0x707fU & vlSelf->inst))) 
              | (0x1063U == (0x707fU & vlSelf->inst))) 
             | (0x63U == (0x707fU & vlSelf->inst)))) {
            if ((0x17U != (0x7fU & vlSelf->inst))) {
                if ((0x37U != (0x7fU & vlSelf->inst))) {
                    if ((0x6fU != (0x7fU & vlSelf->inst))) {
                        if ((0x2023U == (0x707fU & vlSelf->inst))) {
                            vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                                = vlSelf->ysyx_24090015_top__DOT__src2;
                            vlSelf->ysyx_24090015_top__DOT__pmem_waddr 
                                = (vlSelf->ysyx_24090015_top__DOT__src1 
                                   + vlSelf->ysyx_24090015_top__DOT__imm);
                        } else if ((0x1023U == (0x707fU 
                                                & vlSelf->inst))) {
                            vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                                = vlSelf->ysyx_24090015_top__DOT__src2;
                            vlSelf->ysyx_24090015_top__DOT__pmem_waddr 
                                = (vlSelf->ysyx_24090015_top__DOT__src1 
                                   + vlSelf->ysyx_24090015_top__DOT__imm);
                        } else if ((0x23U == (0x707fU 
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
          | (0x67U == (0x707fU & vlSelf->inst))) | 
         (0x2003U == (0x707fU & vlSelf->inst)))) {
        if ((0x13U != (0x707fU & vlSelf->inst))) {
            if ((0x7013U != (0x707fU & vlSelf->inst))) {
                if ((0x5013U != (0xfe00707fU & vlSelf->inst))) {
                    if ((0x1013U != (0xfe00707fU & vlSelf->inst))) {
                        if ((0x3013U != (0x707fU & vlSelf->inst))) {
                            if ((0x40005013U != (0xfe00707fU 
                                                 & vlSelf->inst))) {
                                if ((0x67U == (0x707fU 
                                               & vlSelf->inst))) {
                                    vlSelf->dnpc = 
                                        (vlSelf->ysyx_24090015_top__DOT__src1 
                                         + vlSelf->ysyx_24090015_top__DOT__imm);
                                }
                                if ((0x67U != (0x707fU 
                                               & vlSelf->inst))) {
                                    vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                                        = (vlSelf->ysyx_24090015_top__DOT__src1 
                                           + vlSelf->ysyx_24090015_top__DOT__imm);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if (((((((((0x17U == (0x7fU & vlSelf->inst)) 
                      | (0x37U == (0x7fU & vlSelf->inst))) 
                     | (0x6fU == (0x7fU & vlSelf->inst))) 
                    | (0x2023U == (0x707fU & vlSelf->inst))) 
                   | (0x1023U == (0x707fU & vlSelf->inst))) 
                  | (0x23U == (0x707fU & vlSelf->inst))) 
                 | (0x1063U == (0x707fU & vlSelf->inst))) 
                | (0x63U == (0x707fU & vlSelf->inst)))) {
        if ((0x17U != (0x7fU & vlSelf->inst))) {
            if ((0x37U != (0x7fU & vlSelf->inst))) {
                if ((0x6fU == (0x7fU & vlSelf->inst))) {
                    vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
                } else if ((0x2023U != (0x707fU & vlSelf->inst))) {
                    if ((0x1023U != (0x707fU & vlSelf->inst))) {
                        if ((0x23U != (0x707fU & vlSelf->inst))) {
                            if ((0x1063U == (0x707fU 
                                             & vlSelf->inst))) {
                                if ((vlSelf->ysyx_24090015_top__DOT__src1 
                                     != vlSelf->ysyx_24090015_top__DOT__src2)) {
                                    vlSelf->dnpc = 
                                        (vlSelf->pc 
                                         + vlSelf->ysyx_24090015_top__DOT__imm);
                                }
                            } else if ((vlSelf->ysyx_24090015_top__DOT__src1 
                                        == vlSelf->ysyx_24090015_top__DOT__src2)) {
                                vlSelf->dnpc = (vlSelf->pc 
                                                + vlSelf->ysyx_24090015_top__DOT__imm);
                            }
                        }
                    }
                }
                if ((0x6fU != (0x7fU & vlSelf->inst))) {
                    if ((0x2023U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    } else if ((0x1023U == (0x707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    } else if ((0x23U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    }
                }
            }
        }
    } else if ((0x5063U == (0x707fU & vlSelf->inst))) {
        if ((1U & (((((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                          >> 0x1fU)) & (~ (vlSelf->ysyx_24090015_top__DOT__src2 
                                           >> 0x1fU))) 
                     & (vlSelf->ysyx_24090015_top__DOT__src1 
                        >= vlSelf->ysyx_24090015_top__DOT__src2)) 
                    | (((vlSelf->ysyx_24090015_top__DOT__src1 
                         & vlSelf->ysyx_24090015_top__DOT__src2) 
                        >> 0x1fU) & (vlSelf->ysyx_24090015_top__DOT__src1 
                                     >= vlSelf->ysyx_24090015_top__DOT__src2))) 
                   | ((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                          >> 0x1fU)) & (vlSelf->ysyx_24090015_top__DOT__src2 
                                        >> 0x1fU))))) {
            vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
        }
    } else if ((0x7063U == (0x707fU & vlSelf->inst))) {
        if ((vlSelf->ysyx_24090015_top__DOT__src1 >= vlSelf->ysyx_24090015_top__DOT__src2)) {
            vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
        }
    } else if ((0x4063U == (0x707fU & vlSelf->inst))) {
        if ((1U & (((((~ (vlSelf->ysyx_24090015_top__DOT__src1 
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
                                       >> 0x1fU)))))) {
            vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
        }
    } else if ((0x6063U == (0x707fU & vlSelf->inst))) {
        if ((vlSelf->ysyx_24090015_top__DOT__src1 < vlSelf->ysyx_24090015_top__DOT__src2)) {
            vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
        }
    }
    if (vlSelf->ysyx_24090015_top__DOT__valid_control) {
        Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__pmem_raddr, vlSelf->__Vfunc_pmem_read__2__Vfuncout);
        vlSelf->ysyx_24090015_top__DOT__pmem_rdata 
            = vlSelf->__Vfunc_pmem_read__2__Vfuncout;
        if (vlSelf->ysyx_24090015_top__DOT__pwen_control) {
            Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__pmem_waddr, vlSelf->ysyx_24090015_top__DOT__pmem_wdata, (IData)(vlSelf->ysyx_24090015_top__DOT__wmask));
        }
    } else {
        vlSelf->ysyx_24090015_top__DOT__pmem_rdata = 0U;
    }
    if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
               | (0x7013U == (0x707fU & vlSelf->inst))) 
              | (0x5013U == (0xfe00707fU & vlSelf->inst))) 
             | (0x1013U == (0xfe00707fU & vlSelf->inst))) 
            | (0x3013U == (0x707fU & vlSelf->inst))) 
           | (0x40005013U == (0xfe00707fU & vlSelf->inst))) 
          | (0x67U == (0x707fU & vlSelf->inst))) | 
         (0x2003U == (0x707fU & vlSelf->inst)))) {
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
                                  ? ((0x80000000U & vlSelf->ysyx_24090015_top__DOT__src1) 
                                     | (0x7fffffffU 
                                        & ((0x7fffffffU 
                                            & vlSelf->ysyx_24090015_top__DOT__src1) 
                                           >> (0x1fU 
                                               & vlSelf->ysyx_24090015_top__DOT__imm))))
                                  : ((0x67U == (0x707fU 
                                                & vlSelf->inst))
                                      ? ((IData)(4U) 
                                         + vlSelf->pc)
                                      : vlSelf->ysyx_24090015_top__DOT__pmem_rdata)))))));
    } else if (((((((((0x17U == (0x7fU & vlSelf->inst)) 
                      | (0x37U == (0x7fU & vlSelf->inst))) 
                     | (0x6fU == (0x7fU & vlSelf->inst))) 
                    | (0x2023U == (0x707fU & vlSelf->inst))) 
                   | (0x1023U == (0x707fU & vlSelf->inst))) 
                  | (0x23U == (0x707fU & vlSelf->inst))) 
                 | (0x1063U == (0x707fU & vlSelf->inst))) 
                | (0x63U == (0x707fU & vlSelf->inst)))) {
        if ((0x17U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
        } else if ((0x37U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = vlSelf->ysyx_24090015_top__DOT__imm;
        } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = ((IData)(4U) + vlSelf->pc);
        }
    } else if ((0x5063U != (0x707fU & vlSelf->inst))) {
        if ((0x7063U != (0x707fU & vlSelf->inst))) {
            if ((0x4063U != (0x707fU & vlSelf->inst))) {
                if ((0x6063U != (0x707fU & vlSelf->inst))) {
                    if ((0x40000033U == (0xfe00707fU 
                                         & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               - vlSelf->ysyx_24090015_top__DOT__src2);
                    } else if ((0x33U == (0xfe00707fU 
                                          & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__src2);
                    } else if ((0x6033U == (0xfe00707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               | vlSelf->ysyx_24090015_top__DOT__src2);
                    }
                }
            }
        }
    }
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
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
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

VL_INLINE_OPT void Vysyx_24090015_top___024root___nba_sequent__TOP__0(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___nba_sequent__TOP__0\n"); );
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
    Vysyx_24090015_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->inst, __Vfunc_ebreak__0__Vfuncout);
    vlSelf->ysyx_24090015_top__DOT__ebreak_ret = __Vfunc_ebreak__0__Vfuncout;
    vlSelf->flag = (1U & vlSelf->ysyx_24090015_top__DOT__ebreak_ret);
    if (((IData)(vlSelf->ysyx_24090015_top__DOT__wen_control) 
         & (0U != (IData)(vlSelf->ysyx_24090015_top__DOT__rd)))) {
        __Vdlyvval__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 
            = vlSelf->ysyx_24090015_top__DOT__rd_wdata;
        __Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_24090015_top__DOT__reg0__DOT__rf__v0 
            = vlSelf->ysyx_24090015_top__DOT__rd;
    }
    vlSelf->pc = vlSelf->dnpc;
    if (__Vdlyvset__ysyx_24090015_top__DOT__reg0__DOT__rf__v0) {
        vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[__Vdlyvdim0__ysyx_24090015_top__DOT__reg0__DOT__rf__v0] 
            = __Vdlyvval__ysyx_24090015_top__DOT__reg0__DOT__rf__v0;
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
                   | (0x67U == (0x707fU & vlSelf->inst))) 
                  | (0x2003U == (0x707fU & vlSelf->inst)))))) {
        if (((((((((0x17U == (0x7fU & vlSelf->inst)) 
                   | (0x37U == (0x7fU & vlSelf->inst))) 
                  | (0x6fU == (0x7fU & vlSelf->inst))) 
                 | (0x2023U == (0x707fU & vlSelf->inst))) 
                | (0x1023U == (0x707fU & vlSelf->inst))) 
               | (0x23U == (0x707fU & vlSelf->inst))) 
              | (0x1063U == (0x707fU & vlSelf->inst))) 
             | (0x63U == (0x707fU & vlSelf->inst)))) {
            if ((0x17U != (0x7fU & vlSelf->inst))) {
                if ((0x37U != (0x7fU & vlSelf->inst))) {
                    if ((0x6fU != (0x7fU & vlSelf->inst))) {
                        if ((0x2023U == (0x707fU & vlSelf->inst))) {
                            vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                                = vlSelf->ysyx_24090015_top__DOT__src2;
                            vlSelf->ysyx_24090015_top__DOT__pmem_waddr 
                                = (vlSelf->ysyx_24090015_top__DOT__src1 
                                   + vlSelf->ysyx_24090015_top__DOT__imm);
                        } else if ((0x1023U == (0x707fU 
                                                & vlSelf->inst))) {
                            vlSelf->ysyx_24090015_top__DOT__pmem_wdata 
                                = vlSelf->ysyx_24090015_top__DOT__src2;
                            vlSelf->ysyx_24090015_top__DOT__pmem_waddr 
                                = (vlSelf->ysyx_24090015_top__DOT__src1 
                                   + vlSelf->ysyx_24090015_top__DOT__imm);
                        } else if ((0x23U == (0x707fU 
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
          | (0x67U == (0x707fU & vlSelf->inst))) | 
         (0x2003U == (0x707fU & vlSelf->inst)))) {
        if ((0x13U != (0x707fU & vlSelf->inst))) {
            if ((0x7013U != (0x707fU & vlSelf->inst))) {
                if ((0x5013U != (0xfe00707fU & vlSelf->inst))) {
                    if ((0x1013U != (0xfe00707fU & vlSelf->inst))) {
                        if ((0x3013U != (0x707fU & vlSelf->inst))) {
                            if ((0x40005013U != (0xfe00707fU 
                                                 & vlSelf->inst))) {
                                if ((0x67U == (0x707fU 
                                               & vlSelf->inst))) {
                                    vlSelf->dnpc = 
                                        (vlSelf->ysyx_24090015_top__DOT__src1 
                                         + vlSelf->ysyx_24090015_top__DOT__imm);
                                }
                                if ((0x67U != (0x707fU 
                                               & vlSelf->inst))) {
                                    vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                                        = (vlSelf->ysyx_24090015_top__DOT__src1 
                                           + vlSelf->ysyx_24090015_top__DOT__imm);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if (((((((((0x17U == (0x7fU & vlSelf->inst)) 
                      | (0x37U == (0x7fU & vlSelf->inst))) 
                     | (0x6fU == (0x7fU & vlSelf->inst))) 
                    | (0x2023U == (0x707fU & vlSelf->inst))) 
                   | (0x1023U == (0x707fU & vlSelf->inst))) 
                  | (0x23U == (0x707fU & vlSelf->inst))) 
                 | (0x1063U == (0x707fU & vlSelf->inst))) 
                | (0x63U == (0x707fU & vlSelf->inst)))) {
        if ((0x17U != (0x7fU & vlSelf->inst))) {
            if ((0x37U != (0x7fU & vlSelf->inst))) {
                if ((0x6fU == (0x7fU & vlSelf->inst))) {
                    vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
                } else if ((0x2023U != (0x707fU & vlSelf->inst))) {
                    if ((0x1023U != (0x707fU & vlSelf->inst))) {
                        if ((0x23U != (0x707fU & vlSelf->inst))) {
                            if ((0x1063U == (0x707fU 
                                             & vlSelf->inst))) {
                                if ((vlSelf->ysyx_24090015_top__DOT__src1 
                                     != vlSelf->ysyx_24090015_top__DOT__src2)) {
                                    vlSelf->dnpc = 
                                        (vlSelf->pc 
                                         + vlSelf->ysyx_24090015_top__DOT__imm);
                                }
                            } else if ((vlSelf->ysyx_24090015_top__DOT__src1 
                                        == vlSelf->ysyx_24090015_top__DOT__src2)) {
                                vlSelf->dnpc = (vlSelf->pc 
                                                + vlSelf->ysyx_24090015_top__DOT__imm);
                            }
                        }
                    }
                }
                if ((0x6fU != (0x7fU & vlSelf->inst))) {
                    if ((0x2023U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    } else if ((0x1023U == (0x707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    } else if ((0x23U == (0x707fU & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__pmem_raddr 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__imm);
                    }
                }
            }
        }
    } else if ((0x5063U == (0x707fU & vlSelf->inst))) {
        if ((1U & (((((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                          >> 0x1fU)) & (~ (vlSelf->ysyx_24090015_top__DOT__src2 
                                           >> 0x1fU))) 
                     & (vlSelf->ysyx_24090015_top__DOT__src1 
                        >= vlSelf->ysyx_24090015_top__DOT__src2)) 
                    | (((vlSelf->ysyx_24090015_top__DOT__src1 
                         & vlSelf->ysyx_24090015_top__DOT__src2) 
                        >> 0x1fU) & (vlSelf->ysyx_24090015_top__DOT__src1 
                                     >= vlSelf->ysyx_24090015_top__DOT__src2))) 
                   | ((~ (vlSelf->ysyx_24090015_top__DOT__src1 
                          >> 0x1fU)) & (vlSelf->ysyx_24090015_top__DOT__src2 
                                        >> 0x1fU))))) {
            vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
        }
    } else if ((0x7063U == (0x707fU & vlSelf->inst))) {
        if ((vlSelf->ysyx_24090015_top__DOT__src1 >= vlSelf->ysyx_24090015_top__DOT__src2)) {
            vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
        }
    } else if ((0x4063U == (0x707fU & vlSelf->inst))) {
        if ((1U & (((((~ (vlSelf->ysyx_24090015_top__DOT__src1 
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
                                       >> 0x1fU)))))) {
            vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
        }
    } else if ((0x6063U == (0x707fU & vlSelf->inst))) {
        if ((vlSelf->ysyx_24090015_top__DOT__src1 < vlSelf->ysyx_24090015_top__DOT__src2)) {
            vlSelf->dnpc = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
        }
    }
    if (vlSelf->ysyx_24090015_top__DOT__valid_control) {
        Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__pmem_raddr, vlSelf->__Vfunc_pmem_read__2__Vfuncout);
        vlSelf->ysyx_24090015_top__DOT__pmem_rdata 
            = vlSelf->__Vfunc_pmem_read__2__Vfuncout;
        if (vlSelf->ysyx_24090015_top__DOT__pwen_control) {
            Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__pmem_waddr, vlSelf->ysyx_24090015_top__DOT__pmem_wdata, (IData)(vlSelf->ysyx_24090015_top__DOT__wmask));
        }
    } else {
        vlSelf->ysyx_24090015_top__DOT__pmem_rdata = 0U;
    }
    if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
               | (0x7013U == (0x707fU & vlSelf->inst))) 
              | (0x5013U == (0xfe00707fU & vlSelf->inst))) 
             | (0x1013U == (0xfe00707fU & vlSelf->inst))) 
            | (0x3013U == (0x707fU & vlSelf->inst))) 
           | (0x40005013U == (0xfe00707fU & vlSelf->inst))) 
          | (0x67U == (0x707fU & vlSelf->inst))) | 
         (0x2003U == (0x707fU & vlSelf->inst)))) {
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
                                  ? ((0x80000000U & vlSelf->ysyx_24090015_top__DOT__src1) 
                                     | (0x7fffffffU 
                                        & ((0x7fffffffU 
                                            & vlSelf->ysyx_24090015_top__DOT__src1) 
                                           >> (0x1fU 
                                               & vlSelf->ysyx_24090015_top__DOT__imm))))
                                  : ((0x67U == (0x707fU 
                                                & vlSelf->inst))
                                      ? ((IData)(4U) 
                                         + vlSelf->pc)
                                      : vlSelf->ysyx_24090015_top__DOT__pmem_rdata)))))));
    } else if (((((((((0x17U == (0x7fU & vlSelf->inst)) 
                      | (0x37U == (0x7fU & vlSelf->inst))) 
                     | (0x6fU == (0x7fU & vlSelf->inst))) 
                    | (0x2023U == (0x707fU & vlSelf->inst))) 
                   | (0x1023U == (0x707fU & vlSelf->inst))) 
                  | (0x23U == (0x707fU & vlSelf->inst))) 
                 | (0x1063U == (0x707fU & vlSelf->inst))) 
                | (0x63U == (0x707fU & vlSelf->inst)))) {
        if ((0x17U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = (vlSelf->pc + vlSelf->ysyx_24090015_top__DOT__imm);
        } else if ((0x37U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = vlSelf->ysyx_24090015_top__DOT__imm;
        } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                = ((IData)(4U) + vlSelf->pc);
        }
    } else if ((0x5063U != (0x707fU & vlSelf->inst))) {
        if ((0x7063U != (0x707fU & vlSelf->inst))) {
            if ((0x4063U != (0x707fU & vlSelf->inst))) {
                if ((0x6063U != (0x707fU & vlSelf->inst))) {
                    if ((0x40000033U == (0xfe00707fU 
                                         & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               - vlSelf->ysyx_24090015_top__DOT__src2);
                    } else if ((0x33U == (0xfe00707fU 
                                          & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               + vlSelf->ysyx_24090015_top__DOT__src2);
                    } else if ((0x6033U == (0xfe00707fU 
                                            & vlSelf->inst))) {
                        vlSelf->ysyx_24090015_top__DOT__rd_wdata 
                            = (vlSelf->ysyx_24090015_top__DOT__src1 
                               | vlSelf->ysyx_24090015_top__DOT__src2);
                    }
                }
            }
        }
    }
}
