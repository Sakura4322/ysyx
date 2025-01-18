// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx_24090015_top.h"
#include "Vysyx_24090015_top__Syms.h"
#include "verilated_dpi.h"


int Vysyx_24090015_top::read_gpr(int idx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root::read_gpr\n"); );
    // Init
    IData/*31:0*/ idx__Vcvt;
    idx__Vcvt = 0;
    IData/*31:0*/ read_gpr__Vfuncrtn__Vcvt;
    read_gpr__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("read_gpr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_24090015_top__Vcb_read_gpr_t __Vcb = (Vysyx_24090015_top__Vcb_read_gpr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    idx__Vcvt = idx;
    (*__Vcb)((Vysyx_24090015_top__Syms*)(__Vscopep->symsp()), idx__Vcvt, read_gpr__Vfuncrtn__Vcvt);
    int read_gpr__Vfuncrtn;
    for (size_t read_gpr__Vfuncrtn__Vidx = 0; read_gpr__Vfuncrtn__Vidx < 1; ++read_gpr__Vfuncrtn__Vidx) read_gpr__Vfuncrtn = read_gpr__Vfuncrtn__Vcvt;
    return read_gpr__Vfuncrtn;
}
