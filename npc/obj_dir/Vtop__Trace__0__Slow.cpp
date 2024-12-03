// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBus(c+68,"pc", false,-1, 31,0);
    tracep->declBit(c+69,"flag", false,-1);
    tracep->declBus(c+70,"MuxKey.out", false,-1, 0,0);
    tracep->declBus(c+71,"MuxKey.key", false,-1, 0,0);
    tracep->declBus(c+72,"MuxKey.lut", false,-1, 3,0);
    tracep->declBus(c+73,"MuxKeyWithDefault.out", false,-1, 0,0);
    tracep->declBus(c+74,"MuxKeyWithDefault.key", false,-1, 0,0);
    tracep->declBus(c+75,"default_out", false,-1, 0,0);
    tracep->declBus(c+76,"MuxKeyWithDefault.lut", false,-1, 3,0);
    tracep->declBit(c+77,"a", false,-1);
    tracep->declBit(c+78,"b", false,-1);
    tracep->declBit(c+79,"f", false,-1);
    tracep->pushNamePrefix("MuxKey ");
    tracep->declBus(c+80,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+81,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+70,"out", false,-1, 0,0);
    tracep->declBus(c+71,"key", false,-1, 0,0);
    tracep->declBus(c+72,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+80,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+81,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+82,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+70,"out", false,-1, 0,0);
    tracep->declBus(c+71,"key", false,-1, 0,0);
    tracep->declBus(c+83,"default_out", false,-1, 0,0);
    tracep->declBus(c+72,"lut", false,-1, 3,0);
    tracep->declBus(c+80,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+7,"lut_out", false,-1, 0,0);
    tracep->declBit(c+8,"hit", false,-1);
    tracep->declBus(c+84,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MuxKeyWithDefault ");
    tracep->declBus(c+80,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+81,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+73,"out", false,-1, 0,0);
    tracep->declBus(c+74,"key", false,-1, 0,0);
    tracep->declBus(c+75,"default_out", false,-1, 0,0);
    tracep->declBus(c+76,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+80,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+81,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+73,"out", false,-1, 0,0);
    tracep->declBus(c+74,"key", false,-1, 0,0);
    tracep->declBus(c+75,"default_out", false,-1, 0,0);
    tracep->declBus(c+76,"lut", false,-1, 3,0);
    tracep->declBus(c+80,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+13+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+15,"lut_out", false,-1, 0,0);
    tracep->declBit(c+16,"hit", false,-1);
    tracep->declBus(c+84,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("verilog ");
    tracep->declBit(c+77,"a", false,-1);
    tracep->declBit(c+78,"b", false,-1);
    tracep->declBit(c+79,"f", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24090015_top ");
    tracep->declBus(c+85,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBus(c+68,"pc", false,-1, 31,0);
    tracep->declBit(c+69,"flag", false,-1);
    tracep->declBus(c+17,"snpc", false,-1, 31,0);
    tracep->declBus(c+18,"dnpc", false,-1, 31,0);
    tracep->declBit(c+86,"en", false,-1);
    tracep->declBus(c+19,"imm", false,-1, 31,0);
    tracep->declBus(c+20,"src1", false,-1, 31,0);
    tracep->declBus(c+21,"src2", false,-1, 31,0);
    tracep->declBus(c+22,"rd", false,-1, 4,0);
    tracep->declBus(c+23,"rs1", false,-1, 4,0);
    tracep->declBus(c+87,"rs2", false,-1, 4,0);
    tracep->declBit(c+24,"ren1", false,-1);
    tracep->declBit(c+25,"ren2", false,-1);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->declBus(c+27,"rd_wdata", false,-1, 31,0);
    tracep->declBus(c+28,"inst_2", false,-1, 31,0);
    tracep->pushNamePrefix("exu0 ");
    tracep->declBus(c+85,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+28,"inst_in", false,-1, 31,0);
    tracep->declBus(c+19,"imm", false,-1, 31,0);
    tracep->declBus(c+20,"src1", false,-1, 31,0);
    tracep->declBus(c+21,"src2", false,-1, 31,0);
    tracep->declBus(c+17,"snpc", false,-1, 31,0);
    tracep->declBus(c+22,"rd", false,-1, 4,0);
    tracep->declBus(c+23,"rs1", false,-1, 4,0);
    tracep->declBus(c+87,"rs2", false,-1, 4,0);
    tracep->declBus(c+27,"rd_wdata", false,-1, 31,0);
    tracep->declBus(c+68,"npc", false,-1, 31,0);
    tracep->declBus(c+18,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu0 ");
    tracep->declBus(c+85,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+67,"inst_in", false,-1, 31,0);
    tracep->declBus(c+19,"imm", false,-1, 31,0);
    tracep->declBit(c+24,"ren1", false,-1);
    tracep->declBit(c+25,"ren2", false,-1);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->declBus(c+28,"inst_out", false,-1, 31,0);
    tracep->declBus(c+29,"inst_type", false,-1, 2,0);
    tracep->declBus(c+30,"temp_immI", false,-1, 31,0);
    tracep->declBus(c+31,"inst_1", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+85,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+30,"imm", false,-1, 31,0);
    tracep->declBus(c+31,"inst_out", false,-1, 31,0);
    tracep->declBus(c+32,"init", false,-1, 11,0);
    tracep->pushNamePrefix("s0 ");
    tracep->declBus(c+88,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+32,"in", false,-1, 11,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("t0 ");
    tracep->declBus(c+85,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBus(c+29,"inst_type", false,-1, 2,0);
    tracep->declBus(c+33,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu0 ");
    tracep->declBus(c+85,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+86,"en", false,-1);
    tracep->declBus(c+68,"pc", false,-1, 31,0);
    tracep->declBus(c+17,"snpc", false,-1, 31,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->declBit(c+24,"ren1", false,-1);
    tracep->declBit(c+25,"ren2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg0 ");
    tracep->declBus(c+89,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+27,"wdata", false,-1, 31,0);
    tracep->declBus(c+22,"waddr", false,-1, 4,0);
    tracep->declBit(c+26,"wen", false,-1);
    tracep->declBit(c+24,"ren1", false,-1);
    tracep->declBit(c+25,"ren2", false,-1);
    tracep->declBus(c+23,"raddr1", false,-1, 4,0);
    tracep->declBus(c+87,"raddr2", false,-1, 4,0);
    tracep->declBus(c+20,"rdata1", false,-1, 31,0);
    tracep->declBus(c+21,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+34+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->MuxKey__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->MuxKey__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+3,(vlSelf->MuxKey__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSelf->MuxKey__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+5,(vlSelf->MuxKey__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+6,(vlSelf->MuxKey__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+7,(vlSelf->MuxKey__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+8,(vlSelf->MuxKey__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+9,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+10,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+11,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+12,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+13,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+14,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+15,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+16,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24090015_top__DOT__snpc),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24090015_top__DOT__dnpc),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24090015_top__DOT__imm),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24090015_top__DOT__src1),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24090015_top__DOT__src2),32);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_24090015_top__DOT__rd),5);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_24090015_top__DOT__rs1),5);
    bufp->fullBit(oldp+24,(vlSelf->ysyx_24090015_top__DOT__ren1));
    bufp->fullBit(oldp+25,(vlSelf->ysyx_24090015_top__DOT__ren2));
    bufp->fullBit(oldp+26,(vlSelf->ysyx_24090015_top__DOT__wen));
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24090015_top__DOT__rd_wdata),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24090015_top__DOT__inst_2),32);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type),3);
    bufp->fullIData(oldp+30,((((- (IData)((1U & ((IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__init) 
                                                 >> 0xbU)))) 
                               << 0xcU) | (IData)(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__init))),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_1),32);
    bufp->fullSData(oldp+32,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__init),12);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode),7);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[0]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[1]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[2]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[3]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[4]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[5]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[6]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[7]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[8]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[9]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[10]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[11]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[12]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[13]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[14]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[15]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[16]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[17]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[18]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[19]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[20]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[21]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[22]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[23]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[24]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[25]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[26]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[27]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[28]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[29]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[30]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[31]),32);
    bufp->fullBit(oldp+66,(vlSelf->clk));
    bufp->fullIData(oldp+67,(vlSelf->inst),32);
    bufp->fullIData(oldp+68,(vlSelf->pc),32);
    bufp->fullBit(oldp+69,(vlSelf->flag));
    bufp->fullBit(oldp+70,(vlSelf->MuxKey__02Eout));
    bufp->fullBit(oldp+71,(vlSelf->MuxKey__02Ekey));
    bufp->fullCData(oldp+72,(vlSelf->MuxKey__02Elut),4);
    bufp->fullBit(oldp+73,(vlSelf->MuxKeyWithDefault__02Eout));
    bufp->fullBit(oldp+74,(vlSelf->MuxKeyWithDefault__02Ekey));
    bufp->fullBit(oldp+75,(vlSelf->default_out));
    bufp->fullCData(oldp+76,(vlSelf->MuxKeyWithDefault__02Elut),4);
    bufp->fullBit(oldp+77,(vlSelf->a));
    bufp->fullBit(oldp+78,(vlSelf->b));
    bufp->fullBit(oldp+79,(vlSelf->f));
    bufp->fullIData(oldp+80,(2U),32);
    bufp->fullIData(oldp+81,(1U),32);
    bufp->fullIData(oldp+82,(0U),32);
    bufp->fullBit(oldp+83,(0U));
    bufp->fullIData(oldp+84,(2U),32);
    bufp->fullIData(oldp+85,(0x20U),32);
    bufp->fullBit(oldp+86,(vlSelf->ysyx_24090015_top__DOT__en));
    bufp->fullCData(oldp+87,(vlSelf->ysyx_24090015_top__DOT__rs2),5);
    bufp->fullIData(oldp+88,(0xcU),32);
    bufp->fullIData(oldp+89,(5U),32);
}
