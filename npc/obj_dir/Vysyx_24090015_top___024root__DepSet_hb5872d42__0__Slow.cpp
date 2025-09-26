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

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_initial__TOP(Vysyx_24090015_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_initial(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_initial\n"); );
    // Body
    Vysyx_24090015_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_initial__TOP(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->pc = 0x80000000U;
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
                VL_FATAL_MT("/home/sakura/ysyx-workbench/npc/vsrc/top.v", 20, "", "Settle region did not converge.");
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
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24090015_top___024root___stl_sequent__TOP__0(Vysyx_24090015_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_stl(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_24090015_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
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
    vlSelf->dnpc = VL_RAND_RESET_I(32);
    vlSelf->flag = VL_RAND_RESET_I(1);
    vlSelf->hit_good_or_bad = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ebreak_ret = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__snpc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__ifu_reqvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ifu_raddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__ifu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__lsu_reqvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__lsu_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__lsu_wmask = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24090015_top__DOT__lsu_respvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT____Vcellout__sram0__ifu_respvalid = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__rd_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24090015_top__DOT__LSU_work = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ren1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ren2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__pwen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__pmem_ls = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__pmem_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__pmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__csr_wdata0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__csr_wdata1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__csr_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24090015_top__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__pmem_work = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__pmem_raddr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__wmask = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu_reqValid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu_respValid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ifu_reqValid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__wen_control = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ren1_control = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ren2_control = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__sram0__DOT__lsu_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24090015_top__DOT__reg0__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__reg0__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__reg0__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__reg0__DOT__mtvc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vfunc_ebreak__1__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
