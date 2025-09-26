// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24090015_top__Syms.h"


void Vysyx_24090015_top___024root__trace_chg_sub_0(Vysyx_24090015_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_24090015_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_24090015_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090015_top___024root*>(voidSelf);
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24090015_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24090015_top___024root__trace_chg_sub_0(Vysyx_24090015_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_24090015_top__DOT__ebreak_ret),32);
        bufp->chgBit(oldp+1,((1U & vlSelf->ysyx_24090015_top__DOT____Vcellout__sram0__ifu_respvalid)));
        bufp->chgBit(oldp+2,(vlSelf->ysyx_24090015_top__DOT__ifu_reqvalid));
        bufp->chgIData(oldp+3,(vlSelf->ysyx_24090015_top__DOT__ifu_raddr),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_24090015_top__DOT__ifu_rdata),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_24090015_top__DOT__lsu_addr),32);
        bufp->chgBit(oldp+6,(vlSelf->ysyx_24090015_top__DOT__lsu_wen));
        bufp->chgIData(oldp+7,(vlSelf->ysyx_24090015_top__DOT__lsu_wdata),32);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_24090015_top__DOT__lsu_wmask),4);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_24090015_top__DOT__lsu_rdata),32);
        bufp->chgBit(oldp+10,((1U & vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__dnpc)));
        bufp->chgBit(oldp+11,(vlSelf->ysyx_24090015_top__DOT__lsu_reqValid));
        bufp->chgBit(oldp+12,(vlSelf->ysyx_24090015_top__DOT__lsu_respValid));
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24090015_top__DOT__imm),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24090015_top__DOT__rd_wdata),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_24090015_top__DOT__src1),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_24090015_top__DOT__src2),32);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_24090015_top__DOT__rd),5);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1),5);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs2),5);
        bufp->chgBit(oldp+20,(vlSelf->ysyx_24090015_top__DOT__LSU_work));
        bufp->chgBit(oldp+21,(vlSelf->ysyx_24090015_top__DOT__wen));
        bufp->chgBit(oldp+22,(vlSelf->ysyx_24090015_top__DOT__ren1));
        bufp->chgBit(oldp+23,(vlSelf->ysyx_24090015_top__DOT__ren2));
        bufp->chgBit(oldp+24,(vlSelf->ysyx_24090015_top__DOT__pwen));
        bufp->chgBit(oldp+25,(vlSelf->ysyx_24090015_top__DOT__pmem_ls));
        bufp->chgCData(oldp+26,(vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask),8);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_24090015_top__DOT__pmem_addr),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_24090015_top__DOT__pmem_wdata),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_24090015_top__DOT__csr_rdata),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_24090015_top__DOT__csr_wdata0),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_24090015_top__DOT__csr_wdata1),32);
        bufp->chgBit(oldp+32,(vlSelf->ysyx_24090015_top__DOT__csr_wen));
        bufp->chgBit(oldp+33,(vlSelf->ysyx_24090015_top__DOT__valid));
        bufp->chgSData(oldp+34,((0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)),12);
        bufp->chgCData(oldp+35,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen)
                                  ? ((0U == (0xfffU 
                                             & vlSelf->ysyx_24090015_top__DOT__imm))
                                      ? 2U : ((0x300U 
                                               == (0xfffU 
                                                   & vlSelf->ysyx_24090015_top__DOT__imm))
                                               ? 0U
                                               : ((0x302U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->ysyx_24090015_top__DOT__imm))
                                                   ? 0U
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->ysyx_24090015_top__DOT__imm))
                                                    ? 1U
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->ysyx_24090015_top__DOT__imm))
                                                     ? 2U
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->ysyx_24090015_top__DOT__imm))
                                                      ? 3U
                                                      : 0U))))))
                                  : 0U)),2);
        bufp->chgCData(oldp+36,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen)
                                  ? ((0U == (0xfffU 
                                             & vlSelf->ysyx_24090015_top__DOT__imm))
                                      ? 3U : 0U) : 0U)),2);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__csr_raddr0),2);
        bufp->chgBit(oldp+38,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen) 
                               & ((0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)) 
                                  | ((0x300U == (0xfffU 
                                                 & vlSelf->ysyx_24090015_top__DOT__imm)) 
                                     | ((0x302U != 
                                         (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)) 
                                        & ((0x305U 
                                            == (0xfffU 
                                                & vlSelf->ysyx_24090015_top__DOT__imm)) 
                                           | ((0x341U 
                                               == (0xfffU 
                                                   & vlSelf->ysyx_24090015_top__DOT__imm)) 
                                              | (0x342U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->ysyx_24090015_top__DOT__imm))))))))));
        bufp->chgBit(oldp+39,(((IData)(vlSelf->ysyx_24090015_top__DOT__csr_wen) 
                               & (0U == (0xfffU & vlSelf->ysyx_24090015_top__DOT__imm)))));
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[0]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[1]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[2]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_24090015_top__DOT__csr_regfiles_instance__DOT__CSRS[3]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__dnpc),32);
        bufp->chgCData(oldp+45,(vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__pmem_wmask),4);
        bufp->chgBit(oldp+46,(vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs1));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_24090015_top__DOT____Vcellout__idu0__rs2));
        bufp->chgCData(oldp+48,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__inst_type),4);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_24090015_top__DOT__idu0__DOT__temp_immI),32);
        bufp->chgIData(oldp+50,((0xfffff000U & vlSelf->ysyx_24090015_top__DOT__ifu_rdata)),32);
        bufp->chgIData(oldp+51,((((- (IData)((vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
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
        bufp->chgIData(oldp+52,((((- (IData)((vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+53,((((- (IData)((vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
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
        bufp->chgSData(oldp+54,((vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                 >> 0x14U)),12);
        bufp->chgIData(oldp+55,(((0x100000U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                               >> 0xbU)) 
                                 | ((0xff000U & vlSelf->ysyx_24090015_top__DOT__ifu_rdata) 
                                    | ((0x800U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                  >> 9U)) 
                                       | (0x7feU & 
                                          (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                           >> 0x14U)))))),21);
        bufp->chgSData(oldp+56,(((0xfe0U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                             >> 7U)))),12);
        bufp->chgSData(oldp+57,(((0x1000U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                             >> 0x13U)) 
                                 | ((0x800U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                               << 4U)) 
                                    | ((0x7e0U & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                  >> 0x14U)) 
                                       | (0x1eU & (vlSelf->ysyx_24090015_top__DOT__ifu_rdata 
                                                   >> 7U)))))),13);
        bufp->chgIData(oldp+58,((1U & vlSelf->ysyx_24090015_top__DOT____Vcellout__exu0__dnpc)),32);
        bufp->chgBit(oldp+59,(vlSelf->ysyx_24090015_top__DOT__ifu0__DOT__ifu_state));
        bufp->chgBit(oldp+60,(vlSelf->ysyx_24090015_top__DOT__lsu0__DOT__lsu_state));
        bufp->chgIData(oldp+61,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[0]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[1]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[2]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[3]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[4]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[5]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[6]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[7]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[8]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[9]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[10]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[11]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[12]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[13]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[14]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[15]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[16]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[17]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[18]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[19]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[20]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[21]),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[22]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[23]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[24]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[25]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[26]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[27]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[28]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[29]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[30]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_24090015_top__DOT__reg0__DOT__rf[31]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_24090015_top__DOT____Vcellout__sram0__ifu_respvalid),32);
        bufp->chgBit(oldp+94,(vlSelf->ysyx_24090015_top__DOT__sram0__DOT__sram_state));
    }
    bufp->chgBit(oldp+95,(vlSelf->clk));
    bufp->chgBit(oldp+96,(vlSelf->rst));
    bufp->chgIData(oldp+97,(vlSelf->pc),32);
    bufp->chgIData(oldp+98,(vlSelf->inst),32);
    bufp->chgBit(oldp+99,(vlSelf->flag));
    bufp->chgBit(oldp+100,(vlSelf->hit_good_or_bad));
    bufp->chgIData(oldp+101,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgBit(oldp+102,((1U & (~ (IData)(vlSelf->flag)))));
}

void Vysyx_24090015_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090015_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24090015_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090015_top___024root*>(voidSelf);
    Vysyx_24090015_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
