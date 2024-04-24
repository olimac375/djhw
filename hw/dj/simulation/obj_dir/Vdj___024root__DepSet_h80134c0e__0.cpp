// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdj.h for the primary calling header

#include "Vdj__pch.h"
#include "Vdj__Syms.h"
#include "Vdj___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdj___024root___dump_triggers__ico(Vdj___024root* vlSelf);
#endif  // VL_DEBUG

void Vdj___024root___eval_triggers__ico(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdj___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdj___024root___dump_triggers__act(Vdj___024root* vlSelf);
#endif  // VL_DEBUG

void Vdj___024root___eval_triggers__act(Vdj___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_clk__0))) 
                                     | ((IData)(vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out__0)))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clk_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_clk__0))) 
                                     | ((IData)(vlSelf->dj__DOT__rst_controller__DOT__merged_reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__dj__DOT__rst_controller__DOT__merged_reset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk_clk__0 = vlSelf->clk_clk;
    vlSelf->__Vtrigprevexpr___TOP__dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out__0 
        = vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out;
    vlSelf->__Vtrigprevexpr___TOP__dj__DOT__rst_controller__DOT__merged_reset__0 
        = vlSelf->dj__DOT__rst_controller__DOT__merged_reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdj___024root___dump_triggers__act(vlSelf);
    }
#endif
}
