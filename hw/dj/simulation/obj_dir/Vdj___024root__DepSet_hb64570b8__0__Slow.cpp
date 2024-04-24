// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdj.h for the primary calling header

#include "Vdj__pch.h"
#include "Vdj___024root.h"

VL_ATTR_COLD void Vdj___024root___eval_static(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdj___024root___eval_initial__TOP(Vdj___024root* vlSelf);

VL_ATTR_COLD void Vdj___024root___eval_initial(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___eval_initial\n"); );
    // Body
    Vdj___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk_clk__0 = vlSelf->clk_clk;
    vlSelf->__Vtrigprevexpr___TOP__dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out__0 
        = vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out;
    vlSelf->__Vtrigprevexpr___TOP__dj__DOT__rst_controller__DOT__merged_reset__0 
        = vlSelf->dj__DOT__rst_controller__DOT__merged_reset;
}

VL_ATTR_COLD void Vdj___024root___eval_initial__TOP(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    // Body
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__r_br_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft_o_sync = 0U;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f353132U;
    __Vtemp_1[2U] = 0x636d656dU;
    VL_READMEM_N(true, 40, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s512 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ob_sync = 0U;
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x5f323536U;
    __Vtemp_2[2U] = 0x636d656dU;
    VL_READMEM_N(true, 42, 128, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s256 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ob_sync = 0U;
    __Vtemp_3[0U] = 0x2e686578U;
    __Vtemp_3[1U] = 0x5f313238U;
    __Vtemp_3[2U] = 0x636d656dU;
    VL_READMEM_N(true, 44, 64, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_3)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s128 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ob_sync = 0U;
    __Vtemp_4[0U] = 0x2e686578U;
    __Vtemp_4[1U] = 0x6d5f3634U;
    __Vtemp_4[2U] = 0x636d65U;
    VL_READMEM_N(true, 44, 32, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_4)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s64 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ob_sync = 0U;
    __Vtemp_5[0U] = 0x2e686578U;
    __Vtemp_5[1U] = 0x6d5f3332U;
    __Vtemp_5[2U] = 0x636d65U;
    VL_READMEM_N(true, 46, 16, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_5)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s32 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ob_sync = 0U;
    __Vtemp_6[0U] = 0x2e686578U;
    __Vtemp_6[1U] = 0x6d5f3136U;
    __Vtemp_6[2U] = 0x636d65U;
    VL_READMEM_N(true, 46, 8, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_6)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s16 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ob_sync = 0U;
    __Vtemp_7[0U] = 0x2e686578U;
    __Vtemp_7[1U] = 0x656d5f38U;
    __Vtemp_7[2U] = 0x636dU;
    VL_READMEM_N(true, 48, 4, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_7)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s8 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ob_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__pipeline = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s4 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__stage = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__sync_pipe = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__in_reset = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__br_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__r_br_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft_o_sync = 0U;
    __Vtemp_8[0U] = 0x2e686578U;
    __Vtemp_8[1U] = 0x5f353132U;
    __Vtemp_8[2U] = 0x636d656dU;
    __Vtemp_8[3U] = 0x69U;
    VL_READMEM_N(true, 50, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_8)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s512 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ob_sync = 0U;
    __Vtemp_9[0U] = 0x2e686578U;
    __Vtemp_9[1U] = 0x5f323536U;
    __Vtemp_9[2U] = 0x636d656dU;
    __Vtemp_9[3U] = 0x69U;
    VL_READMEM_N(true, 52, 128, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_9)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s256 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ob_sync = 0U;
    __Vtemp_10[0U] = 0x2e686578U;
    __Vtemp_10[1U] = 0x5f313238U;
    __Vtemp_10[2U] = 0x636d656dU;
    __Vtemp_10[3U] = 0x69U;
    VL_READMEM_N(true, 54, 64, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_10)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s128 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ob_sync = 0U;
    __Vtemp_11[0U] = 0x2e686578U;
    __Vtemp_11[1U] = 0x6d5f3634U;
    __Vtemp_11[2U] = 0x69636d65U;
    VL_READMEM_N(true, 54, 32, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_11)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s64 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ob_sync = 0U;
    __Vtemp_12[0U] = 0x2e686578U;
    __Vtemp_12[1U] = 0x6d5f3332U;
    __Vtemp_12[2U] = 0x69636d65U;
    VL_READMEM_N(true, 56, 16, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_12)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s32 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ob_sync = 0U;
    __Vtemp_13[0U] = 0x2e686578U;
    __Vtemp_13[1U] = 0x6d5f3136U;
    __Vtemp_13[2U] = 0x69636d65U;
    VL_READMEM_N(true, 56, 8, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_13)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s16 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ob_sync = 0U;
    __Vtemp_14[0U] = 0x2e686578U;
    __Vtemp_14[1U] = 0x656d5f38U;
    __Vtemp_14[2U] = 0x69636dU;
    VL_READMEM_N(true, 58, 4, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_14)
                 ,  &(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__cmem)
                 , 0, ~0ULL);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__oaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s8 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__b_started = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved = 0ULL;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ob_sync = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__iaddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__pipeline = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s4 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__stage = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s2 = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__in_reset = 1U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr = 0U;
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__br_sync = 0U;
}

VL_ATTR_COLD void Vdj___024root___eval_final(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdj___024root___dump_triggers__stl(Vdj___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdj___024root___eval_phase__stl(Vdj___024root* vlSelf);

VL_ATTR_COLD void Vdj___024root___eval_settle(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___eval_settle\n"); );
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
            Vdj___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dj.v", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdj___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdj___024root___dump_triggers__stl(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdj___024root___stl_sequent__TOP__0(Vdj___024root* vlSelf);

VL_ATTR_COLD void Vdj___024root___eval_stl(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdj___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vdj___024root___stl_sequent__TOP__0(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ dj__DOT__codec_left_fifo__DOT____VdfgExtracted_h097e834f__0;
    dj__DOT__codec_left_fifo__DOT____VdfgExtracted_h097e834f__0 = 0;
    CData/*0:0*/ dj__DOT__codec_left_fifo__DOT____VdfgExtracted_h7a3444c0__0;
    dj__DOT__codec_left_fifo__DOT____VdfgExtracted_h7a3444c0__0 = 0;
    CData/*0:0*/ dj__DOT__codec_right_fifo__DOT____VdfgExtracted_h097e834f__0;
    dj__DOT__codec_right_fifo__DOT____VdfgExtracted_h097e834f__0 = 0;
    CData/*0:0*/ dj__DOT__codec_right_fifo__DOT____VdfgExtracted_h7a3444c0__0;
    dj__DOT__codec_right_fifo__DOT____VdfgExtracted_h7a3444c0__0 = 0;
    CData/*0:0*/ dj__DOT__left_sc_fifo__DOT____VdfgExtracted_h097e834f__0;
    dj__DOT__left_sc_fifo__DOT____VdfgExtracted_h097e834f__0 = 0;
    CData/*0:0*/ dj__DOT__left_sc_fifo__DOT____VdfgExtracted_h7a3444c0__0;
    dj__DOT__left_sc_fifo__DOT____VdfgExtracted_h7a3444c0__0 = 0;
    CData/*0:0*/ dj__DOT__right_sc_fifo__DOT____VdfgExtracted_h097e834f__0;
    dj__DOT__right_sc_fifo__DOT____VdfgExtracted_h097e834f__0 = 0;
    CData/*0:0*/ dj__DOT__right_sc_fifo__DOT____VdfgExtracted_h7a3444c0__0;
    dj__DOT__right_sc_fifo__DOT____VdfgExtracted_h7a3444c0__0 = 0;
    // Body
    vlSelf->dj__DOT__rst_controller__DOT__merged_reset 
        = (1U & (~ (IData)(vlSelf->reset_reset_n)));
    vlSelf->dj__DOT__dj_0__DOT__right_ifft_o_result 
        = ((0xffc0003ffffffULL & vlSelf->dj__DOT__dj_0__DOT__right_ifft_o_result) 
           | ((QData)((IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__out_payload)) 
              << 0x1aU));
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x24U)))))))) 
            << 0x25U) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x24U)))))))) 
            << 0x25U) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x26U)))))))) 
            << 0x27U) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x26U)))))))) 
            << 0x27U) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x28U)))))))) 
            << 0x29U) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x2aU)))))))) 
            << 0x2bU) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x2cU)))))))) 
            << 0x2dU) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x2cU)))))))) 
            << 0x2dU) | vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x2eU)))))))) 
            << 0x2fU) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x2eU)))))))) 
            << 0x2fU) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x30U)))))))) 
            << 0x31U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x30U)))))))) 
            << 0x31U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x32U)))))))) 
            << 0x33U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x32U)))))))) 
            << 0x33U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x32U)))))))) 
            << 0x33U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x32U)))))))) 
            << 0x33U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x34U)))))))) 
            << 0x35U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x34U)))))))) 
            << 0x35U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x34U)))))))) 
            << 0x35U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x34U)))))))) 
            << 0x35U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one 
                                                            >> 0x36U)))))))) 
            << 0x37U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two 
                                                            >> 0x36U)))))))) 
            << 0x37U) | vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two);
    vlSelf->dj__DOT__codec_left_fifo__DOT__fill_level 
        = (0x7ffU & ((IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__fifo_fill_level) 
                     + (IData)(vlSelf->dj__DOT__codec_left_fifo_out_valid)));
    vlSelf->dj__DOT__codec_right_fifo__DOT__fill_level 
        = (0x7ffU & ((IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__fifo_fill_level) 
                     + (IData)(vlSelf->dj__DOT__codec_right_fifo_out_valid)));
    vlSelf->dj__DOT__left_sc_fifo__DOT__fill_level 
        = (0x7ffU & ((IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__fifo_fill_level) 
                     + (IData)(vlSelf->dj__DOT__left_sc_fifo_out_valid)));
    vlSelf->dj__DOT__right_sc_fifo__DOT__fill_level 
        = (0x7ffU & ((IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__fifo_fill_level) 
                     + (IData)(vlSelf->dj__DOT__right_sc_fifo_out_valid)));
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT____Vcellinp__revstage__i_ce 
        = ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce) 
           & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__r_br_started) 
              | (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s2)));
    vlSelf->dj__DOT__dj_0_left_fifo_sink_valid = ((~ (IData)(vlSelf->dj_0_avalon_slave_0_address)) 
                                                  & (IData)(vlSelf->dj_0_avalon_slave_0_write));
    vlSelf->dj__DOT__dj_0_right_fifo_sink_valid = ((IData)(vlSelf->dj_0_avalon_slave_0_address) 
                                                   & (IData)(vlSelf->dj_0_avalon_slave_0_write));
    vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_ready 
        = (1U & ((~ (IData)(vlSelf->dj__DOT__codec_left_fifo_out_valid)) 
                 | (0U == (IData)(vlSelf->dj__DOT__dj_0__DOT__ctr))));
    vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_ready 
        = (1U & ((~ (IData)(vlSelf->dj__DOT__codec_right_fifo_out_valid)) 
                 | (0U == (IData)(vlSelf->dj__DOT__dj_0__DOT__ctr))));
    vlSelf->dj__DOT__dj_0_codec_right_fifo_sink_valid 
        = ((~ (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__full)) 
           & (IData)(vlSelf->dj__DOT__right_sc_fifo_out_valid));
    vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid 
        = ((~ (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__full)) 
           & (IData)(vlSelf->dj__DOT__left_sc_fifo_out_valid));
    vlSelf->dj__DOT__left_sc_fifo__DOT__write = ((~ (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__full)) 
                                                 & (IData)(vlSelf->dj__DOT__dj_0_left_fifo_sink_valid));
    vlSelf->dj__DOT__right_sc_fifo__DOT__write = ((~ (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__full)) 
                                                  & (IData)(vlSelf->dj__DOT__dj_0_right_fifo_sink_valid));
    vlSelf->dj__DOT__codec_left_fifo__DOT__read = ((IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_ready) 
                                                   & (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_valid));
    vlSelf->dj__DOT__codec_right_fifo__DOT__read = 
        ((IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_ready) 
         & (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_valid));
    vlSelf->dj__DOT__codec_right_fifo__DOT__write = 
        ((~ (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__full)) 
         & (IData)(vlSelf->dj__DOT__dj_0_codec_right_fifo_sink_valid));
    vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_ready 
        = (1U & ((~ (IData)(vlSelf->dj__DOT__right_sc_fifo_out_valid)) 
                 | (IData)(vlSelf->dj__DOT__dj_0_codec_right_fifo_sink_valid)));
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT____Vcellinp__revstage__i_ce 
        = ((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
           & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__r_br_started) 
              | (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s2)));
    vlSelf->dj__DOT__codec_left_fifo__DOT__write = 
        ((~ (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__full)) 
         & (IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid));
    vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_ready 
        = (1U & ((~ (IData)(vlSelf->dj__DOT__left_sc_fifo_out_valid)) 
                 | (IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid)));
    vlSelf->dj__DOT__left_sc_fifo__DOT__next_wr_ptr 
        = (0x3ffU & ((IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__wr_ptr) 
                     + (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__write)));
    vlSelf->dj__DOT__right_sc_fifo__DOT__next_wr_ptr 
        = (0x3ffU & ((IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__wr_ptr) 
                     + (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__write)));
    vlSelf->dj__DOT__codec_left_fifo__DOT__next_rd_ptr 
        = (0x3ffU & ((IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__rd_ptr) 
                     + (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__read)));
    vlSelf->dj__DOT__codec_right_fifo__DOT__next_rd_ptr 
        = (0x3ffU & ((IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__rd_ptr) 
                     + (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__read)));
    vlSelf->dj__DOT__codec_right_fifo__DOT__next_wr_ptr 
        = (0x3ffU & ((IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__wr_ptr) 
                     + (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__write)));
    dj__DOT__codec_right_fifo__DOT____VdfgExtracted_h097e834f__0 
        = ((~ (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__write)) 
           & (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__read));
    dj__DOT__codec_right_fifo__DOT____VdfgExtracted_h7a3444c0__0 
        = ((~ (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__read)) 
           & (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__write));
    vlSelf->dj__DOT__right_sc_fifo__DOT__read = ((IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_ready) 
                                                 & (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_valid));
    vlSelf->dj__DOT__codec_left_fifo__DOT__next_wr_ptr 
        = (0x3ffU & ((IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__wr_ptr) 
                     + (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__write)));
    dj__DOT__codec_left_fifo__DOT____VdfgExtracted_h097e834f__0 
        = ((~ (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__write)) 
           & (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__read));
    dj__DOT__codec_left_fifo__DOT____VdfgExtracted_h7a3444c0__0 
        = ((~ (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__read)) 
           & (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__write));
    vlSelf->dj__DOT__left_sc_fifo__DOT__read = ((IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_ready) 
                                                & (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_valid));
    vlSelf->dj__DOT__codec_right_fifo__DOT__next_full 
        = vlSelf->dj__DOT__codec_right_fifo__DOT__full;
    if (dj__DOT__codec_right_fifo__DOT____VdfgExtracted_h097e834f__0) {
        vlSelf->dj__DOT__codec_right_fifo__DOT__next_full = 0U;
        vlSelf->dj__DOT__codec_right_fifo__DOT__next_empty 
            = vlSelf->dj__DOT__codec_right_fifo__DOT__empty;
        if (((0x3ffU & ((IData)(1U) + (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__rd_ptr))) 
             == (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__wr_ptr))) {
            vlSelf->dj__DOT__codec_right_fifo__DOT__next_empty = 1U;
        }
    } else {
        vlSelf->dj__DOT__codec_right_fifo__DOT__next_empty 
            = vlSelf->dj__DOT__codec_right_fifo__DOT__empty;
    }
    if (dj__DOT__codec_right_fifo__DOT____VdfgExtracted_h7a3444c0__0) {
        if (((0x3ffU & ((IData)(1U) + (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__wr_ptr))) 
             == (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__rd_ptr))) {
            vlSelf->dj__DOT__codec_right_fifo__DOT__next_full = 1U;
        }
        vlSelf->dj__DOT__codec_right_fifo__DOT__next_empty = 0U;
    }
    vlSelf->dj__DOT__right_sc_fifo__DOT__next_rd_ptr 
        = (0x3ffU & ((IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__rd_ptr) 
                     + (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__read)));
    dj__DOT__right_sc_fifo__DOT____VdfgExtracted_h097e834f__0 
        = ((~ (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__write)) 
           & (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__read));
    dj__DOT__right_sc_fifo__DOT____VdfgExtracted_h7a3444c0__0 
        = ((~ (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__read)) 
           & (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__write));
    vlSelf->dj__DOT__codec_left_fifo__DOT__next_full 
        = vlSelf->dj__DOT__codec_left_fifo__DOT__full;
    if (dj__DOT__codec_left_fifo__DOT____VdfgExtracted_h097e834f__0) {
        vlSelf->dj__DOT__codec_left_fifo__DOT__next_full = 0U;
        vlSelf->dj__DOT__codec_left_fifo__DOT__next_empty 
            = vlSelf->dj__DOT__codec_left_fifo__DOT__empty;
        if (((0x3ffU & ((IData)(1U) + (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__rd_ptr))) 
             == (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__wr_ptr))) {
            vlSelf->dj__DOT__codec_left_fifo__DOT__next_empty = 1U;
        }
    } else {
        vlSelf->dj__DOT__codec_left_fifo__DOT__next_empty 
            = vlSelf->dj__DOT__codec_left_fifo__DOT__empty;
    }
    if (dj__DOT__codec_left_fifo__DOT____VdfgExtracted_h7a3444c0__0) {
        if (((0x3ffU & ((IData)(1U) + (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__wr_ptr))) 
             == (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__rd_ptr))) {
            vlSelf->dj__DOT__codec_left_fifo__DOT__next_full = 1U;
        }
        vlSelf->dj__DOT__codec_left_fifo__DOT__next_empty = 0U;
    }
    vlSelf->dj__DOT__left_sc_fifo__DOT__next_rd_ptr 
        = (0x3ffU & ((IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__rd_ptr) 
                     + (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__read)));
    dj__DOT__left_sc_fifo__DOT____VdfgExtracted_h097e834f__0 
        = ((~ (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__write)) 
           & (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__read));
    dj__DOT__left_sc_fifo__DOT____VdfgExtracted_h7a3444c0__0 
        = ((~ (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__read)) 
           & (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__write));
    vlSelf->dj__DOT__right_sc_fifo__DOT__next_full 
        = vlSelf->dj__DOT__right_sc_fifo__DOT__full;
    if (dj__DOT__right_sc_fifo__DOT____VdfgExtracted_h097e834f__0) {
        vlSelf->dj__DOT__right_sc_fifo__DOT__next_full = 0U;
        vlSelf->dj__DOT__right_sc_fifo__DOT__next_empty 
            = vlSelf->dj__DOT__right_sc_fifo__DOT__empty;
        if (((0x3ffU & ((IData)(1U) + (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__rd_ptr))) 
             == (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__wr_ptr))) {
            vlSelf->dj__DOT__right_sc_fifo__DOT__next_empty = 1U;
        }
    } else {
        vlSelf->dj__DOT__right_sc_fifo__DOT__next_empty 
            = vlSelf->dj__DOT__right_sc_fifo__DOT__empty;
    }
    if (dj__DOT__right_sc_fifo__DOT____VdfgExtracted_h7a3444c0__0) {
        if (((0x3ffU & ((IData)(1U) + (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__wr_ptr))) 
             == (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__rd_ptr))) {
            vlSelf->dj__DOT__right_sc_fifo__DOT__next_full = 1U;
        }
        vlSelf->dj__DOT__right_sc_fifo__DOT__next_empty = 0U;
    }
    vlSelf->dj__DOT__left_sc_fifo__DOT__next_full = vlSelf->dj__DOT__left_sc_fifo__DOT__full;
    if (dj__DOT__left_sc_fifo__DOT____VdfgExtracted_h097e834f__0) {
        vlSelf->dj__DOT__left_sc_fifo__DOT__next_full = 0U;
        vlSelf->dj__DOT__left_sc_fifo__DOT__next_empty 
            = vlSelf->dj__DOT__left_sc_fifo__DOT__empty;
        if (((0x3ffU & ((IData)(1U) + (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__rd_ptr))) 
             == (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__wr_ptr))) {
            vlSelf->dj__DOT__left_sc_fifo__DOT__next_empty = 1U;
        }
    } else {
        vlSelf->dj__DOT__left_sc_fifo__DOT__next_empty 
            = vlSelf->dj__DOT__left_sc_fifo__DOT__empty;
    }
    if (dj__DOT__left_sc_fifo__DOT____VdfgExtracted_h7a3444c0__0) {
        if (((0x3ffU & ((IData)(1U) + (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__wr_ptr))) 
             == (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__rd_ptr))) {
            vlSelf->dj__DOT__left_sc_fifo__DOT__next_full = 1U;
        }
        vlSelf->dj__DOT__left_sc_fifo__DOT__next_empty = 0U;
    }
}

