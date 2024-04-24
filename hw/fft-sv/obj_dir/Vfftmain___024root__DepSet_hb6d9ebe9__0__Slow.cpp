// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfftmain.h for the primary calling header

#include "Vfftmain__pch.h"
#include "Vfftmain___024root.h"

VL_ATTR_COLD void Vfftmain___024root___eval_static(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vfftmain___024root___eval_initial__TOP(Vfftmain___024root* vlSelf);

VL_ATTR_COLD void Vfftmain___024root___eval_initial(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_initial\n"); );
    // Body
    Vfftmain___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
}

VL_ATTR_COLD void Vfftmain___024root___eval_initial__TOP(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    vlSelf->fftmain__DOT__r_br_started = 0U;
    vlSelf->o_sync = 0U;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f353132U;
    __Vtemp_1[2U] = 0x636d656dU;
    VL_READMEM_N(true, 40, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->fftmain__DOT__stage_512__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->fftmain__DOT__stage_512__DOT__wait_for_sync = 1U;
    vlSelf->fftmain__DOT__stage_512__DOT__iaddr = 0U;
    vlSelf->fftmain__DOT__stage_512__DOT__ib_sync = 0U;
    vlSelf->fftmain__DOT__stage_512__DOT__oaddr = 0U;
    vlSelf->fftmain__DOT__w_s512 = 0U;
    vlSelf->fftmain__DOT__stage_512__DOT__b_started = 0U;
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->fftmain__DOT__stage_512__DOT__ob_sync = 0U;
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x5f323536U;
    __Vtemp_2[2U] = 0x636d656dU;
    VL_READMEM_N(true, 42, 128, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelf->fftmain__DOT__stage_256__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->fftmain__DOT__stage_256__DOT__wait_for_sync = 1U;
    vlSelf->fftmain__DOT__stage_256__DOT__iaddr = 0U;
    vlSelf->fftmain__DOT__stage_256__DOT__ib_sync = 0U;
    vlSelf->fftmain__DOT__stage_256__DOT__oaddr = 0U;
    vlSelf->fftmain__DOT__w_s256 = 0U;
    vlSelf->fftmain__DOT__stage_256__DOT__b_started = 0U;
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->fftmain__DOT__stage_256__DOT__ob_sync = 0U;
    __Vtemp_3[0U] = 0x2e686578U;
    __Vtemp_3[1U] = 0x5f313238U;
    __Vtemp_3[2U] = 0x636d656dU;
    VL_READMEM_N(true, 44, 64, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_3)
                 ,  &(vlSelf->fftmain__DOT__stage_128__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->fftmain__DOT__stage_128__DOT__wait_for_sync = 1U;
    vlSelf->fftmain__DOT__stage_128__DOT__iaddr = 0U;
    vlSelf->fftmain__DOT__stage_128__DOT__ib_sync = 0U;
    vlSelf->fftmain__DOT__stage_128__DOT__oaddr = 0U;
    vlSelf->fftmain__DOT__w_s128 = 0U;
    vlSelf->fftmain__DOT__stage_128__DOT__b_started = 0U;
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->fftmain__DOT__stage_128__DOT__ob_sync = 0U;
    __Vtemp_4[0U] = 0x2e686578U;
    __Vtemp_4[1U] = 0x6d5f3634U;
    __Vtemp_4[2U] = 0x636d65U;
    VL_READMEM_N(true, 44, 32, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_4)
                 ,  &(vlSelf->fftmain__DOT__stage_64__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->fftmain__DOT__stage_64__DOT__wait_for_sync = 1U;
    vlSelf->fftmain__DOT__stage_64__DOT__iaddr = 0U;
    vlSelf->fftmain__DOT__stage_64__DOT__ib_sync = 0U;
    vlSelf->fftmain__DOT__stage_64__DOT__oaddr = 0U;
    vlSelf->fftmain__DOT__w_s64 = 0U;
    vlSelf->fftmain__DOT__stage_64__DOT__b_started = 0U;
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->fftmain__DOT__stage_64__DOT__ob_sync = 0U;
    __Vtemp_5[0U] = 0x2e686578U;
    __Vtemp_5[1U] = 0x6d5f3332U;
    __Vtemp_5[2U] = 0x636d65U;
    VL_READMEM_N(true, 46, 16, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_5)
                 ,  &(vlSelf->fftmain__DOT__stage_32__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->fftmain__DOT__stage_32__DOT__wait_for_sync = 1U;
    vlSelf->fftmain__DOT__stage_32__DOT__iaddr = 0U;
    vlSelf->fftmain__DOT__stage_32__DOT__ib_sync = 0U;
    vlSelf->fftmain__DOT__stage_32__DOT__oaddr = 0U;
    vlSelf->fftmain__DOT__w_s32 = 0U;
    vlSelf->fftmain__DOT__stage_32__DOT__b_started = 0U;
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->fftmain__DOT__stage_32__DOT__ob_sync = 0U;
    __Vtemp_6[0U] = 0x2e686578U;
    __Vtemp_6[1U] = 0x6d5f3136U;
    __Vtemp_6[2U] = 0x636d65U;
    VL_READMEM_N(true, 46, 8, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_6)
                 ,  &(vlSelf->fftmain__DOT__stage_16__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->fftmain__DOT__stage_16__DOT__wait_for_sync = 1U;
    vlSelf->fftmain__DOT__stage_16__DOT__iaddr = 0U;
    vlSelf->fftmain__DOT__stage_16__DOT__ib_sync = 0U;
    vlSelf->fftmain__DOT__stage_16__DOT__oaddr = 0U;
    vlSelf->fftmain__DOT__w_s16 = 0U;
    vlSelf->fftmain__DOT__stage_16__DOT__b_started = 0U;
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->fftmain__DOT__stage_16__DOT__ob_sync = 0U;
    __Vtemp_7[0U] = 0x2e686578U;
    __Vtemp_7[1U] = 0x656d5f38U;
    __Vtemp_7[2U] = 0x636dU;
    VL_READMEM_N(true, 48, 4, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_7)
                 ,  &(vlSelf->fftmain__DOT__stage_8__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->fftmain__DOT__stage_8__DOT__wait_for_sync = 1U;
    vlSelf->fftmain__DOT__stage_8__DOT__iaddr = 0U;
    vlSelf->fftmain__DOT__stage_8__DOT__ib_sync = 0U;
    vlSelf->fftmain__DOT__stage_8__DOT__oaddr = 0U;
    vlSelf->fftmain__DOT__w_s8 = 0U;
    vlSelf->fftmain__DOT__stage_8__DOT__b_started = 0U;
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->fftmain__DOT__stage_8__DOT__ob_sync = 0U;
    vlSelf->fftmain__DOT__stage_4__DOT__wait_for_sync = 1U;
    vlSelf->fftmain__DOT__stage_4__DOT__iaddr = 0U;
    vlSelf->fftmain__DOT__stage_4__DOT__pipeline = 0U;
    vlSelf->fftmain__DOT__w_s4 = 0U;
    vlSelf->fftmain__DOT__stage_2__DOT__wait_for_sync = 1U;
    vlSelf->fftmain__DOT__stage_2__DOT__stage = 0U;
    vlSelf->fftmain__DOT__stage_2__DOT__sync_pipe = 0U;
    vlSelf->fftmain__DOT__w_s2 = 0U;
    vlSelf->fftmain__DOT__revstage__DOT__in_reset = 1U;
    vlSelf->fftmain__DOT__revstage__DOT__wraddr = 0U;
    vlSelf->fftmain__DOT__br_sync = 0U;
}

VL_ATTR_COLD void Vfftmain___024root___eval_final(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfftmain___024root___dump_triggers__stl(Vfftmain___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfftmain___024root___eval_phase__stl(Vfftmain___024root* vlSelf);

VL_ATTR_COLD void Vfftmain___024root___eval_settle(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vfftmain___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fftmain.sv", 78, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfftmain___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfftmain___024root___dump_triggers__stl(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfftmain___024root___stl_sequent__TOP__0(Vfftmain___024root* vlSelf);

VL_ATTR_COLD void Vfftmain___024root___eval_stl(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vfftmain___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vfftmain___024root___stl_sequent__TOP__0(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___stl_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->fftmain__DOT____Vcellinp__revstage__i_ce 
        = ((IData)(vlSelf->i_ce) & ((IData)(vlSelf->fftmain__DOT__r_br_started) 
                                    | (IData)(vlSelf->fftmain__DOT__w_s2)));
}

VL_ATTR_COLD void Vfftmain___024root___eval_triggers__stl(Vfftmain___024root* vlSelf);

VL_ATTR_COLD bool Vfftmain___024root___eval_phase__stl(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfftmain___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vfftmain___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfftmain___024root___dump_triggers__ico(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfftmain___024root___dump_triggers__act(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfftmain___024root___dump_triggers__nba(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfftmain___024root___ctor_var_reset(Vfftmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_reset = VL_RAND_RESET_I(1);
    vlSelf->i_ce = VL_RAND_RESET_I(1);
    vlSelf->i_sample = VL_RAND_RESET_I(32);
    vlSelf->o_result = VL_RAND_RESET_Q(42);
    vlSelf->o_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__br_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__br_result = VL_RAND_RESET_Q(42);
    vlSelf->fftmain__DOT__w_s512 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__w_d512 = VL_RAND_RESET_Q(34);
    vlSelf->fftmain__DOT__w_s256 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__w_d256 = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__w_s128 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__w_d128 = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__w_s64 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__w_d64 = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__w_s32 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__w_d32 = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__w_s16 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__w_d16 = VL_RAND_RESET_Q(40);
    vlSelf->fftmain__DOT__w_s8 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__w_d8 = VL_RAND_RESET_Q(40);
    vlSelf->fftmain__DOT__w_s4 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__w_d4 = VL_RAND_RESET_Q(42);
    vlSelf->fftmain__DOT__w_s2 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__r_br_started = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT____Vcellinp__revstage__i_ce = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_512__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_512__DOT__ib_a = VL_RAND_RESET_I(32);
    vlSelf->fftmain__DOT__stage_512__DOT__ib_b = VL_RAND_RESET_I(32);
    vlSelf->fftmain__DOT__stage_512__DOT__ib_c = VL_RAND_RESET_Q(40);
    vlSelf->fftmain__DOT__stage_512__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_512__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_512__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_512__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->fftmain__DOT__stage_512__DOT__iaddr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_512__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->fftmain__DOT__stage_512__DOT__oaddr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_512__DOT__omem[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->fftmain__DOT__stage_512__DOT__nxt_oaddr = VL_RAND_RESET_I(8);
    vlSelf->fftmain__DOT__stage_512__DOT__pre_ovalue = VL_RAND_RESET_Q(34);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_I(32);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_I(32);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(40);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(17);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(17);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(17);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(17);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(35);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(35);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(35);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(17);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(17);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(17);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(17);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(17);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(17);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(37);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(37);
    vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_256__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_256__DOT__ib_a = VL_RAND_RESET_Q(34);
    vlSelf->fftmain__DOT__stage_256__DOT__ib_b = VL_RAND_RESET_Q(34);
    vlSelf->fftmain__DOT__stage_256__DOT__ib_c = VL_RAND_RESET_Q(42);
    vlSelf->fftmain__DOT__stage_256__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_256__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_256__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_256__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(42);
    }
    vlSelf->fftmain__DOT__stage_256__DOT__iaddr = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_256__DOT__imem[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->fftmain__DOT__stage_256__DOT__oaddr = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_256__DOT__omem[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->fftmain__DOT__stage_256__DOT__nxt_oaddr = VL_RAND_RESET_I(7);
    vlSelf->fftmain__DOT__stage_256__DOT__pre_ovalue = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(34);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(34);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(42);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(37);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(37);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(37);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_128__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_128__DOT__ib_a = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__stage_128__DOT__ib_b = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__stage_128__DOT__ib_c = VL_RAND_RESET_Q(44);
    vlSelf->fftmain__DOT__stage_128__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_128__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_128__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_128__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->fftmain__DOT__stage_128__DOT__iaddr = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_128__DOT__imem[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->fftmain__DOT__stage_128__DOT__oaddr = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_128__DOT__omem[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->fftmain__DOT__stage_128__DOT__nxt_oaddr = VL_RAND_RESET_I(6);
    vlSelf->fftmain__DOT__stage_128__DOT__pre_ovalue = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(44);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(18);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(23);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_64__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_64__DOT__ib_a = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__stage_64__DOT__ib_b = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__stage_64__DOT__ib_c = VL_RAND_RESET_Q(44);
    vlSelf->fftmain__DOT__stage_64__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_64__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_64__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_64__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->fftmain__DOT__stage_64__DOT__iaddr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_64__DOT__imem[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->fftmain__DOT__stage_64__DOT__oaddr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_64__DOT__omem[__Vi0] = VL_RAND_RESET_Q(38);
    }
    vlSelf->fftmain__DOT__stage_64__DOT__nxt_oaddr = VL_RAND_RESET_I(5);
    vlSelf->fftmain__DOT__stage_64__DOT__pre_ovalue = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(36);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(44);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(39);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(23);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_32__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_32__DOT__ib_a = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__stage_32__DOT__ib_b = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__stage_32__DOT__ib_c = VL_RAND_RESET_Q(46);
    vlSelf->fftmain__DOT__stage_32__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_32__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_32__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_32__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(46);
    }
    vlSelf->fftmain__DOT__stage_32__DOT__iaddr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_32__DOT__imem[__Vi0] = VL_RAND_RESET_Q(38);
    }
    vlSelf->fftmain__DOT__stage_32__DOT__oaddr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_32__DOT__omem[__Vi0] = VL_RAND_RESET_Q(38);
    }
    vlSelf->fftmain__DOT__stage_32__DOT__nxt_oaddr = VL_RAND_RESET_I(4);
    vlSelf->fftmain__DOT__stage_32__DOT__pre_ovalue = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(46);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(23);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(23);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(19);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(23);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(23);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(24);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_16__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_16__DOT__ib_a = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__stage_16__DOT__ib_b = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__stage_16__DOT__ib_c = VL_RAND_RESET_Q(46);
    vlSelf->fftmain__DOT__stage_16__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_16__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_16__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_16__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(46);
    }
    vlSelf->fftmain__DOT__stage_16__DOT__iaddr = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_16__DOT__imem[__Vi0] = VL_RAND_RESET_Q(38);
    }
    vlSelf->fftmain__DOT__stage_16__DOT__oaddr = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_16__DOT__omem[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->fftmain__DOT__stage_16__DOT__nxt_oaddr = VL_RAND_RESET_I(3);
    vlSelf->fftmain__DOT__stage_16__DOT__pre_ovalue = VL_RAND_RESET_Q(40);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(38);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(46);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(23);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(23);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(41);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(23);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(23);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(24);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_8__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_8__DOT__ib_a = VL_RAND_RESET_Q(40);
    vlSelf->fftmain__DOT__stage_8__DOT__ib_b = VL_RAND_RESET_Q(40);
    vlSelf->fftmain__DOT__stage_8__DOT__ib_c = VL_RAND_RESET_Q(48);
    vlSelf->fftmain__DOT__stage_8__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_8__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_8__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_8__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->fftmain__DOT__stage_8__DOT__iaddr = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_8__DOT__imem[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->fftmain__DOT__stage_8__DOT__oaddr = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_8__DOT__omem[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->fftmain__DOT__stage_8__DOT__nxt_oaddr = VL_RAND_RESET_I(2);
    vlSelf->fftmain__DOT__stage_8__DOT__pre_ovalue = VL_RAND_RESET_Q(40);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(40);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(40);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(48);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(24);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(24);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(47);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(47);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(43);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(47);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(47);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(20);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(24);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(24);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(25);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(45);
    vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(47);
    vlSelf->fftmain__DOT__stage_4__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_4__DOT__pipeline = VL_RAND_RESET_I(3);
    vlSelf->fftmain__DOT__stage_4__DOT__sum_r = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_4__DOT__sum_i = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_4__DOT__diff_r = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_4__DOT__diff_i = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_4__DOT__ob_a = VL_RAND_RESET_Q(42);
    vlSelf->fftmain__DOT__stage_4__DOT__ob_b_r = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_4__DOT__ob_b_i = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_4__DOT__iaddr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_4__DOT__imem[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->fftmain__DOT__stage_4__DOT__omem[__Vi0] = VL_RAND_RESET_Q(42);
    }
    vlSelf->fftmain__DOT__stage_4__DOT__rnd_sum_r = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_4__DOT__rnd_sum_i = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_r = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_i = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_2__DOT__m_r = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_2__DOT__m_i = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_2__DOT__rnd_r = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_2__DOT__rnd_i = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_2__DOT__sto_r = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_2__DOT__sto_i = VL_RAND_RESET_I(22);
    vlSelf->fftmain__DOT__stage_2__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_2__DOT__stage = VL_RAND_RESET_I(1);
    vlSelf->fftmain__DOT__stage_2__DOT__sync_pipe = VL_RAND_RESET_I(2);
    vlSelf->fftmain__DOT__stage_2__DOT__o_r = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__stage_2__DOT__o_i = VL_RAND_RESET_I(21);
    vlSelf->fftmain__DOT__revstage__DOT__wraddr = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->fftmain__DOT__revstage__DOT__brmem[__Vi0] = VL_RAND_RESET_Q(42);
    }
    vlSelf->fftmain__DOT__revstage__DOT__in_reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
