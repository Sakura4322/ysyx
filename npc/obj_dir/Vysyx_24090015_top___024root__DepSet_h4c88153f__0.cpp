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
VL_ATTR_COLD void Vysyx_24090015_top___024root___dump_triggers__ico(Vysyx_24090015_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24090015_top___024root___eval_triggers__ico(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = ((IData)(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__sram0__DOT__sram_state));
    vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__sram0__DOT__sram_state 
        = vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
    }
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
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__sram0__DOT__sram_state));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->ysyx_24090015_top__DOT__ifu_respValid) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__ifu_respValid));
    vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__sram0__DOT__sram_state 
        = vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ysyx_24090015_top__DOT__ifu_respValid 
        = vlSelf->ysyx_24090015_top__DOT__ifu_respValid;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24090015_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_24090015_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ &ebreak__Vfuncrtn);
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_24090015_top__ConstPool__TABLE_hc7885bd3_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_24090015_top__ConstPool__TABLE_hd9d2ac11_0;
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
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    __Vfunc_pmem_read__2__Vfuncout = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
    __Vtableidx1 = (((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_respValid) 
                     << 4U) | (((IData)(vlSelf->ysyx_24090015_top__DOT__pmem_work) 
                                << 3U) | (((IData)(vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state) 
                                           << 1U) | (IData)(vlSelf->rst))));
    if (Vysyx_24090015_top__ConstPool__TABLE_hc7885bd3_0
        [__Vtableidx1]) {
        vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state 
            = Vysyx_24090015_top__ConstPool__TABLE_hd9d2ac11_0
            [__Vtableidx1];
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
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state))) {
            vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = 0U;
            vlSelf->ysyx_24090015_top__DOT__lsu_respValid = 0U;
        } else if ((1U == (IData)(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state))) {
            Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ifu_raddr, 0xfU, __Vfunc_pmem_read__1__Vfuncout);
            if (vlSelf->ysyx_24090015_top__DOT__ifu_reqValid) {
                vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                    = __Vfunc_pmem_read__1__Vfuncout;
                vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = 1U;
            } else {
                vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                    = vlSelf->ysyx_24090015_top__DOT__ifu_rdata;
                vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = 0U;
            }
            vlSelf->ysyx_24090015_top__DOT__lsu_respValid = 0U;
        } else if ((2U == (IData)(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state))) {
            Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__pmem_addr, (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wmask), __Vfunc_pmem_read__2__Vfuncout);
            vlSelf->ysyx_24090015_top__DOT__lsu_rdata 
                = (((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_reqValid) 
                    & (~ (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wen)))
                    ? __Vfunc_pmem_read__2__Vfuncout
                    : 0U);
            vlSelf->ysyx_24090015_top__DOT__lsu_respValid 
                = vlSelf->ysyx_24090015_top__DOT__lsu_reqValid;
            vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = 0U;
            if (((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_reqValid) 
                 & (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wen))) {
                Vysyx_24090015_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_24090015_top__DOT__pmem_addr, 
                                                                                ((IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wen)
                                                                                 ? vlSelf->ysyx_24090015_top__DOT__pmem_wdata
                                                                                 : 0U), (IData)(vlSelf->ysyx_24090015_top__DOT__lsu_wmask));
            }
        }
    } else {
        vlSelf->__Vdly__ysyx_24090015_top__DOT__ifu_respValid = 0U;
        vlSelf->ysyx_24090015_top__DOT__lsu_respValid = 0U;
        vlSelf->ysyx_24090015_top__DOT__lsu_rdata = 0U;
    }
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI 
        = (((- (IData)((vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                >> 0x14U));
    vlSelf->inst = vlSelf->ysyx_24090015_top__DOT__ifu_rdata;
    if (((((((((0x2003U == (0x707fU & vlSelf->inst)) 
               | (0x1003U == (0x707fU & vlSelf->inst))) 
              | (0x5003U == (0x707fU & vlSelf->inst))) 
             | (3U == (0x707fU & vlSelf->inst))) | 
            (0x4003U == (0x707fU & vlSelf->inst))) 
           | (0x2023U == (0x707fU & vlSelf->inst))) 
          | (0x23U == (0x707fU & vlSelf->inst))) | 
         (0x1023U == (0x707fU & vlSelf->inst)))) {
        vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask 
            = ((0x2003U == (0x707fU & vlSelf->inst))
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
                                                   : 3U)))))));
        vlSelf->ysyx_24090015_top__DOT__pmem_ls = (
                                                   (0x2003U 
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
                                                                & vlSelf->inst))))));
        vlSelf->ysyx_24090015_top__DOT__pmem_work = 1U;
    } else {
        vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask = 0U;
        vlSelf->ysyx_24090015_top__DOT__pmem_ls = 0U;
        vlSelf->ysyx_24090015_top__DOT__pmem_work = 0U;
    }
    if (vlSelf->rst) {
        if (vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state) {
            if (vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state) {
                if (vlSelf->ysyx_24090015_top__DOT__ifu_respValid) {
                    vlSelf->ifu_raddr = vlSelf->pc;
                    vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state = 0U;
                }
            }
        } else {
            vlSelf->ysyx_24090015_top__DOT__ifu_reqValid = 1U;
            vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state = 1U;
        }
        if ((0U == (IData)(vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state))) {
            vlSelf->ysyx_24090015_top__DOT__lsu_reqValid 
                = vlSelf->ysyx_24090015_top__DOT__pmem_work;
        } else if ((1U == (IData)(vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state))) {
            if (vlSelf->ysyx_24090015_top__DOT__lsu_respValid) {
                vlSelf->ysyx_24090015_top__DOT__lsu_reqValid = 0U;
            }
        }
    } else {
        vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state = 0U;
        vlSelf->ifu_raddr = vlSelf->pc;
        vlSelf->ysyx_24090015_top__DOT__ifu_reqValid = 0U;
        vlSelf->ysyx_24090015_top__DOT__lsu_reqValid = 0U;
    }
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
}
