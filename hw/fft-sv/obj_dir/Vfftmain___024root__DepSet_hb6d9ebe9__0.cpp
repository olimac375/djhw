// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfftmain.h for the primary calling header

#include "Vfftmain__pch.h"
#include "Vfftmain___024root.h"

void Vfftmain___024root___ico_sequent__TOP__0(Vfftmain___024root* vlSelf);

void Vfftmain___024root___eval_ico(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vfftmain___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfftmain___024root___ico_sequent__TOP__0(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->fftmain__DOT____Vcellinp__revstage__i_ce 
        = ((IData)(vlSelf->i_ce) & ((IData)(vlSelf->fftmain__DOT__r_br_started) 
                                    | (IData)(vlSelf->fftmain__DOT__w_s2)));
}

void Vfftmain___024root___eval_triggers__ico(Vfftmain___024root* vlSelf);

bool Vfftmain___024root___eval_phase__ico(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vfftmain___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vfftmain___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vfftmain___024root___eval_act(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_act\n"); );
}

void Vfftmain___024root___nba_sequent__TOP__0(Vfftmain___024root* vlSelf);

void Vfftmain___024root___eval_nba(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfftmain___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 256> Vfftmain__ConstPool__TABLE_he91bf390_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vfftmain__ConstPool__TABLE_h667f051f_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vfftmain__ConstPool__TABLE_h82c2c6a0_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vfftmain__ConstPool__TABLE_h5e3c0e7d_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vfftmain__ConstPool__TABLE_h08c05a3b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vfftmain__ConstPool__TABLE_hf8383f48_0;

VL_INLINE_OPT void Vfftmain___024root___nba_sequent__TOP__0(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__r_br_started;
    __Vdly__fftmain__DOT__r_br_started = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_512__DOT__wait_for_sync;
    __Vdly__fftmain__DOT__stage_512__DOT__wait_for_sync = 0;
    SData/*8:0*/ __Vdly__fftmain__DOT__stage_512__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_512__DOT__iaddr = 0;
    CData/*7:0*/ __Vdlyvdim0__fftmain__DOT__stage_512__DOT__imem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_512__DOT__imem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__fftmain__DOT__stage_512__DOT__imem__v0;
    __Vdlyvval__fftmain__DOT__stage_512__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_512__DOT__imem__v0;
    __Vdlyvset__fftmain__DOT__stage_512__DOT__imem__v0 = 0;
    SData/*8:0*/ __Vdly__fftmain__DOT__stage_512__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_512__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_512__DOT__b_started;
    __Vdly__fftmain__DOT__stage_512__DOT__b_started = 0;
    CData/*7:0*/ __Vdlyvdim0__fftmain__DOT__stage_512__DOT__omem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_512__DOT__omem__v0 = 0;
    QData/*33:0*/ __Vdlyvval__fftmain__DOT__stage_512__DOT__omem__v0;
    __Vdlyvval__fftmain__DOT__stage_512__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_512__DOT__omem__v0;
    __Vdlyvset__fftmain__DOT__stage_512__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_256__DOT__wait_for_sync;
    __Vdly__fftmain__DOT__stage_256__DOT__wait_for_sync = 0;
    CData/*7:0*/ __Vdly__fftmain__DOT__stage_256__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_256__DOT__iaddr = 0;
    CData/*6:0*/ __Vdlyvdim0__fftmain__DOT__stage_256__DOT__imem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_256__DOT__imem__v0 = 0;
    QData/*33:0*/ __Vdlyvval__fftmain__DOT__stage_256__DOT__imem__v0;
    __Vdlyvval__fftmain__DOT__stage_256__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_256__DOT__imem__v0;
    __Vdlyvset__fftmain__DOT__stage_256__DOT__imem__v0 = 0;
    CData/*7:0*/ __Vdly__fftmain__DOT__stage_256__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_256__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_256__DOT__b_started;
    __Vdly__fftmain__DOT__stage_256__DOT__b_started = 0;
    CData/*6:0*/ __Vdlyvdim0__fftmain__DOT__stage_256__DOT__omem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_256__DOT__omem__v0 = 0;
    QData/*35:0*/ __Vdlyvval__fftmain__DOT__stage_256__DOT__omem__v0;
    __Vdlyvval__fftmain__DOT__stage_256__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_256__DOT__omem__v0;
    __Vdlyvset__fftmain__DOT__stage_256__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_128__DOT__wait_for_sync;
    __Vdly__fftmain__DOT__stage_128__DOT__wait_for_sync = 0;
    CData/*6:0*/ __Vdly__fftmain__DOT__stage_128__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_128__DOT__iaddr = 0;
    CData/*5:0*/ __Vdlyvdim0__fftmain__DOT__stage_128__DOT__imem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_128__DOT__imem__v0 = 0;
    QData/*35:0*/ __Vdlyvval__fftmain__DOT__stage_128__DOT__imem__v0;
    __Vdlyvval__fftmain__DOT__stage_128__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_128__DOT__imem__v0;
    __Vdlyvset__fftmain__DOT__stage_128__DOT__imem__v0 = 0;
    CData/*6:0*/ __Vdly__fftmain__DOT__stage_128__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_128__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_128__DOT__b_started;
    __Vdly__fftmain__DOT__stage_128__DOT__b_started = 0;
    CData/*5:0*/ __Vdlyvdim0__fftmain__DOT__stage_128__DOT__omem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_128__DOT__omem__v0 = 0;
    QData/*35:0*/ __Vdlyvval__fftmain__DOT__stage_128__DOT__omem__v0;
    __Vdlyvval__fftmain__DOT__stage_128__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_128__DOT__omem__v0;
    __Vdlyvset__fftmain__DOT__stage_128__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_64__DOT__wait_for_sync;
    __Vdly__fftmain__DOT__stage_64__DOT__wait_for_sync = 0;
    CData/*5:0*/ __Vdly__fftmain__DOT__stage_64__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_64__DOT__iaddr = 0;
    CData/*4:0*/ __Vdlyvdim0__fftmain__DOT__stage_64__DOT__imem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_64__DOT__imem__v0 = 0;
    QData/*35:0*/ __Vdlyvval__fftmain__DOT__stage_64__DOT__imem__v0;
    __Vdlyvval__fftmain__DOT__stage_64__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_64__DOT__imem__v0;
    __Vdlyvset__fftmain__DOT__stage_64__DOT__imem__v0 = 0;
    CData/*5:0*/ __Vdly__fftmain__DOT__stage_64__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_64__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_64__DOT__b_started;
    __Vdly__fftmain__DOT__stage_64__DOT__b_started = 0;
    CData/*4:0*/ __Vdlyvdim0__fftmain__DOT__stage_64__DOT__omem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_64__DOT__omem__v0 = 0;
    QData/*37:0*/ __Vdlyvval__fftmain__DOT__stage_64__DOT__omem__v0;
    __Vdlyvval__fftmain__DOT__stage_64__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_64__DOT__omem__v0;
    __Vdlyvset__fftmain__DOT__stage_64__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_32__DOT__wait_for_sync;
    __Vdly__fftmain__DOT__stage_32__DOT__wait_for_sync = 0;
    CData/*4:0*/ __Vdly__fftmain__DOT__stage_32__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_32__DOT__iaddr = 0;
    CData/*3:0*/ __Vdlyvdim0__fftmain__DOT__stage_32__DOT__imem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_32__DOT__imem__v0 = 0;
    QData/*37:0*/ __Vdlyvval__fftmain__DOT__stage_32__DOT__imem__v0;
    __Vdlyvval__fftmain__DOT__stage_32__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_32__DOT__imem__v0;
    __Vdlyvset__fftmain__DOT__stage_32__DOT__imem__v0 = 0;
    CData/*4:0*/ __Vdly__fftmain__DOT__stage_32__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_32__DOT__oaddr = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_32__DOT__b_started;
    __Vdly__fftmain__DOT__stage_32__DOT__b_started = 0;
    CData/*3:0*/ __Vdlyvdim0__fftmain__DOT__stage_32__DOT__omem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_32__DOT__omem__v0 = 0;
    QData/*37:0*/ __Vdlyvval__fftmain__DOT__stage_32__DOT__omem__v0;
    __Vdlyvval__fftmain__DOT__stage_32__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_32__DOT__omem__v0;
    __Vdlyvset__fftmain__DOT__stage_32__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_16__DOT__wait_for_sync;
    __Vdly__fftmain__DOT__stage_16__DOT__wait_for_sync = 0;
    CData/*3:0*/ __Vdly__fftmain__DOT__stage_16__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_16__DOT__iaddr = 0;
    CData/*2:0*/ __Vdlyvdim0__fftmain__DOT__stage_16__DOT__imem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_16__DOT__imem__v0 = 0;
    QData/*37:0*/ __Vdlyvval__fftmain__DOT__stage_16__DOT__imem__v0;
    __Vdlyvval__fftmain__DOT__stage_16__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_16__DOT__imem__v0;
    __Vdlyvset__fftmain__DOT__stage_16__DOT__imem__v0 = 0;
    CData/*3:0*/ __Vdly__fftmain__DOT__stage_16__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_16__DOT__oaddr = 0;
    CData/*2:0*/ __Vdlyvdim0__fftmain__DOT__stage_16__DOT__omem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_16__DOT__omem__v0 = 0;
    QData/*39:0*/ __Vdlyvval__fftmain__DOT__stage_16__DOT__omem__v0;
    __Vdlyvval__fftmain__DOT__stage_16__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_16__DOT__omem__v0;
    __Vdlyvset__fftmain__DOT__stage_16__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_8__DOT__wait_for_sync;
    __Vdly__fftmain__DOT__stage_8__DOT__wait_for_sync = 0;
    CData/*2:0*/ __Vdly__fftmain__DOT__stage_8__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_8__DOT__iaddr = 0;
    CData/*1:0*/ __Vdlyvdim0__fftmain__DOT__stage_8__DOT__imem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_8__DOT__imem__v0 = 0;
    QData/*39:0*/ __Vdlyvval__fftmain__DOT__stage_8__DOT__imem__v0;
    __Vdlyvval__fftmain__DOT__stage_8__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_8__DOT__imem__v0;
    __Vdlyvset__fftmain__DOT__stage_8__DOT__imem__v0 = 0;
    CData/*2:0*/ __Vdly__fftmain__DOT__stage_8__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_8__DOT__oaddr = 0;
    CData/*1:0*/ __Vdlyvdim0__fftmain__DOT__stage_8__DOT__omem__v0;
    __Vdlyvdim0__fftmain__DOT__stage_8__DOT__omem__v0 = 0;
    QData/*39:0*/ __Vdlyvval__fftmain__DOT__stage_8__DOT__omem__v0;
    __Vdlyvval__fftmain__DOT__stage_8__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_8__DOT__omem__v0;
    __Vdlyvset__fftmain__DOT__stage_8__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_4__DOT__wait_for_sync;
    __Vdly__fftmain__DOT__stage_4__DOT__wait_for_sync = 0;
    SData/*8:0*/ __Vdly__fftmain__DOT__stage_4__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_4__DOT__iaddr = 0;
    QData/*39:0*/ __Vdlyvval__fftmain__DOT__stage_4__DOT__imem__v0;
    __Vdlyvval__fftmain__DOT__stage_4__DOT__imem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_4__DOT__imem__v0;
    __Vdlyvset__fftmain__DOT__stage_4__DOT__imem__v0 = 0;
    QData/*39:0*/ __Vdlyvval__fftmain__DOT__stage_4__DOT__imem__v1;
    __Vdlyvval__fftmain__DOT__stage_4__DOT__imem__v1 = 0;
    CData/*2:0*/ __Vdly__fftmain__DOT__stage_4__DOT__pipeline;
    __Vdly__fftmain__DOT__stage_4__DOT__pipeline = 0;
    QData/*41:0*/ __Vdlyvval__fftmain__DOT__stage_4__DOT__omem__v0;
    __Vdlyvval__fftmain__DOT__stage_4__DOT__omem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__stage_4__DOT__omem__v0;
    __Vdlyvset__fftmain__DOT__stage_4__DOT__omem__v0 = 0;
    QData/*41:0*/ __Vdlyvval__fftmain__DOT__stage_4__DOT__omem__v1;
    __Vdlyvval__fftmain__DOT__stage_4__DOT__omem__v1 = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_2__DOT__wait_for_sync;
    __Vdly__fftmain__DOT__stage_2__DOT__wait_for_sync = 0;
    CData/*0:0*/ __Vdly__fftmain__DOT__stage_2__DOT__stage;
    __Vdly__fftmain__DOT__stage_2__DOT__stage = 0;
    CData/*1:0*/ __Vdly__fftmain__DOT__stage_2__DOT__sync_pipe;
    __Vdly__fftmain__DOT__stage_2__DOT__sync_pipe = 0;
    IData/*21:0*/ __Vdly__fftmain__DOT__stage_2__DOT__sto_r;
    __Vdly__fftmain__DOT__stage_2__DOT__sto_r = 0;
    IData/*21:0*/ __Vdly__fftmain__DOT__stage_2__DOT__sto_i;
    __Vdly__fftmain__DOT__stage_2__DOT__sto_i = 0;
    SData/*9:0*/ __Vdly__fftmain__DOT__revstage__DOT__wraddr;
    __Vdly__fftmain__DOT__revstage__DOT__wraddr = 0;
    SData/*9:0*/ __Vdlyvdim0__fftmain__DOT__revstage__DOT__brmem__v0;
    __Vdlyvdim0__fftmain__DOT__revstage__DOT__brmem__v0 = 0;
    QData/*41:0*/ __Vdlyvval__fftmain__DOT__revstage__DOT__brmem__v0;
    __Vdlyvval__fftmain__DOT__revstage__DOT__brmem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__fftmain__DOT__revstage__DOT__brmem__v0;
    __Vdlyvset__fftmain__DOT__revstage__DOT__brmem__v0 = 0;
    // Body
    __Vdlyvset__fftmain__DOT__stage_512__DOT__imem__v0 = 0U;
    __Vdly__fftmain__DOT__stage_512__DOT__iaddr = vlSelf->fftmain__DOT__stage_512__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_512__DOT__wait_for_sync 
        = vlSelf->fftmain__DOT__stage_512__DOT__wait_for_sync;
    __Vdly__fftmain__DOT__stage_4__DOT__pipeline = vlSelf->fftmain__DOT__stage_4__DOT__pipeline;
    __Vdly__fftmain__DOT__stage_2__DOT__sync_pipe = vlSelf->fftmain__DOT__stage_2__DOT__sync_pipe;
    __Vdly__fftmain__DOT__r_br_started = vlSelf->fftmain__DOT__r_br_started;
    __Vdly__fftmain__DOT__stage_2__DOT__stage = vlSelf->fftmain__DOT__stage_2__DOT__stage;
    __Vdly__fftmain__DOT__stage_2__DOT__wait_for_sync 
        = vlSelf->fftmain__DOT__stage_2__DOT__wait_for_sync;
    __Vdly__fftmain__DOT__stage_512__DOT__b_started 
        = vlSelf->fftmain__DOT__stage_512__DOT__b_started;
    __Vdly__fftmain__DOT__stage_512__DOT__oaddr = vlSelf->fftmain__DOT__stage_512__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_256__DOT__iaddr = vlSelf->fftmain__DOT__stage_256__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_256__DOT__wait_for_sync 
        = vlSelf->fftmain__DOT__stage_256__DOT__wait_for_sync;
    __Vdlyvset__fftmain__DOT__stage_512__DOT__omem__v0 = 0U;
    __Vdlyvset__fftmain__DOT__stage_256__DOT__imem__v0 = 0U;
    __Vdly__fftmain__DOT__stage_256__DOT__b_started 
        = vlSelf->fftmain__DOT__stage_256__DOT__b_started;
    __Vdly__fftmain__DOT__stage_256__DOT__oaddr = vlSelf->fftmain__DOT__stage_256__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_128__DOT__iaddr = vlSelf->fftmain__DOT__stage_128__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_128__DOT__wait_for_sync 
        = vlSelf->fftmain__DOT__stage_128__DOT__wait_for_sync;
    __Vdlyvset__fftmain__DOT__stage_256__DOT__omem__v0 = 0U;
    __Vdlyvset__fftmain__DOT__stage_128__DOT__imem__v0 = 0U;
    __Vdly__fftmain__DOT__stage_128__DOT__b_started 
        = vlSelf->fftmain__DOT__stage_128__DOT__b_started;
    __Vdly__fftmain__DOT__stage_128__DOT__oaddr = vlSelf->fftmain__DOT__stage_128__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_64__DOT__iaddr = vlSelf->fftmain__DOT__stage_64__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_64__DOT__wait_for_sync 
        = vlSelf->fftmain__DOT__stage_64__DOT__wait_for_sync;
    __Vdlyvset__fftmain__DOT__stage_128__DOT__omem__v0 = 0U;
    __Vdlyvset__fftmain__DOT__stage_64__DOT__imem__v0 = 0U;
    __Vdly__fftmain__DOT__stage_64__DOT__b_started 
        = vlSelf->fftmain__DOT__stage_64__DOT__b_started;
    __Vdly__fftmain__DOT__stage_64__DOT__oaddr = vlSelf->fftmain__DOT__stage_64__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_32__DOT__iaddr = vlSelf->fftmain__DOT__stage_32__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_32__DOT__wait_for_sync 
        = vlSelf->fftmain__DOT__stage_32__DOT__wait_for_sync;
    __Vdlyvset__fftmain__DOT__stage_64__DOT__omem__v0 = 0U;
    __Vdlyvset__fftmain__DOT__stage_32__DOT__imem__v0 = 0U;
    __Vdly__fftmain__DOT__stage_32__DOT__b_started 
        = vlSelf->fftmain__DOT__stage_32__DOT__b_started;
    __Vdly__fftmain__DOT__stage_32__DOT__oaddr = vlSelf->fftmain__DOT__stage_32__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_16__DOT__iaddr = vlSelf->fftmain__DOT__stage_16__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_16__DOT__wait_for_sync 
        = vlSelf->fftmain__DOT__stage_16__DOT__wait_for_sync;
    __Vdlyvset__fftmain__DOT__stage_32__DOT__omem__v0 = 0U;
    __Vdlyvset__fftmain__DOT__stage_16__DOT__imem__v0 = 0U;
    __Vdly__fftmain__DOT__stage_16__DOT__oaddr = vlSelf->fftmain__DOT__stage_16__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_8__DOT__iaddr = vlSelf->fftmain__DOT__stage_8__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_8__DOT__wait_for_sync 
        = vlSelf->fftmain__DOT__stage_8__DOT__wait_for_sync;
    __Vdlyvset__fftmain__DOT__stage_16__DOT__omem__v0 = 0U;
    __Vdlyvset__fftmain__DOT__stage_8__DOT__imem__v0 = 0U;
    __Vdly__fftmain__DOT__stage_8__DOT__oaddr = vlSelf->fftmain__DOT__stage_8__DOT__oaddr;
    __Vdly__fftmain__DOT__stage_4__DOT__iaddr = vlSelf->fftmain__DOT__stage_4__DOT__iaddr;
    __Vdly__fftmain__DOT__stage_4__DOT__wait_for_sync 
        = vlSelf->fftmain__DOT__stage_4__DOT__wait_for_sync;
    __Vdlyvset__fftmain__DOT__stage_8__DOT__omem__v0 = 0U;
    __Vdlyvset__fftmain__DOT__stage_4__DOT__imem__v0 = 0U;
    __Vdlyvset__fftmain__DOT__stage_4__DOT__omem__v0 = 0U;
    __Vdly__fftmain__DOT__stage_2__DOT__sto_i = vlSelf->fftmain__DOT__stage_2__DOT__sto_i;
    __Vdly__fftmain__DOT__stage_2__DOT__sto_r = vlSelf->fftmain__DOT__stage_2__DOT__sto_r;
    __Vdly__fftmain__DOT__revstage__DOT__wraddr = vlSelf->fftmain__DOT__revstage__DOT__wraddr;
    __Vdlyvset__fftmain__DOT__revstage__DOT__brmem__v0 = 0U;
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_512__DOT__iaddr) 
                                     >> 8U)))) {
        __Vdlyvval__fftmain__DOT__stage_512__DOT__imem__v0 
            = vlSelf->i_sample;
        __Vdlyvset__fftmain__DOT__stage_512__DOT__imem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_512__DOT__imem__v0 
            = (0xffU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__iaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_512__DOT__oaddr) 
                                     >> 8U)))) {
        __Vdlyvval__fftmain__DOT__stage_512__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x11U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__fftmain__DOT__stage_512__DOT__omem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_512__DOT__omem__v0 
            = (0xffU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__oaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_256__DOT__iaddr) 
                                     >> 7U)))) {
        __Vdlyvval__fftmain__DOT__stage_256__DOT__imem__v0 
            = vlSelf->fftmain__DOT__w_d512;
        __Vdlyvset__fftmain__DOT__stage_256__DOT__imem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_256__DOT__imem__v0 
            = (0x7fU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__iaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_256__DOT__oaddr) 
                                     >> 7U)))) {
        __Vdlyvval__fftmain__DOT__stage_256__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x12U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__fftmain__DOT__stage_256__DOT__omem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_256__DOT__omem__v0 
            = (0x7fU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__oaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_128__DOT__iaddr) 
                                     >> 6U)))) {
        __Vdlyvval__fftmain__DOT__stage_128__DOT__imem__v0 
            = vlSelf->fftmain__DOT__w_d256;
        __Vdlyvset__fftmain__DOT__stage_128__DOT__imem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_128__DOT__imem__v0 
            = (0x3fU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__iaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_128__DOT__oaddr) 
                                     >> 6U)))) {
        __Vdlyvval__fftmain__DOT__stage_128__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x12U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__fftmain__DOT__stage_128__DOT__omem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_128__DOT__omem__v0 
            = (0x3fU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__oaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_64__DOT__iaddr) 
                                     >> 5U)))) {
        __Vdlyvval__fftmain__DOT__stage_64__DOT__imem__v0 
            = vlSelf->fftmain__DOT__w_d128;
        __Vdlyvset__fftmain__DOT__stage_64__DOT__imem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_64__DOT__imem__v0 
            = (0x1fU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__iaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_64__DOT__oaddr) 
                                     >> 5U)))) {
        __Vdlyvval__fftmain__DOT__stage_64__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__fftmain__DOT__stage_64__DOT__omem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_64__DOT__omem__v0 
            = (0x1fU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__oaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_32__DOT__iaddr) 
                                     >> 4U)))) {
        __Vdlyvval__fftmain__DOT__stage_32__DOT__imem__v0 
            = vlSelf->fftmain__DOT__w_d64;
        __Vdlyvset__fftmain__DOT__stage_32__DOT__imem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_32__DOT__imem__v0 
            = (0xfU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__iaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_32__DOT__oaddr) 
                                     >> 4U)))) {
        __Vdlyvval__fftmain__DOT__stage_32__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__fftmain__DOT__stage_32__DOT__omem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_32__DOT__omem__v0 
            = (0xfU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__oaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_16__DOT__iaddr) 
                                     >> 3U)))) {
        __Vdlyvval__fftmain__DOT__stage_16__DOT__imem__v0 
            = vlSelf->fftmain__DOT__w_d32;
        __Vdlyvset__fftmain__DOT__stage_16__DOT__imem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_16__DOT__imem__v0 
            = (7U & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__iaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_16__DOT__oaddr) 
                                     >> 3U)))) {
        __Vdlyvval__fftmain__DOT__stage_16__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__fftmain__DOT__stage_16__DOT__omem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_16__DOT__omem__v0 
            = (7U & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__oaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_8__DOT__iaddr) 
                                     >> 2U)))) {
        __Vdlyvval__fftmain__DOT__stage_8__DOT__imem__v0 
            = vlSelf->fftmain__DOT__w_d16;
        __Vdlyvset__fftmain__DOT__stage_8__DOT__imem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_8__DOT__imem__v0 
            = (3U & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__iaddr));
    }
    if (((IData)(vlSelf->i_ce) & (~ ((IData)(vlSelf->fftmain__DOT__stage_8__DOT__oaddr) 
                                     >> 2U)))) {
        __Vdlyvval__fftmain__DOT__stage_8__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)));
        __Vdlyvset__fftmain__DOT__stage_8__DOT__omem__v0 = 1U;
        __Vdlyvdim0__fftmain__DOT__stage_8__DOT__omem__v0 
            = (3U & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__oaddr));
    }
    if (vlSelf->i_reset) {
        __Vdly__fftmain__DOT__stage_512__DOT__wait_for_sync = 1U;
        __Vdly__fftmain__DOT__stage_512__DOT__iaddr = 0U;
        vlSelf->fftmain__DOT__stage_512__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_512__DOT__wait_for_sync;
        __Vdly__fftmain__DOT__stage_4__DOT__pipeline = 0U;
        __Vdly__fftmain__DOT__stage_2__DOT__sync_pipe = 0U;
        __Vdly__fftmain__DOT__r_br_started = 0U;
        vlSelf->fftmain__DOT__r_br_started = __Vdly__fftmain__DOT__r_br_started;
        __Vdly__fftmain__DOT__stage_2__DOT__wait_for_sync = 1U;
        __Vdly__fftmain__DOT__stage_2__DOT__stage = 0U;
        vlSelf->fftmain__DOT__stage_2__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_2__DOT__wait_for_sync;
        __Vdly__fftmain__DOT__stage_256__DOT__wait_for_sync = 1U;
        __Vdly__fftmain__DOT__stage_256__DOT__iaddr = 0U;
        vlSelf->fftmain__DOT__stage_256__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_256__DOT__wait_for_sync;
        __Vdly__fftmain__DOT__stage_128__DOT__wait_for_sync = 1U;
        __Vdly__fftmain__DOT__stage_128__DOT__iaddr = 0U;
        vlSelf->fftmain__DOT__stage_128__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_128__DOT__wait_for_sync;
        __Vdly__fftmain__DOT__stage_64__DOT__wait_for_sync = 1U;
        __Vdly__fftmain__DOT__stage_64__DOT__iaddr = 0U;
        vlSelf->fftmain__DOT__stage_64__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_64__DOT__wait_for_sync;
        __Vdly__fftmain__DOT__stage_32__DOT__wait_for_sync = 1U;
        __Vdly__fftmain__DOT__stage_32__DOT__iaddr = 0U;
        vlSelf->fftmain__DOT__stage_32__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_32__DOT__wait_for_sync;
        __Vdly__fftmain__DOT__stage_16__DOT__wait_for_sync = 1U;
        __Vdly__fftmain__DOT__stage_16__DOT__iaddr = 0U;
        vlSelf->fftmain__DOT__stage_16__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_16__DOT__wait_for_sync;
        __Vdly__fftmain__DOT__stage_8__DOT__wait_for_sync = 1U;
        __Vdly__fftmain__DOT__stage_8__DOT__iaddr = 0U;
        vlSelf->fftmain__DOT__stage_8__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_8__DOT__wait_for_sync;
        __Vdly__fftmain__DOT__stage_4__DOT__wait_for_sync = 1U;
        __Vdly__fftmain__DOT__stage_4__DOT__iaddr = 0U;
    } else {
        if (((IData)(vlSelf->i_ce) & ((~ (IData)(vlSelf->fftmain__DOT__stage_512__DOT__wait_for_sync)) 
                                      | (~ (IData)(vlSelf->i_reset))))) {
            __Vdly__fftmain__DOT__stage_512__DOT__iaddr 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_512__DOT__iaddr)));
            __Vdly__fftmain__DOT__stage_512__DOT__wait_for_sync = 0U;
        }
        vlSelf->fftmain__DOT__stage_512__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_512__DOT__wait_for_sync;
        if (vlSelf->i_ce) {
            __Vdly__fftmain__DOT__stage_4__DOT__pipeline 
                = ((6U & ((IData)(vlSelf->fftmain__DOT__stage_4__DOT__pipeline) 
                          << 1U)) | (1U & ((IData)(vlSelf->fftmain__DOT__stage_4__DOT__iaddr) 
                                           >> 1U)));
            __Vdly__fftmain__DOT__stage_2__DOT__sync_pipe 
                = ((2U & ((IData)(vlSelf->fftmain__DOT__stage_2__DOT__sync_pipe) 
                          << 1U)) | (IData)(vlSelf->fftmain__DOT__w_s4));
            __Vdly__fftmain__DOT__r_br_started = ((IData)(vlSelf->fftmain__DOT__r_br_started) 
                                                  | (IData)(vlSelf->fftmain__DOT__w_s2));
        }
        vlSelf->fftmain__DOT__r_br_started = __Vdly__fftmain__DOT__r_br_started;
        if ((((IData)(vlSelf->i_ce) & ((~ (IData)(vlSelf->fftmain__DOT__stage_2__DOT__wait_for_sync)) 
                                       | (IData)(vlSelf->fftmain__DOT__w_s4))) 
             & (~ (IData)(vlSelf->fftmain__DOT__stage_2__DOT__stage)))) {
            __Vdly__fftmain__DOT__stage_2__DOT__wait_for_sync = 0U;
            __Vdly__fftmain__DOT__stage_2__DOT__stage = 1U;
        } else if (vlSelf->i_ce) {
            __Vdly__fftmain__DOT__stage_2__DOT__stage = 0U;
        }
        vlSelf->fftmain__DOT__stage_2__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_2__DOT__wait_for_sync;
        if (((IData)(vlSelf->i_ce) & ((~ (IData)(vlSelf->fftmain__DOT__stage_256__DOT__wait_for_sync)) 
                                      | (IData)(vlSelf->fftmain__DOT__w_s512)))) {
            __Vdly__fftmain__DOT__stage_256__DOT__iaddr 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_256__DOT__iaddr)));
            __Vdly__fftmain__DOT__stage_256__DOT__wait_for_sync = 0U;
        }
        vlSelf->fftmain__DOT__stage_256__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_256__DOT__wait_for_sync;
        if (((IData)(vlSelf->i_ce) & ((~ (IData)(vlSelf->fftmain__DOT__stage_128__DOT__wait_for_sync)) 
                                      | (IData)(vlSelf->fftmain__DOT__w_s256)))) {
            __Vdly__fftmain__DOT__stage_128__DOT__iaddr 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_128__DOT__iaddr)));
            __Vdly__fftmain__DOT__stage_128__DOT__wait_for_sync = 0U;
        }
        vlSelf->fftmain__DOT__stage_128__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_128__DOT__wait_for_sync;
        if (((IData)(vlSelf->i_ce) & ((~ (IData)(vlSelf->fftmain__DOT__stage_64__DOT__wait_for_sync)) 
                                      | (IData)(vlSelf->fftmain__DOT__w_s128)))) {
            __Vdly__fftmain__DOT__stage_64__DOT__iaddr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_64__DOT__iaddr)));
            __Vdly__fftmain__DOT__stage_64__DOT__wait_for_sync = 0U;
        }
        vlSelf->fftmain__DOT__stage_64__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_64__DOT__wait_for_sync;
        if (((IData)(vlSelf->i_ce) & ((~ (IData)(vlSelf->fftmain__DOT__stage_32__DOT__wait_for_sync)) 
                                      | (IData)(vlSelf->fftmain__DOT__w_s64)))) {
            __Vdly__fftmain__DOT__stage_32__DOT__iaddr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_32__DOT__iaddr)));
            __Vdly__fftmain__DOT__stage_32__DOT__wait_for_sync = 0U;
        }
        vlSelf->fftmain__DOT__stage_32__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_32__DOT__wait_for_sync;
        if (((IData)(vlSelf->i_ce) & ((~ (IData)(vlSelf->fftmain__DOT__stage_16__DOT__wait_for_sync)) 
                                      | (IData)(vlSelf->fftmain__DOT__w_s32)))) {
            __Vdly__fftmain__DOT__stage_16__DOT__iaddr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_16__DOT__iaddr)));
            __Vdly__fftmain__DOT__stage_16__DOT__wait_for_sync = 0U;
        }
        vlSelf->fftmain__DOT__stage_16__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_16__DOT__wait_for_sync;
        if (((IData)(vlSelf->i_ce) & ((~ (IData)(vlSelf->fftmain__DOT__stage_8__DOT__wait_for_sync)) 
                                      | (IData)(vlSelf->fftmain__DOT__w_s16)))) {
            __Vdly__fftmain__DOT__stage_8__DOT__iaddr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_8__DOT__iaddr)));
            __Vdly__fftmain__DOT__stage_8__DOT__wait_for_sync = 0U;
        }
        vlSelf->fftmain__DOT__stage_8__DOT__wait_for_sync 
            = __Vdly__fftmain__DOT__stage_8__DOT__wait_for_sync;
        if (((IData)(vlSelf->i_ce) & ((~ (IData)(vlSelf->fftmain__DOT__stage_4__DOT__wait_for_sync)) 
                                      | (IData)(vlSelf->fftmain__DOT__w_s8)))) {
            __Vdly__fftmain__DOT__stage_4__DOT__iaddr 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_4__DOT__iaddr)));
            __Vdly__fftmain__DOT__stage_4__DOT__wait_for_sync = 0U;
        }
    }
    vlSelf->fftmain__DOT__stage_4__DOT__wait_for_sync 
        = __Vdly__fftmain__DOT__stage_4__DOT__wait_for_sync;
    __Vtableidx1 = (((IData)(vlSelf->fftmain__DOT__stage_16__DOT__b_started) 
                     << 7U) | (((IData)(vlSelf->fftmain__DOT__stage_16__DOT__ob_sync) 
                                << 6U) | (((IData)(vlSelf->fftmain__DOT__stage_16__DOT__oaddr) 
                                           << 2U) | 
                                          (((IData)(vlSelf->i_ce) 
                                            << 1U) 
                                           | (IData)(vlSelf->i_reset)))));
    if ((1U & Vfftmain__ConstPool__TABLE_he91bf390_0
         [__Vtableidx1])) {
        __Vdly__fftmain__DOT__stage_16__DOT__oaddr 
            = Vfftmain__ConstPool__TABLE_h667f051f_0
            [__Vtableidx1];
    }
    if ((2U & Vfftmain__ConstPool__TABLE_he91bf390_0
         [__Vtableidx1])) {
        vlSelf->fftmain__DOT__w_s16 = Vfftmain__ConstPool__TABLE_h82c2c6a0_0
            [__Vtableidx1];
    }
    if ((4U & Vfftmain__ConstPool__TABLE_he91bf390_0
         [__Vtableidx1])) {
        vlSelf->fftmain__DOT__stage_16__DOT__b_started 
            = Vfftmain__ConstPool__TABLE_h82c2c6a0_0
            [__Vtableidx1];
    }
    __Vtableidx2 = (((IData)(vlSelf->fftmain__DOT__stage_8__DOT__b_started) 
                     << 6U) | (((IData)(vlSelf->fftmain__DOT__stage_8__DOT__ob_sync) 
                                << 5U) | (((IData)(vlSelf->fftmain__DOT__stage_8__DOT__oaddr) 
                                           << 2U) | 
                                          (((IData)(vlSelf->i_ce) 
                                            << 1U) 
                                           | (IData)(vlSelf->i_reset)))));
    if ((1U & Vfftmain__ConstPool__TABLE_h5e3c0e7d_0
         [__Vtableidx2])) {
        __Vdly__fftmain__DOT__stage_8__DOT__oaddr = 
            Vfftmain__ConstPool__TABLE_h08c05a3b_0[__Vtableidx2];
    }
    if ((2U & Vfftmain__ConstPool__TABLE_h5e3c0e7d_0
         [__Vtableidx2])) {
        vlSelf->fftmain__DOT__w_s8 = Vfftmain__ConstPool__TABLE_hf8383f48_0
            [__Vtableidx2];
    }
    if ((4U & Vfftmain__ConstPool__TABLE_h5e3c0e7d_0
         [__Vtableidx2])) {
        vlSelf->fftmain__DOT__stage_8__DOT__b_started 
            = Vfftmain__ConstPool__TABLE_hf8383f48_0
            [__Vtableidx2];
    }
    if (vlSelf->i_ce) {
        __Vdlyvval__fftmain__DOT__stage_4__DOT__imem__v0 
            = vlSelf->fftmain__DOT__w_d8;
        __Vdlyvset__fftmain__DOT__stage_4__DOT__imem__v0 = 1U;
        __Vdlyvval__fftmain__DOT__stage_4__DOT__imem__v1 
            = vlSelf->fftmain__DOT__stage_4__DOT__imem
            [0U];
        vlSelf->o_result = vlSelf->fftmain__DOT__br_result;
    }
    if (vlSelf->fftmain__DOT____Vcellinp__revstage__i_ce) {
        vlSelf->fftmain__DOT__br_result = vlSelf->fftmain__DOT__revstage__DOT__brmem
            [((0x200U & ((~ ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                             >> 9U)) << 9U)) | ((0x100U 
                                                 & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                                       << 6U)) 
                                                   | ((0x40U 
                                                       & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
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
                                                                           >> 8U)))))))))))];
    }
    if (vlSelf->i_reset) {
        __Vdly__fftmain__DOT__revstage__DOT__wraddr = 0U;
        vlSelf->o_sync = 0U;
        vlSelf->fftmain__DOT__w_s2 = 0U;
        vlSelf->fftmain__DOT__stage_2__DOT__sync_pipe 
            = __Vdly__fftmain__DOT__stage_2__DOT__sync_pipe;
        vlSelf->fftmain__DOT__w_s4 = 0U;
        __Vdly__fftmain__DOT__stage_512__DOT__oaddr = 0U;
        vlSelf->fftmain__DOT__w_s512 = 0U;
        __Vdly__fftmain__DOT__stage_512__DOT__b_started = 0U;
        vlSelf->fftmain__DOT__stage_512__DOT__b_started 
            = __Vdly__fftmain__DOT__stage_512__DOT__b_started;
        __Vdly__fftmain__DOT__stage_256__DOT__oaddr = 0U;
        vlSelf->fftmain__DOT__w_s256 = 0U;
        __Vdly__fftmain__DOT__stage_256__DOT__b_started = 0U;
        vlSelf->fftmain__DOT__stage_256__DOT__b_started 
            = __Vdly__fftmain__DOT__stage_256__DOT__b_started;
        __Vdly__fftmain__DOT__stage_128__DOT__oaddr = 0U;
        vlSelf->fftmain__DOT__w_s128 = 0U;
        __Vdly__fftmain__DOT__stage_128__DOT__b_started = 0U;
        vlSelf->fftmain__DOT__stage_128__DOT__b_started 
            = __Vdly__fftmain__DOT__stage_128__DOT__b_started;
        __Vdly__fftmain__DOT__stage_64__DOT__oaddr = 0U;
        vlSelf->fftmain__DOT__w_s64 = 0U;
        __Vdly__fftmain__DOT__stage_64__DOT__b_started = 0U;
        vlSelf->fftmain__DOT__stage_64__DOT__b_started 
            = __Vdly__fftmain__DOT__stage_64__DOT__b_started;
        __Vdly__fftmain__DOT__stage_32__DOT__oaddr = 0U;
        vlSelf->fftmain__DOT__w_s32 = 0U;
        __Vdly__fftmain__DOT__stage_32__DOT__b_started = 0U;
    } else {
        if (vlSelf->fftmain__DOT____Vcellinp__revstage__i_ce) {
            __Vdlyvval__fftmain__DOT__revstage__DOT__brmem__v0 
                = (((QData)((IData)(vlSelf->fftmain__DOT__stage_2__DOT__o_r)) 
                    << 0x15U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_2__DOT__o_i)));
            __Vdlyvset__fftmain__DOT__revstage__DOT__brmem__v0 = 1U;
            __Vdlyvdim0__fftmain__DOT__revstage__DOT__brmem__v0 
                = vlSelf->fftmain__DOT__revstage__DOT__wraddr;
            __Vdly__fftmain__DOT__revstage__DOT__wraddr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr)));
        }
        if (vlSelf->i_ce) {
            vlSelf->o_sync = vlSelf->fftmain__DOT__br_sync;
            vlSelf->fftmain__DOT__w_s2 = (1U & ((IData)(vlSelf->fftmain__DOT__stage_2__DOT__sync_pipe) 
                                                >> 1U));
            vlSelf->fftmain__DOT__w_s4 = (5U == (7U 
                                                 & (IData)(vlSelf->fftmain__DOT__stage_4__DOT__iaddr)));
            vlSelf->fftmain__DOT__w_s512 = ((~ ((IData)(vlSelf->fftmain__DOT__stage_512__DOT__oaddr) 
                                                >> 8U)) 
                                            & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__ob_sync));
            if (((IData)(vlSelf->fftmain__DOT__stage_512__DOT__ob_sync) 
                 | (IData)(vlSelf->fftmain__DOT__stage_512__DOT__b_started))) {
                __Vdly__fftmain__DOT__stage_512__DOT__oaddr 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_512__DOT__oaddr)));
            }
            if (((IData)(vlSelf->fftmain__DOT__stage_512__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->fftmain__DOT__stage_512__DOT__oaddr) 
                       >> 8U)))) {
                __Vdly__fftmain__DOT__stage_512__DOT__b_started = 1U;
            }
            vlSelf->fftmain__DOT__w_s256 = ((~ ((IData)(vlSelf->fftmain__DOT__stage_256__DOT__oaddr) 
                                                >> 7U)) 
                                            & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__ob_sync));
            if (((IData)(vlSelf->fftmain__DOT__stage_256__DOT__ob_sync) 
                 | (IData)(vlSelf->fftmain__DOT__stage_256__DOT__b_started))) {
                __Vdly__fftmain__DOT__stage_256__DOT__oaddr 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_256__DOT__oaddr)));
            }
            if (((IData)(vlSelf->fftmain__DOT__stage_256__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->fftmain__DOT__stage_256__DOT__oaddr) 
                       >> 7U)))) {
                __Vdly__fftmain__DOT__stage_256__DOT__b_started = 1U;
            }
            vlSelf->fftmain__DOT__w_s128 = ((~ ((IData)(vlSelf->fftmain__DOT__stage_128__DOT__oaddr) 
                                                >> 6U)) 
                                            & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__ob_sync));
            if (((IData)(vlSelf->fftmain__DOT__stage_128__DOT__ob_sync) 
                 | (IData)(vlSelf->fftmain__DOT__stage_128__DOT__b_started))) {
                __Vdly__fftmain__DOT__stage_128__DOT__oaddr 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_128__DOT__oaddr)));
            }
            if (((IData)(vlSelf->fftmain__DOT__stage_128__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->fftmain__DOT__stage_128__DOT__oaddr) 
                       >> 6U)))) {
                __Vdly__fftmain__DOT__stage_128__DOT__b_started = 1U;
            }
            vlSelf->fftmain__DOT__w_s64 = ((~ ((IData)(vlSelf->fftmain__DOT__stage_64__DOT__oaddr) 
                                               >> 5U)) 
                                           & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__ob_sync));
            if (((IData)(vlSelf->fftmain__DOT__stage_64__DOT__ob_sync) 
                 | (IData)(vlSelf->fftmain__DOT__stage_64__DOT__b_started))) {
                __Vdly__fftmain__DOT__stage_64__DOT__oaddr 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_64__DOT__oaddr)));
            }
            if (((IData)(vlSelf->fftmain__DOT__stage_64__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->fftmain__DOT__stage_64__DOT__oaddr) 
                       >> 5U)))) {
                __Vdly__fftmain__DOT__stage_64__DOT__b_started = 1U;
            }
            vlSelf->fftmain__DOT__w_s32 = ((~ ((IData)(vlSelf->fftmain__DOT__stage_32__DOT__oaddr) 
                                               >> 4U)) 
                                           & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__ob_sync));
            if (((IData)(vlSelf->fftmain__DOT__stage_32__DOT__ob_sync) 
                 | (IData)(vlSelf->fftmain__DOT__stage_32__DOT__b_started))) {
                __Vdly__fftmain__DOT__stage_32__DOT__oaddr 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->fftmain__DOT__stage_32__DOT__oaddr)));
            }
            if (((IData)(vlSelf->fftmain__DOT__stage_32__DOT__ob_sync) 
                 & (~ ((IData)(vlSelf->fftmain__DOT__stage_32__DOT__oaddr) 
                       >> 4U)))) {
                __Vdly__fftmain__DOT__stage_32__DOT__b_started = 1U;
            }
        }
        vlSelf->fftmain__DOT__stage_2__DOT__sync_pipe 
            = __Vdly__fftmain__DOT__stage_2__DOT__sync_pipe;
        vlSelf->fftmain__DOT__stage_512__DOT__b_started 
            = __Vdly__fftmain__DOT__stage_512__DOT__b_started;
        vlSelf->fftmain__DOT__stage_256__DOT__b_started 
            = __Vdly__fftmain__DOT__stage_256__DOT__b_started;
        vlSelf->fftmain__DOT__stage_128__DOT__b_started 
            = __Vdly__fftmain__DOT__stage_128__DOT__b_started;
        vlSelf->fftmain__DOT__stage_64__DOT__b_started 
            = __Vdly__fftmain__DOT__stage_64__DOT__b_started;
    }
    vlSelf->fftmain__DOT__stage_32__DOT__b_started 
        = __Vdly__fftmain__DOT__stage_32__DOT__b_started;
    if (__Vdlyvset__fftmain__DOT__revstage__DOT__brmem__v0) {
        vlSelf->fftmain__DOT__revstage__DOT__brmem[__Vdlyvdim0__fftmain__DOT__revstage__DOT__brmem__v0] 
            = __Vdlyvval__fftmain__DOT__revstage__DOT__brmem__v0;
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x1fffffffffULL & VL_MULS_QQQ(37, (0x1fffffffffULL 
                                                  & VL_EXTENDS_QI(37,20, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                             (0x1fffffffffULL 
                                              & VL_EXTENDS_QI(37,17, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x1fffffffffULL & VL_MULS_QQQ(37, (0x1fffffffffULL 
                                                  & VL_EXTENDS_QI(37,20, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                             (0x1fffffffffULL 
                                              & VL_EXTENDS_QI(37,17, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x7fffffffffULL & VL_MULS_QQQ(39, (0x7fffffffffULL 
                                                  & VL_EXTENDS_QI(39,21, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                             (0x7fffffffffULL 
                                              & VL_EXTENDS_QI(39,18, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x7fffffffffULL & VL_MULS_QQQ(39, (0x7fffffffffULL 
                                                  & VL_EXTENDS_QI(39,21, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                             (0x7fffffffffULL 
                                              & VL_EXTENDS_QI(39,18, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                                   & VL_EXTENDS_QI(41,22, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                              (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,19, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                                   & VL_EXTENDS_QI(41,22, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                              (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,19, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                                   & VL_EXTENDS_QI(41,22, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                              (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,19, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                                   & VL_EXTENDS_QI(41,22, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                              (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,19, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
            = (0x1fffffffffffULL & VL_MULS_QQQ(45, 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,24, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in)), 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,21, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in))));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
            = (0x1fffffffffffULL & VL_MULS_QQQ(45, 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,24, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in)), 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,21, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in))));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x1ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x11U)))
                            ? ((0U != (0x1ffffU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x12U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x12U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x12U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x12U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x12U))));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x1ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x11U)))
                            ? ((0U != (0x1ffffU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x12U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x12U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x12U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x12U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x12U))));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x3ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x12U)))
                            ? ((0U != (0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x13U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x13U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x13U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x13U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x13U))));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x3ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x12U)))
                            ? ((0U != (0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x13U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x13U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x13U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x13U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x13U))));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x3ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x14U)))
                            ? ((0U != (0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x15U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x15U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x15U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x15U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x15U))));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x3ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x14U)))
                            ? ((0U != (0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x15U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x15U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x15U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x15U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x15U))));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x7ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x13U)))
                            ? ((0U != (0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x14U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x14U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x14U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x14U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x14U))));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x7ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x13U)))
                            ? ((0U != (0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x14U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x14U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x14U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x14U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x14U))));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0x7ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x15U)))
                            ? ((0U != (0x1fffffU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x16U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x16U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x16U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x16U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x16U))));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0x7ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x15U)))
                            ? ((0U != (0x1fffffU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x16U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x16U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x16U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x16U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x16U))));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0xfffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x14U)))
                            ? ((0U != (0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x15U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x15U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x15U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x15U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x15U))));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0xfffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x14U)))
                            ? ((0U != (0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x15U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x15U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x15U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x15U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x15U))));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r 
            = (0xfffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                          >> 0x16U)))
                            ? ((0U != (0x3fffffU & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                          >> 0x17U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x17U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                  >> 0x17U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                               >> 0x17U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                       >> 0x17U))));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i 
            = (0xfffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                          >> 0x16U)))
                            ? ((0U != (0x3fffffU & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                          >> 0x17U)))
                                : ((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x17U)))
                                    ? ((IData)(1U) 
                                       + (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                  >> 0x17U)))
                                    : (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                               >> 0x17U))))
                            : (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                       >> 0x17U))));
        vlSelf->fftmain__DOT__stage_2__DOT__o_r = (0x1fffffU 
                                                   & ((1U 
                                                       & vlSelf->fftmain__DOT__stage_2__DOT__rnd_r)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->fftmain__DOT__stage_2__DOT__rnd_r)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + 
                                                        (vlSelf->fftmain__DOT__stage_2__DOT__rnd_r 
                                                         >> 1U))
                                                        : 
                                                       (vlSelf->fftmain__DOT__stage_2__DOT__rnd_r 
                                                        >> 1U))
                                                       : 
                                                      (vlSelf->fftmain__DOT__stage_2__DOT__rnd_r 
                                                       >> 1U)));
        vlSelf->fftmain__DOT__stage_2__DOT__o_i = (0x1fffffU 
                                                   & ((1U 
                                                       & vlSelf->fftmain__DOT__stage_2__DOT__rnd_i)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->fftmain__DOT__stage_2__DOT__rnd_i)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + 
                                                        (vlSelf->fftmain__DOT__stage_2__DOT__rnd_i 
                                                         >> 1U))
                                                        : 
                                                       (vlSelf->fftmain__DOT__stage_2__DOT__rnd_i 
                                                        >> 1U))
                                                       : 
                                                      (vlSelf->fftmain__DOT__stage_2__DOT__rnd_i 
                                                       >> 1U)));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in 
            = vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in 
            = vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in 
            = vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in 
            = vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x7fffffffffULL & (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                  - vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x7fffffffffULL & ((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                   - vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                  - vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x24U)))))))) 
            << 0x25U) | vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x24U)))))))) 
            << 0x25U) | vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x1ffffffffffULL & (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                   - vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x1ffffffffffULL & ((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                    - vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                   - vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x26U)))))))) 
            << 0x27U) | vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x26U)))))))) 
            << 0x27U) | vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x7ffffffffffULL & (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                   - vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x7ffffffffffULL & ((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                    - vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                   - vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x7ffffffffffULL & (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                   - vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x7ffffffffffULL & ((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                    - vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                   - vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x1fffffffffffULL & (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                    - vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x1fffffffffffULL & ((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                     - vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                    - vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x1fffffffffffULL & (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                    - vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x1fffffffffffULL & ((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                     - vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                    - vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
            = (0x7fffffffffffULL & (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one 
                                    - vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
            = (0x7fffffffffffULL & ((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
                                     - vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one) 
                                    - vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two));
    }
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x2cU)))))))) 
            << 0x2dU) | vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x2cU)))))))) 
            << 0x2dU) | vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    if (vlSelf->i_ce) {
        if (vlSelf->fftmain__DOT__stage_2__DOT__stage) {
            vlSelf->fftmain__DOT__stage_2__DOT__rnd_r 
                = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->fftmain__DOT__stage_2__DOT__m_r) 
                                + VL_EXTENDS_II(22,21, 
                                                (0x1fffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__w_d4 
                                                            >> 0x15U))))));
            __Vdly__fftmain__DOT__stage_2__DOT__sto_r 
                = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->fftmain__DOT__stage_2__DOT__m_r) 
                                - VL_EXTENDS_II(22,21, 
                                                (0x1fffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__w_d4 
                                                            >> 0x15U))))));
            vlSelf->fftmain__DOT__stage_2__DOT__rnd_i 
                = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->fftmain__DOT__stage_2__DOT__m_i) 
                                + VL_EXTENDS_II(22,21, 
                                                (0x1fffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__w_d4)))));
            __Vdly__fftmain__DOT__stage_2__DOT__sto_i 
                = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->fftmain__DOT__stage_2__DOT__m_i) 
                                - VL_EXTENDS_II(22,21, 
                                                (0x1fffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__w_d4)))));
        } else {
            vlSelf->fftmain__DOT__stage_2__DOT__rnd_r 
                = vlSelf->fftmain__DOT__stage_2__DOT__sto_r;
            vlSelf->fftmain__DOT__stage_2__DOT__rnd_i 
                = vlSelf->fftmain__DOT__stage_2__DOT__sto_i;
        }
        vlSelf->fftmain__DOT__stage_2__DOT__sto_r = __Vdly__fftmain__DOT__stage_2__DOT__sto_r;
    } else {
        vlSelf->fftmain__DOT__stage_2__DOT__sto_r = __Vdly__fftmain__DOT__stage_2__DOT__sto_r;
    }
    vlSelf->fftmain__DOT__stage_2__DOT__sto_i = __Vdly__fftmain__DOT__stage_2__DOT__sto_i;
    if (vlSelf->i_reset) {
        vlSelf->fftmain__DOT__br_sync = 0U;
        vlSelf->fftmain__DOT__stage_512__DOT__ob_sync = 0U;
        vlSelf->fftmain__DOT__stage_256__DOT__ob_sync = 0U;
        vlSelf->fftmain__DOT__stage_128__DOT__ob_sync = 0U;
        vlSelf->fftmain__DOT__stage_64__DOT__ob_sync = 0U;
        vlSelf->fftmain__DOT__stage_32__DOT__ob_sync = 0U;
        vlSelf->fftmain__DOT__stage_16__DOT__ob_sync = 0U;
        vlSelf->fftmain__DOT__stage_8__DOT__ob_sync = 0U;
        vlSelf->fftmain__DOT__revstage__DOT__in_reset = 1U;
    } else {
        if (((IData)(vlSelf->fftmain__DOT____Vcellinp__revstage__i_ce) 
             & (~ (IData)(vlSelf->fftmain__DOT__revstage__DOT__in_reset)))) {
            vlSelf->fftmain__DOT__br_sync = (0U == 
                                             (0x1ffU 
                                              & (IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr)));
        }
        if (vlSelf->i_ce) {
            vlSelf->fftmain__DOT__stage_512__DOT__ob_sync 
                = (1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x22U)));
            vlSelf->fftmain__DOT__stage_256__DOT__ob_sync 
                = (1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x24U)));
            vlSelf->fftmain__DOT__stage_128__DOT__ob_sync 
                = (1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x26U)));
            vlSelf->fftmain__DOT__stage_64__DOT__ob_sync 
                = (1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x26U)));
            vlSelf->fftmain__DOT__stage_32__DOT__ob_sync 
                = (1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x28U)));
            vlSelf->fftmain__DOT__stage_16__DOT__ob_sync 
                = (1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x28U)));
            vlSelf->fftmain__DOT__stage_8__DOT__ob_sync 
                = (1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                 >> 0x2aU)));
        }
        if (((IData)(vlSelf->fftmain__DOT____Vcellinp__revstage__i_ce) 
             & (0x1ffU == (0x1ffU & (IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr))))) {
            vlSelf->fftmain__DOT__revstage__DOT__in_reset = 0U;
        }
    }
    vlSelf->fftmain__DOT__revstage__DOT__wraddr = __Vdly__fftmain__DOT__revstage__DOT__wraddr;
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT____Vcellinp__revstage__i_ce 
            = ((IData)(vlSelf->fftmain__DOT__r_br_started) 
               | (IData)(vlSelf->fftmain__DOT__w_s2));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x7fffffffffULL & VL_MULS_QQQ(39, (0x7fffffffffULL 
                                                  & VL_EXTENDS_QI(39,21, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                             (0x7fffffffffULL 
                                              & VL_EXTENDS_QI(39,18, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x1ffffffffffULL & VL_MULS_QQQ(41, (0x1ffffffffffULL 
                                                   & VL_EXTENDS_QI(41,22, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                              (0x1ffffffffffULL 
                                               & VL_EXTENDS_QI(41,19, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,23, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,20, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x1fffffffffffULL & VL_MULS_QQQ(45, 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,24, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,21, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x1fffffffffffULL & VL_MULS_QQQ(45, 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,24, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                               (0x1fffffffffffULL 
                                                & VL_EXTENDS_QI(45,21, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three 
            = (0x7fffffffffffULL & VL_MULS_QQQ(47, 
                                               (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,25, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in)), 
                                               (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,22, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in))));
        if ((1U & (~ (IData)(vlSelf->fftmain__DOT__stage_2__DOT__stage)))) {
            vlSelf->fftmain__DOT__stage_2__DOT__m_r 
                = (0x1fffffU & (IData)((vlSelf->fftmain__DOT__w_d4 
                                        >> 0x15U)));
            vlSelf->fftmain__DOT__stage_2__DOT__m_i 
                = (0x1fffffU & (IData)(vlSelf->fftmain__DOT__w_d4));
        }
        vlSelf->fftmain__DOT__stage_2__DOT__stage = __Vdly__fftmain__DOT__stage_2__DOT__stage;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(21,20, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x3ffffU & (VL_EXTENDS_II(18,17, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                           + VL_EXTENDS_II(18,17, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(22,21, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                           + VL_EXTENDS_II(19,18, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x7fffffU & (VL_EXTENDS_II(23,22, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(23,22, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0xfffffU & (VL_EXTENDS_II(20,19, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                           + VL_EXTENDS_II(20,19, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x7fffffU & (VL_EXTENDS_II(23,22, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(23,22, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0xfffffU & (VL_EXTENDS_II(20,19, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                           + VL_EXTENDS_II(20,19, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0xffffffU & (VL_EXTENDS_II(24,23, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(24,23, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                            + VL_EXTENDS_II(21,20, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0xffffffU & (VL_EXTENDS_II(24,23, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                            + VL_EXTENDS_II(24,23, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                            + VL_EXTENDS_II(21,20, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in 
            = (0x1ffffffU & (VL_EXTENDS_II(25,24, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i) 
                             + VL_EXTENDS_II(25,24, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r)));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in 
            = (0x3fffffU & (VL_EXTENDS_II(22,21, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r) 
                            + VL_EXTENDS_II(22,21, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i)));
        __Vdlyvval__fftmain__DOT__stage_4__DOT__omem__v0 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_4__DOT__ob_b_r)) 
                << 0x15U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_4__DOT__ob_b_i)));
        __Vdlyvset__fftmain__DOT__stage_4__DOT__omem__v0 = 1U;
        __Vdlyvval__fftmain__DOT__stage_4__DOT__omem__v1 
            = vlSelf->fftmain__DOT__stage_4__DOT__omem
            [0U];
        vlSelf->fftmain__DOT__w_d4 = ((4U & (IData)(vlSelf->fftmain__DOT__stage_4__DOT__pipeline))
                                       ? vlSelf->fftmain__DOT__stage_4__DOT__ob_a
                                       : vlSelf->fftmain__DOT__stage_4__DOT__omem
                                      [1U]);
    } else {
        vlSelf->fftmain__DOT____Vcellinp__revstage__i_ce = 0U;
        vlSelf->fftmain__DOT__stage_2__DOT__stage = __Vdly__fftmain__DOT__stage_2__DOT__stage;
    }
    vlSelf->fftmain__DOT__stage_4__DOT__pipeline = __Vdly__fftmain__DOT__stage_4__DOT__pipeline;
    if (__Vdlyvset__fftmain__DOT__stage_4__DOT__omem__v0) {
        vlSelf->fftmain__DOT__stage_4__DOT__omem[0U] 
            = __Vdlyvval__fftmain__DOT__stage_4__DOT__omem__v0;
        vlSelf->fftmain__DOT__stage_4__DOT__omem[1U] 
            = __Vdlyvval__fftmain__DOT__stage_4__DOT__omem__v1;
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0xfffffU & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                   >> 0x14U)));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x1ffffU & (VL_EXTENDS_II(17,16, (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                 >> 0x10U)) 
                           - VL_EXTENDS_II(17,16, (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x10U))));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x1ffffU & (VL_EXTENDS_II(17,16, (0xffffU 
                                                 & vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left)) 
                           - VL_EXTENDS_II(17,16, (0xffffU 
                                                   & vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right))));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x1fffffU & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x15U)));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x1fffffU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x11U)))) 
                           - VL_EXTENDS_II(18,17, (0x1ffffU 
                                                   & (IData)(
                                                             (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x11U))))));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           - VL_EXTENDS_II(18,17, (0x1ffffU 
                                                   & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x3fffffU & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x16U)));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x3fffffU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x12U)))) 
                           - VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x12U))))));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           - VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x3fffffU & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x16U)));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x3fffffU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x12U)))) 
                           - VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x12U))))));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           - VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x7fffffU & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x17U)));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x7fffffU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x13U)))) 
                           - VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x13U))))));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           - VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0x7fffffU & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x17U)));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0x7fffffU & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x13U)))) 
                           - VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x13U))))));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           - VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r 
            = (0xffffffU & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
                                    >> 0x18U)));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i 
            = (0xffffffU & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x14U)))) 
                            - VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(
                                                       (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x14U))))));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            - VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_4__DOT__ob_a = 
            (((QData)((IData)(vlSelf->fftmain__DOT__stage_4__DOT__rnd_sum_r)) 
              << 0x15U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_4__DOT__rnd_sum_i)));
        if ((1U & (IData)(vlSelf->fftmain__DOT__stage_4__DOT__iaddr))) {
            vlSelf->fftmain__DOT__stage_4__DOT__ob_b_r 
                = vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_i;
            vlSelf->fftmain__DOT__stage_4__DOT__ob_b_i 
                = (0x1fffffU & (- vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_r));
        } else {
            vlSelf->fftmain__DOT__stage_4__DOT__ob_b_r 
                = vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_r;
            vlSelf->fftmain__DOT__stage_4__DOT__ob_b_i 
                = (0x1fffffU & vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_i);
        }
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->fftmain__DOT__stage_512__DOT__ib_c;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->fftmain__DOT__stage_256__DOT__ib_c;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->fftmain__DOT__stage_128__DOT__ib_c;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->fftmain__DOT__stage_64__DOT__ib_c;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->fftmain__DOT__stage_32__DOT__ib_c;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->fftmain__DOT__stage_16__DOT__ib_c;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef 
            = vlSelf->fftmain__DOT__stage_8__DOT__ib_c;
        vlSelf->fftmain__DOT__stage_4__DOT__rnd_sum_r 
            = vlSelf->fftmain__DOT__stage_4__DOT__sum_r;
    }
    if (((IData)(vlSelf->i_ce) & ((IData)(vlSelf->fftmain__DOT__stage_4__DOT__iaddr) 
                                  >> 1U))) {
        vlSelf->fftmain__DOT__stage_4__DOT__sum_r = 
            (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                & (IData)(
                                                          (vlSelf->fftmain__DOT__stage_4__DOT__imem
                                                           [1U] 
                                                           >> 0x14U)))) 
                          + VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->fftmain__DOT__w_d8 
                                                             >> 0x14U))))));
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_4__DOT__rnd_sum_i 
            = vlSelf->fftmain__DOT__stage_4__DOT__sum_i;
    }
    if (((IData)(vlSelf->i_ce) & ((IData)(vlSelf->fftmain__DOT__stage_4__DOT__iaddr) 
                                  >> 1U))) {
        vlSelf->fftmain__DOT__stage_4__DOT__sum_i = 
            (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                & (IData)(
                                                          vlSelf->fftmain__DOT__stage_4__DOT__imem
                                                          [1U]))) 
                          + VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(vlSelf->fftmain__DOT__w_d8)))));
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_r 
            = vlSelf->fftmain__DOT__stage_4__DOT__diff_r;
    }
    if (((IData)(vlSelf->i_ce) & ((IData)(vlSelf->fftmain__DOT__stage_4__DOT__iaddr) 
                                  >> 1U))) {
        vlSelf->fftmain__DOT__stage_4__DOT__diff_r 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->fftmain__DOT__stage_4__DOT__imem
                                                             [1U] 
                                                             >> 0x14U)))) 
                            - VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(
                                                       (vlSelf->fftmain__DOT__w_d8 
                                                        >> 0x14U))))));
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_i 
            = vlSelf->fftmain__DOT__stage_4__DOT__diff_i;
    }
    if (((IData)(vlSelf->i_ce) & ((IData)(vlSelf->fftmain__DOT__stage_4__DOT__iaddr) 
                                  >> 1U))) {
        vlSelf->fftmain__DOT__stage_4__DOT__diff_i 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(
                                                            vlSelf->fftmain__DOT__stage_4__DOT__imem
                                                            [1U]))) 
                            - VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(vlSelf->fftmain__DOT__w_d8)))));
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_512__DOT__ib_c 
            = vlSelf->fftmain__DOT__stage_512__DOT__cmem
            [(0xffU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_256__DOT__ib_c 
            = vlSelf->fftmain__DOT__stage_256__DOT__cmem
            [(0x7fU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_128__DOT__ib_c 
            = vlSelf->fftmain__DOT__stage_128__DOT__cmem
            [(0x3fU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_64__DOT__ib_c = 
            vlSelf->fftmain__DOT__stage_64__DOT__cmem
            [(0x1fU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_32__DOT__ib_c = 
            vlSelf->fftmain__DOT__stage_32__DOT__cmem
            [(0xfU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_16__DOT__ib_c = 
            vlSelf->fftmain__DOT__stage_16__DOT__cmem
            [(7U & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_8__DOT__ib_c = 
            vlSelf->fftmain__DOT__stage_8__DOT__cmem
            [(3U & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__iaddr))];
        vlSelf->fftmain__DOT__w_d8 = ((4U & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__oaddr))
                                       ? vlSelf->fftmain__DOT__stage_8__DOT__pre_ovalue
                                       : (((QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                           << 0x14U) 
                                          | (QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->fftmain__DOT__stage_8__DOT__pre_ovalue 
            = vlSelf->fftmain__DOT__stage_8__DOT__omem
            [vlSelf->fftmain__DOT__stage_8__DOT__nxt_oaddr];
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0xfffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                          >> 0x15U)))
                            ? ((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x16U)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                          >> 0x16U)))
                                : (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x16U)))
                            : (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                       >> 0x16U))));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0xfffffU & ((1U & (IData)((0x1fffffULL 
                                          & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                             >> 0x16U))))
                            ? ((1U & (IData)((0xfffffULL 
                                              & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                 >> 0x17U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0xfffffULL 
                                                          & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                             >> 0x17U))))
                                : (IData)((0xfffffULL 
                                           & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                              >> 0x17U))))
                            : (IData)((0xfffffULL & 
                                       (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                        >> 0x17U)))));
        vlSelf->fftmain__DOT__stage_8__DOT__nxt_oaddr 
            = ((2U & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__oaddr)));
        vlSelf->fftmain__DOT__stage_8__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__nxt_oaddr)) 
               | (2U & (((IData)(1U) + ((IData)(vlSelf->fftmain__DOT__stage_8__DOT__oaddr) 
                                        >> 1U)) << 1U)));
    }
    if (vlSelf->i_reset) {
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
            = vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
            = vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                << 0x2aU) | (((QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                              << 0x15U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                             >> 0x14U)))) 
                            + VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(
                                                       (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                        >> 0x14U))))));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x1fffffU & (VL_EXTENDS_II(21,20, (0xfffffU 
                                                  & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                            + VL_EXTENDS_II(21,20, 
                                            (0xfffffU 
                                             & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->fftmain__DOT__stage_8__DOT__ib_a;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->fftmain__DOT__stage_8__DOT__ib_b;
        vlSelf->fftmain__DOT__stage_8__DOT__ib_a = 
            vlSelf->fftmain__DOT__stage_8__DOT__imem
            [(3U & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_8__DOT__ib_b = vlSelf->fftmain__DOT__w_d16;
        vlSelf->fftmain__DOT__w_d16 = ((8U & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__oaddr))
                                        ? vlSelf->fftmain__DOT__stage_16__DOT__pre_ovalue
                                        : (((QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                            << 0x14U) 
                                           | (QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->fftmain__DOT__stage_16__DOT__pre_ovalue 
            = vlSelf->fftmain__DOT__stage_16__DOT__omem
            [vlSelf->fftmain__DOT__stage_16__DOT__nxt_oaddr];
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0xfffffU & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                   >> 0x14U)));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0xfffffU & ((1U & (IData)((0x1fffffULL 
                                          & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                             >> 0x14U))))
                            ? ((1U & (IData)((0xfffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x15U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0xfffffULL 
                                                          & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                             >> 0x15U))))
                                : (IData)((0xfffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x15U))))
                            : (IData)((0xfffffULL & 
                                       (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                        >> 0x15U)))));
        vlSelf->fftmain__DOT__stage_16__DOT__nxt_oaddr 
            = ((6U & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__oaddr)));
        vlSelf->fftmain__DOT__stage_16__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__nxt_oaddr)) 
               | (6U & (((IData)(1U) + ((IData)(vlSelf->fftmain__DOT__stage_16__DOT__oaddr) 
                                        >> 1U)) << 1U)));
    }
    if (vlSelf->i_reset) {
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->fftmain__DOT__stage_8__DOT__ib_sync = 0U;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
            = vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
        vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
            = ((IData)(vlSelf->fftmain__DOT__stage_8__DOT__ib_sync) 
               & (IData)(vlSelf->i_ce));
        vlSelf->fftmain__DOT__stage_8__DOT__ib_sync 
            = (4U == (IData)(vlSelf->fftmain__DOT__stage_8__DOT__iaddr));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
            = vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
            = vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                << 0x28U) | (((QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                              << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x13U)))) 
                           + VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x13U))))));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           + VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->fftmain__DOT__stage_16__DOT__ib_a;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->fftmain__DOT__stage_16__DOT__ib_b;
        vlSelf->fftmain__DOT__stage_16__DOT__ib_a = 
            vlSelf->fftmain__DOT__stage_16__DOT__imem
            [(7U & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_16__DOT__ib_b = vlSelf->fftmain__DOT__w_d32;
        vlSelf->fftmain__DOT__w_d32 = ((0x10U & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__oaddr))
                                        ? vlSelf->fftmain__DOT__stage_32__DOT__pre_ovalue
                                        : (((QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                            << 0x13U) 
                                           | (QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->fftmain__DOT__stage_32__DOT__pre_ovalue 
            = vlSelf->fftmain__DOT__stage_32__DOT__omem
            [vlSelf->fftmain__DOT__stage_32__DOT__nxt_oaddr];
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x7ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                          >> 0x14U)))
                            ? ((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x15U)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                          >> 0x15U)))
                                : (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x15U)))
                            : (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                       >> 0x15U))));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x7ffffU & ((1U & (IData)((0xfffffULL 
                                          & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                             >> 0x15U))))
                            ? ((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                 >> 0x16U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0x7ffffULL 
                                                          & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                             >> 0x16U))))
                                : (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x16U))))
                            : (IData)((0x7ffffULL & 
                                       (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                        >> 0x16U)))));
        vlSelf->fftmain__DOT__stage_32__DOT__nxt_oaddr 
            = ((0xeU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__oaddr)));
        vlSelf->fftmain__DOT__stage_32__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__nxt_oaddr)) 
               | (0xeU & (((IData)(1U) + ((IData)(vlSelf->fftmain__DOT__stage_32__DOT__oaddr) 
                                          >> 1U)) << 1U)));
    }
    if (vlSelf->i_reset) {
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->fftmain__DOT__stage_16__DOT__ib_sync = 0U;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
            = vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
        vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
            = ((IData)(vlSelf->fftmain__DOT__stage_16__DOT__ib_sync) 
               & (IData)(vlSelf->i_ce));
        vlSelf->fftmain__DOT__stage_16__DOT__ib_sync 
            = (8U == (IData)(vlSelf->fftmain__DOT__stage_16__DOT__iaddr));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
            = vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
            = vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                << 0x28U) | (((QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                              << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x13U)))) 
                           + VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x13U))))));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0xfffffU & (VL_EXTENDS_II(20,19, (0x7ffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           + VL_EXTENDS_II(20,19, (0x7ffffU 
                                                   & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->fftmain__DOT__stage_32__DOT__ib_a;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->fftmain__DOT__stage_32__DOT__ib_b;
        vlSelf->fftmain__DOT__stage_32__DOT__ib_a = 
            vlSelf->fftmain__DOT__stage_32__DOT__imem
            [(0xfU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_32__DOT__ib_b = vlSelf->fftmain__DOT__w_d64;
        vlSelf->fftmain__DOT__w_d64 = ((0x20U & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__oaddr))
                                        ? vlSelf->fftmain__DOT__stage_64__DOT__pre_ovalue
                                        : (((QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                            << 0x13U) 
                                           | (QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->fftmain__DOT__stage_64__DOT__pre_ovalue 
            = vlSelf->fftmain__DOT__stage_64__DOT__omem
            [vlSelf->fftmain__DOT__stage_64__DOT__nxt_oaddr];
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x7ffffU & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                   >> 0x13U)));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x7ffffU & ((1U & (IData)((0xfffffULL 
                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                             >> 0x13U))))
                            ? ((1U & (IData)((0x7ffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x14U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0x7ffffULL 
                                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                             >> 0x14U))))
                                : (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x14U))))
                            : (IData)((0x7ffffULL & 
                                       (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                        >> 0x14U)))));
        vlSelf->fftmain__DOT__stage_64__DOT__nxt_oaddr 
            = ((0x1eU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__oaddr)));
        vlSelf->fftmain__DOT__stage_64__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__nxt_oaddr)) 
               | (0x1eU & (((IData)(1U) + ((IData)(vlSelf->fftmain__DOT__stage_64__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
    }
    if (vlSelf->i_reset) {
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->fftmain__DOT__stage_32__DOT__ib_sync = 0U;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
            = vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
        vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
            = ((IData)(vlSelf->fftmain__DOT__stage_32__DOT__ib_sync) 
               & (IData)(vlSelf->i_ce));
        vlSelf->fftmain__DOT__stage_32__DOT__ib_sync 
            = (0x10U == (IData)(vlSelf->fftmain__DOT__stage_32__DOT__iaddr));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
            = vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
            = vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                << 0x26U) | (((QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                              << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x12U)))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x12U))))));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->fftmain__DOT__stage_64__DOT__ib_a;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->fftmain__DOT__stage_64__DOT__ib_b;
        vlSelf->fftmain__DOT__stage_64__DOT__ib_a = 
            vlSelf->fftmain__DOT__stage_64__DOT__imem
            [(0x1fU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_64__DOT__ib_b = vlSelf->fftmain__DOT__w_d128;
        vlSelf->fftmain__DOT__w_d128 = ((0x40U & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__oaddr))
                                         ? vlSelf->fftmain__DOT__stage_128__DOT__pre_ovalue
                                         : (((QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                             << 0x12U) 
                                            | (QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->fftmain__DOT__stage_128__DOT__pre_ovalue 
            = vlSelf->fftmain__DOT__stage_128__DOT__omem
            [vlSelf->fftmain__DOT__stage_128__DOT__nxt_oaddr];
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x3ffffU & ((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                          >> 0x13U)))
                            ? ((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                              >> 0x14U)))
                                ? ((IData)(1U) + (IData)(
                                                         (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                          >> 0x14U)))
                                : (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x14U)))
                            : (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                       >> 0x14U))));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x3ffffU & ((1U & (IData)((0x7ffffULL 
                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                             >> 0x14U))))
                            ? ((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                 >> 0x15U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0x3ffffULL 
                                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                             >> 0x15U))))
                                : (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x15U))))
                            : (IData)((0x3ffffULL & 
                                       (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                        >> 0x15U)))));
        vlSelf->fftmain__DOT__stage_128__DOT__nxt_oaddr 
            = ((0x3eU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__oaddr)));
        vlSelf->fftmain__DOT__stage_128__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__nxt_oaddr)) 
               | (0x3eU & (((IData)(1U) + ((IData)(vlSelf->fftmain__DOT__stage_128__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
    }
    if (vlSelf->i_reset) {
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->fftmain__DOT__stage_64__DOT__ib_sync = 0U;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
            = vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
        vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
            = ((IData)(vlSelf->fftmain__DOT__stage_64__DOT__ib_sync) 
               & (IData)(vlSelf->i_ce));
        vlSelf->fftmain__DOT__stage_64__DOT__ib_sync 
            = (0x20U == (IData)(vlSelf->fftmain__DOT__stage_64__DOT__iaddr));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
            = vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
            = vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                << 0x26U) | (((QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                              << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x12U)))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x12U))))));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->fftmain__DOT__stage_128__DOT__ib_a;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->fftmain__DOT__stage_128__DOT__ib_b;
        vlSelf->fftmain__DOT__stage_128__DOT__ib_a 
            = vlSelf->fftmain__DOT__stage_128__DOT__imem
            [(0x3fU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_128__DOT__ib_b 
            = vlSelf->fftmain__DOT__w_d256;
        vlSelf->fftmain__DOT__w_d256 = ((0x80U & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__oaddr))
                                         ? vlSelf->fftmain__DOT__stage_256__DOT__pre_ovalue
                                         : (((QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                             << 0x12U) 
                                            | (QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->fftmain__DOT__stage_256__DOT__pre_ovalue 
            = vlSelf->fftmain__DOT__stage_256__DOT__omem
            [vlSelf->fftmain__DOT__stage_256__DOT__nxt_oaddr];
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x3ffffU & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                   >> 0x12U)));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x3ffffU & ((1U & (IData)((0x7ffffULL 
                                          & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                             >> 0x12U))))
                            ? ((1U & (IData)((0x3ffffULL 
                                              & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                 >> 0x13U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0x3ffffULL 
                                                          & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                             >> 0x13U))))
                                : (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                              >> 0x13U))))
                            : (IData)((0x3ffffULL & 
                                       (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                        >> 0x13U)))));
        vlSelf->fftmain__DOT__stage_256__DOT__nxt_oaddr 
            = ((0x7eU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__oaddr)));
        vlSelf->fftmain__DOT__stage_256__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__nxt_oaddr)) 
               | (0x7eU & (((IData)(1U) + ((IData)(vlSelf->fftmain__DOT__stage_256__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
    }
    if (vlSelf->i_reset) {
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->fftmain__DOT__stage_128__DOT__ib_sync = 0U;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    } else if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
            = vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
        vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
            = ((IData)(vlSelf->fftmain__DOT__stage_128__DOT__ib_sync) 
               & (IData)(vlSelf->i_ce));
        vlSelf->fftmain__DOT__stage_128__DOT__ib_sync 
            = (0x40U == (IData)(vlSelf->fftmain__DOT__stage_128__DOT__iaddr));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
            = vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
            = vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                << 0x24U) | (((QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                              << 0x12U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                            >> 0x11U)))) 
                           + VL_EXTENDS_II(18,17, (0x1ffffU 
                                                   & (IData)(
                                                             (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                              >> 0x11U))))));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x3ffffU & (VL_EXTENDS_II(18,17, (0x1ffffU 
                                                 & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))) 
                           + VL_EXTENDS_II(18,17, (0x1ffffU 
                                                   & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right)))));
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->fftmain__DOT__stage_256__DOT__ib_a;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->fftmain__DOT__stage_256__DOT__ib_b;
        vlSelf->fftmain__DOT__stage_256__DOT__ib_a 
            = vlSelf->fftmain__DOT__stage_256__DOT__imem
            [(0x7fU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__iaddr))];
        vlSelf->fftmain__DOT__stage_256__DOT__ib_b 
            = vlSelf->fftmain__DOT__w_d512;
        vlSelf->fftmain__DOT__w_d512 = ((0x100U & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__oaddr))
                                         ? vlSelf->fftmain__DOT__stage_512__DOT__pre_ovalue
                                         : (((QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                             << 0x11U) 
                                            | (QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i))));
        vlSelf->fftmain__DOT__stage_512__DOT__pre_ovalue 
            = vlSelf->fftmain__DOT__stage_512__DOT__omem
            [vlSelf->fftmain__DOT__stage_512__DOT__nxt_oaddr];
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r 
            = (0x1ffffU & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                   >> 0x11U)));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i 
            = (0x1ffffU & ((1U & (IData)((0x3ffffULL 
                                          & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                             >> 0x11U))))
                            ? ((1U & (IData)((0x1ffffULL 
                                              & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                 >> 0x12U))))
                                ? ((IData)(1U) + (IData)(
                                                         (0x1ffffULL 
                                                          & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                             >> 0x12U))))
                                : (IData)((0x1ffffULL 
                                           & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                              >> 0x12U))))
                            : (IData)((0x1ffffULL & 
                                       (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                        >> 0x12U)))));
    }
    if (vlSelf->i_reset) {
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->fftmain__DOT__stage_256__DOT__ib_sync = 0U;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
        vlSelf->fftmain__DOT__stage_512__DOT__ib_sync = 0U;
    } else if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
            = vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
        vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
            = ((IData)(vlSelf->fftmain__DOT__stage_256__DOT__ib_sync) 
               & (IData)(vlSelf->i_ce));
        vlSelf->fftmain__DOT__stage_256__DOT__ib_sync 
            = (0x80U == (IData)(vlSelf->fftmain__DOT__stage_256__DOT__iaddr));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
            = vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv 
            = vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv 
            = (((QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2)) 
                << 0x22U) | (((QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r)) 
                              << 0x11U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i))));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 
            = vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux 
            = ((IData)(vlSelf->fftmain__DOT__stage_512__DOT__ib_sync) 
               & (IData)(vlSelf->i_ce));
        vlSelf->fftmain__DOT__stage_512__DOT__ib_sync 
            = (0x100U == (IData)(vlSelf->fftmain__DOT__stage_512__DOT__iaddr));
    }
    if (vlSelf->i_ce) {
        vlSelf->fftmain__DOT__stage_512__DOT__nxt_oaddr 
            = ((0xfeU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__nxt_oaddr)) 
               | (1U & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__oaddr)));
        vlSelf->fftmain__DOT__stage_512__DOT__nxt_oaddr 
            = ((1U & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__nxt_oaddr)) 
               | (0xfeU & (((IData)(1U) + ((IData)(vlSelf->fftmain__DOT__stage_512__DOT__oaddr) 
                                           >> 1U)) 
                           << 1U)));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r 
            = (0x1ffffU & (VL_EXTENDS_II(17,16, (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                 >> 0x10U)) 
                           + VL_EXTENDS_II(17,16, (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x10U))));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i 
            = (0x1ffffU & (VL_EXTENDS_II(17,16, (0xffffU 
                                                 & vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left)) 
                           + VL_EXTENDS_II(17,16, (0xffffU 
                                                   & vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right))));
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
            = vlSelf->fftmain__DOT__stage_512__DOT__ib_b;
        vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
            = vlSelf->fftmain__DOT__stage_512__DOT__ib_a;
        vlSelf->fftmain__DOT__stage_512__DOT__ib_b 
            = vlSelf->i_sample;
        vlSelf->fftmain__DOT__stage_512__DOT__ib_a 
            = vlSelf->fftmain__DOT__stage_512__DOT__imem
            [(0xffU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__iaddr))];
    }
    if (__Vdlyvset__fftmain__DOT__stage_4__DOT__imem__v0) {
        vlSelf->fftmain__DOT__stage_4__DOT__imem[0U] 
            = __Vdlyvval__fftmain__DOT__stage_4__DOT__imem__v0;
        vlSelf->fftmain__DOT__stage_4__DOT__imem[1U] 
            = __Vdlyvval__fftmain__DOT__stage_4__DOT__imem__v1;
    }
    vlSelf->fftmain__DOT__stage_4__DOT__iaddr = __Vdly__fftmain__DOT__stage_4__DOT__iaddr;
    if (__Vdlyvset__fftmain__DOT__stage_8__DOT__omem__v0) {
        vlSelf->fftmain__DOT__stage_8__DOT__omem[__Vdlyvdim0__fftmain__DOT__stage_8__DOT__omem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_8__DOT__omem__v0;
    }
    vlSelf->fftmain__DOT__stage_8__DOT__oaddr = __Vdly__fftmain__DOT__stage_8__DOT__oaddr;
    if (__Vdlyvset__fftmain__DOT__stage_8__DOT__imem__v0) {
        vlSelf->fftmain__DOT__stage_8__DOT__imem[__Vdlyvdim0__fftmain__DOT__stage_8__DOT__imem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_8__DOT__imem__v0;
    }
    vlSelf->fftmain__DOT__stage_8__DOT__iaddr = __Vdly__fftmain__DOT__stage_8__DOT__iaddr;
    if (__Vdlyvset__fftmain__DOT__stage_16__DOT__omem__v0) {
        vlSelf->fftmain__DOT__stage_16__DOT__omem[__Vdlyvdim0__fftmain__DOT__stage_16__DOT__omem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_16__DOT__omem__v0;
    }
    vlSelf->fftmain__DOT__stage_16__DOT__oaddr = __Vdly__fftmain__DOT__stage_16__DOT__oaddr;
    if (__Vdlyvset__fftmain__DOT__stage_16__DOT__imem__v0) {
        vlSelf->fftmain__DOT__stage_16__DOT__imem[__Vdlyvdim0__fftmain__DOT__stage_16__DOT__imem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_16__DOT__imem__v0;
    }
    vlSelf->fftmain__DOT__stage_16__DOT__iaddr = __Vdly__fftmain__DOT__stage_16__DOT__iaddr;
    if (__Vdlyvset__fftmain__DOT__stage_32__DOT__omem__v0) {
        vlSelf->fftmain__DOT__stage_32__DOT__omem[__Vdlyvdim0__fftmain__DOT__stage_32__DOT__omem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_32__DOT__omem__v0;
    }
    vlSelf->fftmain__DOT__stage_32__DOT__oaddr = __Vdly__fftmain__DOT__stage_32__DOT__oaddr;
    if (__Vdlyvset__fftmain__DOT__stage_32__DOT__imem__v0) {
        vlSelf->fftmain__DOT__stage_32__DOT__imem[__Vdlyvdim0__fftmain__DOT__stage_32__DOT__imem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_32__DOT__imem__v0;
    }
    vlSelf->fftmain__DOT__stage_32__DOT__iaddr = __Vdly__fftmain__DOT__stage_32__DOT__iaddr;
    if (__Vdlyvset__fftmain__DOT__stage_64__DOT__omem__v0) {
        vlSelf->fftmain__DOT__stage_64__DOT__omem[__Vdlyvdim0__fftmain__DOT__stage_64__DOT__omem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_64__DOT__omem__v0;
    }
    vlSelf->fftmain__DOT__stage_64__DOT__oaddr = __Vdly__fftmain__DOT__stage_64__DOT__oaddr;
    if (__Vdlyvset__fftmain__DOT__stage_64__DOT__imem__v0) {
        vlSelf->fftmain__DOT__stage_64__DOT__imem[__Vdlyvdim0__fftmain__DOT__stage_64__DOT__imem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_64__DOT__imem__v0;
    }
    vlSelf->fftmain__DOT__stage_64__DOT__iaddr = __Vdly__fftmain__DOT__stage_64__DOT__iaddr;
    if (__Vdlyvset__fftmain__DOT__stage_128__DOT__omem__v0) {
        vlSelf->fftmain__DOT__stage_128__DOT__omem[__Vdlyvdim0__fftmain__DOT__stage_128__DOT__omem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_128__DOT__omem__v0;
    }
    vlSelf->fftmain__DOT__stage_128__DOT__oaddr = __Vdly__fftmain__DOT__stage_128__DOT__oaddr;
    if (__Vdlyvset__fftmain__DOT__stage_128__DOT__imem__v0) {
        vlSelf->fftmain__DOT__stage_128__DOT__imem[__Vdlyvdim0__fftmain__DOT__stage_128__DOT__imem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_128__DOT__imem__v0;
    }
    vlSelf->fftmain__DOT__stage_128__DOT__iaddr = __Vdly__fftmain__DOT__stage_128__DOT__iaddr;
    if (__Vdlyvset__fftmain__DOT__stage_256__DOT__omem__v0) {
        vlSelf->fftmain__DOT__stage_256__DOT__omem[__Vdlyvdim0__fftmain__DOT__stage_256__DOT__omem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_256__DOT__omem__v0;
    }
    vlSelf->fftmain__DOT__stage_256__DOT__oaddr = __Vdly__fftmain__DOT__stage_256__DOT__oaddr;
    if (__Vdlyvset__fftmain__DOT__stage_256__DOT__imem__v0) {
        vlSelf->fftmain__DOT__stage_256__DOT__imem[__Vdlyvdim0__fftmain__DOT__stage_256__DOT__imem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_256__DOT__imem__v0;
    }
    vlSelf->fftmain__DOT__stage_256__DOT__iaddr = __Vdly__fftmain__DOT__stage_256__DOT__iaddr;
    if (__Vdlyvset__fftmain__DOT__stage_512__DOT__omem__v0) {
        vlSelf->fftmain__DOT__stage_512__DOT__omem[__Vdlyvdim0__fftmain__DOT__stage_512__DOT__omem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_512__DOT__omem__v0;
    }
    vlSelf->fftmain__DOT__stage_512__DOT__oaddr = __Vdly__fftmain__DOT__stage_512__DOT__oaddr;
    if (__Vdlyvset__fftmain__DOT__stage_512__DOT__imem__v0) {
        vlSelf->fftmain__DOT__stage_512__DOT__imem[__Vdlyvdim0__fftmain__DOT__stage_512__DOT__imem__v0] 
            = __Vdlyvval__fftmain__DOT__stage_512__DOT__imem__v0;
    }
    vlSelf->fftmain__DOT__stage_512__DOT__iaddr = __Vdly__fftmain__DOT__stage_512__DOT__iaddr;
}

void Vfftmain___024root___eval_triggers__act(Vfftmain___024root* vlSelf);

bool Vfftmain___024root___eval_phase__act(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfftmain___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vfftmain___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfftmain___024root___eval_phase__nba(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfftmain___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfftmain___024root___dump_triggers__ico(Vfftmain___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfftmain___024root___dump_triggers__nba(Vfftmain___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfftmain___024root___dump_triggers__act(Vfftmain___024root* vlSelf);
#endif  // VL_DEBUG

void Vfftmain___024root___eval(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval\n"); );
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
            Vfftmain___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("fftmain.sv", 78, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vfftmain___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vfftmain___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fftmain.sv", 78, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vfftmain___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fftmain.sv", 78, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vfftmain___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vfftmain___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfftmain___024root___eval_debug_assertions(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_reset & 0xfeU))) {
        Verilated::overWidthError("i_reset");}
    if (VL_UNLIKELY((vlSelf->i_ce & 0xfeU))) {
        Verilated::overWidthError("i_ce");}
}
#endif  // VL_DEBUG
