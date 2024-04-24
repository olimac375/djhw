// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfftmain__Syms.h"


VL_ATTR_COLD void Vfftmain___024root__trace_init_sub__TOP__0(Vfftmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1073,0,"i_sample",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1074,0,"o_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+1076,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fftmain", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1086,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1073,0,"i_sample",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1074,0,"o_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+1076,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"br_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+122,0,"br_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+124,0,"w_s512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+125,0,"w_d512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+127,0,"w_s256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+128,0,"w_d256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+130,0,"w_s128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+131,0,"w_d128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+133,0,"w_s64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"w_d64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+136,0,"w_s32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+137,0,"w_d32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+139,0,"w_s16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+140,0,"w_d16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+142,0,"w_s8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+143,0,"w_d8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+145,0,"w_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+146,0,"w_d4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+148,0,"w_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+149,0,"w_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+151,0,"br_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"r_br_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("revstage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1088,0,"LGSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+149,0,"i_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+122,0,"o_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+121,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"wraddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+154,0,"rdaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+155,0,"in_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("stage_128", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1089,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1090,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1091,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1094,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1095,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+1098,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+128,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+131,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+130,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+157,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+159,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+161,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+163,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+166,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+168,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+170,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+171,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1099,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+173,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1089,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1090,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1100,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+161,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+157,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+159,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+1078,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+166,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+168,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+165,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+175,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+177,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+179,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+181,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBus(c+183,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+184,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+185,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+186,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+187,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+188,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+189,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+190,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+191,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+192,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declQuad(c+193,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+195,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+197,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+199,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+201,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+203,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+205,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBit(c+207,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+208,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+210,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+212,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+214,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+216,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+218,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+219,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+220,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+221,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+222,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+223,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+224,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+225,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+226,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+227,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+197,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+199,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+201,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1101,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+208,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+219,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+228,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+229,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+230,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1103,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1101,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+210,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+218,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+233,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+234,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1103,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1104,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+216,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+221,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+236,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+237,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+238,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1104,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+214,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+220,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+241,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+242,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+243,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1106,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1107,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1109,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1094,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1110,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBus(c+1098,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+137,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+140,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+139,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+247,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+249,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+251,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+253,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+256,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+258,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+1+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 45,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+260,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+261+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+277,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+278+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1099,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+295,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1106,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1107,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1100,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+251,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+247,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+249,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+1079,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+256,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+258,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+255,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+297,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+299,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+301,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+303,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+305,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+306,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+307,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+308,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+309,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+310,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+311,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+312,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+313,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+314,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+315,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+317,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+319,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+321,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+323,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+325,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+327,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBit(c+329,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+330,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+332,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+334,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+336,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+338,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+340,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+342,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+343,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+344,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+345,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+346,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+347,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+348,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+349,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+319,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+321,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+323,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1104,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+330,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+341,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+350,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+351,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+352,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1103,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1104,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+332,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+340,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+354,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+355,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+356,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1103,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1113,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+338,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+343,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+357,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+358,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+359,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+361,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1113,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+336,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+342,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+362,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+363,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+364,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+146,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+149,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+148,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+367,0,"m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+368,0,"m_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+369,0,"i_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+370,0,"i_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+371,0,"rnd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+372,0,"rnd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+373,0,"sto_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+374,0,"sto_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+375,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"sync_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+378,0,"o_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+379,0,"o_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("do_rnd_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1090,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+379,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("DROP_ONE_BIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+381,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+382,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1090,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+371,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+378,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("DROP_ONE_BIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+385,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+386,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_256", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1114,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1115,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1094,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1116,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+1098,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+125,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+128,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+127,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+389,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+391,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+393,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+395,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+398,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+400,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+402,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+403,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1099,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+405,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1114,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1100,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+393,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+389,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+391,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+1080,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+398,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+400,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+397,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+407,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+409,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+411,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+413,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBus(c+415,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+416,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+417,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+418,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+419,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+420,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+421,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+422,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+423,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+424,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declQuad(c+425,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+427,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+429,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+431,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+433,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+435,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+437,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBit(c+439,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+440,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+442,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+444,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+446,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+448,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+450,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+451,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+452,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+453,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+454,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+455,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+456,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+457,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+458,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+459,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declQuad(c+429,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+431,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+433,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1119,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+440,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+451,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+461,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+462,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1120,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1119,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+442,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+450,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+464,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+465,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+466,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1120,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1101,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+448,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+453,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+467,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+468,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+469,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1101,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+446,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+452,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+472,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+473,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+474,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+476,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1106,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1107,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1094,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1121,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBus(c+1098,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+137,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+136,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+478,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+480,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+482,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+484,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+487,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+489,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+17+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 45,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+491,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+492+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+524,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+525+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1099,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+558,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1106,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1107,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1100,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+482,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+478,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+480,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+1081,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+487,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+489,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+486,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+560,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+562,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+564,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+566,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+568,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+569,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+570,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+571,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+572,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+573,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+574,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+575,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+576,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+577,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+578,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+580,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+582,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+584,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+586,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+588,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+590,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBit(c+592,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+593,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+595,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+597,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+599,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+601,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+603,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+604,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+605,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+606,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+607,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+608,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+609,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+610,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+611,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+612,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+582,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+584,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+586,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1104,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+593,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+604,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+613,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+614,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+615,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1124,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1104,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+595,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+603,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+617,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+618,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+619,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1124,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1113,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+601,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+606,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+621,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+622,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+623,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+625,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1113,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+599,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+605,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+626,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+627,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+628,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+630,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1088,0,"LGWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"INVERSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+143,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+146,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+145,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+631,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"pipeline",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+633,0,"sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+634,0,"sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+635,0,"diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+636,0,"diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+637,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+639,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBus(c+641,0,"ob_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+642,0,"ob_b_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+643,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+644+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+648,0,"imem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+649,0,"imem_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+650,0,"i_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+651,0,"i_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+652+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 41,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+656,0,"rnd_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+657,0,"rnd_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+658,0,"rnd_diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+659,0,"rnd_diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+660,0,"n_rnd_diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+661,0,"n_rnd_diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("do_rnd_diff_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+636,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+659,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_diff_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+635,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+658,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_sum_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+634,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+657,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_sum_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+633,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+656,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_512", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1086,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1114,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1125,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1094,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1126,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+1098,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1082,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1073,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+125,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+124,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+663,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+665,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+667,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+668,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+669,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+670,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+672,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+674,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+675,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1099,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+676,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+677,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1086,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1114,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1100,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+665,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+663,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+670,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+672,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+669,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+679,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+680,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+681,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+683,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+685,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+686,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+687,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+688,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+689,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+690,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+691,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+692,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+693,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+694,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declQuad(c+695,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+697,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+699,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+701,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+703,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+705,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+707,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBit(c+709,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+710,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+712,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+714,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+716,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+718,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+720,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+721,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+722,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+723,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+724,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+725,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+726,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+727,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+728,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+729,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declQuad(c+699,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+701,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+703,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1129,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1114,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+710,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declBus(c+721,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+730,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+731,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+732,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1130,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1129,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1114,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+712,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declBus(c+720,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+734,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+735,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+736,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1130,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1119,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1114,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+718,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+723,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+737,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+738,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+739,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+740,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+741,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1119,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1114,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+716,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+722,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+742,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+743,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+744,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+745,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+746,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_64", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1089,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1090,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1131,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1094,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1132,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBus(c+1098,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+131,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+134,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+133,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+748,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+750,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+752,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+754,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+755,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+756,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+757,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+759,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+49+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 43,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+761,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+762+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+826,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+827+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1099,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+891,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+892,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1089,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1090,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1100,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+752,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+748,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+750,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+1084,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+757,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+759,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+756,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+894,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+896,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+898,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+900,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBus(c+902,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+903,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+904,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+905,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+906,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+907,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+908,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+909,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+910,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+911,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declQuad(c+912,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+914,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+916,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+918,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+920,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+922,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+924,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBit(c+926,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+927,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+929,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+931,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+933,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+935,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+937,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+938,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+939,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+940,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+941,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+942,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+943,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+944,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+945,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+946,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+916,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+918,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+920,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1101,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+927,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+938,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+947,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+948,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+949,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+950,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1135,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1101,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+929,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+937,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+951,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+952,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+953,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1135,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1104,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+935,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+940,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+954,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+955,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+956,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+958,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1104,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+933,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+939,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+959,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+960,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+961,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+963,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1136,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1094,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1137,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+1098,0,"ZERO_ON_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+140,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+143,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+142,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+964,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+965,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+967,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+969,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+971,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+972,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+974,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+976,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+113+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+978,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+979+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+987,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+988+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1099,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+996,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+997,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1136,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1100,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+969,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+965,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+967,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+1085,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+974,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+976,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+973,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+999,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1001,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+1003,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1005,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1007,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1008,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1009,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1010,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1011,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1012,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1013,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1014,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1015,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1016,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+1017,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1019,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1021,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1023,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1025,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1027,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1029,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBit(c+1031,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1032,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1034,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1036,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1038,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1040,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1042,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1043,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1044,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1045,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1046,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1047,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1048,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1049,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1050,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1051,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declQuad(c+1021,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1023,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1025,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1113,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1032,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+1043,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1052,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1053,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1054,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1055,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1140,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1113,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1034,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+1042,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1056,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1057,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1058,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1059,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1140,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1141,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1040,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1045,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1060,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1061,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1062,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1063,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1064,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1141,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1070,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1038,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1044,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1066,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1067,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1068,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1069,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfftmain___024root__trace_init_top(Vfftmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root__trace_init_top\n"); );
    // Body
    Vfftmain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfftmain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfftmain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfftmain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfftmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfftmain___024root__trace_register(Vfftmain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vfftmain___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfftmain___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfftmain___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfftmain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfftmain___024root__trace_const_0_sub_0(Vfftmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfftmain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root__trace_const_0\n"); );
    // Init
    Vfftmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfftmain___024root*>(voidSelf);
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfftmain___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfftmain___024root__trace_const_0_sub_0(Vfftmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    bufp->fullIData(oldp+1086,(0x10U),32);
    bufp->fullIData(oldp+1087,(0x15U),32);
    bufp->fullIData(oldp+1088,(9U),32);
    bufp->fullIData(oldp+1089,(0x12U),32);
    bufp->fullIData(oldp+1090,(0x16U),32);
    bufp->fullIData(oldp+1091,(6U),32);
    bufp->fullIData(oldp+1092,(0U),32);
    bufp->fullBit(oldp+1093,(1U));
    bufp->fullIData(oldp+1094,(1U),32);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f313238U;
    __Vtemp_1[2U] = 0x636d656dU;
    bufp->fullWData(oldp+1095,(__Vtemp_1),96);
    bufp->fullBit(oldp+1098,(0U));
    bufp->fullBit(oldp+1099,(0U));
    bufp->fullCData(oldp+1100,(1U),2);
    bufp->fullIData(oldp+1101,(0x29U),32);
    bufp->fullIData(oldp+1102,(2U),32);
    bufp->fullIData(oldp+1103,(0U),20);
    bufp->fullIData(oldp+1104,(0x2bU),32);
    bufp->fullIData(oldp+1105,(4U),32);
    bufp->fullIData(oldp+1106,(0x13U),32);
    bufp->fullIData(oldp+1107,(0x17U),32);
    bufp->fullIData(oldp+1108,(0x14U),32);
    bufp->fullIData(oldp+1109,(3U),32);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6d5f3136U;
    __Vtemp_2[2U] = 0x636d65U;
    bufp->fullWData(oldp+1110,(__Vtemp_2),88);
    bufp->fullIData(oldp+1113,(0x2dU),32);
    bufp->fullIData(oldp+1114,(0x11U),32);
    bufp->fullIData(oldp+1115,(7U),32);
    __Vtemp_3[0U] = 0x2e686578U;
    __Vtemp_3[1U] = 0x5f323536U;
    __Vtemp_3[2U] = 0x636d656dU;
    bufp->fullWData(oldp+1116,(__Vtemp_3),96);
    bufp->fullIData(oldp+1119,(0x27U),32);
    bufp->fullIData(oldp+1120,(0U),18);
    __Vtemp_4[0U] = 0x2e686578U;
    __Vtemp_4[1U] = 0x6d5f3332U;
    __Vtemp_4[2U] = 0x636d65U;
    bufp->fullWData(oldp+1121,(__Vtemp_4),88);
    bufp->fullIData(oldp+1124,(0U),21);
    bufp->fullIData(oldp+1125,(8U),32);
    __Vtemp_5[0U] = 0x2e686578U;
    __Vtemp_5[1U] = 0x5f353132U;
    __Vtemp_5[2U] = 0x636d656dU;
    bufp->fullWData(oldp+1126,(__Vtemp_5),96);
    bufp->fullIData(oldp+1129,(0x25U),32);
    bufp->fullIData(oldp+1130,(0U),17);
    bufp->fullIData(oldp+1131,(5U),32);
    __Vtemp_6[0U] = 0x2e686578U;
    __Vtemp_6[1U] = 0x6d5f3634U;
    __Vtemp_6[2U] = 0x636d65U;
    bufp->fullWData(oldp+1132,(__Vtemp_6),88);
    bufp->fullIData(oldp+1135,(0U),19);
    bufp->fullIData(oldp+1136,(0x18U),32);
    __Vtemp_7[0U] = 0x2e686578U;
    __Vtemp_7[1U] = 0x656d5f38U;
    __Vtemp_7[2U] = 0x636dU;
    bufp->fullWData(oldp+1137,(__Vtemp_7),80);
    bufp->fullIData(oldp+1140,(0U),22);
    bufp->fullIData(oldp+1141,(0x2fU),32);
}

VL_ATTR_COLD void Vfftmain___024root__trace_full_0_sub_0(Vfftmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfftmain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root__trace_full_0\n"); );
    // Init
    Vfftmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfftmain___024root*>(voidSelf);
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfftmain___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfftmain___024root__trace_full_0_sub_0(Vfftmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfftmain___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[0]),46);
    bufp->fullQData(oldp+3,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[1]),46);
    bufp->fullQData(oldp+5,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[2]),46);
    bufp->fullQData(oldp+7,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[3]),46);
    bufp->fullQData(oldp+9,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[4]),46);
    bufp->fullQData(oldp+11,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[5]),46);
    bufp->fullQData(oldp+13,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[6]),46);
    bufp->fullQData(oldp+15,(vlSelf->fftmain__DOT__stage_16__DOT__cmem[7]),46);
    bufp->fullQData(oldp+17,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[0]),46);
    bufp->fullQData(oldp+19,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[1]),46);
    bufp->fullQData(oldp+21,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[2]),46);
    bufp->fullQData(oldp+23,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[3]),46);
    bufp->fullQData(oldp+25,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[4]),46);
    bufp->fullQData(oldp+27,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[5]),46);
    bufp->fullQData(oldp+29,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[6]),46);
    bufp->fullQData(oldp+31,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[7]),46);
    bufp->fullQData(oldp+33,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[8]),46);
    bufp->fullQData(oldp+35,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[9]),46);
    bufp->fullQData(oldp+37,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[10]),46);
    bufp->fullQData(oldp+39,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[11]),46);
    bufp->fullQData(oldp+41,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[12]),46);
    bufp->fullQData(oldp+43,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[13]),46);
    bufp->fullQData(oldp+45,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[14]),46);
    bufp->fullQData(oldp+47,(vlSelf->fftmain__DOT__stage_32__DOT__cmem[15]),46);
    bufp->fullQData(oldp+49,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[0]),44);
    bufp->fullQData(oldp+51,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[1]),44);
    bufp->fullQData(oldp+53,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[2]),44);
    bufp->fullQData(oldp+55,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[3]),44);
    bufp->fullQData(oldp+57,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[4]),44);
    bufp->fullQData(oldp+59,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[5]),44);
    bufp->fullQData(oldp+61,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[6]),44);
    bufp->fullQData(oldp+63,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[7]),44);
    bufp->fullQData(oldp+65,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[8]),44);
    bufp->fullQData(oldp+67,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[9]),44);
    bufp->fullQData(oldp+69,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[10]),44);
    bufp->fullQData(oldp+71,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[11]),44);
    bufp->fullQData(oldp+73,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[12]),44);
    bufp->fullQData(oldp+75,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[13]),44);
    bufp->fullQData(oldp+77,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[14]),44);
    bufp->fullQData(oldp+79,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[15]),44);
    bufp->fullQData(oldp+81,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[16]),44);
    bufp->fullQData(oldp+83,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[17]),44);
    bufp->fullQData(oldp+85,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[18]),44);
    bufp->fullQData(oldp+87,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[19]),44);
    bufp->fullQData(oldp+89,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[20]),44);
    bufp->fullQData(oldp+91,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[21]),44);
    bufp->fullQData(oldp+93,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[22]),44);
    bufp->fullQData(oldp+95,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[23]),44);
    bufp->fullQData(oldp+97,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[24]),44);
    bufp->fullQData(oldp+99,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[25]),44);
    bufp->fullQData(oldp+101,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[26]),44);
    bufp->fullQData(oldp+103,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[27]),44);
    bufp->fullQData(oldp+105,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[28]),44);
    bufp->fullQData(oldp+107,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[29]),44);
    bufp->fullQData(oldp+109,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[30]),44);
    bufp->fullQData(oldp+111,(vlSelf->fftmain__DOT__stage_64__DOT__cmem[31]),44);
    bufp->fullQData(oldp+113,(vlSelf->fftmain__DOT__stage_8__DOT__cmem[0]),48);
    bufp->fullQData(oldp+115,(vlSelf->fftmain__DOT__stage_8__DOT__cmem[1]),48);
    bufp->fullQData(oldp+117,(vlSelf->fftmain__DOT__stage_8__DOT__cmem[2]),48);
    bufp->fullQData(oldp+119,(vlSelf->fftmain__DOT__stage_8__DOT__cmem[3]),48);
    bufp->fullBit(oldp+121,(vlSelf->fftmain__DOT__br_sync));
    bufp->fullQData(oldp+122,(vlSelf->fftmain__DOT__br_result),42);
    bufp->fullBit(oldp+124,(vlSelf->fftmain__DOT__w_s512));
    bufp->fullQData(oldp+125,(vlSelf->fftmain__DOT__w_d512),34);
    bufp->fullBit(oldp+127,(vlSelf->fftmain__DOT__w_s256));
    bufp->fullQData(oldp+128,(vlSelf->fftmain__DOT__w_d256),36);
    bufp->fullBit(oldp+130,(vlSelf->fftmain__DOT__w_s128));
    bufp->fullQData(oldp+131,(vlSelf->fftmain__DOT__w_d128),36);
    bufp->fullBit(oldp+133,(vlSelf->fftmain__DOT__w_s64));
    bufp->fullQData(oldp+134,(vlSelf->fftmain__DOT__w_d64),38);
    bufp->fullBit(oldp+136,(vlSelf->fftmain__DOT__w_s32));
    bufp->fullQData(oldp+137,(vlSelf->fftmain__DOT__w_d32),38);
    bufp->fullBit(oldp+139,(vlSelf->fftmain__DOT__w_s16));
    bufp->fullQData(oldp+140,(vlSelf->fftmain__DOT__w_d16),40);
    bufp->fullBit(oldp+142,(vlSelf->fftmain__DOT__w_s8));
    bufp->fullQData(oldp+143,(vlSelf->fftmain__DOT__w_d8),40);
    bufp->fullBit(oldp+145,(vlSelf->fftmain__DOT__w_s4));
    bufp->fullQData(oldp+146,(vlSelf->fftmain__DOT__w_d4),42);
    bufp->fullBit(oldp+148,(vlSelf->fftmain__DOT__w_s2));
    bufp->fullQData(oldp+149,((((QData)((IData)(vlSelf->fftmain__DOT__stage_2__DOT__o_r)) 
                                << 0x15U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_2__DOT__o_i)))),42);
    bufp->fullBit(oldp+151,(((IData)(vlSelf->fftmain__DOT__r_br_started) 
                             | (IData)(vlSelf->fftmain__DOT__w_s2))));
    bufp->fullBit(oldp+152,(vlSelf->fftmain__DOT__r_br_started));
    bufp->fullSData(oldp+153,(vlSelf->fftmain__DOT__revstage__DOT__wraddr),10);
    bufp->fullSData(oldp+154,(((0x200U & ((~ ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                              >> 9U)) 
                                          << 9U)) | 
                               ((0x100U & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                           << 8U)) 
                                | ((0x80U & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                             << 6U)) 
                                   | ((0x40U & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
                                                << 4U)) 
                                      | ((0x20U & ((IData)(vlSelf->fftmain__DOT__revstage__DOT__wraddr) 
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
                                                           >> 8U)))))))))))),10);
    bufp->fullBit(oldp+155,(vlSelf->fftmain__DOT__revstage__DOT__in_reset));
    bufp->fullBit(oldp+156,(vlSelf->fftmain__DOT__stage_128__DOT__wait_for_sync));
    bufp->fullQData(oldp+157,(vlSelf->fftmain__DOT__stage_128__DOT__ib_a),36);
    bufp->fullQData(oldp+159,(vlSelf->fftmain__DOT__stage_128__DOT__ib_b),36);
    bufp->fullQData(oldp+161,(vlSelf->fftmain__DOT__stage_128__DOT__ib_c),44);
    bufp->fullBit(oldp+163,(vlSelf->fftmain__DOT__stage_128__DOT__ib_sync));
    bufp->fullBit(oldp+164,(vlSelf->fftmain__DOT__stage_128__DOT__b_started));
    bufp->fullBit(oldp+165,(vlSelf->fftmain__DOT__stage_128__DOT__ob_sync));
    bufp->fullQData(oldp+166,((((QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
    bufp->fullQData(oldp+168,((((QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
    bufp->fullCData(oldp+170,(vlSelf->fftmain__DOT__stage_128__DOT__iaddr),7);
    bufp->fullCData(oldp+171,(vlSelf->fftmain__DOT__stage_128__DOT__oaddr),7);
    bufp->fullCData(oldp+172,(vlSelf->fftmain__DOT__stage_128__DOT__nxt_oaddr),6);
    bufp->fullQData(oldp+173,(vlSelf->fftmain__DOT__stage_128__DOT__pre_ovalue),36);
    bufp->fullQData(oldp+175,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
    bufp->fullQData(oldp+177,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
    bufp->fullBit(oldp+179,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+180,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+181,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
    bufp->fullIData(oldp+183,((0x3ffffU & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x12U)))),18);
    bufp->fullIData(oldp+184,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
    bufp->fullIData(oldp+185,((0x3ffffU & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x12U)))),18);
    bufp->fullIData(oldp+186,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
    bufp->fullIData(oldp+187,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
    bufp->fullIData(oldp+188,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
    bufp->fullIData(oldp+189,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
    bufp->fullIData(oldp+190,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
    bufp->fullIData(oldp+191,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
    bufp->fullIData(oldp+192,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
    bufp->fullQData(oldp+193,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
    bufp->fullQData(oldp+195,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
    bufp->fullQData(oldp+197,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
    bufp->fullQData(oldp+199,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
    bufp->fullQData(oldp+201,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
    bufp->fullQData(oldp+203,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
    bufp->fullQData(oldp+205,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
    bufp->fullBit(oldp+207,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x26U)))));
    bufp->fullQData(oldp+208,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x12U)))))))) 
                                << 0x27U) | (0x7fffffffffULL 
                                             & VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
    bufp->fullQData(oldp+210,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x25U)))))))) 
                                << 0x27U) | ((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(
                                                                        (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x13U))))) 
                                             << 0x14U))),41);
    bufp->fullQData(oldp+212,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
    bufp->fullQData(oldp+214,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
    bufp->fullQData(oldp+216,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
    bufp->fullIData(oldp+218,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
    bufp->fullIData(oldp+219,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
    bufp->fullIData(oldp+220,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
    bufp->fullIData(oldp+221,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
    bufp->fullIData(oldp+222,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
    bufp->fullIData(oldp+223,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
    bufp->fullIData(oldp+224,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
    bufp->fullIData(oldp+225,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
    bufp->fullIData(oldp+226,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
    bufp->fullIData(oldp+227,(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
    bufp->fullIData(oldp+228,((0x3ffffU & (IData)((0x3ffffULL 
                                                   & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                      >> 0x15U))))),18);
    bufp->fullIData(oldp+229,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                         >> 0x15U)))))),18);
    bufp->fullBit(oldp+230,((1U & (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x15U))))));
    bufp->fullBit(oldp+231,((1U & (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x14U))))));
    bufp->fullIData(oldp+232,((0x3ffffU & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x14U)))),18);
    bufp->fullIData(oldp+233,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U))))),18);
    bufp->fullBit(oldp+234,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+235,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x13U)))));
    bufp->fullIData(oldp+236,((0x3ffffU & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x15U)))),18);
    bufp->fullIData(oldp+237,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U))))),18);
    bufp->fullBit(oldp+238,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+239,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+240,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
    bufp->fullIData(oldp+241,((0x3ffffU & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x15U)))),18);
    bufp->fullIData(oldp+242,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U))))),18);
    bufp->fullBit(oldp+243,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+244,((1U & (IData)((vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+245,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
    bufp->fullBit(oldp+246,(vlSelf->fftmain__DOT__stage_16__DOT__wait_for_sync));
    bufp->fullQData(oldp+247,(vlSelf->fftmain__DOT__stage_16__DOT__ib_a),38);
    bufp->fullQData(oldp+249,(vlSelf->fftmain__DOT__stage_16__DOT__ib_b),38);
    bufp->fullQData(oldp+251,(vlSelf->fftmain__DOT__stage_16__DOT__ib_c),46);
    bufp->fullBit(oldp+253,(vlSelf->fftmain__DOT__stage_16__DOT__ib_sync));
    bufp->fullBit(oldp+254,(vlSelf->fftmain__DOT__stage_16__DOT__b_started));
    bufp->fullBit(oldp+255,(vlSelf->fftmain__DOT__stage_16__DOT__ob_sync));
    bufp->fullQData(oldp+256,((((QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
    bufp->fullQData(oldp+258,((((QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
    bufp->fullCData(oldp+260,(vlSelf->fftmain__DOT__stage_16__DOT__iaddr),4);
    bufp->fullQData(oldp+261,(vlSelf->fftmain__DOT__stage_16__DOT__imem[0]),38);
    bufp->fullQData(oldp+263,(vlSelf->fftmain__DOT__stage_16__DOT__imem[1]),38);
    bufp->fullQData(oldp+265,(vlSelf->fftmain__DOT__stage_16__DOT__imem[2]),38);
    bufp->fullQData(oldp+267,(vlSelf->fftmain__DOT__stage_16__DOT__imem[3]),38);
    bufp->fullQData(oldp+269,(vlSelf->fftmain__DOT__stage_16__DOT__imem[4]),38);
    bufp->fullQData(oldp+271,(vlSelf->fftmain__DOT__stage_16__DOT__imem[5]),38);
    bufp->fullQData(oldp+273,(vlSelf->fftmain__DOT__stage_16__DOT__imem[6]),38);
    bufp->fullQData(oldp+275,(vlSelf->fftmain__DOT__stage_16__DOT__imem[7]),38);
    bufp->fullCData(oldp+277,(vlSelf->fftmain__DOT__stage_16__DOT__oaddr),4);
    bufp->fullQData(oldp+278,(vlSelf->fftmain__DOT__stage_16__DOT__omem[0]),40);
    bufp->fullQData(oldp+280,(vlSelf->fftmain__DOT__stage_16__DOT__omem[1]),40);
    bufp->fullQData(oldp+282,(vlSelf->fftmain__DOT__stage_16__DOT__omem[2]),40);
    bufp->fullQData(oldp+284,(vlSelf->fftmain__DOT__stage_16__DOT__omem[3]),40);
    bufp->fullQData(oldp+286,(vlSelf->fftmain__DOT__stage_16__DOT__omem[4]),40);
    bufp->fullQData(oldp+288,(vlSelf->fftmain__DOT__stage_16__DOT__omem[5]),40);
    bufp->fullQData(oldp+290,(vlSelf->fftmain__DOT__stage_16__DOT__omem[6]),40);
    bufp->fullQData(oldp+292,(vlSelf->fftmain__DOT__stage_16__DOT__omem[7]),40);
    bufp->fullCData(oldp+294,(vlSelf->fftmain__DOT__stage_16__DOT__nxt_oaddr),3);
    bufp->fullQData(oldp+295,(vlSelf->fftmain__DOT__stage_16__DOT__pre_ovalue),40);
    bufp->fullQData(oldp+297,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
    bufp->fullQData(oldp+299,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
    bufp->fullBit(oldp+301,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+302,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+303,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
    bufp->fullIData(oldp+305,((0x7ffffU & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+306,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
    bufp->fullIData(oldp+307,((0x7ffffU & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+308,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
    bufp->fullIData(oldp+309,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
    bufp->fullIData(oldp+310,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
    bufp->fullIData(oldp+311,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
    bufp->fullIData(oldp+312,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
    bufp->fullIData(oldp+313,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
    bufp->fullIData(oldp+314,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
    bufp->fullQData(oldp+315,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
    bufp->fullQData(oldp+317,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
    bufp->fullQData(oldp+319,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
    bufp->fullQData(oldp+321,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
    bufp->fullQData(oldp+323,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
    bufp->fullQData(oldp+325,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
    bufp->fullQData(oldp+327,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
    bufp->fullBit(oldp+329,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x28U)))));
    bufp->fullQData(oldp+330,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x13U)))))))) 
                                << 0x29U) | (0x1ffffffffffULL 
                                             & VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
    bufp->fullQData(oldp+332,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x27U)))))))) 
                                << 0x29U) | ((QData)((IData)(
                                                             (0xfffffU 
                                                              & (IData)(
                                                                        (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x14U))))) 
                                             << 0x15U))),43);
    bufp->fullQData(oldp+334,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
    bufp->fullQData(oldp+336,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
    bufp->fullQData(oldp+338,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
    bufp->fullIData(oldp+340,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
    bufp->fullIData(oldp+341,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
    bufp->fullIData(oldp+342,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
    bufp->fullIData(oldp+343,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
    bufp->fullIData(oldp+344,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
    bufp->fullIData(oldp+345,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
    bufp->fullIData(oldp+346,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
    bufp->fullIData(oldp+347,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
    bufp->fullIData(oldp+348,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
    bufp->fullIData(oldp+349,(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
    bufp->fullIData(oldp+350,((0xfffffU & (IData)((0xfffffULL 
                                                   & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                      >> 0x15U))))),20);
    bufp->fullIData(oldp+351,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0xfffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x15U)))))),20);
    bufp->fullBit(oldp+352,((1U & (IData)((0xfffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x15U))))));
    bufp->fullBit(oldp+353,((1U & (IData)((0x1fffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x14U))))));
    bufp->fullIData(oldp+354,((0xfffffU & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x14U)))),20);
    bufp->fullIData(oldp+355,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U))))),20);
    bufp->fullBit(oldp+356,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+357,((0xfffffU & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x15U)))),20);
    bufp->fullIData(oldp+358,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U))))),20);
    bufp->fullBit(oldp+359,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+360,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+361,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
    bufp->fullIData(oldp+362,((0xfffffU & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x15U)))),20);
    bufp->fullIData(oldp+363,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U))))),20);
    bufp->fullBit(oldp+364,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+365,((1U & (IData)((vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+366,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
    bufp->fullIData(oldp+367,(vlSelf->fftmain__DOT__stage_2__DOT__m_r),21);
    bufp->fullIData(oldp+368,(vlSelf->fftmain__DOT__stage_2__DOT__m_i),21);
    bufp->fullIData(oldp+369,((0x1fffffU & (IData)(
                                                   (vlSelf->fftmain__DOT__w_d4 
                                                    >> 0x15U)))),21);
    bufp->fullIData(oldp+370,((0x1fffffU & (IData)(vlSelf->fftmain__DOT__w_d4))),21);
    bufp->fullIData(oldp+371,(vlSelf->fftmain__DOT__stage_2__DOT__rnd_r),22);
    bufp->fullIData(oldp+372,(vlSelf->fftmain__DOT__stage_2__DOT__rnd_i),22);
    bufp->fullIData(oldp+373,(vlSelf->fftmain__DOT__stage_2__DOT__sto_r),22);
    bufp->fullIData(oldp+374,(vlSelf->fftmain__DOT__stage_2__DOT__sto_i),22);
    bufp->fullBit(oldp+375,(vlSelf->fftmain__DOT__stage_2__DOT__wait_for_sync));
    bufp->fullBit(oldp+376,(vlSelf->fftmain__DOT__stage_2__DOT__stage));
    bufp->fullCData(oldp+377,(vlSelf->fftmain__DOT__stage_2__DOT__sync_pipe),2);
    bufp->fullIData(oldp+378,(vlSelf->fftmain__DOT__stage_2__DOT__o_r),21);
    bufp->fullIData(oldp+379,(vlSelf->fftmain__DOT__stage_2__DOT__o_i),21);
    bufp->fullIData(oldp+380,((0x1fffffU & (vlSelf->fftmain__DOT__stage_2__DOT__rnd_i 
                                            >> 1U))),21);
    bufp->fullIData(oldp+381,((0x1fffffU & ((IData)(1U) 
                                            + (vlSelf->fftmain__DOT__stage_2__DOT__rnd_i 
                                               >> 1U)))),21);
    bufp->fullBit(oldp+382,((1U & (vlSelf->fftmain__DOT__stage_2__DOT__rnd_i 
                                   >> 1U))));
    bufp->fullBit(oldp+383,((1U & vlSelf->fftmain__DOT__stage_2__DOT__rnd_i)));
    bufp->fullIData(oldp+384,((0x1fffffU & (vlSelf->fftmain__DOT__stage_2__DOT__rnd_r 
                                            >> 1U))),21);
    bufp->fullIData(oldp+385,((0x1fffffU & ((IData)(1U) 
                                            + (vlSelf->fftmain__DOT__stage_2__DOT__rnd_r 
                                               >> 1U)))),21);
    bufp->fullBit(oldp+386,((1U & (vlSelf->fftmain__DOT__stage_2__DOT__rnd_r 
                                   >> 1U))));
    bufp->fullBit(oldp+387,((1U & vlSelf->fftmain__DOT__stage_2__DOT__rnd_r)));
    bufp->fullBit(oldp+388,(vlSelf->fftmain__DOT__stage_256__DOT__wait_for_sync));
    bufp->fullQData(oldp+389,(vlSelf->fftmain__DOT__stage_256__DOT__ib_a),34);
    bufp->fullQData(oldp+391,(vlSelf->fftmain__DOT__stage_256__DOT__ib_b),34);
    bufp->fullQData(oldp+393,(vlSelf->fftmain__DOT__stage_256__DOT__ib_c),42);
    bufp->fullBit(oldp+395,(vlSelf->fftmain__DOT__stage_256__DOT__ib_sync));
    bufp->fullBit(oldp+396,(vlSelf->fftmain__DOT__stage_256__DOT__b_started));
    bufp->fullBit(oldp+397,(vlSelf->fftmain__DOT__stage_256__DOT__ob_sync));
    bufp->fullQData(oldp+398,((((QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
    bufp->fullQData(oldp+400,((((QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
    bufp->fullCData(oldp+402,(vlSelf->fftmain__DOT__stage_256__DOT__iaddr),8);
    bufp->fullCData(oldp+403,(vlSelf->fftmain__DOT__stage_256__DOT__oaddr),8);
    bufp->fullCData(oldp+404,(vlSelf->fftmain__DOT__stage_256__DOT__nxt_oaddr),7);
    bufp->fullQData(oldp+405,(vlSelf->fftmain__DOT__stage_256__DOT__pre_ovalue),36);
    bufp->fullQData(oldp+407,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left),34);
    bufp->fullQData(oldp+409,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right),34);
    bufp->fullBit(oldp+411,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+412,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+413,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef),42);
    bufp->fullIData(oldp+415,((0x1ffffU & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x11U)))),17);
    bufp->fullIData(oldp+416,((0x1ffffU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))),17);
    bufp->fullIData(oldp+417,((0x1ffffU & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x11U)))),17);
    bufp->fullIData(oldp+418,((0x1ffffU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right))),17);
    bufp->fullIData(oldp+419,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),21);
    bufp->fullIData(oldp+420,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),21);
    bufp->fullIData(oldp+421,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),18);
    bufp->fullIData(oldp+422,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),18);
    bufp->fullIData(oldp+423,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),18);
    bufp->fullIData(oldp+424,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),18);
    bufp->fullQData(oldp+425,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv),37);
    bufp->fullQData(oldp+427,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv),37);
    bufp->fullQData(oldp+429,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),39);
    bufp->fullQData(oldp+431,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),39);
    bufp->fullQData(oldp+433,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),41);
    bufp->fullQData(oldp+435,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one),41);
    bufp->fullQData(oldp+437,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two),41);
    bufp->fullBit(oldp+439,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x24U)))));
    bufp->fullQData(oldp+440,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x11U)))))))) 
                                << 0x25U) | (0x1fffffffffULL 
                                             & VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U)))),39);
    bufp->fullQData(oldp+442,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x23U)))))))) 
                                << 0x25U) | ((QData)((IData)(
                                                             (0x3ffffU 
                                                              & (IData)(
                                                                        (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x12U))))) 
                                             << 0x13U))),39);
    bufp->fullQData(oldp+444,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved),37);
    bufp->fullQData(oldp+446,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),41);
    bufp->fullQData(oldp+448,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),41);
    bufp->fullIData(oldp+450,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
    bufp->fullIData(oldp+451,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
    bufp->fullIData(oldp+452,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
    bufp->fullIData(oldp+453,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
    bufp->fullIData(oldp+454,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),21);
    bufp->fullIData(oldp+455,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),21);
    bufp->fullIData(oldp+456,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),18);
    bufp->fullIData(oldp+457,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),18);
    bufp->fullIData(oldp+458,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),22);
    bufp->fullIData(oldp+459,(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),19);
    bufp->fullIData(oldp+460,((0x3ffffU & (IData)((0x3ffffULL 
                                                   & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                      >> 0x13U))))),18);
    bufp->fullIData(oldp+461,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                         >> 0x13U)))))),18);
    bufp->fullBit(oldp+462,((1U & (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                              >> 0x13U))))));
    bufp->fullBit(oldp+463,((1U & (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(37,37,32, vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                              >> 0x12U))))));
    bufp->fullIData(oldp+464,((0x3ffffU & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x12U)))),18);
    bufp->fullIData(oldp+465,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x12U))))),18);
    bufp->fullBit(oldp+466,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x12U)))));
    bufp->fullIData(oldp+467,((0x3ffffU & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x13U)))),18);
    bufp->fullIData(oldp+468,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x13U))))),18);
    bufp->fullBit(oldp+469,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+470,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x12U)))));
    bufp->fullIData(oldp+471,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),18);
    bufp->fullIData(oldp+472,((0x3ffffU & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x13U)))),18);
    bufp->fullIData(oldp+473,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x13U))))),18);
    bufp->fullBit(oldp+474,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+475,((1U & (IData)((vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x12U)))));
    bufp->fullIData(oldp+476,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),18);
    bufp->fullBit(oldp+477,(vlSelf->fftmain__DOT__stage_32__DOT__wait_for_sync));
    bufp->fullQData(oldp+478,(vlSelf->fftmain__DOT__stage_32__DOT__ib_a),38);
    bufp->fullQData(oldp+480,(vlSelf->fftmain__DOT__stage_32__DOT__ib_b),38);
    bufp->fullQData(oldp+482,(vlSelf->fftmain__DOT__stage_32__DOT__ib_c),46);
    bufp->fullBit(oldp+484,(vlSelf->fftmain__DOT__stage_32__DOT__ib_sync));
    bufp->fullBit(oldp+485,(vlSelf->fftmain__DOT__stage_32__DOT__b_started));
    bufp->fullBit(oldp+486,(vlSelf->fftmain__DOT__stage_32__DOT__ob_sync));
    bufp->fullQData(oldp+487,((((QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
    bufp->fullQData(oldp+489,((((QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
    bufp->fullCData(oldp+491,(vlSelf->fftmain__DOT__stage_32__DOT__iaddr),5);
    bufp->fullQData(oldp+492,(vlSelf->fftmain__DOT__stage_32__DOT__imem[0]),38);
    bufp->fullQData(oldp+494,(vlSelf->fftmain__DOT__stage_32__DOT__imem[1]),38);
    bufp->fullQData(oldp+496,(vlSelf->fftmain__DOT__stage_32__DOT__imem[2]),38);
    bufp->fullQData(oldp+498,(vlSelf->fftmain__DOT__stage_32__DOT__imem[3]),38);
    bufp->fullQData(oldp+500,(vlSelf->fftmain__DOT__stage_32__DOT__imem[4]),38);
    bufp->fullQData(oldp+502,(vlSelf->fftmain__DOT__stage_32__DOT__imem[5]),38);
    bufp->fullQData(oldp+504,(vlSelf->fftmain__DOT__stage_32__DOT__imem[6]),38);
    bufp->fullQData(oldp+506,(vlSelf->fftmain__DOT__stage_32__DOT__imem[7]),38);
    bufp->fullQData(oldp+508,(vlSelf->fftmain__DOT__stage_32__DOT__imem[8]),38);
    bufp->fullQData(oldp+510,(vlSelf->fftmain__DOT__stage_32__DOT__imem[9]),38);
    bufp->fullQData(oldp+512,(vlSelf->fftmain__DOT__stage_32__DOT__imem[10]),38);
    bufp->fullQData(oldp+514,(vlSelf->fftmain__DOT__stage_32__DOT__imem[11]),38);
    bufp->fullQData(oldp+516,(vlSelf->fftmain__DOT__stage_32__DOT__imem[12]),38);
    bufp->fullQData(oldp+518,(vlSelf->fftmain__DOT__stage_32__DOT__imem[13]),38);
    bufp->fullQData(oldp+520,(vlSelf->fftmain__DOT__stage_32__DOT__imem[14]),38);
    bufp->fullQData(oldp+522,(vlSelf->fftmain__DOT__stage_32__DOT__imem[15]),38);
    bufp->fullCData(oldp+524,(vlSelf->fftmain__DOT__stage_32__DOT__oaddr),5);
    bufp->fullQData(oldp+525,(vlSelf->fftmain__DOT__stage_32__DOT__omem[0]),38);
    bufp->fullQData(oldp+527,(vlSelf->fftmain__DOT__stage_32__DOT__omem[1]),38);
    bufp->fullQData(oldp+529,(vlSelf->fftmain__DOT__stage_32__DOT__omem[2]),38);
    bufp->fullQData(oldp+531,(vlSelf->fftmain__DOT__stage_32__DOT__omem[3]),38);
    bufp->fullQData(oldp+533,(vlSelf->fftmain__DOT__stage_32__DOT__omem[4]),38);
    bufp->fullQData(oldp+535,(vlSelf->fftmain__DOT__stage_32__DOT__omem[5]),38);
    bufp->fullQData(oldp+537,(vlSelf->fftmain__DOT__stage_32__DOT__omem[6]),38);
    bufp->fullQData(oldp+539,(vlSelf->fftmain__DOT__stage_32__DOT__omem[7]),38);
    bufp->fullQData(oldp+541,(vlSelf->fftmain__DOT__stage_32__DOT__omem[8]),38);
    bufp->fullQData(oldp+543,(vlSelf->fftmain__DOT__stage_32__DOT__omem[9]),38);
    bufp->fullQData(oldp+545,(vlSelf->fftmain__DOT__stage_32__DOT__omem[10]),38);
    bufp->fullQData(oldp+547,(vlSelf->fftmain__DOT__stage_32__DOT__omem[11]),38);
    bufp->fullQData(oldp+549,(vlSelf->fftmain__DOT__stage_32__DOT__omem[12]),38);
    bufp->fullQData(oldp+551,(vlSelf->fftmain__DOT__stage_32__DOT__omem[13]),38);
    bufp->fullQData(oldp+553,(vlSelf->fftmain__DOT__stage_32__DOT__omem[14]),38);
    bufp->fullQData(oldp+555,(vlSelf->fftmain__DOT__stage_32__DOT__omem[15]),38);
    bufp->fullCData(oldp+557,(vlSelf->fftmain__DOT__stage_32__DOT__nxt_oaddr),4);
    bufp->fullQData(oldp+558,(vlSelf->fftmain__DOT__stage_32__DOT__pre_ovalue),38);
    bufp->fullQData(oldp+560,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
    bufp->fullQData(oldp+562,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
    bufp->fullBit(oldp+564,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+565,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+566,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
    bufp->fullIData(oldp+568,((0x7ffffU & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+569,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
    bufp->fullIData(oldp+570,((0x7ffffU & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+571,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
    bufp->fullIData(oldp+572,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
    bufp->fullIData(oldp+573,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
    bufp->fullIData(oldp+574,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
    bufp->fullIData(oldp+575,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
    bufp->fullIData(oldp+576,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
    bufp->fullIData(oldp+577,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
    bufp->fullQData(oldp+578,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
    bufp->fullQData(oldp+580,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
    bufp->fullQData(oldp+582,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
    bufp->fullQData(oldp+584,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
    bufp->fullQData(oldp+586,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
    bufp->fullQData(oldp+588,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
    bufp->fullQData(oldp+590,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
    bufp->fullBit(oldp+592,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x28U)))));
    bufp->fullQData(oldp+593,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x13U)))))))) 
                                << 0x29U) | (0x1ffffffffffULL 
                                             & VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
    bufp->fullQData(oldp+595,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x27U)))))))) 
                                << 0x29U) | ((QData)((IData)(
                                                             (0xfffffU 
                                                              & (IData)(
                                                                        (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x14U))))) 
                                             << 0x15U))),43);
    bufp->fullQData(oldp+597,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
    bufp->fullQData(oldp+599,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
    bufp->fullQData(oldp+601,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
    bufp->fullIData(oldp+603,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
    bufp->fullIData(oldp+604,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
    bufp->fullIData(oldp+605,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
    bufp->fullIData(oldp+606,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
    bufp->fullIData(oldp+607,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
    bufp->fullIData(oldp+608,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
    bufp->fullIData(oldp+609,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
    bufp->fullIData(oldp+610,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
    bufp->fullIData(oldp+611,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
    bufp->fullIData(oldp+612,(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
    bufp->fullIData(oldp+613,((0x7ffffU & (IData)((0x7ffffULL 
                                                   & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                      >> 0x16U))))),19);
    bufp->fullIData(oldp+614,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x7ffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x16U)))))),19);
    bufp->fullBit(oldp+615,((1U & (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x16U))))));
    bufp->fullBit(oldp+616,((1U & (IData)((0xfffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x15U))))));
    bufp->fullIData(oldp+617,((0x7ffffU & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x15U)))),19);
    bufp->fullIData(oldp+618,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x15U))))),19);
    bufp->fullBit(oldp+619,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+620,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+621,((0x7ffffU & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x16U)))),19);
    bufp->fullIData(oldp+622,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x16U))))),19);
    bufp->fullBit(oldp+623,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+624,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x15U)))));
    bufp->fullIData(oldp+625,((0x1fffffU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),21);
    bufp->fullIData(oldp+626,((0x7ffffU & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x16U)))),19);
    bufp->fullIData(oldp+627,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x16U))))),19);
    bufp->fullBit(oldp+628,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+629,((1U & (IData)((vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x15U)))));
    bufp->fullIData(oldp+630,((0x1fffffU & (IData)(vlSelf->fftmain__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),21);
    bufp->fullBit(oldp+631,(vlSelf->fftmain__DOT__stage_4__DOT__wait_for_sync));
    bufp->fullCData(oldp+632,(vlSelf->fftmain__DOT__stage_4__DOT__pipeline),3);
    bufp->fullIData(oldp+633,(vlSelf->fftmain__DOT__stage_4__DOT__sum_r),21);
    bufp->fullIData(oldp+634,(vlSelf->fftmain__DOT__stage_4__DOT__sum_i),21);
    bufp->fullIData(oldp+635,(vlSelf->fftmain__DOT__stage_4__DOT__diff_r),21);
    bufp->fullIData(oldp+636,(vlSelf->fftmain__DOT__stage_4__DOT__diff_i),21);
    bufp->fullQData(oldp+637,(vlSelf->fftmain__DOT__stage_4__DOT__ob_a),42);
    bufp->fullQData(oldp+639,((((QData)((IData)(vlSelf->fftmain__DOT__stage_4__DOT__ob_b_r)) 
                                << 0x15U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_4__DOT__ob_b_i)))),42);
    bufp->fullIData(oldp+641,(vlSelf->fftmain__DOT__stage_4__DOT__ob_b_r),21);
    bufp->fullIData(oldp+642,(vlSelf->fftmain__DOT__stage_4__DOT__ob_b_i),21);
    bufp->fullSData(oldp+643,(vlSelf->fftmain__DOT__stage_4__DOT__iaddr),9);
    bufp->fullQData(oldp+644,(vlSelf->fftmain__DOT__stage_4__DOT__imem[0]),40);
    bufp->fullQData(oldp+646,(vlSelf->fftmain__DOT__stage_4__DOT__imem[1]),40);
    bufp->fullIData(oldp+648,((0xfffffU & (IData)((
                                                   vlSelf->fftmain__DOT__stage_4__DOT__imem
                                                   [1U] 
                                                   >> 0x14U)))),20);
    bufp->fullIData(oldp+649,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_4__DOT__imem
                                                  [1U]))),20);
    bufp->fullIData(oldp+650,((0xfffffU & (IData)((vlSelf->fftmain__DOT__w_d8 
                                                   >> 0x14U)))),20);
    bufp->fullIData(oldp+651,((0xfffffU & (IData)(vlSelf->fftmain__DOT__w_d8))),20);
    bufp->fullQData(oldp+652,(vlSelf->fftmain__DOT__stage_4__DOT__omem[0]),42);
    bufp->fullQData(oldp+654,(vlSelf->fftmain__DOT__stage_4__DOT__omem[1]),42);
    bufp->fullIData(oldp+656,(vlSelf->fftmain__DOT__stage_4__DOT__rnd_sum_r),21);
    bufp->fullIData(oldp+657,(vlSelf->fftmain__DOT__stage_4__DOT__rnd_sum_i),21);
    bufp->fullIData(oldp+658,(vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_r),21);
    bufp->fullIData(oldp+659,(vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_i),21);
    bufp->fullIData(oldp+660,((0x1fffffU & (- vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_r))),21);
    bufp->fullIData(oldp+661,((0x1fffffU & (- vlSelf->fftmain__DOT__stage_4__DOT__rnd_diff_i))),21);
    bufp->fullBit(oldp+662,(vlSelf->fftmain__DOT__stage_512__DOT__wait_for_sync));
    bufp->fullIData(oldp+663,(vlSelf->fftmain__DOT__stage_512__DOT__ib_a),32);
    bufp->fullIData(oldp+664,(vlSelf->fftmain__DOT__stage_512__DOT__ib_b),32);
    bufp->fullQData(oldp+665,(vlSelf->fftmain__DOT__stage_512__DOT__ib_c),40);
    bufp->fullBit(oldp+667,(vlSelf->fftmain__DOT__stage_512__DOT__ib_sync));
    bufp->fullBit(oldp+668,(vlSelf->fftmain__DOT__stage_512__DOT__b_started));
    bufp->fullBit(oldp+669,(vlSelf->fftmain__DOT__stage_512__DOT__ob_sync));
    bufp->fullQData(oldp+670,((((QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x11U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),34);
    bufp->fullQData(oldp+672,((((QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x11U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),34);
    bufp->fullSData(oldp+674,(vlSelf->fftmain__DOT__stage_512__DOT__iaddr),9);
    bufp->fullSData(oldp+675,(vlSelf->fftmain__DOT__stage_512__DOT__oaddr),9);
    bufp->fullCData(oldp+676,(vlSelf->fftmain__DOT__stage_512__DOT__nxt_oaddr),8);
    bufp->fullQData(oldp+677,(vlSelf->fftmain__DOT__stage_512__DOT__pre_ovalue),34);
    bufp->fullIData(oldp+679,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left),32);
    bufp->fullIData(oldp+680,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right),32);
    bufp->fullBit(oldp+681,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+682,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+683,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef),40);
    bufp->fullSData(oldp+685,((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+686,((0xffffU & vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left)),16);
    bufp->fullSData(oldp+687,((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+688,((0xffffU & vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right)),16);
    bufp->fullIData(oldp+689,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),20);
    bufp->fullIData(oldp+690,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),20);
    bufp->fullIData(oldp+691,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),17);
    bufp->fullIData(oldp+692,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),17);
    bufp->fullIData(oldp+693,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),17);
    bufp->fullIData(oldp+694,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),17);
    bufp->fullQData(oldp+695,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv),35);
    bufp->fullQData(oldp+697,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv),35);
    bufp->fullQData(oldp+699,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),37);
    bufp->fullQData(oldp+701,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),37);
    bufp->fullQData(oldp+703,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),39);
    bufp->fullQData(oldp+705,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one),39);
    bufp->fullQData(oldp+707,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two),39);
    bufp->fullBit(oldp+709,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x22U)))));
    bufp->fullQData(oldp+710,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x10U)))))))) 
                                << 0x23U) | (0x7ffffffffULL 
                                             & VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U)))),37);
    bufp->fullQData(oldp+712,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x21U)))))))) 
                                << 0x23U) | ((QData)((IData)(
                                                             (0x1ffffU 
                                                              & (IData)(
                                                                        (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x11U))))) 
                                             << 0x12U))),37);
    bufp->fullQData(oldp+714,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved),35);
    bufp->fullQData(oldp+716,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),39);
    bufp->fullQData(oldp+718,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),39);
    bufp->fullIData(oldp+720,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),17);
    bufp->fullIData(oldp+721,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),17);
    bufp->fullIData(oldp+722,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),17);
    bufp->fullIData(oldp+723,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),17);
    bufp->fullIData(oldp+724,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),20);
    bufp->fullIData(oldp+725,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),20);
    bufp->fullIData(oldp+726,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),17);
    bufp->fullIData(oldp+727,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),17);
    bufp->fullIData(oldp+728,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),21);
    bufp->fullIData(oldp+729,(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),18);
    bufp->fullIData(oldp+730,((0x1ffffU & (IData)((0x1ffffULL 
                                                   & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                      >> 0x12U))))),17);
    bufp->fullIData(oldp+731,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x1ffffULL 
                                                      & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                         >> 0x12U)))))),17);
    bufp->fullBit(oldp+732,((1U & (IData)((0x1ffffULL 
                                           & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                              >> 0x12U))))));
    bufp->fullBit(oldp+733,((1U & (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(35,35,32, vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                              >> 0x11U))))));
    bufp->fullIData(oldp+734,((0x1ffffU & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x11U)))),17);
    bufp->fullIData(oldp+735,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x11U))))),17);
    bufp->fullBit(oldp+736,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x11U)))));
    bufp->fullIData(oldp+737,((0x1ffffU & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x12U)))),17);
    bufp->fullIData(oldp+738,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x12U))))),17);
    bufp->fullBit(oldp+739,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+740,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x11U)))));
    bufp->fullIData(oldp+741,((0x1ffffU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),17);
    bufp->fullIData(oldp+742,((0x1ffffU & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x12U)))),17);
    bufp->fullIData(oldp+743,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x12U))))),17);
    bufp->fullBit(oldp+744,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+745,((1U & (IData)((vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x11U)))));
    bufp->fullIData(oldp+746,((0x1ffffU & (IData)(vlSelf->fftmain__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),17);
    bufp->fullBit(oldp+747,(vlSelf->fftmain__DOT__stage_64__DOT__wait_for_sync));
    bufp->fullQData(oldp+748,(vlSelf->fftmain__DOT__stage_64__DOT__ib_a),36);
    bufp->fullQData(oldp+750,(vlSelf->fftmain__DOT__stage_64__DOT__ib_b),36);
    bufp->fullQData(oldp+752,(vlSelf->fftmain__DOT__stage_64__DOT__ib_c),44);
    bufp->fullBit(oldp+754,(vlSelf->fftmain__DOT__stage_64__DOT__ib_sync));
    bufp->fullBit(oldp+755,(vlSelf->fftmain__DOT__stage_64__DOT__b_started));
    bufp->fullBit(oldp+756,(vlSelf->fftmain__DOT__stage_64__DOT__ob_sync));
    bufp->fullQData(oldp+757,((((QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
    bufp->fullQData(oldp+759,((((QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
    bufp->fullCData(oldp+761,(vlSelf->fftmain__DOT__stage_64__DOT__iaddr),6);
    bufp->fullQData(oldp+762,(vlSelf->fftmain__DOT__stage_64__DOT__imem[0]),36);
    bufp->fullQData(oldp+764,(vlSelf->fftmain__DOT__stage_64__DOT__imem[1]),36);
    bufp->fullQData(oldp+766,(vlSelf->fftmain__DOT__stage_64__DOT__imem[2]),36);
    bufp->fullQData(oldp+768,(vlSelf->fftmain__DOT__stage_64__DOT__imem[3]),36);
    bufp->fullQData(oldp+770,(vlSelf->fftmain__DOT__stage_64__DOT__imem[4]),36);
    bufp->fullQData(oldp+772,(vlSelf->fftmain__DOT__stage_64__DOT__imem[5]),36);
    bufp->fullQData(oldp+774,(vlSelf->fftmain__DOT__stage_64__DOT__imem[6]),36);
    bufp->fullQData(oldp+776,(vlSelf->fftmain__DOT__stage_64__DOT__imem[7]),36);
    bufp->fullQData(oldp+778,(vlSelf->fftmain__DOT__stage_64__DOT__imem[8]),36);
    bufp->fullQData(oldp+780,(vlSelf->fftmain__DOT__stage_64__DOT__imem[9]),36);
    bufp->fullQData(oldp+782,(vlSelf->fftmain__DOT__stage_64__DOT__imem[10]),36);
    bufp->fullQData(oldp+784,(vlSelf->fftmain__DOT__stage_64__DOT__imem[11]),36);
    bufp->fullQData(oldp+786,(vlSelf->fftmain__DOT__stage_64__DOT__imem[12]),36);
    bufp->fullQData(oldp+788,(vlSelf->fftmain__DOT__stage_64__DOT__imem[13]),36);
    bufp->fullQData(oldp+790,(vlSelf->fftmain__DOT__stage_64__DOT__imem[14]),36);
    bufp->fullQData(oldp+792,(vlSelf->fftmain__DOT__stage_64__DOT__imem[15]),36);
    bufp->fullQData(oldp+794,(vlSelf->fftmain__DOT__stage_64__DOT__imem[16]),36);
    bufp->fullQData(oldp+796,(vlSelf->fftmain__DOT__stage_64__DOT__imem[17]),36);
    bufp->fullQData(oldp+798,(vlSelf->fftmain__DOT__stage_64__DOT__imem[18]),36);
    bufp->fullQData(oldp+800,(vlSelf->fftmain__DOT__stage_64__DOT__imem[19]),36);
    bufp->fullQData(oldp+802,(vlSelf->fftmain__DOT__stage_64__DOT__imem[20]),36);
    bufp->fullQData(oldp+804,(vlSelf->fftmain__DOT__stage_64__DOT__imem[21]),36);
    bufp->fullQData(oldp+806,(vlSelf->fftmain__DOT__stage_64__DOT__imem[22]),36);
    bufp->fullQData(oldp+808,(vlSelf->fftmain__DOT__stage_64__DOT__imem[23]),36);
    bufp->fullQData(oldp+810,(vlSelf->fftmain__DOT__stage_64__DOT__imem[24]),36);
    bufp->fullQData(oldp+812,(vlSelf->fftmain__DOT__stage_64__DOT__imem[25]),36);
    bufp->fullQData(oldp+814,(vlSelf->fftmain__DOT__stage_64__DOT__imem[26]),36);
    bufp->fullQData(oldp+816,(vlSelf->fftmain__DOT__stage_64__DOT__imem[27]),36);
    bufp->fullQData(oldp+818,(vlSelf->fftmain__DOT__stage_64__DOT__imem[28]),36);
    bufp->fullQData(oldp+820,(vlSelf->fftmain__DOT__stage_64__DOT__imem[29]),36);
    bufp->fullQData(oldp+822,(vlSelf->fftmain__DOT__stage_64__DOT__imem[30]),36);
    bufp->fullQData(oldp+824,(vlSelf->fftmain__DOT__stage_64__DOT__imem[31]),36);
    bufp->fullCData(oldp+826,(vlSelf->fftmain__DOT__stage_64__DOT__oaddr),6);
    bufp->fullQData(oldp+827,(vlSelf->fftmain__DOT__stage_64__DOT__omem[0]),38);
    bufp->fullQData(oldp+829,(vlSelf->fftmain__DOT__stage_64__DOT__omem[1]),38);
    bufp->fullQData(oldp+831,(vlSelf->fftmain__DOT__stage_64__DOT__omem[2]),38);
    bufp->fullQData(oldp+833,(vlSelf->fftmain__DOT__stage_64__DOT__omem[3]),38);
    bufp->fullQData(oldp+835,(vlSelf->fftmain__DOT__stage_64__DOT__omem[4]),38);
    bufp->fullQData(oldp+837,(vlSelf->fftmain__DOT__stage_64__DOT__omem[5]),38);
    bufp->fullQData(oldp+839,(vlSelf->fftmain__DOT__stage_64__DOT__omem[6]),38);
    bufp->fullQData(oldp+841,(vlSelf->fftmain__DOT__stage_64__DOT__omem[7]),38);
    bufp->fullQData(oldp+843,(vlSelf->fftmain__DOT__stage_64__DOT__omem[8]),38);
    bufp->fullQData(oldp+845,(vlSelf->fftmain__DOT__stage_64__DOT__omem[9]),38);
    bufp->fullQData(oldp+847,(vlSelf->fftmain__DOT__stage_64__DOT__omem[10]),38);
    bufp->fullQData(oldp+849,(vlSelf->fftmain__DOT__stage_64__DOT__omem[11]),38);
    bufp->fullQData(oldp+851,(vlSelf->fftmain__DOT__stage_64__DOT__omem[12]),38);
    bufp->fullQData(oldp+853,(vlSelf->fftmain__DOT__stage_64__DOT__omem[13]),38);
    bufp->fullQData(oldp+855,(vlSelf->fftmain__DOT__stage_64__DOT__omem[14]),38);
    bufp->fullQData(oldp+857,(vlSelf->fftmain__DOT__stage_64__DOT__omem[15]),38);
    bufp->fullQData(oldp+859,(vlSelf->fftmain__DOT__stage_64__DOT__omem[16]),38);
    bufp->fullQData(oldp+861,(vlSelf->fftmain__DOT__stage_64__DOT__omem[17]),38);
    bufp->fullQData(oldp+863,(vlSelf->fftmain__DOT__stage_64__DOT__omem[18]),38);
    bufp->fullQData(oldp+865,(vlSelf->fftmain__DOT__stage_64__DOT__omem[19]),38);
    bufp->fullQData(oldp+867,(vlSelf->fftmain__DOT__stage_64__DOT__omem[20]),38);
    bufp->fullQData(oldp+869,(vlSelf->fftmain__DOT__stage_64__DOT__omem[21]),38);
    bufp->fullQData(oldp+871,(vlSelf->fftmain__DOT__stage_64__DOT__omem[22]),38);
    bufp->fullQData(oldp+873,(vlSelf->fftmain__DOT__stage_64__DOT__omem[23]),38);
    bufp->fullQData(oldp+875,(vlSelf->fftmain__DOT__stage_64__DOT__omem[24]),38);
    bufp->fullQData(oldp+877,(vlSelf->fftmain__DOT__stage_64__DOT__omem[25]),38);
    bufp->fullQData(oldp+879,(vlSelf->fftmain__DOT__stage_64__DOT__omem[26]),38);
    bufp->fullQData(oldp+881,(vlSelf->fftmain__DOT__stage_64__DOT__omem[27]),38);
    bufp->fullQData(oldp+883,(vlSelf->fftmain__DOT__stage_64__DOT__omem[28]),38);
    bufp->fullQData(oldp+885,(vlSelf->fftmain__DOT__stage_64__DOT__omem[29]),38);
    bufp->fullQData(oldp+887,(vlSelf->fftmain__DOT__stage_64__DOT__omem[30]),38);
    bufp->fullQData(oldp+889,(vlSelf->fftmain__DOT__stage_64__DOT__omem[31]),38);
    bufp->fullCData(oldp+891,(vlSelf->fftmain__DOT__stage_64__DOT__nxt_oaddr),5);
    bufp->fullQData(oldp+892,(vlSelf->fftmain__DOT__stage_64__DOT__pre_ovalue),38);
    bufp->fullQData(oldp+894,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
    bufp->fullQData(oldp+896,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
    bufp->fullBit(oldp+898,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+899,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+900,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
    bufp->fullIData(oldp+902,((0x3ffffU & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x12U)))),18);
    bufp->fullIData(oldp+903,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
    bufp->fullIData(oldp+904,((0x3ffffU & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x12U)))),18);
    bufp->fullIData(oldp+905,((0x3ffffU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
    bufp->fullIData(oldp+906,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
    bufp->fullIData(oldp+907,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
    bufp->fullIData(oldp+908,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
    bufp->fullIData(oldp+909,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
    bufp->fullIData(oldp+910,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
    bufp->fullIData(oldp+911,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
    bufp->fullQData(oldp+912,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
    bufp->fullQData(oldp+914,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
    bufp->fullQData(oldp+916,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
    bufp->fullQData(oldp+918,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
    bufp->fullQData(oldp+920,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
    bufp->fullQData(oldp+922,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
    bufp->fullQData(oldp+924,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
    bufp->fullBit(oldp+926,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x26U)))));
    bufp->fullQData(oldp+927,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x12U)))))))) 
                                << 0x27U) | (0x7fffffffffULL 
                                             & VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
    bufp->fullQData(oldp+929,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x25U)))))))) 
                                << 0x27U) | ((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(
                                                                        (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x13U))))) 
                                             << 0x14U))),41);
    bufp->fullQData(oldp+931,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
    bufp->fullQData(oldp+933,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
    bufp->fullQData(oldp+935,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
    bufp->fullIData(oldp+937,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
    bufp->fullIData(oldp+938,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
    bufp->fullIData(oldp+939,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
    bufp->fullIData(oldp+940,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
    bufp->fullIData(oldp+941,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
    bufp->fullIData(oldp+942,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
    bufp->fullIData(oldp+943,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
    bufp->fullIData(oldp+944,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
    bufp->fullIData(oldp+945,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
    bufp->fullIData(oldp+946,(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
    bufp->fullIData(oldp+947,((0x7ffffU & (IData)((0x7ffffULL 
                                                   & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                      >> 0x14U))))),19);
    bufp->fullIData(oldp+948,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x7ffffULL 
                                                      & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                         >> 0x14U)))))),19);
    bufp->fullBit(oldp+949,((1U & (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x14U))))));
    bufp->fullBit(oldp+950,((1U & (IData)((0xfffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x13U))))));
    bufp->fullIData(oldp+951,((0x7ffffU & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+952,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x13U))))),19);
    bufp->fullBit(oldp+953,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x13U)))));
    bufp->fullIData(oldp+954,((0x7ffffU & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x14U)))),19);
    bufp->fullIData(oldp+955,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x14U))))),19);
    bufp->fullBit(oldp+956,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+957,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x13U)))));
    bufp->fullIData(oldp+958,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),19);
    bufp->fullIData(oldp+959,((0x7ffffU & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x14U)))),19);
    bufp->fullIData(oldp+960,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x14U))))),19);
    bufp->fullBit(oldp+961,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+962,((1U & (IData)((vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x13U)))));
    bufp->fullIData(oldp+963,((0x7ffffU & (IData)(vlSelf->fftmain__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),19);
    bufp->fullBit(oldp+964,(vlSelf->fftmain__DOT__stage_8__DOT__wait_for_sync));
    bufp->fullQData(oldp+965,(vlSelf->fftmain__DOT__stage_8__DOT__ib_a),40);
    bufp->fullQData(oldp+967,(vlSelf->fftmain__DOT__stage_8__DOT__ib_b),40);
    bufp->fullQData(oldp+969,(vlSelf->fftmain__DOT__stage_8__DOT__ib_c),48);
    bufp->fullBit(oldp+971,(vlSelf->fftmain__DOT__stage_8__DOT__ib_sync));
    bufp->fullBit(oldp+972,(vlSelf->fftmain__DOT__stage_8__DOT__b_started));
    bufp->fullBit(oldp+973,(vlSelf->fftmain__DOT__stage_8__DOT__ob_sync));
    bufp->fullQData(oldp+974,((((QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
    bufp->fullQData(oldp+976,((((QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x14U) | (QData)((IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
    bufp->fullCData(oldp+978,(vlSelf->fftmain__DOT__stage_8__DOT__iaddr),3);
    bufp->fullQData(oldp+979,(vlSelf->fftmain__DOT__stage_8__DOT__imem[0]),40);
    bufp->fullQData(oldp+981,(vlSelf->fftmain__DOT__stage_8__DOT__imem[1]),40);
    bufp->fullQData(oldp+983,(vlSelf->fftmain__DOT__stage_8__DOT__imem[2]),40);
    bufp->fullQData(oldp+985,(vlSelf->fftmain__DOT__stage_8__DOT__imem[3]),40);
    bufp->fullCData(oldp+987,(vlSelf->fftmain__DOT__stage_8__DOT__oaddr),3);
    bufp->fullQData(oldp+988,(vlSelf->fftmain__DOT__stage_8__DOT__omem[0]),40);
    bufp->fullQData(oldp+990,(vlSelf->fftmain__DOT__stage_8__DOT__omem[1]),40);
    bufp->fullQData(oldp+992,(vlSelf->fftmain__DOT__stage_8__DOT__omem[2]),40);
    bufp->fullQData(oldp+994,(vlSelf->fftmain__DOT__stage_8__DOT__omem[3]),40);
    bufp->fullCData(oldp+996,(vlSelf->fftmain__DOT__stage_8__DOT__nxt_oaddr),2);
    bufp->fullQData(oldp+997,(vlSelf->fftmain__DOT__stage_8__DOT__pre_ovalue),40);
    bufp->fullQData(oldp+999,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left),40);
    bufp->fullQData(oldp+1001,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right),40);
    bufp->fullBit(oldp+1003,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1004,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1005,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef),48);
    bufp->fullIData(oldp+1007,((0xfffffU & (IData)(
                                                   (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                    >> 0x14U)))),20);
    bufp->fullIData(oldp+1008,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))),20);
    bufp->fullIData(oldp+1009,((0xfffffU & (IData)(
                                                   (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                    >> 0x14U)))),20);
    bufp->fullIData(oldp+1010,((0xfffffU & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right))),20);
    bufp->fullIData(oldp+1011,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),24);
    bufp->fullIData(oldp+1012,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),24);
    bufp->fullIData(oldp+1013,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),21);
    bufp->fullIData(oldp+1014,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),21);
    bufp->fullIData(oldp+1015,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),21);
    bufp->fullIData(oldp+1016,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),21);
    bufp->fullQData(oldp+1017,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv),43);
    bufp->fullQData(oldp+1019,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv),43);
    bufp->fullQData(oldp+1021,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),45);
    bufp->fullQData(oldp+1023,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),45);
    bufp->fullQData(oldp+1025,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),47);
    bufp->fullQData(oldp+1027,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one),47);
    bufp->fullQData(oldp+1029,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two),47);
    bufp->fullBit(oldp+1031,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x2aU)))));
    bufp->fullQData(oldp+1032,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x14U)))))))) 
                                 << 0x2bU) | (0x7ffffffffffULL 
                                              & VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U)))),45);
    bufp->fullQData(oldp+1034,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x29U)))))))) 
                                 << 0x2bU) | ((QData)((IData)(
                                                              (0x1fffffU 
                                                               & (IData)(
                                                                         (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x15U))))) 
                                              << 0x16U))),45);
    bufp->fullQData(oldp+1036,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved),43);
    bufp->fullQData(oldp+1038,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),47);
    bufp->fullQData(oldp+1040,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),47);
    bufp->fullIData(oldp+1042,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
    bufp->fullIData(oldp+1043,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
    bufp->fullIData(oldp+1044,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
    bufp->fullIData(oldp+1045,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
    bufp->fullIData(oldp+1046,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),24);
    bufp->fullIData(oldp+1047,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),24);
    bufp->fullIData(oldp+1048,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),21);
    bufp->fullIData(oldp+1049,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),21);
    bufp->fullIData(oldp+1050,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),25);
    bufp->fullIData(oldp+1051,(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),22);
    bufp->fullIData(oldp+1052,((0xfffffU & (IData)(
                                                   (0xfffffULL 
                                                    & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                       >> 0x17U))))),20);
    bufp->fullIData(oldp+1053,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (0xfffffULL 
                                                       & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                          >> 0x17U)))))),20);
    bufp->fullBit(oldp+1054,((1U & (IData)((0xfffffULL 
                                            & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+1055,((1U & (IData)((0x1fffffULL 
                                            & (VL_SHIFTL_QQI(43,43,32, vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                               >> 0x16U))))));
    bufp->fullIData(oldp+1056,((0xfffffU & (IData)(
                                                   (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                    >> 0x16U)))),20);
    bufp->fullIData(oldp+1057,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                       >> 0x16U))))),20);
    bufp->fullBit(oldp+1058,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+1059,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x15U)))));
    bufp->fullIData(oldp+1060,((0xfffffU & (IData)(
                                                   (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                    >> 0x17U)))),20);
    bufp->fullIData(oldp+1061,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                       >> 0x17U))))),20);
    bufp->fullBit(oldp+1062,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+1063,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1064,((0x3fffffU & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),22);
    bufp->fullIData(oldp+1065,((0xfffffU & (IData)(
                                                   (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                    >> 0x17U)))),20);
    bufp->fullIData(oldp+1066,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                       >> 0x17U))))),20);
    bufp->fullBit(oldp+1067,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+1068,((1U & (IData)((vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1069,((0x3fffffU & (IData)(vlSelf->fftmain__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),22);
    bufp->fullBit(oldp+1070,(vlSelf->i_clk));
    bufp->fullBit(oldp+1071,(vlSelf->i_reset));
    bufp->fullBit(oldp+1072,(vlSelf->i_ce));
    bufp->fullIData(oldp+1073,(vlSelf->i_sample),32);
    bufp->fullQData(oldp+1074,(vlSelf->o_result),42);
    bufp->fullBit(oldp+1076,(vlSelf->o_sync));
    bufp->fullBit(oldp+1077,(vlSelf->fftmain__DOT____Vcellinp__revstage__i_ce));
    bufp->fullBit(oldp+1078,(((IData)(vlSelf->fftmain__DOT__stage_128__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+1079,(((IData)(vlSelf->fftmain__DOT__stage_16__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+1080,(((IData)(vlSelf->fftmain__DOT__stage_256__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+1081,(((IData)(vlSelf->fftmain__DOT__stage_32__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+1082,((1U & (~ (IData)(vlSelf->i_reset)))));
    bufp->fullBit(oldp+1083,(((IData)(vlSelf->fftmain__DOT__stage_512__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+1084,(((IData)(vlSelf->fftmain__DOT__stage_64__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
    bufp->fullBit(oldp+1085,(((IData)(vlSelf->fftmain__DOT__stage_8__DOT__ib_sync) 
                              & (IData)(vlSelf->i_ce))));
}
