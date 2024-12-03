// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24090015_top__Syms.h"


VL_ATTR_COLD void Vysyx_24090015_top___024root__trace_init_sub__TOP__0(Vysyx_24090015_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+41,"clk", false,-1);
    tracep->declBus(c+42,"inst", false,-1, 31,0);
    tracep->declBus(c+43,"pc", false,-1, 31,0);
    tracep->declBit(c+44,"flag", false,-1);
    tracep->pushNamePrefix("ysyx_24090015_top ");
    tracep->declBus(c+52,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+41,"clk", false,-1);
    tracep->declBus(c+42,"inst", false,-1, 31,0);
    tracep->declBus(c+43,"pc", false,-1, 31,0);
    tracep->declBit(c+44,"flag", false,-1);
    tracep->declBus(c+2,"snpc", false,-1, 31,0);
    tracep->declBus(c+3,"dnpc", false,-1, 31,0);
    tracep->declBit(c+53,"en", false,-1);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+46,"src1", false,-1, 31,0);
    tracep->declBus(c+4,"src2", false,-1, 31,0);
    tracep->declBus(c+47,"rd", false,-1, 4,0);
    tracep->declBus(c+48,"rs1", false,-1, 4,0);
    tracep->declBus(c+54,"rs2", false,-1, 4,0);
    tracep->declBit(c+5,"ren1", false,-1);
    tracep->declBit(c+1,"ren2", false,-1);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->declBus(c+49,"rd_wdata", false,-1, 31,0);
    tracep->pushNamePrefix("exu0 ");
    tracep->declBus(c+52,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+41,"clk", false,-1);
    tracep->declBus(c+42,"inst_in", false,-1, 31,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+46,"src1", false,-1, 31,0);
    tracep->declBus(c+4,"src2", false,-1, 31,0);
    tracep->declBus(c+2,"snpc", false,-1, 31,0);
    tracep->declBus(c+47,"rd", false,-1, 4,0);
    tracep->declBus(c+48,"rs1", false,-1, 4,0);
    tracep->declBus(c+54,"rs2", false,-1, 4,0);
    tracep->declBus(c+49,"rd_wdata", false,-1, 31,0);
    tracep->declBus(c+43,"npc", false,-1, 31,0);
    tracep->declBus(c+3,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu0 ");
    tracep->declBus(c+52,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+41,"clk", false,-1);
    tracep->declBus(c+42,"inst_in", false,-1, 31,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBit(c+5,"ren1", false,-1);
    tracep->declBit(c+1,"ren2", false,-1);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->declBus(c+7,"inst_type", false,-1, 2,0);
    tracep->declBus(c+50,"temp_immI", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+52,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+42,"inst", false,-1, 31,0);
    tracep->declBit(c+55,"clk", false,-1);
    tracep->declBus(c+50,"imm", false,-1, 31,0);
    tracep->declBus(c+51,"init", false,-1, 11,0);
    tracep->pushNamePrefix("s0 ");
    tracep->declBus(c+56,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"in", false,-1, 11,0);
    tracep->declBus(c+50,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("t0 ");
    tracep->declBus(c+52,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+41,"clk", false,-1);
    tracep->declBus(c+42,"inst", false,-1, 31,0);
    tracep->declBus(c+7,"inst_type", false,-1, 2,0);
    tracep->declBus(c+8,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu0 ");
    tracep->declBus(c+52,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+41,"clk", false,-1);
    tracep->declBit(c+53,"en", false,-1);
    tracep->declBus(c+43,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"snpc", false,-1, 31,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->declBit(c+5,"ren1", false,-1);
    tracep->declBit(c+1,"ren2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg0 ");
    tracep->declBus(c+57,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+41,"clk", false,-1);
    tracep->declBus(c+49,"wdata", false,-1, 31,0);
    tracep->declBus(c+47,"waddr", false,-1, 4,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->declBit(c+5,"ren1", false,-1);
    tracep->declBit(c+1,"ren2", false,-1);
    tracep->declBus(c+48,"raddr1", false,-1, 4,0);
    tracep->declBus(c+54,"raddr2", false,-1, 4,0);
    tracep->declBus(c+46,"rdata1", false,-1, 31,0);
    tracep->declBus(c+4,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+9+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_24090015_top___024root__trace_init_top(Vysyx_24090015_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_24090015_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24090015_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24090015_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24090015_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24090015_top___024root__trace_register(Vysyx_24090015_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_24090015_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_24090015_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_24090015_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24090015_top___024root__trace_full_sub_0(Vysyx_24090015_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24090015_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_24090015_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090015_top___024root*>(voidSelf);
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24090015_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24090015_top___024root__trace_full_sub_0(Vysyx_24090015_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyx_24090015_top__DOT__ren2));
    bufp->fullIData(oldp+2,(vlSelf->ysyx_24090015_top__DOT__snpc),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_24090015_top__DOT__dnpc),32);
    bufp->fullIData(oldp+4,(((IData)(vlSelf->ysyx_24090015_top__DOT__ren2) 
                             & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                             [vlSelf->ysyx_24090015_top__DOT__rs2])),32);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_24090015_top__DOT__ren1));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_24090015_top__DOT__wen));
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type),3);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode),7);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[0]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[1]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[2]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[3]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[4]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[5]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[6]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[7]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[8]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[9]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[10]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[11]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[12]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[13]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[14]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[15]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[16]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[17]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[18]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[19]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[20]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[21]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[22]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[23]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[24]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[25]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[26]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[27]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[28]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[29]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[30]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[31]),32);
    bufp->fullBit(oldp+41,(vlSelf->clk));
    bufp->fullIData(oldp+42,(vlSelf->inst),32);
    bufp->fullIData(oldp+43,(vlSelf->pc),32);
    bufp->fullBit(oldp+44,(vlSelf->flag));
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24090015_top__DOT__imm),32);
    bufp->fullIData(oldp+46,(((IData)(vlSelf->ysyx_24090015_top__DOT__ren1) 
                              & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                              [vlSelf->ysyx_24090015_top__DOT__rs1])),32);
    bufp->fullCData(oldp+47,(vlSelf->ysyx_24090015_top__DOT__rd),5);
    bufp->fullCData(oldp+48,(vlSelf->ysyx_24090015_top__DOT__rs1),5);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24090015_top__DOT__rd_wdata),32);
    bufp->fullIData(oldp+50,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->fullSData(oldp+51,((vlSelf->inst >> 0x14U)),12);
    bufp->fullIData(oldp+52,(0x20U),32);
    bufp->fullBit(oldp+53,(vlSelf->ysyx_24090015_top__DOT__en));
    bufp->fullCData(oldp+54,(vlSelf->ysyx_24090015_top__DOT__rs2),5);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__clk));
    bufp->fullIData(oldp+56,(0xcU),32);
    bufp->fullIData(oldp+57,(5U),32);
}