VL_ATTR_COLD void Vdj___024root___eval_triggers__stl(Vdj___024root* vlSelf);

VL_ATTR_COLD bool Vdj___024root___eval_phase__stl(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdj___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vdj___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdj___024root___dump_triggers__ico(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vdj___024root___dump_triggers__act(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk_clk or posedge dj.rst_controller.genblk1.alt_rst_sync_uq1.altera_reset_synchronizer_int_chain_out)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk_clk or posedge dj.rst_controller.merged_reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdj___024root___dump_triggers__nba(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk_clk or posedge dj.rst_controller.genblk1.alt_rst_sync_uq1.altera_reset_synchronizer_int_chain_out)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk_clk or posedge dj.rst_controller.merged_reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdj___024root___ctor_var_reset(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_clk = VL_RAND_RESET_I(1);
    vlSelf->dj_0_avalon_slave_0_writedata = VL_RAND_RESET_I(16);
    vlSelf->dj_0_avalon_slave_0_write = VL_RAND_RESET_I(1);
    vlSelf->dj_0_avalon_slave_0_read = VL_RAND_RESET_I(1);
    vlSelf->dj_0_avalon_slave_0_readdata = VL_RAND_RESET_I(16);
    vlSelf->dj_0_avalon_slave_0_address = VL_RAND_RESET_I(1);
    vlSelf->dj_0_left_stream_interrupt_irq = VL_RAND_RESET_I(1);
    vlSelf->dj_0_right_stream_interrupt_irq = VL_RAND_RESET_I(1);
    vlSelf->reset_reset_n = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0_codec_right_fifo_sink_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0_left_fifo_sink_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo_out_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo_out_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo_out_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo_out_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0_right_fifo_sink_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft_o_result = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__left_fft_o_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft_i_reset = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft_o_result = VL_RAND_RESET_Q(52);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft_o_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_sample = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__right_fft_o_result = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__right_fft_o_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__right_ifft_i_ce = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__right_ifft_i_sample = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__right_ifft_i_reset = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__right_ifft_o_result = VL_RAND_RESET_Q(52);
    vlSelf->dj__DOT__dj_0__DOT__right_ifft_o_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__right_lpf_cutoff = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__dj_0__DOT__right_lpf_o_ce = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__right_lpf_o_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__right_lpf_o_sample = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__left_r_syncd = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__right_r_syncd = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__ctr = VL_RAND_RESET_I(3);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__br_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__br_result = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s512 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d512 = VL_RAND_RESET_Q(34);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s256 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d256 = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s128 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d128 = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s64 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d64 = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s32 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d32 = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s16 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d16 = VL_RAND_RESET_Q(40);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s8 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d8 = VL_RAND_RESET_Q(40);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s4 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d4 = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__r_br_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT____Vcellinp__revstage__i_ce = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_a = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_b = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_c = VL_RAND_RESET_Q(40);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__iaddr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__oaddr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__omem[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__nxt_oaddr = VL_RAND_RESET_I(8);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__pre_ovalue = VL_RAND_RESET_Q(34);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(40);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(17);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(17);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(17);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(17);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(35);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(35);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(35);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(17);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(17);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(17);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(17);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(17);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(17);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(37);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(37);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_a = VL_RAND_RESET_Q(34);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_b = VL_RAND_RESET_Q(34);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_c = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(42);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__iaddr = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__imem[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__oaddr = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__omem[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__nxt_oaddr = VL_RAND_RESET_I(7);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__pre_ovalue = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(34);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(34);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(37);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(37);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(37);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_a = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_b = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_c = VL_RAND_RESET_Q(44);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__iaddr = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__imem[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__oaddr = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__omem[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__nxt_oaddr = VL_RAND_RESET_I(6);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__pre_ovalue = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(44);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(18);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_a = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_b = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_c = VL_RAND_RESET_Q(44);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__iaddr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__oaddr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[__Vi0] = VL_RAND_RESET_Q(38);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__nxt_oaddr = VL_RAND_RESET_I(5);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__pre_ovalue = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(36);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(44);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(39);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_a = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_b = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_c = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(46);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__iaddr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[__Vi0] = VL_RAND_RESET_Q(38);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__oaddr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[__Vi0] = VL_RAND_RESET_Q(38);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__nxt_oaddr = VL_RAND_RESET_I(4);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__pre_ovalue = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(19);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_a = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_b = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_c = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(46);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__iaddr = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[__Vi0] = VL_RAND_RESET_Q(38);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__oaddr = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__nxt_oaddr = VL_RAND_RESET_I(3);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__pre_ovalue = VL_RAND_RESET_Q(40);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(38);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(41);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_a = VL_RAND_RESET_Q(40);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_b = VL_RAND_RESET_Q(40);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_c = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__iaddr = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__imem[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__oaddr = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__omem[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__nxt_oaddr = VL_RAND_RESET_I(2);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__pre_ovalue = VL_RAND_RESET_Q(40);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(40);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(40);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(47);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(47);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(43);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(47);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(47);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(20);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(47);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__pipeline = VL_RAND_RESET_I(3);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__sum_r = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__sum_i = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__diff_r = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__diff_i = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_a = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_b_r = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_b_i = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__iaddr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__imem[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__omem[__Vi0] = VL_RAND_RESET_Q(42);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_sum_r = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_sum_i = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_r = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_i = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__m_r = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__m_i = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_r = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_i = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__sto_r = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__sto_i = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__stage = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__sync_pipe = VL_RAND_RESET_I(2);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__o_r = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__o_i = VL_RAND_RESET_I(21);
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__brmem[__Vi0] = VL_RAND_RESET_Q(42);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__in_reset = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_lpf__DOT__bin_idx = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__br_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__br_result = VL_RAND_RESET_Q(52);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s512 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d512 = VL_RAND_RESET_Q(44);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s256 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d256 = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s128 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d128 = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s64 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d64 = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s32 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d32 = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s16 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d16 = VL_RAND_RESET_Q(50);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s8 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d8 = VL_RAND_RESET_Q(50);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s4 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d4 = VL_RAND_RESET_Q(52);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__r_br_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT____Vcellinp__revstage__i_ce = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_a = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_b = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_c = VL_RAND_RESET_Q(50);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(50);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__iaddr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__imem[__Vi0] = VL_RAND_RESET_Q(42);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__oaddr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__omem[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__nxt_oaddr = VL_RAND_RESET_I(8);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__pre_ovalue = VL_RAND_RESET_Q(44);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(42);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(50);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(45);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(22);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(47);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(47);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_a = VL_RAND_RESET_Q(44);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_b = VL_RAND_RESET_Q(44);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_c = VL_RAND_RESET_Q(52);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__iaddr = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__imem[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__oaddr = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__omem[__Vi0] = VL_RAND_RESET_Q(46);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__nxt_oaddr = VL_RAND_RESET_I(7);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__pre_ovalue = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(44);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(44);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(52);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(47);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(47);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(47);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_a = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_b = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_c = VL_RAND_RESET_Q(54);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(54);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__iaddr = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__imem[__Vi0] = VL_RAND_RESET_Q(46);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__oaddr = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__omem[__Vi0] = VL_RAND_RESET_Q(46);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__nxt_oaddr = VL_RAND_RESET_I(6);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__pre_ovalue = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(54);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(23);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(28);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_a = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_b = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_c = VL_RAND_RESET_Q(54);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(54);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__iaddr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[__Vi0] = VL_RAND_RESET_Q(46);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__oaddr = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__nxt_oaddr = VL_RAND_RESET_I(5);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__pre_ovalue = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(46);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(54);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(49);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(28);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_a = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_b = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_c = VL_RAND_RESET_Q(56);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__iaddr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__oaddr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__nxt_oaddr = VL_RAND_RESET_I(4);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__pre_ovalue = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(56);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(28);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(28);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(28);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(28);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(29);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_a = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_b = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_c = VL_RAND_RESET_Q(56);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__iaddr = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__oaddr = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[__Vi0] = VL_RAND_RESET_Q(50);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__nxt_oaddr = VL_RAND_RESET_I(3);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__pre_ovalue = VL_RAND_RESET_Q(50);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(48);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(56);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(28);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(28);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(51);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(28);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(28);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(29);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_a = VL_RAND_RESET_Q(50);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_b = VL_RAND_RESET_Q(50);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_c = VL_RAND_RESET_Q(58);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__b_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ob_sync = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__cmem[__Vi0] = VL_RAND_RESET_Q(58);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__iaddr = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__imem[__Vi0] = VL_RAND_RESET_Q(50);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__oaddr = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__omem[__Vi0] = VL_RAND_RESET_Q(50);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__nxt_oaddr = VL_RAND_RESET_I(2);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__pre_ovalue = VL_RAND_RESET_Q(50);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left = VL_RAND_RESET_Q(50);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right = VL_RAND_RESET_Q(50);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2 = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef = VL_RAND_RESET_Q(58);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r = VL_RAND_RESET_I(29);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i = VL_RAND_RESET_I(29);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one = VL_RAND_RESET_Q(57);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two = VL_RAND_RESET_Q(57);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved = VL_RAND_RESET_Q(53);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r = VL_RAND_RESET_Q(57);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i = VL_RAND_RESET_Q(57);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i = VL_RAND_RESET_I(25);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in = VL_RAND_RESET_I(29);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in = VL_RAND_RESET_I(29);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in = VL_RAND_RESET_I(30);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two = VL_RAND_RESET_Q(55);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three = VL_RAND_RESET_Q(57);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__pipeline = VL_RAND_RESET_I(3);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__sum_r = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__sum_i = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__diff_r = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__diff_i = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_a = VL_RAND_RESET_Q(52);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_b_r = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_b_i = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__iaddr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__imem[__Vi0] = VL_RAND_RESET_Q(50);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__omem[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_sum_r = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_sum_i = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_r = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_i = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__m_r = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__m_i = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_r = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_i = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__sto_r = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__sto_i = VL_RAND_RESET_I(27);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__stage = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe = VL_RAND_RESET_I(2);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__o_r = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__o_i = VL_RAND_RESET_I(26);
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__brmem[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__in_reset = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__csr_address = VL_RAND_RESET_I(2);
    vlSelf->dj__DOT__codec_left_fifo__DOT__csr_write = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__csr_read = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__csr_writedata = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__codec_left_fifo__DOT__csr_readdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dj__DOT__codec_left_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dj__DOT__codec_left_fifo__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__codec_left_fifo__DOT__rd_ptr = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(1024, vlSelf->dj__DOT__codec_left_fifo__DOT__mem_used);
    vlSelf->dj__DOT__codec_left_fifo__DOT__next_wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__codec_left_fifo__DOT__next_rd_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__codec_left_fifo__DOT__read = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__next_empty = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__next_full = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_payload = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__codec_left_fifo__DOT__out_payload = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_ready = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__fifo_fill_level = VL_RAND_RESET_I(11);
    vlSelf->dj__DOT__codec_left_fifo__DOT__fill_level = VL_RAND_RESET_I(11);
    vlSelf->dj__DOT__codec_left_fifo__DOT__almost_full_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__codec_left_fifo__DOT__almost_empty_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__codec_left_fifo__DOT__cut_through_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__codec_left_fifo__DOT__pkt_cnt = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__codec_left_fifo__DOT__drop_on_error_en = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__error_in_pkt = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__pkt_has_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__sop_has_left_fifo = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__fifo_too_small_r = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__pkt_cnt_eq_zero = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__pkt_cnt_eq_one = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__wait_for_threshold = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__pkt_mode = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__wait_for_pkt = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__in_pkt_eop_arrive = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__out_pkt_leave = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__in_pkt_start = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__in_pkt_error = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__fifo_too_small = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__out_pkt_sop_leave = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__fifo_fill_level_lt_cut_through_threshold = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_left_fifo__DOT__log2ceil__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__codec_right_fifo__DOT__csr_address = VL_RAND_RESET_I(2);
    vlSelf->dj__DOT__codec_right_fifo__DOT__csr_write = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__csr_read = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__csr_writedata = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__codec_right_fifo__DOT__csr_readdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dj__DOT__codec_right_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dj__DOT__codec_right_fifo__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__codec_right_fifo__DOT__rd_ptr = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(1024, vlSelf->dj__DOT__codec_right_fifo__DOT__mem_used);
    vlSelf->dj__DOT__codec_right_fifo__DOT__next_wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__codec_right_fifo__DOT__next_rd_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__codec_right_fifo__DOT__read = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__next_empty = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__next_full = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_payload = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__codec_right_fifo__DOT__out_payload = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_ready = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__fifo_fill_level = VL_RAND_RESET_I(11);
    vlSelf->dj__DOT__codec_right_fifo__DOT__fill_level = VL_RAND_RESET_I(11);
    vlSelf->dj__DOT__codec_right_fifo__DOT__almost_full_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__codec_right_fifo__DOT__almost_empty_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__codec_right_fifo__DOT__cut_through_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__codec_right_fifo__DOT__pkt_cnt = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__codec_right_fifo__DOT__drop_on_error_en = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__error_in_pkt = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__pkt_has_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__sop_has_left_fifo = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__fifo_too_small_r = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__pkt_cnt_eq_zero = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__pkt_cnt_eq_one = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__wait_for_threshold = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__pkt_mode = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__wait_for_pkt = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__in_pkt_eop_arrive = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__out_pkt_leave = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__in_pkt_start = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__in_pkt_error = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__fifo_too_small = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__out_pkt_sop_leave = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__fifo_fill_level_lt_cut_through_threshold = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__codec_right_fifo__DOT__log2ceil__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__left_sc_fifo__DOT__csr_address = VL_RAND_RESET_I(2);
    vlSelf->dj__DOT__left_sc_fifo__DOT__csr_write = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__csr_read = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__csr_writedata = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__left_sc_fifo__DOT__csr_readdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dj__DOT__left_sc_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dj__DOT__left_sc_fifo__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__left_sc_fifo__DOT__rd_ptr = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(1024, vlSelf->dj__DOT__left_sc_fifo__DOT__mem_used);
    vlSelf->dj__DOT__left_sc_fifo__DOT__next_wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__left_sc_fifo__DOT__next_rd_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__left_sc_fifo__DOT__read = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__next_empty = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__next_full = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_payload = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__left_sc_fifo__DOT__out_payload = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_ready = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__fifo_fill_level = VL_RAND_RESET_I(11);
    vlSelf->dj__DOT__left_sc_fifo__DOT__fill_level = VL_RAND_RESET_I(11);
    vlSelf->dj__DOT__left_sc_fifo__DOT__almost_full_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__left_sc_fifo__DOT__almost_empty_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__left_sc_fifo__DOT__cut_through_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__left_sc_fifo__DOT__pkt_cnt = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__left_sc_fifo__DOT__drop_on_error_en = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__error_in_pkt = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__pkt_has_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__sop_has_left_fifo = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__fifo_too_small_r = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__pkt_cnt_eq_zero = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__pkt_cnt_eq_one = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__wait_for_threshold = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__pkt_mode = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__wait_for_pkt = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__in_pkt_eop_arrive = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__out_pkt_leave = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__in_pkt_start = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__in_pkt_error = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__fifo_too_small = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__out_pkt_sop_leave = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__fifo_fill_level_lt_cut_through_threshold = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__left_sc_fifo__DOT__log2ceil__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__right_sc_fifo__DOT__csr_address = VL_RAND_RESET_I(2);
    vlSelf->dj__DOT__right_sc_fifo__DOT__csr_write = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__csr_read = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__csr_writedata = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__right_sc_fifo__DOT__csr_readdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dj__DOT__right_sc_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dj__DOT__right_sc_fifo__DOT__wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__right_sc_fifo__DOT__rd_ptr = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(1024, vlSelf->dj__DOT__right_sc_fifo__DOT__mem_used);
    vlSelf->dj__DOT__right_sc_fifo__DOT__next_wr_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__right_sc_fifo__DOT__next_rd_ptr = VL_RAND_RESET_I(10);
    vlSelf->dj__DOT__right_sc_fifo__DOT__read = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__next_empty = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__next_full = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_payload = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__right_sc_fifo__DOT__out_payload = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_valid = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_ready = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__fifo_fill_level = VL_RAND_RESET_I(11);
    vlSelf->dj__DOT__right_sc_fifo__DOT__fill_level = VL_RAND_RESET_I(11);
    vlSelf->dj__DOT__right_sc_fifo__DOT__almost_full_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__right_sc_fifo__DOT__almost_empty_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__right_sc_fifo__DOT__cut_through_threshold = VL_RAND_RESET_I(24);
    vlSelf->dj__DOT__right_sc_fifo__DOT__pkt_cnt = VL_RAND_RESET_I(16);
    vlSelf->dj__DOT__right_sc_fifo__DOT__drop_on_error_en = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__error_in_pkt = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__pkt_has_started = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__sop_has_left_fifo = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__fifo_too_small_r = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__pkt_cnt_eq_zero = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__pkt_cnt_eq_one = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__wait_for_threshold = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__pkt_mode = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__wait_for_pkt = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__in_pkt_eop_arrive = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__out_pkt_leave = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__in_pkt_start = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__in_pkt_error = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__fifo_too_small = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__out_pkt_sop_leave = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__fifo_fill_level_lt_cut_through_threshold = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__right_sc_fifo__DOT__log2ceil__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->dj__DOT__rst_controller__DOT__merged_reset = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__rst_controller__DOT__altera_reset_synchronizer_int_chain = VL_RAND_RESET_I(5);
    vlSelf->dj__DOT__rst_controller__DOT__r_sync_rst_chain = VL_RAND_RESET_I(4);
    vlSelf->dj__DOT__rst_controller__DOT__r_sync_rst = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__rst_controller__DOT__r_early_rst = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain = VL_RAND_RESET_I(2);
    vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out = VL_RAND_RESET_I(1);
    vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_req_sync_uq1__DOT__altera_reset_synchronizer_int_chain = VL_RAND_RESET_I(2);
    vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_req_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__dj__DOT__codec_left_fifo__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__dj__DOT__codec_left_fifo__DOT__mem__v0 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__dj__DOT__codec_left_fifo__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__dj__DOT__codec_right_fifo__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__dj__DOT__codec_right_fifo__DOT__mem__v0 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__dj__DOT__codec_right_fifo__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__dj__DOT__left_sc_fifo__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__dj__DOT__left_sc_fifo__DOT__mem__v0 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__dj__DOT__left_sc_fifo__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__dj__DOT__right_sc_fifo__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__dj__DOT__right_sc_fifo__DOT__mem__v0 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__dj__DOT__right_sc_fifo__DOT__mem__v0 = 0;
    vlSelf->__Vdly__dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dj__DOT__rst_controller__DOT__merged_reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
