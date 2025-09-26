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
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBus(c+94,"inst", false,-1, 31,0);
    tracep->declBus(c+95,"pc", false,-1, 31,0);
    tracep->declBus(c+96,"dnpc", false,-1, 31,0);
    tracep->declBit(c+97,"flag", false,-1);
    tracep->declBit(c+98,"hit_good_or_bad", false,-1);
    tracep->pushNamePrefix("ysyx_24090015_top ");
    tracep->declBus(c+101,"DATAWIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBus(c+94,"inst", false,-1, 31,0);
    tracep->declBus(c+95,"pc", false,-1, 31,0);
    tracep->declBus(c+96,"dnpc", false,-1, 31,0);
    tracep->declBit(c+97,"flag", false,-1);
    tracep->declBit(c+98,"hit_good_or_bad", false,-1);
    tracep->declBus(c+1,"ebreak_ret", false,-1, 31,0);
    tracep->declBus(c+102,"snpc", false,-1, 31,0);
    tracep->declBit(c+2,"ifu_respvalid", false,-1);
    tracep->declBit(c+3,"ifu_reqvalid", false,-1);
    tracep->declBus(c+4,"ifu_raddr", false,-1, 31,0);
    tracep->declBus(c+5,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+103,"lsu_reqvalid", false,-1);
    tracep->declBus(c+6,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+7,"lsu_wen", false,-1);
    tracep->declBus(c+8,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+9,"lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+104,"lsu_respvalid", false,-1);
    tracep->declBus(c+10,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+2,"fetch", false,-1);
    tracep->declBit(c+106,"pmem_work", false,-1);
    tracep->declBit(c+107,"pmem_raddr", false,-1);
    tracep->declBit(c+108,"wmask", false,-1);
    tracep->declBit(c+11,"lsu_reqValid", false,-1);
    tracep->declBit(c+12,"lsu_respValid", false,-1);
    tracep->declBit(c+109,"ifu_reqValid", false,-1);
    tracep->declBus(c+13,"imm", false,-1, 31,0);
    tracep->declBus(c+14,"rd_wdata", false,-1, 31,0);
    tracep->declBus(c+15,"src1", false,-1, 31,0);
    tracep->declBus(c+16,"src2", false,-1, 31,0);
    tracep->declBus(c+17,"rd", false,-1, 4,0);
    tracep->declBus(c+18,"rs1", false,-1, 4,0);
    tracep->declBus(c+19,"rs2", false,-1, 4,0);
    tracep->declBit(c+20,"LSU_work", false,-1);
    tracep->declBit(c+21,"wen", false,-1);
    tracep->declBit(c+22,"ren1", false,-1);
    tracep->declBit(c+23,"ren2", false,-1);
    tracep->declBit(c+24,"pwen", false,-1);
    tracep->declBit(c+25,"pmem_ls", false,-1);
    tracep->declBus(c+26,"pmem_wmask", false,-1, 7,0);
    tracep->declBus(c+27,"pmem_addr", false,-1, 31,0);
    tracep->declBus(c+28,"pmem_wdata", false,-1, 31,0);
    tracep->declBus(c+10,"pmem_rdata", false,-1, 31,0);
    tracep->declBus(c+29,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+30,"csr_wdata0", false,-1, 31,0);
    tracep->declBus(c+31,"csr_wdata1", false,-1, 31,0);
    tracep->declBit(c+32,"csr_wen", false,-1);
    tracep->declBit(c+33,"valid", false,-1);
    tracep->declBit(c+110,"wen_control", false,-1);
    tracep->declBit(c+111,"ren1_control", false,-1);
    tracep->declBit(c+112,"ren2_control", false,-1);
    tracep->pushNamePrefix("csr_regfiles_instance ");
    tracep->declBus(c+101,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+113,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"CSR_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->declBus(c+34,"imm", false,-1, 11,0);
    tracep->declBus(c+30,"wdata0", false,-1, 31,0);
    tracep->declBus(c+31,"wdata1", false,-1, 31,0);
    tracep->declBus(c+29,"rdata", false,-1, 31,0);
    tracep->declBus(c+35,"csr_waddr0", false,-1, 1,0);
    tracep->declBus(c+36,"csr_waddr1", false,-1, 1,0);
    tracep->declBus(c+37,"csr_raddr0", false,-1, 1,0);
    tracep->declBit(c+38,"wen0", false,-1);
    tracep->declBit(c+39,"wen1", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+40+i*1,"CSRS", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("csr_addr_mux_instance ");
    tracep->declBus(c+113,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"CSR_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+32,"wen", false,-1);
    tracep->declBus(c+34,"imm", false,-1, 11,0);
    tracep->declBus(c+35,"waddr0", false,-1, 1,0);
    tracep->declBus(c+36,"waddr1", false,-1, 1,0);
    tracep->declBus(c+37,"raddr0", false,-1, 1,0);
    tracep->declBit(c+38,"wen0", false,-1);
    tracep->declBit(c+39,"wen1", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu0 ");
    tracep->declBus(c+101,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"ADDRWIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBus(c+94,"inst_in", false,-1, 31,0);
    tracep->declBit(c+2,"fetch", false,-1);
    tracep->declBus(c+13,"imm", false,-1, 31,0);
    tracep->declBus(c+15,"src1", false,-1, 31,0);
    tracep->declBus(c+16,"src2", false,-1, 31,0);
    tracep->declBus(c+14,"rd_wdata", false,-1, 31,0);
    tracep->declBus(c+95,"pc", false,-1, 31,0);
    tracep->declBus(c+96,"dnpc", false,-1, 31,0);
    tracep->declBit(c+20,"pmem_work", false,-1);
    tracep->declBit(c+25,"pmem_ls", false,-1);
    tracep->declBus(c+10,"pmem_rdata", false,-1, 31,0);
    tracep->declBus(c+27,"pmem_addr", false,-1, 31,0);
    tracep->declBus(c+28,"pmem_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"pmem_wmask", false,-1, 3,0);
    tracep->declBus(c+29,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+30,"csr_wdata0", false,-1, 31,0);
    tracep->declBus(c+31,"csr_wdata1", false,-1, 31,0);
    tracep->declBus(c+115,"STORGE", false,-1, 31,0);
    tracep->declBus(c+116,"LOAD", false,-1, 31,0);
    tracep->declBus(c+117,"DWORD", false,-1, 3,0);
    tracep->declBus(c+118,"DHALF", false,-1, 3,0);
    tracep->declBus(c+119,"DBYTE", false,-1, 3,0);
    tracep->declBus(c+99,"snpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu0 ");
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBus(c+94,"inst_in", false,-1, 31,0);
    tracep->declBus(c+13,"imm", false,-1, 31,0);
    tracep->declBit(c+22,"ren1", false,-1);
    tracep->declBit(c+23,"ren2", false,-1);
    tracep->declBit(c+21,"wen", false,-1);
    tracep->declBit(c+24,"pwen", false,-1);
    tracep->declBit(c+33,"valid", false,-1);
    tracep->declBit(c+32,"csr_wen", false,-1);
    tracep->declBus(c+17,"rd", false,-1, 4,0);
    tracep->declBit(c+45,"rs1", false,-1);
    tracep->declBit(c+46,"rs2", false,-1);
    tracep->declBus(c+47,"inst_type", false,-1, 3,0);
    tracep->declBus(c+48,"temp_immI", false,-1, 31,0);
    tracep->declBus(c+49,"temp_immU", false,-1, 31,0);
    tracep->declBus(c+50,"temp_immJ", false,-1, 31,0);
    tracep->declBus(c+51,"temp_immS", false,-1, 31,0);
    tracep->declBus(c+52,"temp_immB", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+94,"inst", false,-1, 31,0);
    tracep->declBit(c+120,"clk", false,-1);
    tracep->declBus(c+48,"immI", false,-1, 31,0);
    tracep->declBus(c+53,"init", false,-1, 11,0);
    tracep->pushNamePrefix("s0 ");
    tracep->declBus(c+113,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+53,"in", false,-1, 11,0);
    tracep->declBus(c+48,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+94,"inst_in", false,-1, 31,0);
    tracep->declBus(c+49,"immU", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+94,"inst_in", false,-1, 31,0);
    tracep->declBus(c+50,"immJ", false,-1, 31,0);
    tracep->declBus(c+54,"init", false,-1, 20,0);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+121,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+54,"in", false,-1, 20,0);
    tracep->declBus(c+50,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+94,"inst_in", false,-1, 31,0);
    tracep->declBus(c+51,"immS", false,-1, 31,0);
    tracep->declBus(c+55,"init", false,-1, 11,0);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+113,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"in", false,-1, 11,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+94,"inst_in", false,-1, 31,0);
    tracep->declBus(c+52,"immB", false,-1, 31,0);
    tracep->declBus(c+56,"init", false,-1, 12,0);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+122,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+56,"in", false,-1, 12,0);
    tracep->declBus(c+52,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("t0 ");
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBus(c+94,"inst", false,-1, 31,0);
    tracep->declBus(c+47,"inst_type", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu0 ");
    tracep->declBus(c+101,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"ADDRWIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBus(c+96,"dnpc", false,-1, 31,0);
    tracep->declBus(c+95,"pc", false,-1, 31,0);
    tracep->declBus(c+94,"inst", false,-1, 31,0);
    tracep->declBit(c+2,"fetch", false,-1);
    tracep->declBit(c+3,"ifu_reqvalid", false,-1);
    tracep->declBus(c+4,"ifu_raddr", false,-1, 31,0);
    tracep->declBus(c+5,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+2,"ifu_respvalid", false,-1);
    tracep->declBus(c+123,"BASEADDR", false,-1, 31,0);
    tracep->declBus(c+115,"IDLE", false,-1, 31,0);
    tracep->declBus(c+116,"WAIT", false,-1, 31,0);
    tracep->declBit(c+57,"ifu_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu0 ");
    tracep->declBus(c+101,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"ADDRWIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+106,"LSU_work", false,-1);
    tracep->declBit(c+25,"ls", false,-1);
    tracep->declBus(c+124,"addr", false,-1, 31,0);
    tracep->declBus(c+28,"sdata", false,-1, 31,0);
    tracep->declBus(c+10,"ldata", false,-1, 31,0);
    tracep->declBus(c+125,"storge_mask", false,-1, 3,0);
    tracep->declBit(c+11,"lsu_reqValid", false,-1);
    tracep->declBus(c+6,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+7,"lsu_wen", false,-1);
    tracep->declBus(c+8,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+9,"lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+12,"lsu_respValid", false,-1);
    tracep->declBus(c+10,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+115,"STORGE", false,-1, 31,0);
    tracep->declBus(c+116,"LOAD", false,-1, 31,0);
    tracep->declBus(c+115,"IDLE", false,-1, 31,0);
    tracep->declBus(c+116,"WAIT", false,-1, 31,0);
    tracep->declBit(c+58,"lsu_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg0 ");
    tracep->declBus(c+126,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBus(c+14,"wdata", false,-1, 31,0);
    tracep->declBus(c+17,"waddr", false,-1, 4,0);
    tracep->declBit(c+110,"wen", false,-1);
    tracep->declBit(c+111,"ren1", false,-1);
    tracep->declBit(c+112,"ren2", false,-1);
    tracep->declBus(c+18,"raddr1", false,-1, 4,0);
    tracep->declBus(c+19,"raddr2", false,-1, 4,0);
    tracep->declBus(c+15,"rdata1", false,-1, 31,0);
    tracep->declBus(c+16,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+59+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+127,"mcause", false,-1, 31,0);
    tracep->declBus(c+128,"mstatus", false,-1, 31,0);
    tracep->declBus(c+129,"mepc", false,-1, 31,0);
    tracep->declBus(c+130,"mtvc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram0 ");
    tracep->declBus(c+101,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"ADDRWIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+100,"rst", false,-1);
    tracep->declBit(c+109,"ifu_reqValid", false,-1);
    tracep->declBus(c+91,"ifu_respvalid", false,-1, 31,0);
    tracep->declBus(c+4,"ifu_raddr", false,-1, 31,0);
    tracep->declBus(c+5,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+11,"lsu_reqValid", false,-1);
    tracep->declBus(c+6,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+131,"lsu_wen", false,-1);
    tracep->declBus(c+8,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+9,"lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+12,"lsu_respValid", false,-1);
    tracep->declBus(c+10,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+115,"IDLE", false,-1, 31,0);
    tracep->declBus(c+116,"IFU_FETCH", false,-1, 31,0);
    tracep->declBus(c+114,"LSU_LS", false,-1, 31,0);
    tracep->declBit(c+92,"sram_state", false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_24090015_top__DOT__ebreak_ret),32);
    bufp->fullBit(oldp+2,((1U & vlSelf->ysyx_24090015_top__DOT____Vcellout__sram0__ifu_respvalid)));
    bufp->fullBit(oldp+3,(vlSelf->ysyx_24090015_top__DOT__ifu_reqvalid));
    bufp->fullIData(oldp+4,(vlSelf->ysyx_24090015_top__DOT__ifu_raddr),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_24090015_top__DOT__ifu_rdata),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_24090015_top__DOT__lsu_addr),32);
    bufp->fullBit(oldp+7,(vlSelf->ysyx_24090015_top__DOT__lsu_wen));
    bufp->fullIData(oldp+8,(vlSelf->ysyx_24090015_top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_24090015_top__DOT__lsu_wmask),4);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24090015_top__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+11,(vlSelf->ysyx_24090015_top__DOT__lsu_reqValid));
    bufp->fullBit(oldp+12,(vlSelf->ysyx_24090015_top__DOT__lsu_respValid));
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24090015_top__DOT__imm),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24090015_top__DOT__rd_wdata),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24090015_top__DOT__src1),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24090015_top__DOT__src2),32);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_24090015_top__DOT__rd),5);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1),5);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs2),5);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_24090015_top__DOT__LSU_work));
    bufp->fullBit(oldp+21,(vlSelf->ysyx_24090015_top__DOT__wen));
    bufp->fullBit(oldp+22,(vlSelf->ysyx_24090015_top__DOT__ren1));
    bufp->fullBit(oldp+23,(vlSelf->ysyx_24090015_top__DOT__ren2));
    bufp->fullBit(oldp+24,(vlSelf->ysyx_24090015_top__DOT__pwen));
    bufp->fullBit(oldp+25,(vlSelf->ysyx_24090015_top__DOT__pmem_ls));
    bufp->fullCData(oldp+26,(vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask),8);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24090015_top__DOT__pmem_addr),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24090015_top__DOT__pmem_wdata),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24090015_top__DOT__csr_rdata),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24090015_top__DOT__csr_wdata0),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24090015_top__DOT__csr_wdata1),32);
    bufp->fullBit(oldp+32,(vlSelf->ysyx_24090015_top__DOT__csr_wen));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_24090015_top__DOT__valid));
    bufp->fullSData(oldp+34,((0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)),12);
    bufp->fullCData(oldp+35,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen)
                               ? ((0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))
                                   ? 2U : ((0x300U 
                                            == (0xfffU 
                                                & vlSelf->ysyx_24090015_top__DOT__imm))
                                            ? 0U : 
                                           ((0x302U 
                                             == (0xfffU 
                                                 & vlSelf->ysyx_24090015_top__DOT__imm))
                                             ? 0U : 
                                            ((0x305U 
                                              == (0xfffU 
                                                  & vlSelf->ysyx_24090015_top__DOT__imm))
                                              ? 1U : 
                                             ((0x341U 
                                               == (0xfffU 
                                                   & vlSelf->ysyx_24090015_top__DOT__imm))
                                               ? 2U
                                               : ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->ysyx_24090015_top__DOT__imm))
                                                   ? 3U
                                                   : 0U))))))
                               : 0U)),2);
    bufp->fullCData(oldp+36,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen)
                               ? ((0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))
                                   ? 3U : 0U) : 0U)),2);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0),2);
    bufp->fullBit(oldp+38,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen) 
                            & ((0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)) 
                               | ((0x300U == (0xfffU 
                                              & vlSelf->ysyx_24090015_top__DOT__imm)) 
                                  | ((0x302U != (0xfffU 
                                                 & vlSelf->ysyx_24090015_top__DOT__imm)) 
                                     & ((0x305U == 
                                         (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)) 
                                        | ((0x341U 
                                            == (0xfffU 
                                                & vlSelf->ysyx_24090015_top__DOT__imm)) 
                                           | (0x342U 
                                              == (0xfffU 
                                                  & vlSelf->ysyx_24090015_top__DOT__imm))))))))));
    bufp->fullBit(oldp+39,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen) 
                            & (0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)))));
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[0]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[1]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[2]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[3]),32);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask),4);
    bufp->fullBit(oldp+45,(vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs2));
    bufp->fullCData(oldp+47,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type),4);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI),32);
    bufp->fullIData(oldp+49,((0xfffff000U & vlSelf->ysyx_24090015_top__DOT__ifu_rdata)),32);
    bufp->fullIData(oldp+50,((((- (IData)((vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                           >> 0x1fU))) 
                               << 0x15U) | ((0x100000U 
                                             & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                >> 0xbU)) 
                                            | ((0xff000U 
                                                & vlSelf->ysyx_24090015_top__DOT__ifu_rdata) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                        >> 0x14U))))))),32);
    bufp->fullIData(oldp+51,((((- (IData)((vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+52,((((- (IData)((vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                           >> 0x1fU))) 
                               << 0xdU) | ((0x1000U 
                                            & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                       >> 7U))))))),32);
    bufp->fullSData(oldp+53,((vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                              >> 0x14U)),12);
    bufp->fullIData(oldp+54,(((0x100000U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                            >> 0xbU)) 
                              | ((0xff000U & vlSelf->ysyx_24090015_top__DOT__ifu_rdata) 
                                 | ((0x800U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                               >> 9U)) 
                                    | (0x7feU & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                 >> 0x14U)))))),21);
    bufp->fullSData(oldp+55,(((0xfe0U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                         >> 0x14U)) 
                              | (0x1fU & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                          >> 7U)))),12);
    bufp->fullSData(oldp+56,(((0x1000U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                          >> 0x13U)) 
                              | ((0x800U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                >> 7U)))))),13);
    bufp->fullBit(oldp+57,(vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state));
    bufp->fullIData(oldp+59,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[0]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[1]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[2]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[3]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[4]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[5]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[6]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[7]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[8]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[9]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[10]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[11]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[12]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[13]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[14]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[15]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[16]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[17]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[18]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[19]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[20]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[21]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[22]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[23]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[24]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[25]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[26]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[27]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[28]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[29]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[30]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[31]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24090015_top__DOT____Vcellout__sram0__ifu_respvalid),32);
    bufp->fullBit(oldp+92,(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state));
    bufp->fullBit(oldp+93,(vlSelf->clk));
    bufp->fullIData(oldp+94,(vlSelf->inst),32);
    bufp->fullIData(oldp+95,(vlSelf->pc),32);
    bufp->fullIData(oldp+96,(vlSelf->dnpc),32);
    bufp->fullBit(oldp+97,(vlSelf->flag));
    bufp->fullBit(oldp+98,(vlSelf->hit_good_or_bad));
    bufp->fullIData(oldp+99,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullBit(oldp+100,((1U & (~ (IData)(vlSelf->flag)))));
    bufp->fullIData(oldp+101,(0x20U),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24090015_top__DOT__snpc),32);
    bufp->fullBit(oldp+103,(vlSelf->ysyx_24090015_top__DOT__lsu_reqvalid));
    bufp->fullBit(oldp+104,(vlSelf->ysyx_24090015_top__DOT__lsu_respvalid));
    bufp->fullBit(oldp+105,(vlSelf->ysyx_24090015_top__DOT__rst));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_24090015_top__DOT__pmem_work));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_24090015_top__DOT__pmem_raddr));
    bufp->fullBit(oldp+108,(vlSelf->ysyx_24090015_top__DOT__wmask));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_24090015_top__DOT__ifu_reqValid));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_24090015_top__DOT__wen_control));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_24090015_top__DOT__ren1_control));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24090015_top__DOT__ren2_control));
    bufp->fullIData(oldp+113,(0xcU),32);
    bufp->fullIData(oldp+114,(2U),32);
    bufp->fullIData(oldp+115,(0U),32);
    bufp->fullIData(oldp+116,(1U),32);
    bufp->fullCData(oldp+117,(0xfU),4);
    bufp->fullCData(oldp+118,(3U),4);
    bufp->fullCData(oldp+119,(1U),4);
    bufp->fullBit(oldp+120,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__clk));
    bufp->fullIData(oldp+121,(0x15U),32);
    bufp->fullIData(oldp+122,(0xdU),32);
    bufp->fullIData(oldp+123,(0x80000000U),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_24090015_top__DOT__pmem_raddr),32);
    bufp->fullCData(oldp+125,(vlSelf->ysyx_24090015_top__DOT__wmask),4);
    bufp->fullIData(oldp+126,(5U),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__mcause),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__mstatus),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__mepc),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__mtvc),32);
    bufp->fullBit(oldp+131,(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__lsu_wen));
}
