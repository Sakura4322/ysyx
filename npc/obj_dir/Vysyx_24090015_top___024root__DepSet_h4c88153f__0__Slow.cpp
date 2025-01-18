// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090015_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24090015_top__Syms.h"
#include "Vysyx_24090015_top___024root.h"

void Vysyx_24090015_top___024root____Vdpiimwrap_ysyx_24090015_top__DOT__read_regs_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, std::string scope);

VL_ATTR_COLD void Vysyx_24090015_top___024root___eval_initial__TOP(Vysyx_24090015_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root___eval_initial__TOP\n"); );
    // Body
    Vysyx_24090015_top___024root____Vdpiimwrap_ysyx_24090015_top__DOT__read_regs_TOP(
                                                                                (&(vlSymsp->__Vscope_ysyx_24090015_top)), 
                                                                                "/home/sakura/ysyx-workbench/npc/vsrc/top.v", 0xedU, VL_SFORMATF_NX("%Nysyx_24090015_top.reg0",
                                                                                vlSymsp->name()) );
}

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
