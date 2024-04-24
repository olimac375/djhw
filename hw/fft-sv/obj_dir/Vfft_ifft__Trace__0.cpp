// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfft_ifft__Syms.h"


void Vfft_ifft___024root__trace_chg_0_sub_0(Vfft_ifft___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfft_ifft___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfft_ifft___024root__trace_chg_0\n"); );
    // Init
    Vfft_ifft___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfft_ifft___024root*>(voidSelf);
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfft_ifft___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfft_ifft___024root__trace_chg_0_sub_0(Vfft_ifft___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfft_ifft___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgQData(oldp+0,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[0]),46);
        bufp->chgQData(oldp+2,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[1]),46);
        bufp->chgQData(oldp+4,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[2]),46);
        bufp->chgQData(oldp+6,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[3]),46);
        bufp->chgQData(oldp+8,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[4]),46);
        bufp->chgQData(oldp+10,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[5]),46);
        bufp->chgQData(oldp+12,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[6]),46);
        bufp->chgQData(oldp+14,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[7]),46);
        bufp->chgQData(oldp+16,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[0]),46);
        bufp->chgQData(oldp+18,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[1]),46);
        bufp->chgQData(oldp+20,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[2]),46);
        bufp->chgQData(oldp+22,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[3]),46);
        bufp->chgQData(oldp+24,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[4]),46);
        bufp->chgQData(oldp+26,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[5]),46);
        bufp->chgQData(oldp+28,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[6]),46);
        bufp->chgQData(oldp+30,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[7]),46);
        bufp->chgQData(oldp+32,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[8]),46);
        bufp->chgQData(oldp+34,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[9]),46);
        bufp->chgQData(oldp+36,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[10]),46);
        bufp->chgQData(oldp+38,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[11]),46);
        bufp->chgQData(oldp+40,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[12]),46);
        bufp->chgQData(oldp+42,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[13]),46);
        bufp->chgQData(oldp+44,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[14]),46);
        bufp->chgQData(oldp+46,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[15]),46);
        bufp->chgQData(oldp+48,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[0]),44);
        bufp->chgQData(oldp+50,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[1]),44);
        bufp->chgQData(oldp+52,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[2]),44);
        bufp->chgQData(oldp+54,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[3]),44);
        bufp->chgQData(oldp+56,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[4]),44);
        bufp->chgQData(oldp+58,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[5]),44);
        bufp->chgQData(oldp+60,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[6]),44);
        bufp->chgQData(oldp+62,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[7]),44);
        bufp->chgQData(oldp+64,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[8]),44);
        bufp->chgQData(oldp+66,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[9]),44);
        bufp->chgQData(oldp+68,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[10]),44);
        bufp->chgQData(oldp+70,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[11]),44);
        bufp->chgQData(oldp+72,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[12]),44);
        bufp->chgQData(oldp+74,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[13]),44);
        bufp->chgQData(oldp+76,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[14]),44);
        bufp->chgQData(oldp+78,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[15]),44);
        bufp->chgQData(oldp+80,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[16]),44);
        bufp->chgQData(oldp+82,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[17]),44);
        bufp->chgQData(oldp+84,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[18]),44);
        bufp->chgQData(oldp+86,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[19]),44);
        bufp->chgQData(oldp+88,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[20]),44);
        bufp->chgQData(oldp+90,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[21]),44);
        bufp->chgQData(oldp+92,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[22]),44);
        bufp->chgQData(oldp+94,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[23]),44);
        bufp->chgQData(oldp+96,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[24]),44);
        bufp->chgQData(oldp+98,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[25]),44);
        bufp->chgQData(oldp+100,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[26]),44);
        bufp->chgQData(oldp+102,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[27]),44);
        bufp->chgQData(oldp+104,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[28]),44);
        bufp->chgQData(oldp+106,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[29]),44);
        bufp->chgQData(oldp+108,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[30]),44);
        bufp->chgQData(oldp+110,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[31]),44);
        bufp->chgQData(oldp+112,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__cmem[0]),48);
        bufp->chgQData(oldp+114,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__cmem[1]),48);
        bufp->chgQData(oldp+116,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__cmem[2]),48);
        bufp->chgQData(oldp+118,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__cmem[3]),48);
        bufp->chgQData(oldp+120,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[0]),56);
        bufp->chgQData(oldp+122,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[1]),56);
        bufp->chgQData(oldp+124,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[2]),56);
        bufp->chgQData(oldp+126,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[3]),56);
        bufp->chgQData(oldp+128,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[4]),56);
        bufp->chgQData(oldp+130,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[5]),56);
        bufp->chgQData(oldp+132,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[6]),56);
        bufp->chgQData(oldp+134,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[7]),56);
        bufp->chgQData(oldp+136,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[0]),56);
        bufp->chgQData(oldp+138,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[1]),56);
        bufp->chgQData(oldp+140,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[2]),56);
        bufp->chgQData(oldp+142,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[3]),56);
        bufp->chgQData(oldp+144,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[4]),56);
        bufp->chgQData(oldp+146,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[5]),56);
        bufp->chgQData(oldp+148,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[6]),56);
        bufp->chgQData(oldp+150,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[7]),56);
        bufp->chgQData(oldp+152,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[8]),56);
        bufp->chgQData(oldp+154,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[9]),56);
        bufp->chgQData(oldp+156,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[10]),56);
        bufp->chgQData(oldp+158,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[11]),56);
        bufp->chgQData(oldp+160,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[12]),56);
        bufp->chgQData(oldp+162,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[13]),56);
        bufp->chgQData(oldp+164,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[14]),56);
        bufp->chgQData(oldp+166,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[15]),56);
        bufp->chgQData(oldp+168,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[0]),54);
        bufp->chgQData(oldp+170,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[1]),54);
        bufp->chgQData(oldp+172,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[2]),54);
        bufp->chgQData(oldp+174,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[3]),54);
        bufp->chgQData(oldp+176,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[4]),54);
        bufp->chgQData(oldp+178,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[5]),54);
        bufp->chgQData(oldp+180,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[6]),54);
        bufp->chgQData(oldp+182,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[7]),54);
        bufp->chgQData(oldp+184,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[8]),54);
        bufp->chgQData(oldp+186,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[9]),54);
        bufp->chgQData(oldp+188,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[10]),54);
        bufp->chgQData(oldp+190,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[11]),54);
        bufp->chgQData(oldp+192,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[12]),54);
        bufp->chgQData(oldp+194,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[13]),54);
        bufp->chgQData(oldp+196,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[14]),54);
        bufp->chgQData(oldp+198,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[15]),54);
        bufp->chgQData(oldp+200,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[16]),54);
        bufp->chgQData(oldp+202,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[17]),54);
        bufp->chgQData(oldp+204,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[18]),54);
        bufp->chgQData(oldp+206,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[19]),54);
        bufp->chgQData(oldp+208,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[20]),54);
        bufp->chgQData(oldp+210,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[21]),54);
        bufp->chgQData(oldp+212,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[22]),54);
        bufp->chgQData(oldp+214,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[23]),54);
        bufp->chgQData(oldp+216,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[24]),54);
        bufp->chgQData(oldp+218,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[25]),54);
        bufp->chgQData(oldp+220,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[26]),54);
        bufp->chgQData(oldp+222,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[27]),54);
        bufp->chgQData(oldp+224,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[28]),54);
        bufp->chgQData(oldp+226,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[29]),54);
        bufp->chgQData(oldp+228,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[30]),54);
        bufp->chgQData(oldp+230,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[31]),54);
        bufp->chgQData(oldp+232,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__cmem[0]),58);
        bufp->chgQData(oldp+234,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__cmem[1]),58);
        bufp->chgQData(oldp+236,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__cmem[2]),58);
        bufp->chgQData(oldp+238,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__cmem[3]),58);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+240,(vlSelf->fft_ifft__DOT__fft_o_sync));
        bufp->chgQData(oldp+241,(vlSelf->fft_ifft__DOT__fft_o_result),42);
        bufp->chgBit(oldp+243,(((IData)(vlSelf->fft_ifft__DOT__fft_o_sync) 
                                | (IData)(vlSelf->fft_ifft__DOT__r_syncd))));
        bufp->chgBit(oldp+244,(vlSelf->fft_ifft__DOT__r_syncd));
        bufp->chgBit(oldp+245,(vlSelf->fft_ifft__DOT__lpf_o_ce));
        bufp->chgBit(oldp+246,(vlSelf->fft_ifft__DOT__lpf_o_sync));
        bufp->chgQData(oldp+247,(vlSelf->fft_ifft__DOT__lpf_o_sample),42);
        bufp->chgBit(oldp+249,(vlSelf->fft_ifft__DOT__fft__DOT__br_sync));
        bufp->chgQData(oldp+250,(vlSelf->fft_ifft__DOT__fft__DOT__br_result),42);
        bufp->chgBit(oldp+252,(vlSelf->fft_ifft__DOT__fft__DOT__w_s512));
        bufp->chgQData(oldp+253,(vlSelf->fft_ifft__DOT__fft__DOT__w_d512),34);
        bufp->chgBit(oldp+255,(vlSelf->fft_ifft__DOT__fft__DOT__w_s256));
        bufp->chgQData(oldp+256,(vlSelf->fft_ifft__DOT__fft__DOT__w_d256),36);
        bufp->chgBit(oldp+258,(vlSelf->fft_ifft__DOT__fft__DOT__w_s128));
        bufp->chgQData(oldp+259,(vlSelf->fft_ifft__DOT__fft__DOT__w_d128),36);
        bufp->chgBit(oldp+261,(vlSelf->fft_ifft__DOT__fft__DOT__w_s64));
        bufp->chgQData(oldp+262,(vlSelf->fft_ifft__DOT__fft__DOT__w_d64),38);
        bufp->chgBit(oldp+264,(vlSelf->fft_ifft__DOT__fft__DOT__w_s32));
        bufp->chgQData(oldp+265,(vlSelf->fft_ifft__DOT__fft__DOT__w_d32),38);
        bufp->chgBit(oldp+267,(vlSelf->fft_ifft__DOT__fft__DOT__w_s16));
        bufp->chgQData(oldp+268,(vlSelf->fft_ifft__DOT__fft__DOT__w_d16),40);
        bufp->chgBit(oldp+270,(vlSelf->fft_ifft__DOT__fft__DOT__w_s8));
        bufp->chgQData(oldp+271,(vlSelf->fft_ifft__DOT__fft__DOT__w_d8),40);
        bufp->chgBit(oldp+273,(vlSelf->fft_ifft__DOT__fft__DOT__w_s4));
        bufp->chgQData(oldp+274,(vlSelf->fft_ifft__DOT__fft__DOT__w_d4),42);
        bufp->chgBit(oldp+276,(vlSelf->fft_ifft__DOT__fft__DOT__w_s2));
        bufp->chgQData(oldp+277,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__o_r)) 
                                   << 0x15U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__o_i)))),42);
        bufp->chgBit(oldp+279,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__r_br_started) 
                                | (IData)(vlSelf->fft_ifft__DOT__fft__DOT__w_s2))));
        bufp->chgBit(oldp+280,(vlSelf->fft_ifft__DOT__fft__DOT__r_br_started));
        bufp->chgSData(oldp+281,(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr),10);
        bufp->chgSData(oldp+282,(((0x200U & ((~ ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                 >> 9U)) 
                                             << 9U)) 
                                  | ((0x100U & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                << 8U)) 
                                     | ((0x80U & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                  << 6U)) 
                                        | ((0x40U & 
                                            ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                             << 4U)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                  << 2U)) 
                                              | ((0x10U 
                                                  & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                        >> 2U)) 
                                                    | ((4U 
                                                        & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                           >> 4U)) 
                                                       | ((2U 
                                                           & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                              >> 6U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                                >> 8U)))))))))))),10);
        bufp->chgBit(oldp+283,(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__in_reset));
        bufp->chgBit(oldp+284,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__wait_for_sync));
        bufp->chgQData(oldp+285,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ib_a),36);
        bufp->chgQData(oldp+287,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ib_b),36);
        bufp->chgQData(oldp+289,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ib_c),44);
        bufp->chgBit(oldp+291,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ib_sync));
        bufp->chgBit(oldp+292,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__b_started));
        bufp->chgBit(oldp+293,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ob_sync));
        bufp->chgQData(oldp+294,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
        bufp->chgQData(oldp+296,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
        bufp->chgCData(oldp+298,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__iaddr),7);
        bufp->chgCData(oldp+299,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__oaddr),7);
        bufp->chgCData(oldp+300,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__nxt_oaddr),6);
        bufp->chgQData(oldp+301,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__pre_ovalue),36);
        bufp->chgQData(oldp+303,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
        bufp->chgQData(oldp+305,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
        bufp->chgBit(oldp+307,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+308,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+309,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
        bufp->chgIData(oldp+311,((0x3ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x12U)))),18);
        bufp->chgIData(oldp+312,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
        bufp->chgIData(oldp+313,((0x3ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x12U)))),18);
        bufp->chgIData(oldp+314,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
        bufp->chgIData(oldp+315,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
        bufp->chgIData(oldp+316,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
        bufp->chgIData(oldp+317,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
        bufp->chgIData(oldp+318,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
        bufp->chgIData(oldp+319,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
        bufp->chgIData(oldp+320,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
        bufp->chgQData(oldp+321,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
        bufp->chgQData(oldp+323,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
        bufp->chgQData(oldp+325,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
        bufp->chgQData(oldp+327,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
        bufp->chgQData(oldp+329,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
        bufp->chgQData(oldp+331,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
        bufp->chgQData(oldp+333,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
        bufp->chgBit(oldp+335,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x26U)))));
        bufp->chgQData(oldp+336,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x12U)))))))) 
                                   << 0x27U) | (0x7fffffffffULL 
                                                & VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
        bufp->chgQData(oldp+338,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x25U)))))))) 
                                   << 0x27U) | ((QData)((IData)(
                                                                (0x7ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x13U))))) 
                                                << 0x14U))),41);
        bufp->chgQData(oldp+340,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
        bufp->chgQData(oldp+342,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
        bufp->chgQData(oldp+344,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
        bufp->chgIData(oldp+346,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
        bufp->chgIData(oldp+347,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
        bufp->chgIData(oldp+348,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
        bufp->chgIData(oldp+349,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
        bufp->chgIData(oldp+350,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
        bufp->chgIData(oldp+351,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
        bufp->chgIData(oldp+352,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
        bufp->chgIData(oldp+353,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
        bufp->chgIData(oldp+354,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
        bufp->chgIData(oldp+355,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
        bufp->chgIData(oldp+356,((0x3ffffU & (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                         >> 0x15U))))),18);
        bufp->chgIData(oldp+357,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x3ffffULL 
                                                         & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                            >> 0x15U)))))),18);
        bufp->chgBit(oldp+358,((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+359,((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x14U))))));
        bufp->chgIData(oldp+360,((0x3ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U)))),18);
        bufp->chgIData(oldp+361,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x14U))))),18);
        bufp->chgBit(oldp+362,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+363,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x13U)))));
        bufp->chgIData(oldp+364,((0x3ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U)))),18);
        bufp->chgIData(oldp+365,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x15U))))),18);
        bufp->chgBit(oldp+366,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+367,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+368,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
        bufp->chgIData(oldp+369,((0x3ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U)))),18);
        bufp->chgIData(oldp+370,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x15U))))),18);
        bufp->chgBit(oldp+371,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+372,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+373,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
        bufp->chgBit(oldp+374,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__wait_for_sync));
        bufp->chgQData(oldp+375,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ib_a),38);
        bufp->chgQData(oldp+377,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ib_b),38);
        bufp->chgQData(oldp+379,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ib_c),46);
        bufp->chgBit(oldp+381,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ib_sync));
        bufp->chgBit(oldp+382,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__b_started));
        bufp->chgBit(oldp+383,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ob_sync));
        bufp->chgQData(oldp+384,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x14U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
        bufp->chgQData(oldp+386,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x14U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
        bufp->chgCData(oldp+388,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__iaddr),4);
        bufp->chgQData(oldp+389,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[0]),38);
        bufp->chgQData(oldp+391,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[1]),38);
        bufp->chgQData(oldp+393,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[2]),38);
        bufp->chgQData(oldp+395,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[3]),38);
        bufp->chgQData(oldp+397,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[4]),38);
        bufp->chgQData(oldp+399,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[5]),38);
        bufp->chgQData(oldp+401,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[6]),38);
        bufp->chgQData(oldp+403,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[7]),38);
        bufp->chgCData(oldp+405,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__oaddr),4);
        bufp->chgQData(oldp+406,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[0]),40);
        bufp->chgQData(oldp+408,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[1]),40);
        bufp->chgQData(oldp+410,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[2]),40);
        bufp->chgQData(oldp+412,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[3]),40);
        bufp->chgQData(oldp+414,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[4]),40);
        bufp->chgQData(oldp+416,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[5]),40);
        bufp->chgQData(oldp+418,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[6]),40);
        bufp->chgQData(oldp+420,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[7]),40);
        bufp->chgCData(oldp+422,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__nxt_oaddr),3);
        bufp->chgQData(oldp+423,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__pre_ovalue),40);
        bufp->chgQData(oldp+425,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
        bufp->chgQData(oldp+427,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
        bufp->chgBit(oldp+429,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+430,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+431,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
        bufp->chgIData(oldp+433,((0x7ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+434,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
        bufp->chgIData(oldp+435,((0x7ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+436,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
        bufp->chgIData(oldp+437,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
        bufp->chgIData(oldp+438,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
        bufp->chgIData(oldp+439,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
        bufp->chgIData(oldp+440,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
        bufp->chgIData(oldp+441,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
        bufp->chgIData(oldp+442,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
        bufp->chgQData(oldp+443,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
        bufp->chgQData(oldp+445,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
        bufp->chgQData(oldp+447,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
        bufp->chgQData(oldp+449,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
        bufp->chgQData(oldp+451,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
        bufp->chgQData(oldp+453,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
        bufp->chgQData(oldp+455,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
        bufp->chgBit(oldp+457,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x28U)))));
        bufp->chgQData(oldp+458,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x13U)))))))) 
                                   << 0x29U) | (0x1ffffffffffULL 
                                                & VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
        bufp->chgQData(oldp+460,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x27U)))))))) 
                                   << 0x29U) | ((QData)((IData)(
                                                                (0xfffffU 
                                                                 & (IData)(
                                                                           (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x14U))))) 
                                                << 0x15U))),43);
        bufp->chgQData(oldp+462,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
        bufp->chgQData(oldp+464,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
        bufp->chgQData(oldp+466,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
        bufp->chgIData(oldp+468,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
        bufp->chgIData(oldp+469,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
        bufp->chgIData(oldp+470,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
        bufp->chgIData(oldp+471,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
        bufp->chgIData(oldp+472,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
        bufp->chgIData(oldp+473,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
        bufp->chgIData(oldp+474,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
        bufp->chgIData(oldp+475,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
        bufp->chgIData(oldp+476,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
        bufp->chgIData(oldp+477,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
        bufp->chgIData(oldp+478,((0xfffffU & (IData)(
                                                     (0xfffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x15U))))),20);
        bufp->chgIData(oldp+479,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0xfffffULL 
                                                         & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                            >> 0x15U)))))),20);
        bufp->chgBit(oldp+480,((1U & (IData)((0xfffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+481,((1U & (IData)((0x1fffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x14U))))));
        bufp->chgIData(oldp+482,((0xfffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U)))),20);
        bufp->chgIData(oldp+483,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x14U))))),20);
        bufp->chgBit(oldp+484,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+485,((0xfffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U)))),20);
        bufp->chgIData(oldp+486,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x15U))))),20);
        bufp->chgBit(oldp+487,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+488,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+489,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
        bufp->chgIData(oldp+490,((0xfffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U)))),20);
        bufp->chgIData(oldp+491,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x15U))))),20);
        bufp->chgBit(oldp+492,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+493,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+494,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
        bufp->chgIData(oldp+495,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__m_r),21);
        bufp->chgIData(oldp+496,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__m_i),21);
        bufp->chgIData(oldp+497,((0x1fffffU & (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__w_d4 
                                                       >> 0x15U)))),21);
        bufp->chgIData(oldp+498,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__w_d4))),21);
        bufp->chgIData(oldp+499,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_r),22);
        bufp->chgIData(oldp+500,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_i),22);
        bufp->chgIData(oldp+501,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__sto_r),22);
        bufp->chgIData(oldp+502,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__sto_i),22);
        bufp->chgBit(oldp+503,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__wait_for_sync));
        bufp->chgBit(oldp+504,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__stage));
        bufp->chgCData(oldp+505,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__sync_pipe),2);
        bufp->chgIData(oldp+506,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__o_r),21);
        bufp->chgIData(oldp+507,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__o_i),21);
        bufp->chgIData(oldp+508,((0x1fffffU & (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_i 
                                               >> 1U))),21);
        bufp->chgIData(oldp+509,((0x1fffffU & ((IData)(1U) 
                                               + (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_i 
                                                  >> 1U)))),21);
        bufp->chgBit(oldp+510,((1U & (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_i 
                                      >> 1U))));
        bufp->chgBit(oldp+511,((1U & vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_i)));
        bufp->chgIData(oldp+512,((0x1fffffU & (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_r 
                                               >> 1U))),21);
        bufp->chgIData(oldp+513,((0x1fffffU & ((IData)(1U) 
                                               + (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_r 
                                                  >> 1U)))),21);
        bufp->chgBit(oldp+514,((1U & (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_r 
                                      >> 1U))));
        bufp->chgBit(oldp+515,((1U & vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_r)));
        bufp->chgBit(oldp+516,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__wait_for_sync));
        bufp->chgQData(oldp+517,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ib_a),34);
        bufp->chgQData(oldp+519,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ib_b),34);
        bufp->chgQData(oldp+521,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ib_c),42);
        bufp->chgBit(oldp+523,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ib_sync));
        bufp->chgBit(oldp+524,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__b_started));
        bufp->chgBit(oldp+525,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ob_sync));
        bufp->chgQData(oldp+526,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
        bufp->chgQData(oldp+528,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
        bufp->chgCData(oldp+530,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__iaddr),8);
        bufp->chgCData(oldp+531,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__oaddr),8);
        bufp->chgCData(oldp+532,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__nxt_oaddr),7);
        bufp->chgQData(oldp+533,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__pre_ovalue),36);
        bufp->chgQData(oldp+535,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left),34);
        bufp->chgQData(oldp+537,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right),34);
        bufp->chgBit(oldp+539,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+540,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+541,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef),42);
        bufp->chgIData(oldp+543,((0x1ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x11U)))),17);
        bufp->chgIData(oldp+544,((0x1ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))),17);
        bufp->chgIData(oldp+545,((0x1ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x11U)))),17);
        bufp->chgIData(oldp+546,((0x1ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right))),17);
        bufp->chgIData(oldp+547,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),21);
        bufp->chgIData(oldp+548,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),21);
        bufp->chgIData(oldp+549,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),18);
        bufp->chgIData(oldp+550,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),18);
        bufp->chgIData(oldp+551,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),18);
        bufp->chgIData(oldp+552,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),18);
        bufp->chgQData(oldp+553,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv),37);
        bufp->chgQData(oldp+555,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv),37);
        bufp->chgQData(oldp+557,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),39);
        bufp->chgQData(oldp+559,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),39);
        bufp->chgQData(oldp+561,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),41);
        bufp->chgQData(oldp+563,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one),41);
        bufp->chgQData(oldp+565,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two),41);
        bufp->chgBit(oldp+567,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x24U)))));
        bufp->chgQData(oldp+568,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x11U)))))))) 
                                   << 0x25U) | (0x1fffffffffULL 
                                                & VL_SHIFTL_QQI(37,37,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U)))),39);
        bufp->chgQData(oldp+570,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x23U)))))))) 
                                   << 0x25U) | ((QData)((IData)(
                                                                (0x3ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x12U))))) 
                                                << 0x13U))),39);
        bufp->chgQData(oldp+572,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved),37);
        bufp->chgQData(oldp+574,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),41);
        bufp->chgQData(oldp+576,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),41);
        bufp->chgIData(oldp+578,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
        bufp->chgIData(oldp+579,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
        bufp->chgIData(oldp+580,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
        bufp->chgIData(oldp+581,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
        bufp->chgIData(oldp+582,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),21);
        bufp->chgIData(oldp+583,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),21);
        bufp->chgIData(oldp+584,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),18);
        bufp->chgIData(oldp+585,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),18);
        bufp->chgIData(oldp+586,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),22);
        bufp->chgIData(oldp+587,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),19);
        bufp->chgIData(oldp+588,((0x3ffffU & (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(37,37,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                         >> 0x13U))))),18);
        bufp->chgIData(oldp+589,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x3ffffULL 
                                                         & (VL_SHIFTL_QQI(37,37,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                            >> 0x13U)))))),18);
        bufp->chgBit(oldp+590,((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(37,37,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+591,((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(37,37,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                 >> 0x12U))))));
        bufp->chgIData(oldp+592,((0x3ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x12U)))),18);
        bufp->chgIData(oldp+593,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x12U))))),18);
        bufp->chgBit(oldp+594,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x12U)))));
        bufp->chgIData(oldp+595,((0x3ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x13U)))),18);
        bufp->chgIData(oldp+596,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x13U))))),18);
        bufp->chgBit(oldp+597,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+598,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x12U)))));
        bufp->chgIData(oldp+599,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),18);
        bufp->chgIData(oldp+600,((0x3ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x13U)))),18);
        bufp->chgIData(oldp+601,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x13U))))),18);
        bufp->chgBit(oldp+602,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+603,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x12U)))));
        bufp->chgIData(oldp+604,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),18);
        bufp->chgBit(oldp+605,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__wait_for_sync));
        bufp->chgQData(oldp+606,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ib_a),38);
        bufp->chgQData(oldp+608,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ib_b),38);
        bufp->chgQData(oldp+610,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ib_c),46);
        bufp->chgBit(oldp+612,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ib_sync));
        bufp->chgBit(oldp+613,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__b_started));
        bufp->chgBit(oldp+614,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ob_sync));
        bufp->chgQData(oldp+615,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
        bufp->chgQData(oldp+617,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
        bufp->chgCData(oldp+619,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__iaddr),5);
        bufp->chgQData(oldp+620,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[0]),38);
        bufp->chgQData(oldp+622,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[1]),38);
        bufp->chgQData(oldp+624,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[2]),38);
        bufp->chgQData(oldp+626,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[3]),38);
        bufp->chgQData(oldp+628,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[4]),38);
        bufp->chgQData(oldp+630,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[5]),38);
        bufp->chgQData(oldp+632,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[6]),38);
        bufp->chgQData(oldp+634,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[7]),38);
        bufp->chgQData(oldp+636,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[8]),38);
        bufp->chgQData(oldp+638,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[9]),38);
        bufp->chgQData(oldp+640,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[10]),38);
        bufp->chgQData(oldp+642,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[11]),38);
        bufp->chgQData(oldp+644,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[12]),38);
        bufp->chgQData(oldp+646,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[13]),38);
        bufp->chgQData(oldp+648,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[14]),38);
        bufp->chgQData(oldp+650,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[15]),38);
        bufp->chgCData(oldp+652,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__oaddr),5);
        bufp->chgQData(oldp+653,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[0]),38);
        bufp->chgQData(oldp+655,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[1]),38);
        bufp->chgQData(oldp+657,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[2]),38);
        bufp->chgQData(oldp+659,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[3]),38);
        bufp->chgQData(oldp+661,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[4]),38);
        bufp->chgQData(oldp+663,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[5]),38);
        bufp->chgQData(oldp+665,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[6]),38);
        bufp->chgQData(oldp+667,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[7]),38);
        bufp->chgQData(oldp+669,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[8]),38);
        bufp->chgQData(oldp+671,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[9]),38);
        bufp->chgQData(oldp+673,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[10]),38);
        bufp->chgQData(oldp+675,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[11]),38);
        bufp->chgQData(oldp+677,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[12]),38);
        bufp->chgQData(oldp+679,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[13]),38);
        bufp->chgQData(oldp+681,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[14]),38);
        bufp->chgQData(oldp+683,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[15]),38);
        bufp->chgCData(oldp+685,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__nxt_oaddr),4);
        bufp->chgQData(oldp+686,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__pre_ovalue),38);
        bufp->chgQData(oldp+688,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
        bufp->chgQData(oldp+690,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
        bufp->chgBit(oldp+692,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+693,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+694,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
        bufp->chgIData(oldp+696,((0x7ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+697,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
        bufp->chgIData(oldp+698,((0x7ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+699,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
        bufp->chgIData(oldp+700,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
        bufp->chgIData(oldp+701,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
        bufp->chgIData(oldp+702,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
        bufp->chgIData(oldp+703,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
        bufp->chgIData(oldp+704,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
        bufp->chgIData(oldp+705,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
        bufp->chgQData(oldp+706,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
        bufp->chgQData(oldp+708,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
        bufp->chgQData(oldp+710,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
        bufp->chgQData(oldp+712,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
        bufp->chgQData(oldp+714,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
        bufp->chgQData(oldp+716,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
        bufp->chgQData(oldp+718,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
        bufp->chgBit(oldp+720,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x28U)))));
        bufp->chgQData(oldp+721,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x13U)))))))) 
                                   << 0x29U) | (0x1ffffffffffULL 
                                                & VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
        bufp->chgQData(oldp+723,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x27U)))))))) 
                                   << 0x29U) | ((QData)((IData)(
                                                                (0xfffffU 
                                                                 & (IData)(
                                                                           (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x14U))))) 
                                                << 0x15U))),43);
        bufp->chgQData(oldp+725,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
        bufp->chgQData(oldp+727,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
        bufp->chgQData(oldp+729,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
        bufp->chgIData(oldp+731,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
        bufp->chgIData(oldp+732,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
        bufp->chgIData(oldp+733,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
        bufp->chgIData(oldp+734,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
        bufp->chgIData(oldp+735,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
        bufp->chgIData(oldp+736,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
        bufp->chgIData(oldp+737,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
        bufp->chgIData(oldp+738,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
        bufp->chgIData(oldp+739,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
        bufp->chgIData(oldp+740,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
        bufp->chgIData(oldp+741,((0x7ffffU & (IData)(
                                                     (0x7ffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x16U))))),19);
        bufp->chgIData(oldp+742,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x7ffffULL 
                                                         & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                            >> 0x16U)))))),19);
        bufp->chgBit(oldp+743,((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+744,((1U & (IData)((0xfffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x15U))))));
        bufp->chgIData(oldp+745,((0x7ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x15U)))),19);
        bufp->chgIData(oldp+746,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x15U))))),19);
        bufp->chgBit(oldp+747,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+748,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+749,((0x7ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x16U)))),19);
        bufp->chgIData(oldp+750,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x16U))))),19);
        bufp->chgBit(oldp+751,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+752,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x15U)))));
        bufp->chgIData(oldp+753,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),21);
        bufp->chgIData(oldp+754,((0x7ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x16U)))),19);
        bufp->chgIData(oldp+755,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x16U))))),19);
        bufp->chgBit(oldp+756,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+757,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x15U)))));
        bufp->chgIData(oldp+758,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),21);
        bufp->chgBit(oldp+759,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__wait_for_sync));
        bufp->chgCData(oldp+760,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__pipeline),3);
        bufp->chgIData(oldp+761,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__sum_r),21);
        bufp->chgIData(oldp+762,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__sum_i),21);
        bufp->chgIData(oldp+763,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__diff_r),21);
        bufp->chgIData(oldp+764,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__diff_i),21);
        bufp->chgQData(oldp+765,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__ob_a),42);
        bufp->chgQData(oldp+767,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__ob_b_r)) 
                                   << 0x15U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__ob_b_i)))),42);
        bufp->chgIData(oldp+769,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__ob_b_r),21);
        bufp->chgIData(oldp+770,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__ob_b_i),21);
        bufp->chgSData(oldp+771,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__iaddr),9);
        bufp->chgQData(oldp+772,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__imem[0]),40);
        bufp->chgQData(oldp+774,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__imem[1]),40);
        bufp->chgIData(oldp+776,((0xfffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__imem
                                                      [1U] 
                                                      >> 0x14U)))),20);
        bufp->chgIData(oldp+777,((0xfffffU & (IData)(
                                                     vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__imem
                                                     [1U]))),20);
        bufp->chgIData(oldp+778,((0xfffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__w_d8 
                                                      >> 0x14U)))),20);
        bufp->chgIData(oldp+779,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__w_d8))),20);
        bufp->chgQData(oldp+780,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__omem[0]),42);
        bufp->chgQData(oldp+782,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__omem[1]),42);
        bufp->chgIData(oldp+784,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_sum_r),21);
        bufp->chgIData(oldp+785,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_sum_i),21);
        bufp->chgIData(oldp+786,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_diff_r),21);
        bufp->chgIData(oldp+787,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_diff_i),21);
        bufp->chgIData(oldp+788,((0x1fffffU & (- vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_diff_r))),21);
        bufp->chgIData(oldp+789,((0x1fffffU & (- vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_diff_i))),21);
        bufp->chgBit(oldp+790,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__wait_for_sync));
        bufp->chgIData(oldp+791,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ib_a),32);
        bufp->chgIData(oldp+792,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ib_b),32);
        bufp->chgQData(oldp+793,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ib_c),40);
        bufp->chgBit(oldp+795,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ib_sync));
        bufp->chgBit(oldp+796,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__b_started));
        bufp->chgBit(oldp+797,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ob_sync));
        bufp->chgQData(oldp+798,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x11U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),34);
        bufp->chgQData(oldp+800,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x11U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),34);
        bufp->chgSData(oldp+802,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__iaddr),9);
        bufp->chgSData(oldp+803,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__oaddr),9);
        bufp->chgCData(oldp+804,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__nxt_oaddr),8);
        bufp->chgQData(oldp+805,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__pre_ovalue),34);
        bufp->chgIData(oldp+807,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left),32);
        bufp->chgIData(oldp+808,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right),32);
        bufp->chgBit(oldp+809,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+810,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+811,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef),40);
        bufp->chgSData(oldp+813,((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+814,((0xffffU & vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left)),16);
        bufp->chgSData(oldp+815,((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+816,((0xffffU & vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right)),16);
        bufp->chgIData(oldp+817,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),20);
        bufp->chgIData(oldp+818,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),20);
        bufp->chgIData(oldp+819,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),17);
        bufp->chgIData(oldp+820,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),17);
        bufp->chgIData(oldp+821,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),17);
        bufp->chgIData(oldp+822,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),17);
        bufp->chgQData(oldp+823,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv),35);
        bufp->chgQData(oldp+825,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv),35);
        bufp->chgQData(oldp+827,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),37);
        bufp->chgQData(oldp+829,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),37);
        bufp->chgQData(oldp+831,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),39);
        bufp->chgQData(oldp+833,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one),39);
        bufp->chgQData(oldp+835,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two),39);
        bufp->chgBit(oldp+837,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x22U)))));
        bufp->chgQData(oldp+838,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x10U)))))))) 
                                   << 0x23U) | (0x7ffffffffULL 
                                                & VL_SHIFTL_QQI(35,35,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U)))),37);
        bufp->chgQData(oldp+840,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x21U)))))))) 
                                   << 0x23U) | ((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x11U))))) 
                                                << 0x12U))),37);
        bufp->chgQData(oldp+842,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved),35);
        bufp->chgQData(oldp+844,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),39);
        bufp->chgQData(oldp+846,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),39);
        bufp->chgIData(oldp+848,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),17);
        bufp->chgIData(oldp+849,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),17);
        bufp->chgIData(oldp+850,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),17);
        bufp->chgIData(oldp+851,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),17);
        bufp->chgIData(oldp+852,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),20);
        bufp->chgIData(oldp+853,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),20);
        bufp->chgIData(oldp+854,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),17);
        bufp->chgIData(oldp+855,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),17);
        bufp->chgIData(oldp+856,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),21);
        bufp->chgIData(oldp+857,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),18);
        bufp->chgIData(oldp+858,((0x1ffffU & (IData)(
                                                     (0x1ffffULL 
                                                      & (VL_SHIFTL_QQI(35,35,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                         >> 0x12U))))),17);
        bufp->chgIData(oldp+859,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x1ffffULL 
                                                         & (VL_SHIFTL_QQI(35,35,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                            >> 0x12U)))))),17);
        bufp->chgBit(oldp+860,((1U & (IData)((0x1ffffULL 
                                              & (VL_SHIFTL_QQI(35,35,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+861,((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(35,35,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                 >> 0x11U))))));
        bufp->chgIData(oldp+862,((0x1ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x11U)))),17);
        bufp->chgIData(oldp+863,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x11U))))),17);
        bufp->chgBit(oldp+864,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x11U)))));
        bufp->chgIData(oldp+865,((0x1ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x12U)))),17);
        bufp->chgIData(oldp+866,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x12U))))),17);
        bufp->chgBit(oldp+867,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+868,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x11U)))));
        bufp->chgIData(oldp+869,((0x1ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),17);
        bufp->chgIData(oldp+870,((0x1ffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x12U)))),17);
        bufp->chgIData(oldp+871,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x12U))))),17);
        bufp->chgBit(oldp+872,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+873,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x11U)))));
        bufp->chgIData(oldp+874,((0x1ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),17);
        bufp->chgBit(oldp+875,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__wait_for_sync));
        bufp->chgQData(oldp+876,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ib_a),36);
        bufp->chgQData(oldp+878,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ib_b),36);
        bufp->chgQData(oldp+880,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ib_c),44);
        bufp->chgBit(oldp+882,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ib_sync));
        bufp->chgBit(oldp+883,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__b_started));
        bufp->chgBit(oldp+884,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ob_sync));
        bufp->chgQData(oldp+885,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
        bufp->chgQData(oldp+887,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
        bufp->chgCData(oldp+889,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__iaddr),6);
        bufp->chgQData(oldp+890,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[0]),36);
        bufp->chgQData(oldp+892,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[1]),36);
        bufp->chgQData(oldp+894,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[2]),36);
        bufp->chgQData(oldp+896,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[3]),36);
        bufp->chgQData(oldp+898,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[4]),36);
        bufp->chgQData(oldp+900,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[5]),36);
        bufp->chgQData(oldp+902,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[6]),36);
        bufp->chgQData(oldp+904,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[7]),36);
        bufp->chgQData(oldp+906,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[8]),36);
        bufp->chgQData(oldp+908,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[9]),36);
        bufp->chgQData(oldp+910,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[10]),36);
        bufp->chgQData(oldp+912,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[11]),36);
        bufp->chgQData(oldp+914,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[12]),36);
        bufp->chgQData(oldp+916,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[13]),36);
        bufp->chgQData(oldp+918,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[14]),36);
        bufp->chgQData(oldp+920,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[15]),36);
        bufp->chgQData(oldp+922,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[16]),36);
        bufp->chgQData(oldp+924,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[17]),36);
        bufp->chgQData(oldp+926,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[18]),36);
        bufp->chgQData(oldp+928,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[19]),36);
        bufp->chgQData(oldp+930,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[20]),36);
        bufp->chgQData(oldp+932,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[21]),36);
        bufp->chgQData(oldp+934,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[22]),36);
        bufp->chgQData(oldp+936,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[23]),36);
        bufp->chgQData(oldp+938,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[24]),36);
        bufp->chgQData(oldp+940,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[25]),36);
        bufp->chgQData(oldp+942,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[26]),36);
        bufp->chgQData(oldp+944,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[27]),36);
        bufp->chgQData(oldp+946,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[28]),36);
        bufp->chgQData(oldp+948,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[29]),36);
        bufp->chgQData(oldp+950,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[30]),36);
        bufp->chgQData(oldp+952,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[31]),36);
        bufp->chgCData(oldp+954,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__oaddr),6);
        bufp->chgQData(oldp+955,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[0]),38);
        bufp->chgQData(oldp+957,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[1]),38);
        bufp->chgQData(oldp+959,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[2]),38);
        bufp->chgQData(oldp+961,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[3]),38);
        bufp->chgQData(oldp+963,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[4]),38);
        bufp->chgQData(oldp+965,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[5]),38);
        bufp->chgQData(oldp+967,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[6]),38);
        bufp->chgQData(oldp+969,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[7]),38);
        bufp->chgQData(oldp+971,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[8]),38);
        bufp->chgQData(oldp+973,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[9]),38);
        bufp->chgQData(oldp+975,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[10]),38);
        bufp->chgQData(oldp+977,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[11]),38);
        bufp->chgQData(oldp+979,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[12]),38);
        bufp->chgQData(oldp+981,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[13]),38);
        bufp->chgQData(oldp+983,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[14]),38);
        bufp->chgQData(oldp+985,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[15]),38);
        bufp->chgQData(oldp+987,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[16]),38);
        bufp->chgQData(oldp+989,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[17]),38);
        bufp->chgQData(oldp+991,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[18]),38);
        bufp->chgQData(oldp+993,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[19]),38);
        bufp->chgQData(oldp+995,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[20]),38);
        bufp->chgQData(oldp+997,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[21]),38);
        bufp->chgQData(oldp+999,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[22]),38);
        bufp->chgQData(oldp+1001,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[23]),38);
        bufp->chgQData(oldp+1003,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[24]),38);
        bufp->chgQData(oldp+1005,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[25]),38);
        bufp->chgQData(oldp+1007,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[26]),38);
        bufp->chgQData(oldp+1009,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[27]),38);
        bufp->chgQData(oldp+1011,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[28]),38);
        bufp->chgQData(oldp+1013,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[29]),38);
        bufp->chgQData(oldp+1015,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[30]),38);
        bufp->chgQData(oldp+1017,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[31]),38);
        bufp->chgCData(oldp+1019,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__nxt_oaddr),5);
        bufp->chgQData(oldp+1020,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__pre_ovalue),38);
        bufp->chgQData(oldp+1022,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
        bufp->chgQData(oldp+1024,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
        bufp->chgBit(oldp+1026,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1027,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1028,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
        bufp->chgIData(oldp+1030,((0x3ffffU & (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                       >> 0x12U)))),18);
        bufp->chgIData(oldp+1031,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
        bufp->chgIData(oldp+1032,((0x3ffffU & (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                       >> 0x12U)))),18);
        bufp->chgIData(oldp+1033,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
        bufp->chgIData(oldp+1034,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
        bufp->chgIData(oldp+1035,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
        bufp->chgIData(oldp+1036,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
        bufp->chgIData(oldp+1037,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
        bufp->chgIData(oldp+1038,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
        bufp->chgIData(oldp+1039,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
        bufp->chgQData(oldp+1040,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
        bufp->chgQData(oldp+1042,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
        bufp->chgQData(oldp+1044,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
        bufp->chgQData(oldp+1046,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
        bufp->chgQData(oldp+1048,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
        bufp->chgQData(oldp+1050,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
        bufp->chgQData(oldp+1052,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
        bufp->chgBit(oldp+1054,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x26U)))));
        bufp->chgQData(oldp+1055,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x12U)))))))) 
                                    << 0x27U) | (0x7fffffffffULL 
                                                 & VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
        bufp->chgQData(oldp+1057,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x25U)))))))) 
                                    << 0x27U) | ((QData)((IData)(
                                                                 (0x7ffffU 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x13U))))) 
                                                 << 0x14U))),41);
        bufp->chgQData(oldp+1059,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
        bufp->chgQData(oldp+1061,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
        bufp->chgQData(oldp+1063,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
        bufp->chgIData(oldp+1065,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
        bufp->chgIData(oldp+1066,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
        bufp->chgIData(oldp+1067,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
        bufp->chgIData(oldp+1068,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
        bufp->chgIData(oldp+1069,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
        bufp->chgIData(oldp+1070,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
        bufp->chgIData(oldp+1071,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
        bufp->chgIData(oldp+1072,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
        bufp->chgIData(oldp+1073,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
        bufp->chgIData(oldp+1074,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
        bufp->chgIData(oldp+1075,((0x7ffffU & (IData)(
                                                      (0x7ffffULL 
                                                       & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                          >> 0x14U))))),19);
        bufp->chgIData(oldp+1076,((0x7ffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (0x7ffffULL 
                                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                             >> 0x14U)))))),19);
        bufp->chgBit(oldp+1077,((1U & (IData)((0x7ffffULL 
                                               & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1078,((1U & (IData)((0xfffffULL 
                                               & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                  >> 0x13U))))));
        bufp->chgIData(oldp+1079,((0x7ffffU & (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                       >> 0x13U)))),19);
        bufp->chgIData(oldp+1080,((0x7ffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                          >> 0x13U))))),19);
        bufp->chgBit(oldp+1081,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x13U)))));
        bufp->chgIData(oldp+1082,((0x7ffffU & (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                       >> 0x14U)))),19);
        bufp->chgIData(oldp+1083,((0x7ffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x14U))))),19);
        bufp->chgBit(oldp+1084,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1085,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x13U)))));
        bufp->chgIData(oldp+1086,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),19);
        bufp->chgIData(oldp+1087,((0x7ffffU & (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                       >> 0x14U)))),19);
        bufp->chgIData(oldp+1088,((0x7ffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x14U))))),19);
        bufp->chgBit(oldp+1089,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1090,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x13U)))));
        bufp->chgIData(oldp+1091,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),19);
        bufp->chgBit(oldp+1092,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__wait_for_sync));
        bufp->chgQData(oldp+1093,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ib_a),40);
        bufp->chgQData(oldp+1095,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ib_b),40);
        bufp->chgQData(oldp+1097,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ib_c),48);
        bufp->chgBit(oldp+1099,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ib_sync));
        bufp->chgBit(oldp+1100,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__b_started));
        bufp->chgBit(oldp+1101,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ob_sync));
        bufp->chgQData(oldp+1102,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x14U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
        bufp->chgQData(oldp+1104,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x14U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
        bufp->chgCData(oldp+1106,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__iaddr),3);
        bufp->chgQData(oldp+1107,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__imem[0]),40);
        bufp->chgQData(oldp+1109,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__imem[1]),40);
        bufp->chgQData(oldp+1111,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__imem[2]),40);
        bufp->chgQData(oldp+1113,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__imem[3]),40);
        bufp->chgCData(oldp+1115,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__oaddr),3);
        bufp->chgQData(oldp+1116,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__omem[0]),40);
        bufp->chgQData(oldp+1118,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__omem[1]),40);
        bufp->chgQData(oldp+1120,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__omem[2]),40);
        bufp->chgQData(oldp+1122,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__omem[3]),40);
        bufp->chgCData(oldp+1124,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__nxt_oaddr),2);
        bufp->chgQData(oldp+1125,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__pre_ovalue),40);
        bufp->chgQData(oldp+1127,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left),40);
        bufp->chgQData(oldp+1129,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right),40);
        bufp->chgBit(oldp+1131,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1132,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1133,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef),48);
        bufp->chgIData(oldp+1135,((0xfffffU & (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                       >> 0x14U)))),20);
        bufp->chgIData(oldp+1136,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))),20);
        bufp->chgIData(oldp+1137,((0xfffffU & (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                       >> 0x14U)))),20);
        bufp->chgIData(oldp+1138,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right))),20);
        bufp->chgIData(oldp+1139,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),24);
        bufp->chgIData(oldp+1140,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),24);
        bufp->chgIData(oldp+1141,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),21);
        bufp->chgIData(oldp+1142,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),21);
        bufp->chgIData(oldp+1143,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),21);
        bufp->chgIData(oldp+1144,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),21);
        bufp->chgQData(oldp+1145,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv),43);
        bufp->chgQData(oldp+1147,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv),43);
        bufp->chgQData(oldp+1149,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),45);
        bufp->chgQData(oldp+1151,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),45);
        bufp->chgQData(oldp+1153,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),47);
        bufp->chgQData(oldp+1155,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one),47);
        bufp->chgQData(oldp+1157,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two),47);
        bufp->chgBit(oldp+1159,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x2aU)))));
        bufp->chgQData(oldp+1160,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x14U)))))))) 
                                    << 0x2bU) | (0x7ffffffffffULL 
                                                 & VL_SHIFTL_QQI(43,43,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U)))),45);
        bufp->chgQData(oldp+1162,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x29U)))))))) 
                                    << 0x2bU) | ((QData)((IData)(
                                                                 (0x1fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x15U))))) 
                                                 << 0x16U))),45);
        bufp->chgQData(oldp+1164,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved),43);
        bufp->chgQData(oldp+1166,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),47);
        bufp->chgQData(oldp+1168,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),47);
        bufp->chgIData(oldp+1170,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
        bufp->chgIData(oldp+1171,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
        bufp->chgIData(oldp+1172,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
        bufp->chgIData(oldp+1173,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
        bufp->chgIData(oldp+1174,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),24);
        bufp->chgIData(oldp+1175,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),24);
        bufp->chgIData(oldp+1176,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),21);
        bufp->chgIData(oldp+1177,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),21);
        bufp->chgIData(oldp+1178,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),25);
        bufp->chgIData(oldp+1179,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),22);
        bufp->chgIData(oldp+1180,((0xfffffU & (IData)(
                                                      (0xfffffULL 
                                                       & (VL_SHIFTL_QQI(43,43,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                          >> 0x17U))))),20);
        bufp->chgIData(oldp+1181,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (0xfffffULL 
                                                          & (VL_SHIFTL_QQI(43,43,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                             >> 0x17U)))))),20);
        bufp->chgBit(oldp+1182,((1U & (IData)((0xfffffULL 
                                               & (VL_SHIFTL_QQI(43,43,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1183,((1U & (IData)((0x1fffffULL 
                                               & (VL_SHIFTL_QQI(43,43,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                  >> 0x16U))))));
        bufp->chgIData(oldp+1184,((0xfffffU & (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                       >> 0x16U)))),20);
        bufp->chgIData(oldp+1185,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                          >> 0x16U))))),20);
        bufp->chgBit(oldp+1186,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1187,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x15U)))));
        bufp->chgIData(oldp+1188,((0xfffffU & (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                       >> 0x17U)))),20);
        bufp->chgIData(oldp+1189,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x17U))))),20);
        bufp->chgBit(oldp+1190,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1191,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1192,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),22);
        bufp->chgIData(oldp+1193,((0xfffffU & (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                       >> 0x17U)))),20);
        bufp->chgIData(oldp+1194,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x17U))))),20);
        bufp->chgBit(oldp+1195,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1196,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1197,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),22);
        bufp->chgBit(oldp+1198,(vlSelf->fft_ifft__DOT__ifft__DOT__br_sync));
        bufp->chgQData(oldp+1199,(vlSelf->fft_ifft__DOT__ifft__DOT__br_result),52);
        bufp->chgBit(oldp+1201,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s512));
        bufp->chgQData(oldp+1202,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d512),44);
        bufp->chgBit(oldp+1204,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s256));
        bufp->chgQData(oldp+1205,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d256),46);
        bufp->chgBit(oldp+1207,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s128));
        bufp->chgQData(oldp+1208,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d128),46);
        bufp->chgBit(oldp+1210,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s64));
        bufp->chgQData(oldp+1211,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d64),48);
        bufp->chgBit(oldp+1213,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s32));
        bufp->chgQData(oldp+1214,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d32),48);
        bufp->chgBit(oldp+1216,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s16));
        bufp->chgQData(oldp+1217,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d16),50);
        bufp->chgBit(oldp+1219,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s8));
        bufp->chgQData(oldp+1220,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d8),50);
        bufp->chgBit(oldp+1222,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s4));
        bufp->chgQData(oldp+1223,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d4),52);
        bufp->chgBit(oldp+1225,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s2));
        bufp->chgQData(oldp+1226,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__o_r)) 
                                    << 0x1aU) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__o_i)))),52);
        bufp->chgBit(oldp+1228,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__r_br_started) 
                                 | (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__w_s2))));
        bufp->chgBit(oldp+1229,(vlSelf->fft_ifft__DOT__ifft__DOT__r_br_started));
        bufp->chgBit(oldp+1230,(vlSelf->fft_ifft__DOT__ifft__DOT____Vcellinp__revstage__i_ce));
        bufp->chgSData(oldp+1231,(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr),10);
        bufp->chgSData(oldp+1232,(((0x200U & ((~ ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                  >> 9U)) 
                                              << 9U)) 
                                   | ((0x100U & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                   << 6U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                << 4U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                   << 2U)) 
                                               | ((0x10U 
                                                   & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                         >> 2U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                            >> 4U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                               >> 6U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                                 >> 8U)))))))))))),10);
        bufp->chgBit(oldp+1233,(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__in_reset));
        bufp->chgBit(oldp+1234,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__wait_for_sync));
        bufp->chgQData(oldp+1235,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ib_a),46);
        bufp->chgQData(oldp+1237,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ib_b),46);
        bufp->chgQData(oldp+1239,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ib_c),54);
        bufp->chgBit(oldp+1241,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ib_sync));
        bufp->chgBit(oldp+1242,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__b_started));
        bufp->chgBit(oldp+1243,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ob_sync));
        bufp->chgQData(oldp+1244,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x17U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),46);
        bufp->chgQData(oldp+1246,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x17U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),46);
        bufp->chgCData(oldp+1248,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__iaddr),7);
        bufp->chgCData(oldp+1249,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__oaddr),7);
        bufp->chgCData(oldp+1250,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__nxt_oaddr),6);
        bufp->chgQData(oldp+1251,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__pre_ovalue),46);
        bufp->chgBit(oldp+1253,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ib_sync) 
                                 & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
        bufp->chgQData(oldp+1254,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left),46);
        bufp->chgQData(oldp+1256,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right),46);
        bufp->chgBit(oldp+1258,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1259,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1260,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef),54);
        bufp->chgIData(oldp+1262,((0x7fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x17U)))),23);
        bufp->chgIData(oldp+1263,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))),23);
        bufp->chgIData(oldp+1264,((0x7fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x17U)))),23);
        bufp->chgIData(oldp+1265,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right))),23);
        bufp->chgIData(oldp+1266,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),27);
        bufp->chgIData(oldp+1267,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),27);
        bufp->chgIData(oldp+1268,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),24);
        bufp->chgIData(oldp+1269,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),24);
        bufp->chgIData(oldp+1270,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),24);
        bufp->chgIData(oldp+1271,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),24);
        bufp->chgQData(oldp+1272,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv),49);
        bufp->chgQData(oldp+1274,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv),49);
        bufp->chgQData(oldp+1276,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),51);
        bufp->chgQData(oldp+1278,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),51);
        bufp->chgQData(oldp+1280,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),53);
        bufp->chgQData(oldp+1282,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one),53);
        bufp->chgQData(oldp+1284,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two),53);
        bufp->chgBit(oldp+1286,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x30U)))));
        bufp->chgQData(oldp+1287,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x17U)))))))) 
                                    << 0x31U) | (0x1ffffffffffffULL 
                                                 & VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U)))),51);
        bufp->chgQData(oldp+1289,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x2fU)))))))) 
                                    << 0x31U) | ((QData)((IData)(
                                                                 (0xffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x18U))))) 
                                                 << 0x19U))),51);
        bufp->chgQData(oldp+1291,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved),49);
        bufp->chgQData(oldp+1293,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),53);
        bufp->chgQData(oldp+1295,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),53);
        bufp->chgIData(oldp+1297,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),23);
        bufp->chgIData(oldp+1298,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),23);
        bufp->chgIData(oldp+1299,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),23);
        bufp->chgIData(oldp+1300,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),23);
        bufp->chgIData(oldp+1301,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),27);
        bufp->chgIData(oldp+1302,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),27);
        bufp->chgIData(oldp+1303,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),24);
        bufp->chgIData(oldp+1304,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),24);
        bufp->chgIData(oldp+1305,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),28);
        bufp->chgIData(oldp+1306,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),25);
        bufp->chgIData(oldp+1307,((0x7fffffU & (IData)(
                                                       (0x7fffffULL 
                                                        & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                           >> 0x1aU))))),23);
        bufp->chgIData(oldp+1308,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (0x7fffffULL 
                                                           & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                              >> 0x1aU)))))),23);
        bufp->chgBit(oldp+1309,((1U & (IData)((0x7fffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1310,((1U & (IData)((0xffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                  >> 0x19U))))));
        bufp->chgIData(oldp+1311,((0x7fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x19U)))),23);
        bufp->chgIData(oldp+1312,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x19U))))),23);
        bufp->chgBit(oldp+1313,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1314,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x18U)))));
        bufp->chgIData(oldp+1315,((0x7fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x1aU)))),23);
        bufp->chgIData(oldp+1316,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x1aU))))),23);
        bufp->chgBit(oldp+1317,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1318,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1319,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),25);
        bufp->chgIData(oldp+1320,((0x7fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x1aU)))),23);
        bufp->chgIData(oldp+1321,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x1aU))))),23);
        bufp->chgBit(oldp+1322,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1323,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1324,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),25);
        bufp->chgBit(oldp+1325,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__wait_for_sync));
        bufp->chgQData(oldp+1326,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ib_a),48);
        bufp->chgQData(oldp+1328,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ib_b),48);
        bufp->chgQData(oldp+1330,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ib_c),56);
        bufp->chgBit(oldp+1332,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ib_sync));
        bufp->chgBit(oldp+1333,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__b_started));
        bufp->chgBit(oldp+1334,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ob_sync));
        bufp->chgQData(oldp+1335,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x19U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),50);
        bufp->chgQData(oldp+1337,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x19U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),50);
        bufp->chgCData(oldp+1339,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__iaddr),4);
        bufp->chgQData(oldp+1340,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[0]),48);
        bufp->chgQData(oldp+1342,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[1]),48);
        bufp->chgQData(oldp+1344,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[2]),48);
        bufp->chgQData(oldp+1346,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[3]),48);
        bufp->chgQData(oldp+1348,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[4]),48);
        bufp->chgQData(oldp+1350,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[5]),48);
        bufp->chgQData(oldp+1352,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[6]),48);
        bufp->chgQData(oldp+1354,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[7]),48);
        bufp->chgCData(oldp+1356,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__oaddr),4);
        bufp->chgQData(oldp+1357,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[0]),50);
        bufp->chgQData(oldp+1359,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[1]),50);
        bufp->chgQData(oldp+1361,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[2]),50);
        bufp->chgQData(oldp+1363,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[3]),50);
        bufp->chgQData(oldp+1365,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[4]),50);
        bufp->chgQData(oldp+1367,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[5]),50);
        bufp->chgQData(oldp+1369,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[6]),50);
        bufp->chgQData(oldp+1371,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[7]),50);
        bufp->chgCData(oldp+1373,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__nxt_oaddr),3);
        bufp->chgQData(oldp+1374,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__pre_ovalue),50);
        bufp->chgBit(oldp+1376,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ib_sync) 
                                 & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
        bufp->chgQData(oldp+1377,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left),48);
        bufp->chgQData(oldp+1379,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right),48);
        bufp->chgBit(oldp+1381,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1382,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1383,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef),56);
        bufp->chgIData(oldp+1385,((0xffffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+1386,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))),24);
        bufp->chgIData(oldp+1387,((0xffffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+1388,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right))),24);
        bufp->chgIData(oldp+1389,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),28);
        bufp->chgIData(oldp+1390,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),28);
        bufp->chgIData(oldp+1391,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),25);
        bufp->chgIData(oldp+1392,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),25);
        bufp->chgIData(oldp+1393,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),25);
        bufp->chgIData(oldp+1394,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),25);
        bufp->chgQData(oldp+1395,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv),51);
        bufp->chgQData(oldp+1397,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv),51);
        bufp->chgQData(oldp+1399,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),53);
        bufp->chgQData(oldp+1401,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),53);
        bufp->chgQData(oldp+1403,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),55);
        bufp->chgQData(oldp+1405,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one),55);
        bufp->chgQData(oldp+1407,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two),55);
        bufp->chgBit(oldp+1409,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x32U)))));
        bufp->chgQData(oldp+1410,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x18U)))))))) 
                                    << 0x33U) | (0x7ffffffffffffULL 
                                                 & VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU)))),53);
        bufp->chgQData(oldp+1412,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x31U)))))))) 
                                    << 0x33U) | ((QData)((IData)(
                                                                 (0x1ffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x19U))))) 
                                                 << 0x1aU))),53);
        bufp->chgQData(oldp+1414,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved),51);
        bufp->chgQData(oldp+1416,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),55);
        bufp->chgQData(oldp+1418,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),55);
        bufp->chgIData(oldp+1420,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),25);
        bufp->chgIData(oldp+1421,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),25);
        bufp->chgIData(oldp+1422,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),25);
        bufp->chgIData(oldp+1423,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),25);
        bufp->chgIData(oldp+1424,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),28);
        bufp->chgIData(oldp+1425,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),28);
        bufp->chgIData(oldp+1426,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),25);
        bufp->chgIData(oldp+1427,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),25);
        bufp->chgIData(oldp+1428,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),29);
        bufp->chgIData(oldp+1429,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),26);
        bufp->chgIData(oldp+1430,((0x1ffffffU & (IData)(
                                                        (0x1ffffffULL 
                                                         & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                            >> 0x1aU))))),25);
        bufp->chgIData(oldp+1431,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (0x1ffffffULL 
                                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                               >> 0x1aU)))))),25);
        bufp->chgBit(oldp+1432,((1U & (IData)((0x1ffffffULL 
                                               & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1433,((1U & (IData)((0x3ffffffULL 
                                               & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                  >> 0x19U))))));
        bufp->chgIData(oldp+1434,((0x1ffffffU & (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x19U)))),25);
        bufp->chgIData(oldp+1435,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                            >> 0x19U))))),25);
        bufp->chgBit(oldp+1436,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1437,((0x1ffffffU & (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x1aU)))),25);
        bufp->chgIData(oldp+1438,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                            >> 0x1aU))))),25);
        bufp->chgBit(oldp+1439,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1440,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1441,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),25);
        bufp->chgIData(oldp+1442,((0x1ffffffU & (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x1aU)))),25);
        bufp->chgIData(oldp+1443,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                            >> 0x1aU))))),25);
        bufp->chgBit(oldp+1444,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1445,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1446,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),25);
        bufp->chgIData(oldp+1447,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__m_r),26);
        bufp->chgIData(oldp+1448,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__m_i),26);
        bufp->chgIData(oldp+1449,((0x3ffffffU & (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__w_d4 
                                                         >> 0x1aU)))),26);
        bufp->chgIData(oldp+1450,((0x3ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__w_d4))),26);
        bufp->chgIData(oldp+1451,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_r),27);
        bufp->chgIData(oldp+1452,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_i),27);
        bufp->chgIData(oldp+1453,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__sto_r),27);
        bufp->chgIData(oldp+1454,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__sto_i),27);
        bufp->chgBit(oldp+1455,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__wait_for_sync));
        bufp->chgBit(oldp+1456,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__stage));
        bufp->chgCData(oldp+1457,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__sync_pipe),2);
        bufp->chgIData(oldp+1458,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__o_r),26);
        bufp->chgIData(oldp+1459,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__o_i),26);
        bufp->chgIData(oldp+1460,((0x3ffffffU & (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_i 
                                                 >> 1U))),26);
        bufp->chgIData(oldp+1461,((0x3ffffffU & ((IData)(1U) 
                                                 + 
                                                 (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_i 
                                                  >> 1U)))),26);
        bufp->chgBit(oldp+1462,((1U & (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_i 
                                       >> 1U))));
        bufp->chgBit(oldp+1463,((1U & vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_i)));
        bufp->chgIData(oldp+1464,((0x3ffffffU & (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_r 
                                                 >> 1U))),26);
        bufp->chgIData(oldp+1465,((0x3ffffffU & ((IData)(1U) 
                                                 + 
                                                 (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_r 
                                                  >> 1U)))),26);
        bufp->chgBit(oldp+1466,((1U & (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_r 
                                       >> 1U))));
        bufp->chgBit(oldp+1467,((1U & vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_r)));
        bufp->chgBit(oldp+1468,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__wait_for_sync));
        bufp->chgQData(oldp+1469,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ib_a),44);
        bufp->chgQData(oldp+1471,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ib_b),44);
        bufp->chgQData(oldp+1473,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ib_c),52);
        bufp->chgBit(oldp+1475,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ib_sync));
        bufp->chgBit(oldp+1476,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__b_started));
        bufp->chgBit(oldp+1477,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ob_sync));
        bufp->chgQData(oldp+1478,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x17U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),46);
        bufp->chgQData(oldp+1480,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x17U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),46);
        bufp->chgCData(oldp+1482,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__iaddr),8);
        bufp->chgCData(oldp+1483,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__oaddr),8);
        bufp->chgCData(oldp+1484,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__nxt_oaddr),7);
        bufp->chgQData(oldp+1485,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__pre_ovalue),46);
        bufp->chgBit(oldp+1487,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ib_sync) 
                                 & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
        bufp->chgQData(oldp+1488,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left),44);
        bufp->chgQData(oldp+1490,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right),44);
        bufp->chgBit(oldp+1492,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1493,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1494,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef),52);
        bufp->chgIData(oldp+1496,((0x3fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x16U)))),22);
        bufp->chgIData(oldp+1497,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))),22);
        bufp->chgIData(oldp+1498,((0x3fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x16U)))),22);
        bufp->chgIData(oldp+1499,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right))),22);
        bufp->chgIData(oldp+1500,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),26);
        bufp->chgIData(oldp+1501,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),26);
        bufp->chgIData(oldp+1502,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),23);
        bufp->chgIData(oldp+1503,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),23);
        bufp->chgIData(oldp+1504,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),23);
        bufp->chgIData(oldp+1505,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),23);
        bufp->chgQData(oldp+1506,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv),47);
        bufp->chgQData(oldp+1508,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv),47);
        bufp->chgQData(oldp+1510,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),49);
        bufp->chgQData(oldp+1512,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),49);
        bufp->chgQData(oldp+1514,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),51);
        bufp->chgQData(oldp+1516,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one),51);
        bufp->chgQData(oldp+1518,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two),51);
        bufp->chgBit(oldp+1520,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x2eU)))));
        bufp->chgQData(oldp+1521,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x16U)))))))) 
                                    << 0x2fU) | (0x7fffffffffffULL 
                                                 & VL_SHIFTL_QQI(47,47,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U)))),49);
        bufp->chgQData(oldp+1523,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x2dU)))))))) 
                                    << 0x2fU) | ((QData)((IData)(
                                                                 (0x7fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x17U))))) 
                                                 << 0x18U))),49);
        bufp->chgQData(oldp+1525,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved),47);
        bufp->chgQData(oldp+1527,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),51);
        bufp->chgQData(oldp+1529,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),51);
        bufp->chgIData(oldp+1531,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),23);
        bufp->chgIData(oldp+1532,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),23);
        bufp->chgIData(oldp+1533,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),23);
        bufp->chgIData(oldp+1534,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),23);
        bufp->chgIData(oldp+1535,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),26);
        bufp->chgIData(oldp+1536,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),26);
        bufp->chgIData(oldp+1537,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),23);
        bufp->chgIData(oldp+1538,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),23);
        bufp->chgIData(oldp+1539,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),27);
        bufp->chgIData(oldp+1540,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),24);
        bufp->chgIData(oldp+1541,((0x7fffffU & (IData)(
                                                       (0x7fffffULL 
                                                        & (VL_SHIFTL_QQI(47,47,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                           >> 0x18U))))),23);
        bufp->chgIData(oldp+1542,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (0x7fffffULL 
                                                           & (VL_SHIFTL_QQI(47,47,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                              >> 0x18U)))))),23);
        bufp->chgBit(oldp+1543,((1U & (IData)((0x7fffffULL 
                                               & (VL_SHIFTL_QQI(47,47,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1544,((1U & (IData)((0xffffffULL 
                                               & (VL_SHIFTL_QQI(47,47,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                  >> 0x17U))))));
        bufp->chgIData(oldp+1545,((0x7fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x17U)))),23);
        bufp->chgIData(oldp+1546,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x17U))))),23);
        bufp->chgBit(oldp+1547,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x17U)))));
        bufp->chgIData(oldp+1548,((0x7fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x18U)))),23);
        bufp->chgIData(oldp+1549,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x18U))))),23);
        bufp->chgBit(oldp+1550,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1551,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x17U)))));
        bufp->chgIData(oldp+1552,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),23);
        bufp->chgIData(oldp+1553,((0x7fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x18U)))),23);
        bufp->chgIData(oldp+1554,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x18U))))),23);
        bufp->chgBit(oldp+1555,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1556,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x17U)))));
        bufp->chgIData(oldp+1557,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),23);
        bufp->chgBit(oldp+1558,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__wait_for_sync));
        bufp->chgQData(oldp+1559,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ib_a),48);
        bufp->chgQData(oldp+1561,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ib_b),48);
        bufp->chgQData(oldp+1563,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ib_c),56);
        bufp->chgBit(oldp+1565,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ib_sync));
        bufp->chgBit(oldp+1566,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__b_started));
        bufp->chgBit(oldp+1567,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ob_sync));
        bufp->chgQData(oldp+1568,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x18U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),48);
        bufp->chgQData(oldp+1570,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x18U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),48);
        bufp->chgCData(oldp+1572,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__iaddr),5);
        bufp->chgQData(oldp+1573,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[0]),48);
        bufp->chgQData(oldp+1575,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[1]),48);
        bufp->chgQData(oldp+1577,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[2]),48);
        bufp->chgQData(oldp+1579,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[3]),48);
        bufp->chgQData(oldp+1581,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[4]),48);
        bufp->chgQData(oldp+1583,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[5]),48);
        bufp->chgQData(oldp+1585,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[6]),48);
        bufp->chgQData(oldp+1587,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[7]),48);
        bufp->chgQData(oldp+1589,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[8]),48);
        bufp->chgQData(oldp+1591,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[9]),48);
        bufp->chgQData(oldp+1593,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[10]),48);
        bufp->chgQData(oldp+1595,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[11]),48);
        bufp->chgQData(oldp+1597,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[12]),48);
        bufp->chgQData(oldp+1599,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[13]),48);
        bufp->chgQData(oldp+1601,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[14]),48);
        bufp->chgQData(oldp+1603,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[15]),48);
        bufp->chgCData(oldp+1605,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__oaddr),5);
        bufp->chgQData(oldp+1606,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[0]),48);
        bufp->chgQData(oldp+1608,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[1]),48);
        bufp->chgQData(oldp+1610,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[2]),48);
        bufp->chgQData(oldp+1612,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[3]),48);
        bufp->chgQData(oldp+1614,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[4]),48);
        bufp->chgQData(oldp+1616,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[5]),48);
        bufp->chgQData(oldp+1618,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[6]),48);
        bufp->chgQData(oldp+1620,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[7]),48);
        bufp->chgQData(oldp+1622,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[8]),48);
        bufp->chgQData(oldp+1624,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[9]),48);
        bufp->chgQData(oldp+1626,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[10]),48);
        bufp->chgQData(oldp+1628,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[11]),48);
        bufp->chgQData(oldp+1630,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[12]),48);
        bufp->chgQData(oldp+1632,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[13]),48);
        bufp->chgQData(oldp+1634,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[14]),48);
        bufp->chgQData(oldp+1636,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[15]),48);
        bufp->chgCData(oldp+1638,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__nxt_oaddr),4);
        bufp->chgQData(oldp+1639,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__pre_ovalue),48);
        bufp->chgBit(oldp+1641,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ib_sync) 
                                 & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
        bufp->chgQData(oldp+1642,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left),48);
        bufp->chgQData(oldp+1644,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right),48);
        bufp->chgBit(oldp+1646,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1647,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1648,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef),56);
        bufp->chgIData(oldp+1650,((0xffffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+1651,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))),24);
        bufp->chgIData(oldp+1652,((0xffffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+1653,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right))),24);
        bufp->chgIData(oldp+1654,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),28);
        bufp->chgIData(oldp+1655,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),28);
        bufp->chgIData(oldp+1656,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),25);
        bufp->chgIData(oldp+1657,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),25);
        bufp->chgIData(oldp+1658,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),25);
        bufp->chgIData(oldp+1659,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),25);
        bufp->chgQData(oldp+1660,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv),51);
        bufp->chgQData(oldp+1662,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv),51);
        bufp->chgQData(oldp+1664,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),53);
        bufp->chgQData(oldp+1666,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),53);
        bufp->chgQData(oldp+1668,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),55);
        bufp->chgQData(oldp+1670,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one),55);
        bufp->chgQData(oldp+1672,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two),55);
        bufp->chgBit(oldp+1674,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x32U)))));
        bufp->chgQData(oldp+1675,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x18U)))))))) 
                                    << 0x33U) | (0x7ffffffffffffULL 
                                                 & VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU)))),53);
        bufp->chgQData(oldp+1677,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x31U)))))))) 
                                    << 0x33U) | ((QData)((IData)(
                                                                 (0x1ffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x19U))))) 
                                                 << 0x1aU))),53);
        bufp->chgQData(oldp+1679,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved),51);
        bufp->chgQData(oldp+1681,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),55);
        bufp->chgQData(oldp+1683,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),55);
        bufp->chgIData(oldp+1685,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),24);
        bufp->chgIData(oldp+1686,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),24);
        bufp->chgIData(oldp+1687,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),24);
        bufp->chgIData(oldp+1688,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),24);
        bufp->chgIData(oldp+1689,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),28);
        bufp->chgIData(oldp+1690,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),28);
        bufp->chgIData(oldp+1691,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),25);
        bufp->chgIData(oldp+1692,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),25);
        bufp->chgIData(oldp+1693,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),29);
        bufp->chgIData(oldp+1694,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),26);
        bufp->chgIData(oldp+1695,((0xffffffU & (IData)(
                                                       (0xffffffULL 
                                                        & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                           >> 0x1bU))))),24);
        bufp->chgIData(oldp+1696,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (0xffffffULL 
                                                           & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                              >> 0x1bU)))))),24);
        bufp->chgBit(oldp+1697,((1U & (IData)((0xffffffULL 
                                               & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1698,((1U & (IData)((0x1ffffffULL 
                                               & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                  >> 0x1aU))))));
        bufp->chgIData(oldp+1699,((0xffffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x1aU)))),24);
        bufp->chgIData(oldp+1700,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x1aU))))),24);
        bufp->chgBit(oldp+1701,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1702,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1703,((0xffffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x1bU)))),24);
        bufp->chgIData(oldp+1704,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x1bU))))),24);
        bufp->chgBit(oldp+1705,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1706,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1aU)))));
        bufp->chgIData(oldp+1707,((0x3ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),26);
        bufp->chgIData(oldp+1708,((0xffffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x1bU)))),24);
        bufp->chgIData(oldp+1709,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x1bU))))),24);
        bufp->chgBit(oldp+1710,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1711,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1aU)))));
        bufp->chgIData(oldp+1712,((0x3ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),26);
        bufp->chgBit(oldp+1713,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__wait_for_sync));
        bufp->chgCData(oldp+1714,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__pipeline),3);
        bufp->chgIData(oldp+1715,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__sum_r),26);
        bufp->chgIData(oldp+1716,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__sum_i),26);
        bufp->chgIData(oldp+1717,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__diff_r),26);
        bufp->chgIData(oldp+1718,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__diff_i),26);
        bufp->chgQData(oldp+1719,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__ob_a),52);
        bufp->chgQData(oldp+1721,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__ob_b_r)) 
                                    << 0x1aU) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__ob_b_i)))),52);
        bufp->chgIData(oldp+1723,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__ob_b_r),26);
        bufp->chgIData(oldp+1724,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__ob_b_i),26);
        bufp->chgSData(oldp+1725,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__iaddr),9);
        bufp->chgQData(oldp+1726,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__imem[0]),50);
        bufp->chgQData(oldp+1728,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__imem[1]),50);
        bufp->chgIData(oldp+1730,((0x1ffffffU & (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__imem
                                                         [1U] 
                                                         >> 0x19U)))),25);
        bufp->chgIData(oldp+1731,((0x1ffffffU & (IData)(
                                                        vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__imem
                                                        [1U]))),25);
        bufp->chgIData(oldp+1732,((0x1ffffffU & (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__w_d8 
                                                         >> 0x19U)))),25);
        bufp->chgIData(oldp+1733,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__w_d8))),25);
        bufp->chgQData(oldp+1734,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__omem[0]),52);
        bufp->chgQData(oldp+1736,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__omem[1]),52);
        bufp->chgIData(oldp+1738,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_sum_r),26);
        bufp->chgIData(oldp+1739,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_sum_i),26);
        bufp->chgIData(oldp+1740,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_diff_r),26);
        bufp->chgIData(oldp+1741,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_diff_i),26);
        bufp->chgIData(oldp+1742,((0x3ffffffU & (- vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_diff_r))),26);
        bufp->chgIData(oldp+1743,((0x3ffffffU & (- vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_diff_i))),26);
        bufp->chgBit(oldp+1744,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__wait_for_sync));
        bufp->chgQData(oldp+1745,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ib_a),42);
        bufp->chgQData(oldp+1747,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ib_b),42);
        bufp->chgQData(oldp+1749,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ib_c),50);
        bufp->chgBit(oldp+1751,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ib_sync));
        bufp->chgBit(oldp+1752,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__b_started));
        bufp->chgBit(oldp+1753,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ob_sync));
        bufp->chgQData(oldp+1754,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x16U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),44);
        bufp->chgQData(oldp+1756,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x16U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),44);
        bufp->chgSData(oldp+1758,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__iaddr),9);
        bufp->chgSData(oldp+1759,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__oaddr),9);
        bufp->chgCData(oldp+1760,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__nxt_oaddr),8);
        bufp->chgQData(oldp+1761,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__pre_ovalue),44);
        bufp->chgBit(oldp+1763,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ib_sync) 
                                 & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
        bufp->chgQData(oldp+1764,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left),42);
        bufp->chgQData(oldp+1766,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right),42);
        bufp->chgBit(oldp+1768,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1769,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1770,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef),50);
        bufp->chgIData(oldp+1772,((0x1fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x15U)))),21);
        bufp->chgIData(oldp+1773,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left))),21);
        bufp->chgIData(oldp+1774,((0x1fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x15U)))),21);
        bufp->chgIData(oldp+1775,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right))),21);
        bufp->chgIData(oldp+1776,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),25);
        bufp->chgIData(oldp+1777,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),25);
        bufp->chgIData(oldp+1778,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),22);
        bufp->chgIData(oldp+1779,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),22);
        bufp->chgIData(oldp+1780,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),22);
        bufp->chgIData(oldp+1781,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),22);
        bufp->chgQData(oldp+1782,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv),45);
        bufp->chgQData(oldp+1784,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv),45);
        bufp->chgQData(oldp+1786,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),47);
        bufp->chgQData(oldp+1788,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),47);
        bufp->chgQData(oldp+1790,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),49);
        bufp->chgQData(oldp+1792,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one),49);
        bufp->chgQData(oldp+1794,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two),49);
        bufp->chgBit(oldp+1796,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x2cU)))));
        bufp->chgQData(oldp+1797,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x15U)))))))) 
                                    << 0x2dU) | (0x1fffffffffffULL 
                                                 & VL_SHIFTL_QQI(45,45,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U)))),47);
        bufp->chgQData(oldp+1799,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x2bU)))))))) 
                                    << 0x2dU) | ((QData)((IData)(
                                                                 (0x3fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x16U))))) 
                                                 << 0x17U))),47);
        bufp->chgQData(oldp+1801,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved),45);
        bufp->chgQData(oldp+1803,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),49);
        bufp->chgQData(oldp+1805,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),49);
        bufp->chgIData(oldp+1807,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),22);
        bufp->chgIData(oldp+1808,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),22);
        bufp->chgIData(oldp+1809,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),22);
        bufp->chgIData(oldp+1810,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),22);
        bufp->chgIData(oldp+1811,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),25);
        bufp->chgIData(oldp+1812,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),25);
        bufp->chgIData(oldp+1813,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),22);
        bufp->chgIData(oldp+1814,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),22);
        bufp->chgIData(oldp+1815,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),26);
        bufp->chgIData(oldp+1816,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),23);
        bufp->chgIData(oldp+1817,((0x3fffffU & (IData)(
                                                       (0x3fffffULL 
                                                        & (VL_SHIFTL_QQI(45,45,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                           >> 0x17U))))),22);
        bufp->chgIData(oldp+1818,((0x3fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (0x3fffffULL 
                                                           & (VL_SHIFTL_QQI(45,45,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                              >> 0x17U)))))),22);
        bufp->chgBit(oldp+1819,((1U & (IData)((0x3fffffULL 
                                               & (VL_SHIFTL_QQI(45,45,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1820,((1U & (IData)((0x7fffffULL 
                                               & (VL_SHIFTL_QQI(45,45,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                  >> 0x16U))))));
        bufp->chgIData(oldp+1821,((0x3fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x16U)))),22);
        bufp->chgIData(oldp+1822,((0x3fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x16U))))),22);
        bufp->chgBit(oldp+1823,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1824,((0x3fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x17U)))),22);
        bufp->chgIData(oldp+1825,((0x3fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x17U))))),22);
        bufp->chgBit(oldp+1826,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1827,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1828,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),22);
        bufp->chgIData(oldp+1829,((0x3fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x17U)))),22);
        bufp->chgIData(oldp+1830,((0x3fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x17U))))),22);
        bufp->chgBit(oldp+1831,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1832,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1833,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),22);
        bufp->chgBit(oldp+1834,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__wait_for_sync));
        bufp->chgQData(oldp+1835,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ib_a),46);
        bufp->chgQData(oldp+1837,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ib_b),46);
        bufp->chgQData(oldp+1839,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ib_c),54);
        bufp->chgBit(oldp+1841,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ib_sync));
        bufp->chgBit(oldp+1842,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__b_started));
        bufp->chgBit(oldp+1843,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ob_sync));
        bufp->chgQData(oldp+1844,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x18U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),48);
        bufp->chgQData(oldp+1846,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x18U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),48);
        bufp->chgCData(oldp+1848,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__iaddr),6);
        bufp->chgQData(oldp+1849,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[0]),46);
        bufp->chgQData(oldp+1851,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[1]),46);
        bufp->chgQData(oldp+1853,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[2]),46);
        bufp->chgQData(oldp+1855,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[3]),46);
        bufp->chgQData(oldp+1857,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[4]),46);
        bufp->chgQData(oldp+1859,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[5]),46);
        bufp->chgQData(oldp+1861,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[6]),46);
        bufp->chgQData(oldp+1863,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[7]),46);
        bufp->chgQData(oldp+1865,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[8]),46);
        bufp->chgQData(oldp+1867,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[9]),46);
        bufp->chgQData(oldp+1869,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[10]),46);
        bufp->chgQData(oldp+1871,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[11]),46);
        bufp->chgQData(oldp+1873,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[12]),46);
        bufp->chgQData(oldp+1875,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[13]),46);
        bufp->chgQData(oldp+1877,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[14]),46);
        bufp->chgQData(oldp+1879,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[15]),46);
        bufp->chgQData(oldp+1881,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[16]),46);
        bufp->chgQData(oldp+1883,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[17]),46);
        bufp->chgQData(oldp+1885,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[18]),46);
        bufp->chgQData(oldp+1887,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[19]),46);
        bufp->chgQData(oldp+1889,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[20]),46);
        bufp->chgQData(oldp+1891,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[21]),46);
        bufp->chgQData(oldp+1893,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[22]),46);
        bufp->chgQData(oldp+1895,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[23]),46);
        bufp->chgQData(oldp+1897,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[24]),46);
        bufp->chgQData(oldp+1899,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[25]),46);
        bufp->chgQData(oldp+1901,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[26]),46);
        bufp->chgQData(oldp+1903,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[27]),46);
        bufp->chgQData(oldp+1905,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[28]),46);
        bufp->chgQData(oldp+1907,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[29]),46);
        bufp->chgQData(oldp+1909,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[30]),46);
        bufp->chgQData(oldp+1911,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[31]),46);
        bufp->chgCData(oldp+1913,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__oaddr),6);
        bufp->chgQData(oldp+1914,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[0]),48);
        bufp->chgQData(oldp+1916,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[1]),48);
        bufp->chgQData(oldp+1918,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[2]),48);
        bufp->chgQData(oldp+1920,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[3]),48);
        bufp->chgQData(oldp+1922,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[4]),48);
        bufp->chgQData(oldp+1924,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[5]),48);
        bufp->chgQData(oldp+1926,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[6]),48);
        bufp->chgQData(oldp+1928,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[7]),48);
        bufp->chgQData(oldp+1930,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[8]),48);
        bufp->chgQData(oldp+1932,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[9]),48);
        bufp->chgQData(oldp+1934,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[10]),48);
        bufp->chgQData(oldp+1936,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[11]),48);
        bufp->chgQData(oldp+1938,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[12]),48);
        bufp->chgQData(oldp+1940,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[13]),48);
        bufp->chgQData(oldp+1942,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[14]),48);
        bufp->chgQData(oldp+1944,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[15]),48);
        bufp->chgQData(oldp+1946,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[16]),48);
        bufp->chgQData(oldp+1948,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[17]),48);
        bufp->chgQData(oldp+1950,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[18]),48);
        bufp->chgQData(oldp+1952,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[19]),48);
        bufp->chgQData(oldp+1954,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[20]),48);
        bufp->chgQData(oldp+1956,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[21]),48);
        bufp->chgQData(oldp+1958,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[22]),48);
        bufp->chgQData(oldp+1960,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[23]),48);
        bufp->chgQData(oldp+1962,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[24]),48);
        bufp->chgQData(oldp+1964,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[25]),48);
        bufp->chgQData(oldp+1966,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[26]),48);
        bufp->chgQData(oldp+1968,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[27]),48);
        bufp->chgQData(oldp+1970,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[28]),48);
        bufp->chgQData(oldp+1972,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[29]),48);
        bufp->chgQData(oldp+1974,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[30]),48);
        bufp->chgQData(oldp+1976,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[31]),48);
        bufp->chgCData(oldp+1978,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__nxt_oaddr),5);
        bufp->chgQData(oldp+1979,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__pre_ovalue),48);
        bufp->chgBit(oldp+1981,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ib_sync) 
                                 & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
        bufp->chgQData(oldp+1982,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left),46);
        bufp->chgQData(oldp+1984,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right),46);
        bufp->chgBit(oldp+1986,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1987,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1988,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef),54);
        bufp->chgIData(oldp+1990,((0x7fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x17U)))),23);
        bufp->chgIData(oldp+1991,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))),23);
        bufp->chgIData(oldp+1992,((0x7fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x17U)))),23);
        bufp->chgIData(oldp+1993,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right))),23);
        bufp->chgIData(oldp+1994,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),27);
        bufp->chgIData(oldp+1995,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),27);
        bufp->chgIData(oldp+1996,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),24);
        bufp->chgIData(oldp+1997,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),24);
        bufp->chgIData(oldp+1998,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),24);
        bufp->chgIData(oldp+1999,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),24);
        bufp->chgQData(oldp+2000,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv),49);
        bufp->chgQData(oldp+2002,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv),49);
        bufp->chgQData(oldp+2004,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),51);
        bufp->chgQData(oldp+2006,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),51);
        bufp->chgQData(oldp+2008,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),53);
        bufp->chgQData(oldp+2010,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one),53);
        bufp->chgQData(oldp+2012,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two),53);
        bufp->chgBit(oldp+2014,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x30U)))));
        bufp->chgQData(oldp+2015,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x17U)))))))) 
                                    << 0x31U) | (0x1ffffffffffffULL 
                                                 & VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U)))),51);
        bufp->chgQData(oldp+2017,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x2fU)))))))) 
                                    << 0x31U) | ((QData)((IData)(
                                                                 (0xffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x18U))))) 
                                                 << 0x19U))),51);
        bufp->chgQData(oldp+2019,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved),49);
        bufp->chgQData(oldp+2021,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),53);
        bufp->chgQData(oldp+2023,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),53);
        bufp->chgIData(oldp+2025,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),24);
        bufp->chgIData(oldp+2026,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),24);
        bufp->chgIData(oldp+2027,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),24);
        bufp->chgIData(oldp+2028,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),24);
        bufp->chgIData(oldp+2029,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),27);
        bufp->chgIData(oldp+2030,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),27);
        bufp->chgIData(oldp+2031,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),24);
        bufp->chgIData(oldp+2032,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),24);
        bufp->chgIData(oldp+2033,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),28);
        bufp->chgIData(oldp+2034,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),25);
        bufp->chgIData(oldp+2035,((0xffffffU & (IData)(
                                                       (0xffffffULL 
                                                        & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                           >> 0x19U))))),24);
        bufp->chgIData(oldp+2036,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (0xffffffULL 
                                                           & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                              >> 0x19U)))))),24);
        bufp->chgBit(oldp+2037,((1U & (IData)((0xffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+2038,((1U & (IData)((0x1ffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                  >> 0x18U))))));
        bufp->chgIData(oldp+2039,((0xffffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+2040,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x18U))))),24);
        bufp->chgBit(oldp+2041,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x18U)))));
        bufp->chgIData(oldp+2042,((0xffffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x19U)))),24);
        bufp->chgIData(oldp+2043,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x19U))))),24);
        bufp->chgBit(oldp+2044,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2045,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x18U)))));
        bufp->chgIData(oldp+2046,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),24);
        bufp->chgIData(oldp+2047,((0xffffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x19U)))),24);
        bufp->chgIData(oldp+2048,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x19U))))),24);
        bufp->chgBit(oldp+2049,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2050,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x18U)))));
        bufp->chgIData(oldp+2051,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),24);
        bufp->chgBit(oldp+2052,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__wait_for_sync));
        bufp->chgQData(oldp+2053,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ib_a),50);
        bufp->chgQData(oldp+2055,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ib_b),50);
        bufp->chgQData(oldp+2057,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ib_c),58);
        bufp->chgBit(oldp+2059,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ib_sync));
        bufp->chgBit(oldp+2060,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__b_started));
        bufp->chgBit(oldp+2061,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ob_sync));
        bufp->chgQData(oldp+2062,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x19U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),50);
        bufp->chgQData(oldp+2064,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x19U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),50);
        bufp->chgCData(oldp+2066,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__iaddr),3);
        bufp->chgQData(oldp+2067,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__imem[0]),50);
        bufp->chgQData(oldp+2069,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__imem[1]),50);
        bufp->chgQData(oldp+2071,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__imem[2]),50);
        bufp->chgQData(oldp+2073,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__imem[3]),50);
        bufp->chgCData(oldp+2075,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__oaddr),3);
        bufp->chgQData(oldp+2076,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__omem[0]),50);
        bufp->chgQData(oldp+2078,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__omem[1]),50);
        bufp->chgQData(oldp+2080,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__omem[2]),50);
        bufp->chgQData(oldp+2082,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__omem[3]),50);
        bufp->chgCData(oldp+2084,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__nxt_oaddr),2);
        bufp->chgQData(oldp+2085,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__pre_ovalue),50);
        bufp->chgBit(oldp+2087,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ib_sync) 
                                 & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
        bufp->chgQData(oldp+2088,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left),50);
        bufp->chgQData(oldp+2090,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right),50);
        bufp->chgBit(oldp+2092,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+2093,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+2094,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef),58);
        bufp->chgIData(oldp+2096,((0x1ffffffU & (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                         >> 0x19U)))),25);
        bufp->chgIData(oldp+2097,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))),25);
        bufp->chgIData(oldp+2098,((0x1ffffffU & (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                         >> 0x19U)))),25);
        bufp->chgIData(oldp+2099,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right))),25);
        bufp->chgIData(oldp+2100,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),29);
        bufp->chgIData(oldp+2101,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),29);
        bufp->chgIData(oldp+2102,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),26);
        bufp->chgIData(oldp+2103,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),26);
        bufp->chgIData(oldp+2104,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),26);
        bufp->chgIData(oldp+2105,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),26);
        bufp->chgQData(oldp+2106,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv),53);
        bufp->chgQData(oldp+2108,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv),53);
        bufp->chgQData(oldp+2110,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),55);
        bufp->chgQData(oldp+2112,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),55);
        bufp->chgQData(oldp+2114,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),57);
        bufp->chgQData(oldp+2116,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one),57);
        bufp->chgQData(oldp+2118,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two),57);
        bufp->chgBit(oldp+2120,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x34U)))));
        bufp->chgQData(oldp+2121,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x19U)))))))) 
                                    << 0x35U) | (0x1fffffffffffffULL 
                                                 & VL_SHIFTL_QQI(53,53,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU)))),55);
        bufp->chgQData(oldp+2123,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x33U)))))))) 
                                    << 0x35U) | ((QData)((IData)(
                                                                 (0x3ffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x1aU))))) 
                                                 << 0x1bU))),55);
        bufp->chgQData(oldp+2125,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved),53);
        bufp->chgQData(oldp+2127,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),57);
        bufp->chgQData(oldp+2129,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),57);
        bufp->chgIData(oldp+2131,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),25);
        bufp->chgIData(oldp+2132,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),25);
        bufp->chgIData(oldp+2133,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),25);
        bufp->chgIData(oldp+2134,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),25);
        bufp->chgIData(oldp+2135,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),29);
        bufp->chgIData(oldp+2136,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),29);
        bufp->chgIData(oldp+2137,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),26);
        bufp->chgIData(oldp+2138,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),26);
        bufp->chgIData(oldp+2139,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),30);
        bufp->chgIData(oldp+2140,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),27);
        bufp->chgIData(oldp+2141,((0x1ffffffU & (IData)(
                                                        (0x1ffffffULL 
                                                         & (VL_SHIFTL_QQI(53,53,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                            >> 0x1cU))))),25);
        bufp->chgIData(oldp+2142,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (0x1ffffffULL 
                                                            & (VL_SHIFTL_QQI(53,53,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                               >> 0x1cU)))))),25);
        bufp->chgBit(oldp+2143,((1U & (IData)((0x1ffffffULL 
                                               & (VL_SHIFTL_QQI(53,53,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+2144,((1U & (IData)((0x3ffffffULL 
                                               & (VL_SHIFTL_QQI(53,53,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                  >> 0x1bU))))));
        bufp->chgIData(oldp+2145,((0x1ffffffU & (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x1bU)))),25);
        bufp->chgIData(oldp+2146,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                            >> 0x1bU))))),25);
        bufp->chgBit(oldp+2147,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2148,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x1aU)))));
        bufp->chgIData(oldp+2149,((0x1ffffffU & (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x1cU)))),25);
        bufp->chgIData(oldp+2150,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                            >> 0x1cU))))),25);
        bufp->chgBit(oldp+2151,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2152,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1bU)))));
        bufp->chgIData(oldp+2153,((0x7ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),27);
        bufp->chgIData(oldp+2154,((0x1ffffffU & (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x1cU)))),25);
        bufp->chgIData(oldp+2155,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                            >> 0x1cU))))),25);
        bufp->chgBit(oldp+2156,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2157,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1bU)))));
        bufp->chgIData(oldp+2158,((0x7ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),27);
        bufp->chgSData(oldp+2159,(vlSelf->fft_ifft__DOT__lpf__DOT__bin_idx),10);
        bufp->chgIData(oldp+2160,((0x1fffffU & (IData)(
                                                       (vlSelf->fft_ifft__DOT__fft_o_result 
                                                        >> 0x15U)))),21);
        bufp->chgIData(oldp+2161,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__fft_o_result))),21);
        bufp->chgBit(oldp+2162,((1U & (IData)((vlSelf->fft_ifft__DOT__lpf_o_sample 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+2163,((1U & (IData)(vlSelf->fft_ifft__DOT__lpf_o_sample))));
    }
    bufp->chgBit(oldp+2164,(vlSelf->i_clk));
    bufp->chgBit(oldp+2165,(vlSelf->i_ce));
    bufp->chgBit(oldp+2166,(vlSelf->i_reset));
    bufp->chgIData(oldp+2167,(vlSelf->i_sample),32);
    bufp->chgQData(oldp+2168,(vlSelf->o_result),52);
    bufp->chgBit(oldp+2170,(vlSelf->o_sync));
    bufp->chgIData(oldp+2171,((0x3ffffffU & (IData)(
                                                    (vlSelf->o_result 
                                                     >> 0x1aU)))),26);
    bufp->chgIData(oldp+2172,((0x3ffffffU & (IData)(vlSelf->o_result))),26);
    bufp->chgBit(oldp+2173,(vlSelf->fft_ifft__DOT__fft__DOT____Vcellinp__revstage__i_ce));
    bufp->chgBit(oldp+2174,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+2175,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+2176,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+2177,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+2178,((1U & (~ (IData)(vlSelf->i_reset)))));
    bufp->chgBit(oldp+2179,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+2180,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+2181,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+2182,(((IData)(vlSelf->i_ce) 
                             & ((IData)(vlSelf->fft_ifft__DOT__fft_o_sync) 
                                | (IData)(vlSelf->fft_ifft__DOT__r_syncd)))));
}

void Vfft_ifft___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfft_ifft___024root__trace_cleanup\n"); );
    // Init
    Vfft_ifft___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfft_ifft___024root*>(voidSelf);
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
