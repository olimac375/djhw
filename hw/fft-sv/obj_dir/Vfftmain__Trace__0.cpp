// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfftmain__Syms.h"


void Vfftmain___024root__trace_chg_0_sub_0(Vfftmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfftmain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root__trace_chg_0\n"); );
    // Init
    Vfftmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfftmain___024root*>(voidSelf);
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfftmain___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfftmain___024root__trace_chg_0_sub_0(Vfftmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgQData(oldp+0,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[0]),46);
        bufp->chgQData(oldp+2,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[1]),46);
        bufp->chgQData(oldp+4,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[2]),46);
        bufp->chgQData(oldp+6,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[3]),46);
        bufp->chgQData(oldp+8,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[4]),46);
        bufp->chgQData(oldp+10,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[5]),46);
        bufp->chgQData(oldp+12,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[6]),46);
        bufp->chgQData(oldp+14,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[7]),46);
        bufp->chgQData(oldp+16,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[0]),46);
        bufp->chgQData(oldp+18,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[1]),46);
        bufp->chgQData(oldp+20,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[2]),46);
        bufp->chgQData(oldp+22,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[3]),46);
        bufp->chgQData(oldp+24,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[4]),46);
        bufp->chgQData(oldp+26,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[5]),46);
        bufp->chgQData(oldp+28,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[6]),46);
        bufp->chgQData(oldp+30,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[7]),46);
        bufp->chgQData(oldp+32,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[8]),46);
        bufp->chgQData(oldp+34,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[9]),46);
        bufp->chgQData(oldp+36,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[10]),46);
        bufp->chgQData(oldp+38,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[11]),46);
        bufp->chgQData(oldp+40,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[12]),46);
        bufp->chgQData(oldp+42,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[13]),46);
        bufp->chgQData(oldp+44,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[14]),46);
        bufp->chgQData(oldp+46,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[15]),46);
        bufp->chgQData(oldp+48,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[0]),44);
        bufp->chgQData(oldp+50,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[1]),44);
        bufp->chgQData(oldp+52,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[2]),44);
        bufp->chgQData(oldp+54,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[3]),44);
        bufp->chgQData(oldp+56,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[4]),44);
        bufp->chgQData(oldp+58,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[5]),44);
        bufp->chgQData(oldp+60,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[6]),44);
        bufp->chgQData(oldp+62,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[7]),44);
        bufp->chgQData(oldp+64,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[8]),44);
        bufp->chgQData(oldp+66,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[9]),44);
        bufp->chgQData(oldp+68,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[10]),44);
        bufp->chgQData(oldp+70,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[11]),44);
        bufp->chgQData(oldp+72,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[12]),44);
        bufp->chgQData(oldp+74,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[13]),44);
        bufp->chgQData(oldp+76,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[14]),44);
        bufp->chgQData(oldp+78,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[15]),44);
        bufp->chgQData(oldp+80,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[16]),44);
        bufp->chgQData(oldp+82,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[17]),44);
        bufp->chgQData(oldp+84,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[18]),44);
        bufp->chgQData(oldp+86,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[19]),44);
        bufp->chgQData(oldp+88,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[20]),44);
        bufp->chgQData(oldp+90,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[21]),44);
        bufp->chgQData(oldp+92,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[22]),44);
        bufp->chgQData(oldp+94,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[23]),44);
        bufp->chgQData(oldp+96,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[24]),44);
        bufp->chgQData(oldp+98,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[25]),44);
        bufp->chgQData(oldp+100,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[26]),44);
        bufp->chgQData(oldp+102,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[27]),44);
        bufp->chgQData(oldp+104,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[28]),44);
        bufp->chgQData(oldp+106,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[29]),44);
        bufp->chgQData(oldp+108,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[30]),44);
        bufp->chgQData(oldp+110,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[31]),44);
        bufp->chgQData(oldp+112,(vlSelf->fftmain__DOT__stage_8__DOT__cmem[0]),48);
        bufp->chgQData(oldp+114,(vlSelf->fftmain__DOT__stage_8__DOT__cmem[1]),48);
        bufp->chgQData(oldp+116,(vlSelf->fftmain__DOT__stage_8__DOT__cmem[2]),48);
        bufp->chgQData(oldp+118,(vlSelf->fftmain__DOT__stage_8__DOT__cmem[3]),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+120,(vlSelf->fftmain__DOT__br_sync));
        bufp->chgQData(oldp+121,(vlSelf->fftmain__DOT__br_result),42);
        bufp->chgBit(oldp+123,(vlSelf->fftmain__DOT__w_s512));
        bufp->chgQData(oldp+124,(vlSelf->fftmain__DOT__w_d512),34);
        bufp->chgBit(oldp+126,(vlSelf->fftmain__DOT__w_s256));
        bufp->chgQData(oldp+127,(vlSelf->fftmain__DOT__w_d256),36);
        bufp->chgBit(oldp+129,(vlSelf->fftmain__DOT__w_s128));
        bufp->chgQData(oldp+130,(vlSelf->fftmain__DOT__w_d128),36);
        bufp->chgBit(oldp+132,(vlSelf->fftmain__DOT__w_s64));
        bufp->chgQData(oldp+133,(vlSelf->fftmain__DOT__w_d64),38);
        bufp->chgBit(oldp+135,(vlSelf->fftmain__DOT__w_s32));
        bufp->chgQData(oldp+136,(vlSelf->fftmain__DOT__w_d32),38);
        bufp->chgBit(oldp+138,(vlSelf->fftmain__DOT__w_s16));
        bufp->chgQData(oldp+139,(vlSelf->fftmain__DOT__w_d16),40);
        bufp->chgBit(oldp+141,(vlSelf->fftmain__DOT__w_s8));
        bufp->chgQData(oldp+142,(vlSelf->fftmain__DOT__w_d8),40);
        bufp->chgBit(oldp+144,(vlSelf->fftmain__DOT__w_s4));
        bufp->chgQData(oldp+145,(vlSelf->fftmain__DOT__w_d4),42);
        bufp->chgBit(oldp+147,(vlSelf->fftmain__DOT__w_s2));
        bufp->chgQData(oldp+148,((((QData)((IData)(vlSelf->fftmain__DOT__stage_2__DOT__o_r)) 
                                   << 0x15U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_2__DOT__o_i)))),42);
        bufp->chgBit(oldp+150,(((IData)(vlSelf->fftmain__DOT__r_br_started) 
                                | (IData)(vlSelf->fftmain__DOT__w_s2))));
        bufp->chgBit(oldp+151,(vlSelf->fftmain__DOT__r_br_started));
        bufp->chgSData(oldp+152,(vlSelf->fftmain__DOT__revstage__DOT__wraddr),10);
        bufp->chgSData(oldp+153,(((0x200U & ((~ ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                                 >> 9U)) 
                                             << 9U)) 
                                  | ((0x100U & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                                << 8U)) 
                                     | ((0x80U & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                                  << 6U)) 
                                        | ((0x40U & 
                                            ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                             << 4U)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                                  << 2U)) 
                                              | ((0x10U 
                                                  & (IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                                        >> 2U)) 
                                                    | ((4U 
                                                        & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                                           >> 4U)) 
                                                       | ((2U 
                                                           & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                                              >> 6U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                                                >> 8U)))))))))))),10);
        bufp->chgBit(oldp+154,(vlSelf->fftmain__DOT__revstage__DOT__in_reset));
        bufp->chgBit(oldp+155,(vlSelf->fftmain__DOT__stage_128__DOT__wait_for_sync));
        bufp->chgQData(oldp+156,(vlSelf->fftmain__DOT__stage_128__DOT__ib_a),36);
        bufp->chgQData(oldp+158,(vlSelf->fftmain__DOT__stage_128__DOT__ib_b),36);
        bufp->chgQData(oldp+160,(vlSelf->fftmain__DOT__stage_128__DOT__ib_c),44);
        bufp->chgBit(oldp+162,(vlSelf->fftmain__DOT__stage_128__DOT__ib_sync));
        bufp->chgBit(oldp+163,(vlSelf->fftmain__DOT__stage_128__DOT__b_started));
        bufp->chgBit(oldp+164,(vlSelf->fftmain__DOT__stage_128__DOT__ob_sync));
        bufp->chgQData(oldp+165,((((QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
        bufp->chgQData(oldp+167,((((QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
        bufp->chgCData(oldp+169,(vlSelf->fftmain__DOT__stage_128__DOT__iaddr),7);
        bufp->chgCData(oldp+170,(vlSelf->fftmain__DOT__stage_128__DOT__oaddr),7);
        bufp->chgCData(oldp+171,(vlSelf->fftmain__DOT__stage_128__DOT__nxt_oaddr),6);
        bufp->chgQData(oldp+172,(vlSelf->fftmain__DOT__stage_128__DOT__pre_ovalue),36);
        bufp->chgQData(oldp+174,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
        bufp->chgQData(oldp+176,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
        bufp->chgBit(oldp+178,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+179,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+180,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
        bufp->chgIData(oldp+182,((0x3ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x12U)))),18);
        bufp->chgIData(oldp+183,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
        bufp->chgIData(oldp+184,((0x3ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x12U)))),18);
        bufp->chgIData(oldp+185,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
        bufp->chgIData(oldp+186,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
        bufp->chgIData(oldp+187,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
        bufp->chgIData(oldp+188,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
        bufp->chgIData(oldp+189,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
        bufp->chgIData(oldp+190,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
        bufp->chgIData(oldp+191,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
        bufp->chgQData(oldp+192,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
        bufp->chgQData(oldp+194,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
        bufp->chgQData(oldp+196,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
        bufp->chgQData(oldp+198,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
        bufp->chgQData(oldp+200,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
        bufp->chgQData(oldp+202,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
        bufp->chgQData(oldp+204,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
        bufp->chgBit(oldp+206,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x26U)))));
        bufp->chgQData(oldp+207,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x12U)))))))) 
                                   << 0x27U) | (0x7fffffffffULL 
                                                & VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
        bufp->chgQData(oldp+209,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x25U)))))))) 
                                   << 0x27U) | ((QData)((IData)(
                                                                (0x7ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x13U))))) 
                                                << 0x14U))),41);
        bufp->chgQData(oldp+211,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
        bufp->chgQData(oldp+213,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
        bufp->chgQData(oldp+215,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
        bufp->chgIData(oldp+217,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
        bufp->chgIData(oldp+218,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
        bufp->chgIData(oldp+219,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
        bufp->chgIData(oldp+220,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
        bufp->chgIData(oldp+221,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
        bufp->chgIData(oldp+222,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
        bufp->chgIData(oldp+223,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
        bufp->chgIData(oldp+224,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
        bufp->chgIData(oldp+225,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
        bufp->chgIData(oldp+226,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
        bufp->chgIData(oldp+227,((0x3ffffU & (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                         >> 0x15U))))),18);
        bufp->chgIData(oldp+228,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x3ffffULL 
                                                         & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                            >> 0x15U)))))),18);
        bufp->chgBit(oldp+229,((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+230,((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x14U))))));
        bufp->chgIData(oldp+231,((0x3ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U)))),18);
        bufp->chgIData(oldp+232,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x14U))))),18);
        bufp->chgBit(oldp+233,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+234,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x13U)))));
        bufp->chgIData(oldp+235,((0x3ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U)))),18);
        bufp->chgIData(oldp+236,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x15U))))),18);
        bufp->chgBit(oldp+237,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+238,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+239,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
        bufp->chgIData(oldp+240,((0x3ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U)))),18);
        bufp->chgIData(oldp+241,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x15U))))),18);
        bufp->chgBit(oldp+242,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+243,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+244,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
        bufp->chgBit(oldp+245,(vlSelf->fftmain__DOT__stage_16__DOT__wait_for_sync));
        bufp->chgQData(oldp+246,(vlSelf->fftmain__DOT__stage_16__DOT__ib_a),38);
        bufp->chgQData(oldp+248,(vlSelf->fftmain__DOT__stage_16__DOT__ib_b),38);
        bufp->chgQData(oldp+250,(vlSelf->fftmain__DOT__stage_16__DOT__ib_c),46);
        bufp->chgBit(oldp+252,(vlSelf->fftmain__DOT__stage_16__DOT__ib_sync));
        bufp->chgBit(oldp+253,(vlSelf->fftmain__DOT__stage_16__DOT__b_started));
        bufp->chgBit(oldp+254,(vlSelf->fftmain__DOT__stage_16__DOT__ob_sync));
        bufp->chgQData(oldp+255,((((QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
        bufp->chgQData(oldp+257,((((QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
        bufp->chgCData(oldp+259,(vlSelf->fftmain__DOT__stage_16__DOT__iaddr),4);
        bufp->chgQData(oldp+260,(vlSelf->fftmain__DOT__stage_16__DOT__imem[0]),38);
        bufp->chgQData(oldp+262,(vlSelf->fftmain__DOT__stage_16__DOT__imem[1]),38);
        bufp->chgQData(oldp+264,(vlSelf->fftmain__DOT__stage_16__DOT__imem[2]),38);
        bufp->chgQData(oldp+266,(vlSelf->fftmain__DOT__stage_16__DOT__imem[3]),38);
        bufp->chgQData(oldp+268,(vlSelf->fftmain__DOT__stage_16__DOT__imem[4]),38);
        bufp->chgQData(oldp+270,(vlSelf->fftmain__DOT__stage_16__DOT__imem[5]),38);
        bufp->chgQData(oldp+272,(vlSelf->fftmain__DOT__stage_16__DOT__imem[6]),38);
        bufp->chgQData(oldp+274,(vlSelf->fftmain__DOT__stage_16__DOT__imem[7]),38);
        bufp->chgCData(oldp+276,(vlSelf->fftmain__DOT__stage_16__DOT__oaddr),4);
        bufp->chgQData(oldp+277,(vlSelf->fftmain__DOT__stage_16__DOT__omem[0]),40);
        bufp->chgQData(oldp+279,(vlSelf->fftmain__DOT__stage_16__DOT__omem[1]),40);
        bufp->chgQData(oldp+281,(vlSelf->fftmain__DOT__stage_16__DOT__omem[2]),40);
        bufp->chgQData(oldp+283,(vlSelf->fftmain__DOT__stage_16__DOT__omem[3]),40);
        bufp->chgQData(oldp+285,(vlSelf->fftmain__DOT__stage_16__DOT__omem[4]),40);
        bufp->chgQData(oldp+287,(vlSelf->fftmain__DOT__stage_16__DOT__omem[5]),40);
        bufp->chgQData(oldp+289,(vlSelf->fftmain__DOT__stage_16__DOT__omem[6]),40);
        bufp->chgQData(oldp+291,(vlSelf->fftmain__DOT__stage_16__DOT__omem[7]),40);
        bufp->chgCData(oldp+293,(vlSelf->fftmain__DOT__stage_16__DOT__nxt_oaddr),3);
        bufp->chgQData(oldp+294,(vlSelf->fftmain__DOT__stage_16__DOT__pre_ovalue),40);
        bufp->chgQData(oldp+296,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
        bufp->chgQData(oldp+298,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
        bufp->chgBit(oldp+300,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+301,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+302,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
        bufp->chgIData(oldp+304,((0x7ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+305,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
        bufp->chgIData(oldp+306,((0x7ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+307,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
        bufp->chgIData(oldp+308,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
        bufp->chgIData(oldp+309,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
        bufp->chgIData(oldp+310,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
        bufp->chgIData(oldp+311,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
        bufp->chgIData(oldp+312,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
        bufp->chgIData(oldp+313,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
        bufp->chgQData(oldp+314,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
        bufp->chgQData(oldp+316,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
        bufp->chgQData(oldp+318,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
        bufp->chgQData(oldp+320,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
        bufp->chgQData(oldp+322,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
        bufp->chgQData(oldp+324,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
        bufp->chgQData(oldp+326,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
        bufp->chgBit(oldp+328,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x28U)))));
        bufp->chgQData(oldp+329,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x13U)))))))) 
                                   << 0x29U) | (0x1ffffffffffULL 
                                                & VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
        bufp->chgQData(oldp+331,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x27U)))))))) 
                                   << 0x29U) | ((QData)((IData)(
                                                                (0xfffffU 
                                                                 & (IData)(
                                                                           (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x14U))))) 
                                                << 0x15U))),43);
        bufp->chgQData(oldp+333,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
        bufp->chgQData(oldp+335,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
        bufp->chgQData(oldp+337,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
        bufp->chgIData(oldp+339,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
        bufp->chgIData(oldp+340,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
        bufp->chgIData(oldp+341,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
        bufp->chgIData(oldp+342,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
        bufp->chgIData(oldp+343,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
        bufp->chgIData(oldp+344,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
        bufp->chgIData(oldp+345,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
        bufp->chgIData(oldp+346,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
        bufp->chgIData(oldp+347,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
        bufp->chgIData(oldp+348,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
        bufp->chgIData(oldp+349,((0xfffffU & (IData)(
                                                     (0xfffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x15U))))),20);
        bufp->chgIData(oldp+350,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0xfffffULL 
                                                         & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                            >> 0x15U)))))),20);
        bufp->chgBit(oldp+351,((1U & (IData)((0xfffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+352,((1U & (IData)((0x1fffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x14U))))));
        bufp->chgIData(oldp+353,((0xfffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U)))),20);
        bufp->chgIData(oldp+354,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x14U))))),20);
        bufp->chgBit(oldp+355,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+356,((0xfffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U)))),20);
        bufp->chgIData(oldp+357,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x15U))))),20);
        bufp->chgBit(oldp+358,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+359,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+360,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
        bufp->chgIData(oldp+361,((0xfffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U)))),20);
        bufp->chgIData(oldp+362,((0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x15U))))),20);
        bufp->chgBit(oldp+363,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+364,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+365,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
        bufp->chgIData(oldp+366,(vlSelf->fftmain__DOT__stage_2__DOT__m_r),21);
        bufp->chgIData(oldp+367,(vlSelf->fftmain__DOT__stage_2__DOT__m_i),21);
        bufp->chgIData(oldp+368,((0x1fffffU & (IData)(
                                                      (vlSelf->fftmain__DOT__w_d4 
                                                       >> 0x15U)))),21);
        bufp->chgIData(oldp+369,((0x1fffffU & (IData)(vlSelf->fftmain__DOT__w_d4))),21);
        bufp->chgIData(oldp+370,(vlSelf->fftmain__DOT__stage_2__DOT__rnd_r),22);
        bufp->chgIData(oldp+371,(vlSelf->fftmain__DOT__stage_2__DOT__rnd_i),22);
        bufp->chgIData(oldp+372,(vlSelf->fftmain__DOT__stage_2__DOT__sto_r),22);
        bufp->chgIData(oldp+373,(vlSelf->fftmain__DOT__stage_2__DOT__sto_i),22);
        bufp->chgBit(oldp+374,(vlSelf->fftmain__DOT__stage_2__DOT__wait_for_sync));
        bufp->chgBit(oldp+375,(vlSelf->fftmain__DOT__stage_2__DOT__stage));
        bufp->chgCData(oldp+376,(vlSelf->fftmain__DOT__stage_2__DOT__sync_pipe),2);
        bufp->chgIData(oldp+377,(vlSelf->fftmain__DOT__stage_2__DOT__o_r),21);
        bufp->chgIData(oldp+378,(vlSelf->fftmain__DOT__stage_2__DOT__o_i),21);
        bufp->chgIData(oldp+379,((0x1fffffU & (vlSelf->fftmain__DOT__stage_2__DOT__rnd_i 
                                               >> 1U))),21);
        bufp->chgIData(oldp+380,((0x1fffffU & ((IData)(1U) 
                                               + (vlSelf->fftmain__DOT__stage_2__DOT__rnd_i 
                                                  >> 1U)))),21);
        bufp->chgBit(oldp+381,((1U & (vlSelf->fftmain__DOT__stage_2__DOT__rnd_i 
                                      >> 1U))));
        bufp->chgBit(oldp+382,((1U & vlSelf->fftmain__DOT__stage_2__DOT__rnd_i)));
        bufp->chgIData(oldp+383,((0x1fffffU & (vlSelf->fftmain__DOT__stage_2__DOT__rnd_r 
                                               >> 1U))),21);
        bufp->chgIData(oldp+384,((0x1fffffU & ((IData)(1U) 
                                               + (vlSelf->fftmain__DOT__stage_2__DOT__rnd_r 
                                                  >> 1U)))),21);
        bufp->chgBit(oldp+385,((1U & (vlSelf->fftmain__DOT__stage_2__DOT__rnd_r 
                                      >> 1U))));
        bufp->chgBit(oldp+386,((1U & vlSelf->fftmain__DOT__stage_2__DOT__rnd_r)));
        bufp->chgBit(oldp+387,(vlSelf->fftmain__DOT__stage_256__DOT__wait_for_sync));
        bufp->chgQData(oldp+388,(vlSelf->fftmain__DOT__stage_256__DOT__ib_a),34);
        bufp->chgQData(oldp+390,(vlSelf->fftmain__DOT__stage_256__DOT__ib_b),34);
        bufp->chgQData(oldp+392,(vlSelf->fftmain__DOT__stage_256__DOT__ib_c),42);
        bufp->chgBit(oldp+394,(vlSelf->fftmain__DOT__stage_256__DOT__ib_sync));
        bufp->chgBit(oldp+395,(vlSelf->fftmain__DOT__stage_256__DOT__b_started));
        bufp->chgBit(oldp+396,(vlSelf->fftmain__DOT__stage_256__DOT__ob_sync));
        bufp->chgQData(oldp+397,((((QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
        bufp->chgQData(oldp+399,((((QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x12U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
        bufp->chgCData(oldp+401,(vlSelf->fftmain__DOT__stage_256__DOT__iaddr),8);
        bufp->chgCData(oldp+402,(vlSelf->fftmain__DOT__stage_256__DOT__oaddr),8);
        bufp->chgCData(oldp+403,(vlSelf->fftmain__DOT__stage_256__DOT__nxt_oaddr),7);
        bufp->chgQData(oldp+404,(vlSelf->fftmain__DOT__stage_256__DOT__pre_ovalue),36);
        bufp->chgQData(oldp+406,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left),34);
        bufp->chgQData(oldp+408,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right),34);
        bufp->chgBit(oldp+410,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+411,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+412,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef),42);
        bufp->chgIData(oldp+414,((0x1ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x11U)))),17);
        bufp->chgIData(oldp+415,((0x1ffffU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))),17);
        bufp->chgIData(oldp+416,((0x1ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x11U)))),17);
        bufp->chgIData(oldp+417,((0x1ffffU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right))),17);
        bufp->chgIData(oldp+418,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),21);
        bufp->chgIData(oldp+419,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),21);
        bufp->chgIData(oldp+420,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),18);
        bufp->chgIData(oldp+421,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),18);
        bufp->chgIData(oldp+422,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),18);
        bufp->chgIData(oldp+423,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),18);
        bufp->chgQData(oldp+424,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv),37);
        bufp->chgQData(oldp+426,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv),37);
        bufp->chgQData(oldp+428,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),39);
        bufp->chgQData(oldp+430,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),39);
        bufp->chgQData(oldp+432,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),41);
        bufp->chgQData(oldp+434,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one),41);
        bufp->chgQData(oldp+436,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two),41);
        bufp->chgBit(oldp+438,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x24U)))));
        bufp->chgQData(oldp+439,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x11U)))))))) 
                                   << 0x25U) | (0x1fffffffffULL 
                                                & VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U)))),39);
        bufp->chgQData(oldp+441,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x23U)))))))) 
                                   << 0x25U) | ((QData)((IData)(
                                                                (0x3ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x12U))))) 
                                                << 0x13U))),39);
        bufp->chgQData(oldp+443,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved),37);
        bufp->chgQData(oldp+445,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),41);
        bufp->chgQData(oldp+447,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),41);
        bufp->chgIData(oldp+449,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
        bufp->chgIData(oldp+450,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
        bufp->chgIData(oldp+451,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
        bufp->chgIData(oldp+452,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
        bufp->chgIData(oldp+453,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),21);
        bufp->chgIData(oldp+454,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),21);
        bufp->chgIData(oldp+455,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),18);
        bufp->chgIData(oldp+456,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),18);
        bufp->chgIData(oldp+457,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),22);
        bufp->chgIData(oldp+458,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),19);
        bufp->chgIData(oldp+459,((0x3ffffU & (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                         >> 0x13U))))),18);
        bufp->chgIData(oldp+460,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x3ffffULL 
                                                         & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                            >> 0x13U)))))),18);
        bufp->chgBit(oldp+461,((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+462,((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                 >> 0x12U))))));
        bufp->chgIData(oldp+463,((0x3ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x12U)))),18);
        bufp->chgIData(oldp+464,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x12U))))),18);
        bufp->chgBit(oldp+465,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x12U)))));
        bufp->chgIData(oldp+466,((0x3ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x13U)))),18);
        bufp->chgIData(oldp+467,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x13U))))),18);
        bufp->chgBit(oldp+468,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+469,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x12U)))));
        bufp->chgIData(oldp+470,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),18);
        bufp->chgIData(oldp+471,((0x3ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x13U)))),18);
        bufp->chgIData(oldp+472,((0x3ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x13U))))),18);
        bufp->chgBit(oldp+473,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+474,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x12U)))));
        bufp->chgIData(oldp+475,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),18);
        bufp->chgBit(oldp+476,(vlSelf->fftmain__DOT__stage_32__DOT__wait_for_sync));
        bufp->chgQData(oldp+477,(vlSelf->fftmain__DOT__stage_32__DOT__ib_a),38);
        bufp->chgQData(oldp+479,(vlSelf->fftmain__DOT__stage_32__DOT__ib_b),38);
        bufp->chgQData(oldp+481,(vlSelf->fftmain__DOT__stage_32__DOT__ib_c),46);
        bufp->chgBit(oldp+483,(vlSelf->fftmain__DOT__stage_32__DOT__ib_sync));
        bufp->chgBit(oldp+484,(vlSelf->fftmain__DOT__stage_32__DOT__b_started));
        bufp->chgBit(oldp+485,(vlSelf->fftmain__DOT__stage_32__DOT__ob_sync));
        bufp->chgQData(oldp+486,((((QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
        bufp->chgQData(oldp+488,((((QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
        bufp->chgCData(oldp+490,(vlSelf->fftmain__DOT__stage_32__DOT__iaddr),5);
        bufp->chgQData(oldp+491,(vlSelf->fftmain__DOT__stage_32__DOT__imem[0]),38);
        bufp->chgQData(oldp+493,(vlSelf->fftmain__DOT__stage_32__DOT__imem[1]),38);
        bufp->chgQData(oldp+495,(vlSelf->fftmain__DOT__stage_32__DOT__imem[2]),38);
        bufp->chgQData(oldp+497,(vlSelf->fftmain__DOT__stage_32__DOT__imem[3]),38);
        bufp->chgQData(oldp+499,(vlSelf->fftmain__DOT__stage_32__DOT__imem[4]),38);
        bufp->chgQData(oldp+501,(vlSelf->fftmain__DOT__stage_32__DOT__imem[5]),38);
        bufp->chgQData(oldp+503,(vlSelf->fftmain__DOT__stage_32__DOT__imem[6]),38);
        bufp->chgQData(oldp+505,(vlSelf->fftmain__DOT__stage_32__DOT__imem[7]),38);
        bufp->chgQData(oldp+507,(vlSelf->fftmain__DOT__stage_32__DOT__imem[8]),38);
        bufp->chgQData(oldp+509,(vlSelf->fftmain__DOT__stage_32__DOT__imem[9]),38);
        bufp->chgQData(oldp+511,(vlSelf->fftmain__DOT__stage_32__DOT__imem[10]),38);
        bufp->chgQData(oldp+513,(vlSelf->fftmain__DOT__stage_32__DOT__imem[11]),38);
        bufp->chgQData(oldp+515,(vlSelf->fftmain__DOT__stage_32__DOT__imem[12]),38);
        bufp->chgQData(oldp+517,(vlSelf->fftmain__DOT__stage_32__DOT__imem[13]),38);
        bufp->chgQData(oldp+519,(vlSelf->fftmain__DOT__stage_32__DOT__imem[14]),38);
        bufp->chgQData(oldp+521,(vlSelf->fftmain__DOT__stage_32__DOT__imem[15]),38);
        bufp->chgCData(oldp+523,(vlSelf->fftmain__DOT__stage_32__DOT__oaddr),5);
        bufp->chgQData(oldp+524,(vlSelf->fftmain__DOT__stage_32__DOT__omem[0]),38);
        bufp->chgQData(oldp+526,(vlSelf->fftmain__DOT__stage_32__DOT__omem[1]),38);
        bufp->chgQData(oldp+528,(vlSelf->fftmain__DOT__stage_32__DOT__omem[2]),38);
        bufp->chgQData(oldp+530,(vlSelf->fftmain__DOT__stage_32__DOT__omem[3]),38);
        bufp->chgQData(oldp+532,(vlSelf->fftmain__DOT__stage_32__DOT__omem[4]),38);
        bufp->chgQData(oldp+534,(vlSelf->fftmain__DOT__stage_32__DOT__omem[5]),38);
        bufp->chgQData(oldp+536,(vlSelf->fftmain__DOT__stage_32__DOT__omem[6]),38);
        bufp->chgQData(oldp+538,(vlSelf->fftmain__DOT__stage_32__DOT__omem[7]),38);
        bufp->chgQData(oldp+540,(vlSelf->fftmain__DOT__stage_32__DOT__omem[8]),38);
        bufp->chgQData(oldp+542,(vlSelf->fftmain__DOT__stage_32__DOT__omem[9]),38);
        bufp->chgQData(oldp+544,(vlSelf->fftmain__DOT__stage_32__DOT__omem[10]),38);
        bufp->chgQData(oldp+546,(vlSelf->fftmain__DOT__stage_32__DOT__omem[11]),38);
        bufp->chgQData(oldp+548,(vlSelf->fftmain__DOT__stage_32__DOT__omem[12]),38);
        bufp->chgQData(oldp+550,(vlSelf->fftmain__DOT__stage_32__DOT__omem[13]),38);
        bufp->chgQData(oldp+552,(vlSelf->fftmain__DOT__stage_32__DOT__omem[14]),38);
        bufp->chgQData(oldp+554,(vlSelf->fftmain__DOT__stage_32__DOT__omem[15]),38);
        bufp->chgCData(oldp+556,(vlSelf->fftmain__DOT__stage_32__DOT__nxt_oaddr),4);
        bufp->chgQData(oldp+557,(vlSelf->fftmain__DOT__stage_32__DOT__pre_ovalue),38);
        bufp->chgQData(oldp+559,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
        bufp->chgQData(oldp+561,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
        bufp->chgBit(oldp+563,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+564,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+565,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
        bufp->chgIData(oldp+567,((0x7ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+568,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
        bufp->chgIData(oldp+569,((0x7ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+570,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
        bufp->chgIData(oldp+571,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
        bufp->chgIData(oldp+572,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
        bufp->chgIData(oldp+573,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
        bufp->chgIData(oldp+574,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
        bufp->chgIData(oldp+575,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
        bufp->chgIData(oldp+576,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
        bufp->chgQData(oldp+577,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
        bufp->chgQData(oldp+579,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
        bufp->chgQData(oldp+581,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
        bufp->chgQData(oldp+583,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
        bufp->chgQData(oldp+585,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
        bufp->chgQData(oldp+587,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
        bufp->chgQData(oldp+589,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
        bufp->chgBit(oldp+591,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x28U)))));
        bufp->chgQData(oldp+592,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x13U)))))))) 
                                   << 0x29U) | (0x1ffffffffffULL 
                                                & VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
        bufp->chgQData(oldp+594,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x27U)))))))) 
                                   << 0x29U) | ((QData)((IData)(
                                                                (0xfffffU 
                                                                 & (IData)(
                                                                           (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x14U))))) 
                                                << 0x15U))),43);
        bufp->chgQData(oldp+596,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
        bufp->chgQData(oldp+598,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
        bufp->chgQData(oldp+600,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
        bufp->chgIData(oldp+602,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
        bufp->chgIData(oldp+603,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
        bufp->chgIData(oldp+604,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
        bufp->chgIData(oldp+605,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
        bufp->chgIData(oldp+606,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
        bufp->chgIData(oldp+607,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
        bufp->chgIData(oldp+608,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
        bufp->chgIData(oldp+609,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
        bufp->chgIData(oldp+610,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
        bufp->chgIData(oldp+611,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
        bufp->chgIData(oldp+612,((0x7ffffU & (IData)(
                                                     (0x7ffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x16U))))),19);
        bufp->chgIData(oldp+613,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x7ffffULL 
                                                         & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                            >> 0x16U)))))),19);
        bufp->chgBit(oldp+614,((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+615,((1U & (IData)((0xfffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x15U))))));
        bufp->chgIData(oldp+616,((0x7ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x15U)))),19);
        bufp->chgIData(oldp+617,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x15U))))),19);
        bufp->chgBit(oldp+618,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+619,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+620,((0x7ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x16U)))),19);
        bufp->chgIData(oldp+621,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x16U))))),19);
        bufp->chgBit(oldp+622,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+623,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x15U)))));
        bufp->chgIData(oldp+624,((0x1fffffU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),21);
        bufp->chgIData(oldp+625,((0x7ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x16U)))),19);
        bufp->chgIData(oldp+626,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x16U))))),19);
        bufp->chgBit(oldp+627,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+628,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x15U)))));
        bufp->chgIData(oldp+629,((0x1fffffU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),21);
        bufp->chgBit(oldp+630,(vlSelf->fftmain__DOT__stage_4__DOT__wait_for_sync));
        bufp->chgCData(oldp+631,(vlSelf->fftmain__DOT__stage_4__DOT__pipeline),3);
        bufp->chgIData(oldp+632,(vlSelf->fftmain__DOT__stage_4__DOT__sum_r),21);
        bufp->chgIData(oldp+633,(vlSelf->fftmain__DOT__stage_4__DOT__sum_i),21);
        bufp->chgIData(oldp+634,(vlSelf->fftmain__DOT__stage_4__DOT__diff_r),21);
        bufp->chgIData(oldp+635,(vlSelf->fftmain__DOT__stage_4__DOT__diff_i),21);
        bufp->chgQData(oldp+636,(vlSelf->fftmain__DOT__stage_4__DOT__ob_a),42);
        bufp->chgQData(oldp+638,((((QData)((IData)(vlSelf->fftmain__DOT__stage_4__DOT__ob_b_r)) 
                                   << 0x15U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_4__DOT__ob_b_i)))),42);
        bufp->chgIData(oldp+640,(vlSelf->fftmain__DOT__stage_4__DOT__ob_b_r),21);
        bufp->chgIData(oldp+641,(vlSelf->fftmain__DOT__stage_4__DOT__ob_b_i),21);
        bufp->chgSData(oldp+642,(vlSelf->fftmain__DOT__stage_4__DOT__iaddr),9);
        bufp->chgQData(oldp+643,(vlSelf->fftmain__DOT__stage_4__DOT__imem[0]),40);
        bufp->chgQData(oldp+645,(vlSelf->fftmain__DOT__stage_4__DOT__imem[1]),40);
        bufp->chgIData(oldp+647,((0xfffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_4__DOT__imem
                                                      [1U] 
                                                      >> 0x14U)))),20);
        bufp->chgIData(oldp+648,((0xfffffU & (IData)(
                                                     vlSelf->fftmain__DOT__stage_4__DOT__imem
                                                     [1U]))),20);
        bufp->chgIData(oldp+649,((0xfffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__w_d8 
                                                      >> 0x14U)))),20);
        bufp->chgIData(oldp+650,((0xfffffU & (IData)(vlSelf->fftmain__DOT__w_d8))),20);
        bufp->chgQData(oldp+651,(vlSelf->fftmain__DOT__stage_4__DOT__omem[0]),42);
        bufp->chgQData(oldp+653,(vlSelf->fftmain__DOT__stage_4__DOT__omem[1]),42);
        bufp->chgIData(oldp+655,(vlSelf->fftmain__DOT__stage_4__DOT__rnd_sum_r),21);
        bufp->chgIData(oldp+656,(vlSelf->fftmain__DOT__stage_4__DOT__rnd_sum_i),21);
        bufp->chgIData(oldp+657,(vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_r),21);
        bufp->chgIData(oldp+658,(vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_i),21);
        bufp->chgIData(oldp+659,((0x1fffffU & (- vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_r))),21);
        bufp->chgIData(oldp+660,((0x1fffffU & (- vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_i))),21);
        bufp->chgBit(oldp+661,(vlSelf->fftmain__DOT__stage_512__DOT__wait_for_sync));
        bufp->chgIData(oldp+662,(vlSelf->fftmain__DOT__stage_512__DOT__ib_a),32);
        bufp->chgIData(oldp+663,(vlSelf->fftmain__DOT__stage_512__DOT__ib_b),32);
        bufp->chgQData(oldp+664,(vlSelf->fftmain__DOT__stage_512__DOT__ib_c),40);
        bufp->chgBit(oldp+666,(vlSelf->fftmain__DOT__stage_512__DOT__ib_sync));
        bufp->chgBit(oldp+667,(vlSelf->fftmain__DOT__stage_512__DOT__b_started));
        bufp->chgBit(oldp+668,(vlSelf->fftmain__DOT__stage_512__DOT__ob_sync));
        bufp->chgQData(oldp+669,((((QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x11U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),34);
        bufp->chgQData(oldp+671,((((QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x11U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),34);
        bufp->chgSData(oldp+673,(vlSelf->fftmain__DOT__stage_512__DOT__iaddr),9);
        bufp->chgSData(oldp+674,(vlSelf->fftmain__DOT__stage_512__DOT__oaddr),9);
        bufp->chgCData(oldp+675,(vlSelf->fftmain__DOT__stage_512__DOT__nxt_oaddr),8);
        bufp->chgQData(oldp+676,(vlSelf->fftmain__DOT__stage_512__DOT__pre_ovalue),34);
        bufp->chgIData(oldp+678,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left),32);
        bufp->chgIData(oldp+679,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right),32);
        bufp->chgBit(oldp+680,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+681,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+682,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef),40);
        bufp->chgSData(oldp+684,((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+685,((0xffffU & vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left)),16);
        bufp->chgSData(oldp+686,((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+687,((0xffffU & vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right)),16);
        bufp->chgIData(oldp+688,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),20);
        bufp->chgIData(oldp+689,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),20);
        bufp->chgIData(oldp+690,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),17);
        bufp->chgIData(oldp+691,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),17);
        bufp->chgIData(oldp+692,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),17);
        bufp->chgIData(oldp+693,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),17);
        bufp->chgQData(oldp+694,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv),35);
        bufp->chgQData(oldp+696,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv),35);
        bufp->chgQData(oldp+698,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),37);
        bufp->chgQData(oldp+700,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),37);
        bufp->chgQData(oldp+702,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),39);
        bufp->chgQData(oldp+704,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one),39);
        bufp->chgQData(oldp+706,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two),39);
        bufp->chgBit(oldp+708,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x22U)))));
        bufp->chgQData(oldp+709,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x10U)))))))) 
                                   << 0x23U) | (0x7ffffffffULL 
                                                & VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U)))),37);
        bufp->chgQData(oldp+711,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x21U)))))))) 
                                   << 0x23U) | ((QData)((IData)(
                                                                (0x1ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x11U))))) 
                                                << 0x12U))),37);
        bufp->chgQData(oldp+713,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved),35);
        bufp->chgQData(oldp+715,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),39);
        bufp->chgQData(oldp+717,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),39);
        bufp->chgIData(oldp+719,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),17);
        bufp->chgIData(oldp+720,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),17);
        bufp->chgIData(oldp+721,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),17);
        bufp->chgIData(oldp+722,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),17);
        bufp->chgIData(oldp+723,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),20);
        bufp->chgIData(oldp+724,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),20);
        bufp->chgIData(oldp+725,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),17);
        bufp->chgIData(oldp+726,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),17);
        bufp->chgIData(oldp+727,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),21);
        bufp->chgIData(oldp+728,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),18);
        bufp->chgIData(oldp+729,((0x1ffffU & (IData)(
                                                     (0x1ffffULL 
                                                      & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                         >> 0x12U))))),17);
        bufp->chgIData(oldp+730,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x1ffffULL 
                                                         & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                            >> 0x12U)))))),17);
        bufp->chgBit(oldp+731,((1U & (IData)((0x1ffffULL 
                                              & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+732,((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                 >> 0x11U))))));
        bufp->chgIData(oldp+733,((0x1ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x11U)))),17);
        bufp->chgIData(oldp+734,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x11U))))),17);
        bufp->chgBit(oldp+735,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x11U)))));
        bufp->chgIData(oldp+736,((0x1ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x12U)))),17);
        bufp->chgIData(oldp+737,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x12U))))),17);
        bufp->chgBit(oldp+738,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+739,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x11U)))));
        bufp->chgIData(oldp+740,((0x1ffffU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),17);
        bufp->chgIData(oldp+741,((0x1ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x12U)))),17);
        bufp->chgIData(oldp+742,((0x1ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x12U))))),17);
        bufp->chgBit(oldp+743,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+744,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x11U)))));
        bufp->chgIData(oldp+745,((0x1ffffU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),17);
        bufp->chgBit(oldp+746,(vlSelf->fftmain__DOT__stage_64__DOT__wait_for_sync));
        bufp->chgQData(oldp+747,(vlSelf->fftmain__DOT__stage_64__DOT__ib_a),36);
        bufp->chgQData(oldp+749,(vlSelf->fftmain__DOT__stage_64__DOT__ib_b),36);
        bufp->chgQData(oldp+751,(vlSelf->fftmain__DOT__stage_64__DOT__ib_c),44);
        bufp->chgBit(oldp+753,(vlSelf->fftmain__DOT__stage_64__DOT__ib_sync));
        bufp->chgBit(oldp+754,(vlSelf->fftmain__DOT__stage_64__DOT__b_started));
        bufp->chgBit(oldp+755,(vlSelf->fftmain__DOT__stage_64__DOT__ob_sync));
        bufp->chgQData(oldp+756,((((QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
        bufp->chgQData(oldp+758,((((QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
        bufp->chgCData(oldp+760,(vlSelf->fftmain__DOT__stage_64__DOT__iaddr),6);
        bufp->chgQData(oldp+761,(vlSelf->fftmain__DOT__stage_64__DOT__imem[0]),36);
        bufp->chgQData(oldp+763,(vlSelf->fftmain__DOT__stage_64__DOT__imem[1]),36);
        bufp->chgQData(oldp+765,(vlSelf->fftmain__DOT__stage_64__DOT__imem[2]),36);
        bufp->chgQData(oldp+767,(vlSelf->fftmain__DOT__stage_64__DOT__imem[3]),36);
        bufp->chgQData(oldp+769,(vlSelf->fftmain__DOT__stage_64__DOT__imem[4]),36);
        bufp->chgQData(oldp+771,(vlSelf->fftmain__DOT__stage_64__DOT__imem[5]),36);
        bufp->chgQData(oldp+773,(vlSelf->fftmain__DOT__stage_64__DOT__imem[6]),36);
        bufp->chgQData(oldp+775,(vlSelf->fftmain__DOT__stage_64__DOT__imem[7]),36);
        bufp->chgQData(oldp+777,(vlSelf->fftmain__DOT__stage_64__DOT__imem[8]),36);
        bufp->chgQData(oldp+779,(vlSelf->fftmain__DOT__stage_64__DOT__imem[9]),36);
        bufp->chgQData(oldp+781,(vlSelf->fftmain__DOT__stage_64__DOT__imem[10]),36);
        bufp->chgQData(oldp+783,(vlSelf->fftmain__DOT__stage_64__DOT__imem[11]),36);
        bufp->chgQData(oldp+785,(vlSelf->fftmain__DOT__stage_64__DOT__imem[12]),36);
        bufp->chgQData(oldp+787,(vlSelf->fftmain__DOT__stage_64__DOT__imem[13]),36);
        bufp->chgQData(oldp+789,(vlSelf->fftmain__DOT__stage_64__DOT__imem[14]),36);
        bufp->chgQData(oldp+791,(vlSelf->fftmain__DOT__stage_64__DOT__imem[15]),36);
        bufp->chgQData(oldp+793,(vlSelf->fftmain__DOT__stage_64__DOT__imem[16]),36);
        bufp->chgQData(oldp+795,(vlSelf->fftmain__DOT__stage_64__DOT__imem[17]),36);
        bufp->chgQData(oldp+797,(vlSelf->fftmain__DOT__stage_64__DOT__imem[18]),36);
        bufp->chgQData(oldp+799,(vlSelf->fftmain__DOT__stage_64__DOT__imem[19]),36);
        bufp->chgQData(oldp+801,(vlSelf->fftmain__DOT__stage_64__DOT__imem[20]),36);
        bufp->chgQData(oldp+803,(vlSelf->fftmain__DOT__stage_64__DOT__imem[21]),36);
        bufp->chgQData(oldp+805,(vlSelf->fftmain__DOT__stage_64__DOT__imem[22]),36);
        bufp->chgQData(oldp+807,(vlSelf->fftmain__DOT__stage_64__DOT__imem[23]),36);
        bufp->chgQData(oldp+809,(vlSelf->fftmain__DOT__stage_64__DOT__imem[24]),36);
        bufp->chgQData(oldp+811,(vlSelf->fftmain__DOT__stage_64__DOT__imem[25]),36);
        bufp->chgQData(oldp+813,(vlSelf->fftmain__DOT__stage_64__DOT__imem[26]),36);
        bufp->chgQData(oldp+815,(vlSelf->fftmain__DOT__stage_64__DOT__imem[27]),36);
        bufp->chgQData(oldp+817,(vlSelf->fftmain__DOT__stage_64__DOT__imem[28]),36);
        bufp->chgQData(oldp+819,(vlSelf->fftmain__DOT__stage_64__DOT__imem[29]),36);
        bufp->chgQData(oldp+821,(vlSelf->fftmain__DOT__stage_64__DOT__imem[30]),36);
        bufp->chgQData(oldp+823,(vlSelf->fftmain__DOT__stage_64__DOT__imem[31]),36);
        bufp->chgCData(oldp+825,(vlSelf->fftmain__DOT__stage_64__DOT__oaddr),6);
        bufp->chgQData(oldp+826,(vlSelf->fftmain__DOT__stage_64__DOT__omem[0]),38);
        bufp->chgQData(oldp+828,(vlSelf->fftmain__DOT__stage_64__DOT__omem[1]),38);
        bufp->chgQData(oldp+830,(vlSelf->fftmain__DOT__stage_64__DOT__omem[2]),38);
        bufp->chgQData(oldp+832,(vlSelf->fftmain__DOT__stage_64__DOT__omem[3]),38);
        bufp->chgQData(oldp+834,(vlSelf->fftmain__DOT__stage_64__DOT__omem[4]),38);
        bufp->chgQData(oldp+836,(vlSelf->fftmain__DOT__stage_64__DOT__omem[5]),38);
        bufp->chgQData(oldp+838,(vlSelf->fftmain__DOT__stage_64__DOT__omem[6]),38);
        bufp->chgQData(oldp+840,(vlSelf->fftmain__DOT__stage_64__DOT__omem[7]),38);
        bufp->chgQData(oldp+842,(vlSelf->fftmain__DOT__stage_64__DOT__omem[8]),38);
        bufp->chgQData(oldp+844,(vlSelf->fftmain__DOT__stage_64__DOT__omem[9]),38);
        bufp->chgQData(oldp+846,(vlSelf->fftmain__DOT__stage_64__DOT__omem[10]),38);
        bufp->chgQData(oldp+848,(vlSelf->fftmain__DOT__stage_64__DOT__omem[11]),38);
        bufp->chgQData(oldp+850,(vlSelf->fftmain__DOT__stage_64__DOT__omem[12]),38);
        bufp->chgQData(oldp+852,(vlSelf->fftmain__DOT__stage_64__DOT__omem[13]),38);
        bufp->chgQData(oldp+854,(vlSelf->fftmain__DOT__stage_64__DOT__omem[14]),38);
        bufp->chgQData(oldp+856,(vlSelf->fftmain__DOT__stage_64__DOT__omem[15]),38);
        bufp->chgQData(oldp+858,(vlSelf->fftmain__DOT__stage_64__DOT__omem[16]),38);
        bufp->chgQData(oldp+860,(vlSelf->fftmain__DOT__stage_64__DOT__omem[17]),38);
        bufp->chgQData(oldp+862,(vlSelf->fftmain__DOT__stage_64__DOT__omem[18]),38);
        bufp->chgQData(oldp+864,(vlSelf->fftmain__DOT__stage_64__DOT__omem[19]),38);
        bufp->chgQData(oldp+866,(vlSelf->fftmain__DOT__stage_64__DOT__omem[20]),38);
        bufp->chgQData(oldp+868,(vlSelf->fftmain__DOT__stage_64__DOT__omem[21]),38);
        bufp->chgQData(oldp+870,(vlSelf->fftmain__DOT__stage_64__DOT__omem[22]),38);
        bufp->chgQData(oldp+872,(vlSelf->fftmain__DOT__stage_64__DOT__omem[23]),38);
        bufp->chgQData(oldp+874,(vlSelf->fftmain__DOT__stage_64__DOT__omem[24]),38);
        bufp->chgQData(oldp+876,(vlSelf->fftmain__DOT__stage_64__DOT__omem[25]),38);
        bufp->chgQData(oldp+878,(vlSelf->fftmain__DOT__stage_64__DOT__omem[26]),38);
        bufp->chgQData(oldp+880,(vlSelf->fftmain__DOT__stage_64__DOT__omem[27]),38);
        bufp->chgQData(oldp+882,(vlSelf->fftmain__DOT__stage_64__DOT__omem[28]),38);
        bufp->chgQData(oldp+884,(vlSelf->fftmain__DOT__stage_64__DOT__omem[29]),38);
        bufp->chgQData(oldp+886,(vlSelf->fftmain__DOT__stage_64__DOT__omem[30]),38);
        bufp->chgQData(oldp+888,(vlSelf->fftmain__DOT__stage_64__DOT__omem[31]),38);
        bufp->chgCData(oldp+890,(vlSelf->fftmain__DOT__stage_64__DOT__nxt_oaddr),5);
        bufp->chgQData(oldp+891,(vlSelf->fftmain__DOT__stage_64__DOT__pre_ovalue),38);
        bufp->chgQData(oldp+893,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
        bufp->chgQData(oldp+895,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
        bufp->chgBit(oldp+897,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+898,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+899,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
        bufp->chgIData(oldp+901,((0x3ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x12U)))),18);
        bufp->chgIData(oldp+902,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
        bufp->chgIData(oldp+903,((0x3ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x12U)))),18);
        bufp->chgIData(oldp+904,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
        bufp->chgIData(oldp+905,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
        bufp->chgIData(oldp+906,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
        bufp->chgIData(oldp+907,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
        bufp->chgIData(oldp+908,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
        bufp->chgIData(oldp+909,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
        bufp->chgIData(oldp+910,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
        bufp->chgQData(oldp+911,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
        bufp->chgQData(oldp+913,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
        bufp->chgQData(oldp+915,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
        bufp->chgQData(oldp+917,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
        bufp->chgQData(oldp+919,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
        bufp->chgQData(oldp+921,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
        bufp->chgQData(oldp+923,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
        bufp->chgBit(oldp+925,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x26U)))));
        bufp->chgQData(oldp+926,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x12U)))))))) 
                                   << 0x27U) | (0x7fffffffffULL 
                                                & VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
        bufp->chgQData(oldp+928,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x25U)))))))) 
                                   << 0x27U) | ((QData)((IData)(
                                                                (0x7ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                            >> 0x13U))))) 
                                                << 0x14U))),41);
        bufp->chgQData(oldp+930,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
        bufp->chgQData(oldp+932,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
        bufp->chgQData(oldp+934,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
        bufp->chgIData(oldp+936,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
        bufp->chgIData(oldp+937,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
        bufp->chgIData(oldp+938,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
        bufp->chgIData(oldp+939,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
        bufp->chgIData(oldp+940,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
        bufp->chgIData(oldp+941,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
        bufp->chgIData(oldp+942,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
        bufp->chgIData(oldp+943,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
        bufp->chgIData(oldp+944,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
        bufp->chgIData(oldp+945,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
        bufp->chgIData(oldp+946,((0x7ffffU & (IData)(
                                                     (0x7ffffULL 
                                                      & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                         >> 0x14U))))),19);
        bufp->chgIData(oldp+947,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x7ffffULL 
                                                         & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                            >> 0x14U)))))),19);
        bufp->chgBit(oldp+948,((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+949,((1U & (IData)((0xfffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x13U))))));
        bufp->chgIData(oldp+950,((0x7ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x13U)))),19);
        bufp->chgIData(oldp+951,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x13U))))),19);
        bufp->chgBit(oldp+952,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x13U)))));
        bufp->chgIData(oldp+953,((0x7ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x14U)))),19);
        bufp->chgIData(oldp+954,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x14U))))),19);
        bufp->chgBit(oldp+955,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+956,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                              >> 0x13U)))));
        bufp->chgIData(oldp+957,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),19);
        bufp->chgIData(oldp+958,((0x7ffffU & (IData)(
                                                     (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x14U)))),19);
        bufp->chgIData(oldp+959,((0x7ffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x14U))))),19);
        bufp->chgBit(oldp+960,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+961,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                              >> 0x13U)))));
        bufp->chgIData(oldp+962,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),19);
        bufp->chgBit(oldp+963,(vlSelf->fftmain__DOT__stage_8__DOT__wait_for_sync));
        bufp->chgQData(oldp+964,(vlSelf->fftmain__DOT__stage_8__DOT__ib_a),40);
        bufp->chgQData(oldp+966,(vlSelf->fftmain__DOT__stage_8__DOT__ib_b),40);
        bufp->chgQData(oldp+968,(vlSelf->fftmain__DOT__stage_8__DOT__ib_c),48);
        bufp->chgBit(oldp+970,(vlSelf->fftmain__DOT__stage_8__DOT__ib_sync));
        bufp->chgBit(oldp+971,(vlSelf->fftmain__DOT__stage_8__DOT__b_started));
        bufp->chgBit(oldp+972,(vlSelf->fftmain__DOT__stage_8__DOT__ob_sync));
        bufp->chgQData(oldp+973,((((QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                   << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
        bufp->chgQData(oldp+975,((((QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                   << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
        bufp->chgCData(oldp+977,(vlSelf->fftmain__DOT__stage_8__DOT__iaddr),3);
        bufp->chgQData(oldp+978,(vlSelf->fftmain__DOT__stage_8__DOT__imem[0]),40);
        bufp->chgQData(oldp+980,(vlSelf->fftmain__DOT__stage_8__DOT__imem[1]),40);
        bufp->chgQData(oldp+982,(vlSelf->fftmain__DOT__stage_8__DOT__imem[2]),40);
        bufp->chgQData(oldp+984,(vlSelf->fftmain__DOT__stage_8__DOT__imem[3]),40);
        bufp->chgCData(oldp+986,(vlSelf->fftmain__DOT__stage_8__DOT__oaddr),3);
        bufp->chgQData(oldp+987,(vlSelf->fftmain__DOT__stage_8__DOT__omem[0]),40);
        bufp->chgQData(oldp+989,(vlSelf->fftmain__DOT__stage_8__DOT__omem[1]),40);
        bufp->chgQData(oldp+991,(vlSelf->fftmain__DOT__stage_8__DOT__omem[2]),40);
        bufp->chgQData(oldp+993,(vlSelf->fftmain__DOT__stage_8__DOT__omem[3]),40);
        bufp->chgCData(oldp+995,(vlSelf->fftmain__DOT__stage_8__DOT__nxt_oaddr),2);
        bufp->chgQData(oldp+996,(vlSelf->fftmain__DOT__stage_8__DOT__pre_ovalue),40);
        bufp->chgQData(oldp+998,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left),40);
        bufp->chgQData(oldp+1000,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right),40);
        bufp->chgBit(oldp+1002,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
        bufp->chgBit(oldp+1003,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
        bufp->chgQData(oldp+1004,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef),48);
        bufp->chgIData(oldp+1006,((0xfffffU & (IData)(
                                                      (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                       >> 0x14U)))),20);
        bufp->chgIData(oldp+1007,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))),20);
        bufp->chgIData(oldp+1008,((0xfffffU & (IData)(
                                                      (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                       >> 0x14U)))),20);
        bufp->chgIData(oldp+1009,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right))),20);
        bufp->chgIData(oldp+1010,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),24);
        bufp->chgIData(oldp+1011,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),24);
        bufp->chgIData(oldp+1012,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),21);
        bufp->chgIData(oldp+1013,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),21);
        bufp->chgIData(oldp+1014,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),21);
        bufp->chgIData(oldp+1015,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),21);
        bufp->chgQData(oldp+1016,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv),43);
        bufp->chgQData(oldp+1018,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv),43);
        bufp->chgQData(oldp+1020,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),45);
        bufp->chgQData(oldp+1022,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),45);
        bufp->chgQData(oldp+1024,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),47);
        bufp->chgQData(oldp+1026,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one),47);
        bufp->chgQData(oldp+1028,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two),47);
        bufp->chgBit(oldp+1030,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x2aU)))));
        bufp->chgQData(oldp+1031,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x14U)))))))) 
                                    << 0x2bU) | (0x7ffffffffffULL 
                                                 & VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U)))),45);
        bufp->chgQData(oldp+1033,((((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                              >> 0x29U)))))))) 
                                    << 0x2bU) | ((QData)((IData)(
                                                                 (0x1fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                             >> 0x15U))))) 
                                                 << 0x16U))),45);
        bufp->chgQData(oldp+1035,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved),43);
        bufp->chgQData(oldp+1037,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),47);
        bufp->chgQData(oldp+1039,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),47);
        bufp->chgIData(oldp+1041,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
        bufp->chgIData(oldp+1042,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
        bufp->chgIData(oldp+1043,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
        bufp->chgIData(oldp+1044,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
        bufp->chgIData(oldp+1045,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),24);
        bufp->chgIData(oldp+1046,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),24);
        bufp->chgIData(oldp+1047,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),21);
        bufp->chgIData(oldp+1048,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),21);
        bufp->chgIData(oldp+1049,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),25);
        bufp->chgIData(oldp+1050,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),22);
        bufp->chgIData(oldp+1051,((0xfffffU & (IData)(
                                                      (0xfffffULL 
                                                       & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                          >> 0x17U))))),20);
        bufp->chgIData(oldp+1052,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (0xfffffULL 
                                                          & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                             >> 0x17U)))))),20);
        bufp->chgBit(oldp+1053,((1U & (IData)((0xfffffULL 
                                               & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1054,((1U & (IData)((0x1fffffULL 
                                               & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                  >> 0x16U))))));
        bufp->chgIData(oldp+1055,((0xfffffU & (IData)(
                                                      (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                       >> 0x16U)))),20);
        bufp->chgIData(oldp+1056,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                          >> 0x16U))))),20);
        bufp->chgBit(oldp+1057,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1058,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x15U)))));
        bufp->chgIData(oldp+1059,((0xfffffU & (IData)(
                                                      (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                       >> 0x17U)))),20);
        bufp->chgIData(oldp+1060,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x17U))))),20);
        bufp->chgBit(oldp+1061,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1062,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1063,((0x3fffffU & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),22);
        bufp->chgIData(oldp+1064,((0xfffffU & (IData)(
                                                      (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                       >> 0x17U)))),20);
        bufp->chgIData(oldp+1065,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x17U))))),20);
        bufp->chgBit(oldp+1066,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1067,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1068,((0x3fffffU & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),22);
    }
    bufp->chgBit(oldp+1069,(vlSelf->i_clk));
    bufp->chgBit(oldp+1070,(vlSelf->i_reset));
    bufp->chgBit(oldp+1071,(vlSelf->i_ce));
    bufp->chgIData(oldp+1072,(vlSelf->i_sample),32);
    bufp->chgQData(oldp+1073,(vlSelf->o_result),42);
    bufp->chgBit(oldp+1075,(vlSelf->o_sync));
    bufp->chgBit(oldp+1076,(vlSelf->fftmain__DOT____Vcellinp__revstage__i_ce));
    bufp->chgBit(oldp+1077,(((IData)(vlSelf->fftmain__DOT__stage_128__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+1078,(((IData)(vlSelf->fftmain__DOT__stage_16__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+1079,(((IData)(vlSelf->fftmain__DOT__stage_256__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+1080,(((IData)(vlSelf->fftmain__DOT__stage_32__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+1081,((1U & (~ (IData)(vlSelf->i_reset)))));
    bufp->chgBit(oldp+1082,(((IData)(vlSelf->fftmain__DOT__stage_512__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+1083,(((IData)(vlSelf->fftmain__DOT__stage_64__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
    bufp->chgBit(oldp+1084,(((IData)(vlSelf->fftmain__DOT__stage_8__DOT__ib_sync) 
                             & (IData)(vlSelf->i_ce))));
}

void Vfftmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root__trace_cleanup\n"); );
    // Init
    Vfftmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfftmain___024root*>(voidSelf);
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
