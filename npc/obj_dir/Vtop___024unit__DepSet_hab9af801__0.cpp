// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024unit.h"

extern "C" int ebreak(int a);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ &ebreak__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    int a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    int ebreak__Vfuncrtn__Vcvt;
    ebreak__Vfuncrtn__Vcvt = ebreak(a__Vcvt);
    ebreak__Vfuncrtn = ebreak__Vfuncrtn__Vcvt;
}
