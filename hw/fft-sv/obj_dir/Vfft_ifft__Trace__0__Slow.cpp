// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfft_ifft__Syms.h"


VL_ATTR_COLD void Vfft_ifft___024root__trace_init_sub__TOP__0(Vfft_ifft___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfft_ifft___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2168,0,"i_sample",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2169,0,"o_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+2171,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fft_ifft", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2184,0,"FFT_IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"FFT_OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"IFFT_IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"IFFT_OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2187,0,"LGWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2168,0,"i_sample",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2169,0,"o_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+2171,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"fft_o_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2188,0,"ifft_i_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+242,0,"fft_o_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+242,0,"ifft_i_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBus(c+2172,0,"out_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+2173,0,"out_im",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+244,0,"w_syncd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"r_syncd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2189,0,"lpf_cutoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+246,0,"lpf_o_ce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"lpf_o_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+248,0,"lpf_o_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->pushPrefix("fft", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2184,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2168,0,"i_sample",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+242,0,"o_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+241,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"br_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+251,0,"br_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+253,0,"w_s512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+254,0,"w_d512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+256,0,"w_s256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+257,0,"w_d256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+259,0,"w_s128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+260,0,"w_d128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+262,0,"w_s64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+263,0,"w_d64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+265,0,"w_s32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+266,0,"w_d32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+268,0,"w_s16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+269,0,"w_d16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+271,0,"w_s8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+272,0,"w_d8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+274,0,"w_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+275,0,"w_d4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+277,0,"w_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+278,0,"w_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+280,0,"br_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"r_br_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("revstage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2187,0,"LGSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2174,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+278,0,"i_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+251,0,"o_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+250,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"wraddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+283,0,"rdaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+284,0,"in_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("stage_128", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2190,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2191,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2192,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2196,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+257,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+260,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+259,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+286,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+288,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+290,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+292,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+295,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+297,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+299,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+300,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+302,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2190,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2191,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+290,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+286,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+288,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+2175,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+295,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+297,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+294,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+304,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+306,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+308,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+310,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBus(c+312,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+313,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+314,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+315,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+316,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+317,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+318,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+319,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+320,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+321,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declQuad(c+322,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+324,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+326,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+328,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+330,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+332,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+334,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBit(c+336,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+337,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+339,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+341,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+343,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+345,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+347,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+348,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+349,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+350,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+351,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+352,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+353,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+354,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+355,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+356,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+326,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+328,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+330,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2202,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+337,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+348,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+357,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+358,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+359,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2204,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2202,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+339,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+347,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+361,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+362,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+363,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2204,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2205,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+345,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+350,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+365,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+366,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+367,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+369,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2205,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+343,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+349,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+370,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+371,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+372,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2207,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2210,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2211,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+266,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+269,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+268,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+376,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+378,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+380,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+382,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+385,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+387,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+1+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 45,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+389,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+390+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+406,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+407+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+423,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+424,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2207,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+380,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+376,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+378,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+2176,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+385,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+387,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+384,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+426,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+428,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+430,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+432,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+434,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+435,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+436,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+437,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+438,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+439,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+440,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+441,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+442,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+443,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+444,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+446,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+448,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+450,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+452,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+454,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+456,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBit(c+458,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+459,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+461,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+463,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+465,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+467,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+469,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+470,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+471,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+472,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+473,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+474,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+475,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+476,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+477,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+478,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+448,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+450,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+452,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2205,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+459,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+470,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+479,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+480,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+481,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2204,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2205,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+461,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+469,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+483,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+484,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+485,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2200,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2204,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2214,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+467,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+472,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+487,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+488,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+490,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2214,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+465,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+471,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+491,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+492,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+493,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+495,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2185,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+275,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+278,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+277,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+496,0,"m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+497,0,"m_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+498,0,"i_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+499,0,"i_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+500,0,"rnd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+501,0,"rnd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+502,0,"sto_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+503,0,"sto_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+504,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"sync_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+507,0,"o_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+508,0,"o_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("do_rnd_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2191,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+508,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("DROP_ONE_BIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+509,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+510,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+511,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2191,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+500,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+507,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("DROP_ONE_BIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+513,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+514,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+515,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_256", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2215,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2216,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2217,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+254,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+257,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+256,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+518,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+520,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+522,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+524,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+527,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+529,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+531,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+532,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+533,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+534,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2215,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+522,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+518,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+520,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+2177,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+527,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+529,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+526,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+536,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+538,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+540,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+542,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBus(c+544,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+545,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+546,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+547,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+548,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+549,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+550,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+551,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+552,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+553,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declQuad(c+554,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+556,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+558,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+560,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+562,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+564,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+566,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBit(c+568,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+569,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+571,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+573,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+575,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+577,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+579,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+580,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+581,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+582,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+583,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+584,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+585,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+586,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+587,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+588,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declQuad(c+558,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+560,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+562,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2220,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+569,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+580,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+590,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+591,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2221,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2220,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+571,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+579,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+593,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+594,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+595,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2200,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2221,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2202,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+577,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+582,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+596,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+597,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+598,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+600,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2202,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2190,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+575,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+581,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+601,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+602,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+603,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+605,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2207,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2222,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+263,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+266,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+265,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+607,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+609,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+611,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+613,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+616,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+618,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+17+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 45,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+620,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+621+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+653,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+654+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+686,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+687,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2207,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+611,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+607,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+609,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+2178,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+616,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+618,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+615,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+689,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+691,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+693,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+695,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+697,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+698,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+699,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+700,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+701,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+702,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+703,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+704,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+705,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+706,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+707,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+709,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+711,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+713,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+715,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+717,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+719,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBit(c+721,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+722,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+724,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+726,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+728,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+730,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+732,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+733,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+734,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+735,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+736,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+737,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+738,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+739,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+740,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+741,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+711,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+713,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+715,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2205,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+722,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+733,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+742,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+743,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+744,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+745,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2225,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2205,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+724,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+732,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+746,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+747,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+748,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2225,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2214,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+730,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+735,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+750,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+751,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+752,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2214,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+728,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+734,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+755,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+756,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+757,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+758,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+759,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2209,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2187,0,"LGWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"INVERSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+272,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+275,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+274,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+761,0,"pipeline",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+762,0,"sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+763,0,"sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+764,0,"diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+765,0,"diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+766,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+768,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBus(c+770,0,"ob_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+771,0,"ob_b_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+772,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+773+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+777,0,"imem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+778,0,"imem_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+779,0,"i_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+780,0,"i_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+781+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 41,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+785,0,"rnd_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+786,0,"rnd_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+787,0,"rnd_diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+788,0,"rnd_diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+789,0,"n_rnd_diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+790,0,"n_rnd_diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("do_rnd_diff_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2185,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+765,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+788,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_diff_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2185,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+764,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+787,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_sum_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2185,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+786,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_sum_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2185,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2185,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+762,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+785,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_512", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2184,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2215,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2226,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2227,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2179,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2168,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+254,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+253,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+793,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+794,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+796,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+798,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+799,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+801,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+803,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+804,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+805,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+806,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2184,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2215,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+794,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+792,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+793,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2180,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+799,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+801,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+798,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+808,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+810,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+812,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+814,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+815,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+816,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+817,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+818,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+819,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+820,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+821,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+822,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+823,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declQuad(c+824,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+826,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+828,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+830,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+832,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+834,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+836,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBit(c+838,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+839,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+841,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+843,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+845,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+847,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+849,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+850,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+851,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+852,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+853,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+854,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+855,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+856,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+857,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+858,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declQuad(c+828,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+830,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+832,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2230,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2215,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+839,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declBus(c+850,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+859,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+860,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+861,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+862,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2231,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2230,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2215,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+841,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declBus(c+849,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+863,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+864,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+865,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2200,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2231,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2220,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2215,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+847,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+852,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+866,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+867,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+868,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+870,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2220,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2215,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+845,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+851,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+871,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+872,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+873,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_64", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2190,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2191,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2232,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2233,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+260,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+263,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+262,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+877,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+879,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+881,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+883,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+884,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+886,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+888,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+49+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 43,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+890,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+891+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+955,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+956+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1020,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+1021,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2190,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2191,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+881,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+877,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+879,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+2181,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+886,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+888,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+885,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1023,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+1025,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+1027,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1028,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1029,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBus(c+1031,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+1032,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+1033,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+1034,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+1035,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1036,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1037,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1038,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1039,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1040,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declQuad(c+1041,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+1043,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+1045,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1047,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1049,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1051,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1053,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBit(c+1055,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1056,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1058,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1060,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+1062,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1064,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+1066,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1067,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1068,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1069,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1070,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1071,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1072,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1073,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1074,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1075,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+1045,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1047,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1049,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2202,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1056,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+1067,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1076,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1077,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+1078,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2236,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2202,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1058,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+1066,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1080,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1081,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+1082,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2200,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2236,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2205,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1064,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+1069,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1083,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1084,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+1085,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1086,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1087,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2205,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2207,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1062,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+1068,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1088,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1089,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+1090,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1091,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1092,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2209,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2238,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+269,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+272,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+271,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1093,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1094,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1096,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1098,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1100,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1101,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1102,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1103,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1105,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+113+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1107,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+1108+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1116,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+1117+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1125,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+1126,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2209,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1098,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1094,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1096,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+2182,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1103,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1105,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+1102,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1128,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1130,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+1132,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1133,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1134,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1136,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1137,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1138,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1139,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1140,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1141,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1142,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1143,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1144,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1145,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+1146,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1148,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1150,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1152,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1154,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1156,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1158,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBit(c+1160,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1161,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1163,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1165,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1167,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1169,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1171,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1172,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1173,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1174,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1175,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1176,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1177,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1178,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1179,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1180,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declQuad(c+1150,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1152,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1154,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2214,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1161,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+1172,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1181,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1182,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1183,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2241,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2214,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1163,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+1171,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1185,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1186,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1187,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1188,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2241,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2242,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1169,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1174,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1189,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1190,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1191,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1192,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1193,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2242,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2209,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2166,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1167,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1173,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1194,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1195,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1196,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1197,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1198,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ifft", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2185,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+248,0,"i_sample",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+2169,0,"o_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+2171,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1199,0,"br_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1200,0,"br_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1202,0,"w_s512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1203,0,"w_d512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+1205,0,"w_s256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1206,0,"w_d256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1208,0,"w_s128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1209,0,"w_d128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1211,0,"w_s64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1212,0,"w_d64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1214,0,"w_s32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1215,0,"w_d32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1217,0,"w_s16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1218,0,"w_d16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1220,0,"w_s8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1221,0,"w_d8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1223,0,"w_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1224,0,"w_d4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1226,0,"w_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1227,0,"w_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1229,0,"br_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1230,0,"r_br_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("revstage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2187,0,"LGSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1231,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1227,0,"i_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declQuad(c+1200,0,"o_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1199,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1232,0,"wraddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1233,0,"rdaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1234,0,"in_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("stage_128", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2208,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2243,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2192,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2244,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 103,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1206,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1209,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1208,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1235,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1236,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1238,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1240,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBit(c+1242,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1243,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1244,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1245,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1247,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+1249,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1250,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1251,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+1252,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2208,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2243,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1240,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declQuad(c+1236,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1238,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1254,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1245,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1247,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1244,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1255,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1257,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1259,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1260,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1261,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBus(c+1263,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1264,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1265,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1266,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1267,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1268,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1269,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1270,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1271,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1272,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declQuad(c+1273,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1275,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1277,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1279,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1281,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1283,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1285,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+1287,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1288,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1290,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1292,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1294,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1296,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1298,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1299,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1300,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1301,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1302,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1303,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1304,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1305,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1306,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1307,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declQuad(c+1277,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1279,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1281,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2248,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1288,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+1299,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1308,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1309,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1310,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1311,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2249,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2248,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1290,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+1298,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1312,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1313,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1314,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1315,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2249,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2250,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1296,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1301,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1316,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1317,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1318,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1319,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1320,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2250,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1294,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1300,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1321,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1322,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1323,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1324,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1325,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2237,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2251,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2210,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2253,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1214,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1215,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1218,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1217,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1327,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1329,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1331,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1333,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1334,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1335,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1336,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+1338,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+121+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 55,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1340,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+1341+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1357,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+1358+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 49,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1374,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+1375,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2237,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2251,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1331,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declQuad(c+1327,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1329,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1377,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1336,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+1338,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1335,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1378,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1380,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1382,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1383,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+1386,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1387,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1388,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1389,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1390,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1391,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1392,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1393,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1394,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1395,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declQuad(c+1396,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1398,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1400,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1402,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1404,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1406,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1408,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+1410,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1411,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1413,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1415,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1417,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1419,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1421,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1422,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1423,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1424,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1425,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1426,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1427,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1428,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1429,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1430,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declQuad(c+1400,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1402,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1404,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2250,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1411,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1422,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1431,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1432,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+1433,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2249,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2250,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1413,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1421,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1435,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1436,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+1437,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2200,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2249,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2256,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1419,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1424,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1438,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1439,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+1440,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1441,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1442,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2256,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1417,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1423,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1443,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1444,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+1445,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1446,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1447,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2186,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1223,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1224,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declQuad(c+1227,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1226,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1448,0,"m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1449,0,"m_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1450,0,"i_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1451,0,"i_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1452,0,"rnd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1453,0,"rnd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1454,0,"sto_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1455,0,"sto_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+1456,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1457,0,"stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1458,0,"sync_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1459,0,"o_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1460,0,"o_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->pushPrefix("do_rnd_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2243,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1453,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1460,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->pushPrefix("DROP_ONE_BIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1461,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1462,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+1463,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1464,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2243,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1452,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1459,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->pushPrefix("DROP_ONE_BIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1465,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1466,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+1467,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1468,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_256", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2191,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2216,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2257,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 103,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1202,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1203,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1206,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1205,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1469,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1470,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1472,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1474,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1476,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1477,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1478,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1479,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1481,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+1483,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1484,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1485,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+1486,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2191,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1474,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declQuad(c+1470,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1472,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+1488,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1479,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1481,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1478,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1489,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1491,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+1493,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1494,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1495,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBus(c+1497,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1498,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1499,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1500,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1501,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1502,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1503,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1504,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1505,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1506,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+1507,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1509,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1511,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1513,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1515,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1517,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1519,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBit(c+1521,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1522,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1524,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1526,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1528,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1530,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+1532,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1533,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1534,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1535,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1536,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1537,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1538,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1539,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1540,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1541,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declQuad(c+1511,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1513,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1515,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2261,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1522,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+1533,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1542,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1543,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1544,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1545,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2262,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2261,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1524,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+1532,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1546,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1547,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1548,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2200,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2262,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2248,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1530,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+1535,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1549,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1550,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1551,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1552,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1553,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2248,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2208,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1528,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+1534,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1554,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1555,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1556,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1557,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1558,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2237,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2251,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2263,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1212,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1215,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1214,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1559,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1560,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1562,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1564,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1566,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1567,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1568,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1569,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1571,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+137+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 55,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1573,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1574+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1606,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1607+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1639,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1640,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2237,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2251,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1564,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declQuad(c+1560,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1562,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1642,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1569,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1571,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1568,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1643,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1645,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1647,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1648,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1649,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+1651,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1652,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1653,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1654,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1655,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1656,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1657,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1658,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1659,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1660,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declQuad(c+1661,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1663,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1665,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1667,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1669,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1671,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1673,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+1675,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1676,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1678,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1680,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1682,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1684,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1686,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1687,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1688,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1689,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1690,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1691,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1692,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1693,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1694,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1695,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declQuad(c+1665,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1667,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1669,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2250,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1676,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1687,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1696,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1697,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1698,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1699,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2266,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2250,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1678,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1686,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1700,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1701,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1702,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2266,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2256,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1684,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1689,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1704,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1705,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1706,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1707,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1708,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2256,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1682,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1688,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1709,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1710,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1711,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1712,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1713,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2252,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2187,0,"LGWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2195,0,"INVERSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1220,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1221,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+1224,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1223,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1714,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1715,0,"pipeline",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1716,0,"sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1717,0,"sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1718,0,"diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1719,0,"diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declQuad(c+1720,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declQuad(c+1722,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBus(c+1724,0,"ob_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1725,0,"ob_b_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1726,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+1727+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 49,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1731,0,"imem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1732,0,"imem_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1733,0,"i_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1734,0,"i_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+1735+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 51,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1739,0,"rnd_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1740,0,"rnd_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1741,0,"rnd_diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1742,0,"rnd_diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1743,0,"n_rnd_diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1744,0,"n_rnd_diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->pushPrefix("do_rnd_diff_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2186,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1719,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1742,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_diff_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2186,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1718,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1741,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_sum_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2186,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1717,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1740,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_sum_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2186,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2186,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1716,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1739,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_512", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2185,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2191,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2226,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2267,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 103,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2179,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+248,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+1203,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+1202,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1745,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1746,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+1748,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+1750,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1752,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1753,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1754,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1755,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1757,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBus(c+1759,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1760,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1761,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1762,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2185,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2191,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1750,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+1746,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+1748,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+1764,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1755,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1757,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+1754,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1765,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+1767,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+1769,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1771,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBus(c+1773,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1774,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1775,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1776,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1777,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1778,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1779,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1780,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1781,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1782,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declQuad(c+1783,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1785,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1787,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1789,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1791,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1793,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1795,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBit(c+1797,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1798,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1800,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1802,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1804,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1806,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+1808,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1809,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1810,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1811,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1812,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1813,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1814,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1815,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1816,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1817,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+1787,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1789,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1791,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2242,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2191,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1798,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1809,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1818,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1819,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+1820,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1821,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2241,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2242,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2191,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1800,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1808,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1822,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1823,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+1824,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2200,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2241,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2261,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2191,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1806,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+1811,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1825,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1826,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+1827,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1828,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1829,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2261,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2191,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1804,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+1810,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1830,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1831,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+1832,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1833,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1834,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_64", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2208,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2243,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2232,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2271,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1208,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1209,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1212,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1211,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1835,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1836,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1838,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1840,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBit(c+1842,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1843,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1844,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1845,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1847,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+169+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 53,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1849,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1850+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 45,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1914,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1915+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1979,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+1980,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2208,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2243,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1840,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declQuad(c+1836,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1838,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1982,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1845,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1847,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1844,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1983,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1985,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1987,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1988,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1989,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBus(c+1991,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1992,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1993,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1994,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1995,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1996,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1997,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1998,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1999,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2000,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declQuad(c+2001,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+2003,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+2005,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2007,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2009,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2011,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2013,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+2015,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2016,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2018,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2020,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+2022,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2024,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+2026,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2027,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2028,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2029,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2030,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+2031,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+2032,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2033,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2034,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+2035,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declQuad(c+2005,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2007,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2009,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2248,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2016,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+2027,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2036,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2037,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+2038,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2039,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2274,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2248,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2018,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+2026,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2040,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2041,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+2042,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2200,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2274,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2250,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2024,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+2029,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2043,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2044,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+2045,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2046,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2047,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2250,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2237,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2022,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+2028,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2048,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2049,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+2050,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2051,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2052,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2252,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2275,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2194,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2195,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2276,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBus(c+2199,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1217,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1218,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+1221,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1220,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2053,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2054,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2056,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2058,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 57,0);
    tracep->declBit(c+2060,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2061,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2062,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2063,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2065,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+233+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 57,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2067,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+2068+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 49,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2076,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+2077+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 49,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2200,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2085,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+2086,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2252,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2275,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2193,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2201,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2167,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2058,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 57,0);
    tracep->declQuad(c+2054,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2056,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+2088,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2063,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2065,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+2062,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2089,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2091,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+2093,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2094,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2095,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 57,0);
    tracep->declBus(c+2097,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2098,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2099,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2100,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2101,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+2102,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+2103,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+2104,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+2105,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+2106,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declQuad(c+2107,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2109,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2111,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2113,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2115,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declQuad(c+2117,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declQuad(c+2119,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declBit(c+2121,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2122,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2124,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2126,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2128,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declQuad(c+2130,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declBus(c+2132,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2133,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2134,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2135,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2136,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+2137,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+2138,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+2139,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+2140,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+2141,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declQuad(c+2111,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2113,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2115,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2256,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2122,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+2133,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2142,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2143,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+2144,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2145,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2279,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2256,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2203,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2124,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+2132,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2146,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2147,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+2148,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2149,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2279,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2280,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2130,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declBus(c+2135,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2150,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2151,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+2152,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2153,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2154,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2280,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2252,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2206,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2128,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declBus(c+2134,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2155,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2156,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+2157,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2158,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2159,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lpf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2185,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2187,0,"LGWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2281,0,"LGP1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2232,0,"LGFILTWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2282,0,"i_cutoff",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2165,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2183,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+242,0,"i_sample",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+241,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"o_ce",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+248,0,"o_sample",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+247,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2160,0,"bin_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2161,0,"sample_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+2162,0,"sample_im",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+2163,0,"out_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2164,0,"out_im",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfft_ifft___024root__trace_init_top(Vfft_ifft___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfft_ifft___024root__trace_init_top\n"); );
    // Body
    Vfft_ifft___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfft_ifft___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfft_ifft___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfft_ifft___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfft_ifft___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfft_ifft___024root__trace_register(Vfft_ifft___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfft_ifft___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vfft_ifft___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfft_ifft___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfft_ifft___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfft_ifft___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfft_ifft___024root__trace_const_0_sub_0(Vfft_ifft___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfft_ifft___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfft_ifft___024root__trace_const_0\n"); );
    // Init
    Vfft_ifft___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfft_ifft___024root*>(voidSelf);
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfft_ifft___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfft_ifft___024root__trace_const_0_sub_0(Vfft_ifft___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfft_ifft___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    // Body
    bufp->fullIData(oldp+2184,(0x10U),32);
    bufp->fullIData(oldp+2185,(0x15U),32);
    bufp->fullIData(oldp+2186,(0x1aU),32);
    bufp->fullIData(oldp+2187,(9U),32);
    bufp->fullBit(oldp+2188,(vlSelf->fft_ifft__DOT__ifft_i_reset));
    bufp->fullSData(oldp+2189,(0xaU),9);
    bufp->fullIData(oldp+2190,(0x12U),32);
    bufp->fullIData(oldp+2191,(0x16U),32);
    bufp->fullIData(oldp+2192,(6U),32);
    bufp->fullIData(oldp+2193,(0U),32);
    bufp->fullBit(oldp+2194,(1U));
    bufp->fullIData(oldp+2195,(1U),32);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f313238U;
    __Vtemp_1[2U] = 0x636d656dU;
    bufp->fullWData(oldp+2196,(__Vtemp_1),96);
    bufp->fullBit(oldp+2199,(0U));
    bufp->fullBit(oldp+2200,(0U));
    bufp->fullCData(oldp+2201,(1U),2);
    bufp->fullIData(oldp+2202,(0x29U),32);
    bufp->fullIData(oldp+2203,(2U),32);
    bufp->fullIData(oldp+2204,(0U),20);
    bufp->fullIData(oldp+2205,(0x2bU),32);
    bufp->fullIData(oldp+2206,(4U),32);
    bufp->fullIData(oldp+2207,(0x13U),32);
    bufp->fullIData(oldp+2208,(0x17U),32);
    bufp->fullIData(oldp+2209,(0x14U),32);
    bufp->fullIData(oldp+2210,(3U),32);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6d5f3136U;
    __Vtemp_2[2U] = 0x636d65U;
    bufp->fullWData(oldp+2211,(__Vtemp_2),88);
    bufp->fullIData(oldp+2214,(0x2dU),32);
    bufp->fullIData(oldp+2215,(0x11U),32);
    bufp->fullIData(oldp+2216,(7U),32);
    __Vtemp_3[0U] = 0x2e686578U;
    __Vtemp_3[1U] = 0x5f323536U;
    __Vtemp_3[2U] = 0x636d656dU;
    bufp->fullWData(oldp+2217,(__Vtemp_3),96);
    bufp->fullIData(oldp+2220,(0x27U),32);
    bufp->fullIData(oldp+2221,(0U),18);
    __Vtemp_4[0U] = 0x2e686578U;
    __Vtemp_4[1U] = 0x6d5f3332U;
    __Vtemp_4[2U] = 0x636d65U;
    bufp->fullWData(oldp+2222,(__Vtemp_4),88);
    bufp->fullIData(oldp+2225,(0U),21);
    bufp->fullIData(oldp+2226,(8U),32);
    __Vtemp_5[0U] = 0x2e686578U;
    __Vtemp_5[1U] = 0x5f353132U;
    __Vtemp_5[2U] = 0x636d656dU;
    bufp->fullWData(oldp+2227,(__Vtemp_5),96);
    bufp->fullIData(oldp+2230,(0x25U),32);
    bufp->fullIData(oldp+2231,(0U),17);
    bufp->fullIData(oldp+2232,(5U),32);
    __Vtemp_6[0U] = 0x2e686578U;
    __Vtemp_6[1U] = 0x6d5f3634U;
    __Vtemp_6[2U] = 0x636d65U;
    bufp->fullWData(oldp+2233,(__Vtemp_6),88);
    bufp->fullIData(oldp+2236,(0U),19);
    bufp->fullIData(oldp+2237,(0x18U),32);
    __Vtemp_7[0U] = 0x2e686578U;
    __Vtemp_7[1U] = 0x656d5f38U;
    __Vtemp_7[2U] = 0x636dU;
    bufp->fullWData(oldp+2238,(__Vtemp_7),80);
    bufp->fullIData(oldp+2241,(0U),22);
    bufp->fullIData(oldp+2242,(0x2fU),32);
    bufp->fullIData(oldp+2243,(0x1bU),32);
    __Vtemp_8[0U] = 0x2e686578U;
    __Vtemp_8[1U] = 0x5f313238U;
    __Vtemp_8[2U] = 0x636d656dU;
    __Vtemp_8[3U] = 0x69U;
    bufp->fullWData(oldp+2244,(__Vtemp_8),104);
    bufp->fullIData(oldp+2248,(0x33U),32);
    bufp->fullIData(oldp+2249,(0U),25);
    bufp->fullIData(oldp+2250,(0x35U),32);
    bufp->fullIData(oldp+2251,(0x1cU),32);
    bufp->fullIData(oldp+2252,(0x19U),32);
    __Vtemp_9[0U] = 0x2e686578U;
    __Vtemp_9[1U] = 0x6d5f3136U;
    __Vtemp_9[2U] = 0x69636d65U;
    bufp->fullWData(oldp+2253,(__Vtemp_9),96);
    bufp->fullIData(oldp+2256,(0x37U),32);
    __Vtemp_10[0U] = 0x2e686578U;
    __Vtemp_10[1U] = 0x5f323536U;
    __Vtemp_10[2U] = 0x636d656dU;
    __Vtemp_10[3U] = 0x69U;
    bufp->fullWData(oldp+2257,(__Vtemp_10),104);
    bufp->fullIData(oldp+2261,(0x31U),32);
    bufp->fullIData(oldp+2262,(0U),23);
    __Vtemp_11[0U] = 0x2e686578U;
    __Vtemp_11[1U] = 0x6d5f3332U;
    __Vtemp_11[2U] = 0x69636d65U;
    bufp->fullWData(oldp+2263,(__Vtemp_11),96);
    bufp->fullIData(oldp+2266,(0U),26);
    __Vtemp_12[0U] = 0x2e686578U;
    __Vtemp_12[1U] = 0x5f353132U;
    __Vtemp_12[2U] = 0x636d656dU;
    __Vtemp_12[3U] = 0x69U;
    bufp->fullWData(oldp+2267,(__Vtemp_12),104);
    __Vtemp_13[0U] = 0x2e686578U;
    __Vtemp_13[1U] = 0x6d5f3634U;
    __Vtemp_13[2U] = 0x69636d65U;
    bufp->fullWData(oldp+2271,(__Vtemp_13),96);
    bufp->fullIData(oldp+2274,(0U),24);
    bufp->fullIData(oldp+2275,(0x1dU),32);
    __Vtemp_14[0U] = 0x2e686578U;
    __Vtemp_14[1U] = 0x656d5f38U;
    __Vtemp_14[2U] = 0x69636dU;
    bufp->fullWData(oldp+2276,(__Vtemp_14),88);
    bufp->fullIData(oldp+2279,(0U),27);
    bufp->fullIData(oldp+2280,(0x39U),32);
    bufp->fullIData(oldp+2281,(0xaU),32);
    bufp->fullSData(oldp+2282,(0xaU),10);
}

VL_ATTR_COLD void Vfft_ifft___024root__trace_full_0_sub_0(Vfft_ifft___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfft_ifft___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfft_ifft___024root__trace_full_0\n"); );
    // Init
    Vfft_ifft___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfft_ifft___024root*>(voidSelf);
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfft_ifft___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfft_ifft___024root__trace_full_0_sub_0(Vfft_ifft___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfft_ifft___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[0]),46);
    bufp->fullQData(oldp+3,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[1]),46);
    bufp->fullQData(oldp+5,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[2]),46);
    bufp->fullQData(oldp+7,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[3]),46);
    bufp->fullQData(oldp+9,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[4]),46);
    bufp->fullQData(oldp+11,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[5]),46);
    bufp->fullQData(oldp+13,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[6]),46);
    bufp->fullQData(oldp+15,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__cmem[7]),46);
    bufp->fullQData(oldp+17,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[0]),46);
    bufp->fullQData(oldp+19,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[1]),46);
    bufp->fullQData(oldp+21,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[2]),46);
    bufp->fullQData(oldp+23,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[3]),46);
    bufp->fullQData(oldp+25,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[4]),46);
    bufp->fullQData(oldp+27,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[5]),46);
    bufp->fullQData(oldp+29,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[6]),46);
    bufp->fullQData(oldp+31,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[7]),46);
    bufp->fullQData(oldp+33,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[8]),46);
    bufp->fullQData(oldp+35,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[9]),46);
    bufp->fullQData(oldp+37,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[10]),46);
    bufp->fullQData(oldp+39,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[11]),46);
    bufp->fullQData(oldp+41,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[12]),46);
    bufp->fullQData(oldp+43,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[13]),46);
    bufp->fullQData(oldp+45,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[14]),46);
    bufp->fullQData(oldp+47,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__cmem[15]),46);
    bufp->fullQData(oldp+49,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[0]),44);
    bufp->fullQData(oldp+51,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[1]),44);
    bufp->fullQData(oldp+53,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[2]),44);
    bufp->fullQData(oldp+55,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[3]),44);
    bufp->fullQData(oldp+57,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[4]),44);
    bufp->fullQData(oldp+59,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[5]),44);
    bufp->fullQData(oldp+61,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[6]),44);
    bufp->fullQData(oldp+63,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[7]),44);
    bufp->fullQData(oldp+65,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[8]),44);
    bufp->fullQData(oldp+67,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[9]),44);
    bufp->fullQData(oldp+69,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[10]),44);
    bufp->fullQData(oldp+71,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[11]),44);
    bufp->fullQData(oldp+73,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[12]),44);
    bufp->fullQData(oldp+75,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[13]),44);
    bufp->fullQData(oldp+77,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[14]),44);
    bufp->fullQData(oldp+79,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[15]),44);
    bufp->fullQData(oldp+81,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[16]),44);
    bufp->fullQData(oldp+83,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[17]),44);
    bufp->fullQData(oldp+85,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[18]),44);
    bufp->fullQData(oldp+87,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[19]),44);
    bufp->fullQData(oldp+89,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[20]),44);
    bufp->fullQData(oldp+91,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[21]),44);
    bufp->fullQData(oldp+93,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[22]),44);
    bufp->fullQData(oldp+95,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[23]),44);
    bufp->fullQData(oldp+97,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[24]),44);
    bufp->fullQData(oldp+99,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[25]),44);
    bufp->fullQData(oldp+101,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[26]),44);
    bufp->fullQData(oldp+103,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[27]),44);
    bufp->fullQData(oldp+105,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[28]),44);
    bufp->fullQData(oldp+107,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[29]),44);
    bufp->fullQData(oldp+109,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[30]),44);
    bufp->fullQData(oldp+111,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__cmem[31]),44);
    bufp->fullQData(oldp+113,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__cmem[0]),48);
    bufp->fullQData(oldp+115,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__cmem[1]),48);
    bufp->fullQData(oldp+117,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__cmem[2]),48);
    bufp->fullQData(oldp+119,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__cmem[3]),48);
    bufp->fullQData(oldp+121,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[0]),56);
    bufp->fullQData(oldp+123,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[1]),56);
    bufp->fullQData(oldp+125,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[2]),56);
    bufp->fullQData(oldp+127,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[3]),56);
    bufp->fullQData(oldp+129,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[4]),56);
    bufp->fullQData(oldp+131,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[5]),56);
    bufp->fullQData(oldp+133,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[6]),56);
    bufp->fullQData(oldp+135,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__cmem[7]),56);
    bufp->fullQData(oldp+137,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[0]),56);
    bufp->fullQData(oldp+139,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[1]),56);
    bufp->fullQData(oldp+141,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[2]),56);
    bufp->fullQData(oldp+143,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[3]),56);
    bufp->fullQData(oldp+145,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[4]),56);
    bufp->fullQData(oldp+147,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[5]),56);
    bufp->fullQData(oldp+149,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[6]),56);
    bufp->fullQData(oldp+151,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[7]),56);
    bufp->fullQData(oldp+153,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[8]),56);
    bufp->fullQData(oldp+155,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[9]),56);
    bufp->fullQData(oldp+157,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[10]),56);
    bufp->fullQData(oldp+159,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[11]),56);
    bufp->fullQData(oldp+161,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[12]),56);
    bufp->fullQData(oldp+163,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[13]),56);
    bufp->fullQData(oldp+165,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[14]),56);
    bufp->fullQData(oldp+167,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__cmem[15]),56);
    bufp->fullQData(oldp+169,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[0]),54);
    bufp->fullQData(oldp+171,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[1]),54);
    bufp->fullQData(oldp+173,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[2]),54);
    bufp->fullQData(oldp+175,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[3]),54);
    bufp->fullQData(oldp+177,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[4]),54);
    bufp->fullQData(oldp+179,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[5]),54);
    bufp->fullQData(oldp+181,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[6]),54);
    bufp->fullQData(oldp+183,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[7]),54);
    bufp->fullQData(oldp+185,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[8]),54);
    bufp->fullQData(oldp+187,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[9]),54);
    bufp->fullQData(oldp+189,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[10]),54);
    bufp->fullQData(oldp+191,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[11]),54);
    bufp->fullQData(oldp+193,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[12]),54);
    bufp->fullQData(oldp+195,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[13]),54);
    bufp->fullQData(oldp+197,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[14]),54);
    bufp->fullQData(oldp+199,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[15]),54);
    bufp->fullQData(oldp+201,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[16]),54);
    bufp->fullQData(oldp+203,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[17]),54);
    bufp->fullQData(oldp+205,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[18]),54);
    bufp->fullQData(oldp+207,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[19]),54);
    bufp->fullQData(oldp+209,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[20]),54);
    bufp->fullQData(oldp+211,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[21]),54);
    bufp->fullQData(oldp+213,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[22]),54);
    bufp->fullQData(oldp+215,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[23]),54);
    bufp->fullQData(oldp+217,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[24]),54);
    bufp->fullQData(oldp+219,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[25]),54);
    bufp->fullQData(oldp+221,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[26]),54);
    bufp->fullQData(oldp+223,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[27]),54);
    bufp->fullQData(oldp+225,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[28]),54);
    bufp->fullQData(oldp+227,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[29]),54);
    bufp->fullQData(oldp+229,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[30]),54);
    bufp->fullQData(oldp+231,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__cmem[31]),54);
    bufp->fullQData(oldp+233,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__cmem[0]),58);
    bufp->fullQData(oldp+235,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__cmem[1]),58);
    bufp->fullQData(oldp+237,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__cmem[2]),58);
    bufp->fullQData(oldp+239,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__cmem[3]),58);
    bufp->fullBit(oldp+241,(vlSelf->fft_ifft__DOT__fft_o_sync));
    bufp->fullQData(oldp+242,(vlSelf->fft_ifft__DOT__fft_o_result),42);
    bufp->fullBit(oldp+244,(((IData)(vlSelf->fft_ifft__DOT__fft_o_sync) 
                             | (IData)(vlSelf->fft_ifft__DOT__r_syncd))));
    bufp->fullBit(oldp+245,(vlSelf->fft_ifft__DOT__r_syncd));
    bufp->fullBit(oldp+246,(vlSelf->fft_ifft__DOT__lpf_o_ce));
    bufp->fullBit(oldp+247,(vlSelf->fft_ifft__DOT__lpf_o_sync));
    bufp->fullQData(oldp+248,(vlSelf->fft_ifft__DOT__lpf_o_sample),42);
    bufp->fullBit(oldp+250,(vlSelf->fft_ifft__DOT__fft__DOT__br_sync));
    bufp->fullQData(oldp+251,(vlSelf->fft_ifft__DOT__fft__DOT__br_result),42);
    bufp->fullBit(oldp+253,(vlSelf->fft_ifft__DOT__fft__DOT__w_s512));
    bufp->fullQData(oldp+254,(vlSelf->fft_ifft__DOT__fft__DOT__w_d512),34);
    bufp->fullBit(oldp+256,(vlSelf->fft_ifft__DOT__fft__DOT__w_s256));
    bufp->fullQData(oldp+257,(vlSelf->fft_ifft__DOT__fft__DOT__w_d256),36);
    bufp->fullBit(oldp+259,(vlSelf->fft_ifft__DOT__fft__DOT__w_s128));
    bufp->fullQData(oldp+260,(vlSelf->fft_ifft__DOT__fft__DOT__w_d128),36);
    bufp->fullBit(oldp+262,(vlSelf->fft_ifft__DOT__fft__DOT__w_s64));
    bufp->fullQData(oldp+263,(vlSelf->fft_ifft__DOT__fft__DOT__w_d64),38);
    bufp->fullBit(oldp+265,(vlSelf->fft_ifft__DOT__fft__DOT__w_s32));
    bufp->fullQData(oldp+266,(vlSelf->fft_ifft__DOT__fft__DOT__w_d32),38);
    bufp->fullBit(oldp+268,(vlSelf->fft_ifft__DOT__fft__DOT__w_s16));
    bufp->fullQData(oldp+269,(vlSelf->fft_ifft__DOT__fft__DOT__w_d16),40);
    bufp->fullBit(oldp+271,(vlSelf->fft_ifft__DOT__fft__DOT__w_s8));
    bufp->fullQData(oldp+272,(vlSelf->fft_ifft__DOT__fft__DOT__w_d8),40);
    bufp->fullBit(oldp+274,(vlSelf->fft_ifft__DOT__fft__DOT__w_s4));
    bufp->fullQData(oldp+275,(vlSelf->fft_ifft__DOT__fft__DOT__w_d4),42);
    bufp->fullBit(oldp+277,(vlSelf->fft_ifft__DOT__fft__DOT__w_s2));
    bufp->fullQData(oldp+278,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__o_r)) 
                                << 0x15U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__o_i)))),42);
    bufp->fullBit(oldp+280,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__r_br_started) 
                             | (IData)(vlSelf->fft_ifft__DOT__fft__DOT__w_s2))));
    bufp->fullBit(oldp+281,(vlSelf->fft_ifft__DOT__fft__DOT__r_br_started));
    bufp->fullSData(oldp+282,(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr),10);
    bufp->fullSData(oldp+283,(((0x200U & ((~ ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                              >> 9U)) 
                                          << 9U)) | 
                               ((0x100U & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                           << 8U)) 
                                | ((0x80U & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                             << 6U)) 
                                   | ((0x40U & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                << 4U)) 
                                      | ((0x20U & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                   << 2U)) 
                                         | ((0x10U 
                                             & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                   >> 2U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                      >> 4U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                         >> 6U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__wraddr) 
                                                           >> 8U)))))))))))),10);
    bufp->fullBit(oldp+284,(vlSelf->fft_ifft__DOT__fft__DOT__revstage__DOT__in_reset));
    bufp->fullBit(oldp+285,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__wait_for_sync));
    bufp->fullQData(oldp+286,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ib_a),36);
    bufp->fullQData(oldp+288,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ib_b),36);
    bufp->fullQData(oldp+290,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ib_c),44);
    bufp->fullBit(oldp+292,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ib_sync));
    bufp->fullBit(oldp+293,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__b_started));
    bufp->fullBit(oldp+294,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ob_sync));
    bufp->fullQData(oldp+295,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
    bufp->fullQData(oldp+297,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
    bufp->fullCData(oldp+299,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__iaddr),7);
    bufp->fullCData(oldp+300,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__oaddr),7);
    bufp->fullCData(oldp+301,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__nxt_oaddr),6);
    bufp->fullQData(oldp+302,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__pre_ovalue),36);
    bufp->fullQData(oldp+304,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
    bufp->fullQData(oldp+306,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
    bufp->fullBit(oldp+308,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+309,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+310,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
    bufp->fullIData(oldp+312,((0x3ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x12U)))),18);
    bufp->fullIData(oldp+313,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
    bufp->fullIData(oldp+314,((0x3ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x12U)))),18);
    bufp->fullIData(oldp+315,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
    bufp->fullIData(oldp+316,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
    bufp->fullIData(oldp+317,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
    bufp->fullIData(oldp+318,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
    bufp->fullIData(oldp+319,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
    bufp->fullIData(oldp+320,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
    bufp->fullIData(oldp+321,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
    bufp->fullQData(oldp+322,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
    bufp->fullQData(oldp+324,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
    bufp->fullQData(oldp+326,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
    bufp->fullQData(oldp+328,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
    bufp->fullQData(oldp+330,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
    bufp->fullQData(oldp+332,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
    bufp->fullQData(oldp+334,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
    bufp->fullBit(oldp+336,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x26U)))));
    bufp->fullQData(oldp+337,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x12U)))))))) 
                                << 0x27U) | (0x7fffffffffULL 
                                             & VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
    bufp->fullQData(oldp+339,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x25U)))))))) 
                                << 0x27U) | ((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(
                                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x13U))))) 
                                             << 0x14U))),41);
    bufp->fullQData(oldp+341,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
    bufp->fullQData(oldp+343,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
    bufp->fullQData(oldp+345,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
    bufp->fullIData(oldp+347,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
    bufp->fullIData(oldp+348,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
    bufp->fullIData(oldp+349,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
    bufp->fullIData(oldp+350,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
    bufp->fullIData(oldp+351,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
    bufp->fullIData(oldp+352,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
    bufp->fullIData(oldp+353,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
    bufp->fullIData(oldp+354,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
    bufp->fullIData(oldp+355,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
    bufp->fullIData(oldp+356,(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
    bufp->fullIData(oldp+357,((0x3ffffU & (IData)((0x3ffffULL 
                                                   & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                      >> 0x15U))))),18);
    bufp->fullIData(oldp+358,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                         >> 0x15U)))))),18);
    bufp->fullBit(oldp+359,((1U & (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x15U))))));
    bufp->fullBit(oldp+360,((1U & (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x14U))))));
    bufp->fullIData(oldp+361,((0x3ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x14U)))),18);
    bufp->fullIData(oldp+362,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U))))),18);
    bufp->fullBit(oldp+363,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+364,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x13U)))));
    bufp->fullIData(oldp+365,((0x3ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x15U)))),18);
    bufp->fullIData(oldp+366,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U))))),18);
    bufp->fullBit(oldp+367,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+368,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+369,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
    bufp->fullIData(oldp+370,((0x3ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x15U)))),18);
    bufp->fullIData(oldp+371,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U))))),18);
    bufp->fullBit(oldp+372,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+373,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+374,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
    bufp->fullBit(oldp+375,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__wait_for_sync));
    bufp->fullQData(oldp+376,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ib_a),38);
    bufp->fullQData(oldp+378,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ib_b),38);
    bufp->fullQData(oldp+380,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ib_c),46);
    bufp->fullBit(oldp+382,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ib_sync));
    bufp->fullBit(oldp+383,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__b_started));
    bufp->fullBit(oldp+384,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ob_sync));
    bufp->fullQData(oldp+385,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x14U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
    bufp->fullQData(oldp+387,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x14U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
    bufp->fullCData(oldp+389,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__iaddr),4);
    bufp->fullQData(oldp+390,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[0]),38);
    bufp->fullQData(oldp+392,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[1]),38);
    bufp->fullQData(oldp+394,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[2]),38);
    bufp->fullQData(oldp+396,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[3]),38);
    bufp->fullQData(oldp+398,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[4]),38);
    bufp->fullQData(oldp+400,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[5]),38);
    bufp->fullQData(oldp+402,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[6]),38);
    bufp->fullQData(oldp+404,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__imem[7]),38);
    bufp->fullCData(oldp+406,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__oaddr),4);
    bufp->fullQData(oldp+407,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[0]),40);
    bufp->fullQData(oldp+409,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[1]),40);
    bufp->fullQData(oldp+411,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[2]),40);
    bufp->fullQData(oldp+413,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[3]),40);
    bufp->fullQData(oldp+415,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[4]),40);
    bufp->fullQData(oldp+417,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[5]),40);
    bufp->fullQData(oldp+419,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[6]),40);
    bufp->fullQData(oldp+421,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__omem[7]),40);
    bufp->fullCData(oldp+423,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__nxt_oaddr),3);
    bufp->fullQData(oldp+424,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__pre_ovalue),40);
    bufp->fullQData(oldp+426,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
    bufp->fullQData(oldp+428,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
    bufp->fullBit(oldp+430,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+431,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+432,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
    bufp->fullIData(oldp+434,((0x7ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+435,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
    bufp->fullIData(oldp+436,((0x7ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+437,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
    bufp->fullIData(oldp+438,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
    bufp->fullIData(oldp+439,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
    bufp->fullIData(oldp+440,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
    bufp->fullIData(oldp+441,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
    bufp->fullIData(oldp+442,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
    bufp->fullIData(oldp+443,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
    bufp->fullQData(oldp+444,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
    bufp->fullQData(oldp+446,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
    bufp->fullQData(oldp+448,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
    bufp->fullQData(oldp+450,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
    bufp->fullQData(oldp+452,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
    bufp->fullQData(oldp+454,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
    bufp->fullQData(oldp+456,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
    bufp->fullBit(oldp+458,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x28U)))));
    bufp->fullQData(oldp+459,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x13U)))))))) 
                                << 0x29U) | (0x1ffffffffffULL 
                                             & VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
    bufp->fullQData(oldp+461,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x27U)))))))) 
                                << 0x29U) | ((QData)((IData)(
                                                             (0xfffffU 
                                                              & (IData)(
                                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x14U))))) 
                                             << 0x15U))),43);
    bufp->fullQData(oldp+463,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
    bufp->fullQData(oldp+465,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
    bufp->fullQData(oldp+467,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
    bufp->fullIData(oldp+469,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
    bufp->fullIData(oldp+470,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
    bufp->fullIData(oldp+471,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
    bufp->fullIData(oldp+472,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
    bufp->fullIData(oldp+473,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
    bufp->fullIData(oldp+474,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
    bufp->fullIData(oldp+475,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
    bufp->fullIData(oldp+476,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
    bufp->fullIData(oldp+477,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
    bufp->fullIData(oldp+478,(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
    bufp->fullIData(oldp+479,((0xfffffU & (IData)((0xfffffULL 
                                                   & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                      >> 0x15U))))),20);
    bufp->fullIData(oldp+480,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0xfffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x15U)))))),20);
    bufp->fullBit(oldp+481,((1U & (IData)((0xfffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x15U))))));
    bufp->fullBit(oldp+482,((1U & (IData)((0x1fffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x14U))))));
    bufp->fullIData(oldp+483,((0xfffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x14U)))),20);
    bufp->fullIData(oldp+484,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U))))),20);
    bufp->fullBit(oldp+485,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+486,((0xfffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x15U)))),20);
    bufp->fullIData(oldp+487,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U))))),20);
    bufp->fullBit(oldp+488,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+489,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+490,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
    bufp->fullIData(oldp+491,((0xfffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x15U)))),20);
    bufp->fullIData(oldp+492,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U))))),20);
    bufp->fullBit(oldp+493,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+494,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+495,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
    bufp->fullIData(oldp+496,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__m_r),21);
    bufp->fullIData(oldp+497,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__m_i),21);
    bufp->fullIData(oldp+498,((0x1fffffU & (IData)(
                                                   (vlSelf->fft_ifft__DOT__fft__DOT__w_d4 
                                                    >> 0x15U)))),21);
    bufp->fullIData(oldp+499,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__w_d4))),21);
    bufp->fullIData(oldp+500,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_r),22);
    bufp->fullIData(oldp+501,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_i),22);
    bufp->fullIData(oldp+502,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__sto_r),22);
    bufp->fullIData(oldp+503,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__sto_i),22);
    bufp->fullBit(oldp+504,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__wait_for_sync));
    bufp->fullBit(oldp+505,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__stage));
    bufp->fullCData(oldp+506,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__sync_pipe),2);
    bufp->fullIData(oldp+507,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__o_r),21);
    bufp->fullIData(oldp+508,(vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__o_i),21);
    bufp->fullIData(oldp+509,((0x1fffffU & (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_i 
                                            >> 1U))),21);
    bufp->fullIData(oldp+510,((0x1fffffU & ((IData)(1U) 
                                            + (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_i 
                                               >> 1U)))),21);
    bufp->fullBit(oldp+511,((1U & (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_i 
                                   >> 1U))));
    bufp->fullBit(oldp+512,((1U & vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_i)));
    bufp->fullIData(oldp+513,((0x1fffffU & (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_r 
                                            >> 1U))),21);
    bufp->fullIData(oldp+514,((0x1fffffU & ((IData)(1U) 
                                            + (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_r 
                                               >> 1U)))),21);
    bufp->fullBit(oldp+515,((1U & (vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_r 
                                   >> 1U))));
    bufp->fullBit(oldp+516,((1U & vlSelf->fft_ifft__DOT__fft__DOT__stage_2__DOT__rnd_r)));
    bufp->fullBit(oldp+517,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__wait_for_sync));
    bufp->fullQData(oldp+518,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ib_a),34);
    bufp->fullQData(oldp+520,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ib_b),34);
    bufp->fullQData(oldp+522,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ib_c),42);
    bufp->fullBit(oldp+524,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ib_sync));
    bufp->fullBit(oldp+525,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__b_started));
    bufp->fullBit(oldp+526,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ob_sync));
    bufp->fullQData(oldp+527,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
    bufp->fullQData(oldp+529,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
    bufp->fullCData(oldp+531,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__iaddr),8);
    bufp->fullCData(oldp+532,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__oaddr),8);
    bufp->fullCData(oldp+533,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__nxt_oaddr),7);
    bufp->fullQData(oldp+534,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__pre_ovalue),36);
    bufp->fullQData(oldp+536,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left),34);
    bufp->fullQData(oldp+538,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right),34);
    bufp->fullBit(oldp+540,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+541,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+542,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef),42);
    bufp->fullIData(oldp+544,((0x1ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x11U)))),17);
    bufp->fullIData(oldp+545,((0x1ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))),17);
    bufp->fullIData(oldp+546,((0x1ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x11U)))),17);
    bufp->fullIData(oldp+547,((0x1ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right))),17);
    bufp->fullIData(oldp+548,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),21);
    bufp->fullIData(oldp+549,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),21);
    bufp->fullIData(oldp+550,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),18);
    bufp->fullIData(oldp+551,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),18);
    bufp->fullIData(oldp+552,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),18);
    bufp->fullIData(oldp+553,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),18);
    bufp->fullQData(oldp+554,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv),37);
    bufp->fullQData(oldp+556,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv),37);
    bufp->fullQData(oldp+558,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),39);
    bufp->fullQData(oldp+560,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),39);
    bufp->fullQData(oldp+562,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),41);
    bufp->fullQData(oldp+564,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one),41);
    bufp->fullQData(oldp+566,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two),41);
    bufp->fullBit(oldp+568,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x24U)))));
    bufp->fullQData(oldp+569,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x11U)))))))) 
                                << 0x25U) | (0x1fffffffffULL 
                                             & VL_SHIFTL_QQI(37,37,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U)))),39);
    bufp->fullQData(oldp+571,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x23U)))))))) 
                                << 0x25U) | ((QData)((IData)(
                                                             (0x3ffffU 
                                                              & (IData)(
                                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x12U))))) 
                                             << 0x13U))),39);
    bufp->fullQData(oldp+573,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved),37);
    bufp->fullQData(oldp+575,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),41);
    bufp->fullQData(oldp+577,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),41);
    bufp->fullIData(oldp+579,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
    bufp->fullIData(oldp+580,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
    bufp->fullIData(oldp+581,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
    bufp->fullIData(oldp+582,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
    bufp->fullIData(oldp+583,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),21);
    bufp->fullIData(oldp+584,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),21);
    bufp->fullIData(oldp+585,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),18);
    bufp->fullIData(oldp+586,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),18);
    bufp->fullIData(oldp+587,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),22);
    bufp->fullIData(oldp+588,(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),19);
    bufp->fullIData(oldp+589,((0x3ffffU & (IData)((0x3ffffULL 
                                                   & (VL_SHIFTL_QQI(37,37,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                      >> 0x13U))))),18);
    bufp->fullIData(oldp+590,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(37,37,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                         >> 0x13U)))))),18);
    bufp->fullBit(oldp+591,((1U & (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(37,37,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                              >> 0x13U))))));
    bufp->fullBit(oldp+592,((1U & (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(37,37,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                              >> 0x12U))))));
    bufp->fullIData(oldp+593,((0x3ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x12U)))),18);
    bufp->fullIData(oldp+594,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x12U))))),18);
    bufp->fullBit(oldp+595,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x12U)))));
    bufp->fullIData(oldp+596,((0x3ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x13U)))),18);
    bufp->fullIData(oldp+597,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x13U))))),18);
    bufp->fullBit(oldp+598,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+599,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x12U)))));
    bufp->fullIData(oldp+600,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),18);
    bufp->fullIData(oldp+601,((0x3ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x13U)))),18);
    bufp->fullIData(oldp+602,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x13U))))),18);
    bufp->fullBit(oldp+603,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+604,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x12U)))));
    bufp->fullIData(oldp+605,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),18);
    bufp->fullBit(oldp+606,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__wait_for_sync));
    bufp->fullQData(oldp+607,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ib_a),38);
    bufp->fullQData(oldp+609,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ib_b),38);
    bufp->fullQData(oldp+611,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ib_c),46);
    bufp->fullBit(oldp+613,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ib_sync));
    bufp->fullBit(oldp+614,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__b_started));
    bufp->fullBit(oldp+615,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ob_sync));
    bufp->fullQData(oldp+616,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
    bufp->fullQData(oldp+618,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
    bufp->fullCData(oldp+620,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__iaddr),5);
    bufp->fullQData(oldp+621,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[0]),38);
    bufp->fullQData(oldp+623,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[1]),38);
    bufp->fullQData(oldp+625,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[2]),38);
    bufp->fullQData(oldp+627,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[3]),38);
    bufp->fullQData(oldp+629,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[4]),38);
    bufp->fullQData(oldp+631,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[5]),38);
    bufp->fullQData(oldp+633,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[6]),38);
    bufp->fullQData(oldp+635,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[7]),38);
    bufp->fullQData(oldp+637,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[8]),38);
    bufp->fullQData(oldp+639,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[9]),38);
    bufp->fullQData(oldp+641,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[10]),38);
    bufp->fullQData(oldp+643,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[11]),38);
    bufp->fullQData(oldp+645,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[12]),38);
    bufp->fullQData(oldp+647,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[13]),38);
    bufp->fullQData(oldp+649,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[14]),38);
    bufp->fullQData(oldp+651,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__imem[15]),38);
    bufp->fullCData(oldp+653,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__oaddr),5);
    bufp->fullQData(oldp+654,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[0]),38);
    bufp->fullQData(oldp+656,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[1]),38);
    bufp->fullQData(oldp+658,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[2]),38);
    bufp->fullQData(oldp+660,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[3]),38);
    bufp->fullQData(oldp+662,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[4]),38);
    bufp->fullQData(oldp+664,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[5]),38);
    bufp->fullQData(oldp+666,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[6]),38);
    bufp->fullQData(oldp+668,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[7]),38);
    bufp->fullQData(oldp+670,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[8]),38);
    bufp->fullQData(oldp+672,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[9]),38);
    bufp->fullQData(oldp+674,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[10]),38);
    bufp->fullQData(oldp+676,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[11]),38);
    bufp->fullQData(oldp+678,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[12]),38);
    bufp->fullQData(oldp+680,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[13]),38);
    bufp->fullQData(oldp+682,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[14]),38);
    bufp->fullQData(oldp+684,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__omem[15]),38);
    bufp->fullCData(oldp+686,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__nxt_oaddr),4);
    bufp->fullQData(oldp+687,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__pre_ovalue),38);
    bufp->fullQData(oldp+689,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
    bufp->fullQData(oldp+691,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
    bufp->fullBit(oldp+693,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+694,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+695,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
    bufp->fullIData(oldp+697,((0x7ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+698,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
    bufp->fullIData(oldp+699,((0x7ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+700,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
    bufp->fullIData(oldp+701,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
    bufp->fullIData(oldp+702,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
    bufp->fullIData(oldp+703,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
    bufp->fullIData(oldp+704,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
    bufp->fullIData(oldp+705,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
    bufp->fullIData(oldp+706,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
    bufp->fullQData(oldp+707,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
    bufp->fullQData(oldp+709,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
    bufp->fullQData(oldp+711,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
    bufp->fullQData(oldp+713,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
    bufp->fullQData(oldp+715,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
    bufp->fullQData(oldp+717,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
    bufp->fullQData(oldp+719,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
    bufp->fullBit(oldp+721,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x28U)))));
    bufp->fullQData(oldp+722,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x13U)))))))) 
                                << 0x29U) | (0x1ffffffffffULL 
                                             & VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
    bufp->fullQData(oldp+724,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x27U)))))))) 
                                << 0x29U) | ((QData)((IData)(
                                                             (0xfffffU 
                                                              & (IData)(
                                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x14U))))) 
                                             << 0x15U))),43);
    bufp->fullQData(oldp+726,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
    bufp->fullQData(oldp+728,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
    bufp->fullQData(oldp+730,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
    bufp->fullIData(oldp+732,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
    bufp->fullIData(oldp+733,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
    bufp->fullIData(oldp+734,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
    bufp->fullIData(oldp+735,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
    bufp->fullIData(oldp+736,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
    bufp->fullIData(oldp+737,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
    bufp->fullIData(oldp+738,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
    bufp->fullIData(oldp+739,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
    bufp->fullIData(oldp+740,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
    bufp->fullIData(oldp+741,(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
    bufp->fullIData(oldp+742,((0x7ffffU & (IData)((0x7ffffULL 
                                                   & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                      >> 0x16U))))),19);
    bufp->fullIData(oldp+743,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x7ffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x16U)))))),19);
    bufp->fullBit(oldp+744,((1U & (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x16U))))));
    bufp->fullBit(oldp+745,((1U & (IData)((0xfffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x15U))))));
    bufp->fullIData(oldp+746,((0x7ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x15U)))),19);
    bufp->fullIData(oldp+747,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x15U))))),19);
    bufp->fullBit(oldp+748,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+749,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+750,((0x7ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x16U)))),19);
    bufp->fullIData(oldp+751,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x16U))))),19);
    bufp->fullBit(oldp+752,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+753,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x15U)))));
    bufp->fullIData(oldp+754,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),21);
    bufp->fullIData(oldp+755,((0x7ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x16U)))),19);
    bufp->fullIData(oldp+756,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x16U))))),19);
    bufp->fullBit(oldp+757,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+758,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x15U)))));
    bufp->fullIData(oldp+759,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),21);
    bufp->fullBit(oldp+760,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__wait_for_sync));
    bufp->fullCData(oldp+761,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__pipeline),3);
    bufp->fullIData(oldp+762,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__sum_r),21);
    bufp->fullIData(oldp+763,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__sum_i),21);
    bufp->fullIData(oldp+764,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__diff_r),21);
    bufp->fullIData(oldp+765,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__diff_i),21);
    bufp->fullQData(oldp+766,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__ob_a),42);
    bufp->fullQData(oldp+768,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__ob_b_r)) 
                                << 0x15U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__ob_b_i)))),42);
    bufp->fullIData(oldp+770,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__ob_b_r),21);
    bufp->fullIData(oldp+771,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__ob_b_i),21);
    bufp->fullSData(oldp+772,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__iaddr),9);
    bufp->fullQData(oldp+773,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__imem[0]),40);
    bufp->fullQData(oldp+775,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__imem[1]),40);
    bufp->fullIData(oldp+777,((0xfffffU & (IData)((
                                                   vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__imem
                                                   [1U] 
                                                   >> 0x14U)))),20);
    bufp->fullIData(oldp+778,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__imem
                                                  [1U]))),20);
    bufp->fullIData(oldp+779,((0xfffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__w_d8 
                                                   >> 0x14U)))),20);
    bufp->fullIData(oldp+780,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__w_d8))),20);
    bufp->fullQData(oldp+781,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__omem[0]),42);
    bufp->fullQData(oldp+783,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__omem[1]),42);
    bufp->fullIData(oldp+785,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_sum_r),21);
    bufp->fullIData(oldp+786,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_sum_i),21);
    bufp->fullIData(oldp+787,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_diff_r),21);
    bufp->fullIData(oldp+788,(vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_diff_i),21);
    bufp->fullIData(oldp+789,((0x1fffffU & (- vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_diff_r))),21);
    bufp->fullIData(oldp+790,((0x1fffffU & (- vlSelf->fft_ifft__DOT__fft__DOT__stage_4__DOT__rnd_diff_i))),21);
    bufp->fullBit(oldp+791,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__wait_for_sync));
    bufp->fullIData(oldp+792,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ib_a),32);
    bufp->fullIData(oldp+793,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ib_b),32);
    bufp->fullQData(oldp+794,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ib_c),40);
    bufp->fullBit(oldp+796,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ib_sync));
    bufp->fullBit(oldp+797,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__b_started));
    bufp->fullBit(oldp+798,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ob_sync));
    bufp->fullQData(oldp+799,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x11U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),34);
    bufp->fullQData(oldp+801,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x11U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),34);
    bufp->fullSData(oldp+803,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__iaddr),9);
    bufp->fullSData(oldp+804,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__oaddr),9);
    bufp->fullCData(oldp+805,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__nxt_oaddr),8);
    bufp->fullQData(oldp+806,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__pre_ovalue),34);
    bufp->fullIData(oldp+808,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left),32);
    bufp->fullIData(oldp+809,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right),32);
    bufp->fullBit(oldp+810,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+811,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+812,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef),40);
    bufp->fullSData(oldp+814,((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+815,((0xffffU & vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left)),16);
    bufp->fullSData(oldp+816,((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+817,((0xffffU & vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right)),16);
    bufp->fullIData(oldp+818,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),20);
    bufp->fullIData(oldp+819,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),20);
    bufp->fullIData(oldp+820,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),17);
    bufp->fullIData(oldp+821,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),17);
    bufp->fullIData(oldp+822,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),17);
    bufp->fullIData(oldp+823,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),17);
    bufp->fullQData(oldp+824,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv),35);
    bufp->fullQData(oldp+826,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv),35);
    bufp->fullQData(oldp+828,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),37);
    bufp->fullQData(oldp+830,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),37);
    bufp->fullQData(oldp+832,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),39);
    bufp->fullQData(oldp+834,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one),39);
    bufp->fullQData(oldp+836,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two),39);
    bufp->fullBit(oldp+838,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x22U)))));
    bufp->fullQData(oldp+839,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x10U)))))))) 
                                << 0x23U) | (0x7ffffffffULL 
                                             & VL_SHIFTL_QQI(35,35,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U)))),37);
    bufp->fullQData(oldp+841,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x21U)))))))) 
                                << 0x23U) | ((QData)((IData)(
                                                             (0x1ffffU 
                                                              & (IData)(
                                                                        (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x11U))))) 
                                             << 0x12U))),37);
    bufp->fullQData(oldp+843,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved),35);
    bufp->fullQData(oldp+845,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),39);
    bufp->fullQData(oldp+847,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),39);
    bufp->fullIData(oldp+849,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),17);
    bufp->fullIData(oldp+850,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),17);
    bufp->fullIData(oldp+851,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),17);
    bufp->fullIData(oldp+852,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),17);
    bufp->fullIData(oldp+853,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),20);
    bufp->fullIData(oldp+854,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),20);
    bufp->fullIData(oldp+855,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),17);
    bufp->fullIData(oldp+856,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),17);
    bufp->fullIData(oldp+857,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),21);
    bufp->fullIData(oldp+858,(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),18);
    bufp->fullIData(oldp+859,((0x1ffffU & (IData)((0x1ffffULL 
                                                   & (VL_SHIFTL_QQI(35,35,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                      >> 0x12U))))),17);
    bufp->fullIData(oldp+860,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x1ffffULL 
                                                      & (VL_SHIFTL_QQI(35,35,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                         >> 0x12U)))))),17);
    bufp->fullBit(oldp+861,((1U & (IData)((0x1ffffULL 
                                           & (VL_SHIFTL_QQI(35,35,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                              >> 0x12U))))));
    bufp->fullBit(oldp+862,((1U & (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(35,35,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                              >> 0x11U))))));
    bufp->fullIData(oldp+863,((0x1ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x11U)))),17);
    bufp->fullIData(oldp+864,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x11U))))),17);
    bufp->fullBit(oldp+865,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x11U)))));
    bufp->fullIData(oldp+866,((0x1ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x12U)))),17);
    bufp->fullIData(oldp+867,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x12U))))),17);
    bufp->fullBit(oldp+868,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+869,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x11U)))));
    bufp->fullIData(oldp+870,((0x1ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),17);
    bufp->fullIData(oldp+871,((0x1ffffU & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x12U)))),17);
    bufp->fullIData(oldp+872,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x12U))))),17);
    bufp->fullBit(oldp+873,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+874,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x11U)))));
    bufp->fullIData(oldp+875,((0x1ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),17);
    bufp->fullBit(oldp+876,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__wait_for_sync));
    bufp->fullQData(oldp+877,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ib_a),36);
    bufp->fullQData(oldp+879,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ib_b),36);
    bufp->fullQData(oldp+881,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ib_c),44);
    bufp->fullBit(oldp+883,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ib_sync));
    bufp->fullBit(oldp+884,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__b_started));
    bufp->fullBit(oldp+885,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ob_sync));
    bufp->fullQData(oldp+886,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
    bufp->fullQData(oldp+888,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
    bufp->fullCData(oldp+890,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__iaddr),6);
    bufp->fullQData(oldp+891,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[0]),36);
    bufp->fullQData(oldp+893,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[1]),36);
    bufp->fullQData(oldp+895,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[2]),36);
    bufp->fullQData(oldp+897,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[3]),36);
    bufp->fullQData(oldp+899,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[4]),36);
    bufp->fullQData(oldp+901,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[5]),36);
    bufp->fullQData(oldp+903,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[6]),36);
    bufp->fullQData(oldp+905,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[7]),36);
    bufp->fullQData(oldp+907,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[8]),36);
    bufp->fullQData(oldp+909,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[9]),36);
    bufp->fullQData(oldp+911,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[10]),36);
    bufp->fullQData(oldp+913,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[11]),36);
    bufp->fullQData(oldp+915,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[12]),36);
    bufp->fullQData(oldp+917,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[13]),36);
    bufp->fullQData(oldp+919,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[14]),36);
    bufp->fullQData(oldp+921,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[15]),36);
    bufp->fullQData(oldp+923,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[16]),36);
    bufp->fullQData(oldp+925,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[17]),36);
    bufp->fullQData(oldp+927,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[18]),36);
    bufp->fullQData(oldp+929,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[19]),36);
    bufp->fullQData(oldp+931,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[20]),36);
    bufp->fullQData(oldp+933,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[21]),36);
    bufp->fullQData(oldp+935,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[22]),36);
    bufp->fullQData(oldp+937,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[23]),36);
    bufp->fullQData(oldp+939,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[24]),36);
    bufp->fullQData(oldp+941,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[25]),36);
    bufp->fullQData(oldp+943,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[26]),36);
    bufp->fullQData(oldp+945,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[27]),36);
    bufp->fullQData(oldp+947,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[28]),36);
    bufp->fullQData(oldp+949,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[29]),36);
    bufp->fullQData(oldp+951,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[30]),36);
    bufp->fullQData(oldp+953,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__imem[31]),36);
    bufp->fullCData(oldp+955,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__oaddr),6);
    bufp->fullQData(oldp+956,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[0]),38);
    bufp->fullQData(oldp+958,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[1]),38);
    bufp->fullQData(oldp+960,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[2]),38);
    bufp->fullQData(oldp+962,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[3]),38);
    bufp->fullQData(oldp+964,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[4]),38);
    bufp->fullQData(oldp+966,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[5]),38);
    bufp->fullQData(oldp+968,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[6]),38);
    bufp->fullQData(oldp+970,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[7]),38);
    bufp->fullQData(oldp+972,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[8]),38);
    bufp->fullQData(oldp+974,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[9]),38);
    bufp->fullQData(oldp+976,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[10]),38);
    bufp->fullQData(oldp+978,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[11]),38);
    bufp->fullQData(oldp+980,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[12]),38);
    bufp->fullQData(oldp+982,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[13]),38);
    bufp->fullQData(oldp+984,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[14]),38);
    bufp->fullQData(oldp+986,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[15]),38);
    bufp->fullQData(oldp+988,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[16]),38);
    bufp->fullQData(oldp+990,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[17]),38);
    bufp->fullQData(oldp+992,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[18]),38);
    bufp->fullQData(oldp+994,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[19]),38);
    bufp->fullQData(oldp+996,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[20]),38);
    bufp->fullQData(oldp+998,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[21]),38);
    bufp->fullQData(oldp+1000,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[22]),38);
    bufp->fullQData(oldp+1002,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[23]),38);
    bufp->fullQData(oldp+1004,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[24]),38);
    bufp->fullQData(oldp+1006,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[25]),38);
    bufp->fullQData(oldp+1008,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[26]),38);
    bufp->fullQData(oldp+1010,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[27]),38);
    bufp->fullQData(oldp+1012,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[28]),38);
    bufp->fullQData(oldp+1014,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[29]),38);
    bufp->fullQData(oldp+1016,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[30]),38);
    bufp->fullQData(oldp+1018,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__omem[31]),38);
    bufp->fullCData(oldp+1020,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__nxt_oaddr),5);
    bufp->fullQData(oldp+1021,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__pre_ovalue),38);
    bufp->fullQData(oldp+1023,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
    bufp->fullQData(oldp+1025,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
    bufp->fullBit(oldp+1027,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1028,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1029,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
    bufp->fullIData(oldp+1031,((0x3ffffU & (IData)(
                                                   (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                    >> 0x12U)))),18);
    bufp->fullIData(oldp+1032,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
    bufp->fullIData(oldp+1033,((0x3ffffU & (IData)(
                                                   (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                    >> 0x12U)))),18);
    bufp->fullIData(oldp+1034,((0x3ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
    bufp->fullIData(oldp+1035,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
    bufp->fullIData(oldp+1036,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
    bufp->fullIData(oldp+1037,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
    bufp->fullIData(oldp+1038,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
    bufp->fullIData(oldp+1039,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
    bufp->fullIData(oldp+1040,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
    bufp->fullQData(oldp+1041,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
    bufp->fullQData(oldp+1043,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
    bufp->fullQData(oldp+1045,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
    bufp->fullQData(oldp+1047,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
    bufp->fullQData(oldp+1049,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
    bufp->fullQData(oldp+1051,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
    bufp->fullQData(oldp+1053,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
    bufp->fullBit(oldp+1055,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x26U)))));
    bufp->fullQData(oldp+1056,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x12U)))))))) 
                                 << 0x27U) | (0x7fffffffffULL 
                                              & VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
    bufp->fullQData(oldp+1058,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x25U)))))))) 
                                 << 0x27U) | ((QData)((IData)(
                                                              (0x7ffffU 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x13U))))) 
                                              << 0x14U))),41);
    bufp->fullQData(oldp+1060,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
    bufp->fullQData(oldp+1062,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
    bufp->fullQData(oldp+1064,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
    bufp->fullIData(oldp+1066,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
    bufp->fullIData(oldp+1067,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
    bufp->fullIData(oldp+1068,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
    bufp->fullIData(oldp+1069,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
    bufp->fullIData(oldp+1070,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
    bufp->fullIData(oldp+1071,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
    bufp->fullIData(oldp+1072,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
    bufp->fullIData(oldp+1073,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
    bufp->fullIData(oldp+1074,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
    bufp->fullIData(oldp+1075,(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
    bufp->fullIData(oldp+1076,((0x7ffffU & (IData)(
                                                   (0x7ffffULL 
                                                    & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                       >> 0x14U))))),19);
    bufp->fullIData(oldp+1077,((0x7ffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (0x7ffffULL 
                                                       & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                          >> 0x14U)))))),19);
    bufp->fullBit(oldp+1078,((1U & (IData)((0x7ffffULL 
                                            & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+1079,((1U & (IData)((0xfffffULL 
                                            & (VL_SHIFTL_QQI(39,39,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                               >> 0x13U))))));
    bufp->fullIData(oldp+1080,((0x7ffffU & (IData)(
                                                   (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                    >> 0x13U)))),19);
    bufp->fullIData(oldp+1081,((0x7ffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                       >> 0x13U))))),19);
    bufp->fullBit(oldp+1082,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x13U)))));
    bufp->fullIData(oldp+1083,((0x7ffffU & (IData)(
                                                   (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                    >> 0x14U)))),19);
    bufp->fullIData(oldp+1084,((0x7ffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                       >> 0x14U))))),19);
    bufp->fullBit(oldp+1085,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+1086,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x13U)))));
    bufp->fullIData(oldp+1087,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),19);
    bufp->fullIData(oldp+1088,((0x7ffffU & (IData)(
                                                   (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                    >> 0x14U)))),19);
    bufp->fullIData(oldp+1089,((0x7ffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                       >> 0x14U))))),19);
    bufp->fullBit(oldp+1090,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+1091,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x13U)))));
    bufp->fullIData(oldp+1092,((0x7ffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),19);
    bufp->fullBit(oldp+1093,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__wait_for_sync));
    bufp->fullQData(oldp+1094,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ib_a),40);
    bufp->fullQData(oldp+1096,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ib_b),40);
    bufp->fullQData(oldp+1098,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ib_c),48);
    bufp->fullBit(oldp+1100,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ib_sync));
    bufp->fullBit(oldp+1101,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__b_started));
    bufp->fullBit(oldp+1102,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ob_sync));
    bufp->fullQData(oldp+1103,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x14U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
    bufp->fullQData(oldp+1105,((((QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x14U) | (QData)((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
    bufp->fullCData(oldp+1107,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__iaddr),3);
    bufp->fullQData(oldp+1108,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__imem[0]),40);
    bufp->fullQData(oldp+1110,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__imem[1]),40);
    bufp->fullQData(oldp+1112,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__imem[2]),40);
    bufp->fullQData(oldp+1114,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__imem[3]),40);
    bufp->fullCData(oldp+1116,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__oaddr),3);
    bufp->fullQData(oldp+1117,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__omem[0]),40);
    bufp->fullQData(oldp+1119,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__omem[1]),40);
    bufp->fullQData(oldp+1121,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__omem[2]),40);
    bufp->fullQData(oldp+1123,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__omem[3]),40);
    bufp->fullCData(oldp+1125,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__nxt_oaddr),2);
    bufp->fullQData(oldp+1126,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__pre_ovalue),40);
    bufp->fullQData(oldp+1128,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left),40);
    bufp->fullQData(oldp+1130,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right),40);
    bufp->fullBit(oldp+1132,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1133,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1134,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef),48);
    bufp->fullIData(oldp+1136,((0xfffffU & (IData)(
                                                   (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                    >> 0x14U)))),20);
    bufp->fullIData(oldp+1137,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))),20);
    bufp->fullIData(oldp+1138,((0xfffffU & (IData)(
                                                   (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                    >> 0x14U)))),20);
    bufp->fullIData(oldp+1139,((0xfffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right))),20);
    bufp->fullIData(oldp+1140,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),24);
    bufp->fullIData(oldp+1141,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),24);
    bufp->fullIData(oldp+1142,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),21);
    bufp->fullIData(oldp+1143,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),21);
    bufp->fullIData(oldp+1144,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),21);
    bufp->fullIData(oldp+1145,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),21);
    bufp->fullQData(oldp+1146,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv),43);
    bufp->fullQData(oldp+1148,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv),43);
    bufp->fullQData(oldp+1150,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),45);
    bufp->fullQData(oldp+1152,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),45);
    bufp->fullQData(oldp+1154,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),47);
    bufp->fullQData(oldp+1156,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one),47);
    bufp->fullQData(oldp+1158,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two),47);
    bufp->fullBit(oldp+1160,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x2aU)))));
    bufp->fullQData(oldp+1161,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x14U)))))))) 
                                 << 0x2bU) | (0x7ffffffffffULL 
                                              & VL_SHIFTL_QQI(43,43,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U)))),45);
    bufp->fullQData(oldp+1163,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x29U)))))))) 
                                 << 0x2bU) | ((QData)((IData)(
                                                              (0x1fffffU 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x15U))))) 
                                              << 0x16U))),45);
    bufp->fullQData(oldp+1165,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved),43);
    bufp->fullQData(oldp+1167,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),47);
    bufp->fullQData(oldp+1169,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),47);
    bufp->fullIData(oldp+1171,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
    bufp->fullIData(oldp+1172,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
    bufp->fullIData(oldp+1173,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
    bufp->fullIData(oldp+1174,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
    bufp->fullIData(oldp+1175,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),24);
    bufp->fullIData(oldp+1176,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),24);
    bufp->fullIData(oldp+1177,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),21);
    bufp->fullIData(oldp+1178,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),21);
    bufp->fullIData(oldp+1179,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),25);
    bufp->fullIData(oldp+1180,(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),22);
    bufp->fullIData(oldp+1181,((0xfffffU & (IData)(
                                                   (0xfffffULL 
                                                    & (VL_SHIFTL_QQI(43,43,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                       >> 0x17U))))),20);
    bufp->fullIData(oldp+1182,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (0xfffffULL 
                                                       & (VL_SHIFTL_QQI(43,43,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                          >> 0x17U)))))),20);
    bufp->fullBit(oldp+1183,((1U & (IData)((0xfffffULL 
                                            & (VL_SHIFTL_QQI(43,43,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+1184,((1U & (IData)((0x1fffffULL 
                                            & (VL_SHIFTL_QQI(43,43,32, vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                               >> 0x16U))))));
    bufp->fullIData(oldp+1185,((0xfffffU & (IData)(
                                                   (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                    >> 0x16U)))),20);
    bufp->fullIData(oldp+1186,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                       >> 0x16U))))),20);
    bufp->fullBit(oldp+1187,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+1188,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x15U)))));
    bufp->fullIData(oldp+1189,((0xfffffU & (IData)(
                                                   (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                    >> 0x17U)))),20);
    bufp->fullIData(oldp+1190,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                       >> 0x17U))))),20);
    bufp->fullBit(oldp+1191,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+1192,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1193,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),22);
    bufp->fullIData(oldp+1194,((0xfffffU & (IData)(
                                                   (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                    >> 0x17U)))),20);
    bufp->fullIData(oldp+1195,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                       >> 0x17U))))),20);
    bufp->fullBit(oldp+1196,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+1197,((1U & (IData)((vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1198,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),22);
    bufp->fullBit(oldp+1199,(vlSelf->fft_ifft__DOT__ifft__DOT__br_sync));
    bufp->fullQData(oldp+1200,(vlSelf->fft_ifft__DOT__ifft__DOT__br_result),52);
    bufp->fullBit(oldp+1202,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s512));
    bufp->fullQData(oldp+1203,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d512),44);
    bufp->fullBit(oldp+1205,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s256));
    bufp->fullQData(oldp+1206,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d256),46);
    bufp->fullBit(oldp+1208,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s128));
    bufp->fullQData(oldp+1209,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d128),46);
    bufp->fullBit(oldp+1211,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s64));
    bufp->fullQData(oldp+1212,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d64),48);
    bufp->fullBit(oldp+1214,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s32));
    bufp->fullQData(oldp+1215,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d32),48);
    bufp->fullBit(oldp+1217,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s16));
    bufp->fullQData(oldp+1218,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d16),50);
    bufp->fullBit(oldp+1220,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s8));
    bufp->fullQData(oldp+1221,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d8),50);
    bufp->fullBit(oldp+1223,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s4));
    bufp->fullQData(oldp+1224,(vlSelf->fft_ifft__DOT__ifft__DOT__w_d4),52);
    bufp->fullBit(oldp+1226,(vlSelf->fft_ifft__DOT__ifft__DOT__w_s2));
    bufp->fullQData(oldp+1227,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__o_r)) 
                                 << 0x1aU) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__o_i)))),52);
    bufp->fullBit(oldp+1229,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__r_br_started) 
                              | (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__w_s2))));
    bufp->fullBit(oldp+1230,(vlSelf->fft_ifft__DOT__ifft__DOT__r_br_started));
    bufp->fullBit(oldp+1231,(vlSelf->fft_ifft__DOT__ifft__DOT____Vcellinp__revstage__i_ce));
    bufp->fullSData(oldp+1232,(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr),10);
    bufp->fullSData(oldp+1233,(((0x200U & ((~ ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                               >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                              << 8U)) 
                                   | ((0x80U & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                << 6U)) 
                                      | ((0x40U & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                   << 4U)) 
                                         | ((0x20U 
                                             & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                << 2U)) 
                                            | ((0x10U 
                                                & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr)) 
                                               | ((8U 
                                                   & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                      >> 2U)) 
                                                  | ((4U 
                                                      & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                         >> 4U)) 
                                                     | ((2U 
                                                         & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__wraddr) 
                                                              >> 8U)))))))))))),10);
    bufp->fullBit(oldp+1234,(vlSelf->fft_ifft__DOT__ifft__DOT__revstage__DOT__in_reset));
    bufp->fullBit(oldp+1235,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__wait_for_sync));
    bufp->fullQData(oldp+1236,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ib_a),46);
    bufp->fullQData(oldp+1238,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ib_b),46);
    bufp->fullQData(oldp+1240,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ib_c),54);
    bufp->fullBit(oldp+1242,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ib_sync));
    bufp->fullBit(oldp+1243,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__b_started));
    bufp->fullBit(oldp+1244,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ob_sync));
    bufp->fullQData(oldp+1245,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x17U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),46);
    bufp->fullQData(oldp+1247,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x17U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),46);
    bufp->fullCData(oldp+1249,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__iaddr),7);
    bufp->fullCData(oldp+1250,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__oaddr),7);
    bufp->fullCData(oldp+1251,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__nxt_oaddr),6);
    bufp->fullQData(oldp+1252,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__pre_ovalue),46);
    bufp->fullBit(oldp+1254,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__ib_sync) 
                              & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
    bufp->fullQData(oldp+1255,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left),46);
    bufp->fullQData(oldp+1257,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right),46);
    bufp->fullBit(oldp+1259,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1260,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1261,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef),54);
    bufp->fullIData(oldp+1263,((0x7fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x17U)))),23);
    bufp->fullIData(oldp+1264,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))),23);
    bufp->fullIData(oldp+1265,((0x7fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x17U)))),23);
    bufp->fullIData(oldp+1266,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right))),23);
    bufp->fullIData(oldp+1267,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),27);
    bufp->fullIData(oldp+1268,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),27);
    bufp->fullIData(oldp+1269,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),24);
    bufp->fullIData(oldp+1270,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),24);
    bufp->fullIData(oldp+1271,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),24);
    bufp->fullIData(oldp+1272,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),24);
    bufp->fullQData(oldp+1273,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv),49);
    bufp->fullQData(oldp+1275,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv),49);
    bufp->fullQData(oldp+1277,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),51);
    bufp->fullQData(oldp+1279,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),51);
    bufp->fullQData(oldp+1281,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),53);
    bufp->fullQData(oldp+1283,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one),53);
    bufp->fullQData(oldp+1285,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two),53);
    bufp->fullBit(oldp+1287,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x30U)))));
    bufp->fullQData(oldp+1288,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x17U)))))))) 
                                 << 0x31U) | (0x1ffffffffffffULL 
                                              & VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U)))),51);
    bufp->fullQData(oldp+1290,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x2fU)))))))) 
                                 << 0x31U) | ((QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x18U))))) 
                                              << 0x19U))),51);
    bufp->fullQData(oldp+1292,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved),49);
    bufp->fullQData(oldp+1294,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),53);
    bufp->fullQData(oldp+1296,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),53);
    bufp->fullIData(oldp+1298,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),23);
    bufp->fullIData(oldp+1299,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),23);
    bufp->fullIData(oldp+1300,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),23);
    bufp->fullIData(oldp+1301,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),23);
    bufp->fullIData(oldp+1302,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),27);
    bufp->fullIData(oldp+1303,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),27);
    bufp->fullIData(oldp+1304,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),24);
    bufp->fullIData(oldp+1305,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),24);
    bufp->fullIData(oldp+1306,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),28);
    bufp->fullIData(oldp+1307,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),25);
    bufp->fullIData(oldp+1308,((0x7fffffU & (IData)(
                                                    (0x7fffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                        >> 0x1aU))))),23);
    bufp->fullIData(oldp+1309,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (0x7fffffULL 
                                                        & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                           >> 0x1aU)))))),23);
    bufp->fullBit(oldp+1310,((1U & (IData)((0x7fffffULL 
                                            & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+1311,((1U & (IData)((0xffffffULL 
                                            & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                               >> 0x19U))))));
    bufp->fullIData(oldp+1312,((0x7fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                     >> 0x19U)))),23);
    bufp->fullIData(oldp+1313,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x19U))))),23);
    bufp->fullBit(oldp+1314,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+1315,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x18U)))));
    bufp->fullIData(oldp+1316,((0x7fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                     >> 0x1aU)))),23);
    bufp->fullIData(oldp+1317,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x1aU))))),23);
    bufp->fullBit(oldp+1318,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+1319,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1320,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),25);
    bufp->fullIData(oldp+1321,((0x7fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                     >> 0x1aU)))),23);
    bufp->fullIData(oldp+1322,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x1aU))))),23);
    bufp->fullBit(oldp+1323,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+1324,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1325,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),25);
    bufp->fullBit(oldp+1326,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__wait_for_sync));
    bufp->fullQData(oldp+1327,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ib_a),48);
    bufp->fullQData(oldp+1329,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ib_b),48);
    bufp->fullQData(oldp+1331,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ib_c),56);
    bufp->fullBit(oldp+1333,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ib_sync));
    bufp->fullBit(oldp+1334,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__b_started));
    bufp->fullBit(oldp+1335,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ob_sync));
    bufp->fullQData(oldp+1336,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x19U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),50);
    bufp->fullQData(oldp+1338,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x19U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),50);
    bufp->fullCData(oldp+1340,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__iaddr),4);
    bufp->fullQData(oldp+1341,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[0]),48);
    bufp->fullQData(oldp+1343,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[1]),48);
    bufp->fullQData(oldp+1345,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[2]),48);
    bufp->fullQData(oldp+1347,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[3]),48);
    bufp->fullQData(oldp+1349,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[4]),48);
    bufp->fullQData(oldp+1351,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[5]),48);
    bufp->fullQData(oldp+1353,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[6]),48);
    bufp->fullQData(oldp+1355,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__imem[7]),48);
    bufp->fullCData(oldp+1357,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__oaddr),4);
    bufp->fullQData(oldp+1358,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[0]),50);
    bufp->fullQData(oldp+1360,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[1]),50);
    bufp->fullQData(oldp+1362,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[2]),50);
    bufp->fullQData(oldp+1364,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[3]),50);
    bufp->fullQData(oldp+1366,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[4]),50);
    bufp->fullQData(oldp+1368,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[5]),50);
    bufp->fullQData(oldp+1370,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[6]),50);
    bufp->fullQData(oldp+1372,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__omem[7]),50);
    bufp->fullCData(oldp+1374,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__nxt_oaddr),3);
    bufp->fullQData(oldp+1375,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__pre_ovalue),50);
    bufp->fullBit(oldp+1377,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__ib_sync) 
                              & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
    bufp->fullQData(oldp+1378,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left),48);
    bufp->fullQData(oldp+1380,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right),48);
    bufp->fullBit(oldp+1382,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1383,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1384,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef),56);
    bufp->fullIData(oldp+1386,((0xffffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x18U)))),24);
    bufp->fullIData(oldp+1387,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))),24);
    bufp->fullIData(oldp+1388,((0xffffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x18U)))),24);
    bufp->fullIData(oldp+1389,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right))),24);
    bufp->fullIData(oldp+1390,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),28);
    bufp->fullIData(oldp+1391,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),28);
    bufp->fullIData(oldp+1392,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),25);
    bufp->fullIData(oldp+1393,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),25);
    bufp->fullIData(oldp+1394,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),25);
    bufp->fullIData(oldp+1395,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),25);
    bufp->fullQData(oldp+1396,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv),51);
    bufp->fullQData(oldp+1398,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv),51);
    bufp->fullQData(oldp+1400,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),53);
    bufp->fullQData(oldp+1402,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),53);
    bufp->fullQData(oldp+1404,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),55);
    bufp->fullQData(oldp+1406,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one),55);
    bufp->fullQData(oldp+1408,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two),55);
    bufp->fullBit(oldp+1410,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x32U)))));
    bufp->fullQData(oldp+1411,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x18U)))))))) 
                                 << 0x33U) | (0x7ffffffffffffULL 
                                              & VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU)))),53);
    bufp->fullQData(oldp+1413,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x31U)))))))) 
                                 << 0x33U) | ((QData)((IData)(
                                                              (0x1ffffffU 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x19U))))) 
                                              << 0x1aU))),53);
    bufp->fullQData(oldp+1415,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved),51);
    bufp->fullQData(oldp+1417,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),55);
    bufp->fullQData(oldp+1419,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),55);
    bufp->fullIData(oldp+1421,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),25);
    bufp->fullIData(oldp+1422,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),25);
    bufp->fullIData(oldp+1423,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),25);
    bufp->fullIData(oldp+1424,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),25);
    bufp->fullIData(oldp+1425,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),28);
    bufp->fullIData(oldp+1426,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),28);
    bufp->fullIData(oldp+1427,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),25);
    bufp->fullIData(oldp+1428,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),25);
    bufp->fullIData(oldp+1429,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),29);
    bufp->fullIData(oldp+1430,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),26);
    bufp->fullIData(oldp+1431,((0x1ffffffU & (IData)(
                                                     (0x1ffffffULL 
                                                      & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                         >> 0x1aU))))),25);
    bufp->fullIData(oldp+1432,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x1ffffffULL 
                                                         & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                            >> 0x1aU)))))),25);
    bufp->fullBit(oldp+1433,((1U & (IData)((0x1ffffffULL 
                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+1434,((1U & (IData)((0x3ffffffULL 
                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                               >> 0x19U))))));
    bufp->fullIData(oldp+1435,((0x1ffffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x19U)))),25);
    bufp->fullIData(oldp+1436,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x19U))))),25);
    bufp->fullBit(oldp+1437,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1438,((0x1ffffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x1aU)))),25);
    bufp->fullIData(oldp+1439,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x1aU))))),25);
    bufp->fullBit(oldp+1440,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+1441,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1442,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),25);
    bufp->fullIData(oldp+1443,((0x1ffffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x1aU)))),25);
    bufp->fullIData(oldp+1444,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x1aU))))),25);
    bufp->fullBit(oldp+1445,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+1446,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1447,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),25);
    bufp->fullIData(oldp+1448,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__m_r),26);
    bufp->fullIData(oldp+1449,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__m_i),26);
    bufp->fullIData(oldp+1450,((0x3ffffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__ifft__DOT__w_d4 
                                                      >> 0x1aU)))),26);
    bufp->fullIData(oldp+1451,((0x3ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__w_d4))),26);
    bufp->fullIData(oldp+1452,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_r),27);
    bufp->fullIData(oldp+1453,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_i),27);
    bufp->fullIData(oldp+1454,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__sto_r),27);
    bufp->fullIData(oldp+1455,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__sto_i),27);
    bufp->fullBit(oldp+1456,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__wait_for_sync));
    bufp->fullBit(oldp+1457,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__stage));
    bufp->fullCData(oldp+1458,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__sync_pipe),2);
    bufp->fullIData(oldp+1459,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__o_r),26);
    bufp->fullIData(oldp+1460,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__o_i),26);
    bufp->fullIData(oldp+1461,((0x3ffffffU & (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_i 
                                              >> 1U))),26);
    bufp->fullIData(oldp+1462,((0x3ffffffU & ((IData)(1U) 
                                              + (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_i 
                                                 >> 1U)))),26);
    bufp->fullBit(oldp+1463,((1U & (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_i 
                                    >> 1U))));
    bufp->fullBit(oldp+1464,((1U & vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_i)));
    bufp->fullIData(oldp+1465,((0x3ffffffU & (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_r 
                                              >> 1U))),26);
    bufp->fullIData(oldp+1466,((0x3ffffffU & ((IData)(1U) 
                                              + (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_r 
                                                 >> 1U)))),26);
    bufp->fullBit(oldp+1467,((1U & (vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_r 
                                    >> 1U))));
    bufp->fullBit(oldp+1468,((1U & vlSelf->fft_ifft__DOT__ifft__DOT__stage_2__DOT__rnd_r)));
    bufp->fullBit(oldp+1469,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__wait_for_sync));
    bufp->fullQData(oldp+1470,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ib_a),44);
    bufp->fullQData(oldp+1472,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ib_b),44);
    bufp->fullQData(oldp+1474,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ib_c),52);
    bufp->fullBit(oldp+1476,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ib_sync));
    bufp->fullBit(oldp+1477,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__b_started));
    bufp->fullBit(oldp+1478,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ob_sync));
    bufp->fullQData(oldp+1479,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x17U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),46);
    bufp->fullQData(oldp+1481,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x17U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),46);
    bufp->fullCData(oldp+1483,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__iaddr),8);
    bufp->fullCData(oldp+1484,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__oaddr),8);
    bufp->fullCData(oldp+1485,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__nxt_oaddr),7);
    bufp->fullQData(oldp+1486,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__pre_ovalue),46);
    bufp->fullBit(oldp+1488,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__ib_sync) 
                              & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
    bufp->fullQData(oldp+1489,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left),44);
    bufp->fullQData(oldp+1491,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right),44);
    bufp->fullBit(oldp+1493,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1494,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1495,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef),52);
    bufp->fullIData(oldp+1497,((0x3fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x16U)))),22);
    bufp->fullIData(oldp+1498,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))),22);
    bufp->fullIData(oldp+1499,((0x3fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x16U)))),22);
    bufp->fullIData(oldp+1500,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right))),22);
    bufp->fullIData(oldp+1501,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),26);
    bufp->fullIData(oldp+1502,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),26);
    bufp->fullIData(oldp+1503,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),23);
    bufp->fullIData(oldp+1504,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),23);
    bufp->fullIData(oldp+1505,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),23);
    bufp->fullIData(oldp+1506,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),23);
    bufp->fullQData(oldp+1507,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv),47);
    bufp->fullQData(oldp+1509,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv),47);
    bufp->fullQData(oldp+1511,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),49);
    bufp->fullQData(oldp+1513,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),49);
    bufp->fullQData(oldp+1515,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),51);
    bufp->fullQData(oldp+1517,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one),51);
    bufp->fullQData(oldp+1519,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two),51);
    bufp->fullBit(oldp+1521,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x2eU)))));
    bufp->fullQData(oldp+1522,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x16U)))))))) 
                                 << 0x2fU) | (0x7fffffffffffULL 
                                              & VL_SHIFTL_QQI(47,47,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U)))),49);
    bufp->fullQData(oldp+1524,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x2dU)))))))) 
                                 << 0x2fU) | ((QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x17U))))) 
                                              << 0x18U))),49);
    bufp->fullQData(oldp+1526,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved),47);
    bufp->fullQData(oldp+1528,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),51);
    bufp->fullQData(oldp+1530,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),51);
    bufp->fullIData(oldp+1532,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),23);
    bufp->fullIData(oldp+1533,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),23);
    bufp->fullIData(oldp+1534,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),23);
    bufp->fullIData(oldp+1535,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),23);
    bufp->fullIData(oldp+1536,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),26);
    bufp->fullIData(oldp+1537,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),26);
    bufp->fullIData(oldp+1538,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),23);
    bufp->fullIData(oldp+1539,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),23);
    bufp->fullIData(oldp+1540,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),27);
    bufp->fullIData(oldp+1541,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),24);
    bufp->fullIData(oldp+1542,((0x7fffffU & (IData)(
                                                    (0x7fffffULL 
                                                     & (VL_SHIFTL_QQI(47,47,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                        >> 0x18U))))),23);
    bufp->fullIData(oldp+1543,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (0x7fffffULL 
                                                        & (VL_SHIFTL_QQI(47,47,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                           >> 0x18U)))))),23);
    bufp->fullBit(oldp+1544,((1U & (IData)((0x7fffffULL 
                                            & (VL_SHIFTL_QQI(47,47,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+1545,((1U & (IData)((0xffffffULL 
                                            & (VL_SHIFTL_QQI(47,47,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                               >> 0x17U))))));
    bufp->fullIData(oldp+1546,((0x7fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                     >> 0x17U)))),23);
    bufp->fullIData(oldp+1547,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x17U))))),23);
    bufp->fullBit(oldp+1548,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x17U)))));
    bufp->fullIData(oldp+1549,((0x7fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                     >> 0x18U)))),23);
    bufp->fullIData(oldp+1550,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x18U))))),23);
    bufp->fullBit(oldp+1551,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+1552,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x17U)))));
    bufp->fullIData(oldp+1553,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),23);
    bufp->fullIData(oldp+1554,((0x7fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                     >> 0x18U)))),23);
    bufp->fullIData(oldp+1555,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x18U))))),23);
    bufp->fullBit(oldp+1556,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+1557,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x17U)))));
    bufp->fullIData(oldp+1558,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),23);
    bufp->fullBit(oldp+1559,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__wait_for_sync));
    bufp->fullQData(oldp+1560,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ib_a),48);
    bufp->fullQData(oldp+1562,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ib_b),48);
    bufp->fullQData(oldp+1564,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ib_c),56);
    bufp->fullBit(oldp+1566,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ib_sync));
    bufp->fullBit(oldp+1567,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__b_started));
    bufp->fullBit(oldp+1568,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ob_sync));
    bufp->fullQData(oldp+1569,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x18U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),48);
    bufp->fullQData(oldp+1571,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x18U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),48);
    bufp->fullCData(oldp+1573,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__iaddr),5);
    bufp->fullQData(oldp+1574,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[0]),48);
    bufp->fullQData(oldp+1576,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[1]),48);
    bufp->fullQData(oldp+1578,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[2]),48);
    bufp->fullQData(oldp+1580,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[3]),48);
    bufp->fullQData(oldp+1582,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[4]),48);
    bufp->fullQData(oldp+1584,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[5]),48);
    bufp->fullQData(oldp+1586,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[6]),48);
    bufp->fullQData(oldp+1588,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[7]),48);
    bufp->fullQData(oldp+1590,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[8]),48);
    bufp->fullQData(oldp+1592,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[9]),48);
    bufp->fullQData(oldp+1594,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[10]),48);
    bufp->fullQData(oldp+1596,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[11]),48);
    bufp->fullQData(oldp+1598,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[12]),48);
    bufp->fullQData(oldp+1600,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[13]),48);
    bufp->fullQData(oldp+1602,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[14]),48);
    bufp->fullQData(oldp+1604,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__imem[15]),48);
    bufp->fullCData(oldp+1606,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__oaddr),5);
    bufp->fullQData(oldp+1607,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[0]),48);
    bufp->fullQData(oldp+1609,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[1]),48);
    bufp->fullQData(oldp+1611,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[2]),48);
    bufp->fullQData(oldp+1613,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[3]),48);
    bufp->fullQData(oldp+1615,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[4]),48);
    bufp->fullQData(oldp+1617,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[5]),48);
    bufp->fullQData(oldp+1619,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[6]),48);
    bufp->fullQData(oldp+1621,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[7]),48);
    bufp->fullQData(oldp+1623,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[8]),48);
    bufp->fullQData(oldp+1625,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[9]),48);
    bufp->fullQData(oldp+1627,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[10]),48);
    bufp->fullQData(oldp+1629,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[11]),48);
    bufp->fullQData(oldp+1631,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[12]),48);
    bufp->fullQData(oldp+1633,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[13]),48);
    bufp->fullQData(oldp+1635,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[14]),48);
    bufp->fullQData(oldp+1637,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__omem[15]),48);
    bufp->fullCData(oldp+1639,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__nxt_oaddr),4);
    bufp->fullQData(oldp+1640,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__pre_ovalue),48);
    bufp->fullBit(oldp+1642,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__ib_sync) 
                              & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
    bufp->fullQData(oldp+1643,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left),48);
    bufp->fullQData(oldp+1645,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right),48);
    bufp->fullBit(oldp+1647,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1648,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1649,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef),56);
    bufp->fullIData(oldp+1651,((0xffffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x18U)))),24);
    bufp->fullIData(oldp+1652,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))),24);
    bufp->fullIData(oldp+1653,((0xffffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x18U)))),24);
    bufp->fullIData(oldp+1654,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right))),24);
    bufp->fullIData(oldp+1655,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),28);
    bufp->fullIData(oldp+1656,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),28);
    bufp->fullIData(oldp+1657,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),25);
    bufp->fullIData(oldp+1658,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),25);
    bufp->fullIData(oldp+1659,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),25);
    bufp->fullIData(oldp+1660,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),25);
    bufp->fullQData(oldp+1661,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv),51);
    bufp->fullQData(oldp+1663,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv),51);
    bufp->fullQData(oldp+1665,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),53);
    bufp->fullQData(oldp+1667,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),53);
    bufp->fullQData(oldp+1669,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),55);
    bufp->fullQData(oldp+1671,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one),55);
    bufp->fullQData(oldp+1673,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two),55);
    bufp->fullBit(oldp+1675,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x32U)))));
    bufp->fullQData(oldp+1676,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x18U)))))))) 
                                 << 0x33U) | (0x7ffffffffffffULL 
                                              & VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU)))),53);
    bufp->fullQData(oldp+1678,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x31U)))))))) 
                                 << 0x33U) | ((QData)((IData)(
                                                              (0x1ffffffU 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x19U))))) 
                                              << 0x1aU))),53);
    bufp->fullQData(oldp+1680,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved),51);
    bufp->fullQData(oldp+1682,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),55);
    bufp->fullQData(oldp+1684,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),55);
    bufp->fullIData(oldp+1686,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),24);
    bufp->fullIData(oldp+1687,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),24);
    bufp->fullIData(oldp+1688,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),24);
    bufp->fullIData(oldp+1689,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),24);
    bufp->fullIData(oldp+1690,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),28);
    bufp->fullIData(oldp+1691,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),28);
    bufp->fullIData(oldp+1692,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),25);
    bufp->fullIData(oldp+1693,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),25);
    bufp->fullIData(oldp+1694,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),29);
    bufp->fullIData(oldp+1695,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),26);
    bufp->fullIData(oldp+1696,((0xffffffU & (IData)(
                                                    (0xffffffULL 
                                                     & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                        >> 0x1bU))))),24);
    bufp->fullIData(oldp+1697,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (0xffffffULL 
                                                        & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                           >> 0x1bU)))))),24);
    bufp->fullBit(oldp+1698,((1U & (IData)((0xffffffULL 
                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+1699,((1U & (IData)((0x1ffffffULL 
                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                               >> 0x1aU))))));
    bufp->fullIData(oldp+1700,((0xffffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                     >> 0x1aU)))),24);
    bufp->fullIData(oldp+1701,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x1aU))))),24);
    bufp->fullBit(oldp+1702,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+1703,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1704,((0xffffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                     >> 0x1bU)))),24);
    bufp->fullIData(oldp+1705,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x1bU))))),24);
    bufp->fullBit(oldp+1706,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+1707,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1aU)))));
    bufp->fullIData(oldp+1708,((0x3ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),26);
    bufp->fullIData(oldp+1709,((0xffffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                     >> 0x1bU)))),24);
    bufp->fullIData(oldp+1710,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x1bU))))),24);
    bufp->fullBit(oldp+1711,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+1712,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1aU)))));
    bufp->fullIData(oldp+1713,((0x3ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),26);
    bufp->fullBit(oldp+1714,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__wait_for_sync));
    bufp->fullCData(oldp+1715,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__pipeline),3);
    bufp->fullIData(oldp+1716,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__sum_r),26);
    bufp->fullIData(oldp+1717,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__sum_i),26);
    bufp->fullIData(oldp+1718,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__diff_r),26);
    bufp->fullIData(oldp+1719,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__diff_i),26);
    bufp->fullQData(oldp+1720,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__ob_a),52);
    bufp->fullQData(oldp+1722,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__ob_b_r)) 
                                 << 0x1aU) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__ob_b_i)))),52);
    bufp->fullIData(oldp+1724,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__ob_b_r),26);
    bufp->fullIData(oldp+1725,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__ob_b_i),26);
    bufp->fullSData(oldp+1726,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__iaddr),9);
    bufp->fullQData(oldp+1727,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__imem[0]),50);
    bufp->fullQData(oldp+1729,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__imem[1]),50);
    bufp->fullIData(oldp+1731,((0x1ffffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__imem
                                                      [1U] 
                                                      >> 0x19U)))),25);
    bufp->fullIData(oldp+1732,((0x1ffffffU & (IData)(
                                                     vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__imem
                                                     [1U]))),25);
    bufp->fullIData(oldp+1733,((0x1ffffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__ifft__DOT__w_d8 
                                                      >> 0x19U)))),25);
    bufp->fullIData(oldp+1734,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__w_d8))),25);
    bufp->fullQData(oldp+1735,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__omem[0]),52);
    bufp->fullQData(oldp+1737,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__omem[1]),52);
    bufp->fullIData(oldp+1739,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_sum_r),26);
    bufp->fullIData(oldp+1740,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_sum_i),26);
    bufp->fullIData(oldp+1741,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_diff_r),26);
    bufp->fullIData(oldp+1742,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_diff_i),26);
    bufp->fullIData(oldp+1743,((0x3ffffffU & (- vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_diff_r))),26);
    bufp->fullIData(oldp+1744,((0x3ffffffU & (- vlSelf->fft_ifft__DOT__ifft__DOT__stage_4__DOT__rnd_diff_i))),26);
    bufp->fullBit(oldp+1745,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__wait_for_sync));
    bufp->fullQData(oldp+1746,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ib_a),42);
    bufp->fullQData(oldp+1748,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ib_b),42);
    bufp->fullQData(oldp+1750,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ib_c),50);
    bufp->fullBit(oldp+1752,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ib_sync));
    bufp->fullBit(oldp+1753,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__b_started));
    bufp->fullBit(oldp+1754,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ob_sync));
    bufp->fullQData(oldp+1755,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x16U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),44);
    bufp->fullQData(oldp+1757,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x16U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),44);
    bufp->fullSData(oldp+1759,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__iaddr),9);
    bufp->fullSData(oldp+1760,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__oaddr),9);
    bufp->fullCData(oldp+1761,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__nxt_oaddr),8);
    bufp->fullQData(oldp+1762,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__pre_ovalue),44);
    bufp->fullBit(oldp+1764,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__ib_sync) 
                              & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
    bufp->fullQData(oldp+1765,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left),42);
    bufp->fullQData(oldp+1767,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right),42);
    bufp->fullBit(oldp+1769,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1770,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1771,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef),50);
    bufp->fullIData(oldp+1773,((0x1fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x15U)))),21);
    bufp->fullIData(oldp+1774,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left))),21);
    bufp->fullIData(oldp+1775,((0x1fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x15U)))),21);
    bufp->fullIData(oldp+1776,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right))),21);
    bufp->fullIData(oldp+1777,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),25);
    bufp->fullIData(oldp+1778,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),25);
    bufp->fullIData(oldp+1779,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),22);
    bufp->fullIData(oldp+1780,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),22);
    bufp->fullIData(oldp+1781,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),22);
    bufp->fullIData(oldp+1782,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),22);
    bufp->fullQData(oldp+1783,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv),45);
    bufp->fullQData(oldp+1785,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv),45);
    bufp->fullQData(oldp+1787,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),47);
    bufp->fullQData(oldp+1789,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),47);
    bufp->fullQData(oldp+1791,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),49);
    bufp->fullQData(oldp+1793,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one),49);
    bufp->fullQData(oldp+1795,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two),49);
    bufp->fullBit(oldp+1797,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x2cU)))));
    bufp->fullQData(oldp+1798,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x15U)))))))) 
                                 << 0x2dU) | (0x1fffffffffffULL 
                                              & VL_SHIFTL_QQI(45,45,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U)))),47);
    bufp->fullQData(oldp+1800,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x2bU)))))))) 
                                 << 0x2dU) | ((QData)((IData)(
                                                              (0x3fffffU 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x16U))))) 
                                              << 0x17U))),47);
    bufp->fullQData(oldp+1802,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved),45);
    bufp->fullQData(oldp+1804,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),49);
    bufp->fullQData(oldp+1806,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),49);
    bufp->fullIData(oldp+1808,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),22);
    bufp->fullIData(oldp+1809,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),22);
    bufp->fullIData(oldp+1810,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),22);
    bufp->fullIData(oldp+1811,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),22);
    bufp->fullIData(oldp+1812,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),25);
    bufp->fullIData(oldp+1813,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),25);
    bufp->fullIData(oldp+1814,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),22);
    bufp->fullIData(oldp+1815,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),22);
    bufp->fullIData(oldp+1816,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),26);
    bufp->fullIData(oldp+1817,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),23);
    bufp->fullIData(oldp+1818,((0x3fffffU & (IData)(
                                                    (0x3fffffULL 
                                                     & (VL_SHIFTL_QQI(45,45,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                        >> 0x17U))))),22);
    bufp->fullIData(oldp+1819,((0x3fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (0x3fffffULL 
                                                        & (VL_SHIFTL_QQI(45,45,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                           >> 0x17U)))))),22);
    bufp->fullBit(oldp+1820,((1U & (IData)((0x3fffffULL 
                                            & (VL_SHIFTL_QQI(45,45,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+1821,((1U & (IData)((0x7fffffULL 
                                            & (VL_SHIFTL_QQI(45,45,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                               >> 0x16U))))));
    bufp->fullIData(oldp+1822,((0x3fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                     >> 0x16U)))),22);
    bufp->fullIData(oldp+1823,((0x3fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x16U))))),22);
    bufp->fullBit(oldp+1824,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1825,((0x3fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                     >> 0x17U)))),22);
    bufp->fullIData(oldp+1826,((0x3fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x17U))))),22);
    bufp->fullBit(oldp+1827,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+1828,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1829,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),22);
    bufp->fullIData(oldp+1830,((0x3fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                     >> 0x17U)))),22);
    bufp->fullIData(oldp+1831,((0x3fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x17U))))),22);
    bufp->fullBit(oldp+1832,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+1833,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1834,((0x3fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),22);
    bufp->fullBit(oldp+1835,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__wait_for_sync));
    bufp->fullQData(oldp+1836,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ib_a),46);
    bufp->fullQData(oldp+1838,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ib_b),46);
    bufp->fullQData(oldp+1840,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ib_c),54);
    bufp->fullBit(oldp+1842,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ib_sync));
    bufp->fullBit(oldp+1843,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__b_started));
    bufp->fullBit(oldp+1844,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ob_sync));
    bufp->fullQData(oldp+1845,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x18U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),48);
    bufp->fullQData(oldp+1847,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x18U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),48);
    bufp->fullCData(oldp+1849,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__iaddr),6);
    bufp->fullQData(oldp+1850,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[0]),46);
    bufp->fullQData(oldp+1852,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[1]),46);
    bufp->fullQData(oldp+1854,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[2]),46);
    bufp->fullQData(oldp+1856,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[3]),46);
    bufp->fullQData(oldp+1858,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[4]),46);
    bufp->fullQData(oldp+1860,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[5]),46);
    bufp->fullQData(oldp+1862,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[6]),46);
    bufp->fullQData(oldp+1864,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[7]),46);
    bufp->fullQData(oldp+1866,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[8]),46);
    bufp->fullQData(oldp+1868,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[9]),46);
    bufp->fullQData(oldp+1870,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[10]),46);
    bufp->fullQData(oldp+1872,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[11]),46);
    bufp->fullQData(oldp+1874,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[12]),46);
    bufp->fullQData(oldp+1876,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[13]),46);
    bufp->fullQData(oldp+1878,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[14]),46);
    bufp->fullQData(oldp+1880,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[15]),46);
    bufp->fullQData(oldp+1882,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[16]),46);
    bufp->fullQData(oldp+1884,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[17]),46);
    bufp->fullQData(oldp+1886,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[18]),46);
    bufp->fullQData(oldp+1888,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[19]),46);
    bufp->fullQData(oldp+1890,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[20]),46);
    bufp->fullQData(oldp+1892,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[21]),46);
    bufp->fullQData(oldp+1894,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[22]),46);
    bufp->fullQData(oldp+1896,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[23]),46);
    bufp->fullQData(oldp+1898,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[24]),46);
    bufp->fullQData(oldp+1900,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[25]),46);
    bufp->fullQData(oldp+1902,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[26]),46);
    bufp->fullQData(oldp+1904,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[27]),46);
    bufp->fullQData(oldp+1906,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[28]),46);
    bufp->fullQData(oldp+1908,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[29]),46);
    bufp->fullQData(oldp+1910,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[30]),46);
    bufp->fullQData(oldp+1912,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__imem[31]),46);
    bufp->fullCData(oldp+1914,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__oaddr),6);
    bufp->fullQData(oldp+1915,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[0]),48);
    bufp->fullQData(oldp+1917,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[1]),48);
    bufp->fullQData(oldp+1919,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[2]),48);
    bufp->fullQData(oldp+1921,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[3]),48);
    bufp->fullQData(oldp+1923,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[4]),48);
    bufp->fullQData(oldp+1925,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[5]),48);
    bufp->fullQData(oldp+1927,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[6]),48);
    bufp->fullQData(oldp+1929,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[7]),48);
    bufp->fullQData(oldp+1931,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[8]),48);
    bufp->fullQData(oldp+1933,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[9]),48);
    bufp->fullQData(oldp+1935,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[10]),48);
    bufp->fullQData(oldp+1937,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[11]),48);
    bufp->fullQData(oldp+1939,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[12]),48);
    bufp->fullQData(oldp+1941,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[13]),48);
    bufp->fullQData(oldp+1943,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[14]),48);
    bufp->fullQData(oldp+1945,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[15]),48);
    bufp->fullQData(oldp+1947,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[16]),48);
    bufp->fullQData(oldp+1949,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[17]),48);
    bufp->fullQData(oldp+1951,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[18]),48);
    bufp->fullQData(oldp+1953,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[19]),48);
    bufp->fullQData(oldp+1955,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[20]),48);
    bufp->fullQData(oldp+1957,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[21]),48);
    bufp->fullQData(oldp+1959,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[22]),48);
    bufp->fullQData(oldp+1961,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[23]),48);
    bufp->fullQData(oldp+1963,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[24]),48);
    bufp->fullQData(oldp+1965,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[25]),48);
    bufp->fullQData(oldp+1967,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[26]),48);
    bufp->fullQData(oldp+1969,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[27]),48);
    bufp->fullQData(oldp+1971,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[28]),48);
    bufp->fullQData(oldp+1973,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[29]),48);
    bufp->fullQData(oldp+1975,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[30]),48);
    bufp->fullQData(oldp+1977,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__omem[31]),48);
    bufp->fullCData(oldp+1979,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__nxt_oaddr),5);
    bufp->fullQData(oldp+1980,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__pre_ovalue),48);
    bufp->fullBit(oldp+1982,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__ib_sync) 
                              & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
    bufp->fullQData(oldp+1983,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left),46);
    bufp->fullQData(oldp+1985,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right),46);
    bufp->fullBit(oldp+1987,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1988,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1989,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef),54);
    bufp->fullIData(oldp+1991,((0x7fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x17U)))),23);
    bufp->fullIData(oldp+1992,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))),23);
    bufp->fullIData(oldp+1993,((0x7fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x17U)))),23);
    bufp->fullIData(oldp+1994,((0x7fffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right))),23);
    bufp->fullIData(oldp+1995,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),27);
    bufp->fullIData(oldp+1996,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),27);
    bufp->fullIData(oldp+1997,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),24);
    bufp->fullIData(oldp+1998,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),24);
    bufp->fullIData(oldp+1999,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),24);
    bufp->fullIData(oldp+2000,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),24);
    bufp->fullQData(oldp+2001,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv),49);
    bufp->fullQData(oldp+2003,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv),49);
    bufp->fullQData(oldp+2005,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),51);
    bufp->fullQData(oldp+2007,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),51);
    bufp->fullQData(oldp+2009,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),53);
    bufp->fullQData(oldp+2011,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one),53);
    bufp->fullQData(oldp+2013,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two),53);
    bufp->fullBit(oldp+2015,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x30U)))));
    bufp->fullQData(oldp+2016,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x17U)))))))) 
                                 << 0x31U) | (0x1ffffffffffffULL 
                                              & VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U)))),51);
    bufp->fullQData(oldp+2018,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x2fU)))))))) 
                                 << 0x31U) | ((QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x18U))))) 
                                              << 0x19U))),51);
    bufp->fullQData(oldp+2020,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved),49);
    bufp->fullQData(oldp+2022,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),53);
    bufp->fullQData(oldp+2024,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),53);
    bufp->fullIData(oldp+2026,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),24);
    bufp->fullIData(oldp+2027,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),24);
    bufp->fullIData(oldp+2028,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),24);
    bufp->fullIData(oldp+2029,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),24);
    bufp->fullIData(oldp+2030,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),27);
    bufp->fullIData(oldp+2031,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),27);
    bufp->fullIData(oldp+2032,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),24);
    bufp->fullIData(oldp+2033,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),24);
    bufp->fullIData(oldp+2034,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),28);
    bufp->fullIData(oldp+2035,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),25);
    bufp->fullIData(oldp+2036,((0xffffffU & (IData)(
                                                    (0xffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                        >> 0x19U))))),24);
    bufp->fullIData(oldp+2037,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (0xffffffULL 
                                                        & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                           >> 0x19U)))))),24);
    bufp->fullBit(oldp+2038,((1U & (IData)((0xffffffULL 
                                            & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2039,((1U & (IData)((0x1ffffffULL 
                                            & (VL_SHIFTL_QQI(49,49,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                               >> 0x18U))))));
    bufp->fullIData(oldp+2040,((0xffffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                     >> 0x18U)))),24);
    bufp->fullIData(oldp+2041,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x18U))))),24);
    bufp->fullBit(oldp+2042,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x18U)))));
    bufp->fullIData(oldp+2043,((0xffffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                     >> 0x19U)))),24);
    bufp->fullIData(oldp+2044,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x19U))))),24);
    bufp->fullBit(oldp+2045,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+2046,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x18U)))));
    bufp->fullIData(oldp+2047,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),24);
    bufp->fullIData(oldp+2048,((0xffffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                     >> 0x19U)))),24);
    bufp->fullIData(oldp+2049,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x19U))))),24);
    bufp->fullBit(oldp+2050,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+2051,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x18U)))));
    bufp->fullIData(oldp+2052,((0xffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),24);
    bufp->fullBit(oldp+2053,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__wait_for_sync));
    bufp->fullQData(oldp+2054,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ib_a),50);
    bufp->fullQData(oldp+2056,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ib_b),50);
    bufp->fullQData(oldp+2058,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ib_c),58);
    bufp->fullBit(oldp+2060,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ib_sync));
    bufp->fullBit(oldp+2061,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__b_started));
    bufp->fullBit(oldp+2062,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ob_sync));
    bufp->fullQData(oldp+2063,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x19U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),50);
    bufp->fullQData(oldp+2065,((((QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x19U) | (QData)((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),50);
    bufp->fullCData(oldp+2067,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__iaddr),3);
    bufp->fullQData(oldp+2068,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__imem[0]),50);
    bufp->fullQData(oldp+2070,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__imem[1]),50);
    bufp->fullQData(oldp+2072,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__imem[2]),50);
    bufp->fullQData(oldp+2074,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__imem[3]),50);
    bufp->fullCData(oldp+2076,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__oaddr),3);
    bufp->fullQData(oldp+2077,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__omem[0]),50);
    bufp->fullQData(oldp+2079,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__omem[1]),50);
    bufp->fullQData(oldp+2081,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__omem[2]),50);
    bufp->fullQData(oldp+2083,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__omem[3]),50);
    bufp->fullCData(oldp+2085,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__nxt_oaddr),2);
    bufp->fullQData(oldp+2086,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__pre_ovalue),50);
    bufp->fullBit(oldp+2088,(((IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__ib_sync) 
                              & (IData)(vlSelf->fft_ifft__DOT__lpf_o_ce))));
    bufp->fullQData(oldp+2089,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left),50);
    bufp->fullQData(oldp+2091,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right),50);
    bufp->fullBit(oldp+2093,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+2094,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+2095,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef),58);
    bufp->fullIData(oldp+2097,((0x1ffffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x19U)))),25);
    bufp->fullIData(oldp+2098,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))),25);
    bufp->fullIData(oldp+2099,((0x1ffffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x19U)))),25);
    bufp->fullIData(oldp+2100,((0x1ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right))),25);
    bufp->fullIData(oldp+2101,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),29);
    bufp->fullIData(oldp+2102,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),29);
    bufp->fullIData(oldp+2103,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),26);
    bufp->fullIData(oldp+2104,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),26);
    bufp->fullIData(oldp+2105,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),26);
    bufp->fullIData(oldp+2106,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),26);
    bufp->fullQData(oldp+2107,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv),53);
    bufp->fullQData(oldp+2109,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv),53);
    bufp->fullQData(oldp+2111,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),55);
    bufp->fullQData(oldp+2113,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),55);
    bufp->fullQData(oldp+2115,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),57);
    bufp->fullQData(oldp+2117,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one),57);
    bufp->fullQData(oldp+2119,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two),57);
    bufp->fullBit(oldp+2121,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x34U)))));
    bufp->fullQData(oldp+2122,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x19U)))))))) 
                                 << 0x35U) | (0x1fffffffffffffULL 
                                              & VL_SHIFTL_QQI(53,53,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU)))),55);
    bufp->fullQData(oldp+2124,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x33U)))))))) 
                                 << 0x35U) | ((QData)((IData)(
                                                              (0x3ffffffU 
                                                               & (IData)(
                                                                         (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x1aU))))) 
                                              << 0x1bU))),55);
    bufp->fullQData(oldp+2126,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved),53);
    bufp->fullQData(oldp+2128,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),57);
    bufp->fullQData(oldp+2130,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),57);
    bufp->fullIData(oldp+2132,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),25);
    bufp->fullIData(oldp+2133,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),25);
    bufp->fullIData(oldp+2134,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),25);
    bufp->fullIData(oldp+2135,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),25);
    bufp->fullIData(oldp+2136,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),29);
    bufp->fullIData(oldp+2137,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),29);
    bufp->fullIData(oldp+2138,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),26);
    bufp->fullIData(oldp+2139,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),26);
    bufp->fullIData(oldp+2140,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),30);
    bufp->fullIData(oldp+2141,(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),27);
    bufp->fullIData(oldp+2142,((0x1ffffffU & (IData)(
                                                     (0x1ffffffULL 
                                                      & (VL_SHIFTL_QQI(53,53,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                         >> 0x1cU))))),25);
    bufp->fullIData(oldp+2143,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x1ffffffULL 
                                                         & (VL_SHIFTL_QQI(53,53,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                            >> 0x1cU)))))),25);
    bufp->fullBit(oldp+2144,((1U & (IData)((0x1ffffffULL 
                                            & (VL_SHIFTL_QQI(53,53,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2145,((1U & (IData)((0x3ffffffULL 
                                            & (VL_SHIFTL_QQI(53,53,32, vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                               >> 0x1bU))))));
    bufp->fullIData(oldp+2146,((0x1ffffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x1bU)))),25);
    bufp->fullIData(oldp+2147,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x1bU))))),25);
    bufp->fullBit(oldp+2148,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+2149,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x1aU)))));
    bufp->fullIData(oldp+2150,((0x1ffffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x1cU)))),25);
    bufp->fullIData(oldp+2151,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x1cU))))),25);
    bufp->fullBit(oldp+2152,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+2153,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1bU)))));
    bufp->fullIData(oldp+2154,((0x7ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),27);
    bufp->fullIData(oldp+2155,((0x1ffffffU & (IData)(
                                                     (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x1cU)))),25);
    bufp->fullIData(oldp+2156,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x1cU))))),25);
    bufp->fullBit(oldp+2157,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+2158,((1U & (IData)((vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1bU)))));
    bufp->fullIData(oldp+2159,((0x7ffffffU & (IData)(vlSelf->fft_ifft__DOT__ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),27);
    bufp->fullSData(oldp+2160,(vlSelf->fft_ifft__DOT__lpf__DOT__bin_idx),10);
    bufp->fullIData(oldp+2161,((0x1fffffU & (IData)(
                                                    (vlSelf->fft_ifft__DOT__fft_o_result 
                                                     >> 0x15U)))),21);
    bufp->fullIData(oldp+2162,((0x1fffffU & (IData)(vlSelf->fft_ifft__DOT__fft_o_result))),21);
    bufp->fullBit(oldp+2163,((1U & (IData)((vlSelf->fft_ifft__DOT__lpf_o_sample 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+2164,((1U & (IData)(vlSelf->fft_ifft__DOT__lpf_o_sample))));
    bufp->fullBit(oldp+2165,(vlSelf->i_clk));
    bufp->fullBit(oldp+2166,(vlSelf->i_ce));
    bufp->fullBit(oldp+2167,(vlSelf->i_reset));
    bufp->fullIData(oldp+2168,(vlSelf->i_sample),32);
    bufp->fullQData(oldp+2169,(vlSelf->o_result),52);
    bufp->fullBit(oldp+2171,(vlSelf->o_sync));
    bufp->fullIData(oldp+2172,((0x3ffffffU & (IData)(
                                                     (vlSelf->o_result 
                                                      >> 0x1aU)))),26);
    bufp->fullIData(oldp+2173,((0x3ffffffU & (IData)(vlSelf->o_result))),26);
    bufp->fullBit(oldp+2174,(vlSelf->fft_ifft__DOT__fft__DOT____Vcellinp__revstage__i_ce));
    bufp->fullBit(oldp+2175,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_128__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+2176,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_16__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+2177,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_256__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+2178,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_32__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+2179,((1U & (~ (IData)(vlSelf->i_reset)))));
    bufp->fullBit(oldp+2180,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_512__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+2181,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_64__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+2182,(((IData)(vlSelf->fft_ifft__DOT__fft__DOT__stage_8__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+2183,(((IData)(vlSelf->i_ce) 
                              & ((IData)(vlSelf->fft_ifft__DOT__fft_o_sync) 
                                 | (IData)(vlSelf->fft_ifft__DOT__r_syncd)))));
}
