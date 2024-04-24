// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfft_ifft.h for the primary calling header

#include "Vfft_ifft__pch.h"
#include "Vfft_ifft__Syms.h"
#include "Vfft_ifft___024root.h"

void Vfft_ifft___024root___ctor_var_reset(Vfft_ifft___024root* vlSelf);

Vfft_ifft___024root::Vfft_ifft___024root(Vfft_ifft__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfft_ifft___024root___ctor_var_reset(this);
}

void Vfft_ifft___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfft_ifft___024root::~Vfft_ifft___024root() {
}
