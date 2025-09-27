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
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+91,"ifu_raddr", false,-1, 31,0);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBit(c+93,"fetch", false,-1);
    tracep->declBit(c+94,"flag", false,-1);
    tracep->declBit(c+95,"hit_good_or_bad", false,-1);
    tracep->pushNamePrefix("ysyx_24090015_top ");
    tracep->declBus(c+98,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"ADDRWIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+91,"ifu_raddr", false,-1, 31,0);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBit(c+93,"fetch", false,-1);
    tracep->declBit(c+94,"flag", false,-1);
    tracep->declBit(c+95,"hit_good_or_bad", false,-1);
    tracep->declBus(c+1,"ebreak_ret", false,-1, 31,0);
    tracep->declBus(c+56,"dnpc", false,-1, 31,0);
    tracep->declBit(c+57,"ifu_respValid", false,-1);
    tracep->declBit(c+99,"ifu_reqvalid", false,-1);
    tracep->declBus(c+2,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+100,"lsu_reqvalid", false,-1);
    tracep->declBus(c+3,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+4,"lsu_wen", false,-1);
    tracep->declBus(c+5,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+101,"lsu_respvalid", false,-1);
    tracep->declBus(c+7,"lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+8,"ifu_reqValid", false,-1);
    tracep->declBit(c+58,"pmem_work", false,-1);
    tracep->declBit(c+59,"pmem_ls", false,-1);
    tracep->declBus(c+60,"pmem_wmask", false,-1, 7,0);
    tracep->declBus(c+61,"pmem_addr", false,-1, 31,0);
    tracep->declBus(c+62,"pmem_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"pmem_rdata", false,-1, 31,0);
    tracep->declBit(c+58,"lsu_reqValid", false,-1);
    tracep->declBit(c+9,"lsu_respValid", false,-1);
    tracep->declBus(c+63,"imm", false,-1, 31,0);
    tracep->declBus(c+64,"rd_wdata", false,-1, 31,0);
    tracep->declBus(c+65,"src1", false,-1, 31,0);
    tracep->declBus(c+66,"src2", false,-1, 31,0);
    tracep->declBus(c+67,"rd", false,-1, 4,0);
    tracep->declBus(c+68,"rs1", false,-1, 4,0);
    tracep->declBus(c+69,"rs2", false,-1, 4,0);
    tracep->declBit(c+70,"wen", false,-1);
    tracep->declBit(c+71,"ren1", false,-1);
    tracep->declBit(c+72,"ren2", false,-1);
    tracep->declBit(c+73,"pwen", false,-1);
    tracep->declBus(c+74,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+75,"csr_wdata0", false,-1, 31,0);
    tracep->declBus(c+76,"csr_wdata1", false,-1, 31,0);
    tracep->declBit(c+77,"csr_wen", false,-1);
    tracep->declBit(c+78,"valid", false,-1);
    tracep->pushNamePrefix("csr_regfiles_instance ");
    tracep->declBus(c+98,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+102,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+103,"CSR_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+77,"wen", false,-1);
    tracep->declBus(c+79,"imm", false,-1, 11,0);
    tracep->declBus(c+75,"wdata0", false,-1, 31,0);
    tracep->declBus(c+76,"wdata1", false,-1, 31,0);
    tracep->declBus(c+74,"rdata", false,-1, 31,0);
    tracep->declBus(c+80,"csr_waddr0", false,-1, 1,0);
    tracep->declBus(c+81,"csr_waddr1", false,-1, 1,0);
    tracep->declBus(c+82,"csr_raddr0", false,-1, 1,0);
    tracep->declBit(c+83,"wen0", false,-1);
    tracep->declBit(c+84,"wen1", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+10+i*1,"CSRS", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("csr_addr_mux_instance ");
    tracep->declBus(c+102,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+103,"CSR_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"wen", false,-1);
    tracep->declBus(c+79,"imm", false,-1, 11,0);
    tracep->declBus(c+80,"waddr0", false,-1, 1,0);
    tracep->declBus(c+81,"waddr1", false,-1, 1,0);
    tracep->declBus(c+82,"raddr0", false,-1, 1,0);
    tracep->declBit(c+83,"wen0", false,-1);
    tracep->declBit(c+84,"wen1", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu0 ");
    tracep->declBus(c+98,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"ADDRWIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+92,"inst_in", false,-1, 31,0);
    tracep->declBit(c+93,"fetch", false,-1);
    tracep->declBus(c+63,"imm", false,-1, 31,0);
    tracep->declBus(c+65,"src1", false,-1, 31,0);
    tracep->declBus(c+66,"src2", false,-1, 31,0);
    tracep->declBus(c+64,"rd_wdata", false,-1, 31,0);
    tracep->declBus(c+91,"pc", false,-1, 31,0);
    tracep->declBus(c+56,"dnpc", false,-1, 31,0);
    tracep->declBit(c+58,"pmem_work", false,-1);
    tracep->declBit(c+59,"pmem_ls", false,-1);
    tracep->declBus(c+7,"pmem_rdata", false,-1, 31,0);
    tracep->declBus(c+61,"pmem_addr", false,-1, 31,0);
    tracep->declBus(c+62,"pmem_wdata", false,-1, 31,0);
    tracep->declBus(c+85,"pmem_wmask", false,-1, 3,0);
    tracep->declBus(c+74,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+75,"csr_wdata0", false,-1, 31,0);
    tracep->declBus(c+76,"csr_wdata1", false,-1, 31,0);
    tracep->declBus(c+104,"STORGE", false,-1, 31,0);
    tracep->declBus(c+105,"LOAD", false,-1, 31,0);
    tracep->declBus(c+106,"DWORD", false,-1, 3,0);
    tracep->declBus(c+107,"DHALF", false,-1, 3,0);
    tracep->declBus(c+108,"DBYTE", false,-1, 3,0);
    tracep->declBus(c+96,"snpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu0 ");
    tracep->declBus(c+98,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBus(c+92,"inst_in", false,-1, 31,0);
    tracep->declBus(c+63,"imm", false,-1, 31,0);
    tracep->declBit(c+71,"ren1", false,-1);
    tracep->declBit(c+72,"ren2", false,-1);
    tracep->declBit(c+70,"wen", false,-1);
    tracep->declBit(c+73,"pwen", false,-1);
    tracep->declBit(c+78,"valid", false,-1);
    tracep->declBit(c+77,"csr_wen", false,-1);
    tracep->declBus(c+67,"rd", false,-1, 4,0);
    tracep->declBus(c+68,"rs1", false,-1, 4,0);
    tracep->declBus(c+69,"rs2", false,-1, 4,0);
    tracep->declBus(c+105,"R", false,-1, 31,0);
    tracep->declBus(c+103,"II", false,-1, 31,0);
    tracep->declBus(c+109,"IJ", false,-1, 31,0);
    tracep->declBus(c+110,"IS", false,-1, 31,0);
    tracep->declBus(c+111,"IC", false,-1, 31,0);
    tracep->declBus(c+112,"S", false,-1, 31,0);
    tracep->declBus(c+113,"B", false,-1, 31,0);
    tracep->declBus(c+114,"U", false,-1, 31,0);
    tracep->declBus(c+115,"J", false,-1, 31,0);
    tracep->declBus(c+86,"inst_type", false,-1, 3,0);
    tracep->declBus(c+87,"temp_immI", false,-1, 31,0);
    tracep->declBus(c+48,"temp_immU", false,-1, 31,0);
    tracep->declBus(c+49,"temp_immJ", false,-1, 31,0);
    tracep->declBus(c+50,"temp_immS", false,-1, 31,0);
    tracep->declBus(c+51,"temp_immB", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+98,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBit(c+116,"clk", false,-1);
    tracep->declBus(c+87,"immI", false,-1, 31,0);
    tracep->declBus(c+52,"init", false,-1, 11,0);
    tracep->pushNamePrefix("s0 ");
    tracep->declBus(c+102,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"in", false,-1, 11,0);
    tracep->declBus(c+87,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+98,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+92,"inst_in", false,-1, 31,0);
    tracep->declBus(c+48,"immU", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+98,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+92,"inst_in", false,-1, 31,0);
    tracep->declBus(c+49,"immJ", false,-1, 31,0);
    tracep->declBus(c+53,"init", false,-1, 20,0);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+117,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+53,"in", false,-1, 20,0);
    tracep->declBus(c+49,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+98,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+92,"inst_in", false,-1, 31,0);
    tracep->declBus(c+50,"immS", false,-1, 31,0);
    tracep->declBus(c+54,"init", false,-1, 11,0);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+102,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+54,"in", false,-1, 11,0);
    tracep->declBus(c+50,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+98,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+92,"inst_in", false,-1, 31,0);
    tracep->declBus(c+51,"immB", false,-1, 31,0);
    tracep->declBus(c+55,"init", false,-1, 12,0);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+118,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"in", false,-1, 12,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("t0 ");
    tracep->declBus(c+98,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBus(c+86,"inst_type", false,-1, 3,0);
    tracep->declBus(c+105,"R", false,-1, 31,0);
    tracep->declBus(c+103,"II", false,-1, 31,0);
    tracep->declBus(c+109,"IJ", false,-1, 31,0);
    tracep->declBus(c+110,"IS", false,-1, 31,0);
    tracep->declBus(c+111,"IC", false,-1, 31,0);
    tracep->declBus(c+112,"S", false,-1, 31,0);
    tracep->declBus(c+113,"B", false,-1, 31,0);
    tracep->declBus(c+114,"U", false,-1, 31,0);
    tracep->declBus(c+115,"J", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu0 ");
    tracep->declBus(c+98,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"ADDRWIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBus(c+56,"dnpc", false,-1, 31,0);
    tracep->declBus(c+90,"pc", false,-1, 31,0);
    tracep->declBus(c+92,"inst", false,-1, 31,0);
    tracep->declBit(c+93,"fetch", false,-1);
    tracep->declBit(c+8,"ifu_reqValid", false,-1);
    tracep->declBus(c+91,"ifu_raddr", false,-1, 31,0);
    tracep->declBus(c+2,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+57,"ifu_respValid", false,-1);
    tracep->declBus(c+119,"BASEADDR", false,-1, 31,0);
    tracep->declBus(c+104,"IDLE", false,-1, 31,0);
    tracep->declBus(c+105,"WAIT", false,-1, 31,0);
    tracep->declBit(c+14,"ifu_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu0 ");
    tracep->declBus(c+98,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"ADDRWIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBit(c+58,"LSU_work", false,-1);
    tracep->declBit(c+59,"ls", false,-1);
    tracep->declBus(c+61,"addr", false,-1, 31,0);
    tracep->declBus(c+62,"sdata", false,-1, 31,0);
    tracep->declBus(c+7,"ldata", false,-1, 31,0);
    tracep->declBus(c+85,"storge_mask", false,-1, 3,0);
    tracep->declBit(c+58,"lsu_reqValid", false,-1);
    tracep->declBus(c+3,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+4,"lsu_wen", false,-1);
    tracep->declBus(c+5,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+9,"lsu_respValid", false,-1);
    tracep->declBus(c+7,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+104,"STORGE", false,-1, 31,0);
    tracep->declBus(c+105,"LOAD", false,-1, 31,0);
    tracep->declBus(c+104,"IDLE", false,-1, 31,0);
    tracep->declBus(c+105,"WAIT", false,-1, 31,0);
    tracep->declBit(c+15,"lsu_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg0 ");
    tracep->declBus(c+111,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBus(c+64,"wdata", false,-1, 31,0);
    tracep->declBus(c+67,"waddr", false,-1, 4,0);
    tracep->declBit(c+70,"wen", false,-1);
    tracep->declBit(c+71,"ren1", false,-1);
    tracep->declBit(c+72,"ren2", false,-1);
    tracep->declBus(c+68,"raddr1", false,-1, 4,0);
    tracep->declBus(c+69,"raddr2", false,-1, 4,0);
    tracep->declBus(c+65,"rdata1", false,-1, 31,0);
    tracep->declBus(c+66,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+16+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram0 ");
    tracep->declBus(c+98,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"ADDRWIDTH", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst", false,-1);
    tracep->declBit(c+8,"ifu_reqValid", false,-1);
    tracep->declBit(c+57,"ifu_respValid", false,-1);
    tracep->declBus(c+91,"ifu_raddr", false,-1, 31,0);
    tracep->declBus(c+2,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+58,"lsu_reqValid", false,-1);
    tracep->declBus(c+3,"lsu_addr", false,-1, 31,0);
    tracep->declBit(c+4,"lsu_wen", false,-1);
    tracep->declBus(c+5,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+6,"lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+9,"lsu_respValid", false,-1);
    tracep->declBus(c+7,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+104,"IDLE", false,-1, 31,0);
    tracep->declBus(c+105,"IFU_FETCH", false,-1, 31,0);
    tracep->declBus(c+103,"LSU_LS", false,-1, 31,0);
    tracep->declBus(c+97,"sram_state", false,-1, 1,0);
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
    bufp->fullIData(oldp+2,(vlSelf->ysyx_24090015_top__DOT__ifu_rdata),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_24090015_top__DOT__lsu_addr),32);
    bufp->fullBit(oldp+4,(vlSelf->ysyx_24090015_top__DOT__lsu_wen));
    bufp->fullIData(oldp+5,(vlSelf->ysyx_24090015_top__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_24090015_top__DOT__lsu_wmask),4);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_24090015_top__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+8,(vlSelf->ysyx_24090015_top__DOT__ifu_reqValid));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_24090015_top__DOT__lsu_respValid));
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[0]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[1]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[2]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[3]),32);
    bufp->fullBit(oldp+14,(vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state));
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[0]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[1]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[2]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[3]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[4]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[5]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[6]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[7]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[8]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[9]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[10]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[11]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[12]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[13]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[14]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[15]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[16]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[17]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[18]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[19]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[20]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[21]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[22]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[23]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[24]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[25]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[26]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[27]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[28]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[29]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[30]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[31]),32);
    bufp->fullIData(oldp+48,((((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                ? (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                   >> 0xcU) : 0U) << 0xcU)),32);
    bufp->fullIData(oldp+49,((((- (IData)((IData)(vlSelf->__VdfgTmp_h872a8a4a__0))) 
                               << 0x15U) | (((IData)(vlSelf->__VdfgTmp_h872a8a4a__0) 
                                             << 0x14U) 
                                            | ((((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                                  ? 
                                                 (0xffU 
                                                  & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                     >> 0xcU))
                                                  : 0U) 
                                                << 0xcU) 
                                               | ((0x7ff800U 
                                                   & (((IData)(vlSelf->__VdfgTmp_h7246bf09__0) 
                                                       << 0xbU) 
                                                      & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                         >> 9U))) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                                       ? 
                                                      (0x3ffU 
                                                       & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                          >> 0x15U))
                                                       : 0U) 
                                                     << 1U)))))),32);
    bufp->fullIData(oldp+50,((((- (IData)((IData)(vlSelf->__VdfgTmp_h872a8a4a__0))) 
                               << 0xcU) | ((((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                              ? (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                 >> 0x19U)
                                              : 0U) 
                                            << 5U) 
                                           | ((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                               ? (0x1fU 
                                                  & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                     >> 7U))
                                               : 0U)))),32);
    bufp->fullIData(oldp+51,((((- (IData)((IData)(vlSelf->__VdfgTmp_h872a8a4a__0))) 
                               << 0xdU) | (((IData)(vlSelf->__VdfgTmp_h872a8a4a__0) 
                                            << 0xcU) 
                                           | ((0xfffff800U 
                                               & (((IData)(vlSelf->__VdfgTmp_h7246bf09__0) 
                                                   << 0xbU) 
                                                  & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                     << 4U))) 
                                              | ((((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                                    ? 
                                                   (0x3fU 
                                                    & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                       >> 0x19U))
                                                    : 0U) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                                      ? 
                                                     (0xfU 
                                                      & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                         >> 8U))
                                                      : 0U) 
                                                    << 1U)))))),32);
    bufp->fullSData(oldp+52,(((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                               ? (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                  >> 0x14U) : 0U)),12);
    bufp->fullIData(oldp+53,((((IData)(vlSelf->__VdfgTmp_h872a8a4a__0) 
                               << 0x14U) | ((((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                               ? (0xffU 
                                                  & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                     >> 0xcU))
                                               : 0U) 
                                             << 0xcU) 
                                            | ((0x7ff800U 
                                                & (((IData)(vlSelf->__VdfgTmp_h7246bf09__0) 
                                                    << 0xbU) 
                                                   & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                      >> 9U))) 
                                               | (((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                                    ? 
                                                   (0x3ffU 
                                                    & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                       >> 0x15U))
                                                    : 0U) 
                                                  << 1U))))),21);
    bufp->fullSData(oldp+54,(((((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                 ? (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                    >> 0x19U) : 0U) 
                               << 5U) | ((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                          ? (0x1fU 
                                             & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                >> 7U))
                                          : 0U))),12);
    bufp->fullSData(oldp+55,((((IData)(vlSelf->__VdfgTmp_h872a8a4a__0) 
                               << 0xcU) | ((0xfffff800U 
                                            & (((IData)(vlSelf->__VdfgTmp_h7246bf09__0) 
                                                << 0xbU) 
                                               & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                  << 4U))) 
                                           | ((((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                                 ? 
                                                (0x3fU 
                                                 & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                    >> 0x19U))
                                                 : 0U) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__VdfgTmp_h7246bf09__0)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                      >> 8U))
                                                   : 0U) 
                                                 << 1U))))),13);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_24090015_top__DOT__dnpc),32);
    bufp->fullBit(oldp+57,(vlSelf->ysyx_24090015_top__DOT__ifu_respValid));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_24090015_top__DOT__pmem_work));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_24090015_top__DOT__pmem_ls));
    bufp->fullCData(oldp+60,(vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask),8);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24090015_top__DOT__pmem_addr),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_24090015_top__DOT__pmem_wdata),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24090015_top__DOT__imm),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24090015_top__DOT__rd_wdata),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24090015_top__DOT__src1),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24090015_top__DOT__src2),32);
    bufp->fullCData(oldp+67,(vlSelf->ysyx_24090015_top__DOT__rd),5);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_24090015_top__DOT__rs1),5);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_24090015_top__DOT__rs2),5);
    bufp->fullBit(oldp+70,(vlSelf->ysyx_24090015_top__DOT__wen));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_24090015_top__DOT__ren1));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_24090015_top__DOT__ren2));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_24090015_top__DOT__pwen));
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24090015_top__DOT__csr_rdata),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24090015_top__DOT__csr_wdata0),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24090015_top__DOT__csr_wdata1),32);
    bufp->fullBit(oldp+77,(vlSelf->ysyx_24090015_top__DOT__csr_wen));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_24090015_top__DOT__valid));
    bufp->fullSData(oldp+79,((0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)),12);
    bufp->fullCData(oldp+80,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen)
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
    bufp->fullCData(oldp+81,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen)
                               ? ((0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm))
                                   ? 3U : 0U) : 0U)),2);
    bufp->fullCData(oldp+82,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0),2);
    bufp->fullBit(oldp+83,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen) 
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
    bufp->fullBit(oldp+84,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen) 
                            & (0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)))));
    bufp->fullCData(oldp+85,(vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask),4);
    bufp->fullCData(oldp+86,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type),4);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI),32);
    bufp->fullBit(oldp+88,(vlSelf->clk));
    bufp->fullBit(oldp+89,(vlSelf->rst));
    bufp->fullIData(oldp+90,(vlSelf->pc),32);
    bufp->fullIData(oldp+91,(vlSelf->ifu_raddr),32);
    bufp->fullIData(oldp+92,(vlSelf->inst),32);
    bufp->fullBit(oldp+93,(vlSelf->fetch));
    bufp->fullBit(oldp+94,(vlSelf->flag));
    bufp->fullBit(oldp+95,(vlSelf->hit_good_or_bad));
    bufp->fullIData(oldp+96,(((IData)(4U) + vlSelf->ifu_raddr)),32);
    bufp->fullCData(oldp+97,(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state),2);
    bufp->fullIData(oldp+98,(0x20U),32);
    bufp->fullBit(oldp+99,(vlSelf->ysyx_24090015_top__DOT__ifu_reqvalid));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_24090015_top__DOT__lsu_reqvalid));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_24090015_top__DOT__lsu_respvalid));
    bufp->fullIData(oldp+102,(0xcU),32);
    bufp->fullIData(oldp+103,(2U),32);
    bufp->fullIData(oldp+104,(0U),32);
    bufp->fullIData(oldp+105,(1U),32);
    bufp->fullCData(oldp+106,(0xfU),4);
    bufp->fullCData(oldp+107,(3U),4);
    bufp->fullCData(oldp+108,(1U),4);
    bufp->fullIData(oldp+109,(3U),32);
    bufp->fullIData(oldp+110,(4U),32);
    bufp->fullIData(oldp+111,(5U),32);
    bufp->fullIData(oldp+112,(6U),32);
    bufp->fullIData(oldp+113,(7U),32);
    bufp->fullIData(oldp+114,(8U),32);
    bufp->fullIData(oldp+115,(9U),32);
    bufp->fullBit(oldp+116,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__i0__DOT__clk));
    bufp->fullIData(oldp+117,(0x15U),32);
    bufp->fullIData(oldp+118,(0xdU),32);
    bufp->fullIData(oldp+119,(0x80000000U),32);
}
