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
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+55,"inst", false,-1, 31,0);
    tracep->declBus(c+56,"pc", false,-1, 31,0);
    tracep->declBus(c+57,"dnpc", false,-1, 31,0);
    tracep->declBit(c+58,"flag", false,-1);
    tracep->declBit(c+59,"hit_good_or_bad", false,-1);
    tracep->pushNamePrefix("ysyx_24090015_top ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+55,"inst", false,-1, 31,0);
    tracep->declBus(c+56,"pc", false,-1, 31,0);
    tracep->declBus(c+57,"dnpc", false,-1, 31,0);
    tracep->declBit(c+58,"flag", false,-1);
    tracep->declBit(c+59,"hit_good_or_bad", false,-1);
    tracep->declBus(c+21,"ebreak_ret", false,-1, 31,0);
    tracep->declBus(c+60,"snpc", false,-1, 31,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"src1", false,-1, 31,0);
    tracep->declBus(c+15,"src2", false,-1, 31,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+3,"rs1", false,-1, 4,0);
    tracep->declBus(c+4,"rs2", false,-1, 4,0);
    tracep->declBit(c+5,"ren1", false,-1);
    tracep->declBit(c+6,"ren2", false,-1);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->declBit(c+8,"valid", false,-1);
    tracep->declBit(c+9,"pwen", false,-1);
    tracep->declBus(c+10,"wmask", false,-1, 7,0);
    tracep->declBus(c+16,"rd_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"pmem_raddr", false,-1, 31,0);
    tracep->declBus(c+18,"pmem_waddr", false,-1, 31,0);
    tracep->declBus(c+19,"pmem_wdata", false,-1, 31,0);
    tracep->declBus(c+20,"pmem_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("exu0 ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+55,"inst_in", false,-1, 31,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"src1", false,-1, 31,0);
    tracep->declBus(c+15,"src2", false,-1, 31,0);
    tracep->declBus(c+20,"pmem_rdata", false,-1, 31,0);
    tracep->declBus(c+56,"pc", false,-1, 31,0);
    tracep->declBus(c+60,"snpc", false,-1, 31,0);
    tracep->declBus(c+16,"rd_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"pmem_wdata", false,-1, 31,0);
    tracep->declBus(c+18,"pmem_waddr", false,-1, 31,0);
    tracep->declBus(c+17,"pmem_raddr", false,-1, 31,0);
    tracep->declBus(c+10,"wmask", false,-1, 7,0);
    tracep->declBus(c+57,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu0 ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+55,"inst_in", false,-1, 31,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBit(c+5,"ren1", false,-1);
    tracep->declBit(c+6,"ren2", false,-1);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->declBit(c+9,"pwen", false,-1);
    tracep->declBit(c+8,"valid", false,-1);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+3,"rs1", false,-1, 4,0);
    tracep->declBus(c+4,"rs2", false,-1, 4,0);
    tracep->declBus(c+11,"inst_type", false,-1, 3,0);
    tracep->declBus(c+12,"temp_immI", false,-1, 31,0);
    tracep->declBus(c+61,"temp_immU", false,-1, 31,0);
    tracep->declBus(c+62,"temp_immJ", false,-1, 31,0);
    tracep->declBus(c+63,"temp_immS", false,-1, 31,0);
    tracep->declBus(c+64,"temp_immB", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"inst", false,-1, 31,0);
    tracep->declBit(c+71,"clk", false,-1);
    tracep->declBus(c+12,"immI", false,-1, 31,0);
    tracep->declBus(c+65,"init", false,-1, 11,0);
    tracep->pushNamePrefix("s0 ");
    tracep->declBus(c+72,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+65,"in", false,-1, 11,0);
    tracep->declBus(c+12,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"inst_in", false,-1, 31,0);
    tracep->declBus(c+61,"immU", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"inst_in", false,-1, 31,0);
    tracep->declBus(c+62,"immJ", false,-1, 31,0);
    tracep->declBus(c+66,"init", false,-1, 20,0);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+73,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+66,"in", false,-1, 20,0);
    tracep->declBus(c+62,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"inst_in", false,-1, 31,0);
    tracep->declBus(c+63,"immS", false,-1, 31,0);
    tracep->declBus(c+67,"init", false,-1, 11,0);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+72,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"in", false,-1, 11,0);
    tracep->declBus(c+63,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"inst_in", false,-1, 31,0);
    tracep->declBus(c+64,"immB", false,-1, 31,0);
    tracep->declBus(c+68,"init", false,-1, 12,0);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+74,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+68,"in", false,-1, 12,0);
    tracep->declBus(c+64,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("t0 ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+55,"inst", false,-1, 31,0);
    tracep->declBus(c+11,"inst_type", false,-1, 3,0);
    tracep->declBus(c+13,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu0 ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+57,"dnpc", false,-1, 31,0);
    tracep->declBus(c+56,"pc", false,-1, 31,0);
    tracep->declBus(c+60,"snpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pmem0 ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+69,"clk", false,-1);
    tracep->declBit(c+8,"valid", false,-1);
    tracep->declBit(c+9,"wen", false,-1);
    tracep->declBus(c+10,"wmask", false,-1, 7,0);
    tracep->declBus(c+17,"raddr", false,-1, 31,0);
    tracep->declBus(c+18,"waddr", false,-1, 31,0);
    tracep->declBus(c+19,"wdata", false,-1, 31,0);
    tracep->declBus(c+20,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg0 ");
    tracep->declBus(c+75,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+16,"wdata", false,-1, 31,0);
    tracep->declBus(c+2,"waddr", false,-1, 4,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->declBit(c+5,"ren1", false,-1);
    tracep->declBit(c+6,"ren2", false,-1);
    tracep->declBus(c+3,"raddr1", false,-1, 4,0);
    tracep->declBus(c+4,"raddr2", false,-1, 4,0);
    tracep->declBus(c+14,"rdata1", false,-1, 31,0);
    tracep->declBus(c+15,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+22+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_24090015_top__DOT__imm),32);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_24090015_top__DOT__rd),5);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_24090015_top__DOT__rs1),5);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_24090015_top__DOT__rs2),5);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_24090015_top__DOT__ren1));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_24090015_top__DOT__ren2));
    bufp->fullBit(oldp+7,(vlSelf->ysyx_24090015_top__DOT__wen));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_24090015_top__DOT__valid));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_24090015_top__DOT__pwen));
    bufp->fullCData(oldp+10,(vlSelf->ysyx_24090015_top__DOT__wmask),8);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type),4);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI),32);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode),7);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24090015_top__DOT__src1),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24090015_top__DOT__src2),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24090015_top__DOT__rd_wdata),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24090015_top__DOT__pmem_raddr),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24090015_top__DOT__pmem_waddr),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24090015_top__DOT__pmem_wdata),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24090015_top__DOT__pmem_rdata),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24090015_top__DOT__ebreak_ret),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[0]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[1]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[2]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[3]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[4]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[5]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[6]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[7]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[8]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[9]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[10]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[11]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[12]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[13]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[14]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[15]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[16]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[17]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[18]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[19]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[20]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[21]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[22]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[23]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[24]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[25]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[26]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[27]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[28]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[29]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[30]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[31]),32);
    bufp->fullBit(oldp+54,(vlSelf->clk));
    bufp->fullIData(oldp+55,(vlSelf->inst),32);
    bufp->fullIData(oldp+56,(vlSelf->pc),32);
    bufp->fullIData(oldp+57,(vlSelf->dnpc),32);
    bufp->fullBit(oldp+58,(vlSelf->flag));
    bufp->fullBit(oldp+59,(vlSelf->hit_good_or_bad));
    bufp->fullIData(oldp+60,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+61,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+62,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x15U) | ((0x100000U 
                                             & (vlSelf->inst 
                                                >> 0xbU)) 
                                            | ((0xff000U 
                                                & vlSelf->inst) 
                                               | ((0x800U 
                                                   & (vlSelf->inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->inst 
                                                        >> 0x14U))))))),32);
    bufp->fullIData(oldp+63,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+64,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xdU) | ((0x1000U 
                                            & (vlSelf->inst 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSelf->inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->inst 
                                                       >> 7U))))))),32);
    bufp->fullSData(oldp+65,((vlSelf->inst >> 0x14U)),12);
    bufp->fullIData(oldp+66,(((0x100000U & (vlSelf->inst 
                                            >> 0xbU)) 
                              | ((0xff000U & vlSelf->inst) 
                                 | ((0x800U & (vlSelf->inst 
                                               >> 9U)) 
                                    | (0x7feU & (vlSelf->inst 
                                                 >> 0x14U)))))),21);
    bufp->fullSData(oldp+67,(((0xfe0U & (vlSelf->inst 
                                         >> 0x14U)) 
                              | (0x1fU & (vlSelf->inst 
                                          >> 7U)))),12);
    bufp->fullSData(oldp+68,(((0x1000U & (vlSelf->inst 
                                          >> 0x13U)) 
                              | ((0x800U & (vlSelf->inst 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSelf->inst 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSelf->inst 
                                                >> 7U)))))),13);
    bufp->fullBit(oldp+69,((1U & (~ (IData)(vlSelf->clk)))));
    bufp->fullIData(oldp+70,(0x20U),32);
    bufp->fullBit(oldp+71,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__clk));
    bufp->fullIData(oldp+72,(0xcU),32);
    bufp->fullIData(oldp+73,(0x15U),32);
    bufp->fullIData(oldp+74,(0xdU),32);
    bufp->fullIData(oldp+75,(5U),32);
}
