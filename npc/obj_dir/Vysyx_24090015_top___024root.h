// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24090015_top.h for the primary calling header

#ifndef VERILATED_VYSYX_24090015_TOP___024ROOT_H_
#define VERILATED_VYSYX_24090015_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_24090015_top__Syms;
class Vysyx_24090015_top___024unit;


class Vysyx_24090015_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_24090015_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(flag,0,0);
    CData/*4:0*/ ysyx_24090015_top__DOT__rd;
    CData/*4:0*/ ysyx_24090015_top__DOT__rs1;
    CData/*4:0*/ ysyx_24090015_top__DOT__rs2;
    CData/*0:0*/ ysyx_24090015_top__DOT__ren1;
    CData/*0:0*/ ysyx_24090015_top__DOT__ren2;
    CData/*0:0*/ ysyx_24090015_top__DOT__wen;
    CData/*2:0*/ ysyx_24090015_top__DOT__idu0__DOT__inst_type;
    CData/*6:0*/ ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigrprev__TOP__flag;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_24090015_top__DOT__snpc;
    IData/*31:0*/ ysyx_24090015_top__DOT__dnpc;
    IData/*31:0*/ ysyx_24090015_top__DOT__imm;
    IData/*31:0*/ ysyx_24090015_top__DOT__src1;
    IData/*31:0*/ ysyx_24090015_top__DOT__rd_wdata;
    IData/*31:0*/ __Vtrigrprev__TOP__pc;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_24090015_top__DOT__reg0__DOT__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_24090015_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24090015_top___024root(Vysyx_24090015_top__Syms* symsp, const char* v__name);
    ~Vysyx_24090015_top___024root();
    VL_UNCOPYABLE(Vysyx_24090015_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
