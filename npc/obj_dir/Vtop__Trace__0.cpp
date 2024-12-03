// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->MuxKey__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->MuxKey__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+2,(vlSelf->MuxKey__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSelf->MuxKey__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+4,(vlSelf->MuxKey__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+5,(vlSelf->MuxKey__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+6,(vlSelf->MuxKey__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+7,(vlSelf->MuxKey__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+8,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+9,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+10,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+11,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+12,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+13,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+14,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+15,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+16,(vlSelf->ysyx_24090015_top__DOT__snpc),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_24090015_top__DOT__dnpc),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_24090015_top__DOT__imm),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_24090015_top__DOT__src1),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_24090015_top__DOT__src2),32);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_24090015_top__DOT__rd),5);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_24090015_top__DOT__rs1),5);
        bufp->chgBit(oldp+23,(vlSelf->ysyx_24090015_top__DOT__ren1));
        bufp->chgBit(oldp+24,(vlSelf->ysyx_24090015_top__DOT__ren2));
        bufp->chgBit(oldp+25,(vlSelf->ysyx_24090015_top__DOT__wen));
        bufp->chgIData(oldp+26,(vlSelf->ysyx_24090015_top__DOT__rd_wdata),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_24090015_top__DOT__inst_2),32);
        bufp->chgCData(oldp+28,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type),3);
        bufp->chgIData(oldp+29,((((- (IData)((1U & 
                                              ((IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__init) 
                                               >> 0xbU)))) 
                                  << 0xcU) | (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__init))),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_1),32);
        bufp->chgSData(oldp+31,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__init),12);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode),7);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[0]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[1]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[2]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[3]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[4]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[5]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[6]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[7]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[8]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[9]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[10]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[11]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[12]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[13]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[14]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[15]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[16]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[17]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[18]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[19]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[20]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[21]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[22]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[23]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[24]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[25]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[26]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[27]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[28]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[29]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[30]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+65,(vlSelf->clk));
    bufp->chgIData(oldp+66,(vlSelf->inst),32);
    bufp->chgIData(oldp+67,(vlSelf->pc),32);
    bufp->chgBit(oldp+68,(vlSelf->flag));
    bufp->chgBit(oldp+69,(vlSelf->MuxKey__02Eout));
    bufp->chgBit(oldp+70,(vlSelf->MuxKey__02Ekey));
    bufp->chgCData(oldp+71,(vlSelf->MuxKey__02Elut),4);
    bufp->chgBit(oldp+72,(vlSelf->MuxKeyWithDefault__02Eout));
    bufp->chgBit(oldp+73,(vlSelf->MuxKeyWithDefault__02Ekey));
    bufp->chgBit(oldp+74,(vlSelf->default_out));
    bufp->chgCData(oldp+75,(vlSelf->MuxKeyWithDefault__02Elut),4);
    bufp->chgBit(oldp+76,(vlSelf->a));
    bufp->chgBit(oldp+77,(vlSelf->b));
    bufp->chgBit(oldp+78,(vlSelf->f));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
