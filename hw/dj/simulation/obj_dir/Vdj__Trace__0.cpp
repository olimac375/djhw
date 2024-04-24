// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdj__Syms.h"


void Vdj___024root__trace_chg_0_sub_0(Vdj___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdj___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root__trace_chg_0\n"); );
    // Init
    Vdj___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdj___024root*>(voidSelf);
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdj___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdj___024root__trace_chg_0_sub_0(Vdj___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgQData(oldp+0,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[0]),46);
        bufp->chgQData(oldp+2,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[1]),46);
        bufp->chgQData(oldp+4,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[2]),46);
        bufp->chgQData(oldp+6,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[3]),46);
        bufp->chgQData(oldp+8,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[4]),46);
        bufp->chgQData(oldp+10,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[5]),46);
        bufp->chgQData(oldp+12,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[6]),46);
        bufp->chgQData(oldp+14,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[7]),46);
        bufp->chgQData(oldp+16,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[0]),46);
        bufp->chgQData(oldp+18,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[1]),46);
        bufp->chgQData(oldp+20,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[2]),46);
        bufp->chgQData(oldp+22,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[3]),46);
        bufp->chgQData(oldp+24,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[4]),46);
        bufp->chgQData(oldp+26,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[5]),46);
        bufp->chgQData(oldp+28,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[6]),46);
        bufp->chgQData(oldp+30,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[7]),46);
        bufp->chgQData(oldp+32,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[8]),46);
        bufp->chgQData(oldp+34,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[9]),46);
        bufp->chgQData(oldp+36,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[10]),46);
        bufp->chgQData(oldp+38,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[11]),46);
        bufp->chgQData(oldp+40,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[12]),46);
        bufp->chgQData(oldp+42,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[13]),46);
        bufp->chgQData(oldp+44,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[14]),46);
        bufp->chgQData(oldp+46,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[15]),46);
        bufp->chgQData(oldp+48,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[0]),44);
        bufp->chgQData(oldp+50,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[1]),44);
        bufp->chgQData(oldp+52,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[2]),44);
        bufp->chgQData(oldp+54,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[3]),44);
        bufp->chgQData(oldp+56,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[4]),44);
        bufp->chgQData(oldp+58,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[5]),44);
        bufp->chgQData(oldp+60,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[6]),44);
        bufp->chgQData(oldp+62,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[7]),44);
        bufp->chgQData(oldp+64,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[8]),44);
        bufp->chgQData(oldp+66,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[9]),44);
        bufp->chgQData(oldp+68,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[10]),44);
        bufp->chgQData(oldp+70,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[11]),44);
        bufp->chgQData(oldp+72,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[12]),44);
        bufp->chgQData(oldp+74,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[13]),44);
        bufp->chgQData(oldp+76,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[14]),44);
        bufp->chgQData(oldp+78,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[15]),44);
        bufp->chgQData(oldp+80,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[16]),44);
        bufp->chgQData(oldp+82,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[17]),44);
        bufp->chgQData(oldp+84,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[18]),44);
        bufp->chgQData(oldp+86,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[19]),44);
        bufp->chgQData(oldp+88,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[20]),44);
        bufp->chgQData(oldp+90,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[21]),44);
        bufp->chgQData(oldp+92,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[22]),44);
        bufp->chgQData(oldp+94,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[23]),44);
        bufp->chgQData(oldp+96,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[24]),44);
        bufp->chgQData(oldp+98,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[25]),44);
        bufp->chgQData(oldp+100,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[26]),44);
        bufp->chgQData(oldp+102,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[27]),44);
        bufp->chgQData(oldp+104,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[28]),44);
        bufp->chgQData(oldp+106,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[29]),44);
        bufp->chgQData(oldp+108,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[30]),44);
        bufp->chgQData(oldp+110,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[31]),44);
        bufp->chgQData(oldp+112,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__cmem[0]),48);
        bufp->chgQData(oldp+114,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__cmem[1]),48);
        bufp->chgQData(oldp+116,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__cmem[2]),48);
        bufp->chgQData(oldp+118,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__cmem[3]),48);
        bufp->chgQData(oldp+120,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[0]),56);
        bufp->chgQData(oldp+122,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[1]),56);
        bufp->chgQData(oldp+124,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[2]),56);
        bufp->chgQData(oldp+126,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[3]),56);
        bufp->chgQData(oldp+128,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[4]),56);
        bufp->chgQData(oldp+130,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[5]),56);
        bufp->chgQData(oldp+132,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[6]),56);
        bufp->chgQData(oldp+134,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[7]),56);
        bufp->chgQData(oldp+136,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[0]),56);
        bufp->chgQData(oldp+138,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[1]),56);
        bufp->chgQData(oldp+140,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[2]),56);
        bufp->chgQData(oldp+142,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[3]),56);
        bufp->chgQData(oldp+144,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[4]),56);
        bufp->chgQData(oldp+146,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[5]),56);
        bufp->chgQData(oldp+148,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[6]),56);
        bufp->chgQData(oldp+150,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[7]),56);
        bufp->chgQData(oldp+152,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[8]),56);
        bufp->chgQData(oldp+154,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[9]),56);
        bufp->chgQData(oldp+156,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[10]),56);
        bufp->chgQData(oldp+158,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[11]),56);
        bufp->chgQData(oldp+160,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[12]),56);
        bufp->chgQData(oldp+162,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[13]),56);
        bufp->chgQData(oldp+164,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[14]),56);
        bufp->chgQData(oldp+166,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[15]),56);
        bufp->chgQData(oldp+168,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[0]),54);
        bufp->chgQData(oldp+170,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[1]),54);
        bufp->chgQData(oldp+172,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[2]),54);
        bufp->chgQData(oldp+174,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[3]),54);
        bufp->chgQData(oldp+176,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[4]),54);
        bufp->chgQData(oldp+178,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[5]),54);
        bufp->chgQData(oldp+180,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[6]),54);
        bufp->chgQData(oldp+182,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[7]),54);
        bufp->chgQData(oldp+184,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[8]),54);
        bufp->chgQData(oldp+186,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[9]),54);
        bufp->chgQData(oldp+188,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[10]),54);
        bufp->chgQData(oldp+190,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[11]),54);
        bufp->chgQData(oldp+192,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[12]),54);
        bufp->chgQData(oldp+194,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[13]),54);
        bufp->chgQData(oldp+196,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[14]),54);
        bufp->chgQData(oldp+198,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[15]),54);
        bufp->chgQData(oldp+200,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[16]),54);
        bufp->chgQData(oldp+202,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[17]),54);
        bufp->chgQData(oldp+204,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[18]),54);
        bufp->chgQData(oldp+206,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[19]),54);
        bufp->chgQData(oldp+208,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[20]),54);
        bufp->chgQData(oldp+210,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[21]),54);
        bufp->chgQData(oldp+212,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[22]),54);
        bufp->chgQData(oldp+214,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[23]),54);
        bufp->chgQData(oldp+216,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[24]),54);
        bufp->chgQData(oldp+218,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[25]),54);
        bufp->chgQData(oldp+220,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[26]),54);
        bufp->chgQData(oldp+222,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[27]),54);
        bufp->chgQData(oldp+224,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[28]),54);
        bufp->chgQData(oldp+226,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[29]),54);
        bufp->chgQData(oldp+228,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[30]),54);
        bufp->chgQData(oldp+230,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[31]),54);
        bufp->chgQData(oldp+232,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__cmem[0]),58);
        bufp->chgQData(oldp+234,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__cmem[1]),58);
        bufp->chgQData(oldp+236,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__cmem[2]),58);
        bufp->chgQData(oldp+238,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__cmem[3]),58);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+240,(vlSelf->dj__DOT__dj_0_left_fifo_sink_valid));
        bufp->chgBit(oldp+241,(vlSelf->dj__DOT__dj_0_right_fifo_sink_valid));
        bufp->chgBit(oldp+242,(vlSelf->dj__DOT__rst_controller__DOT__merged_reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+243,(vlSelf->dj__DOT__left_sc_fifo__DOT__next_wr_ptr),10);
        bufp->chgBit(oldp+244,(vlSelf->dj__DOT__left_sc_fifo__DOT__write));
        bufp->chgBit(oldp+245,(vlSelf->dj__DOT__left_sc_fifo__DOT__next_empty));
        bufp->chgBit(oldp+246,(vlSelf->dj__DOT__left_sc_fifo__DOT__next_full));
        bufp->chgSData(oldp+247,(vlSelf->dj__DOT__right_sc_fifo__DOT__next_wr_ptr),10);
        bufp->chgBit(oldp+248,(vlSelf->dj__DOT__right_sc_fifo__DOT__write));
        bufp->chgBit(oldp+249,(vlSelf->dj__DOT__right_sc_fifo__DOT__next_empty));
        bufp->chgBit(oldp+250,(vlSelf->dj__DOT__right_sc_fifo__DOT__next_full));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+251,((0xffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft_o_result 
                                                     >> 0x1aU)))),16);
        bufp->chgBit(oldp+252,((0U == (IData)(vlSelf->dj__DOT__dj_0__DOT__ctr))));
        bufp->chgQData(oldp+253,(vlSelf->dj__DOT__dj_0__DOT__left_fft_o_result),42);
        bufp->chgBit(oldp+255,(vlSelf->dj__DOT__dj_0__DOT__left_fft_o_sync));
        bufp->chgBit(oldp+256,(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce));
        bufp->chgQData(oldp+257,(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_sample),42);
        bufp->chgQData(oldp+259,(vlSelf->dj__DOT__dj_0__DOT__left_ifft_o_result),52);
        bufp->chgBit(oldp+261,(vlSelf->dj__DOT__dj_0__DOT__left_ifft_o_sync));
        bufp->chgBit(oldp+262,(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_sync));
        bufp->chgBit(oldp+263,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft_o_sync) 
                                | (IData)(vlSelf->dj__DOT__dj_0__DOT__left_r_syncd))));
        bufp->chgBit(oldp+264,(vlSelf->dj__DOT__dj_0__DOT__left_r_syncd));
        bufp->chgBit(oldp+265,(((IData)(vlSelf->dj__DOT__dj_0__DOT__right_fft_o_sync) 
                                | (IData)(vlSelf->dj__DOT__dj_0__DOT__right_r_syncd))));
        bufp->chgBit(oldp+266,(vlSelf->dj__DOT__dj_0__DOT__right_r_syncd));
        bufp->chgCData(oldp+267,(vlSelf->dj__DOT__dj_0__DOT__ctr),3);
        bufp->chgBit(oldp+268,((1U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__ctr) 
                                      >> 2U))));
        bufp->chgBit(oldp+269,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__br_sync));
        bufp->chgQData(oldp+270,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__br_result),42);
        bufp->chgBit(oldp+272,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s512));
        bufp->chgQData(oldp+273,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d512),34);
        bufp->chgBit(oldp+275,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s256));
        bufp->chgQData(oldp+276,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d256),36);
        bufp->chgBit(oldp+278,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s128));
        bufp->chgQData(oldp+279,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d128),36);
        bufp->chgBit(oldp+281,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s64));
        bufp->chgQData(oldp+282,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d64),38);
        bufp->chgBit(oldp+284,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s32));
        bufp->chgQData(oldp+285,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d32),38);
        bufp->chgBit(oldp+287,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s16));
        bufp->chgQData(oldp+288,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d16),40);
        bufp->chgBit(oldp+290,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s8));
        bufp->chgQData(oldp+291,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d8),40);
        bufp->chgBit(oldp+293,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s4));
        bufp->chgQData(oldp+294,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d4),42);
        bufp->chgBit(oldp+296,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s2));
        bufp->chgQData(oldp+297,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__o_r)) 
                                   << 0x15U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__o_i)))),42);
        bufp->chgBit(oldp+299,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__r_br_started) 
                                | (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s2))));
        bufp->chgBit(oldp+300,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__r_br_started));
        bufp->chgSData(oldp+301,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr),10);
        bufp->chgSData(oldp+302,(((0x200U & ((~ ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                 >> 9U)) 
                                             << 9U)) 
                                  | ((0x100U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                << 8U)) 
                                     | ((0x80U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                  << 6U)) 
                                        | ((0x40U & 
                                            ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                             << 4U)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                  << 2U)) 
                                              | ((0x10U 
                                                  & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                        >> 2U)) 
                                                    | ((4U 
                                                        & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                           >> 4U)) 
                                                       | ((2U 
                                                           & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                              >> 6U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                                >> 8U)))))))))))),10);
        bufp->chgBit(oldp+303,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__in_reset));
        bufp->chgBit(oldp+304,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync));
        bufp->chgQData(oldp+305,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_a),36);
        bufp->chgQData(oldp+307,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_b),36);
        bufp->chgQData(oldp+309,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_c),44);
        bufp->chgBit(oldp+311,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_sync));
        bufp->chgBit(oldp+312,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__b_started));
        bufp->chgBit(oldp+313,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ob_sync));
        bufp->chgQData(oldp+314,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
        bufp->chgQData(oldp+316,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
        bufp->chgCData(oldp+318,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__iaddr),7);
        bufp->chgCData(oldp+319,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__oaddr),7);
        bufp->chgCData(oldp+320,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__nxt_oaddr),6);
        bufp->chgQData(oldp+321,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__pre_ovalue),36);
        bufp->chgQData(oldp+323,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
        bufp->chgQData(oldp+325,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
        bufp->chgBit(oldp+327,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+328,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+329,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
        bufp->chgIData(oldp+331,((0x3ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x12U)))),18);
        bufp->chgIData(oldp+332,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
        bufp->chgIData(oldp+333,((0x3ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x12U)))),18);
        bufp->chgIData(oldp+334,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
        bufp->chgIData(oldp+335,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
        bufp->chgIData(oldp+336,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
        bufp->chgIData(oldp+337,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
        bufp->chgIData(oldp+338,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
        bufp->chgIData(oldp+339,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
        bufp->chgIData(oldp+340,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
        bufp->chgQData(oldp+341,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
        bufp->chgQData(oldp+343,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
        bufp->chgQData(oldp+345,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
        bufp->chgQData(oldp+347,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
        bufp->chgQData(oldp+349,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
        bufp->chgQData(oldp+351,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
        bufp->chgQData(oldp+353,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
        bufp->chgBit(oldp+355,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x26U)))));
        bufp->chgQData(oldp+356,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x12U)))))))) 
                                   << 0x27U) | (0x7fffffffffULL 
                                                & VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
        bufp->chgQData(oldp+358,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x25U)))))))) 
                                   << 0x27U) | ((QData)((IData)(
                                                                (0x7ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x13U))))) 
                                                << 0x14U))),41);
        bufp->chgQData(oldp+360,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
        bufp->chgQData(oldp+362,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
        bufp->chgQData(oldp+364,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
        bufp->chgIData(oldp+366,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
        bufp->chgIData(oldp+367,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
        bufp->chgIData(oldp+368,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
        bufp->chgIData(oldp+369,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
        bufp->chgIData(oldp+370,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
        bufp->chgIData(oldp+371,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
        bufp->chgIData(oldp+372,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
        bufp->chgIData(oldp+373,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
        bufp->chgIData(oldp+374,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
        bufp->chgIData(oldp+375,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
        bufp->chgIData(oldp+376,((0x3ffffU & (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                         >> 0x15U))))),18);
        bufp->chgIData(oldp+377,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x3ffffULL 
                                                         & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                            >> 0x15U)))))),18);
        bufp->chgBit(oldp+378,((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+379,((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x14U))))));
        bufp->chgIData(oldp+380,((0x3ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U)))),18);
        bufp->chgIData(oldp+381,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x14U))))),18);
        bufp->chgBit(oldp+382,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+383,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x13U)))));
        bufp->chgIData(oldp+384,((0x3ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U)))),18);
        bufp->chgIData(oldp+385,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x15U))))),18);
        bufp->chgBit(oldp+386,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+387,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+388,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
        bufp->chgIData(oldp+389,((0x3ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U)))),18);
        bufp->chgIData(oldp+390,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x15U))))),18);
        bufp->chgBit(oldp+391,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+392,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+393,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
        bufp->chgBit(oldp+394,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync));
        bufp->chgQData(oldp+395,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_a),38);
        bufp->chgQData(oldp+397,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_b),38);
        bufp->chgQData(oldp+399,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_c),46);
        bufp->chgBit(oldp+401,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_sync));
        bufp->chgBit(oldp+402,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__b_started));
        bufp->chgBit(oldp+403,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ob_sync));
        bufp->chgQData(oldp+404,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x14U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
        bufp->chgQData(oldp+406,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x14U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
        bufp->chgCData(oldp+408,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__iaddr),4);
        bufp->chgQData(oldp+409,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[0]),38);
        bufp->chgQData(oldp+411,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[1]),38);
        bufp->chgQData(oldp+413,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[2]),38);
        bufp->chgQData(oldp+415,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[3]),38);
        bufp->chgQData(oldp+417,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[4]),38);
        bufp->chgQData(oldp+419,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[5]),38);
        bufp->chgQData(oldp+421,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[6]),38);
        bufp->chgQData(oldp+423,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[7]),38);
        bufp->chgCData(oldp+425,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__oaddr),4);
        bufp->chgQData(oldp+426,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[0]),40);
        bufp->chgQData(oldp+428,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[1]),40);
        bufp->chgQData(oldp+430,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[2]),40);
        bufp->chgQData(oldp+432,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[3]),40);
        bufp->chgQData(oldp+434,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[4]),40);
        bufp->chgQData(oldp+436,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[5]),40);
        bufp->chgQData(oldp+438,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[6]),40);
        bufp->chgQData(oldp+440,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[7]),40);
        bufp->chgCData(oldp+442,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__nxt_oaddr),3);
        bufp->chgQData(oldp+443,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__pre_ovalue),40);
        bufp->chgQData(oldp+445,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
        bufp->chgQData(oldp+447,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
        bufp->chgBit(oldp+449,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+450,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+451,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
        bufp->chgIData(oldp+453,((0x7ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+454,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
        bufp->chgIData(oldp+455,((0x7ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+456,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
        bufp->chgIData(oldp+457,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
        bufp->chgIData(oldp+458,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
        bufp->chgIData(oldp+459,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
        bufp->chgIData(oldp+460,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
        bufp->chgIData(oldp+461,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
        bufp->chgIData(oldp+462,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
        bufp->chgQData(oldp+463,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
        bufp->chgQData(oldp+465,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
        bufp->chgQData(oldp+467,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
        bufp->chgQData(oldp+469,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
        bufp->chgQData(oldp+471,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
        bufp->chgQData(oldp+473,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
        bufp->chgQData(oldp+475,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
        bufp->chgBit(oldp+477,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x28U)))));
        bufp->chgQData(oldp+478,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x13U)))))))) 
                                   << 0x29U) | (0x1ffffffffffULL 
                                                & VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
        bufp->chgQData(oldp+480,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x27U)))))))) 
                                   << 0x29U) | ((QData)((IData)(
                                                                (0xfffffU 
                                                                 & (IData)(
                                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x14U))))) 
                                                << 0x15U))),43);
        bufp->chgQData(oldp+482,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
        bufp->chgQData(oldp+484,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
        bufp->chgQData(oldp+486,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
        bufp->chgIData(oldp+488,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
        bufp->chgIData(oldp+489,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
        bufp->chgIData(oldp+490,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
        bufp->chgIData(oldp+491,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
        bufp->chgIData(oldp+492,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
        bufp->chgIData(oldp+493,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
        bufp->chgIData(oldp+494,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
        bufp->chgIData(oldp+495,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
        bufp->chgIData(oldp+496,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
        bufp->chgIData(oldp+497,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
        bufp->chgIData(oldp+498,((0xfffffU & (IData)(
                                                     (0xfffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x15U))))),20);
        bufp->chgIData(oldp+499,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0xfffffULL 
                                                         & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                            >> 0x15U)))))),20);
        bufp->chgBit(oldp+500,((1U & (IData)((0xfffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+501,((1U & (IData)((0x1fffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x14U))))));
        bufp->chgIData(oldp+502,((0xfffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U)))),20);
        bufp->chgIData(oldp+503,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x14U))))),20);
        bufp->chgBit(oldp+504,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+505,((0xfffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U)))),20);
        bufp->chgIData(oldp+506,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x15U))))),20);
        bufp->chgBit(oldp+507,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+508,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+509,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
        bufp->chgIData(oldp+510,((0xfffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U)))),20);
        bufp->chgIData(oldp+511,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x15U))))),20);
        bufp->chgBit(oldp+512,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+513,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+514,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
        bufp->chgIData(oldp+515,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__m_r),21);
        bufp->chgIData(oldp+516,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__m_i),21);
        bufp->chgIData(oldp+517,((0x1fffffU & (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d4 
                                                       >> 0x15U)))),21);
        bufp->chgIData(oldp+518,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d4))),21);
        bufp->chgIData(oldp+519,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_r),22);
        bufp->chgIData(oldp+520,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_i),22);
        bufp->chgIData(oldp+521,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__sto_r),22);
        bufp->chgIData(oldp+522,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__sto_i),22);
        bufp->chgBit(oldp+523,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync));
        bufp->chgBit(oldp+524,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__stage));
        bufp->chgCData(oldp+525,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__sync_pipe),2);
        bufp->chgIData(oldp+526,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__o_r),21);
        bufp->chgIData(oldp+527,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__o_i),21);
        bufp->chgIData(oldp+528,((0x1fffffU & (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_i 
                                               >> 1U))),21);
        bufp->chgIData(oldp+529,((0x1fffffU & ((IData)(1U) 
                                               + (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_i 
                                                  >> 1U)))),21);
        bufp->chgBit(oldp+530,((1U & (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_i 
                                      >> 1U))));
        bufp->chgBit(oldp+531,((1U & vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_i)));
        bufp->chgIData(oldp+532,((0x1fffffU & (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_r 
                                               >> 1U))),21);
        bufp->chgIData(oldp+533,((0x1fffffU & ((IData)(1U) 
                                               + (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_r 
                                                  >> 1U)))),21);
        bufp->chgBit(oldp+534,((1U & (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_r 
                                      >> 1U))));
        bufp->chgBit(oldp+535,((1U & vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_r)));
        bufp->chgBit(oldp+536,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync));
        bufp->chgQData(oldp+537,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_a),34);
        bufp->chgQData(oldp+539,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_b),34);
        bufp->chgQData(oldp+541,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_c),42);
        bufp->chgBit(oldp+543,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_sync));
        bufp->chgBit(oldp+544,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__b_started));
        bufp->chgBit(oldp+545,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ob_sync));
        bufp->chgQData(oldp+546,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
        bufp->chgQData(oldp+548,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
        bufp->chgCData(oldp+550,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__iaddr),8);
        bufp->chgCData(oldp+551,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__oaddr),8);
        bufp->chgCData(oldp+552,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__nxt_oaddr),7);
        bufp->chgQData(oldp+553,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__pre_ovalue),36);
        bufp->chgQData(oldp+555,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left),34);
        bufp->chgQData(oldp+557,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right),34);
        bufp->chgBit(oldp+559,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+560,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+561,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef),42);
        bufp->chgIData(oldp+563,((0x1ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x11U)))),17);
        bufp->chgIData(oldp+564,((0x1ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))),17);
        bufp->chgIData(oldp+565,((0x1ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x11U)))),17);
        bufp->chgIData(oldp+566,((0x1ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right))),17);
        bufp->chgIData(oldp+567,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),21);
        bufp->chgIData(oldp+568,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),21);
        bufp->chgIData(oldp+569,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),18);
        bufp->chgIData(oldp+570,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),18);
        bufp->chgIData(oldp+571,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),18);
        bufp->chgIData(oldp+572,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),18);
        bufp->chgQData(oldp+573,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv),37);
        bufp->chgQData(oldp+575,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv),37);
        bufp->chgQData(oldp+577,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),39);
        bufp->chgQData(oldp+579,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),39);
        bufp->chgQData(oldp+581,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),41);
        bufp->chgQData(oldp+583,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one),41);
        bufp->chgQData(oldp+585,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two),41);
        bufp->chgBit(oldp+587,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x24U)))));
        bufp->chgQData(oldp+588,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x11U)))))))) 
                                   << 0x25U) | (0x1fffffffffULL 
                                                & VL_SHIFTL_QQI(37,37,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U)))),39);
        bufp->chgQData(oldp+590,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x23U)))))))) 
                                   << 0x25U) | ((QData)((IData)(
                                                                (0x3ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x12U))))) 
                                                << 0x13U))),39);
        bufp->chgQData(oldp+592,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved),37);
        bufp->chgQData(oldp+594,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),41);
        bufp->chgQData(oldp+596,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),41);
        bufp->chgIData(oldp+598,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
        bufp->chgIData(oldp+599,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
        bufp->chgIData(oldp+600,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
        bufp->chgIData(oldp+601,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
        bufp->chgIData(oldp+602,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),21);
        bufp->chgIData(oldp+603,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),21);
        bufp->chgIData(oldp+604,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),18);
        bufp->chgIData(oldp+605,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),18);
        bufp->chgIData(oldp+606,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),22);
        bufp->chgIData(oldp+607,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),19);
        bufp->chgIData(oldp+608,((0x3ffffU & (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(37,37,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                         >> 0x13U))))),18);
        bufp->chgIData(oldp+609,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x3ffffULL 
                                                         & (VL_SHIFTL_QQI(37,37,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                            >> 0x13U)))))),18);
        bufp->chgBit(oldp+610,((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(37,37,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+611,((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(37,37,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                 >> 0x12U))))));
        bufp->chgIData(oldp+612,((0x3ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x12U)))),18);
        bufp->chgIData(oldp+613,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x12U))))),18);
        bufp->chgBit(oldp+614,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x12U)))));
        bufp->chgIData(oldp+615,((0x3ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x13U)))),18);
        bufp->chgIData(oldp+616,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x13U))))),18);
        bufp->chgBit(oldp+617,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+618,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x12U)))));
        bufp->chgIData(oldp+619,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),18);
        bufp->chgIData(oldp+620,((0x3ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x13U)))),18);
        bufp->chgIData(oldp+621,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x13U))))),18);
        bufp->chgBit(oldp+622,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+623,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x12U)))));
        bufp->chgIData(oldp+624,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),18);
        bufp->chgBit(oldp+625,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync));
        bufp->chgQData(oldp+626,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_a),38);
        bufp->chgQData(oldp+628,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_b),38);
        bufp->chgQData(oldp+630,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_c),46);
        bufp->chgBit(oldp+632,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_sync));
        bufp->chgBit(oldp+633,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__b_started));
        bufp->chgBit(oldp+634,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ob_sync));
        bufp->chgQData(oldp+635,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
        bufp->chgQData(oldp+637,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
        bufp->chgCData(oldp+639,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__iaddr),5);
        bufp->chgQData(oldp+640,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[0]),38);
        bufp->chgQData(oldp+642,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[1]),38);
        bufp->chgQData(oldp+644,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[2]),38);
        bufp->chgQData(oldp+646,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[3]),38);
        bufp->chgQData(oldp+648,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[4]),38);
        bufp->chgQData(oldp+650,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[5]),38);
        bufp->chgQData(oldp+652,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[6]),38);
        bufp->chgQData(oldp+654,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[7]),38);
        bufp->chgQData(oldp+656,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[8]),38);
        bufp->chgQData(oldp+658,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[9]),38);
        bufp->chgQData(oldp+660,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[10]),38);
        bufp->chgQData(oldp+662,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[11]),38);
        bufp->chgQData(oldp+664,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[12]),38);
        bufp->chgQData(oldp+666,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[13]),38);
        bufp->chgQData(oldp+668,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[14]),38);
        bufp->chgQData(oldp+670,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[15]),38);
        bufp->chgCData(oldp+672,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__oaddr),5);
        bufp->chgQData(oldp+673,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[0]),38);
        bufp->chgQData(oldp+675,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[1]),38);
        bufp->chgQData(oldp+677,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[2]),38);
        bufp->chgQData(oldp+679,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[3]),38);
        bufp->chgQData(oldp+681,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[4]),38);
        bufp->chgQData(oldp+683,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[5]),38);
        bufp->chgQData(oldp+685,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[6]),38);
        bufp->chgQData(oldp+687,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[7]),38);
        bufp->chgQData(oldp+689,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[8]),38);
        bufp->chgQData(oldp+691,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[9]),38);
        bufp->chgQData(oldp+693,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[10]),38);
        bufp->chgQData(oldp+695,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[11]),38);
        bufp->chgQData(oldp+697,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[12]),38);
        bufp->chgQData(oldp+699,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[13]),38);
        bufp->chgQData(oldp+701,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[14]),38);
        bufp->chgQData(oldp+703,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[15]),38);
        bufp->chgCData(oldp+705,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__nxt_oaddr),4);
        bufp->chgQData(oldp+706,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__pre_ovalue),38);
        bufp->chgQData(oldp+708,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
        bufp->chgQData(oldp+710,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
        bufp->chgBit(oldp+712,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+713,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+714,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
        bufp->chgIData(oldp+716,((0x7ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+717,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
        bufp->chgIData(oldp+718,((0x7ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+719,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
        bufp->chgIData(oldp+720,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
        bufp->chgIData(oldp+721,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
        bufp->chgIData(oldp+722,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
        bufp->chgIData(oldp+723,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
        bufp->chgIData(oldp+724,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
        bufp->chgIData(oldp+725,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
        bufp->chgQData(oldp+726,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
        bufp->chgQData(oldp+728,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
        bufp->chgQData(oldp+730,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
        bufp->chgQData(oldp+732,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
        bufp->chgQData(oldp+734,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
        bufp->chgQData(oldp+736,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
        bufp->chgQData(oldp+738,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
        bufp->chgBit(oldp+740,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x28U)))));
        bufp->chgQData(oldp+741,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x13U)))))))) 
                                   << 0x29U) | (0x1ffffffffffULL 
                                                & VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
        bufp->chgQData(oldp+743,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x27U)))))))) 
                                   << 0x29U) | ((QData)((IData)(
                                                                (0xfffffU 
                                                                 & (IData)(
                                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x14U))))) 
                                                << 0x15U))),43);
        bufp->chgQData(oldp+745,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
        bufp->chgQData(oldp+747,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
        bufp->chgQData(oldp+749,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
        bufp->chgIData(oldp+751,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
        bufp->chgIData(oldp+752,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
        bufp->chgIData(oldp+753,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
        bufp->chgIData(oldp+754,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
        bufp->chgIData(oldp+755,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
        bufp->chgIData(oldp+756,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
        bufp->chgIData(oldp+757,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
        bufp->chgIData(oldp+758,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
        bufp->chgIData(oldp+759,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
        bufp->chgIData(oldp+760,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
        bufp->chgIData(oldp+761,((0x7ffffU & (IData)(
                                                     (0x7ffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x16U))))),19);
        bufp->chgIData(oldp+762,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x7ffffULL 
                                                         & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                            >> 0x16U)))))),19);
        bufp->chgBit(oldp+763,((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+764,((1U & (IData)((0xfffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x15U))))));
        bufp->chgIData(oldp+765,((0x7ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x15U)))),19);
        bufp->chgIData(oldp+766,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x15U))))),19);
        bufp->chgBit(oldp+767,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+768,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+769,((0x7ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x16U)))),19);
        bufp->chgIData(oldp+770,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x16U))))),19);
        bufp->chgBit(oldp+771,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+772,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x15U)))));
        bufp->chgIData(oldp+773,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),21);
        bufp->chgIData(oldp+774,((0x7ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x16U)))),19);
        bufp->chgIData(oldp+775,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x16U))))),19);
        bufp->chgBit(oldp+776,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+777,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x15U)))));
        bufp->chgIData(oldp+778,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),21);
        bufp->chgBit(oldp+779,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync));
        bufp->chgCData(oldp+780,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__pipeline),3);
        bufp->chgIData(oldp+781,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__sum_r),21);
        bufp->chgIData(oldp+782,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__sum_i),21);
        bufp->chgIData(oldp+783,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__diff_r),21);
        bufp->chgIData(oldp+784,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__diff_i),21);
        bufp->chgQData(oldp+785,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_a),42);
        bufp->chgQData(oldp+787,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_b_r)) 
                                   << 0x15U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_b_i)))),42);
        bufp->chgIData(oldp+789,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_b_r),21);
        bufp->chgIData(oldp+790,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_b_i),21);
        bufp->chgSData(oldp+791,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__iaddr),9);
        bufp->chgQData(oldp+792,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__imem[0]),40);
        bufp->chgQData(oldp+794,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__imem[1]),40);
        bufp->chgIData(oldp+796,((0xfffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__imem
                                                      [1U] 
                                                      >> 0x14U)))),20);
        bufp->chgIData(oldp+797,((0xfffffU & (IData)(
                                                     vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__imem
                                                     [1U]))),20);
        bufp->chgIData(oldp+798,((0xfffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d8 
                                                      >> 0x14U)))),20);
        bufp->chgIData(oldp+799,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d8))),20);
        bufp->chgQData(oldp+800,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__omem[0]),42);
        bufp->chgQData(oldp+802,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__omem[1]),42);
        bufp->chgIData(oldp+804,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_sum_r),21);
        bufp->chgIData(oldp+805,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_sum_i),21);
        bufp->chgIData(oldp+806,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_r),21);
        bufp->chgIData(oldp+807,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_i),21);
        bufp->chgIData(oldp+808,((0x1fffffU & (- vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_r))),21);
        bufp->chgIData(oldp+809,((0x1fffffU & (- vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_i))),21);
        bufp->chgBit(oldp+810,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync));
        bufp->chgIData(oldp+811,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_a),32);
        bufp->chgIData(oldp+812,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_b),32);
        bufp->chgQData(oldp+813,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_c),40);
        bufp->chgBit(oldp+815,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_sync));
        bufp->chgBit(oldp+816,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__b_started));
        bufp->chgBit(oldp+817,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ob_sync));
        bufp->chgQData(oldp+818,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x11U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),34);
        bufp->chgQData(oldp+820,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x11U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),34);
        bufp->chgSData(oldp+822,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__iaddr),9);
        bufp->chgSData(oldp+823,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__oaddr),9);
        bufp->chgCData(oldp+824,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__nxt_oaddr),8);
        bufp->chgQData(oldp+825,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__pre_ovalue),34);
        bufp->chgIData(oldp+827,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left),32);
        bufp->chgIData(oldp+828,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right),32);
        bufp->chgBit(oldp+829,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+830,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+831,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef),40);
        bufp->chgSData(oldp+833,((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+834,((0xffffU & vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left)),16);
        bufp->chgSData(oldp+835,((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+836,((0xffffU & vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right)),16);
        bufp->chgIData(oldp+837,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),20);
        bufp->chgIData(oldp+838,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),20);
        bufp->chgIData(oldp+839,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),17);
        bufp->chgIData(oldp+840,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),17);
        bufp->chgIData(oldp+841,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),17);
        bufp->chgIData(oldp+842,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),17);
        bufp->chgQData(oldp+843,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv),35);
        bufp->chgQData(oldp+845,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv),35);
        bufp->chgQData(oldp+847,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),37);
        bufp->chgQData(oldp+849,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),37);
        bufp->chgQData(oldp+851,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),39);
        bufp->chgQData(oldp+853,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one),39);
        bufp->chgQData(oldp+855,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two),39);
        bufp->chgBit(oldp+857,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x22U)))));
        bufp->chgQData(oldp+858,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x10U)))))))) 
                                   << 0x23U) | (0x7ffffffffULL 
                                                & VL_SHIFTL_QQI(35,35,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U)))),37);
        bufp->chgQData(oldp+860,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x21U)))))))) 
                                   << 0x23U) | ((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x11U))))) 
                                                << 0x12U))),37);
        bufp->chgQData(oldp+862,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved),35);
        bufp->chgQData(oldp+864,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),39);
        bufp->chgQData(oldp+866,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),39);
        bufp->chgIData(oldp+868,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),17);
        bufp->chgIData(oldp+869,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),17);
        bufp->chgIData(oldp+870,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),17);
        bufp->chgIData(oldp+871,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),17);
        bufp->chgIData(oldp+872,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),20);
        bufp->chgIData(oldp+873,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),20);
        bufp->chgIData(oldp+874,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),17);
        bufp->chgIData(oldp+875,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),17);
        bufp->chgIData(oldp+876,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),21);
        bufp->chgIData(oldp+877,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),18);
        bufp->chgIData(oldp+878,((0x1ffffU & (IData)(
                                                     (0x1ffffULL 
                                                      & (VL_SHIFTL_QQI(35,35,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                         >> 0x12U))))),17);
        bufp->chgIData(oldp+879,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x1ffffULL 
                                                         & (VL_SHIFTL_QQI(35,35,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                            >> 0x12U)))))),17);
        bufp->chgBit(oldp+880,((1U & (IData)((0x1ffffULL 
                                              & (VL_SHIFTL_QQI(35,35,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+881,((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(35,35,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                 >> 0x11U))))));
        bufp->chgIData(oldp+882,((0x1ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x11U)))),17);
        bufp->chgIData(oldp+883,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x11U))))),17);
        bufp->chgBit(oldp+884,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x11U)))));
        bufp->chgIData(oldp+885,((0x1ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x12U)))),17);
        bufp->chgIData(oldp+886,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x12U))))),17);
        bufp->chgBit(oldp+887,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+888,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x11U)))));
        bufp->chgIData(oldp+889,((0x1ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),17);
        bufp->chgIData(oldp+890,((0x1ffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x12U)))),17);
        bufp->chgIData(oldp+891,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x12U))))),17);
        bufp->chgBit(oldp+892,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+893,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x11U)))));
        bufp->chgIData(oldp+894,((0x1ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),17);
        bufp->chgBit(oldp+895,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync));
        bufp->chgQData(oldp+896,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_a),36);
        bufp->chgQData(oldp+898,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_b),36);
        bufp->chgQData(oldp+900,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_c),44);
        bufp->chgBit(oldp+902,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_sync));
        bufp->chgBit(oldp+903,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__b_started));
        bufp->chgBit(oldp+904,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ob_sync));
        bufp->chgQData(oldp+905,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
        bufp->chgQData(oldp+907,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
        bufp->chgCData(oldp+909,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__iaddr),6);
        bufp->chgQData(oldp+910,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[0]),36);
        bufp->chgQData(oldp+912,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[1]),36);
        bufp->chgQData(oldp+914,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[2]),36);
        bufp->chgQData(oldp+916,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[3]),36);
        bufp->chgQData(oldp+918,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[4]),36);
        bufp->chgQData(oldp+920,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[5]),36);
        bufp->chgQData(oldp+922,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[6]),36);
        bufp->chgQData(oldp+924,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[7]),36);
        bufp->chgQData(oldp+926,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[8]),36);
        bufp->chgQData(oldp+928,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[9]),36);
        bufp->chgQData(oldp+930,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[10]),36);
        bufp->chgQData(oldp+932,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[11]),36);
        bufp->chgQData(oldp+934,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[12]),36);
        bufp->chgQData(oldp+936,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[13]),36);
        bufp->chgQData(oldp+938,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[14]),36);
        bufp->chgQData(oldp+940,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[15]),36);
        bufp->chgQData(oldp+942,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[16]),36);
        bufp->chgQData(oldp+944,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[17]),36);
        bufp->chgQData(oldp+946,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[18]),36);
        bufp->chgQData(oldp+948,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[19]),36);
        bufp->chgQData(oldp+950,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[20]),36);
        bufp->chgQData(oldp+952,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[21]),36);
        bufp->chgQData(oldp+954,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[22]),36);
        bufp->chgQData(oldp+956,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[23]),36);
        bufp->chgQData(oldp+958,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[24]),36);
        bufp->chgQData(oldp+960,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[25]),36);
        bufp->chgQData(oldp+962,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[26]),36);
        bufp->chgQData(oldp+964,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[27]),36);
        bufp->chgQData(oldp+966,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[28]),36);
        bufp->chgQData(oldp+968,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[29]),36);
        bufp->chgQData(oldp+970,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[30]),36);
        bufp->chgQData(oldp+972,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[31]),36);
        bufp->chgCData(oldp+974,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__oaddr),6);
        bufp->chgQData(oldp+975,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[0]),38);
        bufp->chgQData(oldp+977,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[1]),38);
        bufp->chgQData(oldp+979,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[2]),38);
        bufp->chgQData(oldp+981,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[3]),38);
        bufp->chgQData(oldp+983,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[4]),38);
        bufp->chgQData(oldp+985,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[5]),38);
        bufp->chgQData(oldp+987,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[6]),38);
        bufp->chgQData(oldp+989,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[7]),38);
        bufp->chgQData(oldp+991,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[8]),38);
        bufp->chgQData(oldp+993,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[9]),38);
        bufp->chgQData(oldp+995,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[10]),38);
        bufp->chgQData(oldp+997,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[11]),38);
        bufp->chgQData(oldp+999,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[12]),38);
        bufp->chgQData(oldp+1001,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[13]),38);
        bufp->chgQData(oldp+1003,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[14]),38);
        bufp->chgQData(oldp+1005,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[15]),38);
        bufp->chgQData(oldp+1007,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[16]),38);
        bufp->chgQData(oldp+1009,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[17]),38);
        bufp->chgQData(oldp+1011,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[18]),38);
        bufp->chgQData(oldp+1013,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[19]),38);
        bufp->chgQData(oldp+1015,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[20]),38);
        bufp->chgQData(oldp+1017,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[21]),38);
        bufp->chgQData(oldp+1019,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[22]),38);
        bufp->chgQData(oldp+1021,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[23]),38);
        bufp->chgQData(oldp+1023,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[24]),38);
        bufp->chgQData(oldp+1025,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[25]),38);
        bufp->chgQData(oldp+1027,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[26]),38);
        bufp->chgQData(oldp+1029,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[27]),38);
        bufp->chgQData(oldp+1031,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[28]),38);
        bufp->chgQData(oldp+1033,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[29]),38);
        bufp->chgQData(oldp+1035,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[30]),38);
        bufp->chgQData(oldp+1037,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[31]),38);
        bufp->chgCData(oldp+1039,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__nxt_oaddr),5);
        bufp->chgQData(oldp+1040,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__pre_ovalue),38);
        bufp->chgQData(oldp+1042,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
        bufp->chgQData(oldp+1044,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
        bufp->chgBit(oldp+1046,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1047,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1048,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
        bufp->chgIData(oldp+1050,((0x3ffffU & (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                       >> 0x12U)))),18);
        bufp->chgIData(oldp+1051,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
        bufp->chgIData(oldp+1052,((0x3ffffU & (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                       >> 0x12U)))),18);
        bufp->chgIData(oldp+1053,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
        bufp->chgIData(oldp+1054,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
        bufp->chgIData(oldp+1055,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
        bufp->chgIData(oldp+1056,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
        bufp->chgIData(oldp+1057,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
        bufp->chgIData(oldp+1058,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
        bufp->chgIData(oldp+1059,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
        bufp->chgQData(oldp+1060,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
        bufp->chgQData(oldp+1062,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
        bufp->chgQData(oldp+1064,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
        bufp->chgQData(oldp+1066,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
        bufp->chgQData(oldp+1068,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
        bufp->chgQData(oldp+1070,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
        bufp->chgQData(oldp+1072,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
        bufp->chgBit(oldp+1074,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x26U)))));
        bufp->chgQData(oldp+1075,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x12U)))))))) 
                                    << 0x27U) | (0x7fffffffffULL 
                                                 & VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
        bufp->chgQData(oldp+1077,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x25U)))))))) 
                                    << 0x27U) | ((QData)((IData)(
                                                                 (0x7ffffU 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x13U))))) 
                                                 << 0x14U))),41);
        bufp->chgQData(oldp+1079,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
        bufp->chgQData(oldp+1081,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
        bufp->chgQData(oldp+1083,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
        bufp->chgIData(oldp+1085,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
        bufp->chgIData(oldp+1086,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
        bufp->chgIData(oldp+1087,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
        bufp->chgIData(oldp+1088,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
        bufp->chgIData(oldp+1089,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
        bufp->chgIData(oldp+1090,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
        bufp->chgIData(oldp+1091,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
        bufp->chgIData(oldp+1092,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
        bufp->chgIData(oldp+1093,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
        bufp->chgIData(oldp+1094,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
        bufp->chgIData(oldp+1095,((0x7ffffU & (IData)(
                                                      (0x7ffffULL 
                                                       & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                          >> 0x14U))))),19);
        bufp->chgIData(oldp+1096,((0x7ffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (0x7ffffULL 
                                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                             >> 0x14U)))))),19);
        bufp->chgBit(oldp+1097,((1U & (IData)((0x7ffffULL 
                                               & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1098,((1U & (IData)((0xfffffULL 
                                               & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                  >> 0x13U))))));
        bufp->chgIData(oldp+1099,((0x7ffffU & (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                       >> 0x13U)))),19);
        bufp->chgIData(oldp+1100,((0x7ffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                          >> 0x13U))))),19);
        bufp->chgBit(oldp+1101,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x13U)))));
        bufp->chgIData(oldp+1102,((0x7ffffU & (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                       >> 0x14U)))),19);
        bufp->chgIData(oldp+1103,((0x7ffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x14U))))),19);
        bufp->chgBit(oldp+1104,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1105,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x13U)))));
        bufp->chgIData(oldp+1106,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),19);
        bufp->chgIData(oldp+1107,((0x7ffffU & (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                       >> 0x14U)))),19);
        bufp->chgIData(oldp+1108,((0x7ffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x14U))))),19);
        bufp->chgBit(oldp+1109,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1110,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x13U)))));
        bufp->chgIData(oldp+1111,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),19);
        bufp->chgBit(oldp+1112,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync));
        bufp->chgQData(oldp+1113,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_a),40);
        bufp->chgQData(oldp+1115,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_b),40);
        bufp->chgQData(oldp+1117,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_c),48);
        bufp->chgBit(oldp+1119,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_sync));
        bufp->chgBit(oldp+1120,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__b_started));
        bufp->chgBit(oldp+1121,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ob_sync));
        bufp->chgQData(oldp+1122,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x14U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
        bufp->chgQData(oldp+1124,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x14U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
        bufp->chgCData(oldp+1126,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__iaddr),3);
        bufp->chgQData(oldp+1127,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__imem[0]),40);
        bufp->chgQData(oldp+1129,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__imem[1]),40);
        bufp->chgQData(oldp+1131,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__imem[2]),40);
        bufp->chgQData(oldp+1133,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__imem[3]),40);
        bufp->chgCData(oldp+1135,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__oaddr),3);
        bufp->chgQData(oldp+1136,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__omem[0]),40);
        bufp->chgQData(oldp+1138,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__omem[1]),40);
        bufp->chgQData(oldp+1140,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__omem[2]),40);
        bufp->chgQData(oldp+1142,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__omem[3]),40);
        bufp->chgCData(oldp+1144,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__nxt_oaddr),2);
        bufp->chgQData(oldp+1145,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__pre_ovalue),40);
        bufp->chgQData(oldp+1147,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left),40);
        bufp->chgQData(oldp+1149,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right),40);
        bufp->chgBit(oldp+1151,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1152,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1153,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef),48);
        bufp->chgIData(oldp+1155,((0xfffffU & (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                       >> 0x14U)))),20);
        bufp->chgIData(oldp+1156,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))),20);
        bufp->chgIData(oldp+1157,((0xfffffU & (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                       >> 0x14U)))),20);
        bufp->chgIData(oldp+1158,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right))),20);
        bufp->chgIData(oldp+1159,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),24);
        bufp->chgIData(oldp+1160,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),24);
        bufp->chgIData(oldp+1161,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),21);
        bufp->chgIData(oldp+1162,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),21);
        bufp->chgIData(oldp+1163,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),21);
        bufp->chgIData(oldp+1164,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),21);
        bufp->chgQData(oldp+1165,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv),43);
        bufp->chgQData(oldp+1167,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv),43);
        bufp->chgQData(oldp+1169,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),45);
        bufp->chgQData(oldp+1171,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),45);
        bufp->chgQData(oldp+1173,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),47);
        bufp->chgQData(oldp+1175,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one),47);
        bufp->chgQData(oldp+1177,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two),47);
        bufp->chgBit(oldp+1179,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x2aU)))));
        bufp->chgQData(oldp+1180,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x14U)))))))) 
                                    << 0x2bU) | (0x7ffffffffffULL 
                                                 & VL_SHIFTL_QQI(43,43,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U)))),45);
        bufp->chgQData(oldp+1182,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x29U)))))))) 
                                    << 0x2bU) | ((QData)((IData)(
                                                                 (0x1fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x15U))))) 
                                                 << 0x16U))),45);
        bufp->chgQData(oldp+1184,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved),43);
        bufp->chgQData(oldp+1186,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),47);
        bufp->chgQData(oldp+1188,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),47);
        bufp->chgIData(oldp+1190,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
        bufp->chgIData(oldp+1191,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
        bufp->chgIData(oldp+1192,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
        bufp->chgIData(oldp+1193,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
        bufp->chgIData(oldp+1194,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),24);
        bufp->chgIData(oldp+1195,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),24);
        bufp->chgIData(oldp+1196,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),21);
        bufp->chgIData(oldp+1197,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),21);
        bufp->chgIData(oldp+1198,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),25);
        bufp->chgIData(oldp+1199,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),22);
        bufp->chgIData(oldp+1200,((0xfffffU & (IData)(
                                                      (0xfffffULL 
                                                       & (VL_SHIFTL_QQI(43,43,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                          >> 0x17U))))),20);
        bufp->chgIData(oldp+1201,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (0xfffffULL 
                                                          & (VL_SHIFTL_QQI(43,43,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                             >> 0x17U)))))),20);
        bufp->chgBit(oldp+1202,((1U & (IData)((0xfffffULL 
                                               & (VL_SHIFTL_QQI(43,43,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1203,((1U & (IData)((0x1fffffULL 
                                               & (VL_SHIFTL_QQI(43,43,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                  >> 0x16U))))));
        bufp->chgIData(oldp+1204,((0xfffffU & (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                       >> 0x16U)))),20);
        bufp->chgIData(oldp+1205,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                          >> 0x16U))))),20);
        bufp->chgBit(oldp+1206,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1207,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x15U)))));
        bufp->chgIData(oldp+1208,((0xfffffU & (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                       >> 0x17U)))),20);
        bufp->chgIData(oldp+1209,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x17U))))),20);
        bufp->chgBit(oldp+1210,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1211,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1212,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),22);
        bufp->chgIData(oldp+1213,((0xfffffU & (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                       >> 0x17U)))),20);
        bufp->chgIData(oldp+1214,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x17U))))),20);
        bufp->chgBit(oldp+1215,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1216,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1217,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),22);
        bufp->chgBit(oldp+1218,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__br_sync));
        bufp->chgQData(oldp+1219,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__br_result),52);
        bufp->chgBit(oldp+1221,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s512));
        bufp->chgQData(oldp+1222,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d512),44);
        bufp->chgBit(oldp+1224,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s256));
        bufp->chgQData(oldp+1225,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d256),46);
        bufp->chgBit(oldp+1227,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s128));
        bufp->chgQData(oldp+1228,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d128),46);
        bufp->chgBit(oldp+1230,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s64));
        bufp->chgQData(oldp+1231,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d64),48);
        bufp->chgBit(oldp+1233,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s32));
        bufp->chgQData(oldp+1234,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d32),48);
        bufp->chgBit(oldp+1236,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s16));
        bufp->chgQData(oldp+1237,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d16),50);
        bufp->chgBit(oldp+1239,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s8));
        bufp->chgQData(oldp+1240,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d8),50);
        bufp->chgBit(oldp+1242,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s4));
        bufp->chgQData(oldp+1243,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d4),52);
        bufp->chgBit(oldp+1245,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s2));
        bufp->chgQData(oldp+1246,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__o_r)) 
                                    << 0x1aU) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__o_i)))),52);
        bufp->chgBit(oldp+1248,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__r_br_started) 
                                 | (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s2))));
        bufp->chgBit(oldp+1249,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__r_br_started));
        bufp->chgBit(oldp+1250,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT____Vcellinp__revstage__i_ce));
        bufp->chgSData(oldp+1251,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr),10);
        bufp->chgSData(oldp+1252,(((0x200U & ((~ ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                  >> 9U)) 
                                              << 9U)) 
                                   | ((0x100U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                   << 6U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                << 4U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                   << 2U)) 
                                               | ((0x10U 
                                                   & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                         >> 2U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                            >> 4U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                               >> 6U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                                 >> 8U)))))))))))),10);
        bufp->chgBit(oldp+1253,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__in_reset));
        bufp->chgBit(oldp+1254,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync));
        bufp->chgQData(oldp+1255,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_a),46);
        bufp->chgQData(oldp+1257,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_b),46);
        bufp->chgQData(oldp+1259,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_c),54);
        bufp->chgBit(oldp+1261,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_sync));
        bufp->chgBit(oldp+1262,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__b_started));
        bufp->chgBit(oldp+1263,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ob_sync));
        bufp->chgQData(oldp+1264,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x17U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),46);
        bufp->chgQData(oldp+1266,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x17U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),46);
        bufp->chgCData(oldp+1268,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__iaddr),7);
        bufp->chgCData(oldp+1269,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__oaddr),7);
        bufp->chgCData(oldp+1270,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__nxt_oaddr),6);
        bufp->chgQData(oldp+1271,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__pre_ovalue),46);
        bufp->chgBit(oldp+1273,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_sync) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
        bufp->chgQData(oldp+1274,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left),46);
        bufp->chgQData(oldp+1276,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right),46);
        bufp->chgBit(oldp+1278,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1279,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1280,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef),54);
        bufp->chgIData(oldp+1282,((0x7fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x17U)))),23);
        bufp->chgIData(oldp+1283,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))),23);
        bufp->chgIData(oldp+1284,((0x7fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x17U)))),23);
        bufp->chgIData(oldp+1285,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right))),23);
        bufp->chgIData(oldp+1286,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),27);
        bufp->chgIData(oldp+1287,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),27);
        bufp->chgIData(oldp+1288,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),24);
        bufp->chgIData(oldp+1289,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),24);
        bufp->chgIData(oldp+1290,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),24);
        bufp->chgIData(oldp+1291,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),24);
        bufp->chgQData(oldp+1292,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv),49);
        bufp->chgQData(oldp+1294,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv),49);
        bufp->chgQData(oldp+1296,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),51);
        bufp->chgQData(oldp+1298,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),51);
        bufp->chgQData(oldp+1300,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),53);
        bufp->chgQData(oldp+1302,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one),53);
        bufp->chgQData(oldp+1304,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two),53);
        bufp->chgBit(oldp+1306,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x30U)))));
        bufp->chgQData(oldp+1307,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x17U)))))))) 
                                    << 0x31U) | (0x1ffffffffffffULL 
                                                 & VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U)))),51);
        bufp->chgQData(oldp+1309,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x2fU)))))))) 
                                    << 0x31U) | ((QData)((IData)(
                                                                 (0xffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x18U))))) 
                                                 << 0x19U))),51);
        bufp->chgQData(oldp+1311,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved),49);
        bufp->chgQData(oldp+1313,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),53);
        bufp->chgQData(oldp+1315,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),53);
        bufp->chgIData(oldp+1317,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),23);
        bufp->chgIData(oldp+1318,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),23);
        bufp->chgIData(oldp+1319,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),23);
        bufp->chgIData(oldp+1320,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),23);
        bufp->chgIData(oldp+1321,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),27);
        bufp->chgIData(oldp+1322,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),27);
        bufp->chgIData(oldp+1323,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),24);
        bufp->chgIData(oldp+1324,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),24);
        bufp->chgIData(oldp+1325,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),28);
        bufp->chgIData(oldp+1326,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),25);
        bufp->chgIData(oldp+1327,((0x7fffffU & (IData)(
                                                       (0x7fffffULL 
                                                        & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                           >> 0x1aU))))),23);
        bufp->chgIData(oldp+1328,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (0x7fffffULL 
                                                           & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                              >> 0x1aU)))))),23);
        bufp->chgBit(oldp+1329,((1U & (IData)((0x7fffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1330,((1U & (IData)((0xffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                  >> 0x19U))))));
        bufp->chgIData(oldp+1331,((0x7fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x19U)))),23);
        bufp->chgIData(oldp+1332,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x19U))))),23);
        bufp->chgBit(oldp+1333,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1334,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x18U)))));
        bufp->chgIData(oldp+1335,((0x7fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x1aU)))),23);
        bufp->chgIData(oldp+1336,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x1aU))))),23);
        bufp->chgBit(oldp+1337,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1338,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1339,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),25);
        bufp->chgIData(oldp+1340,((0x7fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x1aU)))),23);
        bufp->chgIData(oldp+1341,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x1aU))))),23);
        bufp->chgBit(oldp+1342,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1343,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1344,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),25);
        bufp->chgBit(oldp+1345,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync));
        bufp->chgQData(oldp+1346,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_a),48);
        bufp->chgQData(oldp+1348,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_b),48);
        bufp->chgQData(oldp+1350,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_c),56);
        bufp->chgBit(oldp+1352,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_sync));
        bufp->chgBit(oldp+1353,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__b_started));
        bufp->chgBit(oldp+1354,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ob_sync));
        bufp->chgQData(oldp+1355,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x19U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),50);
        bufp->chgQData(oldp+1357,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x19U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),50);
        bufp->chgCData(oldp+1359,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__iaddr),4);
        bufp->chgQData(oldp+1360,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[0]),48);
        bufp->chgQData(oldp+1362,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[1]),48);
        bufp->chgQData(oldp+1364,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[2]),48);
        bufp->chgQData(oldp+1366,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[3]),48);
        bufp->chgQData(oldp+1368,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[4]),48);
        bufp->chgQData(oldp+1370,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[5]),48);
        bufp->chgQData(oldp+1372,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[6]),48);
        bufp->chgQData(oldp+1374,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[7]),48);
        bufp->chgCData(oldp+1376,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__oaddr),4);
        bufp->chgQData(oldp+1377,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[0]),50);
        bufp->chgQData(oldp+1379,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[1]),50);
        bufp->chgQData(oldp+1381,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[2]),50);
        bufp->chgQData(oldp+1383,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[3]),50);
        bufp->chgQData(oldp+1385,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[4]),50);
        bufp->chgQData(oldp+1387,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[5]),50);
        bufp->chgQData(oldp+1389,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[6]),50);
        bufp->chgQData(oldp+1391,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[7]),50);
        bufp->chgCData(oldp+1393,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__nxt_oaddr),3);
        bufp->chgQData(oldp+1394,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__pre_ovalue),50);
        bufp->chgBit(oldp+1396,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_sync) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
        bufp->chgQData(oldp+1397,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left),48);
        bufp->chgQData(oldp+1399,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right),48);
        bufp->chgBit(oldp+1401,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1402,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1403,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef),56);
        bufp->chgIData(oldp+1405,((0xffffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+1406,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))),24);
        bufp->chgIData(oldp+1407,((0xffffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+1408,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right))),24);
        bufp->chgIData(oldp+1409,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),28);
        bufp->chgIData(oldp+1410,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),28);
        bufp->chgIData(oldp+1411,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),25);
        bufp->chgIData(oldp+1412,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),25);
        bufp->chgIData(oldp+1413,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),25);
        bufp->chgIData(oldp+1414,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),25);
        bufp->chgQData(oldp+1415,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv),51);
        bufp->chgQData(oldp+1417,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv),51);
        bufp->chgQData(oldp+1419,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),53);
        bufp->chgQData(oldp+1421,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),53);
        bufp->chgQData(oldp+1423,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),55);
        bufp->chgQData(oldp+1425,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one),55);
        bufp->chgQData(oldp+1427,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two),55);
        bufp->chgBit(oldp+1429,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x32U)))));
        bufp->chgQData(oldp+1430,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x18U)))))))) 
                                    << 0x33U) | (0x7ffffffffffffULL 
                                                 & VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU)))),53);
        bufp->chgQData(oldp+1432,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x31U)))))))) 
                                    << 0x33U) | ((QData)((IData)(
                                                                 (0x1ffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x19U))))) 
                                                 << 0x1aU))),53);
        bufp->chgQData(oldp+1434,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved),51);
        bufp->chgQData(oldp+1436,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),55);
        bufp->chgQData(oldp+1438,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),55);
        bufp->chgIData(oldp+1440,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),25);
        bufp->chgIData(oldp+1441,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),25);
        bufp->chgIData(oldp+1442,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),25);
        bufp->chgIData(oldp+1443,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),25);
        bufp->chgIData(oldp+1444,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),28);
        bufp->chgIData(oldp+1445,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),28);
        bufp->chgIData(oldp+1446,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),25);
        bufp->chgIData(oldp+1447,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),25);
        bufp->chgIData(oldp+1448,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),29);
        bufp->chgIData(oldp+1449,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),26);
        bufp->chgIData(oldp+1450,((0x1ffffffU & (IData)(
                                                        (0x1ffffffULL 
                                                         & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                            >> 0x1aU))))),25);
        bufp->chgIData(oldp+1451,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (0x1ffffffULL 
                                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                               >> 0x1aU)))))),25);
        bufp->chgBit(oldp+1452,((1U & (IData)((0x1ffffffULL 
                                               & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1453,((1U & (IData)((0x3ffffffULL 
                                               & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                  >> 0x19U))))));
        bufp->chgIData(oldp+1454,((0x1ffffffU & (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x19U)))),25);
        bufp->chgIData(oldp+1455,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                            >> 0x19U))))),25);
        bufp->chgBit(oldp+1456,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1457,((0x1ffffffU & (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x1aU)))),25);
        bufp->chgIData(oldp+1458,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                            >> 0x1aU))))),25);
        bufp->chgBit(oldp+1459,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1460,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1461,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),25);
        bufp->chgIData(oldp+1462,((0x1ffffffU & (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x1aU)))),25);
        bufp->chgIData(oldp+1463,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                            >> 0x1aU))))),25);
        bufp->chgBit(oldp+1464,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1465,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1466,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),25);
        bufp->chgIData(oldp+1467,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__m_r),26);
        bufp->chgIData(oldp+1468,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__m_i),26);
        bufp->chgIData(oldp+1469,((0x3ffffffU & (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d4 
                                                         >> 0x1aU)))),26);
        bufp->chgIData(oldp+1470,((0x3ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d4))),26);
        bufp->chgIData(oldp+1471,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_r),27);
        bufp->chgIData(oldp+1472,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_i),27);
        bufp->chgIData(oldp+1473,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__sto_r),27);
        bufp->chgIData(oldp+1474,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__sto_i),27);
        bufp->chgBit(oldp+1475,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync));
        bufp->chgBit(oldp+1476,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__stage));
        bufp->chgCData(oldp+1477,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe),2);
        bufp->chgIData(oldp+1478,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__o_r),26);
        bufp->chgIData(oldp+1479,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__o_i),26);
        bufp->chgIData(oldp+1480,((0x3ffffffU & (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_i 
                                                 >> 1U))),26);
        bufp->chgIData(oldp+1481,((0x3ffffffU & ((IData)(1U) 
                                                 + 
                                                 (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_i 
                                                  >> 1U)))),26);
        bufp->chgBit(oldp+1482,((1U & (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_i 
                                       >> 1U))));
        bufp->chgBit(oldp+1483,((1U & vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_i)));
        bufp->chgIData(oldp+1484,((0x3ffffffU & (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_r 
                                                 >> 1U))),26);
        bufp->chgIData(oldp+1485,((0x3ffffffU & ((IData)(1U) 
                                                 + 
                                                 (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_r 
                                                  >> 1U)))),26);
        bufp->chgBit(oldp+1486,((1U & (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_r 
                                       >> 1U))));
        bufp->chgBit(oldp+1487,((1U & vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_r)));
        bufp->chgBit(oldp+1488,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync));
        bufp->chgQData(oldp+1489,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_a),44);
        bufp->chgQData(oldp+1491,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_b),44);
        bufp->chgQData(oldp+1493,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_c),52);
        bufp->chgBit(oldp+1495,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_sync));
        bufp->chgBit(oldp+1496,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__b_started));
        bufp->chgBit(oldp+1497,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ob_sync));
        bufp->chgQData(oldp+1498,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x17U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),46);
        bufp->chgQData(oldp+1500,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x17U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),46);
        bufp->chgCData(oldp+1502,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__iaddr),8);
        bufp->chgCData(oldp+1503,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__oaddr),8);
        bufp->chgCData(oldp+1504,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__nxt_oaddr),7);
        bufp->chgQData(oldp+1505,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__pre_ovalue),46);
        bufp->chgBit(oldp+1507,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_sync) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
        bufp->chgQData(oldp+1508,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left),44);
        bufp->chgQData(oldp+1510,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right),44);
        bufp->chgBit(oldp+1512,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1513,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1514,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef),52);
        bufp->chgIData(oldp+1516,((0x3fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x16U)))),22);
        bufp->chgIData(oldp+1517,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))),22);
        bufp->chgIData(oldp+1518,((0x3fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x16U)))),22);
        bufp->chgIData(oldp+1519,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right))),22);
        bufp->chgIData(oldp+1520,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),26);
        bufp->chgIData(oldp+1521,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),26);
        bufp->chgIData(oldp+1522,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),23);
        bufp->chgIData(oldp+1523,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),23);
        bufp->chgIData(oldp+1524,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),23);
        bufp->chgIData(oldp+1525,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),23);
        bufp->chgQData(oldp+1526,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv),47);
        bufp->chgQData(oldp+1528,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv),47);
        bufp->chgQData(oldp+1530,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),49);
        bufp->chgQData(oldp+1532,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),49);
        bufp->chgQData(oldp+1534,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),51);
        bufp->chgQData(oldp+1536,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one),51);
        bufp->chgQData(oldp+1538,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two),51);
        bufp->chgBit(oldp+1540,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x2eU)))));
        bufp->chgQData(oldp+1541,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x16U)))))))) 
                                    << 0x2fU) | (0x7fffffffffffULL 
                                                 & VL_SHIFTL_QQI(47,47,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U)))),49);
        bufp->chgQData(oldp+1543,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x2dU)))))))) 
                                    << 0x2fU) | ((QData)((IData)(
                                                                 (0x7fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x17U))))) 
                                                 << 0x18U))),49);
        bufp->chgQData(oldp+1545,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved),47);
        bufp->chgQData(oldp+1547,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),51);
        bufp->chgQData(oldp+1549,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),51);
        bufp->chgIData(oldp+1551,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),23);
        bufp->chgIData(oldp+1552,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),23);
        bufp->chgIData(oldp+1553,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),23);
        bufp->chgIData(oldp+1554,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),23);
        bufp->chgIData(oldp+1555,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),26);
        bufp->chgIData(oldp+1556,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),26);
        bufp->chgIData(oldp+1557,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),23);
        bufp->chgIData(oldp+1558,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),23);
        bufp->chgIData(oldp+1559,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),27);
        bufp->chgIData(oldp+1560,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),24);
        bufp->chgIData(oldp+1561,((0x7fffffU & (IData)(
                                                       (0x7fffffULL 
                                                        & (VL_SHIFTL_QQI(47,47,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                           >> 0x18U))))),23);
        bufp->chgIData(oldp+1562,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (0x7fffffULL 
                                                           & (VL_SHIFTL_QQI(47,47,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                              >> 0x18U)))))),23);
        bufp->chgBit(oldp+1563,((1U & (IData)((0x7fffffULL 
                                               & (VL_SHIFTL_QQI(47,47,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1564,((1U & (IData)((0xffffffULL 
                                               & (VL_SHIFTL_QQI(47,47,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                  >> 0x17U))))));
        bufp->chgIData(oldp+1565,((0x7fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x17U)))),23);
        bufp->chgIData(oldp+1566,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x17U))))),23);
        bufp->chgBit(oldp+1567,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x17U)))));
        bufp->chgIData(oldp+1568,((0x7fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x18U)))),23);
        bufp->chgIData(oldp+1569,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x18U))))),23);
        bufp->chgBit(oldp+1570,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1571,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x17U)))));
        bufp->chgIData(oldp+1572,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),23);
        bufp->chgIData(oldp+1573,((0x7fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x18U)))),23);
        bufp->chgIData(oldp+1574,((0x7fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x18U))))),23);
        bufp->chgBit(oldp+1575,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1576,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x17U)))));
        bufp->chgIData(oldp+1577,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),23);
        bufp->chgBit(oldp+1578,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync));
        bufp->chgQData(oldp+1579,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_a),48);
        bufp->chgQData(oldp+1581,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_b),48);
        bufp->chgQData(oldp+1583,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_c),56);
        bufp->chgBit(oldp+1585,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_sync));
        bufp->chgBit(oldp+1586,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__b_started));
        bufp->chgBit(oldp+1587,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ob_sync));
        bufp->chgQData(oldp+1588,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x18U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),48);
        bufp->chgQData(oldp+1590,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x18U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),48);
        bufp->chgCData(oldp+1592,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__iaddr),5);
        bufp->chgQData(oldp+1593,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[0]),48);
        bufp->chgQData(oldp+1595,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[1]),48);
        bufp->chgQData(oldp+1597,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[2]),48);
        bufp->chgQData(oldp+1599,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[3]),48);
        bufp->chgQData(oldp+1601,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[4]),48);
        bufp->chgQData(oldp+1603,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[5]),48);
        bufp->chgQData(oldp+1605,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[6]),48);
        bufp->chgQData(oldp+1607,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[7]),48);
        bufp->chgQData(oldp+1609,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[8]),48);
        bufp->chgQData(oldp+1611,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[9]),48);
        bufp->chgQData(oldp+1613,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[10]),48);
        bufp->chgQData(oldp+1615,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[11]),48);
        bufp->chgQData(oldp+1617,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[12]),48);
        bufp->chgQData(oldp+1619,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[13]),48);
        bufp->chgQData(oldp+1621,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[14]),48);
        bufp->chgQData(oldp+1623,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[15]),48);
        bufp->chgCData(oldp+1625,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__oaddr),5);
        bufp->chgQData(oldp+1626,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[0]),48);
        bufp->chgQData(oldp+1628,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[1]),48);
        bufp->chgQData(oldp+1630,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[2]),48);
        bufp->chgQData(oldp+1632,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[3]),48);
        bufp->chgQData(oldp+1634,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[4]),48);
        bufp->chgQData(oldp+1636,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[5]),48);
        bufp->chgQData(oldp+1638,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[6]),48);
        bufp->chgQData(oldp+1640,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[7]),48);
        bufp->chgQData(oldp+1642,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[8]),48);
        bufp->chgQData(oldp+1644,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[9]),48);
        bufp->chgQData(oldp+1646,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[10]),48);
        bufp->chgQData(oldp+1648,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[11]),48);
        bufp->chgQData(oldp+1650,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[12]),48);
        bufp->chgQData(oldp+1652,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[13]),48);
        bufp->chgQData(oldp+1654,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[14]),48);
        bufp->chgQData(oldp+1656,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[15]),48);
        bufp->chgCData(oldp+1658,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__nxt_oaddr),4);
        bufp->chgQData(oldp+1659,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__pre_ovalue),48);
        bufp->chgBit(oldp+1661,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_sync) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
        bufp->chgQData(oldp+1662,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left),48);
        bufp->chgQData(oldp+1664,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right),48);
        bufp->chgBit(oldp+1666,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1667,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1668,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef),56);
        bufp->chgIData(oldp+1670,((0xffffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+1671,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))),24);
        bufp->chgIData(oldp+1672,((0xffffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+1673,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right))),24);
        bufp->chgIData(oldp+1674,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),28);
        bufp->chgIData(oldp+1675,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),28);
        bufp->chgIData(oldp+1676,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),25);
        bufp->chgIData(oldp+1677,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),25);
        bufp->chgIData(oldp+1678,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),25);
        bufp->chgIData(oldp+1679,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),25);
        bufp->chgQData(oldp+1680,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv),51);
        bufp->chgQData(oldp+1682,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv),51);
        bufp->chgQData(oldp+1684,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),53);
        bufp->chgQData(oldp+1686,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),53);
        bufp->chgQData(oldp+1688,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),55);
        bufp->chgQData(oldp+1690,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one),55);
        bufp->chgQData(oldp+1692,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two),55);
        bufp->chgBit(oldp+1694,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x32U)))));
        bufp->chgQData(oldp+1695,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x18U)))))))) 
                                    << 0x33U) | (0x7ffffffffffffULL 
                                                 & VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU)))),53);
        bufp->chgQData(oldp+1697,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x31U)))))))) 
                                    << 0x33U) | ((QData)((IData)(
                                                                 (0x1ffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x19U))))) 
                                                 << 0x1aU))),53);
        bufp->chgQData(oldp+1699,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved),51);
        bufp->chgQData(oldp+1701,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),55);
        bufp->chgQData(oldp+1703,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),55);
        bufp->chgIData(oldp+1705,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),24);
        bufp->chgIData(oldp+1706,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),24);
        bufp->chgIData(oldp+1707,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),24);
        bufp->chgIData(oldp+1708,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),24);
        bufp->chgIData(oldp+1709,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),28);
        bufp->chgIData(oldp+1710,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),28);
        bufp->chgIData(oldp+1711,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),25);
        bufp->chgIData(oldp+1712,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),25);
        bufp->chgIData(oldp+1713,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),29);
        bufp->chgIData(oldp+1714,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),26);
        bufp->chgIData(oldp+1715,((0xffffffU & (IData)(
                                                       (0xffffffULL 
                                                        & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                           >> 0x1bU))))),24);
        bufp->chgIData(oldp+1716,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (0xffffffULL 
                                                           & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                              >> 0x1bU)))))),24);
        bufp->chgBit(oldp+1717,((1U & (IData)((0xffffffULL 
                                               & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1718,((1U & (IData)((0x1ffffffULL 
                                               & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                  >> 0x1aU))))));
        bufp->chgIData(oldp+1719,((0xffffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x1aU)))),24);
        bufp->chgIData(oldp+1720,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x1aU))))),24);
        bufp->chgBit(oldp+1721,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1722,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1723,((0xffffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x1bU)))),24);
        bufp->chgIData(oldp+1724,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x1bU))))),24);
        bufp->chgBit(oldp+1725,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1726,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1aU)))));
        bufp->chgIData(oldp+1727,((0x3ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),26);
        bufp->chgIData(oldp+1728,((0xffffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x1bU)))),24);
        bufp->chgIData(oldp+1729,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x1bU))))),24);
        bufp->chgBit(oldp+1730,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1731,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1aU)))));
        bufp->chgIData(oldp+1732,((0x3ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),26);
        bufp->chgBit(oldp+1733,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync));
        bufp->chgCData(oldp+1734,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__pipeline),3);
        bufp->chgIData(oldp+1735,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__sum_r),26);
        bufp->chgIData(oldp+1736,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__sum_i),26);
        bufp->chgIData(oldp+1737,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__diff_r),26);
        bufp->chgIData(oldp+1738,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__diff_i),26);
        bufp->chgQData(oldp+1739,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_a),52);
        bufp->chgQData(oldp+1741,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_b_r)) 
                                    << 0x1aU) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_b_i)))),52);
        bufp->chgIData(oldp+1743,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_b_r),26);
        bufp->chgIData(oldp+1744,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_b_i),26);
        bufp->chgSData(oldp+1745,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__iaddr),9);
        bufp->chgQData(oldp+1746,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__imem[0]),50);
        bufp->chgQData(oldp+1748,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__imem[1]),50);
        bufp->chgIData(oldp+1750,((0x1ffffffU & (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__imem
                                                         [1U] 
                                                         >> 0x19U)))),25);
        bufp->chgIData(oldp+1751,((0x1ffffffU & (IData)(
                                                        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__imem
                                                        [1U]))),25);
        bufp->chgIData(oldp+1752,((0x1ffffffU & (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d8 
                                                         >> 0x19U)))),25);
        bufp->chgIData(oldp+1753,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d8))),25);
        bufp->chgQData(oldp+1754,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__omem[0]),52);
        bufp->chgQData(oldp+1756,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__omem[1]),52);
        bufp->chgIData(oldp+1758,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_sum_r),26);
        bufp->chgIData(oldp+1759,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_sum_i),26);
        bufp->chgIData(oldp+1760,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_r),26);
        bufp->chgIData(oldp+1761,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_i),26);
        bufp->chgIData(oldp+1762,((0x3ffffffU & (- vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_r))),26);
        bufp->chgIData(oldp+1763,((0x3ffffffU & (- vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_i))),26);
        bufp->chgBit(oldp+1764,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync));
        bufp->chgQData(oldp+1765,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_a),42);
        bufp->chgQData(oldp+1767,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_b),42);
        bufp->chgQData(oldp+1769,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_c),50);
        bufp->chgBit(oldp+1771,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_sync));
        bufp->chgBit(oldp+1772,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__b_started));
        bufp->chgBit(oldp+1773,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ob_sync));
        bufp->chgQData(oldp+1774,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x16U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),44);
        bufp->chgQData(oldp+1776,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x16U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),44);
        bufp->chgSData(oldp+1778,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__iaddr),9);
        bufp->chgSData(oldp+1779,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__oaddr),9);
        bufp->chgCData(oldp+1780,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__nxt_oaddr),8);
        bufp->chgQData(oldp+1781,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__pre_ovalue),44);
        bufp->chgBit(oldp+1783,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_sync) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
        bufp->chgQData(oldp+1784,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left),42);
        bufp->chgQData(oldp+1786,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right),42);
        bufp->chgBit(oldp+1788,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1789,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1790,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef),50);
        bufp->chgIData(oldp+1792,((0x1fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x15U)))),21);
        bufp->chgIData(oldp+1793,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left))),21);
        bufp->chgIData(oldp+1794,((0x1fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x15U)))),21);
        bufp->chgIData(oldp+1795,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right))),21);
        bufp->chgIData(oldp+1796,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),25);
        bufp->chgIData(oldp+1797,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),25);
        bufp->chgIData(oldp+1798,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),22);
        bufp->chgIData(oldp+1799,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),22);
        bufp->chgIData(oldp+1800,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),22);
        bufp->chgIData(oldp+1801,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),22);
        bufp->chgQData(oldp+1802,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv),45);
        bufp->chgQData(oldp+1804,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv),45);
        bufp->chgQData(oldp+1806,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),47);
        bufp->chgQData(oldp+1808,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),47);
        bufp->chgQData(oldp+1810,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),49);
        bufp->chgQData(oldp+1812,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one),49);
        bufp->chgQData(oldp+1814,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two),49);
        bufp->chgBit(oldp+1816,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x2cU)))));
        bufp->chgQData(oldp+1817,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x15U)))))))) 
                                    << 0x2dU) | (0x1fffffffffffULL 
                                                 & VL_SHIFTL_QQI(45,45,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U)))),47);
        bufp->chgQData(oldp+1819,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x2bU)))))))) 
                                    << 0x2dU) | ((QData)((IData)(
                                                                 (0x3fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x16U))))) 
                                                 << 0x17U))),47);
        bufp->chgQData(oldp+1821,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved),45);
        bufp->chgQData(oldp+1823,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),49);
        bufp->chgQData(oldp+1825,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),49);
        bufp->chgIData(oldp+1827,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),22);
        bufp->chgIData(oldp+1828,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),22);
        bufp->chgIData(oldp+1829,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),22);
        bufp->chgIData(oldp+1830,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),22);
        bufp->chgIData(oldp+1831,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),25);
        bufp->chgIData(oldp+1832,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),25);
        bufp->chgIData(oldp+1833,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),22);
        bufp->chgIData(oldp+1834,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),22);
        bufp->chgIData(oldp+1835,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),26);
        bufp->chgIData(oldp+1836,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),23);
        bufp->chgIData(oldp+1837,((0x3fffffU & (IData)(
                                                       (0x3fffffULL 
                                                        & (VL_SHIFTL_QQI(45,45,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                           >> 0x17U))))),22);
        bufp->chgIData(oldp+1838,((0x3fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (0x3fffffULL 
                                                           & (VL_SHIFTL_QQI(45,45,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                              >> 0x17U)))))),22);
        bufp->chgBit(oldp+1839,((1U & (IData)((0x3fffffULL 
                                               & (VL_SHIFTL_QQI(45,45,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1840,((1U & (IData)((0x7fffffULL 
                                               & (VL_SHIFTL_QQI(45,45,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                  >> 0x16U))))));
        bufp->chgIData(oldp+1841,((0x3fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x16U)))),22);
        bufp->chgIData(oldp+1842,((0x3fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x16U))))),22);
        bufp->chgBit(oldp+1843,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1844,((0x3fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x17U)))),22);
        bufp->chgIData(oldp+1845,((0x3fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x17U))))),22);
        bufp->chgBit(oldp+1846,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1847,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1848,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),22);
        bufp->chgIData(oldp+1849,((0x3fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x17U)))),22);
        bufp->chgIData(oldp+1850,((0x3fffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x17U))))),22);
        bufp->chgBit(oldp+1851,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1852,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1853,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),22);
        bufp->chgBit(oldp+1854,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync));
        bufp->chgQData(oldp+1855,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_a),46);
        bufp->chgQData(oldp+1857,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_b),46);
        bufp->chgQData(oldp+1859,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_c),54);
        bufp->chgBit(oldp+1861,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_sync));
        bufp->chgBit(oldp+1862,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__b_started));
        bufp->chgBit(oldp+1863,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ob_sync));
        bufp->chgQData(oldp+1864,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x18U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),48);
        bufp->chgQData(oldp+1866,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x18U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),48);
        bufp->chgCData(oldp+1868,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__iaddr),6);
        bufp->chgQData(oldp+1869,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[0]),46);
        bufp->chgQData(oldp+1871,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[1]),46);
        bufp->chgQData(oldp+1873,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[2]),46);
        bufp->chgQData(oldp+1875,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[3]),46);
        bufp->chgQData(oldp+1877,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[4]),46);
        bufp->chgQData(oldp+1879,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[5]),46);
        bufp->chgQData(oldp+1881,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[6]),46);
        bufp->chgQData(oldp+1883,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[7]),46);
        bufp->chgQData(oldp+1885,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[8]),46);
        bufp->chgQData(oldp+1887,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[9]),46);
        bufp->chgQData(oldp+1889,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[10]),46);
        bufp->chgQData(oldp+1891,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[11]),46);
        bufp->chgQData(oldp+1893,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[12]),46);
        bufp->chgQData(oldp+1895,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[13]),46);
        bufp->chgQData(oldp+1897,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[14]),46);
        bufp->chgQData(oldp+1899,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[15]),46);
        bufp->chgQData(oldp+1901,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[16]),46);
        bufp->chgQData(oldp+1903,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[17]),46);
        bufp->chgQData(oldp+1905,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[18]),46);
        bufp->chgQData(oldp+1907,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[19]),46);
        bufp->chgQData(oldp+1909,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[20]),46);
        bufp->chgQData(oldp+1911,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[21]),46);
        bufp->chgQData(oldp+1913,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[22]),46);
        bufp->chgQData(oldp+1915,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[23]),46);
        bufp->chgQData(oldp+1917,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[24]),46);
        bufp->chgQData(oldp+1919,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[25]),46);
        bufp->chgQData(oldp+1921,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[26]),46);
        bufp->chgQData(oldp+1923,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[27]),46);
        bufp->chgQData(oldp+1925,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[28]),46);
        bufp->chgQData(oldp+1927,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[29]),46);
        bufp->chgQData(oldp+1929,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[30]),46);
        bufp->chgQData(oldp+1931,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[31]),46);
        bufp->chgCData(oldp+1933,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__oaddr),6);
        bufp->chgQData(oldp+1934,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[0]),48);
        bufp->chgQData(oldp+1936,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[1]),48);
        bufp->chgQData(oldp+1938,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[2]),48);
        bufp->chgQData(oldp+1940,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[3]),48);
        bufp->chgQData(oldp+1942,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[4]),48);
        bufp->chgQData(oldp+1944,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[5]),48);
        bufp->chgQData(oldp+1946,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[6]),48);
        bufp->chgQData(oldp+1948,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[7]),48);
        bufp->chgQData(oldp+1950,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[8]),48);
        bufp->chgQData(oldp+1952,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[9]),48);
        bufp->chgQData(oldp+1954,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[10]),48);
        bufp->chgQData(oldp+1956,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[11]),48);
        bufp->chgQData(oldp+1958,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[12]),48);
        bufp->chgQData(oldp+1960,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[13]),48);
        bufp->chgQData(oldp+1962,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[14]),48);
        bufp->chgQData(oldp+1964,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[15]),48);
        bufp->chgQData(oldp+1966,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[16]),48);
        bufp->chgQData(oldp+1968,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[17]),48);
        bufp->chgQData(oldp+1970,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[18]),48);
        bufp->chgQData(oldp+1972,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[19]),48);
        bufp->chgQData(oldp+1974,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[20]),48);
        bufp->chgQData(oldp+1976,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[21]),48);
        bufp->chgQData(oldp+1978,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[22]),48);
        bufp->chgQData(oldp+1980,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[23]),48);
        bufp->chgQData(oldp+1982,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[24]),48);
        bufp->chgQData(oldp+1984,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[25]),48);
        bufp->chgQData(oldp+1986,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[26]),48);
        bufp->chgQData(oldp+1988,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[27]),48);
        bufp->chgQData(oldp+1990,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[28]),48);
        bufp->chgQData(oldp+1992,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[29]),48);
        bufp->chgQData(oldp+1994,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[30]),48);
        bufp->chgQData(oldp+1996,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[31]),48);
        bufp->chgCData(oldp+1998,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__nxt_oaddr),5);
        bufp->chgQData(oldp+1999,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__pre_ovalue),48);
        bufp->chgBit(oldp+2001,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_sync) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
        bufp->chgQData(oldp+2002,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left),46);
        bufp->chgQData(oldp+2004,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right),46);
        bufp->chgBit(oldp+2006,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+2007,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+2008,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef),54);
        bufp->chgIData(oldp+2010,((0x7fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                        >> 0x17U)))),23);
        bufp->chgIData(oldp+2011,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))),23);
        bufp->chgIData(oldp+2012,((0x7fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x17U)))),23);
        bufp->chgIData(oldp+2013,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right))),23);
        bufp->chgIData(oldp+2014,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),27);
        bufp->chgIData(oldp+2015,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),27);
        bufp->chgIData(oldp+2016,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),24);
        bufp->chgIData(oldp+2017,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),24);
        bufp->chgIData(oldp+2018,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),24);
        bufp->chgIData(oldp+2019,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),24);
        bufp->chgQData(oldp+2020,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv),49);
        bufp->chgQData(oldp+2022,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv),49);
        bufp->chgQData(oldp+2024,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),51);
        bufp->chgQData(oldp+2026,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),51);
        bufp->chgQData(oldp+2028,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),53);
        bufp->chgQData(oldp+2030,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one),53);
        bufp->chgQData(oldp+2032,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two),53);
        bufp->chgBit(oldp+2034,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x30U)))));
        bufp->chgQData(oldp+2035,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x17U)))))))) 
                                    << 0x31U) | (0x1ffffffffffffULL 
                                                 & VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U)))),51);
        bufp->chgQData(oldp+2037,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x2fU)))))))) 
                                    << 0x31U) | ((QData)((IData)(
                                                                 (0xffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x18U))))) 
                                                 << 0x19U))),51);
        bufp->chgQData(oldp+2039,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved),49);
        bufp->chgQData(oldp+2041,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),53);
        bufp->chgQData(oldp+2043,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),53);
        bufp->chgIData(oldp+2045,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),24);
        bufp->chgIData(oldp+2046,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),24);
        bufp->chgIData(oldp+2047,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),24);
        bufp->chgIData(oldp+2048,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),24);
        bufp->chgIData(oldp+2049,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),27);
        bufp->chgIData(oldp+2050,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),27);
        bufp->chgIData(oldp+2051,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),24);
        bufp->chgIData(oldp+2052,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),24);
        bufp->chgIData(oldp+2053,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),28);
        bufp->chgIData(oldp+2054,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),25);
        bufp->chgIData(oldp+2055,((0xffffffU & (IData)(
                                                       (0xffffffULL 
                                                        & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                           >> 0x19U))))),24);
        bufp->chgIData(oldp+2056,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (0xffffffULL 
                                                           & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                              >> 0x19U)))))),24);
        bufp->chgBit(oldp+2057,((1U & (IData)((0xffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+2058,((1U & (IData)((0x1ffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                  >> 0x18U))))));
        bufp->chgIData(oldp+2059,((0xffffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+2060,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x18U))))),24);
        bufp->chgBit(oldp+2061,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x18U)))));
        bufp->chgIData(oldp+2062,((0xffffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x19U)))),24);
        bufp->chgIData(oldp+2063,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x19U))))),24);
        bufp->chgBit(oldp+2064,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2065,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x18U)))));
        bufp->chgIData(oldp+2066,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),24);
        bufp->chgIData(oldp+2067,((0xffffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x19U)))),24);
        bufp->chgIData(oldp+2068,((0xffffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x19U))))),24);
        bufp->chgBit(oldp+2069,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2070,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x18U)))));
        bufp->chgIData(oldp+2071,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),24);
        bufp->chgBit(oldp+2072,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync));
        bufp->chgQData(oldp+2073,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_a),50);
        bufp->chgQData(oldp+2075,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_b),50);
        bufp->chgQData(oldp+2077,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_c),58);
        bufp->chgBit(oldp+2079,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_sync));
        bufp->chgBit(oldp+2080,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__b_started));
        bufp->chgBit(oldp+2081,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ob_sync));
        bufp->chgQData(oldp+2082,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                    << 0x19U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),50);
        bufp->chgQData(oldp+2084,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                    << 0x19U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),50);
        bufp->chgCData(oldp+2086,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__iaddr),3);
        bufp->chgQData(oldp+2087,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__imem[0]),50);
        bufp->chgQData(oldp+2089,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__imem[1]),50);
        bufp->chgQData(oldp+2091,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__imem[2]),50);
        bufp->chgQData(oldp+2093,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__imem[3]),50);
        bufp->chgCData(oldp+2095,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__oaddr),3);
        bufp->chgQData(oldp+2096,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__omem[0]),50);
        bufp->chgQData(oldp+2098,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__omem[1]),50);
        bufp->chgQData(oldp+2100,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__omem[2]),50);
        bufp->chgQData(oldp+2102,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__omem[3]),50);
        bufp->chgCData(oldp+2104,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__nxt_oaddr),2);
        bufp->chgQData(oldp+2105,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__pre_ovalue),50);
        bufp->chgBit(oldp+2107,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_sync) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
        bufp->chgQData(oldp+2108,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left),50);
        bufp->chgQData(oldp+2110,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right),50);
        bufp->chgBit(oldp+2112,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+2113,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+2114,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef),58);
        bufp->chgIData(oldp+2116,((0x1ffffffU & (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                         >> 0x19U)))),25);
        bufp->chgIData(oldp+2117,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))),25);
        bufp->chgIData(oldp+2118,((0x1ffffffU & (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                         >> 0x19U)))),25);
        bufp->chgIData(oldp+2119,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right))),25);
        bufp->chgIData(oldp+2120,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),29);
        bufp->chgIData(oldp+2121,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),29);
        bufp->chgIData(oldp+2122,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),26);
        bufp->chgIData(oldp+2123,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),26);
        bufp->chgIData(oldp+2124,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),26);
        bufp->chgIData(oldp+2125,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),26);
        bufp->chgQData(oldp+2126,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv),53);
        bufp->chgQData(oldp+2128,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv),53);
        bufp->chgQData(oldp+2130,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),55);
        bufp->chgQData(oldp+2132,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),55);
        bufp->chgQData(oldp+2134,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),57);
        bufp->chgQData(oldp+2136,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one),57);
        bufp->chgQData(oldp+2138,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two),57);
        bufp->chgBit(oldp+2140,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x34U)))));
        bufp->chgQData(oldp+2141,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x19U)))))))) 
                                    << 0x35U) | (0x1fffffffffffffULL 
                                                 & VL_SHIFTL_QQI(53,53,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU)))),55);
        bufp->chgQData(oldp+2143,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x33U)))))))) 
                                    << 0x35U) | ((QData)((IData)(
                                                                 (0x3ffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x1aU))))) 
                                                 << 0x1bU))),55);
        bufp->chgQData(oldp+2145,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved),53);
        bufp->chgQData(oldp+2147,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),57);
        bufp->chgQData(oldp+2149,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),57);
        bufp->chgIData(oldp+2151,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),25);
        bufp->chgIData(oldp+2152,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),25);
        bufp->chgIData(oldp+2153,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),25);
        bufp->chgIData(oldp+2154,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),25);
        bufp->chgIData(oldp+2155,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),29);
        bufp->chgIData(oldp+2156,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),29);
        bufp->chgIData(oldp+2157,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),26);
        bufp->chgIData(oldp+2158,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),26);
        bufp->chgIData(oldp+2159,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),30);
        bufp->chgIData(oldp+2160,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),27);
        bufp->chgIData(oldp+2161,((0x1ffffffU & (IData)(
                                                        (0x1ffffffULL 
                                                         & (VL_SHIFTL_QQI(53,53,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                            >> 0x1cU))))),25);
        bufp->chgIData(oldp+2162,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (0x1ffffffULL 
                                                            & (VL_SHIFTL_QQI(53,53,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                               >> 0x1cU)))))),25);
        bufp->chgBit(oldp+2163,((1U & (IData)((0x1ffffffULL 
                                               & (VL_SHIFTL_QQI(53,53,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+2164,((1U & (IData)((0x3ffffffULL 
                                               & (VL_SHIFTL_QQI(53,53,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                  >> 0x1bU))))));
        bufp->chgIData(oldp+2165,((0x1ffffffU & (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x1bU)))),25);
        bufp->chgIData(oldp+2166,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                            >> 0x1bU))))),25);
        bufp->chgBit(oldp+2167,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2168,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x1aU)))));
        bufp->chgIData(oldp+2169,((0x1ffffffU & (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x1cU)))),25);
        bufp->chgIData(oldp+2170,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                            >> 0x1cU))))),25);
        bufp->chgBit(oldp+2171,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2172,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x1bU)))));
        bufp->chgIData(oldp+2173,((0x7ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),27);
        bufp->chgIData(oldp+2174,((0x1ffffffU & (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x1cU)))),25);
        bufp->chgIData(oldp+2175,((0x1ffffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                            >> 0x1cU))))),25);
        bufp->chgBit(oldp+2176,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2177,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x1bU)))));
        bufp->chgIData(oldp+2178,((0x7ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),27);
        bufp->chgSData(oldp+2179,(vlSelf->dj__DOT__dj_0__DOT__left_lpf__DOT__bin_idx),10);
        bufp->chgIData(oldp+2180,((0x1fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_fft_o_result 
                                                        >> 0x15U)))),21);
        bufp->chgIData(oldp+2181,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft_o_result))),21);
        bufp->chgIData(oldp+2182,((0x1fffffU & (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_sample 
                                                        >> 0x15U)))),21);
        bufp->chgIData(oldp+2183,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_sample))),21);
        bufp->chgBit(oldp+2184,(vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_req_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out));
        bufp->chgCData(oldp+2185,(vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_req_sync_uq1__DOT__altera_reset_synchronizer_int_chain),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+2186,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_sync))));
        bufp->chgBit(oldp+2187,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_sync))));
        bufp->chgBit(oldp+2188,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_sync))));
        bufp->chgBit(oldp+2189,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_sync))));
        bufp->chgBit(oldp+2190,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_sync))));
        bufp->chgBit(oldp+2191,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_sync))));
        bufp->chgBit(oldp+2192,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                                 & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_sync))));
        bufp->chgBit(oldp+2193,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                                 & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft_o_sync) 
                                    | (IData)(vlSelf->dj__DOT__dj_0__DOT__left_r_syncd)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+2194,(((IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__fill_level) 
                                 <= vlSelf->dj__DOT__codec_left_fifo__DOT__almost_empty_threshold)));
        bufp->chgBit(oldp+2195,(((IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__fill_level) 
                                 <= vlSelf->dj__DOT__codec_right_fifo__DOT__almost_empty_threshold)));
        bufp->chgBit(oldp+2196,(((IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__fill_level) 
                                 <= vlSelf->dj__DOT__left_sc_fifo__DOT__almost_empty_threshold)));
        bufp->chgBit(oldp+2197,(((IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__fill_level) 
                                 <= vlSelf->dj__DOT__right_sc_fifo__DOT__almost_empty_threshold)));
        bufp->chgBit(oldp+2198,(((IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__fill_level) 
                                 >= vlSelf->dj__DOT__codec_left_fifo__DOT__almost_full_threshold)));
        bufp->chgBit(oldp+2199,(((IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__fill_level) 
                                 >= vlSelf->dj__DOT__codec_right_fifo__DOT__almost_full_threshold)));
        bufp->chgBit(oldp+2200,(((IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__fill_level) 
                                 >= vlSelf->dj__DOT__left_sc_fifo__DOT__almost_full_threshold)));
        bufp->chgBit(oldp+2201,(((IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__fill_level) 
                                 >= vlSelf->dj__DOT__right_sc_fifo__DOT__almost_full_threshold)));
        bufp->chgBit(oldp+2202,(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid));
        bufp->chgBit(oldp+2203,((1U & (~ (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__full)))));
        bufp->chgBit(oldp+2204,(vlSelf->dj__DOT__dj_0_codec_right_fifo_sink_valid));
        bufp->chgSData(oldp+2205,((0xffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__right_ifft_o_result 
                                                      >> 0x1aU)))),16);
        bufp->chgBit(oldp+2206,((1U & (~ (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__full)))));
        bufp->chgBit(oldp+2207,((1U & (~ (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__full)))));
        bufp->chgBit(oldp+2208,(vlSelf->dj__DOT__codec_left_fifo_out_valid));
        bufp->chgSData(oldp+2209,(vlSelf->dj__DOT__codec_left_fifo__DOT__out_payload),16);
        bufp->chgBit(oldp+2210,(vlSelf->dj__DOT__codec_right_fifo_out_valid));
        bufp->chgSData(oldp+2211,(vlSelf->dj__DOT__codec_right_fifo__DOT__out_payload),16);
        bufp->chgBit(oldp+2212,(vlSelf->dj__DOT__left_sc_fifo_out_valid));
        bufp->chgSData(oldp+2213,(vlSelf->dj__DOT__left_sc_fifo__DOT__out_payload),16);
        bufp->chgBit(oldp+2214,(vlSelf->dj__DOT__right_sc_fifo_out_valid));
        bufp->chgSData(oldp+2215,(vlSelf->dj__DOT__right_sc_fifo__DOT__out_payload),16);
        bufp->chgBit(oldp+2216,((1U & (~ (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__full)))));
        bufp->chgIData(oldp+2217,(vlSelf->dj__DOT__codec_left_fifo__DOT__csr_readdata),32);
        bufp->chgSData(oldp+2218,(vlSelf->dj__DOT__codec_left_fifo__DOT__wr_ptr),10);
        bufp->chgSData(oldp+2219,(vlSelf->dj__DOT__codec_left_fifo__DOT__rd_ptr),10);
        bufp->chgSData(oldp+2220,(vlSelf->dj__DOT__codec_left_fifo__DOT__next_wr_ptr),10);
        bufp->chgSData(oldp+2221,((0x3ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__wr_ptr)))),10);
        bufp->chgSData(oldp+2222,((0x3ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__rd_ptr)))),10);
        bufp->chgBit(oldp+2223,(vlSelf->dj__DOT__codec_left_fifo__DOT__write));
        bufp->chgBit(oldp+2224,(vlSelf->dj__DOT__codec_left_fifo__DOT__empty));
        bufp->chgBit(oldp+2225,(vlSelf->dj__DOT__codec_left_fifo__DOT__full));
        bufp->chgBit(oldp+2226,(vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_valid));
        bufp->chgSData(oldp+2227,(vlSelf->dj__DOT__codec_left_fifo__DOT__fifo_fill_level),11);
        bufp->chgSData(oldp+2228,(vlSelf->dj__DOT__codec_left_fifo__DOT__fill_level),11);
        bufp->chgIData(oldp+2229,(vlSelf->dj__DOT__codec_left_fifo__DOT__almost_full_threshold),24);
        bufp->chgIData(oldp+2230,(vlSelf->dj__DOT__codec_left_fifo__DOT__almost_empty_threshold),24);
        bufp->chgIData(oldp+2231,(vlSelf->dj__DOT__codec_right_fifo__DOT__csr_readdata),32);
        bufp->chgSData(oldp+2232,(vlSelf->dj__DOT__codec_right_fifo__DOT__wr_ptr),10);
        bufp->chgSData(oldp+2233,(vlSelf->dj__DOT__codec_right_fifo__DOT__rd_ptr),10);
        bufp->chgSData(oldp+2234,(vlSelf->dj__DOT__codec_right_fifo__DOT__next_wr_ptr),10);
        bufp->chgSData(oldp+2235,((0x3ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__wr_ptr)))),10);
        bufp->chgSData(oldp+2236,((0x3ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__rd_ptr)))),10);
        bufp->chgBit(oldp+2237,(vlSelf->dj__DOT__codec_right_fifo__DOT__write));
        bufp->chgBit(oldp+2238,(vlSelf->dj__DOT__codec_right_fifo__DOT__empty));
        bufp->chgBit(oldp+2239,(vlSelf->dj__DOT__codec_right_fifo__DOT__full));
        bufp->chgBit(oldp+2240,(vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_valid));
        bufp->chgSData(oldp+2241,(vlSelf->dj__DOT__codec_right_fifo__DOT__fifo_fill_level),11);
        bufp->chgSData(oldp+2242,(vlSelf->dj__DOT__codec_right_fifo__DOT__fill_level),11);
        bufp->chgIData(oldp+2243,(vlSelf->dj__DOT__codec_right_fifo__DOT__almost_full_threshold),24);
        bufp->chgIData(oldp+2244,(vlSelf->dj__DOT__codec_right_fifo__DOT__almost_empty_threshold),24);
        bufp->chgIData(oldp+2245,((0x3ffffffU & (VL_EXTENDS_II(26,16, (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__out_payload)) 
                                                 + 
                                                 VL_EXTENDS_II(26,16, (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__out_payload))))),26);
        bufp->chgQData(oldp+2246,(vlSelf->dj__DOT__dj_0__DOT__right_ifft_o_result),52);
        bufp->chgIData(oldp+2248,(((IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__out_payload) 
                                   << 0x10U)),32);
        bufp->chgIData(oldp+2249,(vlSelf->dj__DOT__left_sc_fifo__DOT__csr_readdata),32);
        bufp->chgSData(oldp+2250,(vlSelf->dj__DOT__left_sc_fifo__DOT__wr_ptr),10);
        bufp->chgSData(oldp+2251,(vlSelf->dj__DOT__left_sc_fifo__DOT__rd_ptr),10);
        bufp->chgSData(oldp+2252,((0x3ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__wr_ptr)))),10);
        bufp->chgSData(oldp+2253,((0x3ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__rd_ptr)))),10);
        bufp->chgBit(oldp+2254,(vlSelf->dj__DOT__left_sc_fifo__DOT__read));
        bufp->chgBit(oldp+2255,(vlSelf->dj__DOT__left_sc_fifo__DOT__empty));
        bufp->chgBit(oldp+2256,(vlSelf->dj__DOT__left_sc_fifo__DOT__full));
        bufp->chgBit(oldp+2257,(vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_valid));
        bufp->chgBit(oldp+2258,(vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_ready));
        bufp->chgSData(oldp+2259,(vlSelf->dj__DOT__left_sc_fifo__DOT__fifo_fill_level),11);
        bufp->chgSData(oldp+2260,(vlSelf->dj__DOT__left_sc_fifo__DOT__fill_level),11);
        bufp->chgIData(oldp+2261,(vlSelf->dj__DOT__left_sc_fifo__DOT__almost_full_threshold),24);
        bufp->chgIData(oldp+2262,(vlSelf->dj__DOT__left_sc_fifo__DOT__almost_empty_threshold),24);
        bufp->chgIData(oldp+2263,(vlSelf->dj__DOT__right_sc_fifo__DOT__csr_readdata),32);
        bufp->chgSData(oldp+2264,(vlSelf->dj__DOT__right_sc_fifo__DOT__wr_ptr),10);
        bufp->chgSData(oldp+2265,(vlSelf->dj__DOT__right_sc_fifo__DOT__rd_ptr),10);
        bufp->chgSData(oldp+2266,((0x3ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__wr_ptr)))),10);
        bufp->chgSData(oldp+2267,((0x3ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__rd_ptr)))),10);
        bufp->chgBit(oldp+2268,(vlSelf->dj__DOT__right_sc_fifo__DOT__read));
        bufp->chgBit(oldp+2269,(vlSelf->dj__DOT__right_sc_fifo__DOT__empty));
        bufp->chgBit(oldp+2270,(vlSelf->dj__DOT__right_sc_fifo__DOT__full));
        bufp->chgBit(oldp+2271,(vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_valid));
        bufp->chgBit(oldp+2272,(vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_ready));
        bufp->chgSData(oldp+2273,(vlSelf->dj__DOT__right_sc_fifo__DOT__fifo_fill_level),11);
        bufp->chgSData(oldp+2274,(vlSelf->dj__DOT__right_sc_fifo__DOT__fill_level),11);
        bufp->chgIData(oldp+2275,(vlSelf->dj__DOT__right_sc_fifo__DOT__almost_full_threshold),24);
        bufp->chgIData(oldp+2276,(vlSelf->dj__DOT__right_sc_fifo__DOT__almost_empty_threshold),24);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+2277,(vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_payload),16);
        bufp->chgSData(oldp+2278,(vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_payload),16);
        bufp->chgSData(oldp+2279,(vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_payload),16);
        bufp->chgSData(oldp+2280,(vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_payload),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgSData(oldp+2281,(vlSelf->dj__DOT__codec_left_fifo__DOT__next_rd_ptr),10);
        bufp->chgBit(oldp+2282,(vlSelf->dj__DOT__codec_left_fifo__DOT__read));
        bufp->chgBit(oldp+2283,(vlSelf->dj__DOT__codec_left_fifo__DOT__next_empty));
        bufp->chgBit(oldp+2284,(vlSelf->dj__DOT__codec_left_fifo__DOT__next_full));
        bufp->chgBit(oldp+2285,(vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_ready));
        bufp->chgSData(oldp+2286,(vlSelf->dj__DOT__codec_right_fifo__DOT__next_rd_ptr),10);
        bufp->chgBit(oldp+2287,(vlSelf->dj__DOT__codec_right_fifo__DOT__read));
        bufp->chgBit(oldp+2288,(vlSelf->dj__DOT__codec_right_fifo__DOT__next_empty));
        bufp->chgBit(oldp+2289,(vlSelf->dj__DOT__codec_right_fifo__DOT__next_full));
        bufp->chgBit(oldp+2290,(vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_ready));
        bufp->chgBit(oldp+2291,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT____Vcellinp__revstage__i_ce));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+2292,(vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out));
        bufp->chgBit(oldp+2293,((1U & (~ (IData)(vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out)))));
        bufp->chgCData(oldp+2294,(vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain),2);
    }
    bufp->chgBit(oldp+2295,(vlSelf->clk_clk));
    bufp->chgSData(oldp+2296,(vlSelf->dj_0_avalon_slave_0_writedata),16);
    bufp->chgBit(oldp+2297,(vlSelf->dj_0_avalon_slave_0_write));
    bufp->chgBit(oldp+2298,(vlSelf->dj_0_avalon_slave_0_read));
    bufp->chgSData(oldp+2299,(vlSelf->dj_0_avalon_slave_0_readdata),16);
    bufp->chgBit(oldp+2300,(vlSelf->dj_0_avalon_slave_0_address));
    bufp->chgBit(oldp+2301,(vlSelf->dj_0_left_stream_interrupt_irq));
    bufp->chgBit(oldp+2302,(vlSelf->dj_0_right_stream_interrupt_irq));
    bufp->chgBit(oldp+2303,(vlSelf->reset_reset_n));
    bufp->chgSData(oldp+2304,(vlSelf->dj__DOT__left_sc_fifo__DOT__next_rd_ptr),10);
    bufp->chgSData(oldp+2305,(vlSelf->dj__DOT__right_sc_fifo__DOT__next_rd_ptr),10);
}

void Vdj___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root__trace_cleanup\n"); );
    // Init
    Vdj___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdj___024root*>(voidSelf);
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
