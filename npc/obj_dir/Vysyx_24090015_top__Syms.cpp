// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_24090015_top__Syms.h"
#include "Vysyx_24090015_top.h"
#include "Vysyx_24090015_top___024root.h"
#include "Vysyx_24090015_top___024unit.h"

void Vysyx_24090015_top___024root____Vdpiexp_ysyx_24090015_top__DOT__reg0__DOT__read_gpr_TOP(Vysyx_24090015_top__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &read_gpr__Vfuncrtn);

// FUNCTIONS
Vysyx_24090015_top__Syms::~Vysyx_24090015_top__Syms()
{
}

Vysyx_24090015_top__Syms::Vysyx_24090015_top__Syms(VerilatedContext* contextp, const char* namep, Vysyx_24090015_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyx_24090015_top__reg0.configure(this, name(), "ysyx_24090015_top.reg0", "reg0", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyx_24090015_top__reg0.exportInsert(__Vfinal, "read_gpr", (void*)(&Vysyx_24090015_top___024root____Vdpiexp_ysyx_24090015_top__DOT__reg0__DOT__read_gpr_TOP));
    }
}
