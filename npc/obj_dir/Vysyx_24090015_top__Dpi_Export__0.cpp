// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx_24090015_top.h"
#include "Vysyx_24090015_top__Syms.h"
#include "verilated_dpi.h"


int Vysyx_24090015_top::read_wire(int sec) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root::read_wire\n"); );
    // Init
    IData/*31:0*/ sec__Vcvt;
    sec__Vcvt = 0;
    IData/*31:0*/ read_wire__Vfuncrtn__Vcvt;
    read_wire__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("read_wire");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_24090015_top__Vcb_read_wire_t __Vcb = (Vysyx_24090015_top__Vcb_read_wire_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    sec__Vcvt = sec;
    (*__Vcb)((Vysyx_24090015_top__Syms*)(__Vscopep->symsp()), sec__Vcvt, read_wire__Vfuncrtn__Vcvt);
    int read_wire__Vfuncrtn;
    for (size_t read_wire__Vfuncrtn__Vidx = 0; read_wire__Vfuncrtn__Vidx < 1; ++read_wire__Vfuncrtn__Vidx) read_wire__Vfuncrtn = read_wire__Vfuncrtn__Vcvt;
    return read_wire__Vfuncrtn;
}
