// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDJ.h for the primary calling header

#include "VDJ__pch.h"
#include "VDJ___024root.h"

void VDJ___024root___ico_sequent__TOP__0(VDJ___024root* vlSelf);

void VDJ___024root___eval_ico(VDJ___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDJ__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDJ___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VDJ___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VDJ___024root___ico_sequent__TOP__0(VDJ___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDJ__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDJ___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->left_fifo_sink_stream = vlSelf->writedata;
    vlSelf->left_fifo_interrupt = vlSelf->left_fifo_almost_empty;
    vlSelf->left_fifo_sink_valid = ((IData)(vlSelf->stream_address) 
                                    & (IData)(vlSelf->write));
    vlSelf->right_fifo_sink_valid = ((~ (IData)(vlSelf->stream_address)) 
                                     & (IData)(vlSelf->write));
    vlSelf->DJ__DOT__left_fft__DOT____Vcellinp__revstage__i_ce 
        = ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
           & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__r_br_started) 
              | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s2)));
}

void VDJ___024root___eval_triggers__ico(VDJ___024root* vlSelf);

bool VDJ___024root___eval_phase__ico(VDJ___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDJ__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDJ___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VDJ___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VDJ___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VDJ___024root___eval_act(VDJ___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDJ__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDJ___024root___eval_act\n"); );
}

void VDJ___024root___nba_sequent__TOP__0(VDJ___024root* vlSelf);

void VDJ___024root___eval_nba(VDJ___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDJ__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDJ___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDJ___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 256> VDJ__ConstPool__TABLE_he91bf390_0;
extern const VlUnpacked<CData/*3:0*/, 256> VDJ__ConstPool__TABLE_h667f051f_0;
extern const VlUnpacked<CData/*0:0*/, 256> VDJ__ConstPool__TABLE_h82c2c6a0_0;
extern const VlUnpacked<CData/*2:0*/, 128> VDJ__ConstPool__TABLE_h5e3c0e7d_0;
extern const VlUnpacked<CData/*2:0*/, 128> VDJ__ConstPool__TABLE_h08c05a3b_0;
extern const VlUnpacked<CData/*0:0*/, 128> VDJ__ConstPool__TABLE_hf8383f48_0;

VL_INLINE_OPT void VDJ___024root___nba_sequent__TOP__0(VDJ___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDJ__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDJ___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__r_syncd;
    __Vdly__DJ__DOT__r_syncd = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__r_br_started;
    __Vdly__DJ__DOT__left_fft__DOT__r_br_started = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync = 0;
    SData/*8:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr = 0;
    CData/*7:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0 = 0;
    SData/*8:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__b_started;
    __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__b_started = 0;
    CData/*7:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0 = 0;
    QData/*33:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync = 0;
    CData/*7:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr = 0;
    CData/*6:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0 = 0;
    QData/*33:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0 = 0;
    CData/*7:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__b_started;
    __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__b_started = 0;
    CData/*6:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0 = 0;
    QData/*35:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync = 0;
    CData/*6:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr = 0;
    CData/*5:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0 = 0;
    QData/*35:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0 = 0;
    CData/*6:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__b_started;
    __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__b_started = 0;
    CData/*5:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0 = 0;
    QData/*35:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync = 0;
    CData/*5:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr = 0;
    CData/*4:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0 = 0;
    QData/*35:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0 = 0;
    CData/*5:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__b_started;
    __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__b_started = 0;
    CData/*4:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0 = 0;
    QData/*37:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync = 0;
    CData/*4:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr = 0;
    CData/*3:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0 = 0;
    QData/*37:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0 = 0;
    CData/*4:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__b_started;
    __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__b_started = 0;
    CData/*3:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0 = 0;
    QData/*37:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync = 0;
    CData/*3:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr = 0;
    CData/*2:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0 = 0;
    QData/*37:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0 = 0;
    CData/*3:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr = 0;
    CData/*2:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0 = 0;
    QData/*39:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync = 0;
    CData/*2:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr = 0;
    CData/*1:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0 = 0;
    QData/*39:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0 = 0;
    CData/*2:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr = 0;
    CData/*1:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0 = 0;
    QData/*39:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync = 0;
    SData/*8:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr = 0;
    QData/*39:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v0 = 0;
    QData/*39:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v1;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v1 = 0;
    CData/*2:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__pipeline;
    __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__pipeline = 0;
    QData/*41:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v0 = 0;
    QData/*41:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v1;
    __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v1 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__stage;
    __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__stage = 0;
    CData/*1:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe;
    __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe = 0;
    IData/*21:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sto_r;
    __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sto_r = 0;
    IData/*21:0*/ __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sto_i;
    __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sto_i = 0;
    SData/*9:0*/ __Vdly__DJ__DOT__left_fft__DOT__revstage__DOT__wraddr;
    __Vdly__DJ__DOT__left_fft__DOT__revstage__DOT__wraddr = 0;
    SData/*9:0*/ __Vdlyvdim0__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0;
    __Vdlyvdim0__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0 = 0;
    QData/*41:0*/ __Vdlyvval__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0;
    __Vdlyvval__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0;
    __Vdlyvset__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0 = 0;
    SData/*9:0*/ __Vdly__DJ__DOT__left_lpf__DOT__bin_idx;
    __Vdly__DJ__DOT__left_lpf__DOT__bin_idx = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__r_br_started;
    __Vdly__DJ__DOT__left_ifft__DOT__r_br_started = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync = 0;
    SData/*8:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr = 0;
    CData/*7:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0 = 0;
    QData/*41:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0 = 0;
    SData/*8:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__b_started;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__b_started = 0;
    CData/*7:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0 = 0;
    QData/*43:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync = 0;
    CData/*7:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr = 0;
    CData/*6:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0 = 0;
    QData/*43:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0 = 0;
    CData/*7:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__b_started;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__b_started = 0;
    CData/*6:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0 = 0;
    QData/*45:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync = 0;
    CData/*6:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr = 0;
    CData/*5:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0 = 0;
    QData/*45:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0 = 0;
    CData/*6:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__b_started;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__b_started = 0;
    CData/*5:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0 = 0;
    QData/*45:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync = 0;
    CData/*5:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr = 0;
    CData/*4:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0 = 0;
    QData/*45:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0 = 0;
    CData/*5:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__b_started;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__b_started = 0;
    CData/*4:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0 = 0;
    QData/*47:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync = 0;
    CData/*4:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr = 0;
    CData/*3:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0 = 0;
    QData/*47:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0 = 0;
    CData/*4:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__b_started;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__b_started = 0;
    CData/*3:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0 = 0;
    QData/*47:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync = 0;
    CData/*3:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr = 0;
    CData/*2:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0 = 0;
    QData/*47:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0 = 0;
    CData/*3:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr = 0;
    CData/*2:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0 = 0;
    QData/*49:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync = 0;
    CData/*2:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr = 0;
    CData/*1:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0 = 0;
    QData/*49:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0 = 0;
    CData/*2:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr = 0;
    CData/*1:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0 = 0;
    QData/*49:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync = 0;
    SData/*8:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr = 0;
    QData/*49:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v0 = 0;
    QData/*49:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v1;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v1 = 0;
    CData/*2:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__pipeline;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__pipeline = 0;
    QData/*51:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v0 = 0;
    QData/*51:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v1;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v1 = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync = 0;
    CData/*0:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__stage;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__stage = 0;
    CData/*1:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe = 0;
    IData/*26:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_r;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_r = 0;
    IData/*26:0*/ __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_i;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_i = 0;
    SData/*9:0*/ __Vdly__DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr;
    __Vdly__DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr = 0;
    SData/*9:0*/ __Vdlyvdim0__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0;
    __Vdlyvdim0__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0 = 0;
    QData/*51:0*/ __Vdlyvval__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0;
    __Vdlyvval__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0 = 0;
    // Body
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0 = 0U;
    __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__pipeline 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__pipeline;
    __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe;
    __Vdly__DJ__DOT__left_fft__DOT__r_br_started = vlSelf->DJ__DOT__left_fft__DOT__r_br_started;
    __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__stage 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__stage;
    __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync;
    __Vdly__DJ__DOT__r_syncd = vlSelf->DJ__DOT__r_syncd;
    __Vdly__DJ__DOT__left_lpf__DOT__bin_idx = vlSelf->DJ__DOT__left_lpf__DOT__bin_idx;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__pipeline 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__pipeline;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0 = 0U;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe;
    __Vdly__DJ__DOT__left_ifft__DOT__r_br_started = vlSelf->DJ__DOT__left_ifft__DOT__r_br_started;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__stage 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__stage;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__b_started 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__b_started;
    __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0 = 0U;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__b_started 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__b_started;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync;
    __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__b_started 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__b_started;
    __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0 = 0U;
    __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__b_started 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__b_started;
    __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0 = 0U;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__b_started 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__b_started;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0 = 0U;
    __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__b_started 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__b_started;
    __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0 = 0U;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__b_started 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__b_started;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0 = 0U;
    __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__b_started 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__b_started;
    __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0 = 0U;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__b_started 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__b_started;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0 = 0U;
    __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0 = 0U;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__b_started 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__b_started;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0 = 0U;
    __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr;
    __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0 = 0U;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0 = 0U;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v0 = 0U;
    __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sto_i 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sto_i;
    __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sto_r 
        = vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sto_r;
    __Vdly__DJ__DOT__left_fft__DOT__revstage__DOT__wraddr 
        = vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr;
    __Vdlyvset__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0 = 0U;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v0 = 0U;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_i 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_i;
    __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_r 
        = vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_r;
    __Vdly__DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr 
        = vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr;
    __Vdlyvset__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0 = 0U;
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr) 
                     >> 8U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0 
            = ((IData)(vlSelf->left_fifo_source_stream) 
               << 0x10U);
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0 
            = (0xffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr));
    }
    __Vdly__DJ__DOT__r_syncd = ((~ (IData)(vlSelf->reset)) 
                                & ((IData)(vlSelf->DJ__DOT__r_syncd) 
                                   | (IData)(vlSelf->DJ__DOT__fft_o_sync)));
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr) 
                                                  >> 8U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0 
            = vlSelf->DJ__DOT__lpf_o_sample;
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0 
            = (0xffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr) 
                     >> 8U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x11U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0 
            = (0xffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr) 
                     >> 7U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d512;
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0 
            = (0x7fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr) 
                     >> 7U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x12U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0 
            = (0x7fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr) 
                                                  >> 8U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x16U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0 
            = (0xffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr) 
                                                  >> 7U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d512;
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0 
            = (0x7fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr) 
                     >> 6U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d256;
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0 
            = (0x3fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr) 
                     >> 6U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x12U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0 
            = (0x3fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr) 
                                                  >> 7U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x17U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0 
            = (0x7fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr) 
                     >> 5U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d128;
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0 
            = (0x1fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr) 
                                                  >> 6U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d256;
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0 
            = (0x3fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr) 
                     >> 5U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x13U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0 
            = (0x1fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr) 
                                                  >> 6U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x17U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0 
            = (0x3fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr) 
                     >> 4U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d64;
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0 
            = (0xfU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr) 
                                                  >> 5U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d128;
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0 
            = (0x1fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr) 
                     >> 4U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x13U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0 
            = (0xfU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr) 
                                                  >> 5U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x18U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0 
            = (0x1fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr) 
                     >> 3U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d32;
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0 
            = (7U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr) 
                                                  >> 4U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d64;
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0 
            = (0xfU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr) 
                     >> 3U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x14U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0 
            = (7U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr) 
                                                  >> 4U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x18U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0 
            = (0xfU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr) 
                     >> 2U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d16;
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0 
            = (3U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr) 
                                                  >> 3U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d32;
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0 
            = (7U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr));
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr) 
                     >> 2U))))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x14U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0 
            = (3U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr) 
                                                  >> 3U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x19U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0 
            = (7U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr) 
                                                  >> 2U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d16;
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0 
            = (3U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr));
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr) 
                                                  >> 2U)))) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x19U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0 = 1U;
        __Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0 
            = (3U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr));
    }
    vlSelf->DJ__DOT__lpf_o_sync = vlSelf->DJ__DOT__fft_o_sync;
    if (vlSelf->reset) {
        __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__pipeline = 0U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe = 0U;
        __Vdly__DJ__DOT__left_fft__DOT__r_br_started = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__r_br_started 
            = __Vdly__DJ__DOT__left_fft__DOT__r_br_started;
        __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__stage = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__pipeline = 0U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe = 0U;
        __Vdly__DJ__DOT__left_ifft__DOT__r_br_started = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__r_br_started 
            = __Vdly__DJ__DOT__left_ifft__DOT__r_br_started;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__stage = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync = 1U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & ((~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync)) 
                      | (~ (IData)(vlSelf->reset)))))) {
            __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr)));
            __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync;
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__pipeline 
                = ((6U & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__pipeline) 
                          << 1U)) | (1U & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr) 
                                           >> 1U)));
            __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe 
                = ((2U & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe) 
                          << 1U)) | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s4));
            __Vdly__DJ__DOT__left_fft__DOT__r_br_started 
                = ((IData)(vlSelf->DJ__DOT__left_fft__DOT__r_br_started) 
                   | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s2));
        }
        vlSelf->DJ__DOT__left_fft__DOT__r_br_started 
            = __Vdly__DJ__DOT__left_fft__DOT__r_br_started;
        if ((1U & (((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                    & ((~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync)) 
                       | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s4))) 
                   & (~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__stage))))) {
            __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync = 0U;
            __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__stage = 1U;
        } else if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__stage = 0U;
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync;
        if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (
                                                   (~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync)) 
                                                   | (~ (IData)(vlSelf->reset))))) {
            __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr)));
            __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync;
        if (vlSelf->DJ__DOT__lpf_o_ce) {
            __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__pipeline 
                = ((6U & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__pipeline) 
                          << 1U)) | (1U & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr) 
                                           >> 1U)));
            __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe 
                = ((2U & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe) 
                          << 1U)) | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_s4));
            __Vdly__DJ__DOT__left_ifft__DOT__r_br_started 
                = ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__r_br_started) 
                   | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_s2));
        }
        vlSelf->DJ__DOT__left_ifft__DOT__r_br_started 
            = __Vdly__DJ__DOT__left_ifft__DOT__r_br_started;
        if ((((IData)(vlSelf->DJ__DOT__lpf_o_ce) & 
              ((~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync)) 
               | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_s4))) 
             & (~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__stage)))) {
            __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync = 0U;
            __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__stage = 1U;
        } else if (vlSelf->DJ__DOT__lpf_o_ce) {
            __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__stage = 0U;
        }
        vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync;
        if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & ((~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync)) 
                      | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s512))))) {
            __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr)));
            __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync;
        if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (
                                                   (~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync)) 
                                                   | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_s512)))) {
            __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr)));
            __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync;
        if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & ((~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync)) 
                      | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s256))))) {
            __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr)));
            __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync;
        if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & ((~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync)) 
                      | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s128))))) {
            __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr)));
            __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync;
        if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (
                                                   (~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync)) 
                                                   | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_s256)))) {
            __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr)));
            __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync;
        if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & ((~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync)) 
                      | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s64))))) {
            __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr)));
            __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync;
        if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (
                                                   (~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync)) 
                                                   | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_s128)))) {
            __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr)));
            __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync;
        if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & ((~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync)) 
                      | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s32))))) {
            __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr)));
            __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync;
        if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (
                                                   (~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync)) 
                                                   | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_s64)))) {
            __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr)));
            __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync;
        if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & ((~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync)) 
                      | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s16))))) {
            __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr)));
            __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync;
        if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (
                                                   (~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync)) 
                                                   | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_s32)))) {
            __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr)));
            __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync;
        if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & ((~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync)) 
                      | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s8))))) {
            __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr)));
            __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync;
        if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (
                                                   (~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync)) 
                                                   | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_s16)))) {
            __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr)));
            __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync = 0U;
        }
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync;
        if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & (
                                                   (~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync)) 
                                                   | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_s8)))) {
            __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr)));
            __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync = 0U;
        }
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync;
    __Vtableidx1 = (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__b_started) 
                     << 7U) | (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ob_sync) 
                                << 6U) | (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr) 
                                           << 2U) | 
                                          ((2U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->reset)))));
    if ((1U & VDJ__ConstPool__TABLE_he91bf390_0[__Vtableidx1])) {
        __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr 
            = VDJ__ConstPool__TABLE_h667f051f_0[__Vtableidx1];
    }
    if ((2U & VDJ__ConstPool__TABLE_he91bf390_0[__Vtableidx1])) {
        vlSelf->DJ__DOT__left_fft__DOT__w_s16 = VDJ__ConstPool__TABLE_h82c2c6a0_0
            [__Vtableidx1];
    }
    if ((4U & VDJ__ConstPool__TABLE_he91bf390_0[__Vtableidx1])) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__b_started 
            = VDJ__ConstPool__TABLE_h82c2c6a0_0[__Vtableidx1];
    }
    __Vtableidx2 = (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__b_started) 
                     << 6U) | (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ob_sync) 
                                << 5U) | (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr) 
                                           << 2U) | 
                                          ((2U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->reset)))));
    if ((1U & VDJ__ConstPool__TABLE_h5e3c0e7d_0[__Vtableidx2])) {
        __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr 
            = VDJ__ConstPool__TABLE_h08c05a3b_0[__Vtableidx2];
    }
    if ((2U & VDJ__ConstPool__TABLE_h5e3c0e7d_0[__Vtableidx2])) {
        vlSelf->DJ__DOT__left_fft__DOT__w_s8 = VDJ__ConstPool__TABLE_hf8383f48_0
            [__Vtableidx2];
    }
    if ((4U & VDJ__ConstPool__TABLE_h5e3c0e7d_0[__Vtableidx2])) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__b_started 
            = VDJ__ConstPool__TABLE_hf8383f48_0[__Vtableidx2];
    }
    __Vtableidx3 = (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__b_started) 
                     << 7U) | (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ob_sync) 
                                << 6U) | (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr) 
                                           << 2U) | 
                                          (((IData)(vlSelf->DJ__DOT__lpf_o_ce) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if ((1U & VDJ__ConstPool__TABLE_he91bf390_0[__Vtableidx3])) {
        __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr 
            = VDJ__ConstPool__TABLE_h667f051f_0[__Vtableidx3];
    }
    if ((2U & VDJ__ConstPool__TABLE_he91bf390_0[__Vtableidx3])) {
        vlSelf->DJ__DOT__left_ifft__DOT__w_s16 = VDJ__ConstPool__TABLE_h82c2c6a0_0
            [__Vtableidx3];
    }
    if ((4U & VDJ__ConstPool__TABLE_he91bf390_0[__Vtableidx3])) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__b_started 
            = VDJ__ConstPool__TABLE_h82c2c6a0_0[__Vtableidx3];
    }
    __Vtableidx4 = (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__b_started) 
                     << 6U) | (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ob_sync) 
                                << 5U) | (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr) 
                                           << 2U) | 
                                          (((IData)(vlSelf->DJ__DOT__lpf_o_ce) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if ((1U & VDJ__ConstPool__TABLE_h5e3c0e7d_0[__Vtableidx4])) {
        __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr 
            = VDJ__ConstPool__TABLE_h08c05a3b_0[__Vtableidx4];
    }
    if ((2U & VDJ__ConstPool__TABLE_h5e3c0e7d_0[__Vtableidx4])) {
        vlSelf->DJ__DOT__left_ifft__DOT__w_s8 = VDJ__ConstPool__TABLE_hf8383f48_0
            [__Vtableidx4];
    }
    if ((4U & VDJ__ConstPool__TABLE_h5e3c0e7d_0[__Vtableidx4])) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__b_started 
            = VDJ__ConstPool__TABLE_hf8383f48_0[__Vtableidx4];
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d8;
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v0 = 1U;
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v1 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__imem
            [0U];
        vlSelf->o_result = vlSelf->DJ__DOT__left_ifft__DOT__br_result;
    }
    if (vlSelf->DJ__DOT__left_ifft__DOT____Vcellinp__revstage__i_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__br_result 
            = vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__brmem
            [((0x200U & ((~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                             >> 9U)) << 9U)) | ((0x100U 
                                                 & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                       << 6U)) 
                                                   | ((0x40U 
                                                       & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                          << 4U)) 
                                                      | ((0x20U 
                                                          & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                             << 2U)) 
                                                         | ((0x10U 
                                                             & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr)) 
                                                            | ((8U 
                                                                & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                                   >> 2U)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                                      >> 4U)) 
                                                                  | ((2U 
                                                                      & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                                         >> 6U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                                           >> 8U)))))))))))];
    }
    if (vlSelf->reset) {
        __Vdly__DJ__DOT__left_fft__DOT__revstage__DOT__wraddr = 0U;
        __Vdly__DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr = 0U;
        vlSelf->o_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__w_s2 = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe;
        vlSelf->DJ__DOT__left_fft__DOT__w_s4 = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__w_s2 = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe;
        vlSelf->DJ__DOT__left_ifft__DOT__w_s4 = 0U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__w_s512 = 0U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__b_started = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__b_started 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__b_started;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__w_s512 = 0U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__b_started = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__b_started 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__b_started;
        __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__w_s256 = 0U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__b_started = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__b_started 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__b_started;
        __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__w_s128 = 0U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__b_started = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__b_started 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__b_started;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__w_s256 = 0U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__b_started = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__b_started 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__b_started;
        __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__w_s64 = 0U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__b_started = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__b_started 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__b_started;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__w_s128 = 0U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__b_started = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__b_started 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__b_started;
        __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__w_s32 = 0U;
        __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__b_started = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__b_started 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__b_started;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__w_s64 = 0U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__b_started = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__b_started 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__b_started;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__w_s32 = 0U;
        __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__b_started = 0U;
    } else {
        if (vlSelf->DJ__DOT__left_fft__DOT____Vcellinp__revstage__i_ce) {
            __Vdlyvval__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__o_r)) 
                    << 0x15U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__o_i)));
            __Vdlyvset__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0 = 1U;
            __Vdlyvdim0__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0 
                = vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr;
            __Vdly__DJ__DOT__left_fft__DOT__revstage__DOT__wraddr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr)));
        }
        if (vlSelf->DJ__DOT__left_ifft__DOT____Vcellinp__revstage__i_ce) {
            __Vdlyvval__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__o_r)) 
                    << 0x1aU) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__o_i)));
            __Vdlyvset__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0 = 1U;
            __Vdlyvdim0__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0 
                = vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr;
            __Vdly__DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr)));
        }
        if (vlSelf->DJ__DOT__lpf_o_ce) {
            vlSelf->o_sync = vlSelf->DJ__DOT__left_ifft__DOT__br_sync;
            vlSelf->DJ__DOT__left_ifft__DOT__w_s2 = 
                (1U & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe) 
                       >> 1U));
            vlSelf->DJ__DOT__left_ifft__DOT__w_s4 = 
                (5U == (7U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr)));
            vlSelf->DJ__DOT__left_ifft__DOT__w_s512 
                = ((~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr) 
                       >> 8U)) & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ob_sync));
            if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ob_sync) 
                 | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__b_started))) {
                __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr)));
            }
            if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr) 
                       >> 8U)))) {
                __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__b_started = 1U;
            }
            vlSelf->DJ__DOT__left_ifft__DOT__w_s256 
                = ((~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr) 
                       >> 7U)) & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ob_sync));
            if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ob_sync) 
                 | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__b_started))) {
                __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr)));
            }
            if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr) 
                       >> 7U)))) {
                __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__b_started = 1U;
            }
            vlSelf->DJ__DOT__left_ifft__DOT__w_s128 
                = ((~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr) 
                       >> 6U)) & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ob_sync));
            if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ob_sync) 
                 | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__b_started))) {
                __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr)));
            }
            if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr) 
                       >> 6U)))) {
                __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__b_started = 1U;
            }
            vlSelf->DJ__DOT__left_ifft__DOT__w_s64 
                = ((~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr) 
                       >> 5U)) & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ob_sync));
            if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ob_sync) 
                 | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__b_started))) {
                __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr)));
            }
            if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr) 
                       >> 5U)))) {
                __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__b_started = 1U;
            }
            vlSelf->DJ__DOT__left_ifft__DOT__w_s32 
                = ((~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr) 
                       >> 4U)) & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ob_sync));
            if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ob_sync) 
                 | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__b_started))) {
                __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr)));
            }
            if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr) 
                       >> 4U)))) {
                __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__b_started = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            vlSelf->DJ__DOT__left_fft__DOT__w_s2 = 
                (1U & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe) 
                       >> 1U));
            vlSelf->DJ__DOT__left_fft__DOT__w_s4 = 
                (5U == (7U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr)));
            vlSelf->DJ__DOT__left_fft__DOT__w_s512 
                = ((~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr) 
                       >> 8U)) & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ob_sync));
            if (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ob_sync) 
                 | (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__b_started))) {
                __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr)));
            }
            if (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr) 
                       >> 8U)))) {
                __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__b_started = 1U;
            }
            vlSelf->DJ__DOT__left_fft__DOT__w_s256 
                = ((~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr) 
                       >> 7U)) & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ob_sync));
            if (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ob_sync) 
                 | (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__b_started))) {
                __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr)));
            }
            if (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr) 
                       >> 7U)))) {
                __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__b_started = 1U;
            }
            vlSelf->DJ__DOT__left_fft__DOT__w_s128 
                = ((~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr) 
                       >> 6U)) & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ob_sync));
            if (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ob_sync) 
                 | (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__b_started))) {
                __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr)));
            }
            if (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr) 
                       >> 6U)))) {
                __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__b_started = 1U;
            }
            vlSelf->DJ__DOT__left_fft__DOT__w_s64 = 
                ((~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr) 
                     >> 5U)) & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ob_sync));
            if (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ob_sync) 
                 | (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__b_started))) {
                __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr)));
            }
            if (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr) 
                       >> 5U)))) {
                __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__b_started = 1U;
            }
            vlSelf->DJ__DOT__left_fft__DOT__w_s32 = 
                ((~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr) 
                     >> 4U)) & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ob_sync));
            if (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ob_sync) 
                 | (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__b_started))) {
                __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr)));
            }
            if (((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr) 
                       >> 4U)))) {
                __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__b_started = 1U;
            }
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sync_pipe;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__b_started 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__b_started;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__b_started 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__b_started;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__b_started 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__b_started;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__b_started 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__b_started;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__b_started 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__b_started;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__b_started 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__b_started;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__b_started 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__b_started;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__b_started 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__b_started;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__b_started 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__b_started;
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__b_started 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__b_started;
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__brmem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__revstage__DOT__brmem__v0;
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v0 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d8;
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v0 = 1U;
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v1 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__imem
            [0U];
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x1fffffffffULL & VL_MULS_QQQ(37, (0x1fffffffffULL 
                                                  & VL_EXTENDS_QI(37,20, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                             (0x1fffffffffULL 
                                              & VL_EXTENDS_QI(37,17, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x1fffffffffULL & VL_MULS_QQQ(37, (0x1fffffffffULL 
                                                  & VL_EXTENDS_QI(37,20, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                             (0x1fffffffffULL 
                                              & VL_EXTENDS_QI(37,17, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x7fffffffffULL & VL_MULS_QQQ(39, (0x7fffffffffULL 
                                                  & VL_EXTENDS_QI(39,21, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                             (0x7fffffffffULL 
                                              & VL_EXTENDS_QI(39,18, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x7fffffffffULL & VL_MULS_QQQ(39, (0x7fffffffffULL 
                                                  & VL_EXTENDS_QI(39,21, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                             (0x7fffffffffULL 
                                              & VL_EXTENDS_QI(39,18, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                                   & VL_EXTENDS_QI(41,22, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                              (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,19, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                                   & VL_EXTENDS_QI(41,22, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                              (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,19, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                                   & VL_EXTENDS_QI(41,22, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                              (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,19, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                                   & VL_EXTENDS_QI(41,22, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                              (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,19, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x1fffffffffffULL & VL_MULS_QQQ(45, 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,24, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,21, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x1fffffffffffULL & VL_MULS_QQQ(45, 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,24, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,21, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x1ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x11U)))
                            ? ((0U != (0x1ffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x12U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x12U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x12U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x12U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x12U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x1ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x11U)))
                            ? ((0U != (0x1ffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x12U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x12U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x12U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x12U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x12U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x3ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x12U)))
                            ? ((0U != (0x3ffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x13U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x13U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x13U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x13U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x13U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x3ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x12U)))
                            ? ((0U != (0x3ffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x13U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x13U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x13U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x13U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x13U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x3ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x14U)))
                            ? ((0U != (0xfffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x15U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x15U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x15U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x15U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x15U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x3ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x14U)))
                            ? ((0U != (0xfffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x15U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x15U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x15U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x15U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x15U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x7ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x13U)))
                            ? ((0U != (0x7ffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x14U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x14U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x14U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x14U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x14U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x7ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x13U)))
                            ? ((0U != (0x7ffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x14U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x14U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x14U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x14U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x14U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x7ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x15U)))
                            ? ((0U != (0x1fffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x16U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x16U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x16U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x16U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x16U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x7ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x15U)))
                            ? ((0U != (0x1fffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x16U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x16U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x16U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x16U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x16U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0xfffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x14U)))
                            ? ((0U != (0xfffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x15U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x15U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x15U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x15U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x15U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0xfffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x14U)))
                            ? ((0U != (0xfffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x15U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x15U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x15U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x15U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x15U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0xfffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x16U)))
                            ? ((0U != (0x3fffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x17U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x17U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x17U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x17U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x17U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0xfffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x16U)))
                            ? ((0U != (0x3fffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x17U)))
                                : ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x17U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x17U)))
                                    : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x17U))))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x17U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__o_r 
            = (0x1fffffU & ((1U & vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_r)
                             ? ((2U & vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_r)
                                 ? ((IData)(1U) + (vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_r 
                                                   >> 1U))
                                 : (vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_r 
                                    >> 1U)) : (vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_r 
                                               >> 1U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__o_i 
            = (0x1fffffU & ((1U & vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_i)
                             ? ((2U & vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_i)
                                 ? ((IData)(1U) + (vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_i 
                                                   >> 1U))
                                 : (vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_i 
                                    >> 1U)) : (vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_i 
                                               >> 1U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x7fffffffffULL & (vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                  - vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x7fffffffffULL & ((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                   - vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                  - vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x24U)))))))) 
            << 0x25U) | vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x24U)))))))) 
            << 0x25U) | vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x1ffffffffffULL & (vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                   - vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x1ffffffffffULL & ((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                    - vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                   - vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x26U)))))))) 
            << 0x27U) | vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x26U)))))))) 
            << 0x27U) | vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x7fffffffffffULL & VL_MULS_QQQ(47, 
                                               (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                               (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,22, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x7fffffffffffULL & VL_MULS_QQQ(47, 
                                               (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                               (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,22, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x1ffffffffffffULL & VL_MULS_QQQ(49, 
                                                (0x1ffffffffffffULL 
                                                 & VL_EXTENDS_QI(49,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                                (0x1ffffffffffffULL 
                                                 & VL_EXTENDS_QI(49,23, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x1ffffffffffffULL & VL_MULS_QQQ(49, 
                                                (0x1ffffffffffffULL 
                                                 & VL_EXTENDS_QI(49,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                                (0x1ffffffffffffULL 
                                                 & VL_EXTENDS_QI(49,23, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x7ffffffffffffULL & VL_MULS_QQQ(51, 
                                                (0x7ffffffffffffULL 
                                                 & VL_EXTENDS_QI(51,27, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                                (0x7ffffffffffffULL 
                                                 & VL_EXTENDS_QI(51,24, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x7ffffffffffffULL & VL_MULS_QQQ(51, 
                                                (0x7ffffffffffffULL 
                                                 & VL_EXTENDS_QI(51,27, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                                (0x7ffffffffffffULL 
                                                 & VL_EXTENDS_QI(51,24, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x7ffffffffffffULL & VL_MULS_QQQ(51, 
                                                (0x7ffffffffffffULL 
                                                 & VL_EXTENDS_QI(51,27, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                                (0x7ffffffffffffULL 
                                                 & VL_EXTENDS_QI(51,24, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x7ffffffffffffULL & VL_MULS_QQQ(51, 
                                                (0x7ffffffffffffULL 
                                                 & VL_EXTENDS_QI(51,27, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                                (0x7ffffffffffffULL 
                                                 & VL_EXTENDS_QI(51,24, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x1fffffffffffffULL & VL_MULS_QQQ(53, 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,28, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x1fffffffffffffULL & VL_MULS_QQQ(53, 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,28, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x1fffffffffffffULL & VL_MULS_QQQ(53, 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,28, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x1fffffffffffffULL & VL_MULS_QQQ(53, 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,28, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x7fffffffffffffULL & VL_MULS_QQQ(55, 
                                                 (0x7fffffffffffffULL 
                                                  & VL_EXTENDS_QI(55,29, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                                 (0x7fffffffffffffULL 
                                                  & VL_EXTENDS_QI(55,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x7fffffffffffffULL & VL_MULS_QQQ(55, 
                                                 (0x7fffffffffffffULL 
                                                  & VL_EXTENDS_QI(55,29, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                                 (0x7fffffffffffffULL 
                                                  & VL_EXTENDS_QI(55,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x3fffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x16U)))
                             ? ((0U != (0x3fffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x17U)))
                                 : ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x17U)))
                                     ? ((IData)(1U) 
                                        + (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x17U)))
                                     : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                >> 0x17U))))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                        >> 0x17U))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x3fffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x16U)))
                             ? ((0U != (0x3fffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x17U)))
                                 : ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x17U)))
                                     ? ((IData)(1U) 
                                        + (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x17U)))
                                     : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                >> 0x17U))))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                        >> 0x17U))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x7fffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x17U)))
                             ? ((0U != (0x7fffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x18U)))
                                 : ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x18U)))
                                     ? ((IData)(1U) 
                                        + (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x18U)))
                                     : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                >> 0x18U))))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                        >> 0x18U))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x7fffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x17U)))
                             ? ((0U != (0x7fffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x18U)))
                                 : ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x18U)))
                                     ? ((IData)(1U) 
                                        + (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x18U)))
                                     : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                >> 0x18U))))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                        >> 0x18U))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x7fffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x19U)))
                             ? ((0U != (0x1ffffffU 
                                        & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x1aU)))
                                 : ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x1aU)))
                                     ? ((IData)(1U) 
                                        + (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x1aU)))
                                     : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                >> 0x1aU))))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                        >> 0x1aU))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x7fffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x19U)))
                             ? ((0U != (0x1ffffffU 
                                        & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x1aU)))
                                 : ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x1aU)))
                                     ? ((IData)(1U) 
                                        + (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x1aU)))
                                     : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                >> 0x1aU))))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                        >> 0x1aU))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0xffffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x18U)))
                             ? ((0U != (0xffffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x19U)))
                                 : ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x19U)))
                                     ? ((IData)(1U) 
                                        + (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x19U)))
                                     : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                >> 0x19U))))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                        >> 0x19U))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0xffffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x18U)))
                             ? ((0U != (0xffffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x19U)))
                                 : ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x19U)))
                                     ? ((IData)(1U) 
                                        + (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x19U)))
                                     : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                >> 0x19U))))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                        >> 0x19U))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0xffffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x1aU)))
                             ? ((0U != (0x3ffffffU 
                                        & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                           >> 0x1bU)))
                                 : ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x1bU)))
                                     ? ((IData)(1U) 
                                        + (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x1bU)))
                                     : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                >> 0x1bU))))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                        >> 0x1bU))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0xffffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x1aU)))
                             ? ((0U != (0x3ffffffU 
                                        & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                           >> 0x1bU)))
                                 : ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x1bU)))
                                     ? ((IData)(1U) 
                                        + (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x1bU)))
                                     : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                >> 0x1bU))))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                        >> 0x1bU))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x1ffffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x19U)))
                              ? ((0U != (0x1ffffffU 
                                         & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                  ? ((IData)(1U) + (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                            >> 0x1aU)))
                                  : ((1U & (IData)(
                                                   (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                    >> 0x1aU)))
                                      ? ((IData)(1U) 
                                         + (IData)(
                                                   (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                    >> 0x1aU)))
                                      : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                 >> 0x1aU))))
                              : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                         >> 0x1aU))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x1ffffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x19U)))
                              ? ((0U != (0x1ffffffU 
                                         & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                  ? ((IData)(1U) + (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                            >> 0x1aU)))
                                  : ((1U & (IData)(
                                                   (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                    >> 0x1aU)))
                                      ? ((IData)(1U) 
                                         + (IData)(
                                                   (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                    >> 0x1aU)))
                                      : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                 >> 0x1aU))))
                              : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                         >> 0x1aU))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x1ffffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1bU)))
                              ? ((0U != (0x7ffffffU 
                                         & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                  ? ((IData)(1U) + (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                            >> 0x1cU)))
                                  : ((1U & (IData)(
                                                   (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                    >> 0x1cU)))
                                      ? ((IData)(1U) 
                                         + (IData)(
                                                   (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                    >> 0x1cU)))
                                      : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                 >> 0x1cU))))
                              : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                         >> 0x1cU))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x1ffffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1bU)))
                              ? ((0U != (0x7ffffffU 
                                         & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                  ? ((IData)(1U) + (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                            >> 0x1cU)))
                                  : ((1U & (IData)(
                                                   (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                    >> 0x1cU)))
                                      ? ((IData)(1U) 
                                         + (IData)(
                                                   (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                    >> 0x1cU)))
                                      : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                 >> 0x1cU))))
                              : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                         >> 0x1cU))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__o_r 
            = (0x3ffffffU & ((1U & vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_r)
                              ? ((2U & vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_r)
                                  ? ((IData)(1U) + 
                                     (vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_r 
                                      >> 1U)) : (vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_r 
                                                 >> 1U))
                              : (vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_r 
                                 >> 1U)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__o_i 
            = (0x3ffffffU & ((1U & vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_i)
                              ? ((2U & vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_i)
                                  ? ((IData)(1U) + 
                                     (vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_i 
                                      >> 1U)) : (vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_i 
                                                 >> 1U))
                              : (vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_i 
                                 >> 1U)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x1ffffffffffffULL & (vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                     - vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x1ffffffffffffULL & ((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                      - vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                     - vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x2eU)))))))) 
            << 0x2fU) | vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x2eU)))))))) 
            << 0x2fU) | vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x7ffffffffffULL & (vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                   - vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x7ffffffffffULL & ((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                    - vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                   - vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x7ffffffffffffULL & (vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                     - vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x7ffffffffffffULL & ((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                      - vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                     - vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x30U)))))))) 
            << 0x31U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x30U)))))))) 
            << 0x31U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x7ffffffffffULL & (vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                   - vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x7ffffffffffULL & ((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                    - vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                   - vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x1fffffffffffffULL & (vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                      - vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x1fffffffffffffULL & ((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                       - vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                      - vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x32U)))))))) 
            << 0x33U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x32U)))))))) 
            << 0x33U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x1fffffffffffULL & (vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                    - vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x1fffffffffffULL & ((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                     - vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                    - vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x1fffffffffffffULL & (vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                      - vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x1fffffffffffffULL & ((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                       - vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                      - vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x32U)))))))) 
            << 0x33U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x32U)))))))) 
            << 0x33U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x1fffffffffffULL & (vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                    - vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x1fffffffffffULL & ((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                     - vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                    - vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x7fffffffffffffULL & (vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                      - vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x7fffffffffffffULL & ((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                       - vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                      - vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x34U)))))))) 
            << 0x35U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x34U)))))))) 
            << 0x35U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x7fffffffffffULL & (vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                    - vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x7fffffffffffULL & ((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                     - vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                    - vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x2cU)))))))) 
            << 0x2dU) | vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x2cU)))))))) 
            << 0x2dU) | vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x7fffffffffffffULL & (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                      - vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x7fffffffffffffULL & ((vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                       - vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                      - vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x34U)))))))) 
            << 0x35U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x34U)))))))) 
            << 0x35U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x1ffffffffffffffULL & (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                       - vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x1ffffffffffffffULL & ((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                        - vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                       - vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x36U)))))))) 
            << 0x37U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x36U)))))))) 
            << 0x37U) | vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        if (vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__stage) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_r 
                = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__m_r) 
                                + VL_EXTENDS_II(22,21, 
                                                (0x1fffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__w_d4 
                                                            >> 0x15U))))));
            __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sto_r 
                = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__m_r) 
                                - VL_EXTENDS_II(22,21, 
                                                (0x1fffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__w_d4 
                                                            >> 0x15U))))));
            vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_i 
                = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__m_i) 
                                + VL_EXTENDS_II(22,21, 
                                                (0x1fffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_d4)))));
            __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sto_i 
                = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__m_i) 
                                - VL_EXTENDS_II(22,21, 
                                                (0x1fffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_d4)))));
        } else {
            vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_r 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sto_r;
            vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__rnd_i 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sto_i;
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sto_r 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sto_r;
    } else {
        vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sto_r 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sto_r;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__sto_i 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__sto_i;
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        if (vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__stage) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_r 
                = (0x7ffffffU & (VL_EXTENDS_II(27,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__m_r) 
                                 + VL_EXTENDS_II(27,26, 
                                                 (0x3ffffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_ifft__DOT__w_d4 
                                                             >> 0x1aU))))));
            __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_r 
                = (0x7ffffffU & (VL_EXTENDS_II(27,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__m_r) 
                                 - VL_EXTENDS_II(27,26, 
                                                 (0x3ffffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_ifft__DOT__w_d4 
                                                             >> 0x1aU))))));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_i 
                = (0x7ffffffU & (VL_EXTENDS_II(27,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__m_i) 
                                 + VL_EXTENDS_II(27,26, 
                                                 (0x3ffffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_d4)))));
            __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_i 
                = (0x7ffffffU & (VL_EXTENDS_II(27,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__m_i) 
                                 - VL_EXTENDS_II(27,26, 
                                                 (0x3ffffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_d4)))));
        } else {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_r 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_r;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__rnd_i 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_i;
        }
        vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_r 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_r;
    } else {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_r 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_r;
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_i 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__sto_i;
    if (vlSelf->reset) {
        vlSelf->DJ__DOT__left_ifft__DOT__br_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ob_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__in_reset = 1U;
    } else {
        if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT____Vcellinp__revstage__i_ce) 
             & (~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__in_reset)))) {
            vlSelf->DJ__DOT__left_ifft__DOT__br_sync 
                = (0U == (0x1ffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr)));
        }
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x22U)));
            vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x24U)));
            vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x26U)));
            vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x26U)));
            vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x28U)));
            vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x28U)));
            vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x2aU)));
        }
        if (vlSelf->DJ__DOT__lpf_o_ce) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x2cU)));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x2eU)));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x30U)));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x30U)));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x32U)));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x32U)));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ob_sync 
                = (1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x34U)));
        }
        if (((IData)(vlSelf->DJ__DOT__left_ifft__DOT____Vcellinp__revstage__i_ce) 
             & (0x1ffU == (0x1ffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr))))) {
            vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__in_reset = 0U;
        }
    }
    vlSelf->DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__revstage__DOT__wraddr;
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x7fffffffffULL & VL_MULS_QQQ(39, (0x7fffffffffULL 
                                                  & VL_EXTENDS_QI(39,21, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                             (0x7fffffffffULL 
                                              & VL_EXTENDS_QI(39,18, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                                   & VL_EXTENDS_QI(41,22, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                              (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,19, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x1fffffffffffULL & VL_MULS_QQQ(45, 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,24, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,21, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x1fffffffffffULL & VL_MULS_QQQ(45, 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,24, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,21, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x7fffffffffffULL & VL_MULS_QQQ(47, 
                                               (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,25, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                               (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,22, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        if ((1U & (~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__stage)))) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__m_r 
                = (0x1fffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__w_d4 
                                        >> 0x15U)));
            vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__m_i 
                = (0x1fffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_d4));
        }
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_2__DOT__stage 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_2__DOT__stage;
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x1ffffffffffffULL & VL_MULS_QQQ(49, 
                                                (0x1ffffffffffffULL 
                                                 & VL_EXTENDS_QI(49,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                                (0x1ffffffffffffULL 
                                                 & VL_EXTENDS_QI(49,23, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x7ffffffffffffULL & VL_MULS_QQQ(51, 
                                                (0x7ffffffffffffULL 
                                                 & VL_EXTENDS_QI(51,27, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                                (0x7ffffffffffffULL 
                                                 & VL_EXTENDS_QI(51,24, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x1fffffffffffffULL & VL_MULS_QQQ(53, 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,28, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x1fffffffffffffULL & VL_MULS_QQQ(53, 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,28, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                                 (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x7fffffffffffffULL & VL_MULS_QQQ(55, 
                                                 (0x7fffffffffffffULL 
                                                  & VL_EXTENDS_QI(55,29, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                                 (0x7fffffffffffffULL 
                                                  & VL_EXTENDS_QI(55,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x7fffffffffffffULL & VL_MULS_QQQ(55, 
                                                 (0x7fffffffffffffULL 
                                                  & VL_EXTENDS_QI(55,29, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                                 (0x7fffffffffffffULL 
                                                  & VL_EXTENDS_QI(55,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x1ffffffffffffffULL & VL_MULS_QQQ(57, 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,30, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                                  (0x1ffffffffffffffULL 
                                                   & VL_EXTENDS_QI(57,27, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        if ((1U & (~ (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__stage)))) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__m_r 
                = (0x3ffffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__w_d4 
                                         >> 0x1aU)));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__m_i 
                = (0x3ffffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_d4));
        }
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_2__DOT__stage 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_2__DOT__stage;
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(21,20, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x3ffffU & (VL_EXTENDS_II(18,17, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                           + VL_EXTENDS_II(18,17, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(22,21, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                           + VL_EXTENDS_II(19,18, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x7fffffU & (VL_EXTENDS_II(23,22, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(23,22, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0xfffffU & (VL_EXTENDS_II(20,19, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                           + VL_EXTENDS_II(20,19, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x7fffffU & (VL_EXTENDS_II(23,22, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(23,22, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0xfffffU & (VL_EXTENDS_II(20,19, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                           + VL_EXTENDS_II(20,19, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0xffffffU & (VL_EXTENDS_II(24,23, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(24,23, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                            + VL_EXTENDS_II(21,20, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0xffffffU & (VL_EXTENDS_II(24,23, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(24,23, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                            + VL_EXTENDS_II(21,20, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                             + VL_EXTENDS_II(25,24, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                            + VL_EXTENDS_II(22,21, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__ob_b_r)) 
                << 0x15U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__ob_b_i)));
        __Vdlyvset__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v0 = 1U;
        __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v1 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__omem
            [0U];
        vlSelf->DJ__DOT__left_fft__DOT__w_d4 = ((4U 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__pipeline))
                                                 ? vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__ob_a
                                                 : 
                                                vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__omem
                                                [1U]);
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__pipeline 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__pipeline;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__omem[0U] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v0;
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__omem[1U] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__omem__v1;
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x3ffffffU & (VL_EXTENDS_II(26,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                             + VL_EXTENDS_II(26,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x7fffffU & (VL_EXTENDS_II(23,22, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                            + VL_EXTENDS_II(23,22, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x7ffffffU & (VL_EXTENDS_II(27,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                             + VL_EXTENDS_II(27,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0xffffffU & (VL_EXTENDS_II(24,23, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                            + VL_EXTENDS_II(24,23, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0xfffffffU & (VL_EXTENDS_II(28,27, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                             + VL_EXTENDS_II(28,27, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                             + VL_EXTENDS_II(25,24, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0xfffffffU & (VL_EXTENDS_II(28,27, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                             + VL_EXTENDS_II(28,27, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                             + VL_EXTENDS_II(25,24, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x1fffffffU & (VL_EXTENDS_II(29,28, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                              + VL_EXTENDS_II(29,28, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x3ffffffU & (VL_EXTENDS_II(26,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                             + VL_EXTENDS_II(26,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x1fffffffU & (VL_EXTENDS_II(29,28, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                              + VL_EXTENDS_II(29,28, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x3ffffffU & (VL_EXTENDS_II(26,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                             + VL_EXTENDS_II(26,25, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x3fffffffU & (VL_EXTENDS_II(30,29, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                              + VL_EXTENDS_II(30,29, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x7ffffffU & (VL_EXTENDS_II(27,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                             + VL_EXTENDS_II(27,26, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__ob_b_r)) 
                << 0x1aU) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__ob_b_i)));
        __Vdlyvset__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v0 = 1U;
        __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v1 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__omem
            [0U];
        vlSelf->DJ__DOT__left_ifft__DOT__w_d4 = ((4U 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__pipeline))
                                                  ? vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__ob_a
                                                  : 
                                                 vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__omem
                                                 [1U]);
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__pipeline 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__pipeline;
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__omem[0U] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v0;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__omem[1U] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__omem__v1;
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0xfffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                   >> 0x14U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0xfffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x1ffffU & (VL_EXTENDS_II(17,16, (vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                 >> 0x10U)) 
                           - VL_EXTENDS_II(17,16, (vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x10U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x1ffffU & (VL_EXTENDS_II(17,16, (0xffffU 
                                                 & vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left)) 
                           - VL_EXTENDS_II(17,16, (0xffffU 
                                                   & vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x1fffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x15U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x1fffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x11U)))) 
                           - VL_EXTENDS_II(18,17, (0x1ffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x11U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           - VL_EXTENDS_II(18,17, (0x1ffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x3fffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x16U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x3fffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x12U)))) 
                           - VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x12U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           - VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x3fffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x16U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x3fffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x12U)))) 
                           - VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x12U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           - VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x7fffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x17U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x7fffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x13U)))) 
                           - VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x13U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           - VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x7fffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x17U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x7fffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x13U)))) 
                           - VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x13U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           - VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0xffffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x18U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0xffffffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x14U)))) 
                            - VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x14U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            - VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__ob_a 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__rnd_sum_r)) 
                << 0x15U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__rnd_sum_i)));
        if ((1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr))) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__ob_b_r 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_i;
            vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__ob_b_i 
                = (0x1fffffU & (- vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_r));
        } else {
            vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__ob_b_r 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_r;
            vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__ob_b_i 
                = (0x1fffffU & vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_i);
        }
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ib_c;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ib_c;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ib_c;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ib_c;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ib_c;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ib_c;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ib_c;
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__rnd_sum_r 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__sum_r;
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr) 
                  >> 1U)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__sum_r 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__imem
                                                             [1U] 
                                                             >> 0x14U)))) 
                            + VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_fft__DOT__w_d8 
                                                        >> 0x14U))))));
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__rnd_sum_i 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__sum_i;
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr) 
                  >> 1U)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__sum_i 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(
                                                            vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__imem
                                                            [1U]))) 
                            + VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_d8)))));
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_r 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__diff_r;
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr) 
                  >> 1U)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__diff_r 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__imem
                                                             [1U] 
                                                             >> 0x14U)))) 
                            - VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_fft__DOT__w_d8 
                                                        >> 0x14U))))));
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_i 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__diff_i;
    }
    if ((1U & ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
               & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr) 
                  >> 1U)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__diff_i 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(
                                                            vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__imem
                                                            [1U]))) 
                            - VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_d8)))));
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x1ffffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                     >> 0x19U)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x1ffffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x3fffffU & (VL_EXTENDS_II(22,21, (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x15U)))) 
                            - VL_EXTENDS_II(22,21, 
                                            (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x15U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x3fffffU & (VL_EXTENDS_II(22,21, (0x1fffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            - VL_EXTENDS_II(22,21, 
                                            (0x1fffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x3ffffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                     >> 0x1aU)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x3ffffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x7fffffU & (VL_EXTENDS_II(23,22, (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x16U)))) 
                            - VL_EXTENDS_II(23,22, 
                                            (0x3fffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x16U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x7fffffU & (VL_EXTENDS_II(23,22, (0x3fffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            - VL_EXTENDS_II(23,22, 
                                            (0x3fffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x7ffffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                     >> 0x1bU)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x7ffffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0xffffffU & (VL_EXTENDS_II(24,23, (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x17U)))) 
                            - VL_EXTENDS_II(24,23, 
                                            (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x17U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0xffffffU & (VL_EXTENDS_II(24,23, (0x7fffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            - VL_EXTENDS_II(24,23, 
                                            (0x7fffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x7ffffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                     >> 0x1bU)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x7ffffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0xffffffU & (VL_EXTENDS_II(24,23, (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x17U)))) 
                            - VL_EXTENDS_II(24,23, 
                                            (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x17U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0xffffffU & (VL_EXTENDS_II(24,23, (0x7fffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            - VL_EXTENDS_II(24,23, 
                                            (0x7fffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0xfffffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                     >> 0x1cU)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0xfffffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                              >> 0x18U)))) 
                             - VL_EXTENDS_II(25,24, 
                                             (0xffffffU 
                                              & (IData)(
                                                        (vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                         >> 0x18U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, (0xffffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                             - VL_EXTENDS_II(25,24, 
                                             (0xffffffU 
                                              & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0xfffffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                     >> 0x1cU)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0xfffffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                              >> 0x18U)))) 
                             - VL_EXTENDS_II(25,24, 
                                             (0xffffffU 
                                              & (IData)(
                                                        (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                         >> 0x18U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, (0xffffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                             - VL_EXTENDS_II(25,24, 
                                             (0xffffffU 
                                              & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x1fffffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                      >> 0x1dU)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x1fffffffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x3ffffffU & (VL_EXTENDS_II(26,25, (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                              >> 0x19U)))) 
                             - VL_EXTENDS_II(26,25, 
                                             (0x1ffffffU 
                                              & (IData)(
                                                        (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                         >> 0x19U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x3ffffffU & (VL_EXTENDS_II(26,25, (0x1ffffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                             - VL_EXTENDS_II(26,25, 
                                             (0x1ffffffU 
                                              & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__ob_a 
            = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__rnd_sum_r)) 
                << 0x1aU) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__rnd_sum_i)));
        if ((1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr))) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__ob_b_r 
                = (0x3ffffffU & (- vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_i));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__ob_b_i 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_r;
        } else {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__ob_b_r 
                = (0x3ffffffU & vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_r);
            vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__ob_b_i 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_i;
        }
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ib_c;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ib_c;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ib_c;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ib_c;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ib_c;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ib_c;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ib_c;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__rnd_sum_r 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__sum_r;
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr) 
                                               >> 1U))) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__sum_r 
            = (0x3ffffffU & (VL_EXTENDS_II(26,25, (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__imem
                                                              [1U] 
                                                              >> 0x19U)))) 
                             + VL_EXTENDS_II(26,25, 
                                             (0x1ffffffU 
                                              & (IData)(
                                                        (vlSelf->DJ__DOT__left_ifft__DOT__w_d8 
                                                         >> 0x19U))))));
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__rnd_sum_i 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__sum_i;
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr) 
                                               >> 1U))) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__sum_i 
            = (0x3ffffffU & (VL_EXTENDS_II(26,25, (0x1ffffffU 
                                                   & (IData)(
                                                             vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__imem
                                                             [1U]))) 
                             + VL_EXTENDS_II(26,25, 
                                             (0x1ffffffU 
                                              & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_d8)))));
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_r 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__diff_r;
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr) 
                                               >> 1U))) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__diff_r 
            = (0x3ffffffU & (VL_EXTENDS_II(26,25, (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__imem
                                                              [1U] 
                                                              >> 0x19U)))) 
                             - VL_EXTENDS_II(26,25, 
                                             (0x1ffffffU 
                                              & (IData)(
                                                        (vlSelf->DJ__DOT__left_ifft__DOT__w_d8 
                                                         >> 0x19U))))));
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_i 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__diff_i;
    }
    if (((IData)(vlSelf->DJ__DOT__lpf_o_ce) & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr) 
                                               >> 1U))) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__diff_i 
            = (0x3ffffffU & (VL_EXTENDS_II(26,25, (0x1ffffffU 
                                                   & (IData)(
                                                             vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__imem
                                                             [1U]))) 
                             - VL_EXTENDS_II(26,25, 
                                             (0x1ffffffU 
                                              & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_d8)))));
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ib_c 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__cmem
            [(0xffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ib_c 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__cmem
            [(0x7fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ib_c 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__cmem
            [(0x3fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ib_c 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__cmem
            [(0x1fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ib_c 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__cmem
            [(0xfU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ib_c 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__cmem
            [(7U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ib_c 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__cmem
            [(3U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__w_d8 = ((4U 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr))
                                                  ? vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__pre_ovalue
                                                  : 
                                                 (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                   << 0x19U) 
                                                  | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__omem
            [vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x1ffffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x1aU)))
                              ? ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                >> 0x1bU)))
                                  ? ((IData)(1U) + (IData)(
                                                           (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                            >> 0x1bU)))
                                  : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                             >> 0x1bU)))
                              : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                         >> 0x1bU))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x1ffffffU & ((1U & (IData)((0x3ffffffULL 
                                            & (VL_SHIFTL_QQI(53,53,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                               >> 0x1bU))))
                              ? ((1U & (IData)((0x1ffffffULL 
                                                & (VL_SHIFTL_QQI(53,53,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                   >> 0x1cU))))
                                  ? ((IData)(1U) + (IData)(
                                                           (0x1ffffffULL 
                                                            & (VL_SHIFTL_QQI(53,53,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                               >> 0x1cU))))
                                  : (IData)((0x1ffffffULL 
                                             & (VL_SHIFTL_QQI(53,53,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                >> 0x1cU))))
                              : (IData)((0x1ffffffULL 
                                         & (VL_SHIFTL_QQI(53,53,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                            >> 0x1cU)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__nxt_oaddr 
            = ((2U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__nxt_oaddr)) 
               | (2U & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr) 
                                        >> 1U)) << 1U)));
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ib_c 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__cmem
            [(0xffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ib_c 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__cmem
            [(0x7fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ib_c 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__cmem
            [(0x3fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ib_c 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__cmem
            [(0x1fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ib_c 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__cmem
            [(0xfU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ib_c 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__cmem
            [(7U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ib_c 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__cmem
            [(3U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__w_d8 = ((4U 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr))
                                                 ? vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__pre_ovalue
                                                 : 
                                                (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__omem
            [vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0xfffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                          >> 0x15U)))
                            ? ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x16U)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                          >> 0x16U)))
                                : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x16U)))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                       >> 0x16U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0xfffffU & ((1U & (IData)((0x1fffffULL 
                                          & (VL_SHIFTL_QQI(43,43,32, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                             >> 0x16U))))
                            ? ((1U & (IData)((0xfffffULL 
                                              & (VL_SHIFTL_QQI(43,43,32, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                 >> 0x17U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0xfffffULL 
                                                          & (VL_SHIFTL_QQI(43,43,32, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                             >> 0x17U))))
                                : (IData)((0xfffffULL 
                                           & (VL_SHIFTL_QQI(43,43,32, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                              >> 0x17U))))
                            : (IData)((0xfffffULL & 
                                       (VL_SHIFTL_QQI(43,43,32, vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                        >> 0x17U)))));
    }
    if (vlSelf->reset) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x2aU) | (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x15U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
        if (vlSelf->DJ__DOT__lpf_o_ce) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x34U) | (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x1aU) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x3ffffffU & (VL_EXTENDS_II(26,25, (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                              >> 0x19U)))) 
                             + VL_EXTENDS_II(26,25, 
                                             (0x1ffffffU 
                                              & (IData)(
                                                        (vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                         >> 0x19U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x3ffffffU & (VL_EXTENDS_II(26,25, (0x1ffffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                             + VL_EXTENDS_II(26,25, 
                                             (0x1ffffffU 
                                              & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ib_a;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ib_b;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ib_a 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__imem
            [(3U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ib_b 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d16;
        vlSelf->DJ__DOT__left_ifft__DOT__w_d16 = ((8U 
                                                   & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr))
                                                   ? vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__pre_ovalue
                                                   : 
                                                  (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                    << 0x19U) 
                                                   | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__omem
            [vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x1ffffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                     >> 0x19U)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x1ffffffU & ((1U & (IData)((0x3ffffffULL 
                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                               >> 0x19U))))
                              ? ((1U & (IData)((0x1ffffffULL 
                                                & (VL_SHIFTL_QQI(51,51,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                   >> 0x1aU))))
                                  ? ((IData)(1U) + (IData)(
                                                           (0x1ffffffULL 
                                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                               >> 0x1aU))))
                                  : (IData)((0x1ffffffULL 
                                             & (VL_SHIFTL_QQI(51,51,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                >> 0x1aU))))
                              : (IData)((0x1ffffffULL 
                                         & (VL_SHIFTL_QQI(51,51,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                            >> 0x1aU)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__nxt_oaddr 
            = ((6U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__nxt_oaddr)) 
               | (6U & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr) 
                                        >> 1U)) << 1U)));
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__nxt_oaddr 
            = ((2U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__nxt_oaddr)) 
               | (2U & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr) 
                                        >> 1U)) << 1U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x14U)))) 
                            + VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x14U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            + VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ib_a;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ib_b;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ib_a 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__imem
            [(3U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ib_b 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d16;
        vlSelf->DJ__DOT__left_fft__DOT__w_d16 = ((8U 
                                                  & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr))
                                                  ? vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__pre_ovalue
                                                  : 
                                                 (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__omem
            [vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0xfffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                   >> 0x14U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0xfffffU & ((1U & (IData)((0x1fffffULL 
                                          & (VL_SHIFTL_QQI(41,41,32, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                             >> 0x14U))))
                            ? ((1U & (IData)((0xfffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x15U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0xfffffULL 
                                                          & (VL_SHIFTL_QQI(41,41,32, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                             >> 0x15U))))
                                : (IData)((0xfffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x15U))))
                            : (IData)((0xfffffULL & 
                                       (VL_SHIFTL_QQI(41,41,32, vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                        >> 0x15U)))));
    }
    if (vlSelf->reset) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ib_sync));
            vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__ib_sync 
                = (4U == (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr));
            vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x28U) | (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x14U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
        if (vlSelf->DJ__DOT__lpf_o_ce) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ib_sync) 
                   & (IData)(vlSelf->DJ__DOT__lpf_o_ce));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__ib_sync 
                = (4U == (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x32U) | (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x19U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                              >> 0x18U)))) 
                             + VL_EXTENDS_II(25,24, 
                                             (0xffffffU 
                                              & (IData)(
                                                        (vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                         >> 0x18U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, (0xffffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                             + VL_EXTENDS_II(25,24, 
                                             (0xffffffU 
                                              & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ib_a;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ib_b;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ib_a 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__imem
            [(7U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ib_b 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d32;
        vlSelf->DJ__DOT__left_ifft__DOT__w_d32 = ((0x10U 
                                                   & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr))
                                                   ? vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__pre_ovalue
                                                   : 
                                                  (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                    << 0x18U) 
                                                   | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__omem
            [vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0xffffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x19U)))
                             ? ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x1aU)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x1aU)))
                                 : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x1aU)))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                        >> 0x1aU))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0xffffffU & ((1U & (IData)((0x1ffffffULL 
                                           & (VL_SHIFTL_QQI(51,51,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                              >> 0x1aU))))
                             ? ((1U & (IData)((0xffffffULL 
                                               & (VL_SHIFTL_QQI(51,51,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                  >> 0x1bU))))
                                 ? ((IData)(1U) + (IData)(
                                                          (0xffffffULL 
                                                           & (VL_SHIFTL_QQI(51,51,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                              >> 0x1bU))))
                                 : (IData)((0xffffffULL 
                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                               >> 0x1bU))))
                             : (IData)((0xffffffULL 
                                        & (VL_SHIFTL_QQI(51,51,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                           >> 0x1bU)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__nxt_oaddr 
            = ((0xeU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__nxt_oaddr)) 
               | (0xeU & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr) 
                                          >> 1U)) << 1U)));
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__nxt_oaddr 
            = ((6U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__nxt_oaddr)) 
               | (6U & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr) 
                                        >> 1U)) << 1U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x13U)))) 
                           + VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x13U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           + VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ib_a;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ib_b;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ib_a 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__imem
            [(7U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ib_b 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d32;
        vlSelf->DJ__DOT__left_fft__DOT__w_d32 = ((0x10U 
                                                  & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr))
                                                  ? vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__pre_ovalue
                                                  : 
                                                 (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                   << 0x13U) 
                                                  | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__omem
            [vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x7ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                          >> 0x14U)))
                            ? ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x15U)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                          >> 0x15U)))
                                : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x15U)))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                       >> 0x15U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x7ffffU & ((1U & (IData)((0xfffffULL 
                                          & (VL_SHIFTL_QQI(41,41,32, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                             >> 0x15U))))
                            ? ((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x16U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0x7ffffULL 
                                                          & (VL_SHIFTL_QQI(41,41,32, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                             >> 0x16U))))
                                : (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x16U))))
                            : (IData)((0x7ffffULL & 
                                       (VL_SHIFTL_QQI(41,41,32, vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                        >> 0x16U)))));
    }
    if (vlSelf->reset) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ib_sync));
            vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__ib_sync 
                = (8U == (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr));
            vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x28U) | (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x14U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
        if (vlSelf->DJ__DOT__lpf_o_ce) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ib_sync) 
                   & (IData)(vlSelf->DJ__DOT__lpf_o_ce));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__ib_sync 
                = (8U == (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x32U) | (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x19U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                              >> 0x18U)))) 
                             + VL_EXTENDS_II(25,24, 
                                             (0xffffffU 
                                              & (IData)(
                                                        (vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                         >> 0x18U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, (0xffffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                             + VL_EXTENDS_II(25,24, 
                                             (0xffffffU 
                                              & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ib_a;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ib_b;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ib_a 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__imem
            [(0xfU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ib_b 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d64;
        vlSelf->DJ__DOT__left_ifft__DOT__w_d64 = ((0x20U 
                                                   & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr))
                                                   ? vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__pre_ovalue
                                                   : 
                                                  (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                    << 0x18U) 
                                                   | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__omem
            [vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0xffffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                    >> 0x18U)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0xffffffU & ((1U & (IData)((0x1ffffffULL 
                                           & (VL_SHIFTL_QQI(49,49,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                              >> 0x18U))))
                             ? ((1U & (IData)((0xffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                  >> 0x19U))))
                                 ? ((IData)(1U) + (IData)(
                                                          (0xffffffULL 
                                                           & (VL_SHIFTL_QQI(49,49,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                              >> 0x19U))))
                                 : (IData)((0xffffffULL 
                                            & (VL_SHIFTL_QQI(49,49,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                               >> 0x19U))))
                             : (IData)((0xffffffULL 
                                        & (VL_SHIFTL_QQI(49,49,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                           >> 0x19U)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__nxt_oaddr 
            = ((0x1eU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__nxt_oaddr)) 
               | (0x1eU & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__nxt_oaddr 
            = ((0xeU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__nxt_oaddr)) 
               | (0xeU & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr) 
                                          >> 1U)) << 1U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x13U)))) 
                           + VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x13U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           + VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ib_a;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ib_b;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ib_a 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__imem
            [(0xfU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ib_b 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d64;
        vlSelf->DJ__DOT__left_fft__DOT__w_d64 = ((0x20U 
                                                  & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr))
                                                  ? vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__pre_ovalue
                                                  : 
                                                 (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                   << 0x13U) 
                                                  | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__omem
            [vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x7ffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                   >> 0x13U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x7ffffU & ((1U & (IData)((0xfffffULL 
                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                             >> 0x13U))))
                            ? ((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x14U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0x7ffffULL 
                                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                             >> 0x14U))))
                                : (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x14U))))
                            : (IData)((0x7ffffULL & 
                                       (VL_SHIFTL_QQI(39,39,32, vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                        >> 0x14U)))));
    }
    if (vlSelf->reset) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ib_sync));
            vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__ib_sync 
                = (0x10U == (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr));
            vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x26U) | (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x13U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
        if (vlSelf->DJ__DOT__lpf_o_ce) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ib_sync) 
                   & (IData)(vlSelf->DJ__DOT__lpf_o_ce));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__ib_sync 
                = (0x10U == (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x30U) | (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x18U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0xffffffU & (VL_EXTENDS_II(24,23, (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x17U)))) 
                            + VL_EXTENDS_II(24,23, 
                                            (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x17U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0xffffffU & (VL_EXTENDS_II(24,23, (0x7fffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            + VL_EXTENDS_II(24,23, 
                                            (0x7fffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ib_a;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ib_b;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ib_a 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__imem
            [(0x1fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ib_b 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d128;
        vlSelf->DJ__DOT__left_ifft__DOT__w_d128 = (
                                                   (0x40U 
                                                    & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr))
                                                    ? vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__pre_ovalue
                                                    : 
                                                   (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                     << 0x17U) 
                                                    | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__omem
            [vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x7fffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x18U)))
                             ? ((1U & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                               >> 0x19U)))
                                 ? ((IData)(1U) + (IData)(
                                                          (vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                           >> 0x19U)))
                                 : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x19U)))
                             : (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                        >> 0x19U))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x7fffffU & ((1U & (IData)((0xffffffULL 
                                           & (VL_SHIFTL_QQI(49,49,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                              >> 0x19U))))
                             ? ((1U & (IData)((0x7fffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                  >> 0x1aU))))
                                 ? ((IData)(1U) + (IData)(
                                                          (0x7fffffULL 
                                                           & (VL_SHIFTL_QQI(49,49,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                              >> 0x1aU))))
                                 : (IData)((0x7fffffULL 
                                            & (VL_SHIFTL_QQI(49,49,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                               >> 0x1aU))))
                             : (IData)((0x7fffffULL 
                                        & (VL_SHIFTL_QQI(49,49,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                           >> 0x1aU)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__nxt_oaddr 
            = ((0x3eU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__nxt_oaddr)) 
               | (0x3eU & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__nxt_oaddr 
            = ((0x1eU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__nxt_oaddr)) 
               | (0x1eU & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x12U)))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x12U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ib_a;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ib_b;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ib_a 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__imem
            [(0x1fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ib_b 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d128;
        vlSelf->DJ__DOT__left_fft__DOT__w_d128 = ((0x40U 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr))
                                                   ? vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__pre_ovalue
                                                   : 
                                                  (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                    << 0x12U) 
                                                   | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__omem
            [vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x3ffffU & ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                          >> 0x13U)))
                            ? ((1U & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x14U)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                          >> 0x14U)))
                                : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x14U)))
                            : (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                       >> 0x14U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x3ffffU & ((1U & (IData)((0x7ffffULL 
                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                             >> 0x14U))))
                            ? ((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x15U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0x3ffffULL 
                                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                             >> 0x15U))))
                                : (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x15U))))
                            : (IData)((0x3ffffULL & 
                                       (VL_SHIFTL_QQI(39,39,32, vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                        >> 0x15U)))));
    }
    if (vlSelf->reset) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ib_sync));
            vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__ib_sync 
                = (0x20U == (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr));
            vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x26U) | (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x13U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
        if (vlSelf->DJ__DOT__lpf_o_ce) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ib_sync) 
                   & (IData)(vlSelf->DJ__DOT__lpf_o_ce));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__ib_sync 
                = (0x20U == (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x30U) | (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x18U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0xffffffU & (VL_EXTENDS_II(24,23, (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x17U)))) 
                            + VL_EXTENDS_II(24,23, 
                                            (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x17U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0xffffffU & (VL_EXTENDS_II(24,23, (0x7fffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            + VL_EXTENDS_II(24,23, 
                                            (0x7fffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ib_a;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ib_b;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ib_a 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__imem
            [(0x3fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ib_b 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d256;
        vlSelf->DJ__DOT__left_ifft__DOT__w_d256 = (
                                                   (0x80U 
                                                    & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr))
                                                    ? vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__pre_ovalue
                                                    : 
                                                   (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                     << 0x17U) 
                                                    | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__omem
            [vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x7fffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                    >> 0x17U)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x7fffffU & ((1U & (IData)((0xffffffULL 
                                           & (VL_SHIFTL_QQI(47,47,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                              >> 0x17U))))
                             ? ((1U & (IData)((0x7fffffULL 
                                               & (VL_SHIFTL_QQI(47,47,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                  >> 0x18U))))
                                 ? ((IData)(1U) + (IData)(
                                                          (0x7fffffULL 
                                                           & (VL_SHIFTL_QQI(47,47,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                              >> 0x18U))))
                                 : (IData)((0x7fffffULL 
                                            & (VL_SHIFTL_QQI(47,47,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                               >> 0x18U))))
                             : (IData)((0x7fffffULL 
                                        & (VL_SHIFTL_QQI(47,47,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                           >> 0x18U)))));
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__nxt_oaddr 
            = ((0x3eU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__nxt_oaddr)) 
               | (0x3eU & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x12U)))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x12U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ib_a;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ib_b;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ib_a 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__imem
            [(0x3fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ib_b 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d256;
        vlSelf->DJ__DOT__left_fft__DOT__w_d256 = ((0x80U 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr))
                                                   ? vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__pre_ovalue
                                                   : 
                                                  (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                    << 0x12U) 
                                                   | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__omem
            [vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x3ffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                   >> 0x12U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x3ffffU & ((1U & (IData)((0x7ffffULL 
                                          & (VL_SHIFTL_QQI(37,37,32, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                             >> 0x12U))))
                            ? ((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(37,37,32, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                 >> 0x13U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0x3ffffULL 
                                                          & (VL_SHIFTL_QQI(37,37,32, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                             >> 0x13U))))
                                : (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(37,37,32, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                              >> 0x13U))))
                            : (IData)((0x3ffffULL & 
                                       (VL_SHIFTL_QQI(37,37,32, vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                        >> 0x13U)))));
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__nxt_oaddr 
            = ((0x7eU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__nxt_oaddr)) 
               | (0x7eU & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
    }
    if (vlSelf->reset) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ib_sync));
            vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__ib_sync 
                = (0x40U == (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr));
            vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x24U) | (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x12U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
        if (vlSelf->DJ__DOT__lpf_o_ce) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ib_sync) 
                   & (IData)(vlSelf->DJ__DOT__lpf_o_ce));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__ib_sync 
                = (0x40U == (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x2eU) | (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x17U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x7fffffU & (VL_EXTENDS_II(23,22, (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x16U)))) 
                            + VL_EXTENDS_II(23,22, 
                                            (0x3fffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x16U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x7fffffU & (VL_EXTENDS_II(23,22, (0x3fffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            + VL_EXTENDS_II(23,22, 
                                            (0x3fffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ib_a;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ib_b;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ib_a 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__imem
            [(0x7fU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ib_b 
            = vlSelf->DJ__DOT__left_ifft__DOT__w_d512;
        vlSelf->DJ__DOT__left_ifft__DOT__w_d512 = (
                                                   (0x100U 
                                                    & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr))
                                                    ? vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__pre_ovalue
                                                    : 
                                                   (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                     << 0x16U) 
                                                    | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__omem
            [vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x3fffffU & (IData)((vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                    >> 0x16U)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x3fffffU & ((1U & (IData)((0x7fffffULL 
                                           & (VL_SHIFTL_QQI(45,45,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                              >> 0x16U))))
                             ? ((1U & (IData)((0x3fffffULL 
                                               & (VL_SHIFTL_QQI(45,45,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                  >> 0x17U))))
                                 ? ((IData)(1U) + (IData)(
                                                          (0x3fffffULL 
                                                           & (VL_SHIFTL_QQI(45,45,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                              >> 0x17U))))
                                 : (IData)((0x3fffffULL 
                                            & (VL_SHIFTL_QQI(45,45,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                               >> 0x17U))))
                             : (IData)((0x3fffffULL 
                                        & (VL_SHIFTL_QQI(45,45,32, vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                           >> 0x17U)))));
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__nxt_oaddr 
            = ((0x7eU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__nxt_oaddr)) 
               | (0x7eU & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x11U)))) 
                           + VL_EXTENDS_II(18,17, (0x1ffffU 
                                                   & (IData)(
                                                             (vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x11U))))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                                 & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           + VL_EXTENDS_II(18,17, (0x1ffffU 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ib_a;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ib_b;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ib_a 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__imem
            [(0x7fU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr))];
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ib_b 
            = vlSelf->DJ__DOT__left_fft__DOT__w_d512;
        vlSelf->DJ__DOT__left_fft__DOT__w_d512 = ((0x100U 
                                                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr))
                                                   ? vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__pre_ovalue
                                                   : 
                                                  (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                                    << 0x11U) 
                                                   | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__pre_ovalue 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__omem
            [vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__nxt_oaddr];
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x1ffffU & (IData)((vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                   >> 0x11U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x1ffffU & ((1U & (IData)((0x3ffffULL 
                                          & (VL_SHIFTL_QQI(35,35,32, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                             >> 0x11U))))
                            ? ((1U & (IData)((0x1ffffULL 
                                              & (VL_SHIFTL_QQI(35,35,32, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                 >> 0x12U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0x1ffffULL 
                                                          & (VL_SHIFTL_QQI(35,35,32, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                             >> 0x12U))))
                                : (IData)((0x1ffffULL 
                                           & (VL_SHIFTL_QQI(35,35,32, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                              >> 0x12U))))
                            : (IData)((0x1ffffULL & 
                                       (VL_SHIFTL_QQI(35,35,32, vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                        >> 0x12U)))));
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__nxt_oaddr 
            = ((0xfeU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr)));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__nxt_oaddr)) 
               | (0xfeU & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
    }
    if (vlSelf->reset) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ib_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ib_sync));
            vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__ib_sync 
                = (0x80U == (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr));
            vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x22U) | (((QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x11U) | (QData)((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
        if (vlSelf->DJ__DOT__lpf_o_ce) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ib_sync) 
                   & (IData)(vlSelf->DJ__DOT__lpf_o_ce));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__ib_sync 
                = (0x80U == (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr));
            vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv 
                = (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                    << 0x2cU) | (((QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                                  << 0x16U) | (QData)((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        }
    }
    if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x3fffffU & (VL_EXTENDS_II(22,21, (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x15U)))) 
                            + VL_EXTENDS_II(22,21, 
                                            (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x15U))))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x3fffffU & (VL_EXTENDS_II(22,21, (0x1fffffU 
                                                  & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            + VL_EXTENDS_II(22,21, 
                                            (0x1fffffU 
                                             & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ib_a;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ib_b;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ib_a 
            = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__imem
            [(0xffU & (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr))];
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ib_b 
            = vlSelf->DJ__DOT__lpf_o_sample;
    }
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__imem[0U] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v0;
        vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__imem[1U] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_4__DOT__imem__v1;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_4__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__imem[0U] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v0;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__imem[1U] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_4__DOT__imem__v1;
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_4__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__omem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_8__DOT__omem__v0;
    }
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__omem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_8__DOT__omem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__oaddr;
    vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__oaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__imem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_8__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_8__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__imem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_8__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_8__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__omem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_16__DOT__omem__v0;
    }
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__omem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_16__DOT__omem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__oaddr;
    vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__oaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__imem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_16__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_16__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__imem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_16__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_16__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__omem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_32__DOT__omem__v0;
    }
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__omem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_32__DOT__omem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__oaddr;
    vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__oaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__imem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_32__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_32__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__imem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_32__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_32__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__omem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_64__DOT__omem__v0;
    }
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__omem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_64__DOT__omem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__oaddr;
    vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__oaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__imem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_64__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_64__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__imem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_64__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_64__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__omem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_128__DOT__omem__v0;
    }
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__omem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_128__DOT__omem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__oaddr;
    vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__oaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__imem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_128__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_128__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__imem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_128__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_128__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__omem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_256__DOT__omem__v0;
    }
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__omem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_256__DOT__omem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__oaddr;
    vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__oaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__imem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_256__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_256__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__imem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_256__DOT__imem__v0;
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_256__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__omem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_512__DOT__omem__v0;
    }
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__omem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_512__DOT__omem__v0;
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__nxt_oaddr 
            = ((0xfeU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__nxt_oaddr)) 
               | (0xfeU & (((IData)(1U) + ((IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x1ffffU & (VL_EXTENDS_II(17,16, (vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                 >> 0x10U)) 
                           + VL_EXTENDS_II(17,16, (vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x10U))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x1ffffU & (VL_EXTENDS_II(17,16, (0xffffU 
                                                 & vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left)) 
                           + VL_EXTENDS_II(17,16, (0xffffU 
                                                   & vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right))));
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ib_b;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ib_a;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ib_b 
            = ((IData)(vlSelf->left_fifo_source_stream) 
               << 0x10U);
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ib_a 
            = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__imem
            [(0xffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr))];
    } else {
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr 
            = __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__oaddr;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr 
            = __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__oaddr;
    }
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__imem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__stage_512__DOT__imem__v0;
    }
    if (vlSelf->reset) {
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ib_sync = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                   & (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ib_sync));
            vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__ib_sync 
                = (0x100U == (IData)(vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr));
        }
        if (vlSelf->DJ__DOT__lpf_o_ce) {
            vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
                = vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
            vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
                = ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ib_sync) 
                   & (IData)(vlSelf->DJ__DOT__lpf_o_ce));
        }
    }
    vlSelf->DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr 
        = __Vdly__DJ__DOT__left_fft__DOT__stage_512__DOT__iaddr;
    if (__Vdlyvset__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__imem[__Vdlyvdim0__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0] 
            = __Vdlyvval__DJ__DOT__left_ifft__DOT__stage_512__DOT__imem__v0;
    }
    if (vlSelf->reset) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ib_sync = 0U;
    } else if (vlSelf->DJ__DOT__lpf_o_ce) {
        vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__ib_sync 
            = (0x100U == (IData)(vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr));
    }
    vlSelf->DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr 
        = __Vdly__DJ__DOT__left_ifft__DOT__stage_512__DOT__iaddr;
    if (vlSelf->DJ__DOT__fft_o_sync) {
        __Vdly__DJ__DOT__left_lpf__DOT__bin_idx = 1U;
        vlSelf->DJ__DOT__lpf_o_sample = vlSelf->DJ__DOT__fft_o_result;
    } else {
        __Vdly__DJ__DOT__left_lpf__DOT__bin_idx = (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->DJ__DOT__left_lpf__DOT__bin_idx)));
        vlSelf->DJ__DOT__lpf_o_sample = (((0xaU > (IData)(vlSelf->DJ__DOT__left_lpf__DOT__bin_idx)) 
                                          | (0x1f6U 
                                             < (IData)(vlSelf->DJ__DOT__left_lpf__DOT__bin_idx)))
                                          ? vlSelf->DJ__DOT__fft_o_result
                                          : 0ULL);
    }
    if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
        vlSelf->DJ__DOT__fft_o_result = vlSelf->DJ__DOT__left_fft__DOT__br_result;
    }
    vlSelf->DJ__DOT__lpf_o_ce = ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
                                 & ((IData)(vlSelf->DJ__DOT__fft_o_sync) 
                                    | (IData)(vlSelf->DJ__DOT__r_syncd)));
    if (vlSelf->reset) {
        vlSelf->DJ__DOT__fft_o_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__br_sync = 0U;
        vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__in_reset = 1U;
    } else {
        if ((1U & (~ (IData)(vlSelf->left_fifo_almost_empty)))) {
            vlSelf->DJ__DOT__fft_o_sync = vlSelf->DJ__DOT__left_fft__DOT__br_sync;
        }
        if (((IData)(vlSelf->DJ__DOT__left_fft__DOT____Vcellinp__revstage__i_ce) 
             & (~ (IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__in_reset)))) {
            vlSelf->DJ__DOT__left_fft__DOT__br_sync 
                = (0U == (0x1ffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr)));
        }
        if (((IData)(vlSelf->DJ__DOT__left_fft__DOT____Vcellinp__revstage__i_ce) 
             & (0x1ffU == (0x1ffU & (IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr))))) {
            vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__in_reset = 0U;
        }
    }
    vlSelf->DJ__DOT__left_lpf__DOT__bin_idx = __Vdly__DJ__DOT__left_lpf__DOT__bin_idx;
    vlSelf->DJ__DOT__r_syncd = __Vdly__DJ__DOT__r_syncd;
    vlSelf->DJ__DOT__left_ifft__DOT____Vcellinp__revstage__i_ce 
        = ((IData)(vlSelf->DJ__DOT__lpf_o_ce) & ((IData)(vlSelf->DJ__DOT__left_ifft__DOT__r_br_started) 
                                                 | (IData)(vlSelf->DJ__DOT__left_ifft__DOT__w_s2)));
    if (vlSelf->DJ__DOT__left_fft__DOT____Vcellinp__revstage__i_ce) {
        vlSelf->DJ__DOT__left_fft__DOT__br_result = 
            vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__brmem
            [((0x200U & ((~ ((IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                             >> 9U)) << 9U)) | ((0x100U 
                                                 & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                       << 6U)) 
                                                   | ((0x40U 
                                                       & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                          << 4U)) 
                                                      | ((0x20U 
                                                          & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                             << 2U)) 
                                                         | ((0x10U 
                                                             & (IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr)) 
                                                            | ((8U 
                                                                & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                                   >> 2U)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                                      >> 4U)) 
                                                                  | ((2U 
                                                                      & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                                         >> 6U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                                           >> 8U)))))))))))];
    }
    if (__Vdlyvset__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0) {
        vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__brmem[__Vdlyvdim0__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0] 
            = __Vdlyvval__DJ__DOT__left_fft__DOT__revstage__DOT__brmem__v0;
    }
    vlSelf->DJ__DOT__left_fft__DOT__revstage__DOT__wraddr 
        = __Vdly__DJ__DOT__left_fft__DOT__revstage__DOT__wraddr;
    vlSelf->DJ__DOT__left_fft__DOT____Vcellinp__revstage__i_ce 
        = ((~ (IData)(vlSelf->left_fifo_almost_empty)) 
           & ((IData)(vlSelf->DJ__DOT__left_fft__DOT__r_br_started) 
              | (IData)(vlSelf->DJ__DOT__left_fft__DOT__w_s2)));
}

void VDJ___024root___eval_triggers__act(VDJ___024root* vlSelf);

bool VDJ___024root___eval_phase__act(VDJ___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDJ__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDJ___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VDJ___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VDJ___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VDJ___024root___eval_phase__nba(VDJ___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDJ__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDJ___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VDJ___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDJ___024root___dump_triggers__ico(VDJ___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDJ___024root___dump_triggers__nba(VDJ___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDJ___024root___dump_triggers__act(VDJ___024root* vlSelf);
#endif  // VL_DEBUG

void VDJ___024root___eval(VDJ___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDJ__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDJ___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VDJ___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("DJ.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VDJ___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VDJ___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("DJ.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VDJ___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("DJ.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VDJ___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VDJ___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VDJ___024root___eval_debug_assertions(VDJ___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDJ__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDJ___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->write & 0xfeU))) {
        Verilated::overWidthError("write");}
    if (VL_UNLIKELY((vlSelf->read & 0xfeU))) {
        Verilated::overWidthError("read");}
    if (VL_UNLIKELY((vlSelf->stream_address & 0xfeU))) {
        Verilated::overWidthError("stream_address");}
    if (VL_UNLIKELY((vlSelf->left_fifo_source_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("left_fifo_source_valid");}
    if (VL_UNLIKELY((vlSelf->left_fifo_almost_full 
                     & 0xfeU))) {
        Verilated::overWidthError("left_fifo_almost_full");}
    if (VL_UNLIKELY((vlSelf->left_fifo_almost_empty 
                     & 0xfeU))) {
        Verilated::overWidthError("left_fifo_almost_empty");}
    if (VL_UNLIKELY((vlSelf->right_fifo_source_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("right_fifo_source_valid");}
    if (VL_UNLIKELY((vlSelf->right_fifo_almost_full 
                     & 0xfeU))) {
        Verilated::overWidthError("right_fifo_almost_full");}
    if (VL_UNLIKELY((vlSelf->right_fifo_almost_empty 
                     & 0xfeU))) {
        Verilated::overWidthError("right_fifo_almost_empty");}
}
#endif  // VL_DEBUG
