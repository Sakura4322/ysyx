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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ ysyx_24090015_top__DOT__ifu_respValid;
        VL_IN8(rst,0,0);
        VL_OUT8(fetch,0,0);
        VL_OUT8(flag,0,0);
        VL_OUT8(hit_good_or_bad,0,0);
        CData/*0:0*/ ysyx_24090015_top__DOT__ifu_reqvalid;
        CData/*0:0*/ ysyx_24090015_top__DOT__lsu_reqvalid;
        CData/*0:0*/ ysyx_24090015_top__DOT__lsu_wen;
        CData/*3:0*/ ysyx_24090015_top__DOT__lsu_wmask;
        CData/*0:0*/ ysyx_24090015_top__DOT__lsu_respvalid;
        CData/*0:0*/ ysyx_24090015_top__DOT__pmem_work;
        CData/*0:0*/ ysyx_24090015_top__DOT__pmem_ls;
        CData/*4:0*/ ysyx_24090015_top__DOT__rd;
        CData/*4:0*/ ysyx_24090015_top__DOT__rs1;
        CData/*4:0*/ ysyx_24090015_top__DOT__rs2;
        CData/*0:0*/ ysyx_24090015_top__DOT__wen;
        CData/*0:0*/ ysyx_24090015_top__DOT__ren1;
        CData/*0:0*/ ysyx_24090015_top__DOT__ren2;
        CData/*0:0*/ ysyx_24090015_top__DOT__pwen;
        CData/*0:0*/ ysyx_24090015_top__DOT__csr_wen;
        CData/*3:0*/ ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask;
        CData/*0:0*/ ysyx_24090015_top__DOT__ifu_reqValid;
        CData/*0:0*/ ysyx_24090015_top__DOT__lsu_reqValid;
        CData/*0:0*/ ysyx_24090015_top__DOT__lsu_respValid;
        CData/*0:0*/ ysyx_24090015_top__DOT__valid;
        CData/*0:0*/ ysyx_24090015_top__DOT__ifu0__DOT__ifu_state;
        CData/*1:0*/ ysyx_24090015_top__DOT__lsu0__DOT__lsu_state;
        CData/*1:0*/ ysyx_24090015_top__DOT__sram0__DOT__sram_state;
        CData/*3:0*/ ysyx_24090015_top__DOT__idu0__DOT__inst_type;
        CData/*0:0*/ ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__clk;
        CData/*1:0*/ ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0;
        CData/*0:0*/ __VdfgTmp_h7246bf09__0;
        CData/*0:0*/ __VdfgTmp_h872a8a4a__0;
        CData/*0:0*/ __Vdly__ysyx_24090015_top__DOT__ifu_respValid;
        CData/*1:0*/ __Vtrigrprev__TOP__ysyx_24090015_top__DOT__sram0__DOT__sram_state;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__ysyx_24090015_top__DOT__ifu_respValid;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_OUT(pc,31,0);
        VL_OUT(ifu_raddr,31,0);
        VL_OUT(inst,31,0);
        IData/*31:0*/ ysyx_24090015_top__DOT__ebreak_ret;
        IData/*31:0*/ ysyx_24090015_top__DOT__dnpc;
        IData/*31:0*/ ysyx_24090015_top__DOT__ifu_rdata;
        IData/*31:0*/ ysyx_24090015_top__DOT__lsu_addr;
        IData/*31:0*/ ysyx_24090015_top__DOT__lsu_wdata;
        IData/*31:0*/ ysyx_24090015_top__DOT__lsu_rdata;
        IData/*31:0*/ ysyx_24090015_top__DOT__pmem_addr;
        IData/*31:0*/ ysyx_24090015_top__DOT__pmem_wdata;
        IData/*31:0*/ ysyx_24090015_top__DOT__imm;
        IData/*31:0*/ ysyx_24090015_top__DOT__rd_wdata;
        IData/*31:0*/ ysyx_24090015_top__DOT__src1;
        IData/*31:0*/ ysyx_24090015_top__DOT__src2;
        IData/*31:0*/ ysyx_24090015_top__DOT__csr_rdata;
        IData/*31:0*/ ysyx_24090015_top__DOT__csr_wdata0;
        IData/*31:0*/ ysyx_24090015_top__DOT__csr_wdata1;
        IData/*31:0*/ ysyx_24090015_top__DOT__idu0__DOT__temp_immI;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32> ysyx_24090015_top__DOT__reg0__DOT__rf;
        VlUnpacked<IData/*31:0*/, 4> ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
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
