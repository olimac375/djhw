// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfft_ifft.h for the primary calling header

#include "Vfft_ifft__pch.h"
#include "Vfft_ifft__Syms.h"
#include "Vfft_ifft___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfft_ifft___024root___dump_triggers__stl(Vfft_ifft___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfft_ifft___024root___eval_triggers__stl(Vfft_ifft___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfft_ifft___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfft_ifft___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
