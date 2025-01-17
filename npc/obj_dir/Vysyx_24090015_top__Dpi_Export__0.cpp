// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx_24090015_top.h"
#include "Vysyx_24090015_top__Syms.h"
#include "verilated_dpi.h"


long long Vysyx_24090015_top::get_gpr_ptr() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root::get_gpr_ptr\n"); );
    // Init
    QData/*63:0*/ get_gpr_ptr__Vfuncrtn__Vcvt;
    get_gpr_ptr__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_gpr_ptr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_24090015_top__Vcb_get_gpr_ptr_t __Vcb = (Vysyx_24090015_top__Vcb_get_gpr_ptr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_24090015_top__Syms*)(__Vscopep->symsp()), get_gpr_ptr__Vfuncrtn__Vcvt);
    long long get_gpr_ptr__Vfuncrtn;
    for (size_t get_gpr_ptr__Vfuncrtn__Vidx = 0; get_gpr_ptr__Vfuncrtn__Vidx < 1; ++get_gpr_ptr__Vfuncrtn__Vidx) get_gpr_ptr__Vfuncrtn = get_gpr_ptr__Vfuncrtn__Vcvt;
    return get_gpr_ptr__Vfuncrtn;
}
