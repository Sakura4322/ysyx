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
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->declBus(c+54,"pc", false,-1, 31,0);
    tracep->declBus(c+55,"dnpc", false,-1, 31,0);
    tracep->declBit(c+56,"flag", false,-1);
    tracep->declBit(c+57,"hit_good_or_bad", false,-1);
    tracep->pushNamePrefix("ysyx_24090015_top ");
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->declBus(c+54,"pc", false,-1, 31,0);
    tracep->declBus(c+55,"dnpc", false,-1, 31,0);
    tracep->declBit(c+56,"flag", false,-1);
    tracep->declBit(c+57,"hit_good_or_bad", false,-1);
    tracep->declBus(c+19,"ebreak_ret", false,-1, 31,0);
    tracep->declBus(c+58,"snpc", false,-1, 31,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+13,"src1", false,-1, 31,0);
    tracep->declBus(c+14,"src2", false,-1, 31,0);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+3,"rs1", false,-1, 4,0);
    tracep->declBus(c+4,"rs2", false,-1, 4,0);
    tracep->declBit(c+5,"ren1", false,-1);
    tracep->declBit(c+6,"ren2", false,-1);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->declBit(c+8,"pren", false,-1);
    tracep->declBit(c+9,"pwen", false,-1);
    tracep->declBus(c+15,"rd_wdata", false,-1, 31,0);
    tracep->declBus(c+64,"pmem_raddr", false,-1, 31,0);
    tracep->declBus(c+16,"pmem_waddr", false,-1, 31,0);
    tracep->declBus(c+17,"pmem_wdata", false,-1, 31,0);
    tracep->declBus(c+18,"pmem_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("exu0 ");
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBus(c+53,"inst_in", false,-1, 31,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+13,"src1", false,-1, 31,0);
    tracep->declBus(c+14,"src2", false,-1, 31,0);
    tracep->declBus(c+18,"pmem_rdata", false,-1, 31,0);
    tracep->declBus(c+54,"pc", false,-1, 31,0);
    tracep->declBus(c+58,"snpc", false,-1, 31,0);
    tracep->declBus(c+15,"rd_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"pmem_wdata", false,-1, 31,0);
    tracep->declBus(c+16,"pmem_waddr", false,-1, 31,0);
    tracep->declBus(c+64,"pmem_raddr", false,-1, 31,0);
    tracep->declBus(c+55,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu0 ");
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBus(c+53,"inst_in", false,-1, 31,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBit(c+5,"ren1", false,-1);
    tracep->declBit(c+6,"ren2", false,-1);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->declBit(c+9,"pwen", false,-1);
    tracep->declBit(c+8,"pren", false,-1);
    tracep->declBus(c+2,"rd", false,-1, 4,0);
    tracep->declBus(c+3,"rs1", false,-1, 4,0);
    tracep->declBus(c+4,"rs2", false,-1, 4,0);
    tracep->declBus(c+10,"inst_type", false,-1, 2,0);
    tracep->declBus(c+11,"temp_immI", false,-1, 31,0);
    tracep->declBus(c+59,"temp_immU", false,-1, 31,0);
    tracep->declBus(c+60,"temp_immJ", false,-1, 31,0);
    tracep->declBus(c+60,"temp_immS", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBus(c+11,"immI", false,-1, 31,0);
    tracep->declBus(c+61,"init", false,-1, 11,0);
    tracep->pushNamePrefix("s0 ");
    tracep->declBus(c+66,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"in", false,-1, 11,0);
    tracep->declBus(c+11,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+53,"inst_in", false,-1, 31,0);
    tracep->declBus(c+59,"immU", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+53,"inst_in", false,-1, 31,0);
    tracep->declBus(c+60,"immJ", false,-1, 31,0);
    tracep->declBus(c+62,"init", false,-1, 20,0);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+67,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"in", false,-1, 20,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+53,"inst_in", false,-1, 31,0);
    tracep->declBus(c+60,"immJ", false,-1, 31,0);
    tracep->declBus(c+62,"init", false,-1, 20,0);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+67,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"in", false,-1, 20,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("t0 ");
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->declBus(c+10,"inst_type", false,-1, 2,0);
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu0 ");
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBus(c+55,"dnpc", false,-1, 31,0);
    tracep->declBus(c+54,"pc", false,-1, 31,0);
    tracep->declBus(c+58,"snpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pmem0 ");
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+8,"ren", false,-1);
    tracep->declBit(c+9,"wen", false,-1);
    tracep->declBus(c+64,"raddr", false,-1, 31,0);
    tracep->declBus(c+16,"waddr", false,-1, 31,0);
    tracep->declBus(c+17,"wdata", false,-1, 31,0);
    tracep->declBus(c+18,"rdata", false,-1, 31,0);
    tracep->declBit(c+68,"wmask", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg0 ");
    tracep->declBus(c+69,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBus(c+15,"wdata", false,-1, 31,0);
    tracep->declBus(c+2,"waddr", false,-1, 4,0);
    tracep->declBit(c+7,"wen", false,-1);
    tracep->declBit(c+5,"ren1", false,-1);
    tracep->declBit(c+6,"ren2", false,-1);
    tracep->declBus(c+3,"raddr1", false,-1, 4,0);
    tracep->declBus(c+4,"raddr2", false,-1, 4,0);
    tracep->declBus(c+13,"rdata1", false,-1, 31,0);
    tracep->declBus(c+14,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+20+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullBit(oldp+8,(vlSelf->ysyx_24090015_top__DOT__pren));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_24090015_top__DOT__pwen));
    bufp->fullCData(oldp+10,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type),3);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI),32);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__t0__DOT__opcode),7);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24090015_top__DOT__src1),32);
    bufp->fullIData(oldp+14,(((- (IData)((IData)(vlSelf->ysyx_24090015_top__DOT__ren2))) 
                              & vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf
                              [vlSelf->ysyx_24090015_top__DOT__rs2])),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24090015_top__DOT__rd_wdata),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24090015_top__DOT__pmem_waddr),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24090015_top__DOT__pmem_wdata),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24090015_top__DOT__pmem_rdata),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24090015_top__DOT__ebreak_ret),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[0]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[1]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[2]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[3]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[4]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[5]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[6]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[7]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[8]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[9]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[10]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[11]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[12]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[13]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[14]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[15]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[16]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[17]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[18]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[19]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[20]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[21]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[22]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[23]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[24]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[25]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[26]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[27]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[28]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[29]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[30]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[31]),32);
    bufp->fullBit(oldp+52,(vlSelf->clk));
    bufp->fullIData(oldp+53,(vlSelf->inst),32);
    bufp->fullIData(oldp+54,(vlSelf->pc),32);
    bufp->fullIData(oldp+55,(vlSelf->dnpc),32);
    bufp->fullBit(oldp+56,(vlSelf->flag));
    bufp->fullBit(oldp+57,(vlSelf->hit_good_or_bad));
    bufp->fullIData(oldp+58,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+59,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+60,((((- (IData)((vlSelf->inst 
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
    bufp->fullSData(oldp+61,((vlSelf->inst >> 0x14U)),12);
    bufp->fullIData(oldp+62,(((0x100000U & (vlSelf->inst 
                                            >> 0xbU)) 
                              | ((0xff000U & vlSelf->inst) 
                                 | ((0x800U & (vlSelf->inst 
                                               >> 9U)) 
                                    | (0x7feU & (vlSelf->inst 
                                                 >> 0x14U)))))),21);
    bufp->fullIData(oldp+63,(0x20U),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24090015_top__DOT__pmem_raddr),32);
    bufp->fullBit(oldp+65,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__clk));
    bufp->fullIData(oldp+66,(0xcU),32);
    bufp->fullIData(oldp+67,(0x15U),32);
    bufp->fullBit(oldp+68,(vlSelf->ysyx_24090015_top__DOT__pmem0__DOT__wmask));
    bufp->fullIData(oldp+69,(5U),32);
}
