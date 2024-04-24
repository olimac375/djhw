// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDJ.h for the primary calling header

#include "VDJ__pch.h"
#include "VDJ__Syms.h"
#include "VDJ___024root.h"

void VDJ___024root___ctor_var_reset(VDJ___024root* vlSelf);

VDJ___024root::VDJ___024root(VDJ__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VDJ___024root___ctor_var_reset(this);
}

void VDJ___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VDJ___024root::~VDJ___024root() {
}
