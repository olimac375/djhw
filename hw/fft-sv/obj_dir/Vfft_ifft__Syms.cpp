// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfft_ifft__pch.h"
#include "Vfft_ifft.h"
#include "Vfft_ifft___024root.h"

// FUNCTIONS
Vfft_ifft__Syms::~Vfft_ifft__Syms()
{
}

Vfft_ifft__Syms::Vfft_ifft__Syms(VerilatedContext* contextp, const char* namep, Vfft_ifft* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1135);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
