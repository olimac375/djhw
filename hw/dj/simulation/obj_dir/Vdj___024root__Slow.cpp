// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdj.h for the primary calling header

#include "Vdj__pch.h"
#include "Vdj__Syms.h"
#include "Vdj___024root.h"

void Vdj___024root___ctor_var_reset(Vdj___024root* vlSelf);

Vdj___024root::Vdj___024root(Vdj__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdj___024root___ctor_var_reset(this);
}

void Vdj___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdj___024root::~Vdj___024root() {
}
