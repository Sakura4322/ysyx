// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024unit;


class Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(flag,0,0);
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);
    VL_OUT8(MuxKey__02Eout,0,0);
    VL_IN8(MuxKey__02Ekey,0,0);
    VL_IN8(MuxKey__02Elut,3,0);
    VL_OUT8(MuxKeyWithDefault__02Eout,0,0);
    VL_IN8(MuxKeyWithDefault__02Ekey,0,0);
    VL_IN8(default_out,0,0);
    VL_IN8(MuxKeyWithDefault__02Elut,3,0);
    CData/*0:0*/ ysyx_24090015_top__DOT__en;
    CData/*4:0*/ ysyx_24090015_top__DOT__rd;
    CData/*4:0*/ ysyx_24090015_top__DOT__rs1;
    CData/*4:0*/ ysyx_24090015_top__DOT__rs2;
    CData/*0:0*/ ysyx_24090015_top__DOT__ren1;
    CData/*0:0*/ ysyx_24090015_top__DOT__ren2;
    CData/*0:0*/ ysyx_24090015_top__DOT__wen;
    CData/*2:0*/ ysyx_24090015_top__DOT__idu0__DOT__inst_type;
    CData/*6:0*/ ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode;
    CData/*0:0*/ MuxKey__DOT__i0__DOT__lut_out;
    CData/*0:0*/ MuxKey__DOT__i0__DOT__hit;
    CData/*0:0*/ MuxKeyWithDefault__DOT__i0__DOT__lut_out;
    CData/*0:0*/ MuxKeyWithDefault__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__flag;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__init;
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_24090015_top__DOT__snpc;
    IData/*31:0*/ ysyx_24090015_top__DOT__dnpc;
    IData/*31:0*/ ysyx_24090015_top__DOT__imm;
    IData/*31:0*/ ysyx_24090015_top__DOT__src1;
    IData/*31:0*/ ysyx_24090015_top__DOT__src2;
    IData/*31:0*/ ysyx_24090015_top__DOT__rd_wdata;
    IData/*31:0*/ ysyx_24090015_top__DOT__inst_2;
    IData/*31:0*/ ysyx_24090015_top__DOT__idu0__DOT__inst_1;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_24090015_top__DOT__reg0__DOT__rf;
    VlUnpacked<CData/*1:0*/, 2> MuxKey__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> MuxKey__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> MuxKey__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*1:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> MuxKeyWithDefault__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
